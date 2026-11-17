// Lean compiler output
// Module: Lasm.JS.Cloudflare.Workers
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Fetch
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSData;
lean_object* l_Lasm_JS_Web_Internal_arg___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Cloudflare_Support_declared___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSValue;
lean_object* l_Lasm_JS_Value_get___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_Web_instFromJSRequest;
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSFloat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_instFromJSOption___redArg(lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
lean_object* l_Lasm_JS_Web_instFromJSRecord___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
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
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_default = (const lean_object*)&l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_default_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode = (const lean_object*)&l_Lasm_JS_Cloudflare_instInhabitedTracingSpanStatusCode_value;
static const lean_string_object l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unset"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset = (const lean_object*)&l_Lasm_JS_Cloudflare_TracingSpanStatusCode_unset_value;
static const lean_string_object l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ok"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok = (const lean_object*)&l_Lasm_JS_Cloudflare_TracingSpanStatusCode_ok_value;
static const lean_string_object l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error = (const lean_object*)&l_Lasm_JS_Cloudflare_TracingSpanStatusCode_error_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2_spec__4(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_PagesFunction_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_PagesFunction_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq(lean_object* v_x_46_, lean_object* v_x_47_){
_start:
{
uint8_t v___x_48_; 
v___x_48_ = lean_string_dec_eq(v_x_46_, v_x_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq___boxed(lean_object* v_x_49_, lean_object* v_x_50_){
_start:
{
uint8_t v_res_51_; lean_object* v_r_52_; 
v_res_51_ = l_Lasm_JS_Cloudflare_instBEqTracingSpanStatusCode_beq(v_x_49_, v_x_50_);
lean_dec_ref(v_x_50_);
lean_dec_ref(v_x_49_);
v_r_52_ = lean_box(v_res_51_);
return v_r_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___redArg(lean_object* v_x_54_){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_55_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_56_ = lean_box(0);
v___x_57_ = lean_mk_string_unchecked("val", 3, 3);
v___x_58_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
v___x_59_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_56_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_61_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
v___x_62_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_59_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_unsigned_to_nat(7u);
v___x_64_ = lean_nat_to_int(v___x_63_);
v___x_65_ = l_String_quote(v_x_54_);
v___x_66_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_66_, 0, v___x_65_);
v___x_67_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_67_, 0, v___x_64_);
lean_ctor_set(v___x_67_, 1, v___x_66_);
v___x_68_ = 0;
v___x_69_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set_uint8(v___x_69_, sizeof(void*)*1, v___x_68_);
v___x_70_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_62_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_72_ = lean_string_length(v___x_55_);
v___x_73_ = lean_nat_to_int(v___x_72_);
v___x_74_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_55_);
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___x_70_);
v___x_76_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_71_);
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_75_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_73_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set_uint8(v___x_79_, sizeof(void*)*1, v___x_68_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr(lean_object* v_x_80_, lean_object* v_prec_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___redArg(v_x_80_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr___boxed(lean_object* v_x_83_, lean_object* v_prec_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lasm_JS_Cloudflare_instReprTracingSpanStatusCode_repr(v_x_83_, v_prec_84_);
lean_dec(v_prec_84_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatusCode___lam__0(lean_object* v_x_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_93_, 0, v_x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode___lam__0(lean_object* v_x_95_){
_start:
{
if (lean_obj_tag(v_x_95_) == 4)
{
lean_object* v_s_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
v_s_96_ = lean_ctor_get(v_x_95_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v_x_95_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_s_96_);
lean_dec(v_x_95_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set_tag(v___x_98_, 1);
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_s_96_);
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
lean_object* v___x_104_; lean_object* v___x_105_; 
lean_dec(v_x_95_);
v___x_104_ = lean_mk_string_unchecked("not a string", 12, 12);
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_104_);
return v___x_105_;
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode(void){
_start:
{
lean_object* v___f_106_; lean_object* v___x_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v___f_106_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSTracingSpanStatusCode___lam__0), 1, 0);
v___x_107_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanStatusCode", 40, 40);
v___x_108_ = 0;
v___x_109_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_109_, 0, v___f_106_);
lean_ctor_set(v___x_109_, 1, v___x_107_);
lean_ctor_set_uint8(v___x_109_, sizeof(void*)*2, v___x_108_);
return v___x_109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0(lean_object* v___x_110_, lean_object* v___f_111_, lean_object* v_d_112_){
_start:
{
lean_object* v_tags_113_; lean_object* v_pathPrefixes_114_; lean_object* v_purgeEverything_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_tags_113_ = lean_ctor_get(v_d_112_, 0);
lean_inc(v_tags_113_);
v_pathPrefixes_114_ = lean_ctor_get(v_d_112_, 1);
lean_inc(v_pathPrefixes_114_);
v_purgeEverything_115_ = lean_ctor_get(v_d_112_, 2);
lean_inc(v_purgeEverything_115_);
lean_dec_ref(v_d_112_);
v___x_116_ = lean_mk_string_unchecked("tags", 4, 4);
lean_inc_ref(v___x_110_);
v___x_117_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_110_, v_tags_113_);
v___x_118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_118_, 0, v___x_116_);
lean_ctor_set(v___x_118_, 1, v___x_117_);
v___x_119_ = lean_mk_string_unchecked("pathPrefixes", 12, 12);
v___x_120_ = l_Lasm_JS_Web_Internal_optional___redArg(v___x_110_, v_pathPrefixes_114_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_119_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
v___x_122_ = lean_mk_string_unchecked("purgeEverything", 15, 15);
v___x_123_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_111_, v_purgeEverything_115_);
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v___x_122_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = lean_unsigned_to_nat(3u);
v___x_126_ = lean_mk_empty_array_with_capacity(v___x_125_);
v___x_127_ = lean_array_push(v___x_126_, v___x_118_);
v___x_128_ = lean_array_push(v___x_127_, v___x_121_);
v___x_129_ = lean_array_push(v___x_128_, v___x_124_);
v___x_130_ = l_Lasm_JS_Web_Internal_fields(v___x_129_);
lean_dec_ref(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions(void){
_start:
{
lean_object* v___f_131_; lean_object* v___x_132_; lean_object* v___f_133_; lean_object* v___f_134_; 
v___f_131_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_132_ = l_Lasm_JS_instToJSArray___redArg(v___f_131_);
v___f_133_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_134_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSCachePurgeOptions___lam__0), 3, 2);
lean_closure_set(v___f_134_, 0, v___x_132_);
lean_closure_set(v___f_134_, 1, v___f_133_);
return v___f_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(lean_object* v___x_135_, lean_object* v___x_136_, lean_object* v_d_137_){
_start:
{
lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_138_ = lean_mk_string_unchecked("code", 4, 4);
v___x_139_ = l_Lasm_JS_readField___redArg(v___x_135_, v_d_137_, v___x_138_);
lean_dec_ref(v___x_138_);
if (lean_obj_tag(v___x_139_) == 0)
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec_ref(v___x_136_);
v_a_140_ = lean_ctor_get(v___x_139_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_139_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_139_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_139_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_a_148_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_139_, 1);
v___x_149_ = lean_mk_string_unchecked("message", 7, 7);
v___x_150_ = l_Lasm_JS_readField___redArg(v___x_136_, v_d_137_, v___x_149_);
lean_dec_ref(v___x_149_);
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_158_; 
lean_dec(v_a_148_);
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_158_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_158_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v___x_156_; 
if (v_isShared_154_ == 0)
{
v___x_156_ = v___x_153_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v_a_151_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_168_; 
v_a_159_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_168_ == 0)
{
v___x_161_ = v___x_150_;
v_isShared_162_ = v_isSharedCheck_168_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_150_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_168_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; double v___x_164_; lean_object* v___x_166_; 
v___x_163_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_163_, 0, v_a_159_);
v___x_164_ = lean_unbox_float(v_a_148_);
lean_dec(v_a_148_);
lean_ctor_set_float(v___x_163_, sizeof(void*)*1, v___x_164_);
if (v_isShared_162_ == 0)
{
lean_ctor_set(v___x_161_, 0, v___x_163_);
v___x_166_ = v___x_161_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_163_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed(lean_object* v___x_169_, lean_object* v___x_170_, lean_object* v_d_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0(v___x_169_, v___x_170_, v_d_171_);
lean_dec(v_d_171_);
return v_res_172_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeError(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___f_175_; lean_object* v___x_176_; uint8_t v___x_177_; lean_object* v___x_178_; 
v___x_173_ = l_Lasm_JS_instFromJSFloat;
v___x_174_ = l_Lasm_JS_instFromJSString;
v___f_175_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeError___lam__0___boxed), 3, 2);
lean_closure_set(v___f_175_, 0, v___x_173_);
lean_closure_set(v___f_175_, 1, v___x_174_);
v___x_176_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CachePurgeError", 34, 34);
v___x_177_ = 0;
v___x_178_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_178_, 0, v___f_175_);
lean_ctor_set(v___x_178_, 1, v___x_176_);
lean_ctor_set_uint8(v___x_178_, sizeof(void*)*2, v___x_177_);
return v___x_178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(lean_object* v___x_179_, lean_object* v___x_180_, lean_object* v_d_181_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = lean_mk_string_unchecked("success", 7, 7);
v___x_183_ = l_Lasm_JS_readField___redArg(v___x_179_, v_d_181_, v___x_182_);
lean_dec_ref(v___x_182_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec_ref(v___x_180_);
v_a_184_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_183_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
else
{
lean_object* v_a_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_a_192_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_183_, 1);
v___x_193_ = lean_mk_string_unchecked("errors", 6, 6);
v___x_194_ = l_Lasm_JS_readField___redArg(v___x_180_, v_d_181_, v___x_193_);
lean_dec_ref(v___x_193_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_202_; 
lean_dec(v_a_192_);
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_202_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_202_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_200_; 
if (v_isShared_198_ == 0)
{
v___x_200_ = v___x_197_;
goto v_reusejp_199_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_195_);
v___x_200_ = v_reuseFailAlloc_201_;
goto v_reusejp_199_;
}
v_reusejp_199_:
{
return v___x_200_;
}
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_212_; 
v_a_203_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_212_ == 0)
{
v___x_205_ = v___x_194_;
v_isShared_206_ = v_isSharedCheck_212_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_194_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_212_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_210_; 
v___x_207_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_207_, 0, v_a_203_);
v___x_208_ = lean_unbox(v_a_192_);
lean_dec(v_a_192_);
lean_ctor_set_uint8(v___x_207_, sizeof(void*)*1, v___x_208_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 0, v___x_207_);
v___x_210_ = v___x_205_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_207_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed(lean_object* v___x_213_, lean_object* v___x_214_, lean_object* v_d_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0(v___x_213_, v___x_214_, v_d_215_);
lean_dec(v_d_215_);
return v_res_216_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult(void){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___f_220_; lean_object* v___x_221_; uint8_t v___x_222_; lean_object* v___x_223_; 
v___x_217_ = l_Lasm_JS_instFromJSBool;
v___x_218_ = l_Lasm_JS_Cloudflare_instFromJSCachePurgeError;
v___x_219_ = l_Lasm_JS_instFromJSArray___redArg(v___x_218_);
v___f_220_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCachePurgeResult___lam__0___boxed), 3, 2);
lean_closure_set(v___f_220_, 0, v___x_217_);
lean_closure_set(v___f_220_, 1, v___x_219_);
v___x_221_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CachePurgeResult", 35, 35);
v___x_222_ = 0;
v___x_223_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_223_, 0, v___f_220_);
lean_ctor_set(v___x_223_, 1, v___x_221_);
lean_ctor_set_uint8(v___x_223_, sizeof(void*)*2, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0(lean_object* v___x_224_, lean_object* v_d_225_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_mk_string_unchecked("id", 2, 2);
lean_inc_ref(v___x_224_);
v___x_227_ = l_Lasm_JS_readField___redArg(v___x_224_, v_d_225_, v___x_226_);
lean_dec_ref(v___x_226_);
if (lean_obj_tag(v___x_227_) == 0)
{
lean_object* v_a_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_235_; 
lean_dec_ref(v___x_224_);
v_a_228_ = lean_ctor_get(v___x_227_, 0);
v_isSharedCheck_235_ = !lean_is_exclusive(v___x_227_);
if (v_isSharedCheck_235_ == 0)
{
v___x_230_ = v___x_227_;
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_a_228_);
lean_dec(v___x_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_235_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_233_; 
if (v_isShared_231_ == 0)
{
v___x_233_ = v___x_230_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_234_; 
v_reuseFailAlloc_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_234_, 0, v_a_228_);
v___x_233_ = v_reuseFailAlloc_234_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
return v___x_233_;
}
}
}
else
{
lean_object* v_a_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_a_236_ = lean_ctor_get(v___x_227_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_227_, 1);
v___x_237_ = lean_mk_string_unchecked("type", 4, 4);
v___x_238_ = l_Lasm_JS_readField___redArg(v___x_224_, v_d_225_, v___x_237_);
lean_dec_ref(v___x_237_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v___x_241_; uint8_t v_isShared_242_; uint8_t v_isSharedCheck_246_; 
lean_dec(v_a_236_);
v_a_239_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_246_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_246_ == 0)
{
v___x_241_ = v___x_238_;
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
else
{
lean_inc(v_a_239_);
lean_dec(v___x_238_);
v___x_241_ = lean_box(0);
v_isShared_242_ = v_isSharedCheck_246_;
goto v_resetjp_240_;
}
v_resetjp_240_:
{
lean_object* v___x_244_; 
if (v_isShared_242_ == 0)
{
v___x_244_ = v___x_241_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_a_239_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
else
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_255_; 
v_a_247_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_255_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_255_ == 0)
{
v___x_249_ = v___x_238_;
v_isShared_250_ = v_isSharedCheck_255_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_238_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_255_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
lean_object* v___x_251_; lean_object* v___x_253_; 
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v_a_236_);
lean_ctor_set(v___x_251_, 1, v_a_247_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_251_);
v___x_253_ = v___x_249_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0___boxed(lean_object* v___x_256_, lean_object* v_d_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0(v___x_256_, v_d_257_);
lean_dec(v_d_257_);
return v_res_258_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp(void){
_start:
{
lean_object* v___x_259_; lean_object* v___f_260_; lean_object* v___x_261_; uint8_t v___x_262_; lean_object* v___x_263_; 
v___x_259_ = l_Lasm_JS_instFromJSString;
v___f_260_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp___lam__0___boxed), 2, 1);
lean_closure_set(v___f_260_, 0, v___x_259_);
v___x_261_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentityIdp", 46, 46);
v___x_262_ = 0;
v___x_263_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_263_, 0, v___f_260_);
lean_ctor_set(v___x_263_, 1, v___x_261_);
lean_ctor_set_uint8(v___x_263_, sizeof(void*)*2, v___x_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0(lean_object* v___x_264_, lean_object* v_d_265_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_mk_string_unchecked("country", 7, 7);
v___x_267_ = l_Lasm_JS_readField___redArg(v___x_264_, v_d_265_, v___x_266_);
lean_dec_ref(v___x_266_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_275_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_275_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_275_ == 0)
{
v___x_270_ = v___x_267_;
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
else
{
lean_inc(v_a_268_);
lean_dec(v___x_267_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_275_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v___x_273_; 
if (v_isShared_271_ == 0)
{
v___x_273_ = v___x_270_;
goto v_reusejp_272_;
}
else
{
lean_object* v_reuseFailAlloc_274_; 
v_reuseFailAlloc_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_274_, 0, v_a_268_);
v___x_273_ = v_reuseFailAlloc_274_;
goto v_reusejp_272_;
}
v_reusejp_272_:
{
return v___x_273_;
}
}
}
else
{
lean_object* v_a_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_283_; 
v_a_276_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_283_ == 0)
{
v___x_278_ = v___x_267_;
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_a_276_);
lean_dec(v___x_267_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_283_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_281_; 
if (v_isShared_279_ == 0)
{
v___x_281_ = v___x_278_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_a_276_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0___boxed(lean_object* v___x_284_, lean_object* v_d_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0(v___x_284_, v_d_285_);
lean_dec(v_d_285_);
return v_res_286_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo(void){
_start:
{
lean_object* v___x_287_; lean_object* v___f_288_; lean_object* v___x_289_; uint8_t v___x_290_; lean_object* v___x_291_; 
v___x_287_ = l_Lasm_JS_instFromJSString;
v___f_288_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo___lam__0___boxed), 2, 1);
lean_closure_set(v___f_288_, 0, v___x_287_);
v___x_289_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentityGeo", 46, 46);
v___x_290_ = 0;
v___x_291_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_291_, 0, v___f_288_);
lean_ctor_set(v___x_291_, 1, v___x_289_);
lean_ctor_set_uint8(v___x_291_, sizeof(void*)*2, v___x_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0(lean_object* v___x_292_, lean_object* v___x_293_, lean_object* v_d_294_){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_mk_string_unchecked("id", 2, 2);
lean_inc_ref(v___x_292_);
v___x_296_ = l_Lasm_JS_readField___redArg(v___x_292_, v_d_294_, v___x_295_);
lean_dec_ref(v___x_295_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
lean_dec_ref(v___x_293_);
lean_dec_ref(v___x_292_);
v_a_297_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v___x_296_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_a_297_);
lean_dec(v___x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_a_297_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
else
{
lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_a_305_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_305_);
lean_dec_ref_known(v___x_296_, 1);
v___x_306_ = lean_mk_string_unchecked("name", 4, 4);
v___x_307_ = l_Lasm_JS_readField___redArg(v___x_292_, v_d_294_, v___x_306_);
lean_dec_ref(v___x_306_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec(v_a_305_);
lean_dec_ref(v___x_293_);
v_a_308_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_307_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_307_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_a_316_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_316_);
lean_dec_ref_known(v___x_307_, 1);
v___x_317_ = lean_mk_string_unchecked("email", 5, 5);
v___x_318_ = l_Lasm_JS_readField___redArg(v___x_293_, v_d_294_, v___x_317_);
lean_dec_ref(v___x_317_);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
lean_dec(v_a_316_);
lean_dec(v_a_305_);
v_a_319_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_318_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_318_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_335_; 
v_a_327_ = lean_ctor_get(v___x_318_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_318_);
if (v_isSharedCheck_335_ == 0)
{
v___x_329_ = v___x_318_;
v_isShared_330_ = v_isSharedCheck_335_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_318_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_335_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_331_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_331_, 0, v_a_305_);
lean_ctor_set(v___x_331_, 1, v_a_316_);
lean_ctor_set(v___x_331_, 2, v_a_327_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 0, v___x_331_);
v___x_333_ = v___x_329_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0___boxed(lean_object* v___x_336_, lean_object* v___x_337_, lean_object* v_d_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0(v___x_336_, v___x_337_, v_d_338_);
lean_dec(v_d_338_);
return v_res_339_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___f_342_; lean_object* v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; 
v___x_340_ = l_Lasm_JS_instFromJSString;
v___x_341_ = l_Lasm_JS_instFromJSOption___redArg(v___x_340_);
v___f_342_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups___lam__0___boxed), 3, 2);
lean_closure_set(v___f_342_, 0, v___x_340_);
lean_closure_set(v___f_342_, 1, v___x_341_);
v___x_343_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentityGroups", 49, 49);
v___x_344_ = 0;
v___x_345_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_345_, 0, v___f_342_);
lean_ctor_set(v___x_345_, 1, v___x_343_);
lean_ctor_set_uint8(v___x_345_, sizeof(void*)*2, v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0(lean_object* v___x_346_, lean_object* v___x_347_, lean_object* v___x_348_, lean_object* v___x_349_, lean_object* v___x_350_, lean_object* v___x_351_, lean_object* v___x_352_, lean_object* v___x_353_, lean_object* v_d_354_){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = lean_mk_string_unchecked("email", 5, 5);
lean_inc_ref(v___x_346_);
v___x_356_ = l_Lasm_JS_readField___redArg(v___x_346_, v_d_354_, v___x_355_);
lean_dec_ref(v___x_355_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_364_; 
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v___x_349_);
lean_dec_ref(v___x_348_);
lean_dec_ref(v___x_347_);
lean_dec_ref(v___x_346_);
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_364_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_364_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_362_; 
if (v_isShared_360_ == 0)
{
v___x_362_ = v___x_359_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v_a_357_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
else
{
lean_object* v_a_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_a_365_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_365_);
lean_dec_ref_known(v___x_356_, 1);
v___x_366_ = lean_mk_string_unchecked("name", 4, 4);
lean_inc_ref(v___x_346_);
v___x_367_ = l_Lasm_JS_readField___redArg(v___x_346_, v_d_354_, v___x_366_);
lean_dec_ref(v___x_366_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_375_; 
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v___x_349_);
lean_dec_ref(v___x_348_);
lean_dec_ref(v___x_347_);
lean_dec_ref(v___x_346_);
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
v___x_373_ = v___x_370_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v_a_368_);
v___x_373_ = v_reuseFailAlloc_374_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
return v___x_373_;
}
}
}
else
{
lean_object* v_a_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v_a_376_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_376_);
lean_dec_ref_known(v___x_367_, 1);
v___x_377_ = lean_mk_string_unchecked("user_uuid", 9, 9);
lean_inc_ref(v___x_346_);
v___x_378_ = l_Lasm_JS_readField___redArg(v___x_346_, v_d_354_, v___x_377_);
lean_dec_ref(v___x_377_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_386_; 
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v___x_349_);
lean_dec_ref(v___x_348_);
lean_dec_ref(v___x_347_);
lean_dec_ref(v___x_346_);
v_a_379_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_386_ == 0)
{
v___x_381_ = v___x_378_;
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_378_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_382_ == 0)
{
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_a_379_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
else
{
lean_object* v_a_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
v_a_387_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_387_);
lean_dec_ref_known(v___x_378_, 1);
v___x_388_ = lean_mk_string_unchecked("account_id", 10, 10);
lean_inc_ref(v___x_346_);
v___x_389_ = l_Lasm_JS_readField___redArg(v___x_346_, v_d_354_, v___x_388_);
lean_dec_ref(v___x_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v___x_349_);
lean_dec_ref(v___x_348_);
lean_dec_ref(v___x_347_);
lean_dec_ref(v___x_346_);
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v_a_398_ = lean_ctor_get(v___x_389_, 0);
lean_inc(v_a_398_);
lean_dec_ref_known(v___x_389_, 1);
v___x_399_ = lean_mk_string_unchecked("iat", 3, 3);
v___x_400_ = l_Lasm_JS_readField___redArg(v___x_347_, v_d_354_, v___x_399_);
lean_dec_ref(v___x_399_);
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_408_; 
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v___x_349_);
lean_dec_ref(v___x_348_);
lean_dec_ref(v___x_346_);
v_a_401_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_408_ == 0)
{
v___x_403_ = v___x_400_;
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
else
{
lean_inc(v_a_401_);
lean_dec(v___x_400_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_408_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v_a_401_);
v___x_406_ = v_reuseFailAlloc_407_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
return v___x_406_;
}
}
}
else
{
lean_object* v_a_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v_a_409_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_a_409_);
lean_dec_ref_known(v___x_400_, 1);
v___x_410_ = lean_mk_string_unchecked("ip", 2, 2);
v___x_411_ = l_Lasm_JS_readField___redArg(v___x_346_, v_d_354_, v___x_410_);
lean_dec_ref(v___x_410_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v___x_349_);
lean_dec_ref(v___x_348_);
v_a_412_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_411_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
else
{
lean_object* v_a_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_a_420_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_411_, 1);
v___x_421_ = lean_mk_string_unchecked("amr", 3, 3);
v___x_422_ = l_Lasm_JS_readField___redArg(v___x_348_, v_d_354_, v___x_421_);
lean_dec_ref(v___x_421_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_430_; 
lean_dec(v_a_420_);
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
lean_dec_ref(v___x_349_);
v_a_423_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_430_ == 0)
{
v___x_425_ = v___x_422_;
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_422_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_430_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v___x_428_; 
if (v_isShared_426_ == 0)
{
v___x_428_ = v___x_425_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_a_423_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v_a_431_ = lean_ctor_get(v___x_422_, 0);
lean_inc(v_a_431_);
lean_dec_ref_known(v___x_422_, 1);
v___x_432_ = lean_mk_string_unchecked("idp", 3, 3);
v___x_433_ = l_Lasm_JS_readField___redArg(v___x_349_, v_d_354_, v___x_432_);
lean_dec_ref(v___x_432_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
lean_dec(v_a_431_);
lean_dec(v_a_420_);
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
lean_dec_ref(v___x_350_);
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_a_442_ = lean_ctor_get(v___x_433_, 0);
lean_inc(v_a_442_);
lean_dec_ref_known(v___x_433_, 1);
v___x_443_ = lean_mk_string_unchecked("geo", 3, 3);
v___x_444_ = l_Lasm_JS_readField___redArg(v___x_350_, v_d_354_, v___x_443_);
lean_dec_ref(v___x_443_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
lean_dec(v_a_442_);
lean_dec(v_a_431_);
lean_dec(v_a_420_);
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v___x_351_);
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_452_;
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
lean_object* v_reuseFailAlloc_451_; 
v_reuseFailAlloc_451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_451_, 0, v_a_445_);
v___x_450_ = v_reuseFailAlloc_451_;
goto v_reusejp_449_;
}
v_reusejp_449_:
{
return v___x_450_;
}
}
}
else
{
lean_object* v_a_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v_a_453_ = lean_ctor_get(v___x_444_, 0);
lean_inc(v_a_453_);
lean_dec_ref_known(v___x_444_, 1);
v___x_454_ = lean_mk_string_unchecked("groups", 6, 6);
v___x_455_ = l_Lasm_JS_readField___redArg(v___x_351_, v_d_354_, v___x_454_);
lean_dec_ref(v___x_454_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec(v_a_453_);
lean_dec(v_a_442_);
lean_dec(v_a_431_);
lean_dec(v_a_420_);
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
lean_dec_ref(v___x_352_);
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_455_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_455_);
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
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
v_a_464_ = lean_ctor_get(v___x_455_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_455_, 1);
v___x_465_ = lean_mk_string_unchecked("devicePosture", 13, 13);
v___x_466_ = l_Lasm_JS_readField___redArg(v___x_352_, v_d_354_, v___x_465_);
lean_dec_ref(v___x_465_);
if (lean_obj_tag(v___x_466_) == 0)
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
lean_dec(v_a_464_);
lean_dec(v_a_453_);
lean_dec(v_a_442_);
lean_dec(v_a_431_);
lean_dec(v_a_420_);
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
v_a_467_ = lean_ctor_get(v___x_466_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_466_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_466_);
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
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v_a_475_ = lean_ctor_get(v___x_466_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_466_, 1);
v___x_476_ = lean_mk_string_unchecked("is_warp", 7, 7);
lean_inc_ref(v___x_353_);
v___x_477_ = l_Lasm_JS_readField___redArg(v___x_353_, v_d_354_, v___x_476_);
lean_dec_ref(v___x_476_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_485_; 
lean_dec(v_a_475_);
lean_dec(v_a_464_);
lean_dec(v_a_453_);
lean_dec(v_a_442_);
lean_dec(v_a_431_);
lean_dec(v_a_420_);
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
lean_dec_ref(v___x_353_);
v_a_478_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_485_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_485_ == 0)
{
v___x_480_ = v___x_477_;
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_477_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_485_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_483_; 
if (v_isShared_481_ == 0)
{
v___x_483_ = v___x_480_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_a_478_);
v___x_483_ = v_reuseFailAlloc_484_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
return v___x_483_;
}
}
}
else
{
lean_object* v_a_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v_a_486_ = lean_ctor_get(v___x_477_, 0);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_477_, 1);
v___x_487_ = lean_mk_string_unchecked("is_gateway", 10, 10);
v___x_488_ = l_Lasm_JS_readField___redArg(v___x_353_, v_d_354_, v___x_487_);
lean_dec_ref(v___x_487_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec(v_a_486_);
lean_dec(v_a_475_);
lean_dec(v_a_464_);
lean_dec(v_a_453_);
lean_dec(v_a_442_);
lean_dec(v_a_431_);
lean_dec(v_a_420_);
lean_dec(v_a_409_);
lean_dec(v_a_398_);
lean_dec(v_a_387_);
lean_dec(v_a_376_);
lean_dec(v_a_365_);
v_a_489_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_488_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_505_; 
v_a_497_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_505_ == 0)
{
v___x_499_ = v___x_488_;
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_488_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_505_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_501_; lean_object* v___x_503_; 
v___x_501_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v___x_501_, 0, v_a_365_);
lean_ctor_set(v___x_501_, 1, v_a_376_);
lean_ctor_set(v___x_501_, 2, v_a_387_);
lean_ctor_set(v___x_501_, 3, v_a_398_);
lean_ctor_set(v___x_501_, 4, v_a_409_);
lean_ctor_set(v___x_501_, 5, v_a_420_);
lean_ctor_set(v___x_501_, 6, v_a_431_);
lean_ctor_set(v___x_501_, 7, v_a_442_);
lean_ctor_set(v___x_501_, 8, v_a_453_);
lean_ctor_set(v___x_501_, 9, v_a_464_);
lean_ctor_set(v___x_501_, 10, v_a_475_);
lean_ctor_set(v___x_501_, 11, v_a_486_);
lean_ctor_set(v___x_501_, 12, v_a_497_);
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_501_);
v___x_503_ = v___x_499_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0___boxed(lean_object* v___x_506_, lean_object* v___x_507_, lean_object* v___x_508_, lean_object* v___x_509_, lean_object* v___x_510_, lean_object* v___x_511_, lean_object* v___x_512_, lean_object* v___x_513_, lean_object* v_d_514_){
_start:
{
lean_object* v_res_515_; 
v_res_515_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0(v___x_506_, v___x_507_, v___x_508_, v___x_509_, v___x_510_, v___x_511_, v___x_512_, v___x_513_, v_d_514_);
lean_dec(v_d_514_);
return v_res_515_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___f_534_; lean_object* v___x_535_; uint8_t v___x_536_; lean_object* v___x_537_; 
v___x_516_ = l_Lasm_JS_instFromJSString;
v___x_517_ = l_Lasm_JS_instFromJSOption___redArg(v___x_516_);
v___x_518_ = l_Lasm_JS_instFromJSFloat;
v___x_519_ = l_Lasm_JS_instFromJSOption___redArg(v___x_518_);
v___x_520_ = l_Lasm_JS_instFromJSArray___redArg(v___x_516_);
v___x_521_ = l_Lasm_JS_instFromJSOption___redArg(v___x_520_);
v___x_522_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityIdp;
v___x_523_ = l_Lasm_JS_instFromJSOption___redArg(v___x_522_);
v___x_524_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGeo;
v___x_525_ = l_Lasm_JS_instFromJSOption___redArg(v___x_524_);
v___x_526_ = l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentityGroups;
v___x_527_ = l_Lasm_JS_instFromJSArray___redArg(v___x_526_);
v___x_528_ = l_Lasm_JS_instFromJSOption___redArg(v___x_527_);
v___x_529_ = l_Lasm_JS_instFromJSData;
v___x_530_ = l_Lasm_JS_Web_instFromJSRecord___redArg(v___x_529_);
v___x_531_ = l_Lasm_JS_instFromJSOption___redArg(v___x_530_);
v___x_532_ = l_Lasm_JS_instFromJSBool;
v___x_533_ = l_Lasm_JS_instFromJSOption___redArg(v___x_532_);
v___f_534_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSCloudflareAccessIdentity___lam__0___boxed), 9, 8);
lean_closure_set(v___f_534_, 0, v___x_517_);
lean_closure_set(v___f_534_, 1, v___x_519_);
lean_closure_set(v___f_534_, 2, v___x_521_);
lean_closure_set(v___f_534_, 3, v___x_523_);
lean_closure_set(v___f_534_, 4, v___x_525_);
lean_closure_set(v___f_534_, 5, v___x_528_);
lean_closure_set(v___f_534_, 6, v___x_531_);
lean_closure_set(v___f_534_, 7, v___x_533_);
v___x_535_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.CloudflareAccessIdentity", 43, 43);
v___x_536_ = 0;
v___x_537_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_537_, 0, v___f_534_);
lean_ctor_set(v___x_537_, 1, v___x_535_);
lean_ctor_set_uint8(v___x_537_, sizeof(void*)*2, v___x_536_);
return v___x_537_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingEnterSpanCallback(void){
_start:
{
lean_object* v___f_539_; lean_object* v___x_540_; uint8_t v___x_541_; lean_object* v___x_542_; 
v___f_539_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_540_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingEnterSpanCallback", 43, 43);
v___x_541_ = 0;
v___x_542_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_542_, 0, v___f_539_);
lean_ctor_set(v___x_542_, 1, v___x_540_);
lean_ctor_set_uint8(v___x_542_, sizeof(void*)*2, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0(lean_object* v_x_543_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_545_, 0, v_x_543_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0___boxed(lean_object* v_x_546_, lean_object* v___y_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0(v_x_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1(lean_object* v_f_549_, lean_object* v_a_550_, lean_object* v___f_551_, lean_object* v_x_552_){
_start:
{
if (lean_obj_tag(v_x_552_) == 0)
{
lean_object* v___x_554_; 
lean_dec_ref(v___f_551_);
lean_dec(v_a_550_);
lean_dec_ref(v_f_549_);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v_x_552_);
return v___x_554_;
}
else
{
lean_object* v_a_555_; lean_object* v___x_556_; uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v_a_555_ = lean_ctor_get(v_x_552_, 0);
lean_inc(v_a_555_);
lean_dec_ref_known(v_x_552_, 1);
v___x_556_ = lean_unsigned_to_nat(0u);
v___x_557_ = 0;
v___x_558_ = lean_apply_3(v_f_549_, v_a_550_, v_a_555_, lean_box(0));
v___x_559_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_556_, v___x_557_, v___x_558_, v___f_551_);
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1___boxed(lean_object* v_f_560_, lean_object* v_a_561_, lean_object* v___f_562_, lean_object* v_x_563_, lean_object* v___y_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1(v_f_560_, v_a_561_, v___f_562_, v_x_563_);
return v_res_565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(lean_object* v_args_566_, lean_object* v_i_567_){
_start:
{
lean_object* v___x_569_; uint8_t v___x_570_; 
v___x_569_ = lean_array_get_size(v_args_566_);
v___x_570_ = lean_nat_dec_lt(v_i_567_, v___x_569_);
if (v___x_570_ == 0)
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_box(0);
v___x_572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_572_, 0, v___x_571_);
return v___x_572_;
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = lean_array_fget_borrowed(v_args_566_, v_i_567_);
lean_inc(v___x_573_);
v___x_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0___boxed(lean_object* v_args_575_, lean_object* v_i_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(v_args_575_, v_i_576_);
lean_dec(v_i_576_);
lean_dec_ref(v_args_575_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2(lean_object* v_f_579_, lean_object* v___f_580_, lean_object* v_args_581_, lean_object* v_x_582_){
_start:
{
if (lean_obj_tag(v_x_582_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_592_; 
lean_dec_ref(v___f_580_);
lean_dec_ref(v_f_579_);
v_a_584_ = lean_ctor_get(v_x_582_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v_x_582_);
if (v_isSharedCheck_592_ == 0)
{
v___x_586_ = v_x_582_;
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v_x_582_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_591_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
lean_object* v___x_590_; 
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
}
}
else
{
lean_object* v_a_593_; lean_object* v___x_595_; uint8_t v_isShared_596_; uint8_t v_isSharedCheck_610_; 
v_a_593_ = lean_ctor_get(v_x_582_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v_x_582_);
if (v_isSharedCheck_610_ == 0)
{
v___x_595_ = v_x_582_;
v_isShared_596_ = v_isSharedCheck_610_;
goto v_resetjp_594_;
}
else
{
lean_inc(v_a_593_);
lean_dec(v_x_582_);
v___x_595_ = lean_box(0);
v_isShared_596_ = v_isSharedCheck_610_;
goto v_resetjp_594_;
}
v_resetjp_594_:
{
lean_object* v___f_597_; lean_object* v___x_598_; lean_object* v___x_599_; uint8_t v___x_600_; lean_object* v_val_602_; lean_object* v___x_605_; lean_object* v_a_606_; lean_object* v___x_608_; 
v___f_597_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_597_, 0, v_f_579_);
lean_closure_set(v___f_597_, 1, v_a_593_);
lean_closure_set(v___f_597_, 2, v___f_580_);
v___x_598_ = lean_unsigned_to_nat(1u);
v___x_599_ = lean_unsigned_to_nat(0u);
v___x_600_ = 0;
v___x_605_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(v_args_581_, v___x_598_);
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref(v___x_605_);
if (v_isShared_596_ == 0)
{
lean_ctor_set(v___x_595_, 0, v_a_606_);
v___x_608_ = v___x_595_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v___jp_601_:
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_603_, 0, v_val_602_);
v___x_604_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_599_, v___x_600_, v___x_603_, v___f_597_);
return v___x_604_;
}
v_reusejp_607_:
{
v_val_602_ = v___x_608_;
goto v___jp_601_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2___boxed(lean_object* v_f_611_, lean_object* v___f_612_, lean_object* v_args_613_, lean_object* v_x_614_, lean_object* v___y_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2(v_f_611_, v___f_612_, v_args_613_, v_x_614_);
lean_dec_ref(v_args_613_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1_spec__2(lean_object* v_context_617_, lean_object* v_d_618_){
_start:
{
lean_object* v___y_621_; lean_object* v___y_622_; 
if (lean_obj_tag(v_d_618_) == 9)
{
lean_object* v_value_626_; lean_object* v___x_627_; 
v_value_626_ = lean_ctor_get(v_d_618_, 0);
lean_inc(v_value_626_);
lean_dec_ref_known(v_d_618_, 2);
v___x_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_627_, 0, v_value_626_);
return v___x_627_;
}
else
{
lean_object* v___x_628_; lean_object* v_received_630_; 
v___x_628_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_618_) == 9)
{
lean_object* v_value_646_; lean_object* v_description_647_; uint8_t v___x_648_; 
v_value_646_ = lean_ctor_get(v_d_618_, 0);
v_description_647_ = lean_ctor_get(v_d_618_, 1);
v___x_648_ = lean_string_dec_eq(v_description_647_, v___x_628_);
if (v___x_648_ == 0)
{
goto v___jp_644_;
}
else
{
uint32_t v___x_649_; uint64_t v___x_650_; lean_object* v___x_651_; uint32_t v___x_652_; lean_object* v___x_653_; 
lean_inc_n(v_value_646_, 2);
lean_dec_ref_known(v_d_618_, 2);
v___x_649_ = 206;
v___x_650_ = 0ULL;
lean_inc_ref(v___x_628_);
v___x_651_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_651_, 0, v_value_646_);
lean_ctor_set(v___x_651_, 1, v___x_628_);
v___x_652_ = lasm_js_value_handle(v_value_646_);
lean_dec(v_value_646_);
v___x_653_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_649_, v___x_650_, v___x_651_, v___x_652_);
lean_dec_ref_known(v___x_651_, 2);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; uint8_t v___x_655_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_653_, 1);
v___x_655_ = lean_string_validate_utf8(v_a_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
lean_dec(v_a_654_);
v___x_656_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_657_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_658_ = lean_unsigned_to_nat(193u);
v___x_659_ = lean_unsigned_to_nat(46u);
v___x_660_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_661_ = l_mkPanicMessageWithDecl(v___x_656_, v___x_657_, v___x_658_, v___x_659_, v___x_660_);
lean_dec_ref(v___x_660_);
lean_dec_ref(v___x_657_);
lean_dec_ref(v___x_656_);
v___x_662_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_661_);
v_received_630_ = v___x_662_;
goto v___jp_629_;
}
else
{
lean_object* v___x_663_; 
v___x_663_ = lean_string_from_utf8_unchecked(v_a_654_);
v_received_630_ = v___x_663_;
goto v___jp_629_;
}
}
else
{
lean_object* v___x_664_; 
lean_dec_ref_known(v___x_653_, 1);
v___x_664_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_630_ = v___x_664_;
goto v___jp_629_;
}
}
}
else
{
goto v___jp_644_;
}
v___jp_629_:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v___x_631_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_632_ = lean_string_append(v___x_631_, v_context_617_);
v___x_633_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
lean_dec_ref(v___x_633_);
v___x_635_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.Span", 23, 23);
v___x_636_ = lean_string_append(v___x_634_, v___x_635_);
lean_dec_ref(v___x_635_);
v___x_637_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_638_ = lean_string_append(v___x_636_, v___x_637_);
lean_dec_ref(v___x_637_);
v___x_639_ = lean_string_append(v___x_638_, v_received_630_);
lean_dec_ref(v_received_630_);
v___x_640_ = lean_string_utf8_byte_size(v___x_628_);
v___x_641_ = lean_unsigned_to_nat(0u);
v___x_642_ = lean_nat_dec_eq(v___x_640_, v___x_641_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; 
lean_dec_ref(v___x_628_);
v___x_643_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_621_ = v___x_639_;
v___y_622_ = v___x_643_;
goto v___jp_620_;
}
else
{
v___y_621_ = v___x_639_;
v___y_622_ = v___x_628_;
goto v___jp_620_;
}
}
v___jp_644_:
{
lean_object* v___x_645_; 
v___x_645_ = l_Lasm_JS_Data_describe(v_d_618_);
v_received_630_ = v___x_645_;
goto v___jp_629_;
}
}
v___jp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_623_ = lean_string_append(v___y_621_, v___y_622_);
v___x_624_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
v___x_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1_spec__2___boxed(lean_object* v_context_665_, lean_object* v_d_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1_spec__2(v_context_665_, v_d_666_);
lean_dec_ref(v_context_665_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1(lean_object* v_args_669_, lean_object* v_i_670_){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_672_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_673_ = lean_unsigned_to_nat(1u);
v___x_674_ = lean_nat_add(v_i_670_, v___x_673_);
v___x_675_ = l_Nat_reprFast(v___x_674_);
v___x_676_ = lean_string_append(v___x_672_, v___x_675_);
lean_dec_ref(v___x_675_);
v___x_677_ = lean_array_get_size(v_args_669_);
v___x_678_ = lean_nat_dec_lt(v_i_670_, v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_box(0);
v___x_680_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1_spec__2(v___x_676_, v___x_679_);
lean_dec_ref(v___x_676_);
return v___x_680_;
}
else
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_array_fget_borrowed(v_args_669_, v_i_670_);
lean_inc(v___x_681_);
v___x_682_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1_spec__2(v___x_676_, v___x_681_);
lean_dec_ref(v___x_676_);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1___boxed(lean_object* v_args_683_, lean_object* v_i_684_, lean_object* v_a_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1(v_args_683_, v_i_684_);
lean_dec(v_i_684_);
lean_dec_ref(v_args_683_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3(lean_object* v_f_687_, lean_object* v___f_688_, lean_object* v_args_689_){
_start:
{
lean_object* v___f_691_; lean_object* v___x_692_; uint8_t v___x_693_; lean_object* v_val_695_; lean_object* v___x_698_; 
lean_inc_ref(v_args_689_);
v___f_691_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_691_, 0, v_f_687_);
lean_closure_set(v___f_691_, 1, v___f_688_);
lean_closure_set(v___f_691_, 2, v_args_689_);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = 0;
v___x_698_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1(v_args_689_, v___x_692_);
lean_dec_ref(v_args_689_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
lean_ctor_set_tag(v___x_701_, 1);
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
v_val_695_ = v___x_704_;
goto v___jp_694_;
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_714_; 
v_a_707_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_714_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_714_ == 0)
{
v___x_709_ = v___x_698_;
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_a_707_);
lean_dec(v___x_698_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_714_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set_tag(v___x_709_, 0);
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_a_707_);
v___x_712_ = v_reuseFailAlloc_713_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
v_val_695_ = v___x_712_;
goto v___jp_694_;
}
}
}
v___jp_694_:
{
lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v_val_695_);
v___x_697_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_692_, v___x_693_, v___x_696_, v___f_691_);
return v___x_697_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed(lean_object* v_f_715_, lean_object* v___f_716_, lean_object* v_args_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3(v_f_715_, v___f_716_, v_args_717_);
return v_res_719_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2_spec__4(uint8_t v_await_720_, uint64_t v_extra_721_){
_start:
{
uint8_t v___x_722_; uint64_t v___x_723_; uint64_t v___y_725_; 
v___x_722_ = 1;
v___x_723_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_722_);
if (v_await_720_ == 0)
{
uint64_t v___x_728_; 
v___x_728_ = 0ULL;
v___y_725_ = v___x_728_;
goto v___jp_724_;
}
else
{
uint64_t v___x_729_; 
v___x_729_ = 2ULL;
v___y_725_ = v___x_729_;
goto v___jp_724_;
}
v___jp_724_:
{
uint64_t v___x_726_; uint64_t v___x_727_; 
v___x_726_ = lean_uint64_lor(v___x_723_, v___y_725_);
v___x_727_ = lean_uint64_lor(v___x_726_, v_extra_721_);
return v___x_727_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2_spec__4___boxed(lean_object* v_await_730_, lean_object* v_extra_731_){
_start:
{
uint8_t v_await_boxed_732_; uint64_t v_extra_boxed_733_; uint64_t v_res_734_; lean_object* v_r_735_; 
v_await_boxed_732_ = lean_unbox(v_await_730_);
v_extra_boxed_733_ = lean_unbox_uint64(v_extra_731_);
lean_dec_ref(v_extra_731_);
v_res_734_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2_spec__4(v_await_boxed_732_, v_extra_boxed_733_);
v_r_735_ = lean_box_uint64(v_res_734_);
return v_r_735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(lean_object* v_o_736_, lean_object* v_name_737_, lean_object* v_args_738_){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; uint64_t v___x_744_; uint64_t v___x_745_; lean_object* v___x_746_; 
v___x_740_ = lean_mk_string_unchecked("", 0, 0);
v___x_741_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_741_, 0, v_o_736_);
lean_ctor_set(v___x_741_, 1, v___x_740_);
lean_inc_ref(v_name_737_);
v___x_742_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_742_, 0, v_name_737_);
v___x_743_ = 0;
v___x_744_ = 8ULL;
v___x_745_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2_spec__4(v___x_743_, v___x_744_);
v___x_746_ = l_Lasm_JS_Value_invokeRaw(v___x_741_, v___x_742_, v_args_738_, v___x_745_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
v___x_748_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_749_ = lean_string_append(v___x_748_, v_name_737_);
lean_dec_ref(v_name_737_);
v___x_750_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_749_, v_a_747_);
lean_dec(v_a_747_);
lean_dec_ref(v___x_749_);
return v___x_750_;
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v_name_737_);
v_a_751_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_746_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_746_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2___boxed(lean_object* v_o_759_, lean_object* v_name_760_, lean_object* v_args_761_, lean_object* v_a_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_o_759_, v_name_760_, v_args_761_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn(lean_object* v_f_764_){
_start:
{
lean_object* v___f_766_; lean_object* v___f_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___f_766_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0___boxed), 2, 0);
v___f_767_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_767_, 0, v_f_764_);
lean_closure_set(v___f_767_, 1, v___f_766_);
v___x_768_ = lean_unsigned_to_nat(0u);
v___x_769_ = l_Lasm_JS_Function_ofFn(v___f_767_, v___x_768_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v___x_771_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_769_, 1);
v___x_771_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_774_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_772_, v___x_773_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___y_783_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_774_, 1);
v___x_776_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_777_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_770_);
v___x_778_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_778_, 0, v_a_770_);
lean_ctor_set(v___x_778_, 1, v___x_777_);
v___x_779_ = lean_mk_string_unchecked("length", 6, 6);
v___x_780_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_780_, 0, v___x_779_);
v___x_781_ = lean_mk_string_unchecked("value", 5, 5);
v___x_810_ = lean_unsigned_to_nat(2u);
v___x_811_ = lean_nat_to_int(v___x_810_);
v___x_812_ = lean_nat_abs(v___x_811_);
v___x_813_ = lean_cstr_to_nat("9007199254740991");
v___x_814_ = lean_nat_dec_le(v___x_812_, v___x_813_);
lean_dec(v___x_812_);
if (v___x_814_ == 0)
{
lean_object* v___x_815_; 
v___x_815_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_811_);
v___y_783_ = v___x_815_;
goto v___jp_782_;
}
else
{
double v___x_816_; lean_object* v___x_817_; 
v___x_816_ = l_Float_ofInt(v___x_811_);
lean_dec(v___x_811_);
v___x_817_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_817_, 0, v___x_816_);
v___y_783_ = v___x_817_;
goto v___jp_782_;
}
v___jp_782_:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___x_784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_784_, 0, v___x_781_);
lean_ctor_set(v___x_784_, 1, v___y_783_);
v___x_785_ = lean_box(0);
v___x_786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_784_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
v___x_787_ = l_Lasm_JS_obj(v___x_786_);
v___x_788_ = lean_unsigned_to_nat(3u);
v___x_789_ = lean_mk_empty_array_with_capacity(v___x_788_);
v___x_790_ = lean_array_push(v___x_789_, v___x_778_);
v___x_791_ = lean_array_push(v___x_790_, v___x_780_);
v___x_792_ = lean_array_push(v___x_791_, v___x_787_);
v___x_793_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_775_, v___x_776_, v___x_792_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_800_; 
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_800_ == 0)
{
lean_object* v_unused_801_; 
v_unused_801_ = lean_ctor_get(v___x_793_, 0);
lean_dec(v_unused_801_);
v___x_795_ = v___x_793_;
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
else
{
lean_dec(v___x_793_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_800_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_798_; 
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 0, v_a_770_);
v___x_798_ = v___x_795_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v_a_770_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
else
{
lean_object* v_a_802_; lean_object* v___x_804_; uint8_t v_isShared_805_; uint8_t v_isSharedCheck_809_; 
lean_dec(v_a_770_);
v_a_802_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_809_ == 0)
{
v___x_804_ = v___x_793_;
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
else
{
lean_inc(v_a_802_);
lean_dec(v___x_793_);
v___x_804_ = lean_box(0);
v_isShared_805_ = v_isSharedCheck_809_;
goto v_resetjp_803_;
}
v_resetjp_803_:
{
lean_object* v___x_807_; 
if (v_isShared_805_ == 0)
{
v___x_807_ = v___x_804_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v_a_802_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
lean_dec(v_a_770_);
v_a_818_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_774_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_774_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_833_; 
lean_dec(v_a_770_);
v_a_826_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_833_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_833_ == 0)
{
v___x_828_ = v___x_771_;
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_771_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_833_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_831_; 
if (v_isShared_829_ == 0)
{
v___x_831_ = v___x_828_;
goto v_reusejp_830_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v_a_826_);
v___x_831_ = v_reuseFailAlloc_832_;
goto v_reusejp_830_;
}
v_reusejp_830_:
{
return v___x_831_;
}
}
}
}
else
{
lean_object* v_a_834_; lean_object* v___x_836_; uint8_t v_isShared_837_; uint8_t v_isSharedCheck_841_; 
v_a_834_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_841_ == 0)
{
v___x_836_ = v___x_769_;
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
else
{
lean_inc(v_a_834_);
lean_dec(v___x_769_);
v___x_836_ = lean_box(0);
v_isShared_837_ = v_isSharedCheck_841_;
goto v_resetjp_835_;
}
v_resetjp_835_:
{
lean_object* v___x_839_; 
if (v_isShared_837_ == 0)
{
v___x_839_ = v___x_836_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v_a_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___boxed(lean_object* v_f_842_, lean_object* v_a_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn(v_f_842_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___redArg(lean_object* v_d_845_){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v_d_845_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___redArg___boxed(lean_object* v_d_848_, lean_object* v_a_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___redArg(v_d_848_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(lean_object* v_context_851_, lean_object* v_d_852_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v_d_852_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_855_, lean_object* v_d_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0_spec__0(v_context_855_, v_d_856_);
lean_dec_ref(v_context_855_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0(lean_object* v_f_859_, lean_object* v_args_860_){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__1(v_args_860_, v___x_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v_a_867_; lean_object* v___x_868_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = lean_unsigned_to_nat(1u);
v___x_866_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__0(v_args_860_, v___x_865_);
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref(v___x_866_);
v___x_868_ = lean_apply_3(v_f_859_, v_a_864_, v_a_867_, lean_box(0));
return v___x_868_;
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
lean_dec_ref(v_f_859_);
v_a_869_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_863_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_863_);
v___x_871_ = lean_box(0);
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
v_resetjp_870_:
{
lean_object* v___x_874_; 
if (v_isShared_872_ == 0)
{
v___x_874_ = v___x_871_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v_a_869_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_877_, lean_object* v_args_878_, lean_object* v___y_879_){
_start:
{
lean_object* v_res_880_; 
v_res_880_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0(v_f_877_, v_args_878_);
lean_dec_ref(v_args_878_);
return v_res_880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn(lean_object* v_f_881_){
_start:
{
lean_object* v___f_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___f_883_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_883_, 0, v_f_881_);
v___x_884_ = lean_unsigned_to_nat(0u);
v___x_885_ = l_Lasm_JS_Function_ofSyncFn(v___f_883_, v___x_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref_known(v___x_887_, 1);
v___x_889_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_890_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_888_, v___x_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___y_899_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v___x_890_, 1);
v___x_892_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_893_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_886_);
v___x_894_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_894_, 0, v_a_886_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = lean_mk_string_unchecked("length", 6, 6);
v___x_896_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_896_, 0, v___x_895_);
v___x_897_ = lean_mk_string_unchecked("value", 5, 5);
v___x_926_ = lean_unsigned_to_nat(2u);
v___x_927_ = lean_nat_to_int(v___x_926_);
v___x_928_ = lean_nat_abs(v___x_927_);
v___x_929_ = lean_cstr_to_nat("9007199254740991");
v___x_930_ = lean_nat_dec_le(v___x_928_, v___x_929_);
lean_dec(v___x_928_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; 
v___x_931_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_931_, 0, v___x_927_);
v___y_899_ = v___x_931_;
goto v___jp_898_;
}
else
{
double v___x_932_; lean_object* v___x_933_; 
v___x_932_ = l_Float_ofInt(v___x_927_);
lean_dec(v___x_927_);
v___x_933_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_933_, 0, v___x_932_);
v___y_899_ = v___x_933_;
goto v___jp_898_;
}
v___jp_898_:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_897_);
lean_ctor_set(v___x_900_, 1, v___y_899_);
v___x_901_ = lean_box(0);
v___x_902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = l_Lasm_JS_obj(v___x_902_);
v___x_904_ = lean_unsigned_to_nat(3u);
v___x_905_ = lean_mk_empty_array_with_capacity(v___x_904_);
v___x_906_ = lean_array_push(v___x_905_, v___x_894_);
v___x_907_ = lean_array_push(v___x_906_, v___x_896_);
v___x_908_ = lean_array_push(v___x_907_, v___x_903_);
v___x_909_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_891_, v___x_892_, v___x_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_916_ == 0)
{
lean_object* v_unused_917_; 
v_unused_917_ = lean_ctor_get(v___x_909_, 0);
lean_dec(v_unused_917_);
v___x_911_ = v___x_909_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_dec(v___x_909_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set(v___x_911_, 0, v_a_886_);
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_886_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v_a_886_);
v_a_918_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_909_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_909_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_886_);
v_a_934_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_890_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_890_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_a_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec(v_a_886_);
v_a_942_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_887_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_887_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
v_a_950_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_885_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_885_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___boxed(lean_object* v_f_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn(v_f_958_);
return v_res_960_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingStartActiveSpanCallback(void){
_start:
{
lean_object* v___f_962_; lean_object* v___x_963_; uint8_t v___x_964_; lean_object* v___x_965_; 
v___f_962_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_963_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingStartActiveSpanCallback", 49, 49);
v___x_964_ = 0;
v___x_965_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_965_, 0, v___f_962_);
lean_ctor_set(v___x_965_, 1, v___x_963_);
lean_ctor_set_uint8(v___x_965_, sizeof(void*)*2, v___x_964_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn(lean_object* v_f_966_){
_start:
{
lean_object* v___f_968_; lean_object* v___f_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v___f_968_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__0___boxed), 2, 0);
v___f_969_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_969_, 0, v_f_966_);
lean_closure_set(v___f_969_, 1, v___f_968_);
v___x_970_ = lean_unsigned_to_nat(0u);
v___x_971_ = l_Lasm_JS_Function_ofFn(v___f_969_, v___x_970_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_973_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
lean_inc(v_a_972_);
lean_dec_ref_known(v___x_971_, 1);
v___x_973_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v_a_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_a_974_ = lean_ctor_get(v___x_973_, 0);
lean_inc(v_a_974_);
lean_dec_ref_known(v___x_973_, 1);
v___x_975_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_976_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_974_, v___x_975_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___y_985_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; uint8_t v___x_1016_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
v___x_978_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_979_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_972_);
v___x_980_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_980_, 0, v_a_972_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_mk_string_unchecked("length", 6, 6);
v___x_982_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
v___x_983_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1012_ = lean_unsigned_to_nat(2u);
v___x_1013_ = lean_nat_to_int(v___x_1012_);
v___x_1014_ = lean_nat_abs(v___x_1013_);
v___x_1015_ = lean_cstr_to_nat("9007199254740991");
v___x_1016_ = lean_nat_dec_le(v___x_1014_, v___x_1015_);
lean_dec(v___x_1014_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1013_);
v___y_985_ = v___x_1017_;
goto v___jp_984_;
}
else
{
double v___x_1018_; lean_object* v___x_1019_; 
v___x_1018_ = l_Float_ofInt(v___x_1013_);
lean_dec(v___x_1013_);
v___x_1019_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1019_, 0, v___x_1018_);
v___y_985_ = v___x_1019_;
goto v___jp_984_;
}
v___jp_984_:
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_983_);
lean_ctor_set(v___x_986_, 1, v___y_985_);
v___x_987_ = lean_box(0);
v___x_988_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_988_, 0, v___x_986_);
lean_ctor_set(v___x_988_, 1, v___x_987_);
v___x_989_ = l_Lasm_JS_obj(v___x_988_);
v___x_990_ = lean_unsigned_to_nat(3u);
v___x_991_ = lean_mk_empty_array_with_capacity(v___x_990_);
v___x_992_ = lean_array_push(v___x_991_, v___x_980_);
v___x_993_ = lean_array_push(v___x_992_, v___x_982_);
v___x_994_ = lean_array_push(v___x_993_, v___x_989_);
v___x_995_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_977_, v___x_978_, v___x_994_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v___x_997_; uint8_t v_isShared_998_; uint8_t v_isSharedCheck_1002_; 
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1002_ == 0)
{
lean_object* v_unused_1003_; 
v_unused_1003_ = lean_ctor_get(v___x_995_, 0);
lean_dec(v_unused_1003_);
v___x_997_ = v___x_995_;
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
else
{
lean_dec(v___x_995_);
v___x_997_ = lean_box(0);
v_isShared_998_ = v_isSharedCheck_1002_;
goto v_resetjp_996_;
}
v_resetjp_996_:
{
lean_object* v___x_1000_; 
if (v_isShared_998_ == 0)
{
lean_ctor_set(v___x_997_, 0, v_a_972_);
v___x_1000_ = v___x_997_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_a_972_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec(v_a_972_);
v_a_1004_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_995_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_995_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec(v_a_972_);
v_a_1020_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_976_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_976_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_dec(v_a_972_);
v_a_1028_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_973_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_973_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v___x_1033_; 
if (v_isShared_1031_ == 0)
{
v___x_1033_ = v___x_1030_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v_a_1028_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
}
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
v_a_1036_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_971_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_971_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn___boxed(lean_object* v_f_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofFn(v_f_1044_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn(lean_object* v_f_1047_){
_start:
{
lean_object* v___f_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___f_1049_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1049_, 0, v_f_1047_);
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = l_Lasm_JS_Function_ofSyncFn(v___f_1049_, v___x_1050_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1053_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1051_, 1);
v___x_1053_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v___x_1055_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1056_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1054_, v___x_1055_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___y_1065_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; uint8_t v___x_1096_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1058_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1059_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1052_);
v___x_1060_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1060_, 0, v_a_1052_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1062_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1062_, 0, v___x_1061_);
v___x_1063_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1092_ = lean_unsigned_to_nat(2u);
v___x_1093_ = lean_nat_to_int(v___x_1092_);
v___x_1094_ = lean_nat_abs(v___x_1093_);
v___x_1095_ = lean_cstr_to_nat("9007199254740991");
v___x_1096_ = lean_nat_dec_le(v___x_1094_, v___x_1095_);
lean_dec(v___x_1094_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1093_);
v___y_1065_ = v___x_1097_;
goto v___jp_1064_;
}
else
{
double v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = l_Float_ofInt(v___x_1093_);
lean_dec(v___x_1093_);
v___x_1099_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1099_, 0, v___x_1098_);
v___y_1065_ = v___x_1099_;
goto v___jp_1064_;
}
v___jp_1064_:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1063_);
lean_ctor_set(v___x_1066_, 1, v___y_1065_);
v___x_1067_ = lean_box(0);
v___x_1068_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1066_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
v___x_1069_ = l_Lasm_JS_obj(v___x_1068_);
v___x_1070_ = lean_unsigned_to_nat(3u);
v___x_1071_ = lean_mk_empty_array_with_capacity(v___x_1070_);
v___x_1072_ = lean_array_push(v___x_1071_, v___x_1060_);
v___x_1073_ = lean_array_push(v___x_1072_, v___x_1062_);
v___x_1074_ = lean_array_push(v___x_1073_, v___x_1069_);
v___x_1075_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_1057_, v___x_1058_, v___x_1074_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1082_; 
v_isSharedCheck_1082_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1082_ == 0)
{
lean_object* v_unused_1083_; 
v_unused_1083_ = lean_ctor_get(v___x_1075_, 0);
lean_dec(v_unused_1083_);
v___x_1077_ = v___x_1075_;
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
else
{
lean_dec(v___x_1075_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1082_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1080_; 
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v_a_1052_);
v___x_1080_ = v___x_1077_;
goto v_reusejp_1079_;
}
else
{
lean_object* v_reuseFailAlloc_1081_; 
v_reuseFailAlloc_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1081_, 0, v_a_1052_);
v___x_1080_ = v_reuseFailAlloc_1081_;
goto v_reusejp_1079_;
}
v_reusejp_1079_:
{
return v___x_1080_;
}
}
}
else
{
lean_object* v_a_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1091_; 
lean_dec(v_a_1052_);
v_a_1084_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1086_ = v___x_1075_;
v_isShared_1087_ = v_isSharedCheck_1091_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_a_1084_);
lean_dec(v___x_1075_);
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
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec(v_a_1052_);
v_a_1100_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1056_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1056_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
lean_dec(v_a_1052_);
v_a_1108_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1053_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1053_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
v_a_1116_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1051_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1051_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn___boxed(lean_object* v_f_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_JS_Cloudflare_TracingStartActiveSpanCallback_ofSyncFn(v_f_1124_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0(lean_object* v___x_1127_, lean_object* v___x_1128_, lean_object* v_d_1129_){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; 
v___x_1130_ = lean_mk_string_unchecked("traceId", 7, 7);
lean_inc_ref(v___x_1127_);
v___x_1131_ = l_Lasm_JS_readField___redArg(v___x_1127_, v_d_1129_, v___x_1130_);
lean_dec_ref(v___x_1130_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1139_; 
lean_dec_ref(v___x_1128_);
lean_dec_ref(v___x_1127_);
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1134_ = v___x_1131_;
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1132_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v_a_1140_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1131_, 1);
v___x_1141_ = lean_mk_string_unchecked("spanId", 6, 6);
v___x_1142_ = l_Lasm_JS_readField___redArg(v___x_1127_, v_d_1129_, v___x_1141_);
lean_dec_ref(v___x_1141_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
lean_dec(v_a_1140_);
lean_dec_ref(v___x_1128_);
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1142_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1142_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1148_; 
if (v_isShared_1146_ == 0)
{
v___x_1148_ = v___x_1145_;
goto v_reusejp_1147_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v_a_1143_);
v___x_1148_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1147_;
}
v_reusejp_1147_:
{
return v___x_1148_;
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_a_1151_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1151_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1152_ = lean_mk_string_unchecked("traceFlags", 10, 10);
v___x_1153_ = l_Lasm_JS_readField___redArg(v___x_1128_, v_d_1129_, v___x_1152_);
lean_dec_ref(v___x_1152_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v_a_1151_);
lean_dec(v_a_1140_);
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1153_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1171_; 
v_a_1162_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1164_ = v___x_1153_;
v_isShared_1165_ = v_isSharedCheck_1171_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1153_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1171_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1166_; double v___x_1167_; lean_object* v___x_1169_; 
v___x_1166_ = lean_alloc_ctor(0, 2, 8);
lean_ctor_set(v___x_1166_, 0, v_a_1140_);
lean_ctor_set(v___x_1166_, 1, v_a_1151_);
v___x_1167_ = lean_unbox_float(v_a_1162_);
lean_dec(v_a_1162_);
lean_ctor_set_float(v___x_1166_, sizeof(void*)*2, v___x_1167_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1166_);
v___x_1169_ = v___x_1164_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1166_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0___boxed(lean_object* v___x_1172_, lean_object* v___x_1173_, lean_object* v_d_1174_){
_start:
{
lean_object* v_res_1175_; 
v_res_1175_ = l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0(v___x_1172_, v___x_1173_, v_d_1174_);
lean_dec(v_d_1174_);
return v_res_1175_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext(void){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___f_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; lean_object* v___x_1181_; 
v___x_1176_ = l_Lasm_JS_instFromJSString;
v___x_1177_ = l_Lasm_JS_instFromJSFloat;
v___f_1178_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSTracingSpanContext___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1178_, 0, v___x_1176_);
lean_closure_set(v___f_1178_, 1, v___x_1177_);
v___x_1179_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TracingSpanContext", 37, 37);
v___x_1180_ = 0;
v___x_1181_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1181_, 0, v___f_1178_);
lean_ctor_set(v___x_1181_, 1, v___x_1179_);
lean_ctor_set_uint8(v___x_1181_, sizeof(void*)*2, v___x_1180_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx(lean_object* v_x_1182_){
_start:
{
switch(lean_obj_tag(v_x_1182_))
{
case 0:
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_unsigned_to_nat(0u);
return v___x_1183_;
}
case 1:
{
lean_object* v___x_1184_; 
v___x_1184_ = lean_unsigned_to_nat(1u);
return v___x_1184_;
}
default: 
{
lean_object* v___x_1185_; 
v___x_1185_ = lean_unsigned_to_nat(2u);
return v___x_1185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx___boxed(lean_object* v_x_1186_){
_start:
{
lean_object* v_res_1187_; 
v_res_1187_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorIdx(v_x_1186_);
lean_dec_ref(v_x_1186_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(lean_object* v_t_1188_, lean_object* v_k_1189_){
_start:
{
switch(lean_obj_tag(v_t_1188_))
{
case 0:
{
uint8_t v_value_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_value_1190_ = lean_ctor_get_uint8(v_t_1188_, 0);
lean_dec_ref_known(v_t_1188_, 0);
v___x_1191_ = lean_box(v_value_1190_);
v___x_1192_ = lean_apply_1(v_k_1189_, v___x_1191_);
return v___x_1192_;
}
case 1:
{
double v_value_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v_value_1193_ = lean_ctor_get_float(v_t_1188_, 0);
lean_dec_ref_known(v_t_1188_, 0);
v___x_1194_ = lean_box_float(v_value_1193_);
v___x_1195_ = lean_apply_1(v_k_1189_, v___x_1194_);
return v___x_1195_;
}
default: 
{
lean_object* v_value_1196_; lean_object* v___x_1197_; 
v_value_1196_ = lean_ctor_get(v_t_1188_, 0);
lean_inc_ref(v_value_1196_);
lean_dec_ref_known(v_t_1188_, 1);
v___x_1197_ = lean_apply_1(v_k_1189_, v_value_1196_);
return v___x_1197_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim(lean_object* v_motive_1198_, lean_object* v_ctorIdx_1199_, lean_object* v_t_1200_, lean_object* v_h_1201_, lean_object* v_k_1202_){
_start:
{
lean_object* v___x_1203_; 
v___x_1203_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1200_, v_k_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___boxed(lean_object* v_motive_1204_, lean_object* v_ctorIdx_1205_, lean_object* v_t_1206_, lean_object* v_h_1207_, lean_object* v_k_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim(v_motive_1204_, v_ctorIdx_1205_, v_t_1206_, v_h_1207_, v_k_1208_);
lean_dec(v_ctorIdx_1205_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_boolean_elim___redArg(lean_object* v_t_1210_, lean_object* v_boolean_1211_){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1210_, v_boolean_1211_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_boolean_elim(lean_object* v_motive_1213_, lean_object* v_t_1214_, lean_object* v_h_1215_, lean_object* v_boolean_1216_){
_start:
{
lean_object* v___x_1217_; 
v___x_1217_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1214_, v_boolean_1216_);
return v___x_1217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_double_elim___redArg(lean_object* v_t_1218_, lean_object* v_double_1219_){
_start:
{
lean_object* v___x_1220_; 
v___x_1220_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1218_, v_double_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_double_elim(lean_object* v_motive_1221_, lean_object* v_t_1222_, lean_object* v_h_1223_, lean_object* v_double_1224_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1222_, v_double_1224_);
return v___x_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_domString_elim___redArg(lean_object* v_t_1226_, lean_object* v_domString_1227_){
_start:
{
lean_object* v___x_1228_; 
v___x_1228_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1226_, v_domString_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_domString_elim(lean_object* v_motive_1229_, lean_object* v_t_1230_, lean_object* v_h_1231_, lean_object* v_domString_1232_){
_start:
{
lean_object* v___x_1233_; 
v___x_1233_ = l_Lasm_JS_Cloudflare_BooleanOrDoubleOrDOMString_ctorElim___redArg(v_t_1230_, v_domString_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSBooleanOrDoubleOrDOMString___lam__0(lean_object* v_x_1234_){
_start:
{
switch(lean_obj_tag(v_x_1234_))
{
case 0:
{
uint8_t v_value_1235_; lean_object* v___x_1237_; uint8_t v_isShared_1238_; uint8_t v_isSharedCheck_1242_; 
v_value_1235_ = lean_ctor_get_uint8(v_x_1234_, 0);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_x_1234_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1237_ = v_x_1234_;
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
else
{
lean_dec(v_x_1234_);
v___x_1237_ = lean_box(0);
v_isShared_1238_ = v_isSharedCheck_1242_;
goto v_resetjp_1236_;
}
v_resetjp_1236_:
{
lean_object* v___x_1240_; 
if (v_isShared_1238_ == 0)
{
lean_ctor_set_tag(v___x_1237_, 2);
v___x_1240_ = v___x_1237_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1241_, 0, v_value_1235_);
v___x_1240_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
return v___x_1240_;
}
}
}
case 1:
{
double v_value_1243_; lean_object* v___x_1245_; uint8_t v_isShared_1246_; uint8_t v_isSharedCheck_1250_; 
v_value_1243_ = lean_ctor_get_float(v_x_1234_, 0);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_x_1234_);
if (v_isSharedCheck_1250_ == 0)
{
v___x_1245_ = v_x_1234_;
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
else
{
lean_dec(v_x_1234_);
v___x_1245_ = lean_box(0);
v_isShared_1246_ = v_isSharedCheck_1250_;
goto v_resetjp_1244_;
}
v_resetjp_1244_:
{
lean_object* v___x_1248_; 
if (v_isShared_1246_ == 0)
{
lean_ctor_set_tag(v___x_1245_, 3);
v___x_1248_ = v___x_1245_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1249_, 0, v_value_1243_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
}
default: 
{
lean_object* v_value_1251_; lean_object* v___x_1253_; uint8_t v_isShared_1254_; uint8_t v_isSharedCheck_1258_; 
v_value_1251_ = lean_ctor_get(v_x_1234_, 0);
v_isSharedCheck_1258_ = !lean_is_exclusive(v_x_1234_);
if (v_isSharedCheck_1258_ == 0)
{
v___x_1253_ = v_x_1234_;
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
else
{
lean_inc(v_value_1251_);
lean_dec(v_x_1234_);
v___x_1253_ = lean_box(0);
v_isShared_1254_ = v_isSharedCheck_1258_;
goto v_resetjp_1252_;
}
v_resetjp_1252_:
{
lean_object* v___x_1256_; 
if (v_isShared_1254_ == 0)
{
lean_ctor_set_tag(v___x_1253_, 4);
v___x_1256_ = v___x_1253_;
goto v_reusejp_1255_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v_value_1251_);
v___x_1256_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1255_;
}
v_reusejp_1255_:
{
return v___x_1256_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0(uint8_t v_value_1260_){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1261_, 0, v_value_1260_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0___boxed(lean_object* v_value_1262_){
_start:
{
uint8_t v_value_boxed_1263_; lean_object* v_res_1264_; 
v_value_boxed_1263_ = lean_unbox(v_value_1262_);
v_res_1264_ = l_Lasm_JS_Cloudflare_instCoeBoolBooleanOrDoubleOrDOMString___lam__0(v_value_boxed_1263_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0(double v_value_1266_){
_start:
{
lean_object* v___x_1267_; 
v___x_1267_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_1267_, 0, v_value_1266_);
return v___x_1267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0___boxed(lean_object* v_value_1268_){
_start:
{
double v_value_boxed_1269_; lean_object* v_res_1270_; 
v_value_boxed_1269_ = lean_unbox_float(v_value_1268_);
lean_dec_ref(v_value_1268_);
v_res_1270_ = l_Lasm_JS_Cloudflare_instCoeFloatBooleanOrDoubleOrDOMString___lam__0(v_value_boxed_1269_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringBooleanOrDoubleOrDOMString___lam__0(lean_object* v_value_1272_){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1273_, 0, v_value_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString___lam__0(lean_object* v_x_1275_){
_start:
{
switch(lean_obj_tag(v_x_1275_))
{
case 2:
{
uint8_t v_b_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1284_; 
v_b_1276_ = lean_ctor_get_uint8(v_x_1275_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1275_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1278_ = v_x_1275_;
v_isShared_1279_ = v_isSharedCheck_1284_;
goto v_resetjp_1277_;
}
else
{
lean_dec(v_x_1275_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1284_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
lean_ctor_set_tag(v___x_1278_, 0);
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1283_, 0, v_b_1276_);
v___x_1281_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1282_; 
v___x_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1281_);
return v___x_1282_;
}
}
}
case 3:
{
double v_n_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1293_; 
v_n_1285_ = lean_ctor_get_float(v_x_1275_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v_x_1275_);
if (v_isSharedCheck_1293_ == 0)
{
v___x_1287_ = v_x_1275_;
v_isShared_1288_ = v_isSharedCheck_1293_;
goto v_resetjp_1286_;
}
else
{
lean_dec(v_x_1275_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1293_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
lean_ctor_set_tag(v___x_1287_, 1);
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1292_, 0, v_n_1285_);
v___x_1290_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
lean_object* v___x_1291_; 
v___x_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1291_, 0, v___x_1290_);
return v___x_1291_;
}
}
}
case 4:
{
lean_object* v_s_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1302_; 
v_s_1294_ = lean_ctor_get(v_x_1275_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_x_1275_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1296_ = v_x_1275_;
v_isShared_1297_ = v_isSharedCheck_1302_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_s_1294_);
lean_dec(v_x_1275_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1302_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
lean_ctor_set_tag(v___x_1296_, 2);
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_s_1294_);
v___x_1299_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
lean_object* v___x_1300_; 
v___x_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
return v___x_1300_;
}
}
}
default: 
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
lean_dec(v_x_1275_);
v___x_1303_ = lean_mk_string_unchecked("", 0, 0);
v___x_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
return v___x_1304_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString(void){
_start:
{
lean_object* v___f_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; lean_object* v___x_1308_; 
v___f_1305_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSBooleanOrDoubleOrDOMString___lam__0), 1, 0);
v___x_1306_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.BooleanOrDoubleOrDOMString", 45, 45);
v___x_1307_ = 0;
v___x_1308_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1308_, 0, v___f_1305_);
lean_ctor_set(v___x_1308_, 1, v___x_1306_);
lean_ctor_set_uint8(v___x_1308_, sizeof(void*)*2, v___x_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus___lam__0(lean_object* v___f_1309_, lean_object* v_d_1310_){
_start:
{
lean_object* v_code_1311_; lean_object* v_message_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1329_; 
v_code_1311_ = lean_ctor_get(v_d_1310_, 0);
v_message_1312_ = lean_ctor_get(v_d_1310_, 1);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_d_1310_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1314_ = v_d_1310_;
v_isShared_1315_ = v_isSharedCheck_1329_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_message_1312_);
lean_inc(v_code_1311_);
lean_dec(v_d_1310_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1329_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1316_ = lean_mk_string_unchecked("code", 4, 4);
v___x_1317_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1317_, 0, v_code_1311_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 1, v___x_1317_);
lean_ctor_set(v___x_1314_, 0, v___x_1316_);
v___x_1319_ = v___x_1314_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1320_ = lean_mk_string_unchecked("message", 7, 7);
v___x_1321_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1309_, v_message_1312_);
v___x_1322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1322_, 0, v___x_1320_);
lean_ctor_set(v___x_1322_, 1, v___x_1321_);
v___x_1323_ = lean_unsigned_to_nat(2u);
v___x_1324_ = lean_mk_empty_array_with_capacity(v___x_1323_);
v___x_1325_ = lean_array_push(v___x_1324_, v___x_1319_);
v___x_1326_ = lean_array_push(v___x_1325_, v___x_1322_);
v___x_1327_ = l_Lasm_JS_Web_Internal_fields(v___x_1326_);
lean_dec_ref(v___x_1326_);
return v___x_1327_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus(void){
_start:
{
lean_object* v___f_1330_; lean_object* v___f_1331_; 
v___f_1330_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1331_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSTracingSpanStatus___lam__0), 2, 1);
lean_closure_set(v___f_1331_, 0, v___f_1330_);
return v___f_1331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSTestController___lam__0(lean_object* v_x_1332_){
_start:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1333_ = lean_unsigned_to_nat(0u);
v___x_1334_ = lean_mk_empty_array_with_capacity(v___x_1333_);
v___x_1335_ = l_Lasm_JS_Web_Internal_fields(v___x_1334_);
lean_dec_ref(v___x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSTestController___lam__0(lean_object* v_d_1337_){
_start:
{
if (lean_obj_tag(v_d_1337_) == 8)
{
lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1345_; 
v_isSharedCheck_1345_ = !lean_is_exclusive(v_d_1337_);
if (v_isSharedCheck_1345_ == 0)
{
lean_object* v_unused_1346_; 
v_unused_1346_ = lean_ctor_get(v_d_1337_, 0);
lean_dec(v_unused_1346_);
v___x_1339_ = v_d_1337_;
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
else
{
lean_dec(v_d_1337_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1345_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1341_ = lean_box(0);
if (v_isShared_1340_ == 0)
{
lean_ctor_set_tag(v___x_1339_, 1);
lean_ctor_set(v___x_1339_, 0, v___x_1341_);
v___x_1343_ = v___x_1339_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1344_; 
v_reuseFailAlloc_1344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1344_, 0, v___x_1341_);
v___x_1343_ = v_reuseFailAlloc_1344_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
return v___x_1343_;
}
}
}
else
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
lean_dec(v_d_1337_);
v___x_1347_ = lean_mk_string_unchecked("", 0, 0);
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
return v___x_1348_;
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSTestController(void){
_start:
{
lean_object* v___f_1349_; lean_object* v___x_1350_; uint8_t v___x_1351_; lean_object* v___x_1352_; 
v___f_1349_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSTestController___lam__0), 1, 0);
v___x_1350_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.TestController", 33, 33);
v___x_1351_ = 0;
v___x_1352_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1352_, 0, v___f_1349_);
lean_ctor_set(v___x_1352_, 1, v___x_1350_);
lean_ctor_set_uint8(v___x_1352_, sizeof(void*)*2, v___x_1351_);
return v___x_1352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__0(lean_object* v_x_1353_){
_start:
{
lean_object* v_fst_1354_; lean_object* v_snd_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1364_; 
v_fst_1354_ = lean_ctor_get(v_x_1353_, 0);
v_snd_1355_ = lean_ctor_get(v_x_1353_, 1);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_x_1353_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1357_ = v_x_1353_;
v_isShared_1358_ = v_isSharedCheck_1364_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_snd_1355_);
lean_inc(v_fst_1354_);
lean_dec(v_x_1353_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1364_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; uint8_t v___x_1360_; lean_object* v___x_1362_; 
v___x_1359_ = lean_alloc_ctor(2, 0, 1);
v___x_1360_ = lean_unbox(v_snd_1355_);
lean_dec(v_snd_1355_);
lean_ctor_set_uint8(v___x_1359_, 0, v___x_1360_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 1, v___x_1359_);
v___x_1362_ = v___x_1357_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_fst_1354_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___x_1359_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__1(lean_object* v___f_1365_, lean_object* v_d_1366_){
_start:
{
lean_object* v___x_1367_; lean_object* v___f_1368_; lean_object* v___f_1369_; lean_object* v___f_1370_; lean_object* v___f_1371_; lean_object* v___f_1372_; lean_object* v___f_1373_; lean_object* v___f_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; size_t v_sz_1378_; size_t v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1367_ = lean_mk_string_unchecked("compatibilityFlags", 18, 18);
v___f_1368_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
v___f_1369_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
v___f_1370_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
v___f_1371_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
v___f_1372_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
v___f_1373_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
v___f_1374_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
v___x_1375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___f_1368_);
lean_ctor_set(v___x_1375_, 1, v___f_1369_);
v___x_1376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1375_);
lean_ctor_set(v___x_1376_, 1, v___f_1370_);
lean_ctor_set(v___x_1376_, 2, v___f_1371_);
lean_ctor_set(v___x_1376_, 3, v___f_1372_);
lean_ctor_set(v___x_1376_, 4, v___f_1373_);
v___x_1377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1377_, 0, v___x_1376_);
lean_ctor_set(v___x_1377_, 1, v___f_1374_);
v_sz_1378_ = lean_array_size(v_d_1366_);
v___x_1379_ = ((size_t)0ULL);
v___x_1380_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1377_, v___f_1365_, v_sz_1378_, v___x_1379_, v_d_1366_);
v___x_1381_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1380_);
v___x_1382_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1382_, 0, v___x_1367_);
lean_ctor_set(v___x_1382_, 1, v___x_1381_);
v___x_1383_ = lean_unsigned_to_nat(1u);
v___x_1384_ = lean_mk_empty_array_with_capacity(v___x_1383_);
v___x_1385_ = lean_array_push(v___x_1384_, v___x_1382_);
v___x_1386_ = l_Lasm_JS_Web_Internal_fields(v___x_1385_);
lean_dec_ref(v___x_1385_);
return v___x_1386_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSCloudflare(void){
_start:
{
lean_object* v___f_1387_; lean_object* v___f_1388_; 
v___f_1387_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__0), 1, 0);
v___f_1388_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSCloudflare___lam__1), 2, 1);
lean_closure_set(v___f_1388_, 0, v___f_1387_);
return v___f_1388_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerFetchHandler(void){
_start:
{
lean_object* v___f_1390_; lean_object* v___x_1391_; uint8_t v___x_1392_; lean_object* v___x_1393_; 
v___f_1390_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_1391_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ExportedHandlerFetchHandler", 46, 46);
v___x_1392_ = 0;
v___x_1393_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1393_, 0, v___f_1390_);
lean_ctor_set(v___x_1393_, 1, v___x_1391_);
lean_ctor_set_uint8(v___x_1393_, sizeof(void*)*2, v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0(lean_object* v_x_1394_){
_start:
{
if (lean_obj_tag(v_x_1394_) == 0)
{
lean_object* v_a_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1404_; 
v_a_1396_ = lean_ctor_get(v_x_1394_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v_x_1394_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1398_ = v_x_1394_;
v_isShared_1399_ = v_isSharedCheck_1404_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_a_1396_);
lean_dec(v_x_1394_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1404_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___x_1401_; 
if (v_isShared_1399_ == 0)
{
v___x_1401_ = v___x_1398_;
goto v_reusejp_1400_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1396_);
v___x_1401_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1400_;
}
v_reusejp_1400_:
{
lean_object* v___x_1402_; 
v___x_1402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
return v___x_1402_;
}
}
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1415_; 
v_a_1405_ = lean_ctor_get(v_x_1394_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_x_1394_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1407_ = v_x_1394_;
v_isShared_1408_ = v_isSharedCheck_1415_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v_x_1394_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1415_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1412_; 
v___x_1409_ = lean_mk_string_unchecked("", 0, 0);
v___x_1410_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1410_, 0, v_a_1405_);
lean_ctor_set(v___x_1410_, 1, v___x_1409_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 0, v___x_1410_);
v___x_1412_ = v___x_1407_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
lean_object* v___x_1413_; 
v___x_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1412_);
return v___x_1413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0___boxed(lean_object* v_x_1416_, lean_object* v___y_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0(v_x_1416_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1(lean_object* v_f_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v___f_1422_, lean_object* v_x_1423_){
_start:
{
if (lean_obj_tag(v_x_1423_) == 0)
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1433_; 
lean_dec_ref(v___f_1422_);
lean_dec(v_a_1421_);
lean_dec(v_a_1420_);
lean_dec_ref(v_f_1419_);
v_a_1425_ = lean_ctor_get(v_x_1423_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_x_1423_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1427_ = v_x_1423_;
v_isShared_1428_ = v_isSharedCheck_1433_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v_x_1423_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1433_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
lean_object* v___x_1431_; 
v___x_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1430_);
return v___x_1431_;
}
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1435_; uint8_t v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v_a_1434_ = lean_ctor_get(v_x_1423_, 0);
lean_inc(v_a_1434_);
lean_dec_ref_known(v_x_1423_, 1);
v___x_1435_ = lean_unsigned_to_nat(0u);
v___x_1436_ = 0;
v___x_1437_ = lean_apply_4(v_f_1419_, v_a_1420_, v_a_1421_, v_a_1434_, lean_box(0));
v___x_1438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1435_, v___x_1436_, v___x_1437_, v___f_1422_);
return v___x_1438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v___f_1442_, lean_object* v_x_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1(v_f_1439_, v_a_1440_, v_a_1441_, v___f_1442_, v_x_1443_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2(lean_object* v_f_1446_, lean_object* v_a_1447_, lean_object* v___f_1448_, lean_object* v___x_1449_, lean_object* v_args_1450_, lean_object* v_x_1451_){
_start:
{
if (lean_obj_tag(v_x_1451_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1461_; 
lean_dec_ref(v___x_1449_);
lean_dec_ref(v___f_1448_);
lean_dec(v_a_1447_);
lean_dec_ref(v_f_1446_);
v_a_1453_ = lean_ctor_get(v_x_1451_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v_x_1451_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1455_ = v_x_1451_;
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v_x_1451_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1461_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1458_; 
if (v_isShared_1456_ == 0)
{
v___x_1458_ = v___x_1455_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1453_);
v___x_1458_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
lean_object* v___x_1459_; 
v___x_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1458_);
return v___x_1459_;
}
}
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1483_; 
v_a_1462_ = lean_ctor_get(v_x_1451_, 0);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_x_1451_);
if (v_isSharedCheck_1483_ == 0)
{
v___x_1464_ = v_x_1451_;
v_isShared_1465_ = v_isSharedCheck_1483_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v_x_1451_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1483_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___f_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; uint8_t v___x_1469_; lean_object* v_val_1471_; lean_object* v___x_1474_; 
v___f_1466_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_1466_, 0, v_f_1446_);
lean_closure_set(v___f_1466_, 1, v_a_1447_);
lean_closure_set(v___f_1466_, 2, v_a_1462_);
lean_closure_set(v___f_1466_, 3, v___f_1448_);
v___x_1467_ = lean_unsigned_to_nat(2u);
v___x_1468_ = lean_unsigned_to_nat(0u);
v___x_1469_ = 0;
v___x_1474_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1449_, v_args_1450_, v___x_1467_);
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1477_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v___x_1474_, 1);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v_a_1475_);
v___x_1477_ = v___x_1464_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1475_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
v_val_1471_ = v___x_1477_;
goto v___jp_1470_;
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; 
v_a_1479_ = lean_ctor_get(v___x_1474_, 0);
lean_inc(v_a_1479_);
lean_dec_ref_known(v___x_1474_, 1);
if (v_isShared_1465_ == 0)
{
lean_ctor_set_tag(v___x_1464_, 0);
lean_ctor_set(v___x_1464_, 0, v_a_1479_);
v___x_1481_ = v___x_1464_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v_a_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
v_val_1471_ = v___x_1481_;
goto v___jp_1470_;
}
}
v___jp_1470_:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1472_, 0, v_val_1471_);
v___x_1473_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1468_, v___x_1469_, v___x_1472_, v___f_1466_);
return v___x_1473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_1484_, lean_object* v_a_1485_, lean_object* v___f_1486_, lean_object* v___x_1487_, lean_object* v_args_1488_, lean_object* v_x_1489_, lean_object* v___y_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2(v_f_1484_, v_a_1485_, v___f_1486_, v___x_1487_, v_args_1488_, v_x_1489_);
lean_dec_ref(v_args_1488_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3(lean_object* v___f_1492_, lean_object* v_inst_1493_, lean_object* v_x_1494_){
_start:
{
if (lean_obj_tag(v_x_1494_) == 0)
{
lean_object* v___x_1496_; 
lean_dec_ref(v_inst_1493_);
lean_dec_ref(v___f_1492_);
v___x_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1496_, 0, v_x_1494_);
return v___x_1496_;
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1516_; 
v_a_1497_ = lean_ctor_get(v_x_1494_, 0);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_x_1494_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1499_ = v_x_1494_;
v_isShared_1500_ = v_isSharedCheck_1516_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v_x_1494_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1516_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1501_; uint8_t v___x_1502_; lean_object* v_val_1504_; lean_object* v___x_1507_; 
v___x_1501_ = lean_unsigned_to_nat(0u);
v___x_1502_ = 0;
v___x_1507_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_1493_, v_a_1497_);
if (lean_obj_tag(v___x_1507_) == 0)
{
lean_object* v_a_1508_; lean_object* v___x_1510_; 
v_a_1508_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_a_1508_);
lean_dec_ref_known(v___x_1507_, 1);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v_a_1508_);
v___x_1510_ = v___x_1499_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v_a_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
v_val_1504_ = v___x_1510_;
goto v___jp_1503_;
}
}
else
{
lean_object* v_a_1512_; lean_object* v___x_1514_; 
v_a_1512_ = lean_ctor_get(v___x_1507_, 0);
lean_inc(v_a_1512_);
lean_dec_ref_known(v___x_1507_, 1);
if (v_isShared_1500_ == 0)
{
lean_ctor_set_tag(v___x_1499_, 0);
lean_ctor_set(v___x_1499_, 0, v_a_1512_);
v___x_1514_ = v___x_1499_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v_a_1512_);
v___x_1514_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
v_val_1504_ = v___x_1514_;
goto v___jp_1503_;
}
}
v___jp_1503_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1505_, 0, v_val_1504_);
v___x_1506_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1501_, v___x_1502_, v___x_1505_, v___f_1492_);
return v___x_1506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed(lean_object* v___f_1517_, lean_object* v_inst_1518_, lean_object* v_x_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3(v___f_1517_, v_inst_1518_, v_x_1519_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4(lean_object* v_f_1522_, lean_object* v___f_1523_, lean_object* v___x_1524_, lean_object* v_args_1525_, lean_object* v_inst_1526_, lean_object* v___x_1527_, lean_object* v_x_1528_){
_start:
{
if (lean_obj_tag(v_x_1528_) == 0)
{
lean_object* v_a_1530_; lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1538_; 
lean_dec_ref(v___x_1527_);
lean_dec_ref(v_inst_1526_);
lean_dec_ref(v_args_1525_);
lean_dec_ref(v___x_1524_);
lean_dec_ref(v___f_1523_);
lean_dec_ref(v_f_1522_);
v_a_1530_ = lean_ctor_get(v_x_1528_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v_x_1528_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1532_ = v_x_1528_;
v_isShared_1533_ = v_isSharedCheck_1538_;
goto v_resetjp_1531_;
}
else
{
lean_inc(v_a_1530_);
lean_dec(v_x_1528_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1538_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v___x_1535_; 
if (v_isShared_1533_ == 0)
{
v___x_1535_ = v___x_1532_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_a_1530_);
v___x_1535_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
lean_object* v___x_1536_; 
v___x_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1535_);
return v___x_1536_;
}
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1561_; 
v_a_1539_ = lean_ctor_get(v_x_1528_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v_x_1528_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1541_ = v_x_1528_;
v_isShared_1542_ = v_isSharedCheck_1561_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v_x_1528_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1561_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___f_1543_; lean_object* v___f_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; lean_object* v_val_1549_; lean_object* v___x_1552_; 
lean_inc_ref(v_args_1525_);
v___f_1543_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1543_, 0, v_f_1522_);
lean_closure_set(v___f_1543_, 1, v_a_1539_);
lean_closure_set(v___f_1543_, 2, v___f_1523_);
lean_closure_set(v___f_1543_, 3, v___x_1524_);
lean_closure_set(v___f_1543_, 4, v_args_1525_);
v___f_1544_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1544_, 0, v___f_1543_);
lean_closure_set(v___f_1544_, 1, v_inst_1526_);
v___x_1545_ = lean_unsigned_to_nat(1u);
v___x_1546_ = lean_unsigned_to_nat(0u);
v___x_1547_ = 0;
v___x_1552_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1527_, v_args_1525_, v___x_1545_);
lean_dec_ref(v_args_1525_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; lean_object* v___x_1555_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref_known(v___x_1552_, 1);
if (v_isShared_1542_ == 0)
{
lean_ctor_set(v___x_1541_, 0, v_a_1553_);
v___x_1555_ = v___x_1541_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1553_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
v_val_1549_ = v___x_1555_;
goto v___jp_1548_;
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; 
v_a_1557_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1557_);
lean_dec_ref_known(v___x_1552_, 1);
if (v_isShared_1542_ == 0)
{
lean_ctor_set_tag(v___x_1541_, 0);
lean_ctor_set(v___x_1541_, 0, v_a_1557_);
v___x_1559_ = v___x_1541_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
v_val_1549_ = v___x_1559_;
goto v___jp_1548_;
}
}
v___jp_1548_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1550_, 0, v_val_1549_);
v___x_1551_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1546_, v___x_1547_, v___x_1550_, v___f_1544_);
return v___x_1551_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4___boxed(lean_object* v_f_1562_, lean_object* v___f_1563_, lean_object* v___x_1564_, lean_object* v_args_1565_, lean_object* v_inst_1566_, lean_object* v___x_1567_, lean_object* v_x_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v_res_1570_; 
v_res_1570_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4(v_f_1562_, v___f_1563_, v___x_1564_, v_args_1565_, v_inst_1566_, v___x_1567_, v_x_1568_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5(lean_object* v_f_1571_, lean_object* v___f_1572_, lean_object* v___x_1573_, lean_object* v_inst_1574_, lean_object* v___x_1575_, lean_object* v___x_1576_, lean_object* v_args_1577_){
_start:
{
lean_object* v___f_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; lean_object* v_val_1583_; lean_object* v___x_1586_; 
lean_inc_ref(v_args_1577_);
v___f_1579_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_1579_, 0, v_f_1571_);
lean_closure_set(v___f_1579_, 1, v___f_1572_);
lean_closure_set(v___f_1579_, 2, v___x_1573_);
lean_closure_set(v___f_1579_, 3, v_args_1577_);
lean_closure_set(v___f_1579_, 4, v_inst_1574_);
lean_closure_set(v___f_1579_, 5, v___x_1575_);
v___x_1580_ = lean_unsigned_to_nat(0u);
v___x_1581_ = 0;
v___x_1586_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1576_, v_args_1577_, v___x_1580_);
lean_dec_ref(v_args_1577_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1594_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1589_ = v___x_1586_;
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v___x_1586_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1594_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
lean_ctor_set_tag(v___x_1589_, 1);
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1593_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
v_val_1583_ = v___x_1592_;
goto v___jp_1582_;
}
}
}
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
v_a_1595_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___x_1586_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1586_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
lean_ctor_set_tag(v___x_1597_, 0);
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
v_val_1583_ = v___x_1600_;
goto v___jp_1582_;
}
}
}
v___jp_1582_:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1584_, 0, v_val_1583_);
v___x_1585_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1580_, v___x_1581_, v___x_1584_, v___f_1579_);
return v___x_1585_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5___boxed(lean_object* v_f_1603_, lean_object* v___f_1604_, lean_object* v___x_1605_, lean_object* v_inst_1606_, lean_object* v___x_1607_, lean_object* v___x_1608_, lean_object* v_args_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5(v_f_1603_, v___f_1604_, v___x_1605_, v_inst_1606_, v___x_1607_, v___x_1608_, v_args_1609_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(lean_object* v_inst_1612_, lean_object* v_f_1613_){
_start:
{
lean_object* v___f_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___f_1619_; lean_object* v___f_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___f_1615_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___x_1616_ = l_Lasm_JS_Web_instFromJSRequest;
v___x_1617_ = l_Lasm_JS_instFromJSData;
v___x_1618_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_1619_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__5___boxed), 8, 6);
lean_closure_set(v___f_1619_, 0, v_f_1613_);
lean_closure_set(v___f_1619_, 1, v___f_1615_);
lean_closure_set(v___f_1619_, 2, v___x_1618_);
lean_closure_set(v___f_1619_, 3, v_inst_1612_);
lean_closure_set(v___f_1619_, 4, v___x_1617_);
lean_closure_set(v___f_1619_, 5, v___x_1616_);
v___f_1620_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1621_ = l_Lasm_JS_instFromJSValue;
v___x_1622_ = lean_unsigned_to_nat(0u);
v___x_1623_ = l_Lasm_JS_Function_ofFn(v___f_1619_, v___x_1622_);
if (lean_obj_tag(v___x_1623_) == 0)
{
lean_object* v_a_1624_; lean_object* v___x_1625_; 
v_a_1624_ = lean_ctor_get(v___x_1623_, 0);
lean_inc(v_a_1624_);
lean_dec_ref_known(v___x_1623_, 1);
v___x_1625_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1625_) == 0)
{
lean_object* v_a_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v_a_1626_ = lean_ctor_get(v___x_1625_, 0);
lean_inc(v_a_1626_);
lean_dec_ref_known(v___x_1625_, 1);
v___x_1627_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1628_ = l_Lasm_JS_Value_get___redArg(v___f_1620_, v_a_1626_, v___x_1627_, v___x_1621_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___y_1637_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; uint8_t v___x_1668_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v___x_1628_, 1);
v___x_1630_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1631_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1624_);
v___x_1632_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1632_, 0, v_a_1624_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
v___x_1633_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1634_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
v___x_1635_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1664_ = lean_unsigned_to_nat(3u);
v___x_1665_ = lean_nat_to_int(v___x_1664_);
v___x_1666_ = lean_nat_abs(v___x_1665_);
v___x_1667_ = lean_cstr_to_nat("9007199254740991");
v___x_1668_ = lean_nat_dec_le(v___x_1666_, v___x_1667_);
lean_dec(v___x_1666_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; 
v___x_1669_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1665_);
v___y_1637_ = v___x_1669_;
goto v___jp_1636_;
}
else
{
double v___x_1670_; lean_object* v___x_1671_; 
v___x_1670_ = l_Float_ofInt(v___x_1665_);
lean_dec(v___x_1665_);
v___x_1671_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1671_, 0, v___x_1670_);
v___y_1637_ = v___x_1671_;
goto v___jp_1636_;
}
v___jp_1636_:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1635_);
lean_ctor_set(v___x_1638_, 1, v___y_1637_);
v___x_1639_ = lean_box(0);
v___x_1640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1638_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = l_Lasm_JS_obj(v___x_1640_);
v___x_1642_ = lean_unsigned_to_nat(3u);
v___x_1643_ = lean_mk_empty_array_with_capacity(v___x_1642_);
v___x_1644_ = lean_array_push(v___x_1643_, v___x_1632_);
v___x_1645_ = lean_array_push(v___x_1644_, v___x_1634_);
v___x_1646_ = lean_array_push(v___x_1645_, v___x_1641_);
v___x_1647_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1629_, v___x_1630_, v___x_1646_, v___x_1621_);
if (lean_obj_tag(v___x_1647_) == 0)
{
lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1654_ == 0)
{
lean_object* v_unused_1655_; 
v_unused_1655_ = lean_ctor_get(v___x_1647_, 0);
lean_dec(v_unused_1655_);
v___x_1649_ = v___x_1647_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_dec(v___x_1647_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
lean_ctor_set(v___x_1649_, 0, v_a_1624_);
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1624_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
}
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec(v_a_1624_);
v_a_1656_ = lean_ctor_get(v___x_1647_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1647_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1647_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1647_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
}
else
{
lean_object* v_a_1672_; lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
lean_dec(v_a_1624_);
v_a_1672_ = lean_ctor_get(v___x_1628_, 0);
v_isSharedCheck_1679_ = !lean_is_exclusive(v___x_1628_);
if (v_isSharedCheck_1679_ == 0)
{
v___x_1674_ = v___x_1628_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_inc(v_a_1672_);
lean_dec(v___x_1628_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
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
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_a_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
else
{
lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1687_; 
lean_dec(v_a_1624_);
lean_dec_ref(v___f_1620_);
v_a_1680_ = lean_ctor_get(v___x_1625_, 0);
v_isSharedCheck_1687_ = !lean_is_exclusive(v___x_1625_);
if (v_isSharedCheck_1687_ == 0)
{
v___x_1682_ = v___x_1625_;
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1625_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1687_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1685_; 
if (v_isShared_1683_ == 0)
{
v___x_1685_ = v___x_1682_;
goto v_reusejp_1684_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v_a_1680_);
v___x_1685_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1684_;
}
v_reusejp_1684_:
{
return v___x_1685_;
}
}
}
}
else
{
lean_object* v_a_1688_; lean_object* v___x_1690_; uint8_t v_isShared_1691_; uint8_t v_isSharedCheck_1695_; 
lean_dec_ref(v___f_1620_);
v_a_1688_ = lean_ctor_get(v___x_1623_, 0);
v_isSharedCheck_1695_ = !lean_is_exclusive(v___x_1623_);
if (v_isSharedCheck_1695_ == 0)
{
v___x_1690_ = v___x_1623_;
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
else
{
lean_inc(v_a_1688_);
lean_dec(v___x_1623_);
v___x_1690_ = lean_box(0);
v_isShared_1691_ = v_isSharedCheck_1695_;
goto v_resetjp_1689_;
}
v_resetjp_1689_:
{
lean_object* v___x_1693_; 
if (v_isShared_1691_ == 0)
{
v___x_1693_ = v___x_1690_;
goto v_reusejp_1692_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_a_1688_);
v___x_1693_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1692_;
}
v_reusejp_1692_:
{
return v___x_1693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___boxed(lean_object* v_inst_1696_, lean_object* v_f_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_1696_, v_f_1697_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(lean_object* v_Env_1700_, lean_object* v_inst_1701_, lean_object* v_f_1702_){
_start:
{
lean_object* v___x_1704_; 
v___x_1704_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg(v_inst_1701_, v_f_1702_);
return v___x_1704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___boxed(lean_object* v_Env_1705_, lean_object* v_inst_1706_, lean_object* v_f_1707_, lean_object* v_a_1708_){
_start:
{
lean_object* v_res_1709_; 
v_res_1709_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn(v_Env_1705_, v_inst_1706_, v_f_1707_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_1710_, lean_object* v___x_1711_, lean_object* v_inst_1712_, lean_object* v___x_1713_, lean_object* v_f_1714_, lean_object* v_args_1715_){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = lean_unsigned_to_nat(0u);
v___x_1718_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1710_, v_args_1715_, v___x_1717_);
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v_a_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v_a_1719_ = lean_ctor_get(v___x_1718_, 0);
lean_inc(v_a_1719_);
lean_dec_ref_known(v___x_1718_, 1);
v___x_1720_ = lean_unsigned_to_nat(1u);
v___x_1721_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1711_, v_args_1715_, v___x_1720_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v___x_1723_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1722_);
lean_dec_ref_known(v___x_1721_, 1);
v___x_1723_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_1712_, v_a_1722_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1725_ = lean_unsigned_to_nat(2u);
v___x_1726_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1713_, v_args_1715_, v___x_1725_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1728_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref_known(v___x_1726_, 1);
v___x_1728_ = lean_apply_4(v_f_1714_, v_a_1719_, v_a_1724_, v_a_1727_, lean_box(0));
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1731_; uint8_t v_isShared_1732_; uint8_t v_isSharedCheck_1738_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1738_ == 0)
{
v___x_1731_ = v___x_1728_;
v_isShared_1732_ = v_isSharedCheck_1738_;
goto v_resetjp_1730_;
}
else
{
lean_inc(v_a_1729_);
lean_dec(v___x_1728_);
v___x_1731_ = lean_box(0);
v_isShared_1732_ = v_isSharedCheck_1738_;
goto v_resetjp_1730_;
}
v_resetjp_1730_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
v___x_1733_ = lean_mk_string_unchecked("", 0, 0);
v___x_1734_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1734_, 0, v_a_1729_);
lean_ctor_set(v___x_1734_, 1, v___x_1733_);
if (v_isShared_1732_ == 0)
{
lean_ctor_set(v___x_1731_, 0, v___x_1734_);
v___x_1736_ = v___x_1731_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v___x_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
else
{
lean_object* v_a_1739_; lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1746_; 
v_a_1739_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1746_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1746_ == 0)
{
v___x_1741_ = v___x_1728_;
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
else
{
lean_inc(v_a_1739_);
lean_dec(v___x_1728_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1746_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v___x_1744_; 
if (v_isShared_1742_ == 0)
{
v___x_1744_ = v___x_1741_;
goto v_reusejp_1743_;
}
else
{
lean_object* v_reuseFailAlloc_1745_; 
v_reuseFailAlloc_1745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1745_, 0, v_a_1739_);
v___x_1744_ = v_reuseFailAlloc_1745_;
goto v_reusejp_1743_;
}
v_reusejp_1743_:
{
return v___x_1744_;
}
}
}
}
else
{
lean_object* v_a_1747_; lean_object* v___x_1749_; uint8_t v_isShared_1750_; uint8_t v_isSharedCheck_1754_; 
lean_dec(v_a_1724_);
lean_dec(v_a_1719_);
lean_dec_ref(v_f_1714_);
v_a_1747_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1749_ = v___x_1726_;
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
else
{
lean_inc(v_a_1747_);
lean_dec(v___x_1726_);
v___x_1749_ = lean_box(0);
v_isShared_1750_ = v_isSharedCheck_1754_;
goto v_resetjp_1748_;
}
v_resetjp_1748_:
{
lean_object* v___x_1752_; 
if (v_isShared_1750_ == 0)
{
v___x_1752_ = v___x_1749_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v_a_1747_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
lean_dec(v_a_1719_);
lean_dec_ref(v_f_1714_);
lean_dec_ref(v___x_1713_);
v_a_1755_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1757_ = v___x_1723_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1723_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1755_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
else
{
lean_dec(v_a_1719_);
lean_dec_ref(v_f_1714_);
lean_dec_ref(v___x_1713_);
lean_dec_ref(v_inst_1712_);
return v___x_1721_;
}
}
else
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1770_; 
lean_dec_ref(v_f_1714_);
lean_dec_ref(v___x_1713_);
lean_dec_ref(v_inst_1712_);
lean_dec_ref(v___x_1711_);
v_a_1763_ = lean_ctor_get(v___x_1718_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1718_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1765_ = v___x_1718_;
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1718_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1770_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
return v___x_1768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_1771_, lean_object* v___x_1772_, lean_object* v_inst_1773_, lean_object* v___x_1774_, lean_object* v_f_1775_, lean_object* v_args_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v_res_1778_; 
v_res_1778_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0(v___x_1771_, v___x_1772_, v_inst_1773_, v___x_1774_, v_f_1775_, v_args_1776_);
lean_dec_ref(v_args_1776_);
return v_res_1778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(lean_object* v_inst_1779_, lean_object* v_f_1780_){
_start:
{
lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___f_1785_; lean_object* v___f_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1782_ = l_Lasm_JS_Web_instFromJSRequest;
v___x_1783_ = l_Lasm_JS_instFromJSData;
v___x_1784_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_1785_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_1785_, 0, v___x_1782_);
lean_closure_set(v___f_1785_, 1, v___x_1783_);
lean_closure_set(v___f_1785_, 2, v_inst_1779_);
lean_closure_set(v___f_1785_, 3, v___x_1784_);
lean_closure_set(v___f_1785_, 4, v_f_1780_);
v___f_1786_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_1787_ = l_Lasm_JS_instFromJSValue;
v___x_1788_ = lean_unsigned_to_nat(0u);
v___x_1789_ = l_Lasm_JS_Function_ofSyncFn(v___f_1785_, v___x_1788_);
if (lean_obj_tag(v___x_1789_) == 0)
{
lean_object* v_a_1790_; lean_object* v___x_1791_; 
v_a_1790_ = lean_ctor_get(v___x_1789_, 0);
lean_inc(v_a_1790_);
lean_dec_ref_known(v___x_1789_, 1);
v___x_1791_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1791_) == 0)
{
lean_object* v_a_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_a_1792_ = lean_ctor_get(v___x_1791_, 0);
lean_inc(v_a_1792_);
lean_dec_ref_known(v___x_1791_, 1);
v___x_1793_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1794_ = l_Lasm_JS_Value_get___redArg(v___f_1786_, v_a_1792_, v___x_1793_, v___x_1787_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_object* v_a_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___y_1803_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
v_a_1795_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_a_1795_);
lean_dec_ref_known(v___x_1794_, 1);
v___x_1796_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1797_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1790_);
v___x_1798_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1798_, 0, v_a_1790_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
v___x_1799_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1800_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1799_);
v___x_1801_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1830_ = lean_unsigned_to_nat(3u);
v___x_1831_ = lean_nat_to_int(v___x_1830_);
v___x_1832_ = lean_nat_abs(v___x_1831_);
v___x_1833_ = lean_cstr_to_nat("9007199254740991");
v___x_1834_ = lean_nat_dec_le(v___x_1832_, v___x_1833_);
lean_dec(v___x_1832_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
v___x_1835_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1835_, 0, v___x_1831_);
v___y_1803_ = v___x_1835_;
goto v___jp_1802_;
}
else
{
double v___x_1836_; lean_object* v___x_1837_; 
v___x_1836_ = l_Float_ofInt(v___x_1831_);
lean_dec(v___x_1831_);
v___x_1837_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1837_, 0, v___x_1836_);
v___y_1803_ = v___x_1837_;
goto v___jp_1802_;
}
v___jp_1802_:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1801_);
lean_ctor_set(v___x_1804_, 1, v___y_1803_);
v___x_1805_ = lean_box(0);
v___x_1806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1804_);
lean_ctor_set(v___x_1806_, 1, v___x_1805_);
v___x_1807_ = l_Lasm_JS_obj(v___x_1806_);
v___x_1808_ = lean_unsigned_to_nat(3u);
v___x_1809_ = lean_mk_empty_array_with_capacity(v___x_1808_);
v___x_1810_ = lean_array_push(v___x_1809_, v___x_1798_);
v___x_1811_ = lean_array_push(v___x_1810_, v___x_1800_);
v___x_1812_ = lean_array_push(v___x_1811_, v___x_1807_);
v___x_1813_ = l_Lasm_JS_Value_callMethod___redArg(v_a_1795_, v___x_1796_, v___x_1812_, v___x_1787_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1820_; 
v_isSharedCheck_1820_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1820_ == 0)
{
lean_object* v_unused_1821_; 
v_unused_1821_ = lean_ctor_get(v___x_1813_, 0);
lean_dec(v_unused_1821_);
v___x_1815_ = v___x_1813_;
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
else
{
lean_dec(v___x_1813_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1820_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 0, v_a_1790_);
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1790_);
v___x_1818_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
return v___x_1818_;
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1829_; 
lean_dec(v_a_1790_);
v_a_1822_ = lean_ctor_get(v___x_1813_, 0);
v_isSharedCheck_1829_ = !lean_is_exclusive(v___x_1813_);
if (v_isSharedCheck_1829_ == 0)
{
v___x_1824_ = v___x_1813_;
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v___x_1813_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1829_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1828_; 
v_reuseFailAlloc_1828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1828_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1828_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
return v___x_1827_;
}
}
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec(v_a_1790_);
v_a_1838_ = lean_ctor_get(v___x_1794_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1794_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1794_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1794_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
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
return v___x_1843_;
}
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec(v_a_1790_);
lean_dec_ref(v___f_1786_);
v_a_1846_ = lean_ctor_get(v___x_1791_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1791_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1791_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1791_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
else
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
lean_dec_ref(v___f_1786_);
v_a_1854_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1789_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1789_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_1862_, lean_object* v_f_1863_, lean_object* v_a_1864_){
_start:
{
lean_object* v_res_1865_; 
v_res_1865_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_1862_, v_f_1863_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(lean_object* v_Env_1866_, lean_object* v_inst_1867_, lean_object* v_f_1868_){
_start:
{
lean_object* v___x_1870_; 
v___x_1870_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___redArg(v_inst_1867_, v_f_1868_);
return v___x_1870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn___boxed(lean_object* v_Env_1871_, lean_object* v_inst_1872_, lean_object* v_f_1873_, lean_object* v_a_1874_){
_start:
{
lean_object* v_res_1875_; 
v_res_1875_ = l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofSyncFn(v_Env_1871_, v_inst_1872_, v_f_1873_);
return v_res_1875_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerScheduledHandler(void){
_start:
{
lean_object* v___f_1877_; lean_object* v___x_1878_; uint8_t v___x_1879_; lean_object* v___x_1880_; 
v___f_1877_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_1878_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ExportedHandlerScheduledHandler", 50, 50);
v___x_1879_ = 0;
v___x_1880_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1880_, 0, v___f_1877_);
lean_ctor_set(v___x_1880_, 1, v___x_1878_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*2, v___x_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(lean_object* v_x_1881_){
_start:
{
if (lean_obj_tag(v_x_1881_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1891_; 
v_a_1883_ = lean_ctor_get(v_x_1881_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v_x_1881_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1885_ = v_x_1881_;
v_isShared_1886_ = v_isSharedCheck_1891_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v_x_1881_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1891_;
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
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1883_);
v___x_1888_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1887_;
}
v_reusejp_1887_:
{
lean_object* v___x_1889_; 
v___x_1889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1889_, 0, v___x_1888_);
return v___x_1889_;
}
}
}
else
{
lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1900_; 
v_isSharedCheck_1900_ = !lean_is_exclusive(v_x_1881_);
if (v_isSharedCheck_1900_ == 0)
{
lean_object* v_unused_1901_; 
v_unused_1901_ = lean_ctor_get(v_x_1881_, 0);
lean_dec(v_unused_1901_);
v___x_1893_ = v_x_1881_;
v_isShared_1894_ = v_isSharedCheck_1900_;
goto v_resetjp_1892_;
}
else
{
lean_dec(v_x_1881_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1900_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1895_; lean_object* v___x_1897_; 
v___x_1895_ = lean_box(0);
if (v_isShared_1894_ == 0)
{
lean_ctor_set(v___x_1893_, 0, v___x_1895_);
v___x_1897_ = v___x_1893_;
goto v_reusejp_1896_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1895_);
v___x_1897_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1896_;
}
v_reusejp_1896_:
{
lean_object* v___x_1898_; 
v___x_1898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
return v___x_1898_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed(lean_object* v_x_1902_, lean_object* v___y_1903_){
_start:
{
lean_object* v_res_1904_; 
v_res_1904_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0(v_x_1902_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(lean_object* v_f_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v___f_1908_, lean_object* v_x_1909_){
_start:
{
if (lean_obj_tag(v_x_1909_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1919_; 
lean_dec_ref(v___f_1908_);
lean_dec(v_a_1907_);
lean_dec(v_a_1906_);
lean_dec_ref(v_f_1905_);
v_a_1911_ = lean_ctor_get(v_x_1909_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_x_1909_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1913_ = v_x_1909_;
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v_x_1909_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1917_; 
v___x_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
return v___x_1917_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1921_; uint8_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v_a_1920_ = lean_ctor_get(v_x_1909_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v_x_1909_, 1);
v___x_1921_ = lean_unsigned_to_nat(0u);
v___x_1922_ = 0;
v___x_1923_ = lean_apply_4(v_f_1905_, v_a_1906_, v_a_1907_, v_a_1920_, lean_box(0));
v___x_1924_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1921_, v___x_1922_, v___x_1923_, v___f_1908_);
return v___x_1924_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_1925_, lean_object* v_a_1926_, lean_object* v_a_1927_, lean_object* v___f_1928_, lean_object* v_x_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1(v_f_1925_, v_a_1926_, v_a_1927_, v___f_1928_, v_x_1929_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(lean_object* v_f_1932_, lean_object* v_a_1933_, lean_object* v___f_1934_, lean_object* v___x_1935_, lean_object* v_args_1936_, lean_object* v_x_1937_){
_start:
{
if (lean_obj_tag(v_x_1937_) == 0)
{
lean_object* v_a_1939_; lean_object* v___x_1941_; uint8_t v_isShared_1942_; uint8_t v_isSharedCheck_1947_; 
lean_dec_ref(v___x_1935_);
lean_dec_ref(v___f_1934_);
lean_dec(v_a_1933_);
lean_dec_ref(v_f_1932_);
v_a_1939_ = lean_ctor_get(v_x_1937_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_x_1937_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1941_ = v_x_1937_;
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
else
{
lean_inc(v_a_1939_);
lean_dec(v_x_1937_);
v___x_1941_ = lean_box(0);
v_isShared_1942_ = v_isSharedCheck_1947_;
goto v_resetjp_1940_;
}
v_resetjp_1940_:
{
lean_object* v___x_1944_; 
if (v_isShared_1942_ == 0)
{
v___x_1944_ = v___x_1941_;
goto v_reusejp_1943_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1939_);
v___x_1944_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1943_;
}
v_reusejp_1943_:
{
lean_object* v___x_1945_; 
v___x_1945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1944_);
return v___x_1945_;
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1969_; 
v_a_1948_ = lean_ctor_get(v_x_1937_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_x_1937_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1950_ = v_x_1937_;
v_isShared_1951_ = v_isSharedCheck_1969_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v_x_1937_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1969_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___f_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; uint8_t v___x_1955_; lean_object* v_val_1957_; lean_object* v___x_1960_; 
v___f_1952_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_1952_, 0, v_f_1932_);
lean_closure_set(v___f_1952_, 1, v_a_1933_);
lean_closure_set(v___f_1952_, 2, v_a_1948_);
lean_closure_set(v___f_1952_, 3, v___f_1934_);
v___x_1953_ = lean_unsigned_to_nat(2u);
v___x_1954_ = lean_unsigned_to_nat(0u);
v___x_1955_ = 0;
v___x_1960_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1935_, v_args_1936_, v___x_1953_);
if (lean_obj_tag(v___x_1960_) == 0)
{
lean_object* v_a_1961_; lean_object* v___x_1963_; 
v_a_1961_ = lean_ctor_get(v___x_1960_, 0);
lean_inc(v_a_1961_);
lean_dec_ref_known(v___x_1960_, 1);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v_a_1961_);
v___x_1963_ = v___x_1950_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1961_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
v_val_1957_ = v___x_1963_;
goto v___jp_1956_;
}
}
else
{
lean_object* v_a_1965_; lean_object* v___x_1967_; 
v_a_1965_ = lean_ctor_get(v___x_1960_, 0);
lean_inc(v_a_1965_);
lean_dec_ref_known(v___x_1960_, 1);
if (v_isShared_1951_ == 0)
{
lean_ctor_set_tag(v___x_1950_, 0);
lean_ctor_set(v___x_1950_, 0, v_a_1965_);
v___x_1967_ = v___x_1950_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1965_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
v_val_1957_ = v___x_1967_;
goto v___jp_1956_;
}
}
v___jp_1956_:
{
lean_object* v___x_1958_; lean_object* v___x_1959_; 
v___x_1958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1958_, 0, v_val_1957_);
v___x_1959_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1954_, v___x_1955_, v___x_1958_, v___f_1952_);
return v___x_1959_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_1970_, lean_object* v_a_1971_, lean_object* v___f_1972_, lean_object* v___x_1973_, lean_object* v_args_1974_, lean_object* v_x_1975_, lean_object* v___y_1976_){
_start:
{
lean_object* v_res_1977_; 
v_res_1977_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2(v_f_1970_, v_a_1971_, v___f_1972_, v___x_1973_, v_args_1974_, v_x_1975_);
lean_dec_ref(v_args_1974_);
return v_res_1977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(lean_object* v_f_1978_, lean_object* v___f_1979_, lean_object* v___x_1980_, lean_object* v_args_1981_, lean_object* v_inst_1982_, lean_object* v___x_1983_, lean_object* v_x_1984_){
_start:
{
if (lean_obj_tag(v_x_1984_) == 0)
{
lean_object* v_a_1986_; lean_object* v___x_1988_; uint8_t v_isShared_1989_; uint8_t v_isSharedCheck_1994_; 
lean_dec_ref(v___x_1983_);
lean_dec_ref(v_inst_1982_);
lean_dec_ref(v_args_1981_);
lean_dec_ref(v___x_1980_);
lean_dec_ref(v___f_1979_);
lean_dec_ref(v_f_1978_);
v_a_1986_ = lean_ctor_get(v_x_1984_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v_x_1984_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1988_ = v_x_1984_;
v_isShared_1989_ = v_isSharedCheck_1994_;
goto v_resetjp_1987_;
}
else
{
lean_inc(v_a_1986_);
lean_dec(v_x_1984_);
v___x_1988_ = lean_box(0);
v_isShared_1989_ = v_isSharedCheck_1994_;
goto v_resetjp_1987_;
}
v_resetjp_1987_:
{
lean_object* v___x_1991_; 
if (v_isShared_1989_ == 0)
{
v___x_1991_ = v___x_1988_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1986_);
v___x_1991_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
lean_object* v___x_1992_; 
v___x_1992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1991_);
return v___x_1992_;
}
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2017_; 
v_a_1995_ = lean_ctor_get(v_x_1984_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v_x_1984_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_1997_ = v_x_1984_;
v_isShared_1998_ = v_isSharedCheck_2017_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v_x_1984_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2017_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___f_1999_; lean_object* v___f_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; uint8_t v___x_2003_; lean_object* v_val_2005_; lean_object* v___x_2008_; 
lean_inc_ref(v_args_1981_);
v___f_1999_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__2___boxed), 7, 5);
lean_closure_set(v___f_1999_, 0, v_f_1978_);
lean_closure_set(v___f_1999_, 1, v_a_1995_);
lean_closure_set(v___f_1999_, 2, v___f_1979_);
lean_closure_set(v___f_1999_, 3, v___x_1980_);
lean_closure_set(v___f_1999_, 4, v_args_1981_);
v___f_2000_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2000_, 0, v___f_1999_);
lean_closure_set(v___f_2000_, 1, v_inst_1982_);
v___x_2001_ = lean_unsigned_to_nat(1u);
v___x_2002_ = lean_unsigned_to_nat(0u);
v___x_2003_ = 0;
v___x_2008_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_1983_, v_args_1981_, v___x_2001_);
lean_dec_ref(v_args_1981_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v_a_2009_; lean_object* v___x_2011_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_a_2009_);
lean_dec_ref_known(v___x_2008_, 1);
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v_a_2009_);
v___x_2011_ = v___x_1997_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v_a_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
v_val_2005_ = v___x_2011_;
goto v___jp_2004_;
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; 
v_a_2013_ = lean_ctor_get(v___x_2008_, 0);
lean_inc(v_a_2013_);
lean_dec_ref_known(v___x_2008_, 1);
if (v_isShared_1998_ == 0)
{
lean_ctor_set_tag(v___x_1997_, 0);
lean_ctor_set(v___x_1997_, 0, v_a_2013_);
v___x_2015_ = v___x_1997_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2013_);
v___x_2015_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
v_val_2005_ = v___x_2015_;
goto v___jp_2004_;
}
}
v___jp_2004_:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2006_, 0, v_val_2005_);
v___x_2007_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2002_, v___x_2003_, v___x_2006_, v___f_2000_);
return v___x_2007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed(lean_object* v_f_2018_, lean_object* v___f_2019_, lean_object* v___x_2020_, lean_object* v_args_2021_, lean_object* v_inst_2022_, lean_object* v___x_2023_, lean_object* v_x_2024_, lean_object* v___y_2025_){
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4(v_f_2018_, v___f_2019_, v___x_2020_, v_args_2021_, v_inst_2022_, v___x_2023_, v_x_2024_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(lean_object* v_f_2027_, lean_object* v___f_2028_, lean_object* v___x_2029_, lean_object* v_inst_2030_, lean_object* v___x_2031_, lean_object* v___x_2032_, lean_object* v_args_2033_){
_start:
{
lean_object* v___f_2035_; lean_object* v___x_2036_; uint8_t v___x_2037_; lean_object* v_val_2039_; lean_object* v___x_2042_; 
lean_inc_ref(v_args_2033_);
v___f_2035_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__4___boxed), 8, 6);
lean_closure_set(v___f_2035_, 0, v_f_2027_);
lean_closure_set(v___f_2035_, 1, v___f_2028_);
lean_closure_set(v___f_2035_, 2, v___x_2029_);
lean_closure_set(v___f_2035_, 3, v_args_2033_);
lean_closure_set(v___f_2035_, 4, v_inst_2030_);
lean_closure_set(v___f_2035_, 5, v___x_2031_);
v___x_2036_ = lean_unsigned_to_nat(0u);
v___x_2037_ = 0;
v___x_2042_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2032_, v_args_2033_, v___x_2036_);
lean_dec_ref(v_args_2033_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
lean_ctor_set_tag(v___x_2045_, 1);
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
v_val_2039_ = v___x_2048_;
goto v___jp_2038_;
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
v_a_2051_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2042_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2042_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
lean_ctor_set_tag(v___x_2053_, 0);
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
v_val_2039_ = v___x_2056_;
goto v___jp_2038_;
}
}
}
v___jp_2038_:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2040_, 0, v_val_2039_);
v___x_2041_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2036_, v___x_2037_, v___x_2040_, v___f_2035_);
return v___x_2041_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed(lean_object* v_f_2059_, lean_object* v___f_2060_, lean_object* v___x_2061_, lean_object* v_inst_2062_, lean_object* v___x_2063_, lean_object* v___x_2064_, lean_object* v_args_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3(v_f_2059_, v___f_2060_, v___x_2061_, v_inst_2062_, v___x_2063_, v___x_2064_, v_args_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(lean_object* v_inst_2068_, lean_object* v_f_2069_){
_start:
{
lean_object* v___f_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___f_2075_; lean_object* v___f_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___f_2071_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___x_2072_ = l_Lasm_JS_Cloudflare_instFromJSScheduledController;
v___x_2073_ = l_Lasm_JS_instFromJSData;
v___x_2074_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2075_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_2075_, 0, v_f_2069_);
lean_closure_set(v___f_2075_, 1, v___f_2071_);
lean_closure_set(v___f_2075_, 2, v___x_2074_);
lean_closure_set(v___f_2075_, 3, v_inst_2068_);
lean_closure_set(v___f_2075_, 4, v___x_2073_);
lean_closure_set(v___f_2075_, 5, v___x_2072_);
v___f_2076_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2077_ = l_Lasm_JS_instFromJSValue;
v___x_2078_ = lean_unsigned_to_nat(0u);
v___x_2079_ = l_Lasm_JS_Function_ofFn(v___f_2075_, v___x_2078_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_object* v_a_2080_; lean_object* v___x_2081_; 
v_a_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_a_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v___x_2081_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
lean_inc(v_a_2082_);
lean_dec_ref_known(v___x_2081_, 1);
v___x_2083_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2084_ = l_Lasm_JS_Value_get___redArg(v___f_2076_, v_a_2082_, v___x_2083_, v___x_2077_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___y_2093_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; uint8_t v___x_2124_; 
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2084_, 1);
v___x_2086_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2087_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2080_);
v___x_2088_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2088_, 0, v_a_2080_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2090_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2089_);
v___x_2091_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2120_ = lean_unsigned_to_nat(3u);
v___x_2121_ = lean_nat_to_int(v___x_2120_);
v___x_2122_ = lean_nat_abs(v___x_2121_);
v___x_2123_ = lean_cstr_to_nat("9007199254740991");
v___x_2124_ = lean_nat_dec_le(v___x_2122_, v___x_2123_);
lean_dec(v___x_2122_);
if (v___x_2124_ == 0)
{
lean_object* v___x_2125_; 
v___x_2125_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2121_);
v___y_2093_ = v___x_2125_;
goto v___jp_2092_;
}
else
{
double v___x_2126_; lean_object* v___x_2127_; 
v___x_2126_ = l_Float_ofInt(v___x_2121_);
lean_dec(v___x_2121_);
v___x_2127_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2127_, 0, v___x_2126_);
v___y_2093_ = v___x_2127_;
goto v___jp_2092_;
}
v___jp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
v___x_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2091_);
lean_ctor_set(v___x_2094_, 1, v___y_2093_);
v___x_2095_ = lean_box(0);
v___x_2096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2094_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
v___x_2097_ = l_Lasm_JS_obj(v___x_2096_);
v___x_2098_ = lean_unsigned_to_nat(3u);
v___x_2099_ = lean_mk_empty_array_with_capacity(v___x_2098_);
v___x_2100_ = lean_array_push(v___x_2099_, v___x_2088_);
v___x_2101_ = lean_array_push(v___x_2100_, v___x_2090_);
v___x_2102_ = lean_array_push(v___x_2101_, v___x_2097_);
v___x_2103_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2085_, v___x_2086_, v___x_2102_, v___x_2077_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2110_ == 0)
{
lean_object* v_unused_2111_; 
v_unused_2111_ = lean_ctor_get(v___x_2103_, 0);
lean_dec(v_unused_2111_);
v___x_2105_ = v___x_2103_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_dec(v___x_2103_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v_a_2080_);
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2080_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
else
{
lean_object* v_a_2112_; lean_object* v___x_2114_; uint8_t v_isShared_2115_; uint8_t v_isSharedCheck_2119_; 
lean_dec(v_a_2080_);
v_a_2112_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2114_ = v___x_2103_;
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
else
{
lean_inc(v_a_2112_);
lean_dec(v___x_2103_);
v___x_2114_ = lean_box(0);
v_isShared_2115_ = v_isSharedCheck_2119_;
goto v_resetjp_2113_;
}
v_resetjp_2113_:
{
lean_object* v___x_2117_; 
if (v_isShared_2115_ == 0)
{
v___x_2117_ = v___x_2114_;
goto v_reusejp_2116_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_a_2112_);
v___x_2117_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2116_;
}
v_reusejp_2116_:
{
return v___x_2117_;
}
}
}
}
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
lean_dec(v_a_2080_);
v_a_2128_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2084_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2084_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
lean_dec(v_a_2080_);
lean_dec_ref(v___f_2076_);
v_a_2136_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2081_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2081_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
else
{
lean_object* v_a_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2151_; 
lean_dec_ref(v___f_2076_);
v_a_2144_ = lean_ctor_get(v___x_2079_, 0);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2079_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2146_ = v___x_2079_;
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_a_2144_);
lean_dec(v___x_2079_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___x_2149_; 
if (v_isShared_2147_ == 0)
{
v___x_2149_ = v___x_2146_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_a_2144_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___boxed(lean_object* v_inst_2152_, lean_object* v_f_2153_, lean_object* v_a_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_2152_, v_f_2153_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(lean_object* v_Env_2156_, lean_object* v_inst_2157_, lean_object* v_f_2158_){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg(v_inst_2157_, v_f_2158_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___boxed(lean_object* v_Env_2161_, lean_object* v_inst_2162_, lean_object* v_f_2163_, lean_object* v_a_2164_){
_start:
{
lean_object* v_res_2165_; 
v_res_2165_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn(v_Env_2161_, v_inst_2162_, v_f_2163_);
return v_res_2165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_2166_, lean_object* v___x_2167_, lean_object* v_inst_2168_, lean_object* v___x_2169_, lean_object* v_f_2170_, lean_object* v_args_2171_){
_start:
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2173_ = lean_unsigned_to_nat(0u);
v___x_2174_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2166_, v_args_2171_, v___x_2173_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
lean_inc(v_a_2175_);
lean_dec_ref_known(v___x_2174_, 1);
v___x_2176_ = lean_unsigned_to_nat(1u);
v___x_2177_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2167_, v_args_2171_, v___x_2176_);
if (lean_obj_tag(v___x_2177_) == 0)
{
lean_object* v_a_2178_; lean_object* v___x_2179_; 
v_a_2178_ = lean_ctor_get(v___x_2177_, 0);
lean_inc(v_a_2178_);
lean_dec_ref_known(v___x_2177_, 1);
v___x_2179_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_2168_, v_a_2178_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
lean_inc(v_a_2180_);
lean_dec_ref_known(v___x_2179_, 1);
v___x_2181_ = lean_unsigned_to_nat(2u);
v___x_2182_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2169_, v_args_2171_, v___x_2181_);
if (lean_obj_tag(v___x_2182_) == 0)
{
lean_object* v_a_2183_; lean_object* v___x_2184_; 
v_a_2183_ = lean_ctor_get(v___x_2182_, 0);
lean_inc(v_a_2183_);
lean_dec_ref_known(v___x_2182_, 1);
v___x_2184_ = lean_apply_4(v_f_2170_, v_a_2175_, v_a_2180_, v_a_2183_, lean_box(0));
if (lean_obj_tag(v___x_2184_) == 0)
{
lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2192_; 
v_isSharedCheck_2192_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2192_ == 0)
{
lean_object* v_unused_2193_; 
v_unused_2193_ = lean_ctor_get(v___x_2184_, 0);
lean_dec(v_unused_2193_);
v___x_2186_ = v___x_2184_;
v_isShared_2187_ = v_isSharedCheck_2192_;
goto v_resetjp_2185_;
}
else
{
lean_dec(v___x_2184_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2192_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2188_; lean_object* v___x_2190_; 
v___x_2188_ = lean_box(0);
if (v_isShared_2187_ == 0)
{
lean_ctor_set(v___x_2186_, 0, v___x_2188_);
v___x_2190_ = v___x_2186_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v___x_2188_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
else
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
v_a_2194_ = lean_ctor_get(v___x_2184_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2184_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2184_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2184_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
lean_dec(v_a_2180_);
lean_dec(v_a_2175_);
lean_dec_ref(v_f_2170_);
v_a_2202_ = lean_ctor_get(v___x_2182_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2182_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2182_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2182_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec(v_a_2175_);
lean_dec_ref(v_f_2170_);
lean_dec_ref(v___x_2169_);
v_a_2210_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2179_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2179_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
else
{
lean_dec(v_a_2175_);
lean_dec_ref(v_f_2170_);
lean_dec_ref(v___x_2169_);
lean_dec_ref(v_inst_2168_);
return v___x_2177_;
}
}
else
{
lean_object* v_a_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2225_; 
lean_dec_ref(v_f_2170_);
lean_dec_ref(v___x_2169_);
lean_dec_ref(v_inst_2168_);
lean_dec_ref(v___x_2167_);
v_a_2218_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2225_ == 0)
{
v___x_2220_ = v___x_2174_;
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_a_2218_);
lean_dec(v___x_2174_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2225_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
lean_object* v___x_2223_; 
if (v_isShared_2221_ == 0)
{
v___x_2223_ = v___x_2220_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2218_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_2226_, lean_object* v___x_2227_, lean_object* v_inst_2228_, lean_object* v___x_2229_, lean_object* v_f_2230_, lean_object* v_args_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0(v___x_2226_, v___x_2227_, v_inst_2228_, v___x_2229_, v_f_2230_, v_args_2231_);
lean_dec_ref(v_args_2231_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(lean_object* v_inst_2234_, lean_object* v_f_2235_){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___f_2240_; lean_object* v___f_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2237_ = l_Lasm_JS_Cloudflare_instFromJSScheduledController;
v___x_2238_ = l_Lasm_JS_instFromJSData;
v___x_2239_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2240_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2240_, 0, v___x_2237_);
lean_closure_set(v___f_2240_, 1, v___x_2238_);
lean_closure_set(v___f_2240_, 2, v_inst_2234_);
lean_closure_set(v___f_2240_, 3, v___x_2239_);
lean_closure_set(v___f_2240_, 4, v_f_2235_);
v___f_2241_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2242_ = l_Lasm_JS_instFromJSValue;
v___x_2243_ = lean_unsigned_to_nat(0u);
v___x_2244_ = l_Lasm_JS_Function_ofSyncFn(v___f_2240_, v___x_2243_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2246_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
lean_inc(v_a_2245_);
lean_dec_ref_known(v___x_2244_, 1);
v___x_2246_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2248_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2249_ = l_Lasm_JS_Value_get___redArg(v___f_2241_, v_a_2247_, v___x_2248_, v___x_2242_);
if (lean_obj_tag(v___x_2249_) == 0)
{
lean_object* v_a_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___y_2258_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; uint8_t v___x_2289_; 
v_a_2250_ = lean_ctor_get(v___x_2249_, 0);
lean_inc(v_a_2250_);
lean_dec_ref_known(v___x_2249_, 1);
v___x_2251_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2252_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2245_);
v___x_2253_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2253_, 0, v_a_2245_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2255_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2255_, 0, v___x_2254_);
v___x_2256_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2285_ = lean_unsigned_to_nat(3u);
v___x_2286_ = lean_nat_to_int(v___x_2285_);
v___x_2287_ = lean_nat_abs(v___x_2286_);
v___x_2288_ = lean_cstr_to_nat("9007199254740991");
v___x_2289_ = lean_nat_dec_le(v___x_2287_, v___x_2288_);
lean_dec(v___x_2287_);
if (v___x_2289_ == 0)
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2290_, 0, v___x_2286_);
v___y_2258_ = v___x_2290_;
goto v___jp_2257_;
}
else
{
double v___x_2291_; lean_object* v___x_2292_; 
v___x_2291_ = l_Float_ofInt(v___x_2286_);
lean_dec(v___x_2286_);
v___x_2292_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2292_, 0, v___x_2291_);
v___y_2258_ = v___x_2292_;
goto v___jp_2257_;
}
v___jp_2257_:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2256_);
lean_ctor_set(v___x_2259_, 1, v___y_2258_);
v___x_2260_ = lean_box(0);
v___x_2261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2261_, 0, v___x_2259_);
lean_ctor_set(v___x_2261_, 1, v___x_2260_);
v___x_2262_ = l_Lasm_JS_obj(v___x_2261_);
v___x_2263_ = lean_unsigned_to_nat(3u);
v___x_2264_ = lean_mk_empty_array_with_capacity(v___x_2263_);
v___x_2265_ = lean_array_push(v___x_2264_, v___x_2253_);
v___x_2266_ = lean_array_push(v___x_2265_, v___x_2255_);
v___x_2267_ = lean_array_push(v___x_2266_, v___x_2262_);
v___x_2268_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2250_, v___x_2251_, v___x_2267_, v___x_2242_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2275_ == 0)
{
lean_object* v_unused_2276_; 
v_unused_2276_ = lean_ctor_get(v___x_2268_, 0);
lean_dec(v_unused_2276_);
v___x_2270_ = v___x_2268_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_dec(v___x_2268_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
lean_ctor_set(v___x_2270_, 0, v_a_2245_);
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2245_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
else
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec(v_a_2245_);
v_a_2277_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2268_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2268_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
}
}
else
{
lean_object* v_a_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2300_; 
lean_dec(v_a_2245_);
v_a_2293_ = lean_ctor_get(v___x_2249_, 0);
v_isSharedCheck_2300_ = !lean_is_exclusive(v___x_2249_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2295_ = v___x_2249_;
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_a_2293_);
lean_dec(v___x_2249_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2300_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
lean_object* v___x_2298_; 
if (v_isShared_2296_ == 0)
{
v___x_2298_ = v___x_2295_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2299_; 
v_reuseFailAlloc_2299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2299_, 0, v_a_2293_);
v___x_2298_ = v_reuseFailAlloc_2299_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
return v___x_2298_;
}
}
}
}
else
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2308_; 
lean_dec(v_a_2245_);
lean_dec_ref(v___f_2241_);
v_a_2301_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2308_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2308_ == 0)
{
v___x_2303_ = v___x_2246_;
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2246_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2308_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2306_; 
if (v_isShared_2304_ == 0)
{
v___x_2306_ = v___x_2303_;
goto v_reusejp_2305_;
}
else
{
lean_object* v_reuseFailAlloc_2307_; 
v_reuseFailAlloc_2307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2307_, 0, v_a_2301_);
v___x_2306_ = v_reuseFailAlloc_2307_;
goto v_reusejp_2305_;
}
v_reusejp_2305_:
{
return v___x_2306_;
}
}
}
}
else
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2316_; 
lean_dec_ref(v___f_2241_);
v_a_2309_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2316_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2311_ = v___x_2244_;
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v___x_2244_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2316_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v_a_2309_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_2317_, lean_object* v_f_2318_, lean_object* v_a_2319_){
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_2317_, v_f_2318_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(lean_object* v_Env_2321_, lean_object* v_inst_2322_, lean_object* v_f_2323_){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___redArg(v_inst_2322_, v_f_2323_);
return v___x_2325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn___boxed(lean_object* v_Env_2326_, lean_object* v_inst_2327_, lean_object* v_f_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofSyncFn(v_Env_2326_, v_inst_2327_, v_f_2328_);
return v_res_2330_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSExportedHandlerTestHandler(void){
_start:
{
lean_object* v___f_2332_; lean_object* v___x_2333_; uint8_t v___x_2334_; lean_object* v___x_2335_; 
v___f_2332_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_2333_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.ExportedHandlerTestHandler", 45, 45);
v___x_2334_ = 0;
v___x_2335_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2335_, 0, v___f_2332_);
lean_ctor_set(v___x_2335_, 1, v___x_2333_);
lean_ctor_set_uint8(v___x_2335_, sizeof(void*)*2, v___x_2334_);
return v___x_2335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1(lean_object* v_f_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v___f_2339_, lean_object* v_x_2340_){
_start:
{
if (lean_obj_tag(v_x_2340_) == 0)
{
lean_object* v_a_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2350_; 
lean_dec_ref(v___f_2339_);
lean_dec(v_a_2338_);
lean_dec_ref(v_f_2336_);
v_a_2342_ = lean_ctor_get(v_x_2340_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_x_2340_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2344_ = v_x_2340_;
v_isShared_2345_ = v_isSharedCheck_2350_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_a_2342_);
lean_dec(v_x_2340_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2350_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2345_ == 0)
{
v___x_2347_ = v___x_2344_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2342_);
v___x_2347_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
lean_object* v___x_2348_; 
v___x_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
return v___x_2348_;
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; 
v_a_2351_ = lean_ctor_get(v_x_2340_, 0);
lean_inc(v_a_2351_);
lean_dec_ref_known(v_x_2340_, 1);
v___x_2352_ = lean_unsigned_to_nat(0u);
v___x_2353_ = 0;
v___x_2354_ = lean_apply_4(v_f_2336_, v_a_2337_, v_a_2338_, v_a_2351_, lean_box(0));
v___x_2355_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2352_, v___x_2353_, v___x_2354_, v___f_2339_);
return v___x_2355_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1___boxed(lean_object* v_f_2356_, lean_object* v_a_2357_, lean_object* v_a_2358_, lean_object* v___f_2359_, lean_object* v_x_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1(v_f_2356_, v_a_2357_, v_a_2358_, v___f_2359_, v_x_2360_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0(lean_object* v_f_2363_, lean_object* v_a_2364_, lean_object* v___f_2365_, lean_object* v___x_2366_, lean_object* v_args_2367_, lean_object* v_x_2368_){
_start:
{
if (lean_obj_tag(v_x_2368_) == 0)
{
lean_object* v_a_2370_; lean_object* v___x_2372_; uint8_t v_isShared_2373_; uint8_t v_isSharedCheck_2378_; 
lean_dec_ref(v___x_2366_);
lean_dec_ref(v___f_2365_);
lean_dec_ref(v_f_2363_);
v_a_2370_ = lean_ctor_get(v_x_2368_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_x_2368_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2372_ = v_x_2368_;
v_isShared_2373_ = v_isSharedCheck_2378_;
goto v_resetjp_2371_;
}
else
{
lean_inc(v_a_2370_);
lean_dec(v_x_2368_);
v___x_2372_ = lean_box(0);
v_isShared_2373_ = v_isSharedCheck_2378_;
goto v_resetjp_2371_;
}
v_resetjp_2371_:
{
lean_object* v___x_2375_; 
if (v_isShared_2373_ == 0)
{
v___x_2375_ = v___x_2372_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_a_2370_);
v___x_2375_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
return v___x_2376_;
}
}
}
else
{
lean_object* v_a_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2400_; 
v_a_2379_ = lean_ctor_get(v_x_2368_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v_x_2368_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2381_ = v_x_2368_;
v_isShared_2382_ = v_isSharedCheck_2400_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_a_2379_);
lean_dec(v_x_2368_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2400_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___f_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; uint8_t v___x_2386_; lean_object* v_val_2388_; lean_object* v___x_2391_; 
v___f_2383_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__1___boxed), 6, 4);
lean_closure_set(v___f_2383_, 0, v_f_2363_);
lean_closure_set(v___f_2383_, 1, v_a_2364_);
lean_closure_set(v___f_2383_, 2, v_a_2379_);
lean_closure_set(v___f_2383_, 3, v___f_2365_);
v___x_2384_ = lean_unsigned_to_nat(2u);
v___x_2385_ = lean_unsigned_to_nat(0u);
v___x_2386_ = 0;
v___x_2391_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2366_, v_args_2367_, v___x_2384_);
if (lean_obj_tag(v___x_2391_) == 0)
{
lean_object* v_a_2392_; lean_object* v___x_2394_; 
v_a_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2392_);
lean_dec_ref_known(v___x_2391_, 1);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 0, v_a_2392_);
v___x_2394_ = v___x_2381_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v_a_2392_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
v_val_2388_ = v___x_2394_;
goto v___jp_2387_;
}
}
else
{
lean_object* v_a_2396_; lean_object* v___x_2398_; 
v_a_2396_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_a_2396_);
lean_dec_ref_known(v___x_2391_, 1);
if (v_isShared_2382_ == 0)
{
lean_ctor_set_tag(v___x_2381_, 0);
lean_ctor_set(v___x_2381_, 0, v_a_2396_);
v___x_2398_ = v___x_2381_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
v_val_2388_ = v___x_2398_;
goto v___jp_2387_;
}
}
v___jp_2387_:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2389_, 0, v_val_2388_);
v___x_2390_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2385_, v___x_2386_, v___x_2389_, v___f_2383_);
return v___x_2390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0___boxed(lean_object* v_f_2401_, lean_object* v_a_2402_, lean_object* v___f_2403_, lean_object* v___x_2404_, lean_object* v_args_2405_, lean_object* v_x_2406_, lean_object* v___y_2407_){
_start:
{
lean_object* v_res_2408_; 
v_res_2408_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0(v_f_2401_, v_a_2402_, v___f_2403_, v___x_2404_, v_args_2405_, v_x_2406_);
lean_dec_ref(v_args_2405_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3(lean_object* v_f_2409_, lean_object* v___f_2410_, lean_object* v___x_2411_, lean_object* v_args_2412_, lean_object* v_inst_2413_, lean_object* v___x_2414_, lean_object* v_x_2415_){
_start:
{
if (lean_obj_tag(v_x_2415_) == 0)
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2425_; 
lean_dec_ref(v___x_2414_);
lean_dec_ref(v_inst_2413_);
lean_dec_ref(v_args_2412_);
lean_dec_ref(v___x_2411_);
lean_dec_ref(v___f_2410_);
lean_dec_ref(v_f_2409_);
v_a_2417_ = lean_ctor_get(v_x_2415_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v_x_2415_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2419_ = v_x_2415_;
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v_x_2415_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2425_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
lean_object* v___x_2423_; 
v___x_2423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
return v___x_2423_;
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2448_; 
v_a_2426_ = lean_ctor_get(v_x_2415_, 0);
v_isSharedCheck_2448_ = !lean_is_exclusive(v_x_2415_);
if (v_isSharedCheck_2448_ == 0)
{
v___x_2428_ = v_x_2415_;
v_isShared_2429_ = v_isSharedCheck_2448_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v_x_2415_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2448_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___f_2430_; lean_object* v___f_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; uint8_t v___x_2434_; lean_object* v_val_2436_; lean_object* v___x_2439_; 
lean_inc_ref(v_args_2412_);
v___f_2430_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2430_, 0, v_f_2409_);
lean_closure_set(v___f_2430_, 1, v_a_2426_);
lean_closure_set(v___f_2430_, 2, v___f_2410_);
lean_closure_set(v___f_2430_, 3, v___x_2411_);
lean_closure_set(v___f_2430_, 4, v_args_2412_);
v___f_2431_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerFetchHandler_ofFn___redArg___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2431_, 0, v___f_2430_);
lean_closure_set(v___f_2431_, 1, v_inst_2413_);
v___x_2432_ = lean_unsigned_to_nat(1u);
v___x_2433_ = lean_unsigned_to_nat(0u);
v___x_2434_ = 0;
v___x_2439_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2414_, v_args_2412_, v___x_2432_);
lean_dec_ref(v_args_2412_);
if (lean_obj_tag(v___x_2439_) == 0)
{
lean_object* v_a_2440_; lean_object* v___x_2442_; 
v_a_2440_ = lean_ctor_get(v___x_2439_, 0);
lean_inc(v_a_2440_);
lean_dec_ref_known(v___x_2439_, 1);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v_a_2440_);
v___x_2442_ = v___x_2428_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2440_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
v_val_2436_ = v___x_2442_;
goto v___jp_2435_;
}
}
else
{
lean_object* v_a_2444_; lean_object* v___x_2446_; 
v_a_2444_ = lean_ctor_get(v___x_2439_, 0);
lean_inc(v_a_2444_);
lean_dec_ref_known(v___x_2439_, 1);
if (v_isShared_2429_ == 0)
{
lean_ctor_set_tag(v___x_2428_, 0);
lean_ctor_set(v___x_2428_, 0, v_a_2444_);
v___x_2446_ = v___x_2428_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2447_; 
v_reuseFailAlloc_2447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2447_, 0, v_a_2444_);
v___x_2446_ = v_reuseFailAlloc_2447_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
v_val_2436_ = v___x_2446_;
goto v___jp_2435_;
}
}
v___jp_2435_:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2437_, 0, v_val_2436_);
v___x_2438_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2433_, v___x_2434_, v___x_2437_, v___f_2431_);
return v___x_2438_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3___boxed(lean_object* v_f_2449_, lean_object* v___f_2450_, lean_object* v___x_2451_, lean_object* v_args_2452_, lean_object* v_inst_2453_, lean_object* v___x_2454_, lean_object* v_x_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v_res_2457_; 
v_res_2457_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3(v_f_2449_, v___f_2450_, v___x_2451_, v_args_2452_, v_inst_2453_, v___x_2454_, v_x_2455_);
return v_res_2457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2(lean_object* v_f_2458_, lean_object* v___f_2459_, lean_object* v___x_2460_, lean_object* v_inst_2461_, lean_object* v___x_2462_, lean_object* v___x_2463_, lean_object* v_args_2464_){
_start:
{
lean_object* v___f_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; lean_object* v_val_2470_; lean_object* v___x_2473_; 
lean_inc_ref(v_args_2464_);
v___f_2466_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__3___boxed), 8, 6);
lean_closure_set(v___f_2466_, 0, v_f_2458_);
lean_closure_set(v___f_2466_, 1, v___f_2459_);
lean_closure_set(v___f_2466_, 2, v___x_2460_);
lean_closure_set(v___f_2466_, 3, v_args_2464_);
lean_closure_set(v___f_2466_, 4, v_inst_2461_);
lean_closure_set(v___f_2466_, 5, v___x_2462_);
v___x_2467_ = lean_unsigned_to_nat(0u);
v___x_2468_ = 0;
v___x_2473_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2463_, v_args_2464_, v___x_2467_);
lean_dec_ref(v_args_2464_);
if (lean_obj_tag(v___x_2473_) == 0)
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
v_a_2474_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2473_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2473_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
v_resetjp_2475_:
{
lean_object* v___x_2479_; 
if (v_isShared_2477_ == 0)
{
lean_ctor_set_tag(v___x_2476_, 1);
v___x_2479_ = v___x_2476_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v_a_2474_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
v_val_2470_ = v___x_2479_;
goto v___jp_2469_;
}
}
}
else
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
v_a_2482_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2484_ = v___x_2473_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2473_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
lean_ctor_set_tag(v___x_2484_, 0);
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2482_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
v_val_2470_ = v___x_2487_;
goto v___jp_2469_;
}
}
}
v___jp_2469_:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2471_, 0, v_val_2470_);
v___x_2472_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2467_, v___x_2468_, v___x_2471_, v___f_2466_);
return v___x_2472_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2___boxed(lean_object* v_f_2490_, lean_object* v___f_2491_, lean_object* v___x_2492_, lean_object* v_inst_2493_, lean_object* v___x_2494_, lean_object* v___x_2495_, lean_object* v_args_2496_, lean_object* v___y_2497_){
_start:
{
lean_object* v_res_2498_; 
v_res_2498_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2(v_f_2490_, v___f_2491_, v___x_2492_, v_inst_2493_, v___x_2494_, v___x_2495_, v_args_2496_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg(lean_object* v_inst_2499_, lean_object* v_f_2500_){
_start:
{
lean_object* v___f_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___f_2506_; lean_object* v___f_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v___f_2502_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___x_2503_ = l_Lasm_JS_Cloudflare_instFromJSTestController;
v___x_2504_ = l_Lasm_JS_instFromJSData;
v___x_2505_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2506_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___lam__2___boxed), 8, 6);
lean_closure_set(v___f_2506_, 0, v_f_2500_);
lean_closure_set(v___f_2506_, 1, v___f_2502_);
lean_closure_set(v___f_2506_, 2, v___x_2505_);
lean_closure_set(v___f_2506_, 3, v_inst_2499_);
lean_closure_set(v___f_2506_, 4, v___x_2504_);
lean_closure_set(v___f_2506_, 5, v___x_2503_);
v___f_2507_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2508_ = l_Lasm_JS_instFromJSValue;
v___x_2509_ = lean_unsigned_to_nat(0u);
v___x_2510_ = l_Lasm_JS_Function_ofFn(v___f_2506_, v___x_2509_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2512_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2512_) == 0)
{
lean_object* v_a_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; 
v_a_2513_ = lean_ctor_get(v___x_2512_, 0);
lean_inc(v_a_2513_);
lean_dec_ref_known(v___x_2512_, 1);
v___x_2514_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2515_ = l_Lasm_JS_Value_get___redArg(v___f_2507_, v_a_2513_, v___x_2514_, v___x_2508_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___y_2524_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; uint8_t v___x_2555_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2515_, 1);
v___x_2517_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2518_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2511_);
v___x_2519_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2519_, 0, v_a_2511_);
lean_ctor_set(v___x_2519_, 1, v___x_2518_);
v___x_2520_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2521_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2520_);
v___x_2522_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2551_ = lean_unsigned_to_nat(3u);
v___x_2552_ = lean_nat_to_int(v___x_2551_);
v___x_2553_ = lean_nat_abs(v___x_2552_);
v___x_2554_ = lean_cstr_to_nat("9007199254740991");
v___x_2555_ = lean_nat_dec_le(v___x_2553_, v___x_2554_);
lean_dec(v___x_2553_);
if (v___x_2555_ == 0)
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2556_, 0, v___x_2552_);
v___y_2524_ = v___x_2556_;
goto v___jp_2523_;
}
else
{
double v___x_2557_; lean_object* v___x_2558_; 
v___x_2557_ = l_Float_ofInt(v___x_2552_);
lean_dec(v___x_2552_);
v___x_2558_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2558_, 0, v___x_2557_);
v___y_2524_ = v___x_2558_;
goto v___jp_2523_;
}
v___jp_2523_:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2522_);
lean_ctor_set(v___x_2525_, 1, v___y_2524_);
v___x_2526_ = lean_box(0);
v___x_2527_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2525_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = l_Lasm_JS_obj(v___x_2527_);
v___x_2529_ = lean_unsigned_to_nat(3u);
v___x_2530_ = lean_mk_empty_array_with_capacity(v___x_2529_);
v___x_2531_ = lean_array_push(v___x_2530_, v___x_2519_);
v___x_2532_ = lean_array_push(v___x_2531_, v___x_2521_);
v___x_2533_ = lean_array_push(v___x_2532_, v___x_2528_);
v___x_2534_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2516_, v___x_2517_, v___x_2533_, v___x_2508_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2541_; 
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2541_ == 0)
{
lean_object* v_unused_2542_; 
v_unused_2542_ = lean_ctor_get(v___x_2534_, 0);
lean_dec(v_unused_2542_);
v___x_2536_ = v___x_2534_;
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
else
{
lean_dec(v___x_2534_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2541_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2539_; 
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 0, v_a_2511_);
v___x_2539_ = v___x_2536_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2540_; 
v_reuseFailAlloc_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2540_, 0, v_a_2511_);
v___x_2539_ = v_reuseFailAlloc_2540_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
return v___x_2539_;
}
}
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v_a_2511_);
v_a_2543_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2534_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2534_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
}
else
{
lean_object* v_a_2559_; lean_object* v___x_2561_; uint8_t v_isShared_2562_; uint8_t v_isSharedCheck_2566_; 
lean_dec(v_a_2511_);
v_a_2559_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2566_ == 0)
{
v___x_2561_ = v___x_2515_;
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
else
{
lean_inc(v_a_2559_);
lean_dec(v___x_2515_);
v___x_2561_ = lean_box(0);
v_isShared_2562_ = v_isSharedCheck_2566_;
goto v_resetjp_2560_;
}
v_resetjp_2560_:
{
lean_object* v___x_2564_; 
if (v_isShared_2562_ == 0)
{
v___x_2564_ = v___x_2561_;
goto v_reusejp_2563_;
}
else
{
lean_object* v_reuseFailAlloc_2565_; 
v_reuseFailAlloc_2565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2565_, 0, v_a_2559_);
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
else
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2574_; 
lean_dec(v_a_2511_);
lean_dec_ref(v___f_2507_);
v_a_2567_ = lean_ctor_get(v___x_2512_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v___x_2512_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2569_ = v___x_2512_;
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2512_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2574_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2572_; 
if (v_isShared_2570_ == 0)
{
v___x_2572_ = v___x_2569_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2567_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
return v___x_2572_;
}
}
}
}
else
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2582_; 
lean_dec_ref(v___f_2507_);
v_a_2575_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2577_ = v___x_2510_;
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2510_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2582_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2580_; 
if (v_isShared_2578_ == 0)
{
v___x_2580_ = v___x_2577_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2575_);
v___x_2580_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
return v___x_2580_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg___boxed(lean_object* v_inst_2583_, lean_object* v_f_2584_, lean_object* v_a_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg(v_inst_2583_, v_f_2584_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn(lean_object* v_Env_2587_, lean_object* v_inst_2588_, lean_object* v_f_2589_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___redArg(v_inst_2588_, v_f_2589_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn___boxed(lean_object* v_Env_2592_, lean_object* v_inst_2593_, lean_object* v_f_2594_, lean_object* v_a_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofFn(v_Env_2592_, v_inst_2593_, v_f_2594_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0(lean_object* v___x_2597_, lean_object* v___x_2598_, lean_object* v_inst_2599_, lean_object* v___x_2600_, lean_object* v_f_2601_, lean_object* v_args_2602_){
_start:
{
lean_object* v___x_2604_; lean_object* v___x_2605_; 
v___x_2604_ = lean_unsigned_to_nat(0u);
v___x_2605_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2597_, v_args_2602_, v___x_2604_);
if (lean_obj_tag(v___x_2605_) == 0)
{
lean_object* v_a_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
lean_inc(v_a_2606_);
lean_dec_ref_known(v___x_2605_, 1);
v___x_2607_ = lean_unsigned_to_nat(1u);
v___x_2608_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2598_, v_args_2602_, v___x_2607_);
if (lean_obj_tag(v___x_2608_) == 0)
{
lean_object* v_a_2609_; lean_object* v___x_2610_; 
v_a_2609_ = lean_ctor_get(v___x_2608_, 0);
lean_inc(v_a_2609_);
lean_dec_ref_known(v___x_2608_, 1);
v___x_2610_ = l_Lasm_JS_Cloudflare_Support_declared___redArg(v_inst_2599_, v_a_2609_);
if (lean_obj_tag(v___x_2610_) == 0)
{
lean_object* v_a_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; 
v_a_2611_ = lean_ctor_get(v___x_2610_, 0);
lean_inc(v_a_2611_);
lean_dec_ref_known(v___x_2610_, 1);
v___x_2612_ = lean_unsigned_to_nat(2u);
v___x_2613_ = l_Lasm_JS_Web_Internal_arg___redArg(v___x_2600_, v_args_2602_, v___x_2612_);
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2615_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
lean_inc(v_a_2614_);
lean_dec_ref_known(v___x_2613_, 1);
v___x_2615_ = lean_apply_4(v_f_2601_, v_a_2606_, v_a_2611_, v_a_2614_, lean_box(0));
if (lean_obj_tag(v___x_2615_) == 0)
{
lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2623_; 
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2623_ == 0)
{
lean_object* v_unused_2624_; 
v_unused_2624_ = lean_ctor_get(v___x_2615_, 0);
lean_dec(v_unused_2624_);
v___x_2617_ = v___x_2615_;
v_isShared_2618_ = v_isSharedCheck_2623_;
goto v_resetjp_2616_;
}
else
{
lean_dec(v___x_2615_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2623_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2619_; lean_object* v___x_2621_; 
v___x_2619_ = lean_box(0);
if (v_isShared_2618_ == 0)
{
lean_ctor_set(v___x_2617_, 0, v___x_2619_);
v___x_2621_ = v___x_2617_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v___x_2619_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
else
{
lean_object* v_a_2625_; lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2632_; 
v_a_2625_ = lean_ctor_get(v___x_2615_, 0);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2615_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2627_ = v___x_2615_;
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
else
{
lean_inc(v_a_2625_);
lean_dec(v___x_2615_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2632_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v___x_2630_; 
if (v_isShared_2628_ == 0)
{
v___x_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_a_2625_);
v___x_2630_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
return v___x_2630_;
}
}
}
}
else
{
lean_object* v_a_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2640_; 
lean_dec(v_a_2611_);
lean_dec(v_a_2606_);
lean_dec_ref(v_f_2601_);
v_a_2633_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2640_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2640_ == 0)
{
v___x_2635_ = v___x_2613_;
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_a_2633_);
lean_dec(v___x_2613_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2640_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2638_; 
if (v_isShared_2636_ == 0)
{
v___x_2638_ = v___x_2635_;
goto v_reusejp_2637_;
}
else
{
lean_object* v_reuseFailAlloc_2639_; 
v_reuseFailAlloc_2639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2639_, 0, v_a_2633_);
v___x_2638_ = v_reuseFailAlloc_2639_;
goto v_reusejp_2637_;
}
v_reusejp_2637_:
{
return v___x_2638_;
}
}
}
}
else
{
lean_object* v_a_2641_; lean_object* v___x_2643_; uint8_t v_isShared_2644_; uint8_t v_isSharedCheck_2648_; 
lean_dec(v_a_2606_);
lean_dec_ref(v_f_2601_);
lean_dec_ref(v___x_2600_);
v_a_2641_ = lean_ctor_get(v___x_2610_, 0);
v_isSharedCheck_2648_ = !lean_is_exclusive(v___x_2610_);
if (v_isSharedCheck_2648_ == 0)
{
v___x_2643_ = v___x_2610_;
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
else
{
lean_inc(v_a_2641_);
lean_dec(v___x_2610_);
v___x_2643_ = lean_box(0);
v_isShared_2644_ = v_isSharedCheck_2648_;
goto v_resetjp_2642_;
}
v_resetjp_2642_:
{
lean_object* v___x_2646_; 
if (v_isShared_2644_ == 0)
{
v___x_2646_ = v___x_2643_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_a_2641_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
}
}
else
{
lean_dec(v_a_2606_);
lean_dec_ref(v_f_2601_);
lean_dec_ref(v___x_2600_);
lean_dec_ref(v_inst_2599_);
return v___x_2608_;
}
}
else
{
lean_object* v_a_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2656_; 
lean_dec_ref(v_f_2601_);
lean_dec_ref(v___x_2600_);
lean_dec_ref(v_inst_2599_);
lean_dec_ref(v___x_2598_);
v_a_2649_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2656_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2656_ == 0)
{
v___x_2651_ = v___x_2605_;
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_a_2649_);
lean_dec(v___x_2605_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2656_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2654_; 
if (v_isShared_2652_ == 0)
{
v___x_2654_ = v___x_2651_;
goto v_reusejp_2653_;
}
else
{
lean_object* v_reuseFailAlloc_2655_; 
v_reuseFailAlloc_2655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2655_, 0, v_a_2649_);
v___x_2654_ = v_reuseFailAlloc_2655_;
goto v_reusejp_2653_;
}
v_reusejp_2653_:
{
return v___x_2654_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0___boxed(lean_object* v___x_2657_, lean_object* v___x_2658_, lean_object* v_inst_2659_, lean_object* v___x_2660_, lean_object* v_f_2661_, lean_object* v_args_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v_res_2664_; 
v_res_2664_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0(v___x_2657_, v___x_2658_, v_inst_2659_, v___x_2660_, v_f_2661_, v_args_2662_);
lean_dec_ref(v_args_2662_);
return v_res_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg(lean_object* v_inst_2665_, lean_object* v_f_2666_){
_start:
{
lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___f_2671_; lean_object* v___f_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2668_ = l_Lasm_JS_Cloudflare_instFromJSTestController;
v___x_2669_ = l_Lasm_JS_instFromJSData;
v___x_2670_ = l_Lasm_JS_Cloudflare_instFromJSExecutionContext;
v___f_2671_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2671_, 0, v___x_2668_);
lean_closure_set(v___f_2671_, 1, v___x_2669_);
lean_closure_set(v___f_2671_, 2, v_inst_2665_);
lean_closure_set(v___f_2671_, 3, v___x_2670_);
lean_closure_set(v___f_2671_, 4, v_f_2666_);
v___f_2672_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___x_2673_ = l_Lasm_JS_instFromJSValue;
v___x_2674_ = lean_unsigned_to_nat(0u);
v___x_2675_ = l_Lasm_JS_Function_ofSyncFn(v___f_2671_, v___x_2674_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v_a_2676_; lean_object* v___x_2677_; 
v_a_2676_ = lean_ctor_get(v___x_2675_, 0);
lean_inc(v_a_2676_);
lean_dec_ref_known(v___x_2675_, 1);
v___x_2677_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v___x_2679_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2680_ = l_Lasm_JS_Value_get___redArg(v___f_2672_, v_a_2678_, v___x_2679_, v___x_2673_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___y_2689_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; uint8_t v___x_2720_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref_known(v___x_2680_, 1);
v___x_2682_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2683_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2676_);
v___x_2684_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2684_, 0, v_a_2676_);
lean_ctor_set(v___x_2684_, 1, v___x_2683_);
v___x_2685_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2686_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2685_);
v___x_2687_ = lean_mk_string_unchecked("value", 5, 5);
v___x_2716_ = lean_unsigned_to_nat(3u);
v___x_2717_ = lean_nat_to_int(v___x_2716_);
v___x_2718_ = lean_nat_abs(v___x_2717_);
v___x_2719_ = lean_cstr_to_nat("9007199254740991");
v___x_2720_ = lean_nat_dec_le(v___x_2718_, v___x_2719_);
lean_dec(v___x_2718_);
if (v___x_2720_ == 0)
{
lean_object* v___x_2721_; 
v___x_2721_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2721_, 0, v___x_2717_);
v___y_2689_ = v___x_2721_;
goto v___jp_2688_;
}
else
{
double v___x_2722_; lean_object* v___x_2723_; 
v___x_2722_ = l_Float_ofInt(v___x_2717_);
lean_dec(v___x_2717_);
v___x_2723_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2723_, 0, v___x_2722_);
v___y_2689_ = v___x_2723_;
goto v___jp_2688_;
}
v___jp_2688_:
{
lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2687_);
lean_ctor_set(v___x_2690_, 1, v___y_2689_);
v___x_2691_ = lean_box(0);
v___x_2692_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2690_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___x_2693_ = l_Lasm_JS_obj(v___x_2692_);
v___x_2694_ = lean_unsigned_to_nat(3u);
v___x_2695_ = lean_mk_empty_array_with_capacity(v___x_2694_);
v___x_2696_ = lean_array_push(v___x_2695_, v___x_2684_);
v___x_2697_ = lean_array_push(v___x_2696_, v___x_2686_);
v___x_2698_ = lean_array_push(v___x_2697_, v___x_2693_);
v___x_2699_ = l_Lasm_JS_Value_callMethod___redArg(v_a_2681_, v___x_2682_, v___x_2698_, v___x_2673_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2706_; 
v_isSharedCheck_2706_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2706_ == 0)
{
lean_object* v_unused_2707_; 
v_unused_2707_ = lean_ctor_get(v___x_2699_, 0);
lean_dec(v_unused_2707_);
v___x_2701_ = v___x_2699_;
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
else
{
lean_dec(v___x_2699_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2706_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2704_; 
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v_a_2676_);
v___x_2704_ = v___x_2701_;
goto v_reusejp_2703_;
}
else
{
lean_object* v_reuseFailAlloc_2705_; 
v_reuseFailAlloc_2705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2705_, 0, v_a_2676_);
v___x_2704_ = v_reuseFailAlloc_2705_;
goto v_reusejp_2703_;
}
v_reusejp_2703_:
{
return v___x_2704_;
}
}
}
else
{
lean_object* v_a_2708_; lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
lean_dec(v_a_2676_);
v_a_2708_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2715_ == 0)
{
v___x_2710_ = v___x_2699_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_inc(v_a_2708_);
lean_dec(v___x_2699_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2708_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec(v_a_2676_);
v_a_2724_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2680_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2680_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
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
else
{
lean_object* v_a_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2739_; 
lean_dec(v_a_2676_);
lean_dec_ref(v___f_2672_);
v_a_2732_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2739_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2739_ == 0)
{
v___x_2734_ = v___x_2677_;
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_a_2732_);
lean_dec(v___x_2677_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2739_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2737_; 
if (v_isShared_2735_ == 0)
{
v___x_2737_ = v___x_2734_;
goto v_reusejp_2736_;
}
else
{
lean_object* v_reuseFailAlloc_2738_; 
v_reuseFailAlloc_2738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2738_, 0, v_a_2732_);
v___x_2737_ = v_reuseFailAlloc_2738_;
goto v_reusejp_2736_;
}
v_reusejp_2736_:
{
return v___x_2737_;
}
}
}
}
else
{
lean_object* v_a_2740_; lean_object* v___x_2742_; uint8_t v_isShared_2743_; uint8_t v_isSharedCheck_2747_; 
lean_dec_ref(v___f_2672_);
v_a_2740_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2742_ = v___x_2675_;
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
else
{
lean_inc(v_a_2740_);
lean_dec(v___x_2675_);
v___x_2742_ = lean_box(0);
v_isShared_2743_ = v_isSharedCheck_2747_;
goto v_resetjp_2741_;
}
v_resetjp_2741_:
{
lean_object* v___x_2745_; 
if (v_isShared_2743_ == 0)
{
v___x_2745_ = v___x_2742_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v_a_2740_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg___boxed(lean_object* v_inst_2748_, lean_object* v_f_2749_, lean_object* v_a_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg(v_inst_2748_, v_f_2749_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn(lean_object* v_Env_2752_, lean_object* v_inst_2753_, lean_object* v_f_2754_){
_start:
{
lean_object* v___x_2756_; 
v___x_2756_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___redArg(v_inst_2753_, v_f_2754_);
return v___x_2756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn___boxed(lean_object* v_Env_2757_, lean_object* v_inst_2758_, lean_object* v_f_2759_, lean_object* v_a_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lasm_JS_Cloudflare_ExportedHandlerTestHandler_ofSyncFn(v_Env_2757_, v_inst_2758_, v_f_2759_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx(lean_object* v_x_2762_){
_start:
{
if (lean_obj_tag(v_x_2762_) == 0)
{
lean_object* v___x_2763_; 
v___x_2763_ = lean_unsigned_to_nat(0u);
return v___x_2763_;
}
else
{
lean_object* v___x_2764_; 
v___x_2764_ = lean_unsigned_to_nat(1u);
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx___boxed(lean_object* v_x_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorIdx(v_x_2765_);
lean_dec_ref(v_x_2765_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(lean_object* v_t_2767_, lean_object* v_k_2768_){
_start:
{
if (lean_obj_tag(v_t_2767_) == 0)
{
lean_object* v_value_2769_; lean_object* v___x_2770_; 
v_value_2769_ = lean_ctor_get(v_t_2767_, 0);
lean_inc_ref(v_value_2769_);
lean_dec_ref_known(v_t_2767_, 1);
v___x_2770_ = lean_apply_1(v_k_2768_, v_value_2769_);
return v___x_2770_;
}
else
{
double v_value_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; 
v_value_2771_ = lean_ctor_get_float(v_t_2767_, 0);
lean_dec_ref_known(v_t_2767_, 0);
v___x_2772_ = lean_box_float(v_value_2771_);
v___x_2773_ = lean_apply_1(v_k_2768_, v___x_2772_);
return v___x_2773_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim(lean_object* v_motive_2774_, lean_object* v_ctorIdx_2775_, lean_object* v_t_2776_, lean_object* v_h_2777_, lean_object* v_k_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2776_, v_k_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___boxed(lean_object* v_motive_2780_, lean_object* v_ctorIdx_2781_, lean_object* v_t_2782_, lean_object* v_h_2783_, lean_object* v_k_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim(v_motive_2780_, v_ctorIdx_2781_, v_t_2782_, v_h_2783_, v_k_2784_);
lean_dec(v_ctorIdx_2781_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_domString_elim___redArg(lean_object* v_t_2786_, lean_object* v_domString_2787_){
_start:
{
lean_object* v___x_2788_; 
v___x_2788_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2786_, v_domString_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_domString_elim(lean_object* v_motive_2789_, lean_object* v_t_2790_, lean_object* v_h_2791_, lean_object* v_domString_2792_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2790_, v_domString_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_double_elim___redArg(lean_object* v_t_2794_, lean_object* v_double_2795_){
_start:
{
lean_object* v___x_2796_; 
v___x_2796_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2794_, v_double_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DOMStringOrDouble_double_elim(lean_object* v_motive_2797_, lean_object* v_t_2798_, lean_object* v_h_2799_, lean_object* v_double_2800_){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = l_Lasm_JS_Cloudflare_DOMStringOrDouble_ctorElim___redArg(v_t_2798_, v_double_2800_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDOMStringOrDouble___lam__0(lean_object* v_x_2802_){
_start:
{
if (lean_obj_tag(v_x_2802_) == 0)
{
lean_object* v_value_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
v_value_2803_ = lean_ctor_get(v_x_2802_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v_x_2802_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_value_2803_);
lean_dec(v_x_2802_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
lean_ctor_set_tag(v___x_2805_, 4);
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_value_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
else
{
double v_value_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
v_value_2811_ = lean_ctor_get_float(v_x_2802_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v_x_2802_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v_x_2802_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_dec(v_x_2802_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
lean_ctor_set_tag(v___x_2813_, 3);
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2817_, 0, v_value_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringDOMStringOrDouble___lam__0(lean_object* v_value_2820_){
_start:
{
lean_object* v___x_2821_; 
v___x_2821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2821_, 0, v_value_2820_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0(double v_value_2823_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_2824_, 0, v_value_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object* v_value_2825_){
_start:
{
double v_value_boxed_2826_; lean_object* v_res_2827_; 
v_value_boxed_2826_ = lean_unbox_float(v_value_2825_);
lean_dec_ref(v_value_2825_);
v_res_2827_ = l_Lasm_JS_Cloudflare_instCoeFloatDOMStringOrDouble___lam__0(v_value_boxed_2826_);
return v_res_2827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble___lam__0(lean_object* v_x_2829_){
_start:
{
switch(lean_obj_tag(v_x_2829_))
{
case 4:
{
lean_object* v_s_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2838_; 
v_s_2830_ = lean_ctor_get(v_x_2829_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v_x_2829_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2832_ = v_x_2829_;
v_isShared_2833_ = v_isSharedCheck_2838_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_s_2830_);
lean_dec(v_x_2829_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2838_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
lean_ctor_set_tag(v___x_2832_, 0);
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_s_2830_);
v___x_2835_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
lean_object* v___x_2836_; 
v___x_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
return v___x_2836_;
}
}
}
case 3:
{
double v_n_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2847_; 
v_n_2839_ = lean_ctor_get_float(v_x_2829_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_x_2829_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2841_ = v_x_2829_;
v_isShared_2842_ = v_isSharedCheck_2847_;
goto v_resetjp_2840_;
}
else
{
lean_dec(v_x_2829_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2847_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2844_; 
if (v_isShared_2842_ == 0)
{
lean_ctor_set_tag(v___x_2841_, 1);
v___x_2844_ = v___x_2841_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2846_; 
v_reuseFailAlloc_2846_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2846_, 0, v_n_2839_);
v___x_2844_ = v_reuseFailAlloc_2846_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
lean_object* v___x_2845_; 
v___x_2845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
return v___x_2845_;
}
}
}
default: 
{
lean_object* v___x_2848_; lean_object* v___x_2849_; 
lean_dec(v_x_2829_);
v___x_2848_ = lean_mk_string_unchecked("", 0, 0);
v___x_2849_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2848_);
return v___x_2849_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble(void){
_start:
{
lean_object* v___f_2850_; lean_object* v___x_2851_; uint8_t v___x_2852_; lean_object* v___x_2853_; 
v___f_2850_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSDOMStringOrDouble___lam__0), 1, 0);
v___x_2851_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.DOMStringOrDouble", 36, 36);
v___x_2852_ = 0;
v___x_2853_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2853_, 0, v___f_2850_);
lean_ctor_set(v___x_2853_, 1, v___x_2851_);
lean_ctor_set_uint8(v___x_2853_, sizeof(void*)*2, v___x_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException___lam__0(lean_object* v___f_2854_, lean_object* v_d_2855_){
_start:
{
lean_object* v_code_2856_; lean_object* v_name_2857_; lean_object* v_message_2858_; lean_object* v_stack_2859_; lean_object* v___x_2860_; lean_object* v___y_2862_; 
v_code_2856_ = lean_ctor_get(v_d_2855_, 0);
lean_inc_ref(v_code_2856_);
v_name_2857_ = lean_ctor_get(v_d_2855_, 1);
lean_inc(v_name_2857_);
v_message_2858_ = lean_ctor_get(v_d_2855_, 2);
lean_inc(v_message_2858_);
v_stack_2859_ = lean_ctor_get(v_d_2855_, 3);
lean_inc(v_stack_2859_);
lean_dec_ref(v_d_2855_);
v___x_2860_ = lean_mk_string_unchecked("code", 4, 4);
if (lean_obj_tag(v_code_2856_) == 0)
{
lean_object* v_value_2880_; lean_object* v___x_2882_; uint8_t v_isShared_2883_; uint8_t v_isSharedCheck_2887_; 
v_value_2880_ = lean_ctor_get(v_code_2856_, 0);
v_isSharedCheck_2887_ = !lean_is_exclusive(v_code_2856_);
if (v_isSharedCheck_2887_ == 0)
{
v___x_2882_ = v_code_2856_;
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
else
{
lean_inc(v_value_2880_);
lean_dec(v_code_2856_);
v___x_2882_ = lean_box(0);
v_isShared_2883_ = v_isSharedCheck_2887_;
goto v_resetjp_2881_;
}
v_resetjp_2881_:
{
lean_object* v___x_2885_; 
if (v_isShared_2883_ == 0)
{
lean_ctor_set_tag(v___x_2882_, 4);
v___x_2885_ = v___x_2882_;
goto v_reusejp_2884_;
}
else
{
lean_object* v_reuseFailAlloc_2886_; 
v_reuseFailAlloc_2886_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2886_, 0, v_value_2880_);
v___x_2885_ = v_reuseFailAlloc_2886_;
goto v_reusejp_2884_;
}
v_reusejp_2884_:
{
v___y_2862_ = v___x_2885_;
goto v___jp_2861_;
}
}
}
else
{
double v_value_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2895_; 
v_value_2888_ = lean_ctor_get_float(v_code_2856_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v_code_2856_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2890_ = v_code_2856_;
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
else
{
lean_dec(v_code_2856_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2895_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v___x_2893_; 
if (v_isShared_2891_ == 0)
{
lean_ctor_set_tag(v___x_2890_, 3);
v___x_2893_ = v___x_2890_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2894_, 0, v_value_2888_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
v___y_2862_ = v___x_2893_;
goto v___jp_2861_;
}
}
}
v___jp_2861_:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2863_, 0, v___x_2860_);
lean_ctor_set(v___x_2863_, 1, v___y_2862_);
v___x_2864_ = lean_mk_string_unchecked("name", 4, 4);
lean_inc_ref_n(v___f_2854_, 2);
v___x_2865_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2854_, v_name_2857_);
v___x_2866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2866_, 0, v___x_2864_);
lean_ctor_set(v___x_2866_, 1, v___x_2865_);
v___x_2867_ = lean_mk_string_unchecked("message", 7, 7);
v___x_2868_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2854_, v_message_2858_);
v___x_2869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2867_);
lean_ctor_set(v___x_2869_, 1, v___x_2868_);
v___x_2870_ = lean_mk_string_unchecked("stack", 5, 5);
v___x_2871_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_2854_, v_stack_2859_);
v___x_2872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2870_);
lean_ctor_set(v___x_2872_, 1, v___x_2871_);
v___x_2873_ = lean_unsigned_to_nat(4u);
v___x_2874_ = lean_mk_empty_array_with_capacity(v___x_2873_);
v___x_2875_ = lean_array_push(v___x_2874_, v___x_2863_);
v___x_2876_ = lean_array_push(v___x_2875_, v___x_2866_);
v___x_2877_ = lean_array_push(v___x_2876_, v___x_2869_);
v___x_2878_ = lean_array_push(v___x_2877_, v___x_2872_);
v___x_2879_ = l_Lasm_JS_Web_Internal_fields(v___x_2878_);
lean_dec_ref(v___x_2878_);
return v___x_2879_;
}
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException(void){
_start:
{
lean_object* v___f_2896_; lean_object* v___f_2897_; 
v___f_2896_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_2897_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instToJSSpanRecordExceptionException___lam__0), 2, 1);
lean_closure_set(v___f_2897_, 0, v___f_2896_);
return v___f_2897_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSPagesFunction(void){
_start:
{
lean_object* v___f_2899_; lean_object* v___x_2900_; uint8_t v___x_2901_; lean_object* v___x_2902_; 
v___f_2899_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_2900_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.PagesFunction", 32, 32);
v___x_2901_ = 0;
v___x_2902_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2902_, 0, v___f_2899_);
lean_ctor_set(v___x_2902_, 1, v___x_2900_);
lean_ctor_set_uint8(v___x_2902_, sizeof(void*)*2, v___x_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1(lean_object* v_f_2903_, lean_object* v___f_2904_, lean_object* v_x_2905_){
_start:
{
if (lean_obj_tag(v_x_2905_) == 0)
{
lean_object* v_a_2907_; lean_object* v___x_2909_; uint8_t v_isShared_2910_; uint8_t v_isSharedCheck_2915_; 
lean_dec_ref(v___f_2904_);
lean_dec_ref(v_f_2903_);
v_a_2907_ = lean_ctor_get(v_x_2905_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v_x_2905_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2909_ = v_x_2905_;
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
else
{
lean_inc(v_a_2907_);
lean_dec(v_x_2905_);
v___x_2909_ = lean_box(0);
v_isShared_2910_ = v_isSharedCheck_2915_;
goto v_resetjp_2908_;
}
v_resetjp_2908_:
{
lean_object* v___x_2912_; 
if (v_isShared_2910_ == 0)
{
v___x_2912_ = v___x_2909_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2907_);
v___x_2912_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
lean_object* v___x_2913_; 
v___x_2913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2912_);
return v___x_2913_;
}
}
}
else
{
lean_object* v_a_2916_; lean_object* v___x_2917_; uint8_t v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; 
v_a_2916_ = lean_ctor_get(v_x_2905_, 0);
lean_inc(v_a_2916_);
lean_dec_ref_known(v_x_2905_, 1);
v___x_2917_ = lean_unsigned_to_nat(0u);
v___x_2918_ = 0;
v___x_2919_ = lean_apply_2(v_f_2903_, v_a_2916_, lean_box(0));
v___x_2920_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2917_, v___x_2918_, v___x_2919_, v___f_2904_);
return v___x_2920_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1___boxed(lean_object* v_f_2921_, lean_object* v___f_2922_, lean_object* v_x_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1(v_f_2921_, v___f_2922_, v_x_2923_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_PagesFunction_ofFn_spec__0(lean_object* v_args_2926_, lean_object* v_i_2927_){
_start:
{
lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; uint8_t v___x_2935_; 
v___x_2929_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_2930_ = lean_unsigned_to_nat(1u);
v___x_2931_ = lean_nat_add(v_i_2927_, v___x_2930_);
v___x_2932_ = l_Nat_reprFast(v___x_2931_);
v___x_2933_ = lean_string_append(v___x_2929_, v___x_2932_);
lean_dec_ref(v___x_2932_);
v___x_2934_ = lean_array_get_size(v_args_2926_);
v___x_2935_ = lean_nat_dec_lt(v_i_2927_, v___x_2934_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; 
v___x_2936_ = lean_box(0);
v___x_2937_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2933_, v___x_2936_);
lean_dec_ref(v___x_2933_);
return v___x_2937_;
}
else
{
lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2938_ = lean_array_fget_borrowed(v_args_2926_, v_i_2927_);
lean_inc(v___x_2938_);
v___x_2939_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_2933_, v___x_2938_);
lean_dec_ref(v___x_2933_);
return v___x_2939_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_PagesFunction_ofFn_spec__0___boxed(lean_object* v_args_2940_, lean_object* v_i_2941_, lean_object* v_a_2942_){
_start:
{
lean_object* v_res_2943_; 
v_res_2943_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_PagesFunction_ofFn_spec__0(v_args_2940_, v_i_2941_);
lean_dec(v_i_2941_);
lean_dec_ref(v_args_2940_);
return v_res_2943_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0(lean_object* v___f_2944_, lean_object* v_args_2945_){
_start:
{
lean_object* v___x_2947_; uint8_t v___x_2948_; lean_object* v_val_2950_; lean_object* v___x_2953_; 
v___x_2947_ = lean_unsigned_to_nat(0u);
v___x_2948_ = 0;
v___x_2953_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_PagesFunction_ofFn_spec__0(v_args_2945_, v___x_2947_);
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2953_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2953_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
lean_ctor_set_tag(v___x_2956_, 1);
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
v_val_2950_ = v___x_2959_;
goto v___jp_2949_;
}
}
}
else
{
lean_object* v_a_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2969_; 
v_a_2962_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2969_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2969_ == 0)
{
v___x_2964_ = v___x_2953_;
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_a_2962_);
lean_dec(v___x_2953_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2969_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v___x_2967_; 
if (v_isShared_2965_ == 0)
{
lean_ctor_set_tag(v___x_2964_, 0);
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
v_val_2950_ = v___x_2967_;
goto v___jp_2949_;
}
}
}
v___jp_2949_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2951_, 0, v_val_2950_);
v___x_2952_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2947_, v___x_2948_, v___x_2951_, v___f_2944_);
return v___x_2952_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0___boxed(lean_object* v___f_2970_, lean_object* v_args_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v_res_2973_; 
v_res_2973_ = l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0(v___f_2970_, v_args_2971_);
lean_dec_ref(v_args_2971_);
return v_res_2973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn(lean_object* v_f_2974_){
_start:
{
lean_object* v___f_2976_; lean_object* v___f_2977_; lean_object* v___f_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___f_2976_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___f_2977_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2977_, 0, v_f_2974_);
lean_closure_set(v___f_2977_, 1, v___f_2976_);
v___f_2978_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2978_, 0, v___f_2977_);
v___x_2979_ = lean_unsigned_to_nat(0u);
v___x_2980_ = l_Lasm_JS_Function_ofFn(v___f_2978_, v___x_2979_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2982_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___x_2980_, 1);
v___x_2982_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref_known(v___x_2982_, 1);
v___x_2984_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_2985_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_2983_, v___x_2984_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v_a_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___y_2994_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; uint8_t v___x_3025_; 
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_a_2986_);
lean_dec_ref_known(v___x_2985_, 1);
v___x_2987_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_2988_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_2981_);
v___x_2989_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2989_, 0, v_a_2981_);
lean_ctor_set(v___x_2989_, 1, v___x_2988_);
v___x_2990_ = lean_mk_string_unchecked("length", 6, 6);
v___x_2991_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2990_);
v___x_2992_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3021_ = lean_unsigned_to_nat(1u);
v___x_3022_ = lean_nat_to_int(v___x_3021_);
v___x_3023_ = lean_nat_abs(v___x_3022_);
v___x_3024_ = lean_cstr_to_nat("9007199254740991");
v___x_3025_ = lean_nat_dec_le(v___x_3023_, v___x_3024_);
lean_dec(v___x_3023_);
if (v___x_3025_ == 0)
{
lean_object* v___x_3026_; 
v___x_3026_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3022_);
v___y_2994_ = v___x_3026_;
goto v___jp_2993_;
}
else
{
double v___x_3027_; lean_object* v___x_3028_; 
v___x_3027_ = l_Float_ofInt(v___x_3022_);
lean_dec(v___x_3022_);
v___x_3028_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3028_, 0, v___x_3027_);
v___y_2994_ = v___x_3028_;
goto v___jp_2993_;
}
v___jp_2993_:
{
lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_2995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2995_, 0, v___x_2992_);
lean_ctor_set(v___x_2995_, 1, v___y_2994_);
v___x_2996_ = lean_box(0);
v___x_2997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2995_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = l_Lasm_JS_obj(v___x_2997_);
v___x_2999_ = lean_unsigned_to_nat(3u);
v___x_3000_ = lean_mk_empty_array_with_capacity(v___x_2999_);
v___x_3001_ = lean_array_push(v___x_3000_, v___x_2989_);
v___x_3002_ = lean_array_push(v___x_3001_, v___x_2991_);
v___x_3003_ = lean_array_push(v___x_3002_, v___x_2998_);
v___x_3004_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_2986_, v___x_2987_, v___x_3003_);
if (lean_obj_tag(v___x_3004_) == 0)
{
lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3011_ == 0)
{
lean_object* v_unused_3012_; 
v_unused_3012_ = lean_ctor_get(v___x_3004_, 0);
lean_dec(v_unused_3012_);
v___x_3006_ = v___x_3004_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_dec(v___x_3004_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
lean_ctor_set(v___x_3006_, 0, v_a_2981_);
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_2981_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
else
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3020_; 
lean_dec(v_a_2981_);
v_a_3013_ = lean_ctor_get(v___x_3004_, 0);
v_isSharedCheck_3020_ = !lean_is_exclusive(v___x_3004_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_3015_ = v___x_3004_;
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___x_3004_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3020_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3018_; 
if (v_isShared_3016_ == 0)
{
v___x_3018_ = v___x_3015_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3019_; 
v_reuseFailAlloc_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3019_, 0, v_a_3013_);
v___x_3018_ = v_reuseFailAlloc_3019_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
return v___x_3018_;
}
}
}
}
}
else
{
lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3036_; 
lean_dec(v_a_2981_);
v_a_3029_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_3036_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_3031_ = v___x_2985_;
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_dec(v___x_2985_);
v___x_3031_ = lean_box(0);
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
v_resetjp_3030_:
{
lean_object* v___x_3034_; 
if (v_isShared_3032_ == 0)
{
v___x_3034_ = v___x_3031_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3035_; 
v_reuseFailAlloc_3035_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3035_, 0, v_a_3029_);
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
else
{
lean_object* v_a_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3044_; 
lean_dec(v_a_2981_);
v_a_3037_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_3044_ == 0)
{
v___x_3039_ = v___x_2982_;
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_a_3037_);
lean_dec(v___x_2982_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3044_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3042_; 
if (v_isShared_3040_ == 0)
{
v___x_3042_ = v___x_3039_;
goto v_reusejp_3041_;
}
else
{
lean_object* v_reuseFailAlloc_3043_; 
v_reuseFailAlloc_3043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3043_, 0, v_a_3037_);
v___x_3042_ = v_reuseFailAlloc_3043_;
goto v_reusejp_3041_;
}
v_reusejp_3041_:
{
return v___x_3042_;
}
}
}
}
else
{
lean_object* v_a_3045_; lean_object* v___x_3047_; uint8_t v_isShared_3048_; uint8_t v_isSharedCheck_3052_; 
v_a_3045_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3047_ = v___x_2980_;
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
else
{
lean_inc(v_a_3045_);
lean_dec(v___x_2980_);
v___x_3047_ = lean_box(0);
v_isShared_3048_ = v_isSharedCheck_3052_;
goto v_resetjp_3046_;
}
v_resetjp_3046_:
{
lean_object* v___x_3050_; 
if (v_isShared_3048_ == 0)
{
v___x_3050_ = v___x_3047_;
goto v_reusejp_3049_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v_a_3045_);
v___x_3050_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3049_;
}
v_reusejp_3049_:
{
return v___x_3050_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofFn___boxed(lean_object* v_f_3053_, lean_object* v_a_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l_Lasm_JS_Cloudflare_PagesFunction_ofFn(v_f_3053_);
return v_res_3055_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0(lean_object* v_f_3056_, lean_object* v_args_3057_){
_start:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = lean_unsigned_to_nat(0u);
v___x_3060_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Cloudflare_PagesFunction_ofFn_spec__0(v_args_3057_, v___x_3059_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3062_; 
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_a_3061_);
lean_dec_ref_known(v___x_3060_, 1);
v___x_3062_ = lean_apply_2(v_f_3056_, v_a_3061_, lean_box(0));
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3070_; 
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3070_ == 0)
{
lean_object* v_unused_3071_; 
v_unused_3071_ = lean_ctor_get(v___x_3062_, 0);
lean_dec(v_unused_3071_);
v___x_3064_ = v___x_3062_;
v_isShared_3065_ = v_isSharedCheck_3070_;
goto v_resetjp_3063_;
}
else
{
lean_dec(v___x_3062_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3070_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3066_; lean_object* v___x_3068_; 
v___x_3066_ = lean_box(0);
if (v_isShared_3065_ == 0)
{
lean_ctor_set(v___x_3064_, 0, v___x_3066_);
v___x_3068_ = v___x_3064_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
v_a_3072_ = lean_ctor_get(v___x_3062_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_3062_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3062_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
else
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
lean_dec_ref(v_f_3056_);
v_a_3080_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3082_ = v___x_3060_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v___x_3060_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_a_3080_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_3088_, lean_object* v_args_3089_, lean_object* v___y_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0(v_f_3088_, v_args_3089_);
lean_dec_ref(v_args_3089_);
return v_res_3091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn(lean_object* v_f_3092_){
_start:
{
lean_object* v___f_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v___f_3094_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3094_, 0, v_f_3092_);
v___x_3095_ = lean_unsigned_to_nat(0u);
v___x_3096_ = l_Lasm_JS_Function_ofSyncFn(v___f_3094_, v___x_3095_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v_a_3097_; lean_object* v___x_3098_; 
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
lean_inc(v_a_3097_);
lean_dec_ref_known(v___x_3096_, 1);
v___x_3098_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v___x_3100_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_3101_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_3099_, v___x_3100_);
if (lean_obj_tag(v___x_3101_) == 0)
{
lean_object* v_a_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___y_3110_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; uint8_t v___x_3141_; 
v_a_3102_ = lean_ctor_get(v___x_3101_, 0);
lean_inc(v_a_3102_);
lean_dec_ref_known(v___x_3101_, 1);
v___x_3103_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_3104_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_3097_);
v___x_3105_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3105_, 0, v_a_3097_);
lean_ctor_set(v___x_3105_, 1, v___x_3104_);
v___x_3106_ = lean_mk_string_unchecked("length", 6, 6);
v___x_3107_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3107_, 0, v___x_3106_);
v___x_3108_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3137_ = lean_unsigned_to_nat(1u);
v___x_3138_ = lean_nat_to_int(v___x_3137_);
v___x_3139_ = lean_nat_abs(v___x_3138_);
v___x_3140_ = lean_cstr_to_nat("9007199254740991");
v___x_3141_ = lean_nat_dec_le(v___x_3139_, v___x_3140_);
lean_dec(v___x_3139_);
if (v___x_3141_ == 0)
{
lean_object* v___x_3142_; 
v___x_3142_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3138_);
v___y_3110_ = v___x_3142_;
goto v___jp_3109_;
}
else
{
double v___x_3143_; lean_object* v___x_3144_; 
v___x_3143_ = l_Float_ofInt(v___x_3138_);
lean_dec(v___x_3138_);
v___x_3144_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3144_, 0, v___x_3143_);
v___y_3110_ = v___x_3144_;
goto v___jp_3109_;
}
v___jp_3109_:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3108_);
lean_ctor_set(v___x_3111_, 1, v___y_3110_);
v___x_3112_ = lean_box(0);
v___x_3113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3113_, 0, v___x_3111_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
v___x_3114_ = l_Lasm_JS_obj(v___x_3113_);
v___x_3115_ = lean_unsigned_to_nat(3u);
v___x_3116_ = lean_mk_empty_array_with_capacity(v___x_3115_);
v___x_3117_ = lean_array_push(v___x_3116_, v___x_3105_);
v___x_3118_ = lean_array_push(v___x_3117_, v___x_3107_);
v___x_3119_ = lean_array_push(v___x_3118_, v___x_3114_);
v___x_3120_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_3102_, v___x_3103_, v___x_3119_);
if (lean_obj_tag(v___x_3120_) == 0)
{
lean_object* v___x_3122_; uint8_t v_isShared_3123_; uint8_t v_isSharedCheck_3127_; 
v_isSharedCheck_3127_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3127_ == 0)
{
lean_object* v_unused_3128_; 
v_unused_3128_ = lean_ctor_get(v___x_3120_, 0);
lean_dec(v_unused_3128_);
v___x_3122_ = v___x_3120_;
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
else
{
lean_dec(v___x_3120_);
v___x_3122_ = lean_box(0);
v_isShared_3123_ = v_isSharedCheck_3127_;
goto v_resetjp_3121_;
}
v_resetjp_3121_:
{
lean_object* v___x_3125_; 
if (v_isShared_3123_ == 0)
{
lean_ctor_set(v___x_3122_, 0, v_a_3097_);
v___x_3125_ = v___x_3122_;
goto v_reusejp_3124_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v_a_3097_);
v___x_3125_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3124_;
}
v_reusejp_3124_:
{
return v___x_3125_;
}
}
}
else
{
lean_object* v_a_3129_; lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
lean_dec(v_a_3097_);
v_a_3129_ = lean_ctor_get(v___x_3120_, 0);
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3120_);
if (v_isSharedCheck_3136_ == 0)
{
v___x_3131_ = v___x_3120_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_inc(v_a_3129_);
lean_dec(v___x_3120_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3129_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v_a_3097_);
v_a_3145_ = lean_ctor_get(v___x_3101_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3101_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3101_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3101_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
else
{
lean_object* v_a_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3160_; 
lean_dec(v_a_3097_);
v_a_3153_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3155_ = v___x_3098_;
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_a_3153_);
lean_dec(v___x_3098_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3160_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3158_; 
if (v_isShared_3156_ == 0)
{
v___x_3158_ = v___x_3155_;
goto v_reusejp_3157_;
}
else
{
lean_object* v_reuseFailAlloc_3159_; 
v_reuseFailAlloc_3159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3159_, 0, v_a_3153_);
v___x_3158_ = v_reuseFailAlloc_3159_;
goto v_reusejp_3157_;
}
v_reusejp_3157_:
{
return v___x_3158_;
}
}
}
}
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
v_a_3161_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3096_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3096_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___boxed(lean_object* v_f_3169_, lean_object* v_a_3170_){
_start:
{
lean_object* v_res_3171_; 
v_res_3171_ = l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn(v_f_3169_);
return v_res_3171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2EnvASSETS___lam__0(lean_object* v_d_3172_){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; 
v___x_3173_ = lean_mk_string_unchecked("fetch", 5, 5);
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3173_);
lean_ctor_set(v___x_3174_, 1, v_d_3172_);
v___x_3175_ = lean_unsigned_to_nat(1u);
v___x_3176_ = lean_mk_empty_array_with_capacity(v___x_3175_);
v___x_3177_ = lean_array_push(v___x_3176_, v___x_3174_);
v___x_3178_ = l_Lasm_JS_Web_Internal_fields(v___x_3177_);
lean_dec_ref(v___x_3177_);
return v___x_3178_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2Env___lam__0(lean_object* v_d_3180_){
_start:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3181_ = lean_mk_string_unchecked("ASSETS", 6, 6);
v___x_3182_ = lean_mk_string_unchecked("fetch", 5, 5);
v___x_3183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3182_);
lean_ctor_set(v___x_3183_, 1, v_d_3180_);
v___x_3184_ = lean_unsigned_to_nat(1u);
v___x_3185_ = lean_mk_empty_array_with_capacity(v___x_3184_);
lean_inc_ref(v___x_3185_);
v___x_3186_ = lean_array_push(v___x_3185_, v___x_3183_);
v___x_3187_ = l_Lasm_JS_Web_Internal_fields(v___x_3186_);
lean_dec_ref(v___x_3186_);
v___x_3188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3181_);
lean_ctor_set(v___x_3188_, 1, v___x_3187_);
v___x_3189_ = lean_array_push(v___x_3185_, v___x_3188_);
v___x_3190_ = l_Lasm_JS_Web_Internal_fields(v___x_3189_);
lean_dec_ref(v___x_3189_);
return v___x_3190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0(lean_object* v_d_3192_){
_start:
{
lean_object* v_request_3193_; lean_object* v_functionPath_3194_; lean_object* v_waitUntil_3195_; lean_object* v_passThroughOnException_3196_; lean_object* v_next_3197_; lean_object* v_env_3198_; lean_object* v_params_3199_; lean_object* v_data_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
v_request_3193_ = lean_ctor_get(v_d_3192_, 0);
v_functionPath_3194_ = lean_ctor_get(v_d_3192_, 1);
v_waitUntil_3195_ = lean_ctor_get(v_d_3192_, 2);
v_passThroughOnException_3196_ = lean_ctor_get(v_d_3192_, 3);
v_next_3197_ = lean_ctor_get(v_d_3192_, 4);
v_env_3198_ = lean_ctor_get(v_d_3192_, 5);
v_params_3199_ = lean_ctor_get(v_d_3192_, 6);
v_data_3200_ = lean_ctor_get(v_d_3192_, 7);
v___x_3201_ = lean_mk_string_unchecked("request", 7, 7);
v___x_3202_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref_n(v___x_3202_, 3);
lean_inc(v_request_3193_);
v___x_3203_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3203_, 0, v_request_3193_);
lean_ctor_set(v___x_3203_, 1, v___x_3202_);
v___x_3204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3201_);
lean_ctor_set(v___x_3204_, 1, v___x_3203_);
v___x_3205_ = lean_mk_string_unchecked("functionPath", 12, 12);
lean_inc_ref(v_functionPath_3194_);
v___x_3206_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3206_, 0, v_functionPath_3194_);
v___x_3207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3205_);
lean_ctor_set(v___x_3207_, 1, v___x_3206_);
v___x_3208_ = lean_mk_string_unchecked("waitUntil", 9, 9);
lean_inc(v_waitUntil_3195_);
v___x_3209_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3209_, 0, v_waitUntil_3195_);
lean_ctor_set(v___x_3209_, 1, v___x_3202_);
v___x_3210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3208_);
lean_ctor_set(v___x_3210_, 1, v___x_3209_);
v___x_3211_ = lean_mk_string_unchecked("passThroughOnException", 22, 22);
lean_inc(v_passThroughOnException_3196_);
v___x_3212_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3212_, 0, v_passThroughOnException_3196_);
lean_ctor_set(v___x_3212_, 1, v___x_3202_);
v___x_3213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3211_);
lean_ctor_set(v___x_3213_, 1, v___x_3212_);
v___x_3214_ = lean_mk_string_unchecked("next", 4, 4);
lean_inc(v_next_3197_);
v___x_3215_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3215_, 0, v_next_3197_);
lean_ctor_set(v___x_3215_, 1, v___x_3202_);
v___x_3216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3216_, 0, v___x_3214_);
lean_ctor_set(v___x_3216_, 1, v___x_3215_);
v___x_3217_ = lean_mk_string_unchecked("env", 3, 3);
v___x_3218_ = lean_mk_string_unchecked("ASSETS", 6, 6);
v___x_3219_ = lean_mk_string_unchecked("fetch", 5, 5);
lean_inc(v_env_3198_);
v___x_3220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3220_, 0, v___x_3219_);
lean_ctor_set(v___x_3220_, 1, v_env_3198_);
v___x_3221_ = lean_unsigned_to_nat(1u);
v___x_3222_ = lean_mk_empty_array_with_capacity(v___x_3221_);
lean_inc_ref(v___x_3222_);
v___x_3223_ = lean_array_push(v___x_3222_, v___x_3220_);
v___x_3224_ = l_Lasm_JS_Web_Internal_fields(v___x_3223_);
lean_dec_ref(v___x_3223_);
v___x_3225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3218_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = lean_array_push(v___x_3222_, v___x_3225_);
v___x_3227_ = l_Lasm_JS_Web_Internal_fields(v___x_3226_);
lean_dec_ref(v___x_3226_);
v___x_3228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3217_);
lean_ctor_set(v___x_3228_, 1, v___x_3227_);
v___x_3229_ = lean_mk_string_unchecked("params", 6, 6);
lean_inc(v_params_3199_);
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
lean_ctor_set(v___x_3230_, 1, v_params_3199_);
v___x_3231_ = lean_mk_string_unchecked("data", 4, 4);
lean_inc(v_data_3200_);
v___x_3232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3231_);
lean_ctor_set(v___x_3232_, 1, v_data_3200_);
v___x_3233_ = lean_unsigned_to_nat(8u);
v___x_3234_ = lean_mk_empty_array_with_capacity(v___x_3233_);
v___x_3235_ = lean_array_push(v___x_3234_, v___x_3204_);
v___x_3236_ = lean_array_push(v___x_3235_, v___x_3207_);
v___x_3237_ = lean_array_push(v___x_3236_, v___x_3210_);
v___x_3238_ = lean_array_push(v___x_3237_, v___x_3213_);
v___x_3239_ = lean_array_push(v___x_3238_, v___x_3216_);
v___x_3240_ = lean_array_push(v___x_3239_, v___x_3228_);
v___x_3241_ = lean_array_push(v___x_3240_, v___x_3230_);
v___x_3242_ = lean_array_push(v___x_3241_, v___x_3232_);
v___x_3243_ = l_Lasm_JS_Web_Internal_fields(v___x_3242_);
lean_dec_ref(v___x_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0___boxed(lean_object* v_d_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l_Lasm_JS_Cloudflare_instToJSPagesFunction2___lam__0(v_d_3244_);
lean_dec_ref(v_d_3244_);
return v_res_3245_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instFromJSPagesPluginFunction(void){
_start:
{
lean_object* v___f_3248_; lean_object* v___x_3249_; uint8_t v___x_3250_; lean_object* v___x_3251_; 
v___f_3248_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_instFromJSExecutionContext___lam__0___boxed), 1, 0);
v___x_3249_ = lean_mk_string_unchecked("Lasm.JS.Cloudflare.PagesPluginFunction", 38, 38);
v___x_3250_ = 0;
v___x_3251_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3251_, 0, v___f_3248_);
lean_ctor_set(v___x_3251_, 1, v___x_3249_);
lean_ctor_set_uint8(v___x_3251_, sizeof(void*)*2, v___x_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn(lean_object* v_f_3252_){
_start:
{
lean_object* v___f_3254_; lean_object* v___f_3255_; lean_object* v___f_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___f_3254_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_ExportedHandlerScheduledHandler_ofFn___redArg___lam__0___boxed), 2, 0);
v___f_3255_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3255_, 0, v_f_3252_);
lean_closure_set(v___f_3255_, 1, v___f_3254_);
v___f_3256_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3256_, 0, v___f_3255_);
v___x_3257_ = lean_unsigned_to_nat(0u);
v___x_3258_ = l_Lasm_JS_Function_ofFn(v___f_3256_, v___x_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v_a_3259_; lean_object* v___x_3260_; 
v_a_3259_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3259_);
lean_dec_ref_known(v___x_3258_, 1);
v___x_3260_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3260_) == 0)
{
lean_object* v_a_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v_a_3261_ = lean_ctor_get(v___x_3260_, 0);
lean_inc(v_a_3261_);
lean_dec_ref_known(v___x_3260_, 1);
v___x_3262_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_3263_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_3261_, v___x_3262_);
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_a_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___y_3272_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; uint8_t v___x_3303_; 
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_a_3264_);
lean_dec_ref_known(v___x_3263_, 1);
v___x_3265_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_3266_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_3259_);
v___x_3267_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3267_, 0, v_a_3259_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
v___x_3268_ = lean_mk_string_unchecked("length", 6, 6);
v___x_3269_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3268_);
v___x_3270_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3299_ = lean_unsigned_to_nat(1u);
v___x_3300_ = lean_nat_to_int(v___x_3299_);
v___x_3301_ = lean_nat_abs(v___x_3300_);
v___x_3302_ = lean_cstr_to_nat("9007199254740991");
v___x_3303_ = lean_nat_dec_le(v___x_3301_, v___x_3302_);
lean_dec(v___x_3301_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3304_; 
v___x_3304_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3300_);
v___y_3272_ = v___x_3304_;
goto v___jp_3271_;
}
else
{
double v___x_3305_; lean_object* v___x_3306_; 
v___x_3305_ = l_Float_ofInt(v___x_3300_);
lean_dec(v___x_3300_);
v___x_3306_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3306_, 0, v___x_3305_);
v___y_3272_ = v___x_3306_;
goto v___jp_3271_;
}
v___jp_3271_:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3270_);
lean_ctor_set(v___x_3273_, 1, v___y_3272_);
v___x_3274_ = lean_box(0);
v___x_3275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3273_);
lean_ctor_set(v___x_3275_, 1, v___x_3274_);
v___x_3276_ = l_Lasm_JS_obj(v___x_3275_);
v___x_3277_ = lean_unsigned_to_nat(3u);
v___x_3278_ = lean_mk_empty_array_with_capacity(v___x_3277_);
v___x_3279_ = lean_array_push(v___x_3278_, v___x_3267_);
v___x_3280_ = lean_array_push(v___x_3279_, v___x_3269_);
v___x_3281_ = lean_array_push(v___x_3280_, v___x_3276_);
v___x_3282_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_3264_, v___x_3265_, v___x_3281_);
if (lean_obj_tag(v___x_3282_) == 0)
{
lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3289_; 
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3289_ == 0)
{
lean_object* v_unused_3290_; 
v_unused_3290_ = lean_ctor_get(v___x_3282_, 0);
lean_dec(v_unused_3290_);
v___x_3284_ = v___x_3282_;
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
else
{
lean_dec(v___x_3282_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3287_; 
if (v_isShared_3285_ == 0)
{
lean_ctor_set(v___x_3284_, 0, v_a_3259_);
v___x_3287_ = v___x_3284_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v_a_3259_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
else
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3298_; 
lean_dec(v_a_3259_);
v_a_3291_ = lean_ctor_get(v___x_3282_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3282_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3293_ = v___x_3282_;
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3282_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3296_; 
if (v_isShared_3294_ == 0)
{
v___x_3296_ = v___x_3293_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3291_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
}
else
{
lean_object* v_a_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3314_; 
lean_dec(v_a_3259_);
v_a_3307_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3314_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3309_ = v___x_3263_;
v_isShared_3310_ = v_isSharedCheck_3314_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_a_3307_);
lean_dec(v___x_3263_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3314_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3312_; 
if (v_isShared_3310_ == 0)
{
v___x_3312_ = v___x_3309_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v_a_3307_);
v___x_3312_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
return v___x_3312_;
}
}
}
}
else
{
lean_object* v_a_3315_; lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3322_; 
lean_dec(v_a_3259_);
v_a_3315_ = lean_ctor_get(v___x_3260_, 0);
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3322_ == 0)
{
v___x_3317_ = v___x_3260_;
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
else
{
lean_inc(v_a_3315_);
lean_dec(v___x_3260_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3318_ == 0)
{
v___x_3320_ = v___x_3317_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_a_3315_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
}
}
else
{
lean_object* v_a_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3330_; 
v_a_3323_ = lean_ctor_get(v___x_3258_, 0);
v_isSharedCheck_3330_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3330_ == 0)
{
v___x_3325_ = v___x_3258_;
v_isShared_3326_ = v_isSharedCheck_3330_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_a_3323_);
lean_dec(v___x_3258_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3330_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v___x_3328_; 
if (v_isShared_3326_ == 0)
{
v___x_3328_ = v___x_3325_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v_a_3323_);
v___x_3328_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
return v___x_3328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn___boxed(lean_object* v_f_3331_, lean_object* v_a_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lasm_JS_Cloudflare_PagesPluginFunction_ofFn(v_f_3331_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn(lean_object* v_f_3334_){
_start:
{
lean_object* v___f_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___f_3336_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_PagesFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3336_, 0, v_f_3334_);
v___x_3337_ = lean_unsigned_to_nat(0u);
v___x_3338_ = l_Lasm_JS_Function_ofSyncFn(v___f_3336_, v___x_3337_);
if (lean_obj_tag(v___x_3338_) == 0)
{
lean_object* v_a_3339_; lean_object* v___x_3340_; 
v_a_3339_ = lean_ctor_get(v___x_3338_, 0);
lean_inc(v_a_3339_);
lean_dec_ref_known(v___x_3338_, 1);
v___x_3340_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3340_) == 0)
{
lean_object* v_a_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; 
v_a_3341_ = lean_ctor_get(v___x_3340_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v___x_3340_, 1);
v___x_3342_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_3343_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_3341_, v___x_3342_);
if (lean_obj_tag(v___x_3343_) == 0)
{
lean_object* v_a_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___y_3352_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; uint8_t v___x_3383_; 
v_a_3344_ = lean_ctor_get(v___x_3343_, 0);
lean_inc(v_a_3344_);
lean_dec_ref_known(v___x_3343_, 1);
v___x_3345_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_3346_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_3339_);
v___x_3347_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3347_, 0, v_a_3339_);
lean_ctor_set(v___x_3347_, 1, v___x_3346_);
v___x_3348_ = lean_mk_string_unchecked("length", 6, 6);
v___x_3349_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3348_);
v___x_3350_ = lean_mk_string_unchecked("value", 5, 5);
v___x_3379_ = lean_unsigned_to_nat(1u);
v___x_3380_ = lean_nat_to_int(v___x_3379_);
v___x_3381_ = lean_nat_abs(v___x_3380_);
v___x_3382_ = lean_cstr_to_nat("9007199254740991");
v___x_3383_ = lean_nat_dec_le(v___x_3381_, v___x_3382_);
lean_dec(v___x_3381_);
if (v___x_3383_ == 0)
{
lean_object* v___x_3384_; 
v___x_3384_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3384_, 0, v___x_3380_);
v___y_3352_ = v___x_3384_;
goto v___jp_3351_;
}
else
{
double v___x_3385_; lean_object* v___x_3386_; 
v___x_3385_ = l_Float_ofInt(v___x_3380_);
lean_dec(v___x_3380_);
v___x_3386_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3386_, 0, v___x_3385_);
v___y_3352_ = v___x_3386_;
goto v___jp_3351_;
}
v___jp_3351_:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3353_, 0, v___x_3350_);
lean_ctor_set(v___x_3353_, 1, v___y_3352_);
v___x_3354_ = lean_box(0);
v___x_3355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3353_);
lean_ctor_set(v___x_3355_, 1, v___x_3354_);
v___x_3356_ = l_Lasm_JS_obj(v___x_3355_);
v___x_3357_ = lean_unsigned_to_nat(3u);
v___x_3358_ = lean_mk_empty_array_with_capacity(v___x_3357_);
v___x_3359_ = lean_array_push(v___x_3358_, v___x_3347_);
v___x_3360_ = lean_array_push(v___x_3359_, v___x_3349_);
v___x_3361_ = lean_array_push(v___x_3360_, v___x_3356_);
v___x_3362_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Cloudflare_TracingEnterSpanCallback_ofFn_spec__2(v_a_3344_, v___x_3345_, v___x_3361_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3369_ == 0)
{
lean_object* v_unused_3370_; 
v_unused_3370_ = lean_ctor_get(v___x_3362_, 0);
lean_dec(v_unused_3370_);
v___x_3364_ = v___x_3362_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_dec(v___x_3362_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
lean_ctor_set(v___x_3364_, 0, v_a_3339_);
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3339_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
else
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
lean_dec(v_a_3339_);
v_a_3371_ = lean_ctor_get(v___x_3362_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3362_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3362_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3362_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
v___x_3376_ = v___x_3373_;
goto v_reusejp_3375_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_a_3371_);
v___x_3376_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3375_;
}
v_reusejp_3375_:
{
return v___x_3376_;
}
}
}
}
}
else
{
lean_object* v_a_3387_; lean_object* v___x_3389_; uint8_t v_isShared_3390_; uint8_t v_isSharedCheck_3394_; 
lean_dec(v_a_3339_);
v_a_3387_ = lean_ctor_get(v___x_3343_, 0);
v_isSharedCheck_3394_ = !lean_is_exclusive(v___x_3343_);
if (v_isSharedCheck_3394_ == 0)
{
v___x_3389_ = v___x_3343_;
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
else
{
lean_inc(v_a_3387_);
lean_dec(v___x_3343_);
v___x_3389_ = lean_box(0);
v_isShared_3390_ = v_isSharedCheck_3394_;
goto v_resetjp_3388_;
}
v_resetjp_3388_:
{
lean_object* v___x_3392_; 
if (v_isShared_3390_ == 0)
{
v___x_3392_ = v___x_3389_;
goto v_reusejp_3391_;
}
else
{
lean_object* v_reuseFailAlloc_3393_; 
v_reuseFailAlloc_3393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3393_, 0, v_a_3387_);
v___x_3392_ = v_reuseFailAlloc_3393_;
goto v_reusejp_3391_;
}
v_reusejp_3391_:
{
return v___x_3392_;
}
}
}
}
else
{
lean_object* v_a_3395_; lean_object* v___x_3397_; uint8_t v_isShared_3398_; uint8_t v_isSharedCheck_3402_; 
lean_dec(v_a_3339_);
v_a_3395_ = lean_ctor_get(v___x_3340_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v___x_3340_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3397_ = v___x_3340_;
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
else
{
lean_inc(v_a_3395_);
lean_dec(v___x_3340_);
v___x_3397_ = lean_box(0);
v_isShared_3398_ = v_isSharedCheck_3402_;
goto v_resetjp_3396_;
}
v_resetjp_3396_:
{
lean_object* v___x_3400_; 
if (v_isShared_3398_ == 0)
{
v___x_3400_ = v___x_3397_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3395_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
return v___x_3400_;
}
}
}
}
else
{
lean_object* v_a_3403_; lean_object* v___x_3405_; uint8_t v_isShared_3406_; uint8_t v_isSharedCheck_3410_; 
v_a_3403_ = lean_ctor_get(v___x_3338_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3338_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3405_ = v___x_3338_;
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
else
{
lean_inc(v_a_3403_);
lean_dec(v___x_3338_);
v___x_3405_ = lean_box(0);
v_isShared_3406_ = v_isSharedCheck_3410_;
goto v_resetjp_3404_;
}
v_resetjp_3404_:
{
lean_object* v___x_3408_; 
if (v_isShared_3406_ == 0)
{
v___x_3408_ = v___x_3405_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3403_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn___boxed(lean_object* v_f_3411_, lean_object* v_a_3412_){
_start:
{
lean_object* v_res_3413_; 
v_res_3413_ = l_Lasm_JS_Cloudflare_PagesPluginFunction_ofSyncFn(v_f_3411_);
return v_res_3413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0(lean_object* v_d_3414_){
_start:
{
lean_object* v_request_3415_; lean_object* v_functionPath_3416_; lean_object* v_waitUntil_3417_; lean_object* v_passThroughOnException_3418_; lean_object* v_next_3419_; lean_object* v_env_3420_; lean_object* v_params_3421_; lean_object* v_data_3422_; lean_object* v_pluginArgs_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; 
v_request_3415_ = lean_ctor_get(v_d_3414_, 0);
v_functionPath_3416_ = lean_ctor_get(v_d_3414_, 1);
v_waitUntil_3417_ = lean_ctor_get(v_d_3414_, 2);
v_passThroughOnException_3418_ = lean_ctor_get(v_d_3414_, 3);
v_next_3419_ = lean_ctor_get(v_d_3414_, 4);
v_env_3420_ = lean_ctor_get(v_d_3414_, 5);
v_params_3421_ = lean_ctor_get(v_d_3414_, 6);
v_data_3422_ = lean_ctor_get(v_d_3414_, 7);
v_pluginArgs_3423_ = lean_ctor_get(v_d_3414_, 8);
v___x_3424_ = lean_mk_string_unchecked("request", 7, 7);
v___x_3425_ = lean_mk_string_unchecked("", 0, 0);
lean_inc_ref_n(v___x_3425_, 3);
lean_inc(v_request_3415_);
v___x_3426_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3426_, 0, v_request_3415_);
lean_ctor_set(v___x_3426_, 1, v___x_3425_);
v___x_3427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3427_, 0, v___x_3424_);
lean_ctor_set(v___x_3427_, 1, v___x_3426_);
v___x_3428_ = lean_mk_string_unchecked("functionPath", 12, 12);
lean_inc_ref(v_functionPath_3416_);
v___x_3429_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3429_, 0, v_functionPath_3416_);
v___x_3430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3430_, 0, v___x_3428_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = lean_mk_string_unchecked("waitUntil", 9, 9);
lean_inc(v_waitUntil_3417_);
v___x_3432_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3432_, 0, v_waitUntil_3417_);
lean_ctor_set(v___x_3432_, 1, v___x_3425_);
v___x_3433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3433_, 0, v___x_3431_);
lean_ctor_set(v___x_3433_, 1, v___x_3432_);
v___x_3434_ = lean_mk_string_unchecked("passThroughOnException", 22, 22);
lean_inc(v_passThroughOnException_3418_);
v___x_3435_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3435_, 0, v_passThroughOnException_3418_);
lean_ctor_set(v___x_3435_, 1, v___x_3425_);
v___x_3436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3434_);
lean_ctor_set(v___x_3436_, 1, v___x_3435_);
v___x_3437_ = lean_mk_string_unchecked("next", 4, 4);
lean_inc(v_next_3419_);
v___x_3438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3438_, 0, v_next_3419_);
lean_ctor_set(v___x_3438_, 1, v___x_3425_);
v___x_3439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3439_, 0, v___x_3437_);
lean_ctor_set(v___x_3439_, 1, v___x_3438_);
v___x_3440_ = lean_mk_string_unchecked("env", 3, 3);
v___x_3441_ = lean_mk_string_unchecked("ASSETS", 6, 6);
v___x_3442_ = lean_mk_string_unchecked("fetch", 5, 5);
lean_inc(v_env_3420_);
v___x_3443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3443_, 0, v___x_3442_);
lean_ctor_set(v___x_3443_, 1, v_env_3420_);
v___x_3444_ = lean_unsigned_to_nat(1u);
v___x_3445_ = lean_mk_empty_array_with_capacity(v___x_3444_);
lean_inc_ref(v___x_3445_);
v___x_3446_ = lean_array_push(v___x_3445_, v___x_3443_);
v___x_3447_ = l_Lasm_JS_Web_Internal_fields(v___x_3446_);
lean_dec_ref(v___x_3446_);
v___x_3448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3448_, 0, v___x_3441_);
lean_ctor_set(v___x_3448_, 1, v___x_3447_);
v___x_3449_ = lean_array_push(v___x_3445_, v___x_3448_);
v___x_3450_ = l_Lasm_JS_Web_Internal_fields(v___x_3449_);
lean_dec_ref(v___x_3449_);
v___x_3451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3440_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = lean_mk_string_unchecked("params", 6, 6);
lean_inc(v_params_3421_);
v___x_3453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3453_, 0, v___x_3452_);
lean_ctor_set(v___x_3453_, 1, v_params_3421_);
v___x_3454_ = lean_mk_string_unchecked("data", 4, 4);
lean_inc(v_data_3422_);
v___x_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
lean_ctor_set(v___x_3455_, 1, v_data_3422_);
v___x_3456_ = lean_mk_string_unchecked("pluginArgs", 10, 10);
lean_inc(v_pluginArgs_3423_);
v___x_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3456_);
lean_ctor_set(v___x_3457_, 1, v_pluginArgs_3423_);
v___x_3458_ = lean_unsigned_to_nat(9u);
v___x_3459_ = lean_mk_empty_array_with_capacity(v___x_3458_);
v___x_3460_ = lean_array_push(v___x_3459_, v___x_3427_);
v___x_3461_ = lean_array_push(v___x_3460_, v___x_3430_);
v___x_3462_ = lean_array_push(v___x_3461_, v___x_3433_);
v___x_3463_ = lean_array_push(v___x_3462_, v___x_3436_);
v___x_3464_ = lean_array_push(v___x_3463_, v___x_3439_);
v___x_3465_ = lean_array_push(v___x_3464_, v___x_3451_);
v___x_3466_ = lean_array_push(v___x_3465_, v___x_3453_);
v___x_3467_ = lean_array_push(v___x_3466_, v___x_3455_);
v___x_3468_ = lean_array_push(v___x_3467_, v___x_3457_);
v___x_3469_ = l_Lasm_JS_Web_Internal_fields(v___x_3468_);
lean_dec_ref(v___x_3468_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0___boxed(lean_object* v_d_3470_){
_start:
{
lean_object* v_res_3471_; 
v_res_3471_ = l_Lasm_JS_Cloudflare_instToJSPagesPluginFunction2___lam__0(v_d_3470_);
lean_dec_ref(v_d_3470_);
return v_res_3471_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Fetch(uint8_t builtin);
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
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Fetch(builtin);
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
