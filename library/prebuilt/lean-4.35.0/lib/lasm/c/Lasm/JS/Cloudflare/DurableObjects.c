// Lean compiler output
// Module: Lasm.JS.Cloudflare.DurableObjects
// Imports: public import Init public meta import Init public import Lasm.JS.Cloudflare.Support public import Lasm.JS.Web.Fetch public import Lasm.JS.Cloudflare.Cache public import Lasm.JS.Cloudflare.Sockets
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(size_t, size_t, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_connect_spec__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Request_new_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Cloudflare.DurableObjectNamespace"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectId = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Cloudflare.DurableObjectId"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectId = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectId___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectStub = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Cloudflare.DurableObjectStub"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStub___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectState = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Cloudflare.DurableObjectState"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectState = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectState___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectStorage = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Cloudflare.DurableObjectStorage"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorage___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectTransaction = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Cloudflare.DurableObjectTransaction"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Cloudflare.DurableObjectJurisdiction.eu"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.JS.Cloudflare.DurableObjectJurisdiction.fedramp"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lasm.JS.Cloudflare.DurableObjectJurisdiction.fedrampHigh"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Cloudflare.DurableObjectJurisdiction.us"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8;
static lean_once_cell_t l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "eu"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "fedramp"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "fedramp-high"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "us"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Cloudflare.DurableObjectJurisdiction"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.wnam"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.enam"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.sam"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.weur"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.eeur"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.apac"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.apacNe"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__13_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.apacSe"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__14 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__14_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__15 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__15_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.oc"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__16 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__16_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__17 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__17_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.afr"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__18 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__18_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__19 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__19_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint.me"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__20 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__20_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__21 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__21_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wnam"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "enam"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sam"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "weur"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "eeur"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "apac"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "apac-ne"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "apac-se"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "oc"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "afr"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "me"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__21 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__21_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Cloudflare.DurableObjectLocationHint"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode = (const lean_object*)&l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Lasm.JS.Cloudflare.DurableObjectRoutingMode.primaryOnly"};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode = (const lean_object*)&l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "primary-only"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Cloudflare.DurableObjectRoutingMode"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "jurisdiction"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "locationHint"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "routingMode"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_socketAddress_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_socketAddress_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString = (const lean_object*)&l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectStateBlockConcurrencyWhileCallback = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "Lasm.JS.Cloudflare.DurableObjectStateBlockConcurrencyWhileCallback"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStateBlockConcurrencyWhileCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__3_value)}};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4_value;
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "retryAlarm"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "allowConcurrency"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "noCache"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "startAfter"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prefix"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reverse"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "limit"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0, .m_arity = 4, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__2_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "allowUnconfirmed"};
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectStorageTransactionClosure = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "Lasm.JS.Cloudflare.DurableObjectStorageTransactionClosure"};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure = (const lean_object*)&l_Lasm_JS_Cloudflare_instFromJSDurableObjectStorageTransactionClosure___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions = (const lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "newUniqueId"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "idFromName"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "idFromString"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getByName"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toString"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__0_value;
static const lean_array_object l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectId_equals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "equals"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectId_equals___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStub_connect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "connect"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStub_connect___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectState_props___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "props"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectState_props___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectState_storage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "storage"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectState_storage___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "waitUntil"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "blockConcurrencyWhile"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectState_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectState_abort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a two-element array"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 31, .m_data = "Array ((String × Lasm.JS.Data))"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 41, .m_data = "an element is not (String × Lasm.JS.Data)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Cloudflare.Support.mapOf"};
static const lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Array.from"};
static const lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__0_value),((lean_object*)&l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__1_value),((lean_object*)&l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "list"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "put"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "delete"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "deleteAll"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "transaction"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "getAlarm"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "setAlarm"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "deleteAlarm"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "sync"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "getCurrentBookmark"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "getBookmarkForTime"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "onNextSessionRestoreBookmark"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rollback"};
static const lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___closed__0 = (const lean_object*)&l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Cloudflare_instFromJSDurableObjectNamespace___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorIdx(uint8_t v_x_57_){
_start:
{
switch(v_x_57_)
{
case 0:
{
lean_object* v___x_58_; 
v___x_58_ = lean_unsigned_to_nat(0u);
return v___x_58_;
}
case 1:
{
lean_object* v___x_59_; 
v___x_59_ = lean_unsigned_to_nat(1u);
return v___x_59_;
}
case 2:
{
lean_object* v___x_60_; 
v___x_60_ = lean_unsigned_to_nat(2u);
return v___x_60_;
}
default: 
{
lean_object* v___x_61_; 
v___x_61_ = lean_unsigned_to_nat(3u);
return v___x_61_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorIdx___boxed(lean_object* v_x_62_){
_start:
{
uint8_t v_x_boxed_63_; lean_object* v_res_64_; 
v_x_boxed_63_ = lean_unbox(v_x_62_);
v_res_64_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorIdx(v_x_boxed_63_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim___redArg(lean_object* v_k_65_){
_start:
{
lean_inc(v_k_65_);
return v_k_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim___redArg___boxed(lean_object* v_k_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim___redArg(v_k_66_);
lean_dec(v_k_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim(lean_object* v_motive_68_, lean_object* v_ctorIdx_69_, uint8_t v_t_70_, lean_object* v_h_71_, lean_object* v_k_72_){
_start:
{
lean_inc(v_k_72_);
return v_k_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim___boxed(lean_object* v_motive_73_, lean_object* v_ctorIdx_74_, lean_object* v_t_75_, lean_object* v_h_76_, lean_object* v_k_77_){
_start:
{
uint8_t v_t_boxed_78_; lean_object* v_res_79_; 
v_t_boxed_78_ = lean_unbox(v_t_75_);
v_res_79_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorElim(v_motive_73_, v_ctorIdx_74_, v_t_boxed_78_, v_h_76_, v_k_77_);
lean_dec(v_k_77_);
lean_dec(v_ctorIdx_74_);
return v_res_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim___redArg(lean_object* v_eu_80_){
_start:
{
lean_inc(v_eu_80_);
return v_eu_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim___redArg___boxed(lean_object* v_eu_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim___redArg(v_eu_81_);
lean_dec(v_eu_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim(lean_object* v_motive_83_, uint8_t v_t_84_, lean_object* v_h_85_, lean_object* v_eu_86_){
_start:
{
lean_inc(v_eu_86_);
return v_eu_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim___boxed(lean_object* v_motive_87_, lean_object* v_t_88_, lean_object* v_h_89_, lean_object* v_eu_90_){
_start:
{
uint8_t v_t_boxed_91_; lean_object* v_res_92_; 
v_t_boxed_91_ = lean_unbox(v_t_88_);
v_res_92_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_eu_elim(v_motive_87_, v_t_boxed_91_, v_h_89_, v_eu_90_);
lean_dec(v_eu_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim___redArg(lean_object* v_fedramp_93_){
_start:
{
lean_inc(v_fedramp_93_);
return v_fedramp_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim___redArg___boxed(lean_object* v_fedramp_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim___redArg(v_fedramp_94_);
lean_dec(v_fedramp_94_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim(lean_object* v_motive_96_, uint8_t v_t_97_, lean_object* v_h_98_, lean_object* v_fedramp_99_){
_start:
{
lean_inc(v_fedramp_99_);
return v_fedramp_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim___boxed(lean_object* v_motive_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_fedramp_103_){
_start:
{
uint8_t v_t_boxed_104_; lean_object* v_res_105_; 
v_t_boxed_104_ = lean_unbox(v_t_101_);
v_res_105_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedramp_elim(v_motive_100_, v_t_boxed_104_, v_h_102_, v_fedramp_103_);
lean_dec(v_fedramp_103_);
return v_res_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim___redArg(lean_object* v_fedrampHigh_106_){
_start:
{
lean_inc(v_fedrampHigh_106_);
return v_fedrampHigh_106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim___redArg___boxed(lean_object* v_fedrampHigh_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim___redArg(v_fedrampHigh_107_);
lean_dec(v_fedrampHigh_107_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim(lean_object* v_motive_109_, uint8_t v_t_110_, lean_object* v_h_111_, lean_object* v_fedrampHigh_112_){
_start:
{
lean_inc(v_fedrampHigh_112_);
return v_fedrampHigh_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim___boxed(lean_object* v_motive_113_, lean_object* v_t_114_, lean_object* v_h_115_, lean_object* v_fedrampHigh_116_){
_start:
{
uint8_t v_t_boxed_117_; lean_object* v_res_118_; 
v_t_boxed_117_ = lean_unbox(v_t_114_);
v_res_118_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_fedrampHigh_elim(v_motive_113_, v_t_boxed_117_, v_h_115_, v_fedrampHigh_116_);
lean_dec(v_fedrampHigh_116_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim___redArg(lean_object* v_us_119_){
_start:
{
lean_inc(v_us_119_);
return v_us_119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim___redArg___boxed(lean_object* v_us_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim___redArg(v_us_120_);
lean_dec(v_us_120_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim(lean_object* v_motive_122_, uint8_t v_t_123_, lean_object* v_h_124_, lean_object* v_us_125_){
_start:
{
lean_inc(v_us_125_);
return v_us_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim___boxed(lean_object* v_motive_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_us_129_){
_start:
{
uint8_t v_t_boxed_130_; lean_object* v_res_131_; 
v_t_boxed_130_ = lean_unbox(v_t_127_);
v_res_131_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_us_elim(v_motive_126_, v_t_boxed_130_, v_h_128_, v_us_129_);
lean_dec(v_us_129_);
return v_res_131_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction_beq(uint8_t v_x_132_, uint8_t v_y_133_){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; 
v___x_134_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorIdx(v_x_132_);
v___x_135_ = l_Lasm_JS_Cloudflare_DurableObjectJurisdiction_ctorIdx(v_y_133_);
v___x_136_ = lean_nat_dec_eq(v___x_134_, v___x_135_);
lean_dec(v___x_135_);
lean_dec(v___x_134_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction_beq___boxed(lean_object* v_x_137_, lean_object* v_y_138_){
_start:
{
uint8_t v_x_21__boxed_139_; uint8_t v_y_22__boxed_140_; uint8_t v_res_141_; lean_object* v_r_142_; 
v_x_21__boxed_139_ = lean_unbox(v_x_137_);
v_y_22__boxed_140_ = lean_unbox(v_y_138_);
v_res_141_ = l_Lasm_JS_Cloudflare_instBEqDurableObjectJurisdiction_beq(v_x_21__boxed_139_, v_y_22__boxed_140_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(2u);
v___x_158_ = lean_nat_to_int(v___x_157_);
return v___x_158_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(1u);
v___x_160_ = lean_nat_to_int(v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr(uint8_t v_x_161_, lean_object* v_prec_162_){
_start:
{
lean_object* v___y_164_; lean_object* v___y_171_; lean_object* v___y_178_; lean_object* v___y_185_; 
switch(v_x_161_)
{
case 0:
{
lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_191_ = lean_unsigned_to_nat(1024u);
v___x_192_ = lean_nat_dec_le(v___x_191_, v_prec_162_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
v___x_193_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_164_ = v___x_193_;
goto v___jp_163_;
}
else
{
lean_object* v___x_194_; 
v___x_194_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_164_ = v___x_194_;
goto v___jp_163_;
}
}
case 1:
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = lean_unsigned_to_nat(1024u);
v___x_196_ = lean_nat_dec_le(v___x_195_, v_prec_162_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
v___x_197_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_171_ = v___x_197_;
goto v___jp_170_;
}
else
{
lean_object* v___x_198_; 
v___x_198_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_171_ = v___x_198_;
goto v___jp_170_;
}
}
case 2:
{
lean_object* v___x_199_; uint8_t v___x_200_; 
v___x_199_ = lean_unsigned_to_nat(1024u);
v___x_200_ = lean_nat_dec_le(v___x_199_, v_prec_162_);
if (v___x_200_ == 0)
{
lean_object* v___x_201_; 
v___x_201_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_178_ = v___x_201_;
goto v___jp_177_;
}
else
{
lean_object* v___x_202_; 
v___x_202_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_178_ = v___x_202_;
goto v___jp_177_;
}
}
default: 
{
lean_object* v___x_203_; uint8_t v___x_204_; 
v___x_203_ = lean_unsigned_to_nat(1024u);
v___x_204_ = lean_nat_dec_le(v___x_203_, v_prec_162_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; 
v___x_205_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_185_ = v___x_205_;
goto v___jp_184_;
}
else
{
lean_object* v___x_206_; 
v___x_206_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_185_ = v___x_206_;
goto v___jp_184_;
}
}
}
v___jp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; uint8_t v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__1));
lean_inc(v___y_164_);
v___x_166_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_166_, 0, v___y_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = 0;
v___x_168_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_168_, 0, v___x_166_);
lean_ctor_set_uint8(v___x_168_, sizeof(void*)*1, v___x_167_);
v___x_169_ = l_Repr_addAppParen(v___x_168_, v_prec_162_);
return v___x_169_;
}
v___jp_170_:
{
lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_172_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__3));
lean_inc(v___y_171_);
v___x_173_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_173_, 0, v___y_171_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
v___x_174_ = 0;
v___x_175_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_175_, 0, v___x_173_);
lean_ctor_set_uint8(v___x_175_, sizeof(void*)*1, v___x_174_);
v___x_176_ = l_Repr_addAppParen(v___x_175_, v_prec_162_);
return v___x_176_;
}
v___jp_177_:
{
lean_object* v___x_179_; lean_object* v___x_180_; uint8_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_179_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__5));
lean_inc(v___y_178_);
v___x_180_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_180_, 0, v___y_178_);
lean_ctor_set(v___x_180_, 1, v___x_179_);
v___x_181_ = 0;
v___x_182_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_182_, 0, v___x_180_);
lean_ctor_set_uint8(v___x_182_, sizeof(void*)*1, v___x_181_);
v___x_183_ = l_Repr_addAppParen(v___x_182_, v_prec_162_);
return v___x_183_;
}
v___jp_184_:
{
lean_object* v___x_186_; lean_object* v___x_187_; uint8_t v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; 
v___x_186_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__7));
lean_inc(v___y_185_);
v___x_187_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_187_, 0, v___y_185_);
lean_ctor_set(v___x_187_, 1, v___x_186_);
v___x_188_ = 0;
v___x_189_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_189_, 0, v___x_187_);
lean_ctor_set_uint8(v___x_189_, sizeof(void*)*1, v___x_188_);
v___x_190_ = l_Repr_addAppParen(v___x_189_, v_prec_162_);
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___boxed(lean_object* v_x_207_, lean_object* v_prec_208_){
_start:
{
uint8_t v_x_225__boxed_209_; lean_object* v_res_210_; 
v_x_225__boxed_209_ = lean_unbox(v_x_207_);
v_res_210_ = l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr(v_x_225__boxed_209_, v_prec_208_);
lean_dec(v_prec_208_);
return v_res_210_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction_default(void){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = 0;
return v___x_213_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction(void){
_start:
{
uint8_t v___x_214_; 
v___x_214_ = 0;
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0(uint8_t v_x_227_){
_start:
{
switch(v_x_227_)
{
case 0:
{
lean_object* v___x_228_; 
v___x_228_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1));
return v___x_228_;
}
case 1:
{
lean_object* v___x_229_; 
v___x_229_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3));
return v___x_229_;
}
case 2:
{
lean_object* v___x_230_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5));
return v___x_230_;
}
default: 
{
lean_object* v___x_231_; 
v___x_231_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7));
return v___x_231_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___boxed(lean_object* v_x_232_){
_start:
{
uint8_t v_x_74__boxed_233_; lean_object* v_res_234_; 
v_x_74__boxed_233_ = lean_unbox(v_x_232_);
v_res_234_ = l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0(v_x_74__boxed_233_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0(lean_object* v_x_252_){
_start:
{
if (lean_obj_tag(v_x_252_) == 4)
{
lean_object* v_s_255_; lean_object* v___x_256_; uint8_t v___x_257_; 
v_s_255_ = lean_ctor_get(v_x_252_, 0);
v___x_256_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__0));
v___x_257_ = lean_string_dec_eq(v_s_255_, v___x_256_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_258_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__2));
v___x_259_ = lean_string_dec_eq(v_s_255_, v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__4));
v___x_261_ = lean_string_dec_eq(v_s_255_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_262_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__6));
v___x_263_ = lean_string_dec_eq(v_s_255_, v___x_262_);
if (v___x_263_ == 0)
{
goto v___jp_253_;
}
else
{
lean_object* v___x_264_; 
v___x_264_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__2));
return v___x_264_;
}
}
else
{
lean_object* v___x_265_; 
v___x_265_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__3));
return v___x_265_;
}
}
else
{
lean_object* v___x_266_; 
v___x_266_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__4));
return v___x_266_;
}
}
else
{
lean_object* v___x_267_; 
v___x_267_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__5));
return v___x_267_;
}
}
else
{
goto v___jp_253_;
}
v___jp_253_:
{
lean_object* v___x_254_; 
v___x_254_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___closed__1));
return v___x_254_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0___boxed(lean_object* v_x_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lasm_JS_Cloudflare_instFromJSDurableObjectJurisdiction___lam__0(v_x_268_);
lean_dec(v_x_268_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorIdx(uint8_t v_x_277_){
_start:
{
switch(v_x_277_)
{
case 0:
{
lean_object* v___x_278_; 
v___x_278_ = lean_unsigned_to_nat(0u);
return v___x_278_;
}
case 1:
{
lean_object* v___x_279_; 
v___x_279_ = lean_unsigned_to_nat(1u);
return v___x_279_;
}
case 2:
{
lean_object* v___x_280_; 
v___x_280_ = lean_unsigned_to_nat(2u);
return v___x_280_;
}
case 3:
{
lean_object* v___x_281_; 
v___x_281_ = lean_unsigned_to_nat(3u);
return v___x_281_;
}
case 4:
{
lean_object* v___x_282_; 
v___x_282_ = lean_unsigned_to_nat(4u);
return v___x_282_;
}
case 5:
{
lean_object* v___x_283_; 
v___x_283_ = lean_unsigned_to_nat(5u);
return v___x_283_;
}
case 6:
{
lean_object* v___x_284_; 
v___x_284_ = lean_unsigned_to_nat(6u);
return v___x_284_;
}
case 7:
{
lean_object* v___x_285_; 
v___x_285_ = lean_unsigned_to_nat(7u);
return v___x_285_;
}
case 8:
{
lean_object* v___x_286_; 
v___x_286_ = lean_unsigned_to_nat(8u);
return v___x_286_;
}
case 9:
{
lean_object* v___x_287_; 
v___x_287_ = lean_unsigned_to_nat(9u);
return v___x_287_;
}
default: 
{
lean_object* v___x_288_; 
v___x_288_ = lean_unsigned_to_nat(10u);
return v___x_288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorIdx___boxed(lean_object* v_x_289_){
_start:
{
uint8_t v_x_boxed_290_; lean_object* v_res_291_; 
v_x_boxed_290_ = lean_unbox(v_x_289_);
v_res_291_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorIdx(v_x_boxed_290_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim___redArg(lean_object* v_k_292_){
_start:
{
lean_inc(v_k_292_);
return v_k_292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim___redArg___boxed(lean_object* v_k_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim___redArg(v_k_293_);
lean_dec(v_k_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim(lean_object* v_motive_295_, lean_object* v_ctorIdx_296_, uint8_t v_t_297_, lean_object* v_h_298_, lean_object* v_k_299_){
_start:
{
lean_inc(v_k_299_);
return v_k_299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim___boxed(lean_object* v_motive_300_, lean_object* v_ctorIdx_301_, lean_object* v_t_302_, lean_object* v_h_303_, lean_object* v_k_304_){
_start:
{
uint8_t v_t_boxed_305_; lean_object* v_res_306_; 
v_t_boxed_305_ = lean_unbox(v_t_302_);
v_res_306_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorElim(v_motive_300_, v_ctorIdx_301_, v_t_boxed_305_, v_h_303_, v_k_304_);
lean_dec(v_k_304_);
lean_dec(v_ctorIdx_301_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim___redArg(lean_object* v_wnam_307_){
_start:
{
lean_inc(v_wnam_307_);
return v_wnam_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim___redArg___boxed(lean_object* v_wnam_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim___redArg(v_wnam_308_);
lean_dec(v_wnam_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim(lean_object* v_motive_310_, uint8_t v_t_311_, lean_object* v_h_312_, lean_object* v_wnam_313_){
_start:
{
lean_inc(v_wnam_313_);
return v_wnam_313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim___boxed(lean_object* v_motive_314_, lean_object* v_t_315_, lean_object* v_h_316_, lean_object* v_wnam_317_){
_start:
{
uint8_t v_t_boxed_318_; lean_object* v_res_319_; 
v_t_boxed_318_ = lean_unbox(v_t_315_);
v_res_319_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_wnam_elim(v_motive_314_, v_t_boxed_318_, v_h_316_, v_wnam_317_);
lean_dec(v_wnam_317_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim___redArg(lean_object* v_enam_320_){
_start:
{
lean_inc(v_enam_320_);
return v_enam_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim___redArg___boxed(lean_object* v_enam_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim___redArg(v_enam_321_);
lean_dec(v_enam_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim(lean_object* v_motive_323_, uint8_t v_t_324_, lean_object* v_h_325_, lean_object* v_enam_326_){
_start:
{
lean_inc(v_enam_326_);
return v_enam_326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim___boxed(lean_object* v_motive_327_, lean_object* v_t_328_, lean_object* v_h_329_, lean_object* v_enam_330_){
_start:
{
uint8_t v_t_boxed_331_; lean_object* v_res_332_; 
v_t_boxed_331_ = lean_unbox(v_t_328_);
v_res_332_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_enam_elim(v_motive_327_, v_t_boxed_331_, v_h_329_, v_enam_330_);
lean_dec(v_enam_330_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim___redArg(lean_object* v_sam_333_){
_start:
{
lean_inc(v_sam_333_);
return v_sam_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim___redArg___boxed(lean_object* v_sam_334_){
_start:
{
lean_object* v_res_335_; 
v_res_335_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim___redArg(v_sam_334_);
lean_dec(v_sam_334_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim(lean_object* v_motive_336_, uint8_t v_t_337_, lean_object* v_h_338_, lean_object* v_sam_339_){
_start:
{
lean_inc(v_sam_339_);
return v_sam_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim___boxed(lean_object* v_motive_340_, lean_object* v_t_341_, lean_object* v_h_342_, lean_object* v_sam_343_){
_start:
{
uint8_t v_t_boxed_344_; lean_object* v_res_345_; 
v_t_boxed_344_ = lean_unbox(v_t_341_);
v_res_345_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_sam_elim(v_motive_340_, v_t_boxed_344_, v_h_342_, v_sam_343_);
lean_dec(v_sam_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim___redArg(lean_object* v_weur_346_){
_start:
{
lean_inc(v_weur_346_);
return v_weur_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim___redArg___boxed(lean_object* v_weur_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim___redArg(v_weur_347_);
lean_dec(v_weur_347_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim(lean_object* v_motive_349_, uint8_t v_t_350_, lean_object* v_h_351_, lean_object* v_weur_352_){
_start:
{
lean_inc(v_weur_352_);
return v_weur_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim___boxed(lean_object* v_motive_353_, lean_object* v_t_354_, lean_object* v_h_355_, lean_object* v_weur_356_){
_start:
{
uint8_t v_t_boxed_357_; lean_object* v_res_358_; 
v_t_boxed_357_ = lean_unbox(v_t_354_);
v_res_358_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_weur_elim(v_motive_353_, v_t_boxed_357_, v_h_355_, v_weur_356_);
lean_dec(v_weur_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim___redArg(lean_object* v_eeur_359_){
_start:
{
lean_inc(v_eeur_359_);
return v_eeur_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim___redArg___boxed(lean_object* v_eeur_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim___redArg(v_eeur_360_);
lean_dec(v_eeur_360_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim(lean_object* v_motive_362_, uint8_t v_t_363_, lean_object* v_h_364_, lean_object* v_eeur_365_){
_start:
{
lean_inc(v_eeur_365_);
return v_eeur_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim___boxed(lean_object* v_motive_366_, lean_object* v_t_367_, lean_object* v_h_368_, lean_object* v_eeur_369_){
_start:
{
uint8_t v_t_boxed_370_; lean_object* v_res_371_; 
v_t_boxed_370_ = lean_unbox(v_t_367_);
v_res_371_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_eeur_elim(v_motive_366_, v_t_boxed_370_, v_h_368_, v_eeur_369_);
lean_dec(v_eeur_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim___redArg(lean_object* v_apac_372_){
_start:
{
lean_inc(v_apac_372_);
return v_apac_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim___redArg___boxed(lean_object* v_apac_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim___redArg(v_apac_373_);
lean_dec(v_apac_373_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim(lean_object* v_motive_375_, uint8_t v_t_376_, lean_object* v_h_377_, lean_object* v_apac_378_){
_start:
{
lean_inc(v_apac_378_);
return v_apac_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim___boxed(lean_object* v_motive_379_, lean_object* v_t_380_, lean_object* v_h_381_, lean_object* v_apac_382_){
_start:
{
uint8_t v_t_boxed_383_; lean_object* v_res_384_; 
v_t_boxed_383_ = lean_unbox(v_t_380_);
v_res_384_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apac_elim(v_motive_379_, v_t_boxed_383_, v_h_381_, v_apac_382_);
lean_dec(v_apac_382_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim___redArg(lean_object* v_apacNe_385_){
_start:
{
lean_inc(v_apacNe_385_);
return v_apacNe_385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim___redArg___boxed(lean_object* v_apacNe_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim___redArg(v_apacNe_386_);
lean_dec(v_apacNe_386_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim(lean_object* v_motive_388_, uint8_t v_t_389_, lean_object* v_h_390_, lean_object* v_apacNe_391_){
_start:
{
lean_inc(v_apacNe_391_);
return v_apacNe_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim___boxed(lean_object* v_motive_392_, lean_object* v_t_393_, lean_object* v_h_394_, lean_object* v_apacNe_395_){
_start:
{
uint8_t v_t_boxed_396_; lean_object* v_res_397_; 
v_t_boxed_396_ = lean_unbox(v_t_393_);
v_res_397_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacNe_elim(v_motive_392_, v_t_boxed_396_, v_h_394_, v_apacNe_395_);
lean_dec(v_apacNe_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim___redArg(lean_object* v_apacSe_398_){
_start:
{
lean_inc(v_apacSe_398_);
return v_apacSe_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim___redArg___boxed(lean_object* v_apacSe_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim___redArg(v_apacSe_399_);
lean_dec(v_apacSe_399_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim(lean_object* v_motive_401_, uint8_t v_t_402_, lean_object* v_h_403_, lean_object* v_apacSe_404_){
_start:
{
lean_inc(v_apacSe_404_);
return v_apacSe_404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim___boxed(lean_object* v_motive_405_, lean_object* v_t_406_, lean_object* v_h_407_, lean_object* v_apacSe_408_){
_start:
{
uint8_t v_t_boxed_409_; lean_object* v_res_410_; 
v_t_boxed_409_ = lean_unbox(v_t_406_);
v_res_410_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_apacSe_elim(v_motive_405_, v_t_boxed_409_, v_h_407_, v_apacSe_408_);
lean_dec(v_apacSe_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim___redArg(lean_object* v_oc_411_){
_start:
{
lean_inc(v_oc_411_);
return v_oc_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim___redArg___boxed(lean_object* v_oc_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim___redArg(v_oc_412_);
lean_dec(v_oc_412_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim(lean_object* v_motive_414_, uint8_t v_t_415_, lean_object* v_h_416_, lean_object* v_oc_417_){
_start:
{
lean_inc(v_oc_417_);
return v_oc_417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim___boxed(lean_object* v_motive_418_, lean_object* v_t_419_, lean_object* v_h_420_, lean_object* v_oc_421_){
_start:
{
uint8_t v_t_boxed_422_; lean_object* v_res_423_; 
v_t_boxed_422_ = lean_unbox(v_t_419_);
v_res_423_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_oc_elim(v_motive_418_, v_t_boxed_422_, v_h_420_, v_oc_421_);
lean_dec(v_oc_421_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim___redArg(lean_object* v_afr_424_){
_start:
{
lean_inc(v_afr_424_);
return v_afr_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim___redArg___boxed(lean_object* v_afr_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim___redArg(v_afr_425_);
lean_dec(v_afr_425_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim(lean_object* v_motive_427_, uint8_t v_t_428_, lean_object* v_h_429_, lean_object* v_afr_430_){
_start:
{
lean_inc(v_afr_430_);
return v_afr_430_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim___boxed(lean_object* v_motive_431_, lean_object* v_t_432_, lean_object* v_h_433_, lean_object* v_afr_434_){
_start:
{
uint8_t v_t_boxed_435_; lean_object* v_res_436_; 
v_t_boxed_435_ = lean_unbox(v_t_432_);
v_res_436_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_afr_elim(v_motive_431_, v_t_boxed_435_, v_h_433_, v_afr_434_);
lean_dec(v_afr_434_);
return v_res_436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim___redArg(lean_object* v_me_437_){
_start:
{
lean_inc(v_me_437_);
return v_me_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim___redArg___boxed(lean_object* v_me_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim___redArg(v_me_438_);
lean_dec(v_me_438_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim(lean_object* v_motive_440_, uint8_t v_t_441_, lean_object* v_h_442_, lean_object* v_me_443_){
_start:
{
lean_inc(v_me_443_);
return v_me_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim___boxed(lean_object* v_motive_444_, lean_object* v_t_445_, lean_object* v_h_446_, lean_object* v_me_447_){
_start:
{
uint8_t v_t_boxed_448_; lean_object* v_res_449_; 
v_t_boxed_448_ = lean_unbox(v_t_445_);
v_res_449_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_me_elim(v_motive_444_, v_t_boxed_448_, v_h_446_, v_me_447_);
lean_dec(v_me_447_);
return v_res_449_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint_beq(uint8_t v_x_450_, uint8_t v_y_451_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_452_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorIdx(v_x_450_);
v___x_453_ = l_Lasm_JS_Cloudflare_DurableObjectLocationHint_ctorIdx(v_y_451_);
v___x_454_ = lean_nat_dec_eq(v___x_452_, v___x_453_);
lean_dec(v___x_453_);
lean_dec(v___x_452_);
return v___x_454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint_beq___boxed(lean_object* v_x_455_, lean_object* v_y_456_){
_start:
{
uint8_t v_x_21__boxed_457_; uint8_t v_y_22__boxed_458_; uint8_t v_res_459_; lean_object* v_r_460_; 
v_x_21__boxed_457_ = lean_unbox(v_x_455_);
v_y_22__boxed_458_ = lean_unbox(v_y_456_);
v_res_459_ = l_Lasm_JS_Cloudflare_instBEqDurableObjectLocationHint_beq(v_x_21__boxed_457_, v_y_22__boxed_458_);
v_r_460_ = lean_box(v_res_459_);
return v_r_460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr(uint8_t v_x_496_, lean_object* v_prec_497_){
_start:
{
lean_object* v___y_499_; lean_object* v___y_506_; lean_object* v___y_513_; lean_object* v___y_520_; lean_object* v___y_527_; lean_object* v___y_534_; lean_object* v___y_541_; lean_object* v___y_548_; lean_object* v___y_555_; lean_object* v___y_562_; lean_object* v___y_569_; 
switch(v_x_496_)
{
case 0:
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_unsigned_to_nat(1024u);
v___x_576_ = lean_nat_dec_le(v___x_575_, v_prec_497_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
v___x_577_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_499_ = v___x_577_;
goto v___jp_498_;
}
else
{
lean_object* v___x_578_; 
v___x_578_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_499_ = v___x_578_;
goto v___jp_498_;
}
}
case 1:
{
lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(1024u);
v___x_580_ = lean_nat_dec_le(v___x_579_, v_prec_497_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; 
v___x_581_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_506_ = v___x_581_;
goto v___jp_505_;
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_506_ = v___x_582_;
goto v___jp_505_;
}
}
case 2:
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(1024u);
v___x_584_ = lean_nat_dec_le(v___x_583_, v_prec_497_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
v___x_585_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_513_ = v___x_585_;
goto v___jp_512_;
}
else
{
lean_object* v___x_586_; 
v___x_586_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_513_ = v___x_586_;
goto v___jp_512_;
}
}
case 3:
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = lean_unsigned_to_nat(1024u);
v___x_588_ = lean_nat_dec_le(v___x_587_, v_prec_497_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; 
v___x_589_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_520_ = v___x_589_;
goto v___jp_519_;
}
else
{
lean_object* v___x_590_; 
v___x_590_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_520_ = v___x_590_;
goto v___jp_519_;
}
}
case 4:
{
lean_object* v___x_591_; uint8_t v___x_592_; 
v___x_591_ = lean_unsigned_to_nat(1024u);
v___x_592_ = lean_nat_dec_le(v___x_591_, v_prec_497_);
if (v___x_592_ == 0)
{
lean_object* v___x_593_; 
v___x_593_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_527_ = v___x_593_;
goto v___jp_526_;
}
else
{
lean_object* v___x_594_; 
v___x_594_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_527_ = v___x_594_;
goto v___jp_526_;
}
}
case 5:
{
lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_595_ = lean_unsigned_to_nat(1024u);
v___x_596_ = lean_nat_dec_le(v___x_595_, v_prec_497_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; 
v___x_597_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_534_ = v___x_597_;
goto v___jp_533_;
}
else
{
lean_object* v___x_598_; 
v___x_598_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_534_ = v___x_598_;
goto v___jp_533_;
}
}
case 6:
{
lean_object* v___x_599_; uint8_t v___x_600_; 
v___x_599_ = lean_unsigned_to_nat(1024u);
v___x_600_ = lean_nat_dec_le(v___x_599_, v_prec_497_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; 
v___x_601_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_541_ = v___x_601_;
goto v___jp_540_;
}
else
{
lean_object* v___x_602_; 
v___x_602_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_541_ = v___x_602_;
goto v___jp_540_;
}
}
case 7:
{
lean_object* v___x_603_; uint8_t v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(1024u);
v___x_604_ = lean_nat_dec_le(v___x_603_, v_prec_497_);
if (v___x_604_ == 0)
{
lean_object* v___x_605_; 
v___x_605_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_548_ = v___x_605_;
goto v___jp_547_;
}
else
{
lean_object* v___x_606_; 
v___x_606_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_548_ = v___x_606_;
goto v___jp_547_;
}
}
case 8:
{
lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_607_ = lean_unsigned_to_nat(1024u);
v___x_608_ = lean_nat_dec_le(v___x_607_, v_prec_497_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; 
v___x_609_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_555_ = v___x_609_;
goto v___jp_554_;
}
else
{
lean_object* v___x_610_; 
v___x_610_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_555_ = v___x_610_;
goto v___jp_554_;
}
}
case 9:
{
lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_611_ = lean_unsigned_to_nat(1024u);
v___x_612_ = lean_nat_dec_le(v___x_611_, v_prec_497_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; 
v___x_613_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_562_ = v___x_613_;
goto v___jp_561_;
}
else
{
lean_object* v___x_614_; 
v___x_614_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_562_ = v___x_614_;
goto v___jp_561_;
}
}
default: 
{
lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_615_ = lean_unsigned_to_nat(1024u);
v___x_616_ = lean_nat_dec_le(v___x_615_, v_prec_497_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; 
v___x_617_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_569_ = v___x_617_;
goto v___jp_568_;
}
else
{
lean_object* v___x_618_; 
v___x_618_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_569_ = v___x_618_;
goto v___jp_568_;
}
}
}
v___jp_498_:
{
lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_500_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__1));
lean_inc(v___y_499_);
v___x_501_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_501_, 0, v___y_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v___x_502_ = 0;
v___x_503_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set_uint8(v___x_503_, sizeof(void*)*1, v___x_502_);
v___x_504_ = l_Repr_addAppParen(v___x_503_, v_prec_497_);
return v___x_504_;
}
v___jp_505_:
{
lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_507_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__3));
lean_inc(v___y_506_);
v___x_508_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_508_, 0, v___y_506_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
v___x_509_ = 0;
v___x_510_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set_uint8(v___x_510_, sizeof(void*)*1, v___x_509_);
v___x_511_ = l_Repr_addAppParen(v___x_510_, v_prec_497_);
return v___x_511_;
}
v___jp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_514_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__5));
lean_inc(v___y_513_);
v___x_515_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_515_, 0, v___y_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = 0;
v___x_517_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set_uint8(v___x_517_, sizeof(void*)*1, v___x_516_);
v___x_518_ = l_Repr_addAppParen(v___x_517_, v_prec_497_);
return v___x_518_;
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_521_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__7));
lean_inc(v___y_520_);
v___x_522_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_522_, 0, v___y_520_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = 0;
v___x_524_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set_uint8(v___x_524_, sizeof(void*)*1, v___x_523_);
v___x_525_ = l_Repr_addAppParen(v___x_524_, v_prec_497_);
return v___x_525_;
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_528_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__9));
lean_inc(v___y_527_);
v___x_529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_529_, 0, v___y_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = 0;
v___x_531_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set_uint8(v___x_531_, sizeof(void*)*1, v___x_530_);
v___x_532_ = l_Repr_addAppParen(v___x_531_, v_prec_497_);
return v___x_532_;
}
v___jp_533_:
{
lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_535_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__11));
lean_inc(v___y_534_);
v___x_536_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_536_, 0, v___y_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = 0;
v___x_538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set_uint8(v___x_538_, sizeof(void*)*1, v___x_537_);
v___x_539_ = l_Repr_addAppParen(v___x_538_, v_prec_497_);
return v___x_539_;
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_542_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__13));
lean_inc(v___y_541_);
v___x_543_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_543_, 0, v___y_541_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v___x_544_ = 0;
v___x_545_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set_uint8(v___x_545_, sizeof(void*)*1, v___x_544_);
v___x_546_ = l_Repr_addAppParen(v___x_545_, v_prec_497_);
return v___x_546_;
}
v___jp_547_:
{
lean_object* v___x_549_; lean_object* v___x_550_; uint8_t v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_549_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__15));
lean_inc(v___y_548_);
v___x_550_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_550_, 0, v___y_548_);
lean_ctor_set(v___x_550_, 1, v___x_549_);
v___x_551_ = 0;
v___x_552_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_552_, 0, v___x_550_);
lean_ctor_set_uint8(v___x_552_, sizeof(void*)*1, v___x_551_);
v___x_553_ = l_Repr_addAppParen(v___x_552_, v_prec_497_);
return v___x_553_;
}
v___jp_554_:
{
lean_object* v___x_556_; lean_object* v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_556_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__17));
lean_inc(v___y_555_);
v___x_557_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_557_, 0, v___y_555_);
lean_ctor_set(v___x_557_, 1, v___x_556_);
v___x_558_ = 0;
v___x_559_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_559_, 0, v___x_557_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*1, v___x_558_);
v___x_560_ = l_Repr_addAppParen(v___x_559_, v_prec_497_);
return v___x_560_;
}
v___jp_561_:
{
lean_object* v___x_563_; lean_object* v___x_564_; uint8_t v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_563_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__19));
lean_inc(v___y_562_);
v___x_564_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_564_, 0, v___y_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = 0;
v___x_566_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_566_, 0, v___x_564_);
lean_ctor_set_uint8(v___x_566_, sizeof(void*)*1, v___x_565_);
v___x_567_ = l_Repr_addAppParen(v___x_566_, v_prec_497_);
return v___x_567_;
}
v___jp_568_:
{
lean_object* v___x_570_; lean_object* v___x_571_; uint8_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_570_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___closed__21));
lean_inc(v___y_569_);
v___x_571_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_571_, 0, v___y_569_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
v___x_572_ = 0;
v___x_573_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_573_, 0, v___x_571_);
lean_ctor_set_uint8(v___x_573_, sizeof(void*)*1, v___x_572_);
v___x_574_ = l_Repr_addAppParen(v___x_573_, v_prec_497_);
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr___boxed(lean_object* v_x_619_, lean_object* v_prec_620_){
_start:
{
uint8_t v_x_599__boxed_621_; lean_object* v_res_622_; 
v_x_599__boxed_621_ = lean_unbox(v_x_619_);
v_res_622_ = l_Lasm_JS_Cloudflare_instReprDurableObjectLocationHint_repr(v_x_599__boxed_621_, v_prec_620_);
lean_dec(v_prec_620_);
return v_res_622_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint_default(void){
_start:
{
uint8_t v___x_625_; 
v___x_625_ = 0;
return v___x_625_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint(void){
_start:
{
uint8_t v___x_626_; 
v___x_626_ = 0;
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0(uint8_t v_x_660_){
_start:
{
switch(v_x_660_)
{
case 0:
{
lean_object* v___x_661_; 
v___x_661_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__1));
return v___x_661_;
}
case 1:
{
lean_object* v___x_662_; 
v___x_662_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__3));
return v___x_662_;
}
case 2:
{
lean_object* v___x_663_; 
v___x_663_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__5));
return v___x_663_;
}
case 3:
{
lean_object* v___x_664_; 
v___x_664_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__7));
return v___x_664_;
}
case 4:
{
lean_object* v___x_665_; 
v___x_665_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__9));
return v___x_665_;
}
case 5:
{
lean_object* v___x_666_; 
v___x_666_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__11));
return v___x_666_;
}
case 6:
{
lean_object* v___x_667_; 
v___x_667_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__13));
return v___x_667_;
}
case 7:
{
lean_object* v___x_668_; 
v___x_668_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__15));
return v___x_668_;
}
case 8:
{
lean_object* v___x_669_; 
v___x_669_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__17));
return v___x_669_;
}
case 9:
{
lean_object* v___x_670_; 
v___x_670_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__19));
return v___x_670_;
}
default: 
{
lean_object* v___x_671_; 
v___x_671_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__21));
return v___x_671_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___boxed(lean_object* v_x_672_){
_start:
{
uint8_t v_x_193__boxed_673_; lean_object* v_res_674_; 
v_x_193__boxed_673_ = lean_unbox(v_x_672_);
v_res_674_ = l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0(v_x_193__boxed_673_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0(lean_object* v_x_712_){
_start:
{
if (lean_obj_tag(v_x_712_) == 4)
{
lean_object* v_s_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v_s_715_ = lean_ctor_get(v_x_712_, 0);
v___x_716_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__0));
v___x_717_ = lean_string_dec_eq(v_s_715_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__2));
v___x_719_ = lean_string_dec_eq(v_s_715_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__4));
v___x_721_ = lean_string_dec_eq(v_s_715_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_722_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__6));
v___x_723_ = lean_string_dec_eq(v_s_715_, v___x_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; uint8_t v___x_725_; 
v___x_724_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__8));
v___x_725_ = lean_string_dec_eq(v_s_715_, v___x_724_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; uint8_t v___x_727_; 
v___x_726_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__10));
v___x_727_ = lean_string_dec_eq(v_s_715_, v___x_726_);
if (v___x_727_ == 0)
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__12));
v___x_729_ = lean_string_dec_eq(v_s_715_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; uint8_t v___x_731_; 
v___x_730_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__14));
v___x_731_ = lean_string_dec_eq(v_s_715_, v___x_730_);
if (v___x_731_ == 0)
{
lean_object* v___x_732_; uint8_t v___x_733_; 
v___x_732_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__16));
v___x_733_ = lean_string_dec_eq(v_s_715_, v___x_732_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_734_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__18));
v___x_735_ = lean_string_dec_eq(v_s_715_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_736_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__20));
v___x_737_ = lean_string_dec_eq(v_s_715_, v___x_736_);
if (v___x_737_ == 0)
{
goto v___jp_713_;
}
else
{
lean_object* v___x_738_; 
v___x_738_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__1));
return v___x_738_;
}
}
else
{
lean_object* v___x_739_; 
v___x_739_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__2));
return v___x_739_;
}
}
else
{
lean_object* v___x_740_; 
v___x_740_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__3));
return v___x_740_;
}
}
else
{
lean_object* v___x_741_; 
v___x_741_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__4));
return v___x_741_;
}
}
else
{
lean_object* v___x_742_; 
v___x_742_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__5));
return v___x_742_;
}
}
else
{
lean_object* v___x_743_; 
v___x_743_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__6));
return v___x_743_;
}
}
else
{
lean_object* v___x_744_; 
v___x_744_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__7));
return v___x_744_;
}
}
else
{
lean_object* v___x_745_; 
v___x_745_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__8));
return v___x_745_;
}
}
else
{
lean_object* v___x_746_; 
v___x_746_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__9));
return v___x_746_;
}
}
else
{
lean_object* v___x_747_; 
v___x_747_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__10));
return v___x_747_;
}
}
else
{
lean_object* v___x_748_; 
v___x_748_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__11));
return v___x_748_;
}
}
else
{
goto v___jp_713_;
}
v___jp_713_:
{
lean_object* v___x_714_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___closed__0));
return v___x_714_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0___boxed(lean_object* v_x_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lasm_JS_Cloudflare_instFromJSDurableObjectLocationHint___lam__0(v_x_749_);
lean_dec(v_x_749_);
return v_res_750_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___redArg(){
_start:
{
uint8_t v___x_759_; 
v___x_759_ = 1;
return v___x_759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___redArg___boxed(lean_object* v___dummy_760_){
_start:
{
uint8_t v_res_761_; lean_object* v_r_762_; 
v_res_761_ = l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___redArg();
v_r_762_ = lean_box(v_res_761_);
return v_r_762_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq(lean_object* v_x_763_, lean_object* v_y_764_){
_start:
{
uint8_t v___x_765_; 
v___x_765_ = 1;
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq___boxed(lean_object* v_x_766_, lean_object* v_y_767_){
_start:
{
uint8_t v_res_768_; lean_object* v_r_769_; 
v_res_768_ = l_Lasm_JS_Cloudflare_instBEqDurableObjectRoutingMode_beq(v_x_766_, v_y_767_);
v_r_769_ = lean_box(v_res_768_);
return v_r_769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg(lean_object* v_prec_775_){
_start:
{
lean_object* v___y_777_; lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = lean_unsigned_to_nat(1024u);
v___x_784_ = lean_nat_dec_le(v___x_783_, v_prec_775_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; 
v___x_785_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__8);
v___y_777_ = v___x_785_;
goto v___jp_776_;
}
else
{
lean_object* v___x_786_; 
v___x_786_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___y_777_ = v___x_786_;
goto v___jp_776_;
}
v___jp_776_:
{
lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
v___x_778_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___closed__1));
lean_inc(v___y_777_);
v___x_779_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_779_, 0, v___y_777_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v___x_780_ = 0;
v___x_781_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_781_, 0, v___x_779_);
lean_ctor_set_uint8(v___x_781_, sizeof(void*)*1, v___x_780_);
v___x_782_ = l_Repr_addAppParen(v___x_781_, v_prec_775_);
return v___x_782_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg___boxed(lean_object* v_prec_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg(v_prec_787_);
lean_dec(v_prec_787_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr(lean_object* v_x_789_, lean_object* v_prec_790_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___redArg(v_prec_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr___boxed(lean_object* v_x_792_, lean_object* v_prec_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lasm_JS_Cloudflare_instReprDurableObjectRoutingMode_repr(v_x_792_, v_prec_793_);
lean_dec(v_prec_793_);
return v_res_794_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode_default(void){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = lean_box(0);
return v___x_797_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode(void){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = lean_box(0);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0(lean_object* v_x_802_){
_start:
{
lean_object* v___x_803_; 
v___x_803_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__1));
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0(lean_object* v_x_810_){
_start:
{
if (lean_obj_tag(v_x_810_) == 4)
{
lean_object* v_s_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v_s_813_ = lean_ctor_get(v_x_810_, 0);
v___x_814_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__0));
v___x_815_ = lean_string_dec_eq(v_s_813_, v___x_814_);
if (v___x_815_ == 0)
{
goto v___jp_811_;
}
else
{
lean_object* v___x_816_; 
v___x_816_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__1));
return v___x_816_;
}
}
else
{
goto v___jp_811_;
}
v___jp_811_:
{
lean_object* v___x_812_; 
v___x_812_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___closed__0));
return v___x_812_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0___boxed(lean_object* v_x_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l_Lasm_JS_Cloudflare_instFromJSDurableObjectRoutingMode___lam__0(v_x_817_);
lean_dec(v_x_817_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0(lean_object* v___f_827_, lean_object* v_d_828_){
_start:
{
lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_829_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
v___x_830_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_827_, v_d_828_);
v___x_831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_831_, 0, v___x_829_);
lean_ctor_set(v___x_831_, 1, v___x_830_);
v___x_832_ = lean_unsigned_to_nat(1u);
v___x_833_ = lean_mk_empty_array_with_capacity(v___x_832_);
v___x_834_ = lean_array_push(v___x_833_, v___x_831_);
v___x_835_ = l_Lasm_JS_Web_Support_fields(v___x_834_);
lean_dec_ref(v___x_834_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0(lean_object* v___f_841_, lean_object* v___f_842_, lean_object* v_d_843_){
_start:
{
lean_object* v_locationHint_844_; lean_object* v_routingMode_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_862_; 
v_locationHint_844_ = lean_ctor_get(v_d_843_, 0);
v_routingMode_845_ = lean_ctor_get(v_d_843_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v_d_843_);
if (v_isSharedCheck_862_ == 0)
{
v___x_847_ = v_d_843_;
v_isShared_848_ = v_isSharedCheck_862_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_routingMode_845_);
lean_inc(v_locationHint_844_);
lean_dec(v_d_843_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_862_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_849_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__0));
v___x_850_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_841_, v_locationHint_844_);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 1, v___x_850_);
lean_ctor_set(v___x_847_, 0, v___x_849_);
v___x_852_ = v___x_847_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v___x_849_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v___x_850_);
v___x_852_ = v_reuseFailAlloc_861_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_853_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__1));
v___x_854_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_842_, v_routingMode_845_);
v___x_855_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_855_, 0, v___x_853_);
lean_ctor_set(v___x_855_, 1, v___x_854_);
v___x_856_ = lean_unsigned_to_nat(2u);
v___x_857_ = lean_mk_empty_array_with_capacity(v___x_856_);
v___x_858_ = lean_array_push(v___x_857_, v___x_852_);
v___x_859_ = lean_array_push(v___x_858_, v___x_855_);
v___x_860_ = l_Lasm_JS_Web_Support_fields(v___x_859_);
lean_dec_ref(v___x_859_);
return v___x_860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorIdx(lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_unsigned_to_nat(0u);
return v___x_868_;
}
else
{
lean_object* v___x_869_; 
v___x_869_ = lean_unsigned_to_nat(1u);
return v___x_869_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorIdx___boxed(lean_object* v_x_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorIdx(v_x_870_);
lean_dec_ref(v_x_870_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___redArg(lean_object* v_t_872_, lean_object* v_k_873_){
_start:
{
lean_object* v_value_874_; lean_object* v___x_875_; 
v_value_874_ = lean_ctor_get(v_t_872_, 0);
lean_inc_ref(v_value_874_);
lean_dec_ref(v_t_872_);
v___x_875_ = lean_apply_1(v_k_873_, v_value_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim(lean_object* v_motive_876_, lean_object* v_ctorIdx_877_, lean_object* v_t_878_, lean_object* v_h_879_, lean_object* v_k_880_){
_start:
{
lean_object* v___x_881_; 
v___x_881_ = l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___redArg(v_t_878_, v_k_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___boxed(lean_object* v_motive_882_, lean_object* v_ctorIdx_883_, lean_object* v_t_884_, lean_object* v_h_885_, lean_object* v_k_886_){
_start:
{
lean_object* v_res_887_; 
v_res_887_ = l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim(v_motive_882_, v_ctorIdx_883_, v_t_884_, v_h_885_, v_k_886_);
lean_dec(v_ctorIdx_883_);
return v_res_887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_socketAddress_elim___redArg(lean_object* v_t_888_, lean_object* v_socketAddress_889_){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___redArg(v_t_888_, v_socketAddress_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_socketAddress_elim(lean_object* v_motive_891_, lean_object* v_t_892_, lean_object* v_h_893_, lean_object* v_socketAddress_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___redArg(v_t_892_, v_socketAddress_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_domString_elim___redArg(lean_object* v_t_896_, lean_object* v_domString_897_){
_start:
{
lean_object* v___x_898_; 
v___x_898_ = l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___redArg(v_t_896_, v_domString_897_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_domString_elim(lean_object* v_motive_899_, lean_object* v_t_900_, lean_object* v_h_901_, lean_object* v_domString_902_){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = l_Lasm_JS_Cloudflare_SocketAddressOrDOMString_ctorElim___redArg(v_t_900_, v_domString_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0(lean_object* v_x_906_){
_start:
{
if (lean_obj_tag(v_x_906_) == 0)
{
lean_object* v_value_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_926_; 
v_value_907_ = lean_ctor_get(v_x_906_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v_x_906_);
if (v_isSharedCheck_926_ == 0)
{
v___x_909_ = v_x_906_;
v_isShared_910_ = v_isSharedCheck_926_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_value_907_);
lean_dec(v_x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_926_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v_hostname_911_; double v_port_912_; lean_object* v___x_913_; lean_object* v___x_915_; 
v_hostname_911_ = lean_ctor_get(v_value_907_, 0);
lean_inc_ref(v_hostname_911_);
v_port_912_ = lean_ctor_get_float(v_value_907_, sizeof(void*)*1);
lean_dec_ref(v_value_907_);
v___x_913_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0));
if (v_isShared_910_ == 0)
{
lean_ctor_set_tag(v___x_909_, 4);
lean_ctor_set(v___x_909_, 0, v_hostname_911_);
v___x_915_ = v___x_909_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_hostname_911_);
v___x_915_ = v_reuseFailAlloc_925_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_913_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1));
v___x_918_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_918_, 0, v_port_912_);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = lean_unsigned_to_nat(2u);
v___x_921_ = lean_mk_empty_array_with_capacity(v___x_920_);
v___x_922_ = lean_array_push(v___x_921_, v___x_916_);
v___x_923_ = lean_array_push(v___x_922_, v___x_919_);
v___x_924_ = l_Lasm_JS_Web_Support_fields(v___x_923_);
lean_dec_ref(v___x_923_);
return v___x_924_;
}
}
}
else
{
lean_object* v_value_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
v_value_927_ = lean_ctor_get(v_x_906_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v_x_906_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v_x_906_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_value_927_);
lean_dec(v_x_906_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set_tag(v___x_929_, 4);
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_value_927_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___lam__0(lean_object* v_value_937_){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_938_, 0, v_value_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___lam__0(lean_object* v_value_941_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_942_, 0, v_value_941_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0(lean_object* v_x_952_){
_start:
{
lean_object* v___x_954_; 
v___x_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_954_, 0, v_x_952_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0___boxed(lean_object* v_x_955_, lean_object* v___y_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0(v_x_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1(lean_object* v_f_958_, lean_object* v___f_959_, lean_object* v_x_960_){
_start:
{
lean_object* v___x_962_; uint8_t v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___x_962_ = lean_unsigned_to_nat(0u);
v___x_963_ = 0;
v___x_964_ = lean_apply_1(v_f_958_, lean_box(0));
v___x_965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_962_, v___x_963_, v___x_964_, v___f_959_);
return v___x_965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1___boxed(lean_object* v_f_966_, lean_object* v___f_967_, lean_object* v_x_968_, lean_object* v___y_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1(v_f_966_, v___f_967_, v_x_968_);
lean_dec_ref(v_x_968_);
return v_res_970_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = lean_unsigned_to_nat(0u);
v___x_979_ = lean_nat_to_int(v___x_978_);
return v___x_979_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7(void){
_start:
{
lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_980_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6);
v___x_981_ = lean_nat_abs(v___x_980_);
return v___x_981_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8(void){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_982_ = lean_cstr_to_nat("9007199254740991");
v___x_983_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7);
v___x_984_ = lean_nat_dec_le(v___x_983_, v___x_982_);
return v___x_984_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9(void){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_985_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6);
v___x_986_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
return v___x_986_;
}
}
static double _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10(void){
_start:
{
lean_object* v___x_987_; double v___x_988_; 
v___x_987_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6);
v___x_988_ = l_Float_ofInt(v___x_987_);
return v___x_988_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11(void){
_start:
{
double v___x_989_; lean_object* v___x_990_; 
v___x_989_ = lean_float_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10);
v___x_990_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_990_, 0, v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn(lean_object* v_f_991_){
_start:
{
lean_object* v___f_993_; lean_object* v___f_994_; lean_object* v___x_995_; 
v___f_993_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0));
v___f_994_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_994_, 0, v_f_991_);
lean_closure_set(v___f_994_, 1, v___f_993_);
v___x_995_ = l_Lasm_JS_Function_ofFn(v___f_994_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; lean_object* v___x_997_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
v___x_997_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc(v_a_998_);
lean_dec_ref_known(v___x_997_, 1);
v___x_999_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1000_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_998_, v___x_999_);
if (lean_obj_tag(v___x_1000_) == 0)
{
lean_object* v_a_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___y_1008_; uint8_t v___x_1035_; 
v_a_1001_ = lean_ctor_get(v___x_1000_, 0);
lean_inc(v_a_1001_);
lean_dec_ref_known(v___x_1000_, 1);
v___x_1002_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1003_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_996_);
v___x_1004_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1004_, 0, v_a_996_);
lean_ctor_set(v___x_1004_, 1, v___x_1003_);
v___x_1005_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1006_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1035_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; 
v___x_1036_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9);
v___y_1008_ = v___x_1036_;
goto v___jp_1007_;
}
else
{
lean_object* v___x_1037_; 
v___x_1037_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11);
v___y_1008_ = v___x_1037_;
goto v___jp_1007_;
}
v___jp_1007_:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
lean_inc(v___y_1008_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1006_);
lean_ctor_set(v___x_1009_, 1, v___y_1008_);
v___x_1010_ = lean_box(0);
v___x_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1011_, 0, v___x_1009_);
lean_ctor_set(v___x_1011_, 1, v___x_1010_);
v___x_1012_ = l_Lasm_JS_obj(v___x_1011_);
v___x_1013_ = lean_unsigned_to_nat(3u);
v___x_1014_ = lean_mk_empty_array_with_capacity(v___x_1013_);
v___x_1015_ = lean_array_push(v___x_1014_, v___x_1004_);
v___x_1016_ = lean_array_push(v___x_1015_, v___x_1005_);
v___x_1017_ = lean_array_push(v___x_1016_, v___x_1012_);
v___x_1018_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1001_, v___x_1002_, v___x_1017_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1025_ == 0)
{
lean_object* v_unused_1026_; 
v_unused_1026_ = lean_ctor_get(v___x_1018_, 0);
lean_dec(v_unused_1026_);
v___x_1020_ = v___x_1018_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_dec(v___x_1018_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 0, v_a_996_);
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_996_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec(v_a_996_);
v_a_1027_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_1018_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_1018_);
v___x_1029_ = lean_box(0);
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
v_resetjp_1028_:
{
lean_object* v___x_1032_; 
if (v_isShared_1030_ == 0)
{
v___x_1032_ = v___x_1029_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_a_1027_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
}
}
}
else
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
lean_dec(v_a_996_);
v_a_1038_ = lean_ctor_get(v___x_1000_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1000_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_1000_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1000_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1043_; 
if (v_isShared_1041_ == 0)
{
v___x_1043_ = v___x_1040_;
goto v_reusejp_1042_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1038_);
v___x_1043_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1042_;
}
v_reusejp_1042_:
{
return v___x_1043_;
}
}
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec(v_a_996_);
v_a_1046_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_997_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_997_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_a_1054_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_995_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_995_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___boxed(lean_object* v_f_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn(v_f_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0(lean_object* v_f_1065_, lean_object* v_x_1066_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_apply_1(v_f_1065_, lean_box(0));
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1069_, lean_object* v_x_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0(v_f_1069_, v_x_1070_);
lean_dec_ref(v_x_1070_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn(lean_object* v_f_1073_){
_start:
{
lean_object* v___f_1075_; lean_object* v___x_1076_; 
v___f_1075_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1075_, 0, v_f_1073_);
v___x_1076_ = l_Lasm_JS_Function_ofSyncFn(v___f_1075_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1078_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1076_, 1);
v___x_1078_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1078_) == 0)
{
lean_object* v_a_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_a_1079_ = lean_ctor_get(v___x_1078_, 0);
lean_inc(v_a_1079_);
lean_dec_ref_known(v___x_1078_, 1);
v___x_1080_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1081_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1079_, v___x_1080_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___y_1089_; uint8_t v___x_1116_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref_known(v___x_1081_, 1);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1084_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1077_);
v___x_1085_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1085_, 0, v_a_1077_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1087_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1116_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8);
if (v___x_1116_ == 0)
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9);
v___y_1089_ = v___x_1117_;
goto v___jp_1088_;
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11);
v___y_1089_ = v___x_1118_;
goto v___jp_1088_;
}
v___jp_1088_:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
lean_inc(v___y_1089_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1087_);
lean_ctor_set(v___x_1090_, 1, v___y_1089_);
v___x_1091_ = lean_box(0);
v___x_1092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1090_);
lean_ctor_set(v___x_1092_, 1, v___x_1091_);
v___x_1093_ = l_Lasm_JS_obj(v___x_1092_);
v___x_1094_ = lean_unsigned_to_nat(3u);
v___x_1095_ = lean_mk_empty_array_with_capacity(v___x_1094_);
v___x_1096_ = lean_array_push(v___x_1095_, v___x_1085_);
v___x_1097_ = lean_array_push(v___x_1096_, v___x_1086_);
v___x_1098_ = lean_array_push(v___x_1097_, v___x_1093_);
v___x_1099_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1082_, v___x_1083_, v___x_1098_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
v_isSharedCheck_1106_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1106_ == 0)
{
lean_object* v_unused_1107_; 
v_unused_1107_ = lean_ctor_get(v___x_1099_, 0);
lean_dec(v_unused_1107_);
v___x_1101_ = v___x_1099_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_dec(v___x_1099_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 0, v_a_1077_);
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_a_1077_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
lean_dec(v_a_1077_);
v_a_1108_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1099_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1099_);
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
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_dec(v_a_1077_);
v_a_1119_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1081_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1081_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
else
{
lean_object* v_a_1127_; lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1134_; 
lean_dec(v_a_1077_);
v_a_1127_ = lean_ctor_get(v___x_1078_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v___x_1078_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1129_ = v___x_1078_;
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
else
{
lean_inc(v_a_1127_);
lean_dec(v___x_1078_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1134_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v___x_1132_; 
if (v_isShared_1130_ == 0)
{
v___x_1132_ = v___x_1129_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_a_1127_);
v___x_1132_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
return v___x_1132_;
}
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
v_a_1135_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1076_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1076_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1140_; 
if (v_isShared_1138_ == 0)
{
v___x_1140_ = v___x_1137_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1141_; 
v_reuseFailAlloc_1141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1141_, 0, v_a_1135_);
v___x_1140_ = v_reuseFailAlloc_1141_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
return v___x_1140_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___boxed(lean_object* v_f_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn(v_f_1143_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0(lean_object* v___f_1147_, lean_object* v_d_1148_){
_start:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v___x_1149_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0));
v___x_1150_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1147_, v_d_1148_);
v___x_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = lean_unsigned_to_nat(1u);
v___x_1153_ = lean_mk_empty_array_with_capacity(v___x_1152_);
v___x_1154_ = lean_array_push(v___x_1153_, v___x_1151_);
v___x_1155_ = l_Lasm_JS_Web_Support_fields(v___x_1154_);
lean_dec_ref(v___x_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0(lean_object* v___f_1162_, lean_object* v_d_1163_){
_start:
{
lean_object* v_allowConcurrency_1164_; lean_object* v_noCache_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1182_; 
v_allowConcurrency_1164_ = lean_ctor_get(v_d_1163_, 0);
v_noCache_1165_ = lean_ctor_get(v_d_1163_, 1);
v_isSharedCheck_1182_ = !lean_is_exclusive(v_d_1163_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1167_ = v_d_1163_;
v_isShared_1168_ = v_isSharedCheck_1182_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_noCache_1165_);
lean_inc(v_allowConcurrency_1164_);
lean_dec(v_d_1163_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1182_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1172_; 
v___x_1169_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref(v___f_1162_);
v___x_1170_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1162_, v_allowConcurrency_1164_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 1, v___x_1170_);
lean_ctor_set(v___x_1167_, 0, v___x_1169_);
v___x_1172_ = v___x_1167_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v___x_1169_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v___x_1170_);
v___x_1172_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1173_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1174_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1162_, v_noCache_1165_);
v___x_1175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1175_, 0, v___x_1173_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = lean_unsigned_to_nat(2u);
v___x_1177_ = lean_mk_empty_array_with_capacity(v___x_1176_);
v___x_1178_ = lean_array_push(v___x_1177_, v___x_1172_);
v___x_1179_ = lean_array_push(v___x_1178_, v___x_1175_);
v___x_1180_ = l_Lasm_JS_Web_Support_fields(v___x_1179_);
lean_dec_ref(v___x_1179_);
return v___x_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0(lean_object* v___f_1192_, lean_object* v___f_1193_, lean_object* v___f_1194_, lean_object* v_d_1195_){
_start:
{
lean_object* v_start_1196_; lean_object* v_startAfter_1197_; lean_object* v_end_1198_; lean_object* v_prefix_1199_; lean_object* v_reverse_1200_; lean_object* v_limit_1201_; lean_object* v_allowConcurrency_1202_; lean_object* v_noCache_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; 
v_start_1196_ = lean_ctor_get(v_d_1195_, 0);
lean_inc(v_start_1196_);
v_startAfter_1197_ = lean_ctor_get(v_d_1195_, 1);
lean_inc(v_startAfter_1197_);
v_end_1198_ = lean_ctor_get(v_d_1195_, 2);
lean_inc(v_end_1198_);
v_prefix_1199_ = lean_ctor_get(v_d_1195_, 3);
lean_inc(v_prefix_1199_);
v_reverse_1200_ = lean_ctor_get(v_d_1195_, 4);
lean_inc(v_reverse_1200_);
v_limit_1201_ = lean_ctor_get(v_d_1195_, 5);
lean_inc(v_limit_1201_);
v_allowConcurrency_1202_ = lean_ctor_get(v_d_1195_, 6);
lean_inc(v_allowConcurrency_1202_);
v_noCache_1203_ = lean_ctor_get(v_d_1195_, 7);
lean_inc(v_noCache_1203_);
lean_dec_ref(v_d_1195_);
v___x_1204_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1192_, 3);
v___x_1205_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1192_, v_start_1196_);
v___x_1206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1204_);
lean_ctor_set(v___x_1206_, 1, v___x_1205_);
v___x_1207_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1));
v___x_1208_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1192_, v_startAfter_1197_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1207_);
lean_ctor_set(v___x_1209_, 1, v___x_1208_);
v___x_1210_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2));
v___x_1211_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1192_, v_end_1198_);
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v___x_1210_);
lean_ctor_set(v___x_1212_, 1, v___x_1211_);
v___x_1213_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3));
v___x_1214_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1192_, v_prefix_1199_);
v___x_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1213_);
lean_ctor_set(v___x_1215_, 1, v___x_1214_);
v___x_1216_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4));
lean_inc_ref_n(v___f_1193_, 2);
v___x_1217_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1193_, v_reverse_1200_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1216_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5));
v___x_1220_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1194_, v_limit_1201_);
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1219_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_1223_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1193_, v_allowConcurrency_1202_);
v___x_1224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1222_);
lean_ctor_set(v___x_1224_, 1, v___x_1223_);
v___x_1225_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1226_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1193_, v_noCache_1203_);
v___x_1227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = lean_unsigned_to_nat(8u);
v___x_1229_ = lean_mk_empty_array_with_capacity(v___x_1228_);
v___x_1230_ = lean_array_push(v___x_1229_, v___x_1206_);
v___x_1231_ = lean_array_push(v___x_1230_, v___x_1209_);
v___x_1232_ = lean_array_push(v___x_1231_, v___x_1212_);
v___x_1233_ = lean_array_push(v___x_1232_, v___x_1215_);
v___x_1234_ = lean_array_push(v___x_1233_, v___x_1218_);
v___x_1235_ = lean_array_push(v___x_1234_, v___x_1221_);
v___x_1236_ = lean_array_push(v___x_1235_, v___x_1224_);
v___x_1237_ = lean_array_push(v___x_1236_, v___x_1227_);
v___x_1238_ = l_Lasm_JS_Web_Support_fields(v___x_1237_);
lean_dec_ref(v___x_1237_);
return v___x_1238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0(lean_object* v___f_1247_, lean_object* v_d_1248_){
_start:
{
lean_object* v_allowConcurrency_1249_; lean_object* v_allowUnconfirmed_1250_; lean_object* v_noCache_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v_allowConcurrency_1249_ = lean_ctor_get(v_d_1248_, 0);
lean_inc(v_allowConcurrency_1249_);
v_allowUnconfirmed_1250_ = lean_ctor_get(v_d_1248_, 1);
lean_inc(v_allowUnconfirmed_1250_);
v_noCache_1251_ = lean_ctor_get(v_d_1248_, 2);
lean_inc(v_noCache_1251_);
lean_dec_ref(v_d_1248_);
v___x_1252_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1247_, 2);
v___x_1253_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1247_, v_allowConcurrency_1249_);
v___x_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1252_);
lean_ctor_set(v___x_1254_, 1, v___x_1253_);
v___x_1255_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_1256_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1247_, v_allowUnconfirmed_1250_);
v___x_1257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1255_);
lean_ctor_set(v___x_1257_, 1, v___x_1256_);
v___x_1258_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1259_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1247_, v_noCache_1251_);
v___x_1260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1258_);
lean_ctor_set(v___x_1260_, 1, v___x_1259_);
v___x_1261_ = lean_unsigned_to_nat(3u);
v___x_1262_ = lean_mk_empty_array_with_capacity(v___x_1261_);
v___x_1263_ = lean_array_push(v___x_1262_, v___x_1254_);
v___x_1264_ = lean_array_push(v___x_1263_, v___x_1257_);
v___x_1265_ = lean_array_push(v___x_1264_, v___x_1260_);
v___x_1266_ = l_Lasm_JS_Web_Support_fields(v___x_1265_);
lean_dec_ref(v___x_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1(lean_object* v_f_1277_, lean_object* v___f_1278_, lean_object* v_x_1279_){
_start:
{
if (lean_obj_tag(v_x_1279_) == 0)
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1289_; 
lean_dec_ref(v___f_1278_);
lean_dec_ref(v_f_1277_);
v_a_1281_ = lean_ctor_get(v_x_1279_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v_x_1279_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1283_ = v_x_1279_;
v_isShared_1284_ = v_isSharedCheck_1289_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v_x_1279_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1289_;
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
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
return v___x_1287_;
}
}
}
else
{
lean_object* v_a_1290_; lean_object* v___x_1291_; uint8_t v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v_a_1290_ = lean_ctor_get(v_x_1279_, 0);
lean_inc(v_a_1290_);
lean_dec_ref_known(v_x_1279_, 1);
v___x_1291_ = lean_unsigned_to_nat(0u);
v___x_1292_ = 0;
v___x_1293_ = lean_apply_2(v_f_1277_, v_a_1290_, lean_box(0));
v___x_1294_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1291_, v___x_1292_, v___x_1293_, v___f_1278_);
return v___x_1294_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1___boxed(lean_object* v_f_1295_, lean_object* v___f_1296_, lean_object* v_x_1297_, lean_object* v___y_1298_){
_start:
{
lean_object* v_res_1299_; 
v_res_1299_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1(v_f_1295_, v___f_1296_, v_x_1297_);
return v_res_1299_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1304_ = lean_string_utf8_byte_size(v___x_1303_);
return v___x_1304_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; uint8_t v___x_1307_; 
v___x_1305_ = lean_unsigned_to_nat(0u);
v___x_1306_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3);
v___x_1307_ = lean_nat_dec_eq(v___x_1306_, v___x_1305_);
return v___x_1307_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
v___x_1312_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__8));
v___x_1313_ = lean_unsigned_to_nat(46u);
v___x_1314_ = lean_unsigned_to_nat(193u);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__7));
v___x_1316_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__6));
v___x_1317_ = l_mkPanicMessageWithDecl(v___x_1316_, v___x_1315_, v___x_1314_, v___x_1313_, v___x_1312_);
return v___x_1317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(lean_object* v_context_1319_, lean_object* v_d_1320_){
_start:
{
lean_object* v___y_1323_; lean_object* v___y_1324_; 
if (lean_obj_tag(v_d_1320_) == 9)
{
lean_object* v_value_1328_; lean_object* v___x_1329_; 
v_value_1328_ = lean_ctor_get(v_d_1320_, 0);
lean_inc(v_value_1328_);
lean_dec_ref_known(v_d_1320_, 2);
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v_value_1328_);
return v___x_1329_;
}
else
{
lean_object* v___x_1330_; lean_object* v_received_1332_; 
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
if (lean_obj_tag(v_d_1320_) == 9)
{
lean_object* v_value_1346_; lean_object* v_description_1347_; uint8_t v___x_1348_; 
v_value_1346_ = lean_ctor_get(v_d_1320_, 0);
v_description_1347_ = lean_ctor_get(v_d_1320_, 1);
v___x_1348_ = lean_string_dec_eq(v_description_1347_, v___x_1330_);
if (v___x_1348_ == 0)
{
goto v___jp_1344_;
}
else
{
uint32_t v___x_1349_; uint64_t v___x_1350_; lean_object* v___x_1351_; uint32_t v___x_1352_; lean_object* v___x_1353_; 
lean_inc_n(v_value_1346_, 2);
lean_dec_ref_known(v_d_1320_, 2);
v___x_1349_ = 206;
v___x_1350_ = 0ULL;
v___x_1351_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1351_, 0, v_value_1346_);
lean_ctor_set(v___x_1351_, 1, v___x_1330_);
v___x_1352_ = lasm_js_value_handle(v_value_1346_);
lean_dec(v_value_1346_);
v___x_1353_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1349_, v___x_1350_, v___x_1351_, v___x_1352_);
lean_dec_ref_known(v___x_1351_, 2);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; uint8_t v___x_1355_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v___x_1355_ = lean_string_validate_utf8(v_a_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
lean_dec(v_a_1354_);
v___x_1356_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9);
v___x_1357_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1356_);
v_received_1332_ = v___x_1357_;
goto v___jp_1331_;
}
else
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_string_from_utf8_unchecked(v_a_1354_);
v_received_1332_ = v___x_1358_;
goto v___jp_1331_;
}
}
else
{
lean_object* v___x_1359_; 
lean_dec_ref_known(v___x_1353_, 1);
v___x_1359_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10));
v_received_1332_ = v___x_1359_;
goto v___jp_1331_;
}
}
}
else
{
goto v___jp_1344_;
}
v___jp_1331_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v___x_1333_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_1334_ = lean_string_append(v___x_1333_, v_context_1319_);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1));
v___x_1336_ = lean_string_append(v___x_1334_, v___x_1335_);
v___x_1337_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__0));
v___x_1338_ = lean_string_append(v___x_1336_, v___x_1337_);
v___x_1339_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2));
v___x_1340_ = lean_string_append(v___x_1338_, v___x_1339_);
v___x_1341_ = lean_string_append(v___x_1340_, v_received_1332_);
lean_dec_ref(v_received_1332_);
v___x_1342_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4);
if (v___x_1342_ == 0)
{
lean_object* v___x_1343_; 
v___x_1343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__5));
v___y_1323_ = v___x_1341_;
v___y_1324_ = v___x_1343_;
goto v___jp_1322_;
}
else
{
v___y_1323_ = v___x_1341_;
v___y_1324_ = v___x_1330_;
goto v___jp_1322_;
}
}
v___jp_1344_:
{
lean_object* v___x_1345_; 
v___x_1345_ = l_Lasm_JS_Data_describe(v_d_1320_);
v_received_1332_ = v___x_1345_;
goto v___jp_1331_;
}
}
v___jp_1322_:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1325_ = lean_string_append(v___y_1323_, v___y_1324_);
v___x_1326_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
v___x_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1327_, 0, v___x_1326_);
return v___x_1327_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1360_, lean_object* v_d_1361_, lean_object* v_a_1362_){
_start:
{
lean_object* v_res_1363_; 
v_res_1363_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v_context_1360_, v_d_1361_);
lean_dec_ref(v_context_1360_);
return v_res_1363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(lean_object* v_args_1365_, lean_object* v_i_1366_){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; uint8_t v___x_1374_; 
v___x_1368_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___closed__0));
v___x_1369_ = lean_unsigned_to_nat(1u);
v___x_1370_ = lean_nat_add(v_i_1366_, v___x_1369_);
v___x_1371_ = l_Nat_reprFast(v___x_1370_);
v___x_1372_ = lean_string_append(v___x_1368_, v___x_1371_);
lean_dec_ref(v___x_1371_);
v___x_1373_ = lean_array_get_size(v_args_1365_);
v___x_1374_ = lean_nat_dec_lt(v_i_1366_, v___x_1373_);
if (v___x_1374_ == 0)
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_box(0);
v___x_1376_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v___x_1372_, v___x_1375_);
lean_dec_ref(v___x_1372_);
return v___x_1376_;
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
v___x_1377_ = lean_array_fget_borrowed(v_args_1365_, v_i_1366_);
lean_inc(v___x_1377_);
v___x_1378_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v___x_1372_, v___x_1377_);
lean_dec_ref(v___x_1372_);
return v___x_1378_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___boxed(lean_object* v_args_1379_, lean_object* v_i_1380_, lean_object* v_a_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1379_, v_i_1380_);
lean_dec(v_i_1380_);
lean_dec_ref(v_args_1379_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0(lean_object* v___f_1383_, lean_object* v_args_1384_){
_start:
{
lean_object* v___x_1386_; uint8_t v___x_1387_; lean_object* v_val_1389_; lean_object* v___x_1392_; 
v___x_1386_ = lean_unsigned_to_nat(0u);
v___x_1387_ = 0;
v___x_1392_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1384_, v___x_1386_);
if (lean_obj_tag(v___x_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
v_a_1393_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1392_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
lean_ctor_set_tag(v___x_1395_, 1);
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
v_val_1389_ = v___x_1398_;
goto v___jp_1388_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1392_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1392_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1392_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1392_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
lean_ctor_set_tag(v___x_1403_, 0);
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
v_val_1389_ = v___x_1406_;
goto v___jp_1388_;
}
}
}
v___jp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1390_, 0, v_val_1389_);
v___x_1391_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1386_, v___x_1387_, v___x_1390_, v___f_1383_);
return v___x_1391_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0___boxed(lean_object* v___f_1409_, lean_object* v_args_1410_, lean_object* v___y_1411_){
_start:
{
lean_object* v_res_1412_; 
v_res_1412_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0(v___f_1409_, v_args_1410_);
lean_dec_ref(v_args_1410_);
return v_res_1412_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0(void){
_start:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1414_ = lean_nat_abs(v___x_1413_);
return v___x_1414_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1(void){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; uint8_t v___x_1417_; 
v___x_1415_ = lean_cstr_to_nat("9007199254740991");
v___x_1416_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0);
v___x_1417_ = lean_nat_dec_le(v___x_1416_, v___x_1415_);
return v___x_1417_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2(void){
_start:
{
lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1418_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1419_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1418_);
return v___x_1419_;
}
}
static double _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3(void){
_start:
{
lean_object* v___x_1420_; double v___x_1421_; 
v___x_1420_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1421_ = l_Float_ofInt(v___x_1420_);
return v___x_1421_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4(void){
_start:
{
double v___x_1422_; lean_object* v___x_1423_; 
v___x_1422_ = lean_float_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3);
v___x_1423_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1423_, 0, v___x_1422_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn(lean_object* v_f_1424_){
_start:
{
lean_object* v___f_1426_; lean_object* v___f_1427_; lean_object* v___f_1428_; lean_object* v___x_1429_; 
v___f_1426_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0));
v___f_1427_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1427_, 0, v_f_1424_);
lean_closure_set(v___f_1427_, 1, v___f_1426_);
v___f_1428_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1428_, 0, v___f_1427_);
v___x_1429_ = l_Lasm_JS_Function_ofFn(v___f_1428_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v___x_1431_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
lean_inc(v_a_1430_);
lean_dec_ref_known(v___x_1429_, 1);
v___x_1431_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref_known(v___x_1431_, 1);
v___x_1433_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1434_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1432_, v___x_1433_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___y_1442_; uint8_t v___x_1469_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v___x_1434_, 1);
v___x_1436_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1437_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1430_);
v___x_1438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1438_, 0, v_a_1430_);
lean_ctor_set(v___x_1438_, 1, v___x_1437_);
v___x_1439_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1440_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1469_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1);
if (v___x_1469_ == 0)
{
lean_object* v___x_1470_; 
v___x_1470_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2);
v___y_1442_ = v___x_1470_;
goto v___jp_1441_;
}
else
{
lean_object* v___x_1471_; 
v___x_1471_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4);
v___y_1442_ = v___x_1471_;
goto v___jp_1441_;
}
v___jp_1441_:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_inc(v___y_1442_);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1440_);
lean_ctor_set(v___x_1443_, 1, v___y_1442_);
v___x_1444_ = lean_box(0);
v___x_1445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1443_);
lean_ctor_set(v___x_1445_, 1, v___x_1444_);
v___x_1446_ = l_Lasm_JS_obj(v___x_1445_);
v___x_1447_ = lean_unsigned_to_nat(3u);
v___x_1448_ = lean_mk_empty_array_with_capacity(v___x_1447_);
v___x_1449_ = lean_array_push(v___x_1448_, v___x_1438_);
v___x_1450_ = lean_array_push(v___x_1449_, v___x_1439_);
v___x_1451_ = lean_array_push(v___x_1450_, v___x_1446_);
v___x_1452_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1435_, v___x_1436_, v___x_1451_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1459_ == 0)
{
lean_object* v_unused_1460_; 
v_unused_1460_ = lean_ctor_get(v___x_1452_, 0);
lean_dec(v_unused_1460_);
v___x_1454_ = v___x_1452_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_dec(v___x_1452_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
lean_ctor_set(v___x_1454_, 0, v_a_1430_);
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1430_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_dec(v_a_1430_);
v_a_1461_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1452_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1452_);
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
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec(v_a_1430_);
v_a_1472_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1434_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1434_);
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
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1480_; lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1487_; 
lean_dec(v_a_1430_);
v_a_1480_ = lean_ctor_get(v___x_1431_, 0);
v_isSharedCheck_1487_ = !lean_is_exclusive(v___x_1431_);
if (v_isSharedCheck_1487_ == 0)
{
v___x_1482_ = v___x_1431_;
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
else
{
lean_inc(v_a_1480_);
lean_dec(v___x_1431_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1487_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1485_; 
if (v_isShared_1483_ == 0)
{
v___x_1485_ = v___x_1482_;
goto v_reusejp_1484_;
}
else
{
lean_object* v_reuseFailAlloc_1486_; 
v_reuseFailAlloc_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1486_, 0, v_a_1480_);
v___x_1485_ = v_reuseFailAlloc_1486_;
goto v_reusejp_1484_;
}
v_reusejp_1484_:
{
return v___x_1485_;
}
}
}
}
else
{
lean_object* v_a_1488_; lean_object* v___x_1490_; uint8_t v_isShared_1491_; uint8_t v_isSharedCheck_1495_; 
v_a_1488_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1495_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1495_ == 0)
{
v___x_1490_ = v___x_1429_;
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
else
{
lean_inc(v_a_1488_);
lean_dec(v___x_1429_);
v___x_1490_ = lean_box(0);
v_isShared_1491_ = v_isSharedCheck_1495_;
goto v_resetjp_1489_;
}
v_resetjp_1489_:
{
lean_object* v___x_1493_; 
if (v_isShared_1491_ == 0)
{
v___x_1493_ = v___x_1490_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1494_; 
v_reuseFailAlloc_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1494_, 0, v_a_1488_);
v___x_1493_ = v_reuseFailAlloc_1494_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
return v___x_1493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___boxed(lean_object* v_f_1496_, lean_object* v_a_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn(v_f_1496_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0(lean_object* v_f_1499_, lean_object* v_args_1500_){
_start:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1502_ = lean_unsigned_to_nat(0u);
v___x_1503_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1500_, v___x_1502_);
if (lean_obj_tag(v___x_1503_) == 0)
{
lean_object* v_a_1504_; lean_object* v___x_1505_; 
v_a_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_a_1504_);
lean_dec_ref_known(v___x_1503_, 1);
v___x_1505_ = lean_apply_2(v_f_1499_, v_a_1504_, lean_box(0));
return v___x_1505_;
}
else
{
lean_object* v_a_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1513_; 
lean_dec_ref(v_f_1499_);
v_a_1506_ = lean_ctor_get(v___x_1503_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1508_ = v___x_1503_;
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_a_1506_);
lean_dec(v___x_1503_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1513_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1511_; 
if (v_isShared_1509_ == 0)
{
v___x_1511_ = v___x_1508_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_a_1506_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0___boxed(lean_object* v_f_1514_, lean_object* v_args_1515_, lean_object* v___y_1516_){
_start:
{
lean_object* v_res_1517_; 
v_res_1517_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0(v_f_1514_, v_args_1515_);
lean_dec_ref(v_args_1515_);
return v_res_1517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn(lean_object* v_f_1518_){
_start:
{
lean_object* v___f_1520_; lean_object* v___x_1521_; 
v___f_1520_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1520_, 0, v_f_1518_);
v___x_1521_ = l_Lasm_JS_Function_ofSyncFn(v___f_1520_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1523_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref_known(v___x_1521_, 1);
v___x_1523_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref_known(v___x_1523_, 1);
v___x_1525_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1526_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1524_, v___x_1525_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___y_1534_; uint8_t v___x_1561_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1529_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1522_);
v___x_1530_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1530_, 0, v_a_1522_);
lean_ctor_set(v___x_1530_, 1, v___x_1529_);
v___x_1531_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1532_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1561_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; 
v___x_1562_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2);
v___y_1534_ = v___x_1562_;
goto v___jp_1533_;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4);
v___y_1534_ = v___x_1563_;
goto v___jp_1533_;
}
v___jp_1533_:
{
lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
lean_inc(v___y_1534_);
v___x_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1532_);
lean_ctor_set(v___x_1535_, 1, v___y_1534_);
v___x_1536_ = lean_box(0);
v___x_1537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1537_, 0, v___x_1535_);
lean_ctor_set(v___x_1537_, 1, v___x_1536_);
v___x_1538_ = l_Lasm_JS_obj(v___x_1537_);
v___x_1539_ = lean_unsigned_to_nat(3u);
v___x_1540_ = lean_mk_empty_array_with_capacity(v___x_1539_);
v___x_1541_ = lean_array_push(v___x_1540_, v___x_1530_);
v___x_1542_ = lean_array_push(v___x_1541_, v___x_1531_);
v___x_1543_ = lean_array_push(v___x_1542_, v___x_1538_);
v___x_1544_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1527_, v___x_1528_, v___x_1543_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1551_; 
v_isSharedCheck_1551_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1551_ == 0)
{
lean_object* v_unused_1552_; 
v_unused_1552_ = lean_ctor_get(v___x_1544_, 0);
lean_dec(v_unused_1552_);
v___x_1546_ = v___x_1544_;
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
else
{
lean_dec(v___x_1544_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1551_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v___x_1549_; 
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 0, v_a_1522_);
v___x_1549_ = v___x_1546_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_a_1522_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
return v___x_1549_;
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec(v_a_1522_);
v_a_1553_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1544_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1544_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
else
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
lean_dec(v_a_1522_);
v_a_1564_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v___x_1526_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___x_1526_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
lean_dec(v_a_1522_);
v_a_1572_ = lean_ctor_get(v___x_1523_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1523_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1523_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
v_a_1580_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1521_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1521_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___boxed(lean_object* v_f_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn(v_f_1588_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___lam__0(lean_object* v___f_1591_, lean_object* v_d_1592_){
_start:
{
lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; 
v___x_1593_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_1594_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1591_, v_d_1592_);
v___x_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1593_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = lean_unsigned_to_nat(1u);
v___x_1597_ = lean_mk_empty_array_with_capacity(v___x_1596_);
v___x_1598_ = lean_array_push(v___x_1597_, v___x_1595_);
v___x_1599_ = l_Lasm_JS_Web_Support_fields(v___x_1598_);
lean_dec_ref(v___x_1598_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___lam__0(lean_object* v___f_1603_, lean_object* v_d_1604_){
_start:
{
lean_object* v_allowConcurrency_1605_; lean_object* v_allowUnconfirmed_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1623_; 
v_allowConcurrency_1605_ = lean_ctor_get(v_d_1604_, 0);
v_allowUnconfirmed_1606_ = lean_ctor_get(v_d_1604_, 1);
v_isSharedCheck_1623_ = !lean_is_exclusive(v_d_1604_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1608_ = v_d_1604_;
v_isShared_1609_ = v_isSharedCheck_1623_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_allowUnconfirmed_1606_);
lean_inc(v_allowConcurrency_1605_);
lean_dec(v_d_1604_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1623_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1613_; 
v___x_1610_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref(v___f_1603_);
v___x_1611_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1603_, v_allowConcurrency_1605_);
if (v_isShared_1609_ == 0)
{
lean_ctor_set(v___x_1608_, 1, v___x_1611_);
lean_ctor_set(v___x_1608_, 0, v___x_1610_);
v___x_1613_ = v___x_1608_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1610_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v___x_1611_);
v___x_1613_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1614_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_1615_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1603_, v_allowUnconfirmed_1606_);
v___x_1616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1616_, 0, v___x_1614_);
lean_ctor_set(v___x_1616_, 1, v___x_1615_);
v___x_1617_ = lean_unsigned_to_nat(2u);
v___x_1618_ = lean_mk_empty_array_with_capacity(v___x_1617_);
v___x_1619_ = lean_array_push(v___x_1618_, v___x_1613_);
v___x_1620_ = lean_array_push(v___x_1619_, v___x_1616_);
v___x_1621_ = l_Lasm_JS_Web_Support_fields(v___x_1620_);
lean_dec_ref(v___x_1620_);
return v___x_1621_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(lean_object* v_x_1627_){
_start:
{
if (lean_obj_tag(v_x_1627_) == 0)
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_box(0);
return v___x_1628_;
}
else
{
lean_object* v_val_1629_; uint8_t v___x_1630_; 
v_val_1629_ = lean_ctor_get(v_x_1627_, 0);
v___x_1630_ = lean_unbox(v_val_1629_);
switch(v___x_1630_)
{
case 0:
{
lean_object* v___x_1631_; 
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1));
return v___x_1631_;
}
case 1:
{
lean_object* v___x_1632_; 
v___x_1632_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3));
return v___x_1632_;
}
case 2:
{
lean_object* v___x_1633_; 
v___x_1633_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5));
return v___x_1633_;
}
default: 
{
lean_object* v___x_1634_; 
v___x_1634_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7));
return v___x_1634_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0___boxed(lean_object* v_x_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(v_x_1635_);
lean_dec(v_x_1635_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(lean_object* v_x_1637_){
_start:
{
if (lean_obj_tag(v_x_1637_) == 0)
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_box(0);
return v___x_1638_;
}
else
{
lean_object* v_val_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; 
v_val_1639_ = lean_ctor_get(v_x_1637_, 0);
v___x_1640_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
v___x_1641_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(v_val_1639_);
v___x_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1642_, 0, v___x_1640_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
v___x_1643_ = lean_unsigned_to_nat(1u);
v___x_1644_ = lean_mk_empty_array_with_capacity(v___x_1643_);
v___x_1645_ = lean_array_push(v___x_1644_, v___x_1642_);
v___x_1646_ = l_Lasm_JS_Web_Support_fields(v___x_1645_);
lean_dec_ref(v___x_1645_);
return v___x_1646_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0___boxed(lean_object* v_x_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(v_x_1647_);
lean_dec(v_x_1647_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId(lean_object* v_self_1650_, lean_object* v_options_1651_){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1653_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___closed__0));
v___x_1654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(v_options_1651_);
v___x_1655_ = lean_unsigned_to_nat(1u);
v___x_1656_ = lean_mk_empty_array_with_capacity(v___x_1655_);
v___x_1657_ = lean_array_push(v___x_1656_, v___x_1654_);
v___x_1658_ = l_Lasm_JS_Web_Support_args(v___x_1657_);
v___x_1659_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1650_, v___x_1653_, v___x_1658_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
v_a_1668_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1659_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1659_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___boxed(lean_object* v_self_1676_, lean_object* v_options_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId(v_self_1676_, v_options_1677_);
lean_dec(v_options_1677_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName(lean_object* v_self_1681_, lean_object* v_name_1682_){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1684_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___closed__0));
v___x_1685_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1685_, 0, v_name_1682_);
v___x_1686_ = lean_unsigned_to_nat(1u);
v___x_1687_ = lean_mk_empty_array_with_capacity(v___x_1686_);
v___x_1688_ = lean_array_push(v___x_1687_, v___x_1685_);
v___x_1689_ = l_Lasm_JS_Web_Support_args(v___x_1688_);
v___x_1690_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1681_, v___x_1684_, v___x_1689_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1698_; 
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1693_ = v___x_1690_;
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_a_1691_);
lean_dec(v___x_1690_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
if (v_isShared_1694_ == 0)
{
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1691_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
v_a_1699_ = lean_ctor_get(v___x_1690_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1690_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1690_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___boxed(lean_object* v_self_1707_, lean_object* v_name_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName(v_self_1707_, v_name_1708_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString(lean_object* v_self_1712_, lean_object* v_id_1713_){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; 
v___x_1715_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___closed__0));
v___x_1716_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1716_, 0, v_id_1713_);
v___x_1717_ = lean_unsigned_to_nat(1u);
v___x_1718_ = lean_mk_empty_array_with_capacity(v___x_1717_);
v___x_1719_ = lean_array_push(v___x_1718_, v___x_1716_);
v___x_1720_ = l_Lasm_JS_Web_Support_args(v___x_1719_);
v___x_1721_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1712_, v___x_1715_, v___x_1720_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v_a_1722_; lean_object* v___x_1724_; uint8_t v_isShared_1725_; uint8_t v_isSharedCheck_1729_; 
v_a_1722_ = lean_ctor_get(v___x_1721_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1724_ = v___x_1721_;
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
else
{
lean_inc(v_a_1722_);
lean_dec(v___x_1721_);
v___x_1724_ = lean_box(0);
v_isShared_1725_ = v_isSharedCheck_1729_;
goto v_resetjp_1723_;
}
v_resetjp_1723_:
{
lean_object* v___x_1727_; 
if (v_isShared_1725_ == 0)
{
v___x_1727_ = v___x_1724_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v_a_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
v_a_1730_ = lean_ctor_get(v___x_1721_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1721_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1732_ = v___x_1721_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v___x_1721_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___boxed(lean_object* v_self_1738_, lean_object* v_id_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString(v_self_1738_, v_id_1739_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(lean_object* v_x_1742_){
_start:
{
if (lean_obj_tag(v_x_1742_) == 0)
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_box(0);
return v___x_1743_;
}
else
{
lean_object* v___x_1744_; 
v___x_1744_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__1));
return v___x_1744_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1___boxed(lean_object* v_x_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(v_x_1745_);
lean_dec(v_x_1745_);
return v_res_1746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(lean_object* v_x_1747_){
_start:
{
if (lean_obj_tag(v_x_1747_) == 0)
{
lean_object* v___x_1748_; 
v___x_1748_ = lean_box(0);
return v___x_1748_;
}
else
{
lean_object* v_val_1749_; uint8_t v___x_1750_; 
v_val_1749_ = lean_ctor_get(v_x_1747_, 0);
v___x_1750_ = lean_unbox(v_val_1749_);
switch(v___x_1750_)
{
case 0:
{
lean_object* v___x_1751_; 
v___x_1751_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__1));
return v___x_1751_;
}
case 1:
{
lean_object* v___x_1752_; 
v___x_1752_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__3));
return v___x_1752_;
}
case 2:
{
lean_object* v___x_1753_; 
v___x_1753_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__5));
return v___x_1753_;
}
case 3:
{
lean_object* v___x_1754_; 
v___x_1754_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__7));
return v___x_1754_;
}
case 4:
{
lean_object* v___x_1755_; 
v___x_1755_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__9));
return v___x_1755_;
}
case 5:
{
lean_object* v___x_1756_; 
v___x_1756_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__11));
return v___x_1756_;
}
case 6:
{
lean_object* v___x_1757_; 
v___x_1757_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__13));
return v___x_1757_;
}
case 7:
{
lean_object* v___x_1758_; 
v___x_1758_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__15));
return v___x_1758_;
}
case 8:
{
lean_object* v___x_1759_; 
v___x_1759_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__17));
return v___x_1759_;
}
case 9:
{
lean_object* v___x_1760_; 
v___x_1760_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__19));
return v___x_1760_;
}
default: 
{
lean_object* v___x_1761_; 
v___x_1761_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__21));
return v___x_1761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0___boxed(lean_object* v_x_1762_){
_start:
{
lean_object* v_res_1763_; 
v_res_1763_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(v_x_1762_);
lean_dec(v_x_1762_);
return v_res_1763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(lean_object* v_x_1764_){
_start:
{
if (lean_obj_tag(v_x_1764_) == 0)
{
lean_object* v___x_1765_; 
v___x_1765_ = lean_box(0);
return v___x_1765_;
}
else
{
lean_object* v_val_1766_; lean_object* v_locationHint_1767_; lean_object* v_routingMode_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1785_; 
v_val_1766_ = lean_ctor_get(v_x_1764_, 0);
lean_inc(v_val_1766_);
lean_dec_ref_known(v_x_1764_, 1);
v_locationHint_1767_ = lean_ctor_get(v_val_1766_, 0);
v_routingMode_1768_ = lean_ctor_get(v_val_1766_, 1);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_val_1766_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1770_ = v_val_1766_;
v_isShared_1771_ = v_isSharedCheck_1785_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_routingMode_1768_);
lean_inc(v_locationHint_1767_);
lean_dec(v_val_1766_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1785_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1775_; 
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__0));
v___x_1773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(v_locationHint_1767_);
lean_dec(v_locationHint_1767_);
if (v_isShared_1771_ == 0)
{
lean_ctor_set(v___x_1770_, 1, v___x_1773_);
lean_ctor_set(v___x_1770_, 0, v___x_1772_);
v___x_1775_ = v___x_1770_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v___x_1773_);
v___x_1775_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1776_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__1));
v___x_1777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(v_routingMode_1768_);
lean_dec(v_routingMode_1768_);
v___x_1778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1776_);
lean_ctor_set(v___x_1778_, 1, v___x_1777_);
v___x_1779_ = lean_unsigned_to_nat(2u);
v___x_1780_ = lean_mk_empty_array_with_capacity(v___x_1779_);
v___x_1781_ = lean_array_push(v___x_1780_, v___x_1775_);
v___x_1782_ = lean_array_push(v___x_1781_, v___x_1778_);
v___x_1783_ = l_Lasm_JS_Web_Support_fields(v___x_1782_);
lean_dec_ref(v___x_1782_);
return v___x_1783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get(lean_object* v_self_1787_, lean_object* v_id_1788_, lean_object* v_options_1789_){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1791_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_1792_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1793_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1793_, 0, v_id_1788_);
lean_ctor_set(v___x_1793_, 1, v___x_1792_);
v___x_1794_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(v_options_1789_);
v___x_1795_ = lean_unsigned_to_nat(2u);
v___x_1796_ = lean_mk_empty_array_with_capacity(v___x_1795_);
v___x_1797_ = lean_array_push(v___x_1796_, v___x_1793_);
v___x_1798_ = lean_array_push(v___x_1797_, v___x_1794_);
v___x_1799_ = l_Lasm_JS_Web_Support_args(v___x_1798_);
v___x_1800_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1787_, v___x_1791_, v___x_1799_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1808_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1808_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1808_ == 0)
{
v___x_1803_ = v___x_1800_;
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v___x_1800_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1808_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1806_; 
if (v_isShared_1804_ == 0)
{
v___x_1806_ = v___x_1803_;
goto v_reusejp_1805_;
}
else
{
lean_object* v_reuseFailAlloc_1807_; 
v_reuseFailAlloc_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1807_, 0, v_a_1801_);
v___x_1806_ = v_reuseFailAlloc_1807_;
goto v_reusejp_1805_;
}
v_reusejp_1805_:
{
return v___x_1806_;
}
}
}
else
{
lean_object* v_a_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1816_; 
v_a_1809_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1816_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1816_ == 0)
{
v___x_1811_ = v___x_1800_;
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_a_1809_);
lean_dec(v___x_1800_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1816_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v___x_1814_; 
if (v_isShared_1812_ == 0)
{
v___x_1814_ = v___x_1811_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1815_; 
v_reuseFailAlloc_1815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1815_, 0, v_a_1809_);
v___x_1814_ = v_reuseFailAlloc_1815_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
return v___x_1814_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___boxed(lean_object* v_self_1817_, lean_object* v_id_1818_, lean_object* v_options_1819_, lean_object* v_a_1820_){
_start:
{
lean_object* v_res_1821_; 
v_res_1821_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_get(v_self_1817_, v_id_1818_, v_options_1819_);
return v_res_1821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName(lean_object* v_self_1823_, lean_object* v_name_1824_, lean_object* v_options_1825_){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1827_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___closed__0));
v___x_1828_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1828_, 0, v_name_1824_);
v___x_1829_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(v_options_1825_);
v___x_1830_ = lean_unsigned_to_nat(2u);
v___x_1831_ = lean_mk_empty_array_with_capacity(v___x_1830_);
v___x_1832_ = lean_array_push(v___x_1831_, v___x_1828_);
v___x_1833_ = lean_array_push(v___x_1832_, v___x_1829_);
v___x_1834_ = l_Lasm_JS_Web_Support_args(v___x_1833_);
v___x_1835_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1823_, v___x_1827_, v___x_1834_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1843_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1838_ = v___x_1835_;
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_a_1836_);
lean_dec(v___x_1835_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1841_; 
if (v_isShared_1839_ == 0)
{
v___x_1841_ = v___x_1838_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v_a_1836_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
else
{
lean_object* v_a_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1851_; 
v_a_1844_ = lean_ctor_get(v___x_1835_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1835_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1846_ = v___x_1835_;
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_a_1844_);
lean_dec(v___x_1835_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1851_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v___x_1849_; 
if (v_isShared_1847_ == 0)
{
v___x_1849_ = v___x_1846_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_a_1844_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___boxed(lean_object* v_self_1852_, lean_object* v_name_1853_, lean_object* v_options_1854_, lean_object* v_a_1855_){
_start:
{
lean_object* v_res_1856_; 
v_res_1856_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName(v_self_1852_, v_name_1853_, v_options_1854_);
return v_res_1856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction(lean_object* v_self_1857_, uint8_t v_jurisdiction_1858_){
_start:
{
lean_object* v___x_1860_; lean_object* v___y_1862_; 
v___x_1860_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
switch(v_jurisdiction_1858_)
{
case 0:
{
lean_object* v___x_1884_; 
v___x_1884_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1));
v___y_1862_ = v___x_1884_;
goto v___jp_1861_;
}
case 1:
{
lean_object* v___x_1885_; 
v___x_1885_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3));
v___y_1862_ = v___x_1885_;
goto v___jp_1861_;
}
case 2:
{
lean_object* v___x_1886_; 
v___x_1886_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5));
v___y_1862_ = v___x_1886_;
goto v___jp_1861_;
}
default: 
{
lean_object* v___x_1887_; 
v___x_1887_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7));
v___y_1862_ = v___x_1887_;
goto v___jp_1861_;
}
}
v___jp_1861_:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1863_ = lean_unsigned_to_nat(1u);
v___x_1864_ = lean_mk_empty_array_with_capacity(v___x_1863_);
lean_inc(v___y_1862_);
v___x_1865_ = lean_array_push(v___x_1864_, v___y_1862_);
v___x_1866_ = l_Lasm_JS_Web_Support_args(v___x_1865_);
v___x_1867_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1857_, v___x_1860_, v___x_1866_);
if (lean_obj_tag(v___x_1867_) == 0)
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
v_a_1868_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1867_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1867_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
v_a_1876_ = lean_ctor_get(v___x_1867_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1867_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1867_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1867_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction___boxed(lean_object* v_self_1888_, lean_object* v_jurisdiction_1889_, lean_object* v_a_1890_){
_start:
{
uint8_t v_jurisdiction_boxed_1891_; lean_object* v_res_1892_; 
v_jurisdiction_boxed_1891_ = lean_unbox(v_jurisdiction_1889_);
v_res_1892_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction(v_self_1888_, v_jurisdiction_boxed_1891_);
return v_res_1892_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1893_; uint64_t v___x_1894_; 
v___x_1893_ = 0;
v___x_1894_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1893_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(lean_object* v_o_1896_, lean_object* v_key_1897_){
_start:
{
lean_object* v_k_1899_; lean_object* v___x_1900_; 
v_k_1899_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1899_, 0, v_key_1897_);
v___x_1900_ = l_Lasm_JS_Wire_encodeIO(v_k_1899_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; uint32_t v___x_1902_; uint32_t v___x_1903_; uint64_t v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref_known(v___x_1900_, 1);
v___x_1902_ = 203;
v___x_1903_ = lasm_js_value_handle(v_o_1896_);
v___x_1904_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
v___x_1905_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1906_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1906_, 0, v_o_1896_);
lean_ctor_set(v___x_1906_, 1, v___x_1905_);
v___x_1907_ = lean_unsigned_to_nat(2u);
v___x_1908_ = lean_mk_empty_array_with_capacity(v___x_1907_);
lean_inc_ref(v_k_1899_);
v___x_1909_ = lean_array_push(v___x_1908_, v_k_1899_);
v___x_1910_ = lean_array_push(v___x_1909_, v___x_1906_);
v___x_1911_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
v___x_1912_ = lasm_js_call(v___x_1902_, v___x_1903_, v___x_1904_, v_a_1901_, v___x_1911_);
lean_dec_ref_known(v___x_1911_, 1);
lean_dec(v_a_1901_);
if (lean_obj_tag(v___x_1912_) == 0)
{
lean_object* v_a_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; 
v_a_1913_ = lean_ctor_get(v___x_1912_, 0);
lean_inc(v_a_1913_);
lean_dec_ref_known(v___x_1912_, 1);
v___x_1914_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__1));
v___x_1915_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1899_);
v___x_1916_ = lean_string_append(v___x_1914_, v___x_1915_);
lean_dec_ref(v___x_1915_);
v___x_1917_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1916_, v_a_1913_);
lean_dec(v_a_1913_);
lean_dec_ref(v___x_1916_);
return v___x_1917_;
}
else
{
lean_object* v_a_1918_; lean_object* v___x_1920_; uint8_t v_isShared_1921_; uint8_t v_isSharedCheck_1925_; 
lean_dec_ref_known(v_k_1899_, 1);
v_a_1918_ = lean_ctor_get(v___x_1912_, 0);
v_isSharedCheck_1925_ = !lean_is_exclusive(v___x_1912_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1920_ = v___x_1912_;
v_isShared_1921_ = v_isSharedCheck_1925_;
goto v_resetjp_1919_;
}
else
{
lean_inc(v_a_1918_);
lean_dec(v___x_1912_);
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
else
{
lean_object* v_a_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1933_; 
lean_dec_ref_known(v_k_1899_, 1);
lean_dec(v_o_1896_);
v_a_1926_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1928_ = v___x_1900_;
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
else
{
lean_inc(v_a_1926_);
lean_dec(v___x_1900_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1933_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v___x_1931_; 
if (v_isShared_1929_ == 0)
{
v___x_1931_ = v___x_1928_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1932_; 
v_reuseFailAlloc_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1932_, 0, v_a_1926_);
v___x_1931_ = v_reuseFailAlloc_1932_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
return v___x_1931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___boxed(lean_object* v_o_1934_, lean_object* v_key_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_o_1934_, v_key_1935_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name(lean_object* v_self_1939_){
_start:
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0));
v___x_1942_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_1939_, v___x_1941_);
return v___x_1942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name___boxed(lean_object* v_self_1943_, lean_object* v_a_1944_){
_start:
{
lean_object* v_res_1945_; 
v_res_1945_ = l_Lasm_JS_Cloudflare_DurableObjectId_name(v_self_1943_);
return v_res_1945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction(lean_object* v_self_1946_){
_start:
{
lean_object* v___x_1948_; lean_object* v___x_1949_; 
v___x_1948_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
v___x_1949_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_1946_, v___x_1948_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction___boxed(lean_object* v_self_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction(v_self_1950_);
return v_res_1952_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2(void){
_start:
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1956_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__1));
v___x_1957_ = l_Lasm_JS_Web_Support_args(v___x_1956_);
return v___x_1957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString(lean_object* v_self_1958_){
_start:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1960_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__0));
v___x_1961_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_1962_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1958_, v___x_1960_, v___x_1961_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString___boxed(lean_object* v_self_1963_, lean_object* v_a_1964_){
_start:
{
lean_object* v_res_1965_; 
v_res_1965_ = l_Lasm_JS_Cloudflare_DurableObjectId_toString(v_self_1963_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals(lean_object* v_self_1967_, lean_object* v_other_1968_){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1970_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_equals___closed__0));
v___x_1971_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1972_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1972_, 0, v_other_1968_);
lean_ctor_set(v___x_1972_, 1, v___x_1971_);
v___x_1973_ = lean_unsigned_to_nat(1u);
v___x_1974_ = lean_mk_empty_array_with_capacity(v___x_1973_);
v___x_1975_ = lean_array_push(v___x_1974_, v___x_1972_);
v___x_1976_ = l_Lasm_JS_Web_Support_args(v___x_1975_);
v___x_1977_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_dispatchEvent_spec__0(v_self_1967_, v___x_1970_, v___x_1976_);
return v___x_1977_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals___boxed(lean_object* v_self_1978_, lean_object* v_other_1979_, lean_object* v_a_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l_Lasm_JS_Cloudflare_DurableObjectId_equals(v_self_1978_, v_other_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id(lean_object* v_self_1983_){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0));
v___x_1986_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1983_, v___x_1985_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v_a_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
v_a_1987_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_1994_ == 0)
{
v___x_1989_ = v___x_1986_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_a_1987_);
lean_dec(v___x_1986_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_a_1987_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2002_; 
v_a_1995_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1997_ = v___x_1986_;
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v___x_1986_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2002_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id___boxed(lean_object* v_self_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v_res_2005_; 
v_res_2005_ = l_Lasm_JS_Cloudflare_DurableObjectStub_id(v_self_2003_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name(lean_object* v_self_2006_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0));
v___x_2009_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_2006_, v___x_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name___boxed(lean_object* v_self_2010_, lean_object* v_a_2011_){
_start:
{
lean_object* v_res_2012_; 
v_res_2012_ = l_Lasm_JS_Cloudflare_DurableObjectStub_name(v_self_2010_);
return v_res_2012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0(lean_object* v_x_2013_){
_start:
{
if (lean_obj_tag(v_x_2013_) == 0)
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2023_; 
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
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2032_; 
v_a_2024_ = lean_ctor_get(v_x_2013_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_x_2013_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2026_ = v_x_2013_;
v_isShared_2027_ = v_isSharedCheck_2032_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v_x_2013_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2032_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
lean_object* v___x_2030_; 
v___x_2030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2030_, 0, v___x_2029_);
return v___x_2030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0___boxed(lean_object* v_x_2033_, lean_object* v___y_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0(v_x_2033_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch(lean_object* v_self_2038_, lean_object* v_input_2039_, lean_object* v_init_2040_){
_start:
{
lean_object* v___f_2042_; lean_object* v___x_2043_; lean_object* v___y_2045_; 
v___f_2042_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__0));
v___x_2043_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__1));
if (lean_obj_tag(v_input_2039_) == 1)
{
lean_object* v_value_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
v_value_2056_ = lean_ctor_get(v_input_2039_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_input_2039_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v_input_2039_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_value_2056_);
lean_dec(v_input_2039_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set_tag(v___x_2058_, 4);
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_value_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
v___y_2045_ = v___x_2061_;
goto v___jp_2044_;
}
}
}
else
{
lean_object* v_value_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v_value_2064_ = lean_ctor_get(v_input_2039_, 0);
lean_inc(v_value_2064_);
lean_dec_ref(v_input_2039_);
v___x_2065_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2066_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2066_, 0, v_value_2064_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___y_2045_ = v___x_2066_;
goto v___jp_2044_;
}
v___jp_2044_:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2046_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Request_new_spec__0(v_init_2040_);
v___x_2047_ = lean_unsigned_to_nat(2u);
v___x_2048_ = lean_mk_empty_array_with_capacity(v___x_2047_);
v___x_2049_ = lean_array_push(v___x_2048_, v___y_2045_);
v___x_2050_ = lean_array_push(v___x_2049_, v___x_2046_);
v___x_2051_ = l_Lasm_JS_Web_Support_args(v___x_2050_);
v___x_2052_ = lean_unsigned_to_nat(0u);
v___x_2053_ = 0;
v___x_2054_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2038_, v___x_2043_, v___x_2051_);
v___x_2055_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2052_, v___x_2053_, v___x_2054_, v___f_2042_);
return v___x_2055_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___boxed(lean_object* v_self_2067_, lean_object* v_input_2068_, lean_object* v_init_2069_, lean_object* v_a_2070_){
_start:
{
lean_object* v_res_2071_; 
v_res_2071_ = l_Lasm_JS_Cloudflare_DurableObjectStub_fetch(v_self_2067_, v_input_2068_, v_init_2069_);
return v_res_2071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect(lean_object* v_self_2073_, lean_object* v_address_2074_, lean_object* v_options_2075_){
_start:
{
lean_object* v___x_2077_; lean_object* v___y_2079_; 
v___x_2077_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_connect___closed__0));
if (lean_obj_tag(v_address_2074_) == 0)
{
lean_object* v_value_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2122_; 
v_value_2103_ = lean_ctor_get(v_address_2074_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v_address_2074_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2105_ = v_address_2074_;
v_isShared_2106_ = v_isSharedCheck_2122_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_value_2103_);
lean_dec(v_address_2074_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2122_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v_hostname_2107_; double v_port_2108_; lean_object* v___x_2109_; lean_object* v___x_2111_; 
v_hostname_2107_ = lean_ctor_get(v_value_2103_, 0);
lean_inc_ref(v_hostname_2107_);
v_port_2108_ = lean_ctor_get_float(v_value_2103_, sizeof(void*)*1);
lean_dec_ref(v_value_2103_);
v___x_2109_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0));
if (v_isShared_2106_ == 0)
{
lean_ctor_set_tag(v___x_2105_, 4);
lean_ctor_set(v___x_2105_, 0, v_hostname_2107_);
v___x_2111_ = v___x_2105_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_hostname_2107_);
v___x_2111_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v___x_2112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2109_);
lean_ctor_set(v___x_2112_, 1, v___x_2111_);
v___x_2113_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1));
v___x_2114_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2114_, 0, v_port_2108_);
v___x_2115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2113_);
lean_ctor_set(v___x_2115_, 1, v___x_2114_);
v___x_2116_ = lean_unsigned_to_nat(2u);
v___x_2117_ = lean_mk_empty_array_with_capacity(v___x_2116_);
v___x_2118_ = lean_array_push(v___x_2117_, v___x_2112_);
v___x_2119_ = lean_array_push(v___x_2118_, v___x_2115_);
v___x_2120_ = l_Lasm_JS_Web_Support_fields(v___x_2119_);
lean_dec_ref(v___x_2119_);
v___y_2079_ = v___x_2120_;
goto v___jp_2078_;
}
}
}
else
{
lean_object* v_value_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
v_value_2123_ = lean_ctor_get(v_address_2074_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_address_2074_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2125_ = v_address_2074_;
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_value_2123_);
lean_dec(v_address_2074_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2128_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set_tag(v___x_2125_, 4);
v___x_2128_ = v___x_2125_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_value_2123_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
v___y_2079_ = v___x_2128_;
goto v___jp_2078_;
}
}
}
v___jp_2078_:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2080_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_connect_spec__0(v_options_2075_);
v___x_2081_ = lean_unsigned_to_nat(2u);
v___x_2082_ = lean_mk_empty_array_with_capacity(v___x_2081_);
v___x_2083_ = lean_array_push(v___x_2082_, v___y_2079_);
v___x_2084_ = lean_array_push(v___x_2083_, v___x_2080_);
v___x_2085_ = l_Lasm_JS_Web_Support_args(v___x_2084_);
v___x_2086_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2073_, v___x_2077_, v___x_2085_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2086_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2086_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
else
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
v_a_2095_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2086_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2086_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect___boxed(lean_object* v_self_2131_, lean_object* v_address_2132_, lean_object* v_options_2133_, lean_object* v_a_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lasm_JS_Cloudflare_DurableObjectStub_connect(v_self_2131_, v_address_2132_, v_options_2133_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props(lean_object* v_self_2137_){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; 
v___x_2139_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_props___closed__0));
v___x_2140_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2137_, v___x_2139_);
return v___x_2140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props___boxed(lean_object* v_self_2141_, lean_object* v_a_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l_Lasm_JS_Cloudflare_DurableObjectState_props(v_self_2141_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id(lean_object* v_self_2144_){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; 
v___x_2146_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0));
v___x_2147_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2144_, v___x_2146_);
if (lean_obj_tag(v___x_2147_) == 0)
{
lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2155_; 
v_a_2148_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2150_ = v___x_2147_;
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2147_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2153_; 
if (v_isShared_2151_ == 0)
{
v___x_2153_ = v___x_2150_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_a_2148_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
v_a_2156_ = lean_ctor_get(v___x_2147_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2147_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2147_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2147_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id___boxed(lean_object* v_self_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Lasm_JS_Cloudflare_DurableObjectState_id(v_self_2164_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage(lean_object* v_self_2168_){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2170_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_storage___closed__0));
v___x_2171_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2168_, v___x_2170_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2171_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2171_);
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
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
v_a_2180_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2171_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2171_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage___boxed(lean_object* v_self_2188_, lean_object* v_a_2189_){
_start:
{
lean_object* v_res_2190_; 
v_res_2190_ = l_Lasm_JS_Cloudflare_DurableObjectState_storage(v_self_2188_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil(lean_object* v_self_2192_, lean_object* v_promise_2193_){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2195_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___closed__0));
v___x_2196_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2197_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2197_, 0, v_promise_2193_);
lean_ctor_set(v___x_2197_, 1, v___x_2196_);
v___x_2198_ = lean_unsigned_to_nat(1u);
v___x_2199_ = lean_mk_empty_array_with_capacity(v___x_2198_);
v___x_2200_ = lean_array_push(v___x_2199_, v___x_2197_);
v___x_2201_ = l_Lasm_JS_Web_Support_args(v___x_2200_);
v___x_2202_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2192_, v___x_2195_, v___x_2201_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___boxed(lean_object* v_self_2203_, lean_object* v_promise_2204_, lean_object* v_a_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil(v_self_2203_, v_promise_2204_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile(lean_object* v_self_2208_, lean_object* v_callback_2209_){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2211_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___closed__0));
v___x_2212_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2213_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2213_, 0, v_callback_2209_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
v___x_2214_ = lean_unsigned_to_nat(1u);
v___x_2215_ = lean_mk_empty_array_with_capacity(v___x_2214_);
v___x_2216_ = lean_array_push(v___x_2215_, v___x_2213_);
v___x_2217_ = l_Lasm_JS_Web_Support_args(v___x_2216_);
v___x_2218_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_2208_, v___x_2211_, v___x_2217_);
return v___x_2218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___boxed(lean_object* v_self_2219_, lean_object* v_callback_2220_, lean_object* v_a_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile(v_self_2219_, v_callback_2220_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(lean_object* v_x_2223_){
_start:
{
if (lean_obj_tag(v_x_2223_) == 0)
{
lean_object* v___x_2224_; 
v___x_2224_ = lean_box(0);
return v___x_2224_;
}
else
{
lean_object* v_val_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; 
v_val_2225_ = lean_ctor_get(v_x_2223_, 0);
v___x_2226_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0));
v___x_2227_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2225_);
v___x_2228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2228_, 0, v___x_2226_);
lean_ctor_set(v___x_2228_, 1, v___x_2227_);
v___x_2229_ = lean_unsigned_to_nat(1u);
v___x_2230_ = lean_mk_empty_array_with_capacity(v___x_2229_);
v___x_2231_ = lean_array_push(v___x_2230_, v___x_2228_);
v___x_2232_ = l_Lasm_JS_Web_Support_fields(v___x_2231_);
lean_dec_ref(v___x_2231_);
return v___x_2232_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0___boxed(lean_object* v_x_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(v_x_2233_);
lean_dec(v_x_2233_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort(lean_object* v_self_2236_, lean_object* v_reason_2237_, lean_object* v_options_2238_){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2240_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_abort___closed__0));
v___x_2241_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_2237_);
v___x_2242_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(v_options_2238_);
v___x_2243_ = lean_unsigned_to_nat(2u);
v___x_2244_ = lean_mk_empty_array_with_capacity(v___x_2243_);
v___x_2245_ = lean_array_push(v___x_2244_, v___x_2241_);
v___x_2246_ = lean_array_push(v___x_2245_, v___x_2242_);
v___x_2247_ = l_Lasm_JS_Web_Support_args(v___x_2246_);
v___x_2248_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2236_, v___x_2240_, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort___boxed(lean_object* v_self_2249_, lean_object* v_reason_2250_, lean_object* v_options_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lasm_JS_Cloudflare_DurableObjectState_abort(v_self_2249_, v_reason_2250_, v_options_2251_);
lean_dec(v_options_2251_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(lean_object* v_x_2254_){
_start:
{
if (lean_obj_tag(v_x_2254_) == 0)
{
lean_object* v___x_2255_; 
v___x_2255_ = lean_box(0);
return v___x_2255_;
}
else
{
lean_object* v_val_2256_; lean_object* v_allowConcurrency_2257_; lean_object* v_noCache_2258_; lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2275_; 
v_val_2256_ = lean_ctor_get(v_x_2254_, 0);
lean_inc(v_val_2256_);
lean_dec_ref_known(v_x_2254_, 1);
v_allowConcurrency_2257_ = lean_ctor_get(v_val_2256_, 0);
v_noCache_2258_ = lean_ctor_get(v_val_2256_, 1);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_val_2256_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2260_ = v_val_2256_;
v_isShared_2261_ = v_isSharedCheck_2275_;
goto v_resetjp_2259_;
}
else
{
lean_inc(v_noCache_2258_);
lean_inc(v_allowConcurrency_2257_);
lean_dec(v_val_2256_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2275_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2262_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2263_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2257_);
lean_dec(v_allowConcurrency_2257_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 1, v___x_2263_);
lean_ctor_set(v___x_2260_, 0, v___x_2262_);
v___x_2265_ = v___x_2260_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v___x_2262_);
lean_ctor_set(v_reuseFailAlloc_2274_, 1, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2266_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2267_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2258_);
lean_dec(v_noCache_2258_);
v___x_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2266_);
lean_ctor_set(v___x_2268_, 1, v___x_2267_);
v___x_2269_ = lean_unsigned_to_nat(2u);
v___x_2270_ = lean_mk_empty_array_with_capacity(v___x_2269_);
v___x_2271_ = lean_array_push(v___x_2270_, v___x_2265_);
v___x_2272_ = lean_array_push(v___x_2271_, v___x_2268_);
v___x_2273_ = l_Lasm_JS_Web_Support_fields(v___x_2272_);
lean_dec_ref(v___x_2272_);
return v___x_2273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get(lean_object* v_self_2276_, lean_object* v_key_2277_, lean_object* v_options_2278_){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2280_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_2281_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2281_, 0, v_key_2277_);
v___x_2282_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_2278_);
v___x_2283_ = lean_unsigned_to_nat(2u);
v___x_2284_ = lean_mk_empty_array_with_capacity(v___x_2283_);
v___x_2285_ = lean_array_push(v___x_2284_, v___x_2281_);
v___x_2286_ = lean_array_push(v___x_2285_, v___x_2282_);
v___x_2287_ = l_Lasm_JS_Web_Support_args(v___x_2286_);
v___x_2288_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_2276_, v___x_2280_, v___x_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get___boxed(lean_object* v_self_2289_, lean_object* v_key_2290_, lean_object* v_options_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_get(v_self_2289_, v_key_2290_, v_options_2291_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2299_, size_t v_i_2300_, lean_object* v_bs_2301_){
_start:
{
uint8_t v___x_2304_; 
v___x_2304_ = lean_usize_dec_lt(v_i_2300_, v_sz_2299_);
if (v___x_2304_ == 0)
{
lean_object* v___x_2305_; 
v___x_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2305_, 0, v_bs_2301_);
return v___x_2305_;
}
else
{
lean_object* v_v_2306_; 
v_v_2306_ = lean_array_uget_borrowed(v_bs_2301_, v_i_2300_);
if (lean_obj_tag(v_v_2306_) == 7)
{
lean_object* v_items_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; uint8_t v___x_2310_; 
v_items_2307_ = lean_ctor_get(v_v_2306_, 0);
lean_inc_ref(v_items_2307_);
v___x_2308_ = lean_array_get_size(v_items_2307_);
v___x_2309_ = lean_unsigned_to_nat(2u);
v___x_2310_ = lean_nat_dec_eq(v___x_2308_, v___x_2309_);
if (v___x_2310_ == 0)
{
lean_dec_ref(v_items_2307_);
lean_dec_ref(v_bs_2301_);
goto v___jp_2302_;
}
else
{
lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2311_ = lean_unsigned_to_nat(0u);
v___x_2312_ = lean_array_fget_borrowed(v_items_2307_, v___x_2311_);
if (lean_obj_tag(v___x_2312_) == 4)
{
lean_object* v_s_2313_; lean_object* v_bs_x27_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; size_t v___x_2318_; size_t v___x_2319_; lean_object* v___x_2320_; 
v_s_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc_ref(v_s_2313_);
v_bs_x27_2314_ = lean_array_uset(v_bs_2301_, v_i_2300_, v___x_2311_);
v___x_2315_ = lean_unsigned_to_nat(1u);
v___x_2316_ = lean_array_fget(v_items_2307_, v___x_2315_);
lean_dec_ref(v_items_2307_);
v___x_2317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2317_, 0, v_s_2313_);
lean_ctor_set(v___x_2317_, 1, v___x_2316_);
v___x_2318_ = ((size_t)1ULL);
v___x_2319_ = lean_usize_add(v_i_2300_, v___x_2318_);
v___x_2320_ = lean_array_uset(v_bs_x27_2314_, v_i_2300_, v___x_2317_);
v_i_2300_ = v___x_2319_;
v_bs_2301_ = v___x_2320_;
goto _start;
}
else
{
lean_object* v___x_2322_; 
lean_dec_ref(v_items_2307_);
lean_dec_ref(v_bs_2301_);
v___x_2322_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__2));
return v___x_2322_;
}
}
}
else
{
lean_dec_ref(v_bs_2301_);
goto v___jp_2302_;
}
}
v___jp_2302_:
{
lean_object* v___x_2303_; 
v___x_2303_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2303_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2323_, lean_object* v_i_2324_, lean_object* v_bs_2325_){
_start:
{
size_t v_sz_boxed_2326_; size_t v_i_boxed_2327_; lean_object* v_res_2328_; 
v_sz_boxed_2326_ = lean_unbox_usize(v_sz_2323_);
lean_dec(v_sz_2323_);
v_i_boxed_2327_ = lean_unbox_usize(v_i_2324_);
lean_dec(v_i_2324_);
v_res_2328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2326_, v_i_boxed_2327_, v_bs_2325_);
return v_res_2328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(lean_object* v_context_2334_, lean_object* v_d_2335_){
_start:
{
lean_object* v___y_2338_; lean_object* v___y_2339_; lean_object* v___y_2344_; lean_object* v_received_2345_; lean_object* v___y_2364_; lean_object* v_a_2367_; 
if (lean_obj_tag(v_d_2335_) == 7)
{
lean_object* v_items_2391_; size_t v_sz_2392_; size_t v___x_2393_; lean_object* v___x_2394_; 
v_items_2391_ = lean_ctor_get(v_d_2335_, 0);
v_sz_2392_ = lean_array_size(v_items_2391_);
v___x_2393_ = ((size_t)0ULL);
lean_inc_ref(v_items_2391_);
v___x_2394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(v_sz_2392_, v___x_2393_, v_items_2391_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__3));
v___x_2397_ = lean_string_utf8_byte_size(v_a_2395_);
v___x_2398_ = lean_unsigned_to_nat(0u);
v___x_2399_ = lean_nat_dec_eq(v___x_2397_, v___x_2398_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2400_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4));
v___x_2401_ = lean_string_append(v___x_2400_, v_a_2395_);
lean_dec(v_a_2395_);
v___x_2402_ = lean_string_append(v___x_2396_, v___x_2401_);
lean_dec_ref(v___x_2401_);
v_a_2367_ = v___x_2402_;
goto v___jp_2366_;
}
else
{
lean_dec(v_a_2395_);
v_a_2367_ = v___x_2396_;
goto v___jp_2366_;
}
}
else
{
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2403_; 
v_a_2403_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2403_);
lean_dec_ref_known(v___x_2394_, 1);
v_a_2367_ = v_a_2403_;
goto v___jp_2366_;
}
else
{
lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2411_; 
lean_dec_ref_known(v_d_2335_, 1);
v_a_2404_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2411_ == 0)
{
v___x_2406_ = v___x_2394_;
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2394_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2411_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2409_; 
if (v_isShared_2407_ == 0)
{
lean_ctor_set_tag(v___x_2406_, 0);
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
}
}
else
{
lean_object* v___x_2412_; 
v___x_2412_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v_a_2367_ = v___x_2412_;
goto v___jp_2366_;
}
v___jp_2337_:
{
lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2340_ = lean_string_append(v___y_2338_, v___y_2339_);
lean_dec_ref(v___y_2339_);
v___x_2341_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2341_, 0, v___x_2340_);
v___x_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2342_, 0, v___x_2341_);
return v___x_2342_;
}
v___jp_2343_:
{
lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; uint8_t v___x_2357_; 
v___x_2346_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_2347_ = lean_string_append(v___x_2346_, v_context_2334_);
v___x_2348_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1));
v___x_2349_ = lean_string_append(v___x_2347_, v___x_2348_);
v___x_2350_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__0));
v___x_2351_ = lean_string_append(v___x_2349_, v___x_2350_);
v___x_2352_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2));
v___x_2353_ = lean_string_append(v___x_2351_, v___x_2352_);
v___x_2354_ = lean_string_append(v___x_2353_, v_received_2345_);
lean_dec_ref(v_received_2345_);
v___x_2355_ = lean_string_utf8_byte_size(v___y_2344_);
v___x_2356_ = lean_unsigned_to_nat(0u);
v___x_2357_ = lean_nat_dec_eq(v___x_2355_, v___x_2356_);
if (v___x_2357_ == 0)
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; 
v___x_2358_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__1));
v___x_2359_ = lean_string_append(v___x_2358_, v___y_2344_);
lean_dec_ref(v___y_2344_);
v___x_2360_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__2));
v___x_2361_ = lean_string_append(v___x_2359_, v___x_2360_);
v___y_2338_ = v___x_2354_;
v___y_2339_ = v___x_2361_;
goto v___jp_2337_;
}
else
{
lean_object* v___x_2362_; 
lean_dec_ref(v___y_2344_);
v___x_2362_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___y_2338_ = v___x_2354_;
v___y_2339_ = v___x_2362_;
goto v___jp_2337_;
}
}
v___jp_2363_:
{
lean_object* v___x_2365_; 
v___x_2365_ = l_Lasm_JS_Data_describe(v_d_2335_);
v___y_2344_ = v___y_2364_;
v_received_2345_ = v___x_2365_;
goto v___jp_2343_;
}
v___jp_2366_:
{
if (lean_obj_tag(v_d_2335_) == 9)
{
lean_object* v_value_2368_; lean_object* v_description_2369_; lean_object* v___x_2370_; uint8_t v___x_2371_; 
v_value_2368_ = lean_ctor_get(v_d_2335_, 0);
v_description_2369_ = lean_ctor_get(v_d_2335_, 1);
v___x_2370_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2371_ = lean_string_dec_eq(v_description_2369_, v___x_2370_);
if (v___x_2371_ == 0)
{
v___y_2364_ = v_a_2367_;
goto v___jp_2363_;
}
else
{
lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2388_; 
lean_inc(v_value_2368_);
v_isSharedCheck_2388_ = !lean_is_exclusive(v_d_2335_);
if (v_isSharedCheck_2388_ == 0)
{
lean_object* v_unused_2389_; lean_object* v_unused_2390_; 
v_unused_2389_ = lean_ctor_get(v_d_2335_, 1);
lean_dec(v_unused_2389_);
v_unused_2390_ = lean_ctor_get(v_d_2335_, 0);
lean_dec(v_unused_2390_);
v___x_2373_ = v_d_2335_;
v_isShared_2374_ = v_isSharedCheck_2388_;
goto v_resetjp_2372_;
}
else
{
lean_dec(v_d_2335_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2388_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
uint32_t v___x_2375_; uint64_t v___x_2376_; lean_object* v___x_2378_; 
v___x_2375_ = 206;
v___x_2376_ = 0ULL;
lean_inc(v_value_2368_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 1, v___x_2370_);
v___x_2378_ = v___x_2373_;
goto v_reusejp_2377_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_value_2368_);
lean_ctor_set(v_reuseFailAlloc_2387_, 1, v___x_2370_);
v___x_2378_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2377_;
}
v_reusejp_2377_:
{
uint32_t v___x_2379_; lean_object* v___x_2380_; 
v___x_2379_ = lasm_js_value_handle(v_value_2368_);
lean_dec(v_value_2368_);
v___x_2380_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2375_, v___x_2376_, v___x_2378_, v___x_2379_);
lean_dec_ref(v___x_2378_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; uint8_t v___x_2382_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
lean_inc(v_a_2381_);
lean_dec_ref_known(v___x_2380_, 1);
v___x_2382_ = lean_string_validate_utf8(v_a_2381_);
if (v___x_2382_ == 0)
{
lean_object* v___x_2383_; lean_object* v___x_2384_; 
lean_dec(v_a_2381_);
v___x_2383_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9);
v___x_2384_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2383_);
v___y_2344_ = v_a_2367_;
v_received_2345_ = v___x_2384_;
goto v___jp_2343_;
}
else
{
lean_object* v___x_2385_; 
v___x_2385_ = lean_string_from_utf8_unchecked(v_a_2381_);
v___y_2344_ = v_a_2367_;
v_received_2345_ = v___x_2385_;
goto v___jp_2343_;
}
}
else
{
lean_object* v___x_2386_; 
lean_dec_ref_known(v___x_2380_, 1);
v___x_2386_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10));
v___y_2344_ = v_a_2367_;
v_received_2345_ = v___x_2386_;
goto v___jp_2343_;
}
}
}
}
}
else
{
v___y_2364_ = v_a_2367_;
goto v___jp_2363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2413_, lean_object* v_d_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v_res_2416_; 
v_res_2416_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(v_context_2413_, v_d_2414_);
lean_dec_ref(v_context_2413_);
return v_res_2416_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(lean_object* v_b_2417_, lean_object* v_args_2418_, uint8_t v_await_2419_){
_start:
{
uint64_t v___y_2422_; uint64_t v___y_2423_; uint64_t v___x_2466_; uint64_t v___y_2468_; 
v___x_2466_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_2419_ == 0)
{
uint64_t v___x_2473_; 
v___x_2473_ = 0ULL;
v___y_2468_ = v___x_2473_;
goto v___jp_2467_;
}
else
{
uint64_t v___x_2474_; 
v___x_2474_ = 2ULL;
v___y_2468_ = v___x_2474_;
goto v___jp_2467_;
}
v___jp_2421_:
{
uint64_t v_flags_2424_; uint32_t v___x_2425_; lean_object* v___x_2426_; uint32_t v___x_2427_; lean_object* v___x_2428_; 
v_flags_2424_ = lean_uint64_lor(v___y_2422_, v___y_2423_);
v___x_2425_ = 214;
v___x_2426_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2417_, v_args_2418_);
v___x_2427_ = 0;
v___x_2428_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2425_, v_flags_2424_, v___x_2426_, v___x_2427_);
lean_dec(v___x_2426_);
if (lean_obj_tag(v___x_2428_) == 0)
{
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2428_, 1);
v___x_2430_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2429_);
lean_dec(v_a_2429_);
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2430_, 1);
v___x_2432_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2417_);
v___x_2433_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(v___x_2432_, v_a_2431_);
lean_dec_ref(v___x_2432_);
return v___x_2433_;
}
else
{
lean_object* v_a_2434_; lean_object* v___x_2436_; uint8_t v_isShared_2437_; uint8_t v_isSharedCheck_2441_; 
v_a_2434_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2441_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2441_ == 0)
{
v___x_2436_ = v___x_2430_;
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
else
{
lean_inc(v_a_2434_);
lean_dec(v___x_2430_);
v___x_2436_ = lean_box(0);
v_isShared_2437_ = v_isSharedCheck_2441_;
goto v_resetjp_2435_;
}
v_resetjp_2435_:
{
lean_object* v___x_2439_; 
if (v_isShared_2437_ == 0)
{
v___x_2439_ = v___x_2436_;
goto v_reusejp_2438_;
}
else
{
lean_object* v_reuseFailAlloc_2440_; 
v_reuseFailAlloc_2440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2440_, 0, v_a_2434_);
v___x_2439_ = v_reuseFailAlloc_2440_;
goto v_reusejp_2438_;
}
v_reusejp_2438_:
{
return v___x_2439_;
}
}
}
}
else
{
lean_object* v_a_2442_; lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
v_a_2442_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2449_ == 0)
{
v___x_2444_ = v___x_2428_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_inc(v_a_2442_);
lean_dec(v___x_2428_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
lean_ctor_set_tag(v___x_2444_, 1);
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2442_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
}
else
{
lean_object* v_a_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2465_; 
v_a_2450_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2465_ == 0)
{
v___x_2452_ = v___x_2428_;
v_isShared_2453_ = v_isSharedCheck_2465_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_a_2450_);
lean_dec(v___x_2428_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2465_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2454_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_2455_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2417_);
v___x_2456_ = lean_string_append(v___x_2454_, v___x_2455_);
lean_dec_ref(v___x_2455_);
v___x_2457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4));
v___x_2458_ = lean_string_append(v___x_2456_, v___x_2457_);
v___x_2459_ = lean_io_error_to_string(v_a_2450_);
v___x_2460_ = lean_string_append(v___x_2458_, v___x_2459_);
lean_dec_ref(v___x_2459_);
v___x_2461_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2461_, 0, v___x_2460_);
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 0, v___x_2461_);
v___x_2463_ = v___x_2452_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v___x_2461_);
v___x_2463_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
return v___x_2463_;
}
}
}
}
v___jp_2467_:
{
uint8_t v_construct_2469_; uint64_t v___x_2470_; 
v_construct_2469_ = lean_ctor_get_uint8(v_b_2417_, sizeof(void*)*4);
v___x_2470_ = lean_uint64_lor(v___x_2466_, v___y_2468_);
if (v_construct_2469_ == 0)
{
uint64_t v___x_2471_; 
v___x_2471_ = 0ULL;
v___y_2422_ = v___x_2470_;
v___y_2423_ = v___x_2471_;
goto v___jp_2421_;
}
else
{
uint64_t v___x_2472_; 
v___x_2472_ = 4ULL;
v___y_2422_ = v___x_2470_;
v___y_2423_ = v___x_2472_;
goto v___jp_2421_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0___boxed(lean_object* v_b_2475_, lean_object* v_args_2476_, lean_object* v_await_2477_, lean_object* v_a_2478_){
_start:
{
uint8_t v_await_boxed_2479_; lean_object* v_res_2480_; 
v_await_boxed_2479_ = lean_unbox(v_await_2477_);
v_res_2480_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(v_b_2475_, v_args_2476_, v_await_boxed_2479_);
lean_dec_ref(v_b_2475_);
return v_res_2480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(lean_object* v_v_2490_){
_start:
{
uint8_t v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2492_ = 0;
v___x_2493_ = lean_unsigned_to_nat(1u);
v___x_2494_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__3));
v___x_2495_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2496_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2496_, 0, v_v_2490_);
lean_ctor_set(v___x_2496_, 1, v___x_2495_);
v___x_2497_ = lean_mk_empty_array_with_capacity(v___x_2493_);
v___x_2498_ = lean_array_push(v___x_2497_, v___x_2496_);
v___x_2499_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(v___x_2494_, v___x_2498_, v___x_2492_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v_a_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2507_; 
v_a_2500_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2507_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2507_ == 0)
{
v___x_2502_ = v___x_2499_;
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_a_2500_);
lean_dec(v___x_2499_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2507_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2505_; 
if (v_isShared_2503_ == 0)
{
v___x_2505_ = v___x_2502_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v_a_2500_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
else
{
lean_object* v_a_2508_; lean_object* v___x_2510_; uint8_t v_isShared_2511_; uint8_t v_isSharedCheck_2515_; 
v_a_2508_ = lean_ctor_get(v___x_2499_, 0);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2499_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2510_ = v___x_2499_;
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
else
{
lean_inc(v_a_2508_);
lean_dec(v___x_2499_);
v___x_2510_ = lean_box(0);
v_isShared_2511_ = v_isSharedCheck_2515_;
goto v_resetjp_2509_;
}
v_resetjp_2509_:
{
lean_object* v___x_2513_; 
if (v_isShared_2511_ == 0)
{
v___x_2513_ = v___x_2510_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_a_2508_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___boxed(lean_object* v_v_2516_, lean_object* v_a_2517_){
_start:
{
lean_object* v_res_2518_; 
v_res_2518_ = l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(v_v_2516_);
return v_res_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0(lean_object* v_x_2519_){
_start:
{
lean_object* v_val_2522_; 
if (lean_obj_tag(v_x_2519_) == 0)
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2532_; 
v_a_2524_ = lean_ctor_get(v_x_2519_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v_x_2519_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2526_ = v_x_2519_;
v_isShared_2527_ = v_isSharedCheck_2532_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v_x_2519_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2532_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
return v___x_2530_;
}
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2546_; 
v_a_2533_ = lean_ctor_get(v_x_2519_, 0);
v_isSharedCheck_2546_ = !lean_is_exclusive(v_x_2519_);
if (v_isSharedCheck_2546_ == 0)
{
v___x_2535_ = v_x_2519_;
v_isShared_2536_ = v_isSharedCheck_2546_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_a_2533_);
lean_dec(v_x_2519_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2546_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2537_; 
v___x_2537_ = l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(v_a_2533_);
if (lean_obj_tag(v___x_2537_) == 0)
{
lean_object* v_a_2538_; lean_object* v___x_2540_; 
v_a_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2538_);
lean_dec_ref_known(v___x_2537_, 1);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v_a_2538_);
v___x_2540_ = v___x_2535_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2538_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
v_val_2522_ = v___x_2540_;
goto v___jp_2521_;
}
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; 
v_a_2542_ = lean_ctor_get(v___x_2537_, 0);
lean_inc(v_a_2542_);
lean_dec_ref_known(v___x_2537_, 1);
if (v_isShared_2536_ == 0)
{
lean_ctor_set_tag(v___x_2535_, 0);
lean_ctor_set(v___x_2535_, 0, v_a_2542_);
v___x_2544_ = v___x_2535_;
goto v_reusejp_2543_;
}
else
{
lean_object* v_reuseFailAlloc_2545_; 
v_reuseFailAlloc_2545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2545_, 0, v_a_2542_);
v___x_2544_ = v_reuseFailAlloc_2545_;
goto v_reusejp_2543_;
}
v_reusejp_2543_:
{
v_val_2522_ = v___x_2544_;
goto v___jp_2521_;
}
}
}
}
v___jp_2521_:
{
lean_object* v___x_2523_; 
v___x_2523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2523_, 0, v_val_2522_);
return v___x_2523_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0___boxed(lean_object* v_x_2547_, lean_object* v___y_2548_){
_start:
{
lean_object* v_res_2549_; 
v_res_2549_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0(v_x_2547_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys(lean_object* v_self_2551_, lean_object* v_keys_2552_, lean_object* v_options_2553_){
_start:
{
lean_object* v___f_2555_; lean_object* v___x_2556_; size_t v_sz_2557_; size_t v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; uint8_t v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___f_2555_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_2556_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v_sz_2557_ = lean_array_size(v_keys_2552_);
v___x_2558_ = ((size_t)0ULL);
v___x_2559_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2557_, v___x_2558_, v_keys_2552_);
v___x_2560_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2559_);
v___x_2561_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_2553_);
v___x_2562_ = lean_unsigned_to_nat(2u);
v___x_2563_ = lean_mk_empty_array_with_capacity(v___x_2562_);
v___x_2564_ = lean_array_push(v___x_2563_, v___x_2560_);
v___x_2565_ = lean_array_push(v___x_2564_, v___x_2561_);
v___x_2566_ = l_Lasm_JS_Web_Support_args(v___x_2565_);
v___x_2567_ = lean_unsigned_to_nat(0u);
v___x_2568_ = 0;
v___x_2569_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2551_, v___x_2556_, v___x_2566_);
v___x_2570_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2567_, v___x_2568_, v___x_2569_, v___f_2555_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___boxed(lean_object* v_self_2571_, lean_object* v_keys_2572_, lean_object* v_options_2573_, lean_object* v_a_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys(v_self_2571_, v_keys_2572_, v_options_2573_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(lean_object* v_x_2576_){
_start:
{
if (lean_obj_tag(v_x_2576_) == 0)
{
lean_object* v___x_2577_; 
v___x_2577_ = lean_box(0);
return v___x_2577_;
}
else
{
lean_object* v_val_2578_; lean_object* v_start_2579_; lean_object* v_startAfter_2580_; lean_object* v_end_2581_; lean_object* v_prefix_2582_; lean_object* v_reverse_2583_; lean_object* v_limit_2584_; lean_object* v_allowConcurrency_2585_; lean_object* v_noCache_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v_val_2578_ = lean_ctor_get(v_x_2576_, 0);
lean_inc(v_val_2578_);
lean_dec_ref_known(v_x_2576_, 1);
v_start_2579_ = lean_ctor_get(v_val_2578_, 0);
lean_inc(v_start_2579_);
v_startAfter_2580_ = lean_ctor_get(v_val_2578_, 1);
lean_inc(v_startAfter_2580_);
v_end_2581_ = lean_ctor_get(v_val_2578_, 2);
lean_inc(v_end_2581_);
v_prefix_2582_ = lean_ctor_get(v_val_2578_, 3);
lean_inc(v_prefix_2582_);
v_reverse_2583_ = lean_ctor_get(v_val_2578_, 4);
lean_inc(v_reverse_2583_);
v_limit_2584_ = lean_ctor_get(v_val_2578_, 5);
lean_inc(v_limit_2584_);
v_allowConcurrency_2585_ = lean_ctor_get(v_val_2578_, 6);
lean_inc(v_allowConcurrency_2585_);
v_noCache_2586_ = lean_ctor_get(v_val_2578_, 7);
lean_inc(v_noCache_2586_);
lean_dec(v_val_2578_);
v___x_2587_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0));
v___x_2588_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_start_2579_);
v___x_2589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2587_);
lean_ctor_set(v___x_2589_, 1, v___x_2588_);
v___x_2590_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1));
v___x_2591_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_startAfter_2580_);
v___x_2592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2590_);
lean_ctor_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2));
v___x_2594_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_end_2581_);
v___x_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2593_);
lean_ctor_set(v___x_2595_, 1, v___x_2594_);
v___x_2596_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3));
v___x_2597_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_2582_);
v___x_2598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2596_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4));
v___x_2600_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reverse_2583_);
lean_dec(v_reverse_2583_);
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2599_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5));
v___x_2603_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_limit_2584_);
lean_dec(v_limit_2584_);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2602_);
lean_ctor_set(v___x_2604_, 1, v___x_2603_);
v___x_2605_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2606_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2585_);
lean_dec(v_allowConcurrency_2585_);
v___x_2607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2605_);
lean_ctor_set(v___x_2607_, 1, v___x_2606_);
v___x_2608_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2609_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2586_);
lean_dec(v_noCache_2586_);
v___x_2610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2608_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
v___x_2611_ = lean_unsigned_to_nat(8u);
v___x_2612_ = lean_mk_empty_array_with_capacity(v___x_2611_);
v___x_2613_ = lean_array_push(v___x_2612_, v___x_2589_);
v___x_2614_ = lean_array_push(v___x_2613_, v___x_2592_);
v___x_2615_ = lean_array_push(v___x_2614_, v___x_2595_);
v___x_2616_ = lean_array_push(v___x_2615_, v___x_2598_);
v___x_2617_ = lean_array_push(v___x_2616_, v___x_2601_);
v___x_2618_ = lean_array_push(v___x_2617_, v___x_2604_);
v___x_2619_ = lean_array_push(v___x_2618_, v___x_2607_);
v___x_2620_ = lean_array_push(v___x_2619_, v___x_2610_);
v___x_2621_ = l_Lasm_JS_Web_Support_fields(v___x_2620_);
lean_dec_ref(v___x_2620_);
return v___x_2621_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list(lean_object* v_self_2623_, lean_object* v_options_2624_){
_start:
{
lean_object* v___f_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; uint8_t v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___f_2626_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_2627_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0));
v___x_2628_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(v_options_2624_);
v___x_2629_ = lean_unsigned_to_nat(1u);
v___x_2630_ = lean_mk_empty_array_with_capacity(v___x_2629_);
v___x_2631_ = lean_array_push(v___x_2630_, v___x_2628_);
v___x_2632_ = l_Lasm_JS_Web_Support_args(v___x_2631_);
v___x_2633_ = lean_unsigned_to_nat(0u);
v___x_2634_ = 0;
v___x_2635_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2623_, v___x_2627_, v___x_2632_);
v___x_2636_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2633_, v___x_2634_, v___x_2635_, v___f_2626_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list___boxed(lean_object* v_self_2637_, lean_object* v_options_2638_, lean_object* v_a_2639_){
_start:
{
lean_object* v_res_2640_; 
v_res_2640_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_list(v_self_2637_, v_options_2638_);
return v_res_2640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(lean_object* v_x_2641_){
_start:
{
if (lean_obj_tag(v_x_2641_) == 0)
{
lean_object* v___x_2642_; 
v___x_2642_ = lean_box(0);
return v___x_2642_;
}
else
{
lean_object* v_val_2643_; lean_object* v_allowConcurrency_2644_; lean_object* v_allowUnconfirmed_2645_; lean_object* v_noCache_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v_val_2643_ = lean_ctor_get(v_x_2641_, 0);
v_allowConcurrency_2644_ = lean_ctor_get(v_val_2643_, 0);
v_allowUnconfirmed_2645_ = lean_ctor_get(v_val_2643_, 1);
v_noCache_2646_ = lean_ctor_get(v_val_2643_, 2);
v___x_2647_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2648_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2644_);
v___x_2649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2647_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_2651_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowUnconfirmed_2645_);
v___x_2652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2650_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2646_);
v___x_2655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2655_, 0, v___x_2653_);
lean_ctor_set(v___x_2655_, 1, v___x_2654_);
v___x_2656_ = lean_unsigned_to_nat(3u);
v___x_2657_ = lean_mk_empty_array_with_capacity(v___x_2656_);
v___x_2658_ = lean_array_push(v___x_2657_, v___x_2649_);
v___x_2659_ = lean_array_push(v___x_2658_, v___x_2652_);
v___x_2660_ = lean_array_push(v___x_2659_, v___x_2655_);
v___x_2661_ = l_Lasm_JS_Web_Support_fields(v___x_2660_);
lean_dec_ref(v___x_2660_);
return v___x_2661_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0___boxed(lean_object* v_x_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_x_2662_);
lean_dec(v_x_2662_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put(lean_object* v_self_2665_, lean_object* v_key_2666_, lean_object* v_value_2667_, lean_object* v_options_2668_){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; 
v___x_2670_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v___x_2671_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2671_, 0, v_key_2666_);
v___x_2672_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2668_);
v___x_2673_ = lean_unsigned_to_nat(3u);
v___x_2674_ = lean_mk_empty_array_with_capacity(v___x_2673_);
v___x_2675_ = lean_array_push(v___x_2674_, v___x_2671_);
v___x_2676_ = lean_array_push(v___x_2675_, v_value_2667_);
v___x_2677_ = lean_array_push(v___x_2676_, v___x_2672_);
v___x_2678_ = l_Lasm_JS_Web_Support_args(v___x_2677_);
v___x_2679_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2665_, v___x_2670_, v___x_2678_);
return v___x_2679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put___boxed(lean_object* v_self_2680_, lean_object* v_key_2681_, lean_object* v_value_2682_, lean_object* v_options_2683_, lean_object* v_a_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_put(v_self_2680_, v_key_2681_, v_value_2682_, v_options_2683_);
lean_dec(v_options_2683_);
return v_res_2685_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(size_t v_sz_2686_, size_t v_i_2687_, lean_object* v_bs_2688_){
_start:
{
uint8_t v___x_2689_; 
v___x_2689_ = lean_usize_dec_lt(v_i_2687_, v_sz_2686_);
if (v___x_2689_ == 0)
{
return v_bs_2688_;
}
else
{
lean_object* v_v_2690_; lean_object* v___x_2691_; lean_object* v_bs_x27_2692_; size_t v___x_2693_; size_t v___x_2694_; lean_object* v___x_2695_; 
v_v_2690_ = lean_array_uget(v_bs_2688_, v_i_2687_);
v___x_2691_ = lean_unsigned_to_nat(0u);
v_bs_x27_2692_ = lean_array_uset(v_bs_2688_, v_i_2687_, v___x_2691_);
v___x_2693_ = ((size_t)1ULL);
v___x_2694_ = lean_usize_add(v_i_2687_, v___x_2693_);
v___x_2695_ = lean_array_uset(v_bs_x27_2692_, v_i_2687_, v_v_2690_);
v_i_2687_ = v___x_2694_;
v_bs_2688_ = v___x_2695_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0___boxed(lean_object* v_sz_2697_, lean_object* v_i_2698_, lean_object* v_bs_2699_){
_start:
{
size_t v_sz_boxed_2700_; size_t v_i_boxed_2701_; lean_object* v_res_2702_; 
v_sz_boxed_2700_ = lean_unbox_usize(v_sz_2697_);
lean_dec(v_sz_2697_);
v_i_boxed_2701_ = lean_unbox_usize(v_i_2698_);
lean_dec(v_i_2698_);
v_res_2702_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_boxed_2700_, v_i_boxed_2701_, v_bs_2699_);
return v_res_2702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries(lean_object* v_self_2703_, lean_object* v_entries_2704_, lean_object* v_options_2705_){
_start:
{
lean_object* v___x_2707_; size_t v_sz_2708_; size_t v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2707_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v_sz_2708_ = lean_array_size(v_entries_2704_);
v___x_2709_ = ((size_t)0ULL);
v___x_2710_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_2708_, v___x_2709_, v_entries_2704_);
v___x_2711_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
v___x_2712_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2705_);
v___x_2713_ = lean_unsigned_to_nat(2u);
v___x_2714_ = lean_mk_empty_array_with_capacity(v___x_2713_);
v___x_2715_ = lean_array_push(v___x_2714_, v___x_2711_);
v___x_2716_ = lean_array_push(v___x_2715_, v___x_2712_);
v___x_2717_ = l_Lasm_JS_Web_Support_args(v___x_2716_);
v___x_2718_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2703_, v___x_2707_, v___x_2717_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries___boxed(lean_object* v_self_2719_, lean_object* v_entries_2720_, lean_object* v_options_2721_, lean_object* v_a_2722_){
_start:
{
lean_object* v_res_2723_; 
v_res_2723_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries(v_self_2719_, v_entries_2720_, v_options_2721_);
lean_dec(v_options_2721_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete(lean_object* v_self_2725_, lean_object* v_key_2726_, lean_object* v_options_2727_){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v___x_2729_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v___x_2730_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2730_, 0, v_key_2726_);
v___x_2731_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2727_);
v___x_2732_ = lean_unsigned_to_nat(2u);
v___x_2733_ = lean_mk_empty_array_with_capacity(v___x_2732_);
v___x_2734_ = lean_array_push(v___x_2733_, v___x_2730_);
v___x_2735_ = lean_array_push(v___x_2734_, v___x_2731_);
v___x_2736_ = l_Lasm_JS_Web_Support_args(v___x_2735_);
v___x_2737_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_self_2725_, v___x_2729_, v___x_2736_);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___boxed(lean_object* v_self_2738_, lean_object* v_key_2739_, lean_object* v_options_2740_, lean_object* v_a_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_delete(v_self_2738_, v_key_2739_, v_options_2740_);
lean_dec(v_options_2740_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2(lean_object* v___f_2743_, lean_object* v_x_2744_){
_start:
{
if (lean_obj_tag(v_x_2744_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2754_; 
lean_dec_ref(v___f_2743_);
v_a_2746_ = lean_ctor_get(v_x_2744_, 0);
v_isSharedCheck_2754_ = !lean_is_exclusive(v_x_2744_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2748_ = v_x_2744_;
v_isShared_2749_ = v_isSharedCheck_2754_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v_x_2744_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2754_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
lean_object* v___x_2752_; 
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v___x_2751_);
return v___x_2752_;
}
}
}
else
{
lean_object* v_a_2755_; lean_object* v___x_2756_; 
v_a_2755_ = lean_ctor_get(v_x_2744_, 0);
lean_inc(v_a_2755_);
lean_dec_ref_known(v_x_2744_, 1);
v___x_2756_ = lean_apply_2(v___f_2743_, v_a_2755_, lean_box(0));
return v___x_2756_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2757_, lean_object* v_x_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2(v___f_2757_, v_x_2758_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3(lean_object* v_a_2761_, lean_object* v_x_2762_){
_start:
{
if (lean_obj_tag(v_x_2762_) == 0)
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2772_; 
v_a_2764_ = lean_ctor_get(v_x_2762_, 0);
v_isSharedCheck_2772_ = !lean_is_exclusive(v_x_2762_);
if (v_isSharedCheck_2772_ == 0)
{
v___x_2766_ = v_x_2762_;
v_isShared_2767_ = v_isSharedCheck_2772_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v_x_2762_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2772_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2771_; 
v_reuseFailAlloc_2771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2771_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2771_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2769_);
return v___x_2770_;
}
}
}
else
{
lean_object* v___x_2773_; 
lean_dec_ref_known(v_x_2762_, 1);
v___x_2773_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2761_);
return v___x_2773_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed(lean_object* v_a_2774_, lean_object* v_x_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v_res_2777_; 
v_res_2777_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3(v_a_2774_, v_x_2775_);
lean_dec(v_a_2774_);
return v_res_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7(lean_object* v___f_2778_, lean_object* v_a_2779_, uint32_t v_op_2780_, uint64_t v_flags_2781_, lean_object* v_payload_2782_, lean_object* v_x_2783_){
_start:
{
if (lean_obj_tag(v_x_2783_) == 0)
{
lean_object* v___x_2785_; 
lean_dec_ref(v___f_2778_);
v___x_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2785_, 0, v_x_2783_);
return v___x_2785_;
}
else
{
lean_object* v_a_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2806_; 
v_a_2786_ = lean_ctor_get(v_x_2783_, 0);
v_isSharedCheck_2806_ = !lean_is_exclusive(v_x_2783_);
if (v_isSharedCheck_2806_ == 0)
{
v___x_2788_ = v_x_2783_;
v_isShared_2789_ = v_isSharedCheck_2806_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_a_2786_);
lean_dec(v_x_2783_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2806_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
uint32_t v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; lean_object* v_val_2794_; lean_object* v___x_2797_; 
v___x_2790_ = 0;
v___x_2791_ = lean_unsigned_to_nat(0u);
v___x_2792_ = 0;
v___x_2797_ = lasm_js_call_into(v_a_2779_, v_op_2780_, v___x_2790_, v_flags_2781_, v_a_2786_, v_payload_2782_);
lean_dec(v_a_2786_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v_a_2798_; lean_object* v___x_2800_; 
v_a_2798_ = lean_ctor_get(v___x_2797_, 0);
lean_inc(v_a_2798_);
lean_dec_ref_known(v___x_2797_, 1);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 0, v_a_2798_);
v___x_2800_ = v___x_2788_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2798_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
v_val_2794_ = v___x_2800_;
goto v___jp_2793_;
}
}
else
{
lean_object* v_a_2802_; lean_object* v___x_2804_; 
v_a_2802_ = lean_ctor_get(v___x_2797_, 0);
lean_inc(v_a_2802_);
lean_dec_ref_known(v___x_2797_, 1);
if (v_isShared_2789_ == 0)
{
lean_ctor_set_tag(v___x_2788_, 0);
lean_ctor_set(v___x_2788_, 0, v_a_2802_);
v___x_2804_ = v___x_2788_;
goto v_reusejp_2803_;
}
else
{
lean_object* v_reuseFailAlloc_2805_; 
v_reuseFailAlloc_2805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2805_, 0, v_a_2802_);
v___x_2804_ = v_reuseFailAlloc_2805_;
goto v_reusejp_2803_;
}
v_reusejp_2803_:
{
v_val_2794_ = v___x_2804_;
goto v___jp_2793_;
}
}
v___jp_2793_:
{
lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2795_, 0, v_val_2794_);
v___x_2796_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2791_, v___x_2792_, v___x_2795_, v___f_2778_);
return v___x_2796_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed(lean_object* v___f_2807_, lean_object* v_a_2808_, lean_object* v_op_2809_, lean_object* v_flags_2810_, lean_object* v_payload_2811_, lean_object* v_x_2812_, lean_object* v___y_2813_){
_start:
{
uint32_t v_op_boxed_2814_; uint64_t v_flags_boxed_2815_; lean_object* v_res_2816_; 
v_op_boxed_2814_ = lean_unbox_uint32(v_op_2809_);
lean_dec(v_op_2809_);
v_flags_boxed_2815_ = lean_unbox_uint64(v_flags_2810_);
lean_dec_ref(v_flags_2810_);
v_res_2816_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7(v___f_2807_, v_a_2808_, v_op_boxed_2814_, v_flags_boxed_2815_, v_payload_2811_, v_x_2812_);
lean_dec(v_payload_2811_);
lean_dec(v_a_2808_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5(lean_object* v___x_2817_, uint8_t v___x_2818_, lean_object* v___f_2819_, lean_object* v_a_2820_, uint32_t v_op_2821_, uint64_t v_flags_2822_, lean_object* v_payload_2823_, lean_object* v_x_2824_){
_start:
{
lean_object* v_val_2827_; 
if (lean_obj_tag(v_x_2824_) == 0)
{
lean_object* v___x_2830_; 
lean_dec_ref(v___f_2819_);
lean_dec(v___x_2817_);
v___x_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2830_, 0, v_x_2824_);
return v___x_2830_;
}
else
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2845_; 
v_a_2831_ = lean_ctor_get(v_x_2824_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v_x_2824_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2833_ = v_x_2824_;
v_isShared_2834_ = v_isSharedCheck_2845_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v_x_2824_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2845_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
uint32_t v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = 0;
v___x_2836_ = lasm_js_call_into(v_a_2820_, v_op_2821_, v___x_2835_, v_flags_2822_, v_a_2831_, v_payload_2823_);
lean_dec(v_a_2831_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; lean_object* v___x_2839_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2836_, 1);
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 0, v_a_2837_);
v___x_2839_ = v___x_2833_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2837_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
v_val_2827_ = v___x_2839_;
goto v___jp_2826_;
}
}
else
{
lean_object* v_a_2841_; lean_object* v___x_2843_; 
v_a_2841_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2841_);
lean_dec_ref_known(v___x_2836_, 1);
if (v_isShared_2834_ == 0)
{
lean_ctor_set_tag(v___x_2833_, 0);
lean_ctor_set(v___x_2833_, 0, v_a_2841_);
v___x_2843_ = v___x_2833_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2841_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
v_val_2827_ = v___x_2843_;
goto v___jp_2826_;
}
}
}
}
v___jp_2826_:
{
lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2828_, 0, v_val_2827_);
v___x_2829_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2817_, v___x_2818_, v___x_2828_, v___f_2819_);
return v___x_2829_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed(lean_object* v___x_2846_, lean_object* v___x_2847_, lean_object* v___f_2848_, lean_object* v_a_2849_, lean_object* v_op_2850_, lean_object* v_flags_2851_, lean_object* v_payload_2852_, lean_object* v_x_2853_, lean_object* v___y_2854_){
_start:
{
uint8_t v___x_890__boxed_2855_; uint32_t v_op_boxed_2856_; uint64_t v_flags_boxed_2857_; lean_object* v_res_2858_; 
v___x_890__boxed_2855_ = lean_unbox(v___x_2847_);
v_op_boxed_2856_ = lean_unbox_uint32(v_op_2850_);
lean_dec(v_op_2850_);
v_flags_boxed_2857_ = lean_unbox_uint64(v_flags_2851_);
lean_dec_ref(v_flags_2851_);
v_res_2858_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5(v___x_2846_, v___x_890__boxed_2855_, v___f_2848_, v_a_2849_, v_op_boxed_2856_, v_flags_boxed_2857_, v_payload_2852_, v_x_2853_);
lean_dec(v_payload_2852_);
lean_dec(v_a_2849_);
return v_res_2858_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_2859_, uint32_t v_op_2860_, uint64_t v_flags_2861_, lean_object* v_payload_2862_, lean_object* v___f_2863_, lean_object* v___f_2864_, lean_object* v___f_2865_, lean_object* v_x_2866_){
_start:
{
if (lean_obj_tag(v_x_2866_) == 0)
{
lean_object* v_a_2868_; lean_object* v___x_2870_; uint8_t v_isShared_2871_; uint8_t v_isSharedCheck_2876_; 
lean_dec_ref(v___f_2865_);
lean_dec_ref(v___f_2864_);
lean_dec_ref(v___f_2863_);
lean_dec(v_payload_2862_);
v_a_2868_ = lean_ctor_get(v_x_2866_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v_x_2866_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2870_ = v_x_2866_;
v_isShared_2871_ = v_isSharedCheck_2876_;
goto v_resetjp_2869_;
}
else
{
lean_inc(v_a_2868_);
lean_dec(v_x_2866_);
v___x_2870_ = lean_box(0);
v_isShared_2871_ = v_isSharedCheck_2876_;
goto v_resetjp_2869_;
}
v_resetjp_2869_:
{
lean_object* v___x_2873_; 
if (v_isShared_2871_ == 0)
{
v___x_2873_ = v___x_2870_;
goto v_reusejp_2872_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2868_);
v___x_2873_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2872_;
}
v_reusejp_2872_:
{
lean_object* v___x_2874_; 
v___x_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
return v___x_2874_;
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2923_; 
v_a_2877_ = lean_ctor_get(v_x_2866_, 0);
v_isSharedCheck_2923_ = !lean_is_exclusive(v_x_2866_);
if (v_isSharedCheck_2923_ == 0)
{
v___x_2879_ = v_x_2866_;
v_isShared_2880_ = v_isSharedCheck_2923_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v_x_2866_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2923_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; uint8_t v___x_2883_; 
v___x_2881_ = lean_string_utf8_byte_size(v_failurePrefix_2859_);
v___x_2882_ = lean_unsigned_to_nat(0u);
v___x_2883_ = lean_nat_dec_eq(v___x_2881_, v___x_2882_);
if (v___x_2883_ == 0)
{
lean_object* v___f_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___f_2888_; lean_object* v_val_2890_; lean_object* v___x_2895_; 
lean_dec_ref(v___f_2865_);
lean_inc(v_a_2877_);
v___f_2884_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2884_, 0, v_a_2877_);
v___x_2885_ = lean_box(v___x_2883_);
v___x_2886_ = lean_box_uint32(v_op_2860_);
v___x_2887_ = lean_box_uint64(v_flags_2861_);
lean_inc(v_payload_2862_);
v___f_2888_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2888_, 0, v___x_2882_);
lean_closure_set(v___f_2888_, 1, v___x_2885_);
lean_closure_set(v___f_2888_, 2, v___f_2884_);
lean_closure_set(v___f_2888_, 3, v_a_2877_);
lean_closure_set(v___f_2888_, 4, v___x_2886_);
lean_closure_set(v___f_2888_, 5, v___x_2887_);
lean_closure_set(v___f_2888_, 6, v_payload_2862_);
v___x_2895_ = l_Lasm_JS_Wire_encodeIO(v_payload_2862_);
lean_dec(v_payload_2862_);
if (lean_obj_tag(v___x_2895_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2898_; 
v_a_2896_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2896_);
lean_dec_ref_known(v___x_2895_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v_a_2896_);
v___x_2898_ = v___x_2879_;
goto v_reusejp_2897_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v_a_2896_);
v___x_2898_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2897_;
}
v_reusejp_2897_:
{
v_val_2890_ = v___x_2898_;
goto v___jp_2889_;
}
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; 
v_a_2900_ = lean_ctor_get(v___x_2895_, 0);
lean_inc(v_a_2900_);
lean_dec_ref_known(v___x_2895_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set_tag(v___x_2879_, 0);
lean_ctor_set(v___x_2879_, 0, v_a_2900_);
v___x_2902_ = v___x_2879_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2900_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
v_val_2890_ = v___x_2902_;
goto v___jp_2889_;
}
}
v___jp_2889_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2891_, 0, v_val_2890_);
v___x_2892_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2883_, v___x_2891_, v___f_2888_);
v___x_2893_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2883_, v___x_2892_, v___f_2863_);
v___x_2894_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2883_, v___x_2893_, v___f_2864_);
return v___x_2894_;
}
}
else
{
lean_object* v___f_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___f_2907_; uint8_t v___x_2908_; lean_object* v_val_2910_; lean_object* v___x_2914_; 
lean_dec_ref(v___f_2864_);
lean_dec_ref(v___f_2863_);
lean_inc(v_a_2877_);
v___f_2904_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2904_, 0, v_a_2877_);
v___x_2905_ = lean_box_uint32(v_op_2860_);
v___x_2906_ = lean_box_uint64(v_flags_2861_);
lean_inc(v_payload_2862_);
v___f_2907_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2907_, 0, v___f_2904_);
lean_closure_set(v___f_2907_, 1, v_a_2877_);
lean_closure_set(v___f_2907_, 2, v___x_2905_);
lean_closure_set(v___f_2907_, 3, v___x_2906_);
lean_closure_set(v___f_2907_, 4, v_payload_2862_);
v___x_2908_ = 0;
v___x_2914_ = l_Lasm_JS_Wire_encodeIO(v_payload_2862_);
lean_dec(v_payload_2862_);
if (lean_obj_tag(v___x_2914_) == 0)
{
lean_object* v_a_2915_; lean_object* v___x_2917_; 
v_a_2915_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2915_);
lean_dec_ref_known(v___x_2914_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set(v___x_2879_, 0, v_a_2915_);
v___x_2917_ = v___x_2879_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2915_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
v_val_2910_ = v___x_2917_;
goto v___jp_2909_;
}
}
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; 
v_a_2919_ = lean_ctor_get(v___x_2914_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2914_, 1);
if (v_isShared_2880_ == 0)
{
lean_ctor_set_tag(v___x_2879_, 0);
lean_ctor_set(v___x_2879_, 0, v_a_2919_);
v___x_2921_ = v___x_2879_;
goto v_reusejp_2920_;
}
else
{
lean_object* v_reuseFailAlloc_2922_; 
v_reuseFailAlloc_2922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2922_, 0, v_a_2919_);
v___x_2921_ = v_reuseFailAlloc_2922_;
goto v_reusejp_2920_;
}
v_reusejp_2920_:
{
v_val_2910_ = v___x_2921_;
goto v___jp_2909_;
}
}
v___jp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; 
v___x_2911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2911_, 0, v_val_2910_);
v___x_2912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2908_, v___x_2911_, v___f_2907_);
v___x_2913_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2882_, v___x_2908_, v___x_2912_, v___f_2865_);
return v___x_2913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_2924_, lean_object* v_op_2925_, lean_object* v_flags_2926_, lean_object* v_payload_2927_, lean_object* v___f_2928_, lean_object* v___f_2929_, lean_object* v___f_2930_, lean_object* v_x_2931_, lean_object* v___y_2932_){
_start:
{
uint32_t v_op_boxed_2933_; uint64_t v_flags_boxed_2934_; lean_object* v_res_2935_; 
v_op_boxed_2933_ = lean_unbox_uint32(v_op_2925_);
lean_dec(v_op_2925_);
v_flags_boxed_2934_ = lean_unbox_uint64(v_flags_2926_);
lean_dec_ref(v_flags_2926_);
v_res_2935_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6(v_failurePrefix_2924_, v_op_boxed_2933_, v_flags_boxed_2934_, v_payload_2927_, v___f_2928_, v___f_2929_, v___f_2930_, v_x_2931_);
lean_dec_ref(v_failurePrefix_2924_);
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1(lean_object* v___f_2936_, lean_object* v_bytes_2937_){
_start:
{
lean_object* v___x_2939_; uint8_t v___x_2940_; lean_object* v_val_2942_; lean_object* v___x_2945_; 
v___x_2939_ = lean_unsigned_to_nat(0u);
v___x_2940_ = 0;
v___x_2945_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2937_);
if (lean_obj_tag(v___x_2945_) == 0)
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
v_a_2946_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___x_2945_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2945_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
lean_ctor_set_tag(v___x_2948_, 1);
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
v_val_2942_ = v___x_2951_;
goto v___jp_2941_;
}
}
}
else
{
lean_object* v_a_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2961_; 
v_a_2954_ = lean_ctor_get(v___x_2945_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2945_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2956_ = v___x_2945_;
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_a_2954_);
lean_dec(v___x_2945_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2961_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___x_2959_; 
if (v_isShared_2957_ == 0)
{
lean_ctor_set_tag(v___x_2956_, 0);
v___x_2959_ = v___x_2956_;
goto v_reusejp_2958_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_a_2954_);
v___x_2959_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2958_;
}
v_reusejp_2958_:
{
v_val_2942_ = v___x_2959_;
goto v___jp_2941_;
}
}
}
v___jp_2941_:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; 
v___x_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2943_, 0, v_val_2942_);
v___x_2944_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2939_, v___x_2940_, v___x_2943_, v___f_2936_);
return v___x_2944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2962_, lean_object* v_bytes_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1(v___f_2962_, v_bytes_2963_);
lean_dec_ref(v_bytes_2963_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8(lean_object* v___f_2966_, lean_object* v_x_2967_){
_start:
{
if (lean_obj_tag(v_x_2967_) == 0)
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2977_; 
lean_dec_ref(v___f_2966_);
v_a_2969_ = lean_ctor_get(v_x_2967_, 0);
v_isSharedCheck_2977_ = !lean_is_exclusive(v_x_2967_);
if (v_isSharedCheck_2977_ == 0)
{
v___x_2971_ = v_x_2967_;
v_isShared_2972_ = v_isSharedCheck_2977_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v_x_2967_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2977_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
lean_object* v___x_2975_; 
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v___x_2974_);
return v___x_2975_;
}
}
}
else
{
lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2989_; 
v_isSharedCheck_2989_ = !lean_is_exclusive(v_x_2967_);
if (v_isSharedCheck_2989_ == 0)
{
lean_object* v_unused_2990_; 
v_unused_2990_ = lean_ctor_get(v_x_2967_, 0);
lean_dec(v_unused_2990_);
v___x_2979_ = v_x_2967_;
v_isShared_2980_ = v_isSharedCheck_2989_;
goto v_resetjp_2978_;
}
else
{
lean_dec(v_x_2967_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2989_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2981_; uint8_t v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2985_; 
v___x_2981_ = lean_unsigned_to_nat(0u);
v___x_2982_ = 0;
v___x_2983_ = lean_io_promise_new();
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 0, v___x_2983_);
v___x_2985_ = v___x_2979_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v___x_2983_);
v___x_2985_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2985_);
v___x_2987_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2981_, v___x_2982_, v___x_2986_, v___f_2966_);
return v___x_2987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8___boxed(lean_object* v___f_2991_, lean_object* v_x_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v_res_2994_; 
v_res_2994_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8(v___f_2991_, v_x_2992_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_2995_, lean_object* v_x_2996_){
_start:
{
if (lean_obj_tag(v_x_2996_) == 0)
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3009_; 
v_a_2998_ = lean_ctor_get(v_x_2996_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v_x_2996_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3000_ = v_x_2996_;
v_isShared_3001_ = v_isSharedCheck_3009_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v_x_2996_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3009_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3006_; 
v___x_3002_ = lean_io_error_to_string(v_a_2998_);
v___x_3003_ = lean_string_append(v_failurePrefix_2995_, v___x_3002_);
lean_dec_ref(v___x_3002_);
v___x_3004_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3004_, 0, v___x_3003_);
if (v_isShared_3001_ == 0)
{
lean_ctor_set(v___x_3000_, 0, v___x_3004_);
v___x_3006_ = v___x_3000_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v___x_3004_);
v___x_3006_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3007_; 
v___x_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
return v___x_3007_;
}
}
}
else
{
lean_object* v___x_3010_; 
lean_dec_ref(v_failurePrefix_2995_);
v___x_3010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3010_, 0, v_x_2996_);
return v___x_3010_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_3011_, lean_object* v_x_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4(v_failurePrefix_3011_, v_x_3012_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0(lean_object* v_context_3015_, lean_object* v_x_3016_){
_start:
{
lean_object* v_val_3019_; 
if (lean_obj_tag(v_x_3016_) == 0)
{
lean_object* v_a_3021_; lean_object* v___x_3023_; uint8_t v_isShared_3024_; uint8_t v_isSharedCheck_3029_; 
v_a_3021_ = lean_ctor_get(v_x_3016_, 0);
v_isSharedCheck_3029_ = !lean_is_exclusive(v_x_3016_);
if (v_isSharedCheck_3029_ == 0)
{
v___x_3023_ = v_x_3016_;
v_isShared_3024_ = v_isSharedCheck_3029_;
goto v_resetjp_3022_;
}
else
{
lean_inc(v_a_3021_);
lean_dec(v_x_3016_);
v___x_3023_ = lean_box(0);
v_isShared_3024_ = v_isSharedCheck_3029_;
goto v_resetjp_3022_;
}
v_resetjp_3022_:
{
lean_object* v___x_3026_; 
if (v_isShared_3024_ == 0)
{
v___x_3026_ = v___x_3023_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v_a_3021_);
v___x_3026_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3027_; 
v___x_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3026_);
return v___x_3027_;
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3043_; 
v_a_3030_ = lean_ctor_get(v_x_3016_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v_x_3016_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3032_ = v_x_3016_;
v_isShared_3033_ = v_isSharedCheck_3043_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v_x_3016_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3043_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3034_; 
v___x_3034_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_3015_, v_a_3030_);
if (lean_obj_tag(v___x_3034_) == 0)
{
lean_object* v_a_3035_; lean_object* v___x_3037_; 
v_a_3035_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3035_);
lean_dec_ref_known(v___x_3034_, 1);
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v_a_3035_);
v___x_3037_ = v___x_3032_;
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
v_val_3019_ = v___x_3037_;
goto v___jp_3018_;
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; 
v_a_3039_ = lean_ctor_get(v___x_3034_, 0);
lean_inc(v_a_3039_);
lean_dec_ref_known(v___x_3034_, 1);
if (v_isShared_3033_ == 0)
{
lean_ctor_set_tag(v___x_3032_, 0);
lean_ctor_set(v___x_3032_, 0, v_a_3039_);
v___x_3041_ = v___x_3032_;
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
v_val_3019_ = v___x_3041_;
goto v___jp_3018_;
}
}
}
}
v___jp_3018_:
{
lean_object* v___x_3020_; 
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v_val_3019_);
return v___x_3020_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3044_, lean_object* v_x_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0(v_context_3044_, v_x_3045_);
lean_dec_ref(v_context_3044_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(lean_object* v_context_3048_, uint32_t v_op_3049_, uint64_t v_flags_3050_, lean_object* v_payload_3051_, lean_object* v_failurePrefix_3052_){
_start:
{
lean_object* v___f_3054_; lean_object* v___f_3055_; lean_object* v___f_3056_; lean_object* v___f_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___f_3060_; lean_object* v___f_3061_; lean_object* v___x_3062_; uint8_t v___x_3063_; lean_object* v_val_3065_; lean_object* v___x_3068_; 
v___f_3054_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3054_, 0, v_context_3048_);
v___f_3055_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3055_, 0, v___f_3054_);
v___f_3056_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3056_, 0, v___f_3055_);
lean_inc_ref(v_failurePrefix_3052_);
v___f_3057_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3057_, 0, v_failurePrefix_3052_);
v___x_3058_ = lean_box_uint32(v_op_3049_);
v___x_3059_ = lean_box_uint64(v_flags_3050_);
lean_inc_ref(v___f_3056_);
v___f_3060_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3060_, 0, v_failurePrefix_3052_);
lean_closure_set(v___f_3060_, 1, v___x_3058_);
lean_closure_set(v___f_3060_, 2, v___x_3059_);
lean_closure_set(v___f_3060_, 3, v_payload_3051_);
lean_closure_set(v___f_3060_, 4, v___f_3057_);
lean_closure_set(v___f_3060_, 5, v___f_3056_);
lean_closure_set(v___f_3060_, 6, v___f_3056_);
v___f_3061_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3061_, 0, v___f_3060_);
v___x_3062_ = lean_unsigned_to_nat(0u);
v___x_3063_ = 0;
v___x_3068_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3068_) == 0)
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3076_; 
v_a_3069_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3071_ = v___x_3068_;
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_3068_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
lean_ctor_set_tag(v___x_3071_, 1);
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3069_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
v_val_3065_ = v___x_3074_;
goto v___jp_3064_;
}
}
}
else
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3084_; 
v_a_3077_ = lean_ctor_get(v___x_3068_, 0);
v_isSharedCheck_3084_ = !lean_is_exclusive(v___x_3068_);
if (v_isSharedCheck_3084_ == 0)
{
v___x_3079_ = v___x_3068_;
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3068_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3084_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___x_3082_; 
if (v_isShared_3080_ == 0)
{
lean_ctor_set_tag(v___x_3079_, 0);
v___x_3082_ = v___x_3079_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3083_; 
v_reuseFailAlloc_3083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3083_, 0, v_a_3077_);
v___x_3082_ = v_reuseFailAlloc_3083_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
v_val_3065_ = v___x_3082_;
goto v___jp_3064_;
}
}
}
v___jp_3064_:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3066_, 0, v_val_3065_);
v___x_3067_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3062_, v___x_3063_, v___x_3066_, v___f_3061_);
return v___x_3067_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___boxed(lean_object* v_context_3085_, lean_object* v_op_3086_, lean_object* v_flags_3087_, lean_object* v_payload_3088_, lean_object* v_failurePrefix_3089_, lean_object* v_a_3090_){
_start:
{
uint32_t v_op_boxed_3091_; uint64_t v_flags_boxed_3092_; lean_object* v_res_3093_; 
v_op_boxed_3091_ = lean_unbox_uint32(v_op_3086_);
lean_dec(v_op_3086_);
v_flags_boxed_3092_ = lean_unbox_uint64(v_flags_3087_);
lean_dec_ref(v_flags_3087_);
v_res_3093_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(v_context_3085_, v_op_boxed_3091_, v_flags_boxed_3092_, v_payload_3088_, v_failurePrefix_3089_);
return v_res_3093_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(uint8_t v_await_3094_, uint64_t v_extra_3095_){
_start:
{
uint64_t v___x_3096_; uint64_t v___y_3098_; 
v___x_3096_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_3094_ == 0)
{
uint64_t v___x_3101_; 
v___x_3101_ = 0ULL;
v___y_3098_ = v___x_3101_;
goto v___jp_3097_;
}
else
{
uint64_t v___x_3102_; 
v___x_3102_ = 2ULL;
v___y_3098_ = v___x_3102_;
goto v___jp_3097_;
}
v___jp_3097_:
{
uint64_t v___x_3099_; uint64_t v___x_3100_; 
v___x_3099_ = lean_uint64_lor(v___x_3096_, v___y_3098_);
v___x_3100_ = lean_uint64_lor(v___x_3099_, v_extra_3095_);
return v___x_3100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0___boxed(lean_object* v_await_3103_, lean_object* v_extra_3104_){
_start:
{
uint8_t v_await_boxed_3105_; uint64_t v_extra_boxed_3106_; uint64_t v_res_3107_; lean_object* v_r_3108_; 
v_await_boxed_3105_ = lean_unbox(v_await_3103_);
v_extra_boxed_3106_ = lean_unbox_uint64(v_extra_3104_);
lean_dec_ref(v_extra_3104_);
v_res_3107_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(v_await_boxed_3105_, v_extra_boxed_3106_);
v_r_3108_ = lean_box_uint64(v_res_3107_);
return v_r_3108_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1(void){
_start:
{
uint64_t v___x_3110_; uint8_t v___x_3111_; uint64_t v___x_3112_; 
v___x_3110_ = 8ULL;
v___x_3111_ = 0;
v___x_3112_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(v___x_3111_, v___x_3110_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(lean_object* v_o_3113_, lean_object* v_name_3114_, lean_object* v_args_3115_){
_start:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; uint32_t v___x_3122_; uint64_t v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3117_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3118_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3118_, 0, v_o_3113_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
lean_inc_ref(v_name_3114_);
v___x_3119_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3119_, 0, v_name_3114_);
v___x_3120_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0));
v___x_3121_ = lean_string_append(v___x_3120_, v_name_3114_);
lean_dec_ref(v_name_3114_);
v___x_3122_ = 205;
v___x_3123_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1);
v___x_3124_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3124_, 0, v_args_3115_);
v___x_3125_ = lean_unsigned_to_nat(3u);
v___x_3126_ = lean_mk_empty_array_with_capacity(v___x_3125_);
v___x_3127_ = lean_array_push(v___x_3126_, v___x_3118_);
v___x_3128_ = lean_array_push(v___x_3127_, v___x_3119_);
v___x_3129_ = lean_array_push(v___x_3128_, v___x_3124_);
v___x_3130_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3129_);
v___x_3131_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(v___x_3121_, v___x_3122_, v___x_3123_, v___x_3130_, v___x_3117_);
return v___x_3131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___boxed(lean_object* v_o_3132_, lean_object* v_name_3133_, lean_object* v_args_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_o_3132_, v_name_3133_, v_args_3134_);
return v_res_3136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys(lean_object* v_self_3137_, lean_object* v_keys_3138_, lean_object* v_options_3139_){
_start:
{
lean_object* v___x_3141_; size_t v_sz_3142_; size_t v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; 
v___x_3141_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v_sz_3142_ = lean_array_size(v_keys_3138_);
v___x_3143_ = ((size_t)0ULL);
v___x_3144_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3142_, v___x_3143_, v_keys_3138_);
v___x_3145_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
v___x_3146_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3139_);
v___x_3147_ = lean_unsigned_to_nat(2u);
v___x_3148_ = lean_mk_empty_array_with_capacity(v___x_3147_);
v___x_3149_ = lean_array_push(v___x_3148_, v___x_3145_);
v___x_3150_ = lean_array_push(v___x_3149_, v___x_3146_);
v___x_3151_ = l_Lasm_JS_Web_Support_args(v___x_3150_);
v___x_3152_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_self_3137_, v___x_3141_, v___x_3151_);
return v___x_3152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys___boxed(lean_object* v_self_3153_, lean_object* v_keys_3154_, lean_object* v_options_3155_, lean_object* v_a_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys(v_self_3153_, v_keys_3154_, v_options_3155_);
lean_dec(v_options_3155_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll(lean_object* v_self_3159_, lean_object* v_options_3160_){
_start:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3162_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___closed__0));
v___x_3163_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3160_);
v___x_3164_ = lean_unsigned_to_nat(1u);
v___x_3165_ = lean_mk_empty_array_with_capacity(v___x_3164_);
v___x_3166_ = lean_array_push(v___x_3165_, v___x_3163_);
v___x_3167_ = l_Lasm_JS_Web_Support_args(v___x_3166_);
v___x_3168_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3159_, v___x_3162_, v___x_3167_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___boxed(lean_object* v_self_3169_, lean_object* v_options_3170_, lean_object* v_a_3171_){
_start:
{
lean_object* v_res_3172_; 
v_res_3172_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll(v_self_3169_, v_options_3170_);
lean_dec(v_options_3170_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction(lean_object* v_self_3174_, lean_object* v_closure_3175_){
_start:
{
lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3177_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___closed__0));
v___x_3178_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3179_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3179_, 0, v_closure_3175_);
lean_ctor_set(v___x_3179_, 1, v___x_3178_);
v___x_3180_ = lean_unsigned_to_nat(1u);
v___x_3181_ = lean_mk_empty_array_with_capacity(v___x_3180_);
v___x_3182_ = lean_array_push(v___x_3181_, v___x_3179_);
v___x_3183_ = l_Lasm_JS_Web_Support_args(v___x_3182_);
v___x_3184_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_3174_, v___x_3177_, v___x_3183_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___boxed(lean_object* v_self_3185_, lean_object* v_closure_3186_, lean_object* v_a_3187_){
_start:
{
lean_object* v_res_3188_; 
v_res_3188_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction(v_self_3185_, v_closure_3186_);
return v_res_3188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(lean_object* v_x_3189_){
_start:
{
if (lean_obj_tag(v_x_3189_) == 0)
{
lean_object* v___x_3190_; 
v___x_3190_ = lean_box(0);
return v___x_3190_;
}
else
{
lean_object* v_val_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v_val_3191_ = lean_ctor_get(v_x_3189_, 0);
v___x_3192_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_3193_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_3191_);
v___x_3194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3192_);
lean_ctor_set(v___x_3194_, 1, v___x_3193_);
v___x_3195_ = lean_unsigned_to_nat(1u);
v___x_3196_ = lean_mk_empty_array_with_capacity(v___x_3195_);
v___x_3197_ = lean_array_push(v___x_3196_, v___x_3194_);
v___x_3198_ = l_Lasm_JS_Web_Support_fields(v___x_3197_);
lean_dec_ref(v___x_3197_);
return v___x_3198_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0___boxed(lean_object* v_x_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_x_3199_);
lean_dec(v_x_3199_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2(lean_object* v___f_3201_, lean_object* v_x_3202_){
_start:
{
if (lean_obj_tag(v_x_3202_) == 0)
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3212_; 
lean_dec_ref(v___f_3201_);
v_a_3204_ = lean_ctor_get(v_x_3202_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v_x_3202_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3206_ = v_x_3202_;
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v_x_3202_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
lean_object* v___x_3210_; 
v___x_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3210_, 0, v___x_3209_);
return v___x_3210_;
}
}
}
else
{
lean_object* v_a_3213_; lean_object* v___x_3214_; 
v_a_3213_ = lean_ctor_get(v_x_3202_, 0);
lean_inc(v_a_3213_);
lean_dec_ref_known(v_x_3202_, 1);
v___x_3214_ = lean_apply_2(v___f_3201_, v_a_3213_, lean_box(0));
return v___x_3214_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2___boxed(lean_object* v___f_3215_, lean_object* v_x_3216_, lean_object* v___y_3217_){
_start:
{
lean_object* v_res_3218_; 
v_res_3218_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2(v___f_3215_, v_x_3216_);
return v_res_3218_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0(lean_object* v_context_3219_, lean_object* v_x_3220_){
_start:
{
lean_object* v_val_3223_; 
if (lean_obj_tag(v_x_3220_) == 0)
{
lean_object* v_a_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3233_; 
v_a_3225_ = lean_ctor_get(v_x_3220_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v_x_3220_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3227_ = v_x_3220_;
v_isShared_3228_ = v_isSharedCheck_3233_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_a_3225_);
lean_dec(v_x_3220_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3233_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___x_3230_; 
if (v_isShared_3228_ == 0)
{
v___x_3230_ = v___x_3227_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3225_);
v___x_3230_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
lean_object* v___x_3231_; 
v___x_3231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3230_);
return v___x_3231_;
}
}
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3247_; 
v_a_3234_ = lean_ctor_get(v_x_3220_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v_x_3220_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3236_ = v_x_3220_;
v_isShared_3237_ = v_isSharedCheck_3247_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v_x_3220_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3247_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3238_; 
v___x_3238_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_3219_, v_a_3234_);
if (lean_obj_tag(v___x_3238_) == 0)
{
lean_object* v_a_3239_; lean_object* v___x_3241_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_a_3239_);
lean_dec_ref_known(v___x_3238_, 1);
if (v_isShared_3237_ == 0)
{
lean_ctor_set(v___x_3236_, 0, v_a_3239_);
v___x_3241_ = v___x_3236_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_a_3239_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
v_val_3223_ = v___x_3241_;
goto v___jp_3222_;
}
}
else
{
lean_object* v_a_3243_; lean_object* v___x_3245_; 
v_a_3243_ = lean_ctor_get(v___x_3238_, 0);
lean_inc(v_a_3243_);
lean_dec_ref_known(v___x_3238_, 1);
if (v_isShared_3237_ == 0)
{
lean_ctor_set_tag(v___x_3236_, 0);
lean_ctor_set(v___x_3236_, 0, v_a_3243_);
v___x_3245_ = v___x_3236_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_a_3243_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
v_val_3223_ = v___x_3245_;
goto v___jp_3222_;
}
}
}
}
v___jp_3222_:
{
lean_object* v___x_3224_; 
v___x_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3224_, 0, v_val_3223_);
return v___x_3224_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0___boxed(lean_object* v_context_3248_, lean_object* v_x_3249_, lean_object* v___y_3250_){
_start:
{
lean_object* v_res_3251_; 
v_res_3251_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0(v_context_3248_, v_x_3249_);
lean_dec_ref(v_context_3248_);
return v_res_3251_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_3252_, uint32_t v_op_3253_, uint64_t v_flags_3254_, lean_object* v_payload_3255_, lean_object* v___f_3256_, lean_object* v___f_3257_, lean_object* v___f_3258_, lean_object* v_x_3259_){
_start:
{
if (lean_obj_tag(v_x_3259_) == 0)
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3269_; 
lean_dec_ref(v___f_3258_);
lean_dec_ref(v___f_3257_);
lean_dec_ref(v___f_3256_);
lean_dec(v_payload_3255_);
v_a_3261_ = lean_ctor_get(v_x_3259_, 0);
v_isSharedCheck_3269_ = !lean_is_exclusive(v_x_3259_);
if (v_isSharedCheck_3269_ == 0)
{
v___x_3263_ = v_x_3259_;
v_isShared_3264_ = v_isSharedCheck_3269_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v_x_3259_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3269_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
lean_object* v___x_3267_; 
v___x_3267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3266_);
return v___x_3267_;
}
}
}
else
{
lean_object* v_a_3270_; lean_object* v___x_3272_; uint8_t v_isShared_3273_; uint8_t v_isSharedCheck_3316_; 
v_a_3270_ = lean_ctor_get(v_x_3259_, 0);
v_isSharedCheck_3316_ = !lean_is_exclusive(v_x_3259_);
if (v_isSharedCheck_3316_ == 0)
{
v___x_3272_ = v_x_3259_;
v_isShared_3273_ = v_isSharedCheck_3316_;
goto v_resetjp_3271_;
}
else
{
lean_inc(v_a_3270_);
lean_dec(v_x_3259_);
v___x_3272_ = lean_box(0);
v_isShared_3273_ = v_isSharedCheck_3316_;
goto v_resetjp_3271_;
}
v_resetjp_3271_:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; uint8_t v___x_3276_; 
v___x_3274_ = lean_string_utf8_byte_size(v_failurePrefix_3252_);
v___x_3275_ = lean_unsigned_to_nat(0u);
v___x_3276_ = lean_nat_dec_eq(v___x_3274_, v___x_3275_);
if (v___x_3276_ == 0)
{
lean_object* v___f_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___f_3281_; lean_object* v_val_3283_; lean_object* v___x_3288_; 
lean_dec_ref(v___f_3258_);
lean_inc(v_a_3270_);
v___f_3277_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3277_, 0, v_a_3270_);
v___x_3278_ = lean_box(v___x_3276_);
v___x_3279_ = lean_box_uint32(v_op_3253_);
v___x_3280_ = lean_box_uint64(v_flags_3254_);
lean_inc(v_payload_3255_);
v___f_3281_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3281_, 0, v___x_3275_);
lean_closure_set(v___f_3281_, 1, v___x_3278_);
lean_closure_set(v___f_3281_, 2, v___f_3277_);
lean_closure_set(v___f_3281_, 3, v_a_3270_);
lean_closure_set(v___f_3281_, 4, v___x_3279_);
lean_closure_set(v___f_3281_, 5, v___x_3280_);
lean_closure_set(v___f_3281_, 6, v_payload_3255_);
v___x_3288_ = l_Lasm_JS_Wire_encodeIO(v_payload_3255_);
lean_dec(v_payload_3255_);
if (lean_obj_tag(v___x_3288_) == 0)
{
lean_object* v_a_3289_; lean_object* v___x_3291_; 
v_a_3289_ = lean_ctor_get(v___x_3288_, 0);
lean_inc(v_a_3289_);
lean_dec_ref_known(v___x_3288_, 1);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v_a_3289_);
v___x_3291_ = v___x_3272_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3289_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
v_val_3283_ = v___x_3291_;
goto v___jp_3282_;
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; 
v_a_3293_ = lean_ctor_get(v___x_3288_, 0);
lean_inc(v_a_3293_);
lean_dec_ref_known(v___x_3288_, 1);
if (v_isShared_3273_ == 0)
{
lean_ctor_set_tag(v___x_3272_, 0);
lean_ctor_set(v___x_3272_, 0, v_a_3293_);
v___x_3295_ = v___x_3272_;
goto v_reusejp_3294_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3293_);
v___x_3295_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3294_;
}
v_reusejp_3294_:
{
v_val_3283_ = v___x_3295_;
goto v___jp_3282_;
}
}
v___jp_3282_:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
v___x_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3284_, 0, v_val_3283_);
v___x_3285_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3275_, v___x_3276_, v___x_3284_, v___f_3281_);
v___x_3286_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3275_, v___x_3276_, v___x_3285_, v___f_3256_);
v___x_3287_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3275_, v___x_3276_, v___x_3286_, v___f_3257_);
return v___x_3287_;
}
}
else
{
lean_object* v___f_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___f_3300_; uint8_t v___x_3301_; lean_object* v_val_3303_; lean_object* v___x_3307_; 
lean_dec_ref(v___f_3257_);
lean_dec_ref(v___f_3256_);
lean_inc(v_a_3270_);
v___f_3297_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3297_, 0, v_a_3270_);
v___x_3298_ = lean_box_uint32(v_op_3253_);
v___x_3299_ = lean_box_uint64(v_flags_3254_);
lean_inc(v_payload_3255_);
v___f_3300_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3300_, 0, v___f_3297_);
lean_closure_set(v___f_3300_, 1, v_a_3270_);
lean_closure_set(v___f_3300_, 2, v___x_3298_);
lean_closure_set(v___f_3300_, 3, v___x_3299_);
lean_closure_set(v___f_3300_, 4, v_payload_3255_);
v___x_3301_ = 0;
v___x_3307_ = l_Lasm_JS_Wire_encodeIO(v_payload_3255_);
lean_dec(v_payload_3255_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; lean_object* v___x_3310_; 
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3308_);
lean_dec_ref_known(v___x_3307_, 1);
if (v_isShared_3273_ == 0)
{
lean_ctor_set(v___x_3272_, 0, v_a_3308_);
v___x_3310_ = v___x_3272_;
goto v_reusejp_3309_;
}
else
{
lean_object* v_reuseFailAlloc_3311_; 
v_reuseFailAlloc_3311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3311_, 0, v_a_3308_);
v___x_3310_ = v_reuseFailAlloc_3311_;
goto v_reusejp_3309_;
}
v_reusejp_3309_:
{
v_val_3303_ = v___x_3310_;
goto v___jp_3302_;
}
}
else
{
lean_object* v_a_3312_; lean_object* v___x_3314_; 
v_a_3312_ = lean_ctor_get(v___x_3307_, 0);
lean_inc(v_a_3312_);
lean_dec_ref_known(v___x_3307_, 1);
if (v_isShared_3273_ == 0)
{
lean_ctor_set_tag(v___x_3272_, 0);
lean_ctor_set(v___x_3272_, 0, v_a_3312_);
v___x_3314_ = v___x_3272_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3312_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
v_val_3303_ = v___x_3314_;
goto v___jp_3302_;
}
}
v___jp_3302_:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; 
v___x_3304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3304_, 0, v_val_3303_);
v___x_3305_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3275_, v___x_3301_, v___x_3304_, v___f_3300_);
v___x_3306_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3275_, v___x_3301_, v___x_3305_, v___f_3258_);
return v___x_3306_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_3317_, lean_object* v_op_3318_, lean_object* v_flags_3319_, lean_object* v_payload_3320_, lean_object* v___f_3321_, lean_object* v___f_3322_, lean_object* v___f_3323_, lean_object* v_x_3324_, lean_object* v___y_3325_){
_start:
{
uint32_t v_op_boxed_3326_; uint64_t v_flags_boxed_3327_; lean_object* v_res_3328_; 
v_op_boxed_3326_ = lean_unbox_uint32(v_op_3318_);
lean_dec(v_op_3318_);
v_flags_boxed_3327_ = lean_unbox_uint64(v_flags_3319_);
lean_dec_ref(v_flags_3319_);
v_res_3328_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9(v_failurePrefix_3317_, v_op_boxed_3326_, v_flags_boxed_3327_, v_payload_3320_, v___f_3321_, v___f_3322_, v___f_3323_, v_x_3324_);
lean_dec_ref(v_failurePrefix_3317_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1(lean_object* v___f_3329_, lean_object* v_bytes_3330_){
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1___boxed(lean_object* v___f_3355_, lean_object* v_bytes_3356_, lean_object* v___y_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1(v___f_3355_, v_bytes_3356_);
lean_dec_ref(v_bytes_3356_);
return v_res_3358_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3(lean_object* v___f_3359_, lean_object* v_x_3360_){
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
lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3382_; 
v_isSharedCheck_3382_ = !lean_is_exclusive(v_x_3360_);
if (v_isSharedCheck_3382_ == 0)
{
lean_object* v_unused_3383_; 
v_unused_3383_ = lean_ctor_get(v_x_3360_, 0);
lean_dec(v_unused_3383_);
v___x_3372_ = v_x_3360_;
v_isShared_3373_ = v_isSharedCheck_3382_;
goto v_resetjp_3371_;
}
else
{
lean_dec(v_x_3360_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3382_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
lean_object* v___x_3374_; uint8_t v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3378_; 
v___x_3374_ = lean_unsigned_to_nat(0u);
v___x_3375_ = 0;
v___x_3376_ = lean_io_promise_new();
if (v_isShared_3373_ == 0)
{
lean_ctor_set(v___x_3372_, 0, v___x_3376_);
v___x_3378_ = v___x_3372_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
v___x_3380_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3374_, v___x_3375_, v___x_3379_, v___f_3359_);
return v___x_3380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3___boxed(lean_object* v___f_3384_, lean_object* v_x_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v_res_3387_; 
v_res_3387_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3(v___f_3384_, v_x_3385_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(lean_object* v_context_3388_, uint32_t v_op_3389_, uint64_t v_flags_3390_, lean_object* v_payload_3391_, lean_object* v_failurePrefix_3392_){
_start:
{
lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___f_3396_; lean_object* v___f_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___f_3400_; lean_object* v___f_3401_; lean_object* v___x_3402_; uint8_t v___x_3403_; lean_object* v_val_3405_; lean_object* v___x_3408_; 
v___f_3394_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3394_, 0, v_context_3388_);
v___f_3395_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3395_, 0, v___f_3394_);
v___f_3396_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3396_, 0, v___f_3395_);
lean_inc_ref(v_failurePrefix_3392_);
v___f_3397_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3397_, 0, v_failurePrefix_3392_);
v___x_3398_ = lean_box_uint32(v_op_3389_);
v___x_3399_ = lean_box_uint64(v_flags_3390_);
lean_inc_ref(v___f_3396_);
v___f_3400_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3400_, 0, v_failurePrefix_3392_);
lean_closure_set(v___f_3400_, 1, v___x_3398_);
lean_closure_set(v___f_3400_, 2, v___x_3399_);
lean_closure_set(v___f_3400_, 3, v_payload_3391_);
lean_closure_set(v___f_3400_, 4, v___f_3397_);
lean_closure_set(v___f_3400_, 5, v___f_3396_);
lean_closure_set(v___f_3400_, 6, v___f_3396_);
v___f_3401_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3401_, 0, v___f_3400_);
v___x_3402_ = lean_unsigned_to_nat(0u);
v___x_3403_ = 0;
v___x_3408_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3411_; uint8_t v_isShared_3412_; uint8_t v_isSharedCheck_3416_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3416_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3416_ == 0)
{
v___x_3411_ = v___x_3408_;
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
else
{
lean_inc(v_a_3409_);
lean_dec(v___x_3408_);
v___x_3411_ = lean_box(0);
v_isShared_3412_ = v_isSharedCheck_3416_;
goto v_resetjp_3410_;
}
v_resetjp_3410_:
{
lean_object* v___x_3414_; 
if (v_isShared_3412_ == 0)
{
lean_ctor_set_tag(v___x_3411_, 1);
v___x_3414_ = v___x_3411_;
goto v_reusejp_3413_;
}
else
{
lean_object* v_reuseFailAlloc_3415_; 
v_reuseFailAlloc_3415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3415_, 0, v_a_3409_);
v___x_3414_ = v_reuseFailAlloc_3415_;
goto v_reusejp_3413_;
}
v_reusejp_3413_:
{
v_val_3405_ = v___x_3414_;
goto v___jp_3404_;
}
}
}
else
{
lean_object* v_a_3417_; lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3424_; 
v_a_3417_ = lean_ctor_get(v___x_3408_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3419_ = v___x_3408_;
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
else
{
lean_inc(v_a_3417_);
lean_dec(v___x_3408_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3424_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3422_; 
if (v_isShared_3420_ == 0)
{
lean_ctor_set_tag(v___x_3419_, 0);
v___x_3422_ = v___x_3419_;
goto v_reusejp_3421_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_a_3417_);
v___x_3422_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3421_;
}
v_reusejp_3421_:
{
v_val_3405_ = v___x_3422_;
goto v___jp_3404_;
}
}
}
v___jp_3404_:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3406_, 0, v_val_3405_);
v___x_3407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3402_, v___x_3403_, v___x_3406_, v___f_3401_);
return v___x_3407_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___boxed(lean_object* v_context_3425_, lean_object* v_op_3426_, lean_object* v_flags_3427_, lean_object* v_payload_3428_, lean_object* v_failurePrefix_3429_, lean_object* v_a_3430_){
_start:
{
uint32_t v_op_boxed_3431_; uint64_t v_flags_boxed_3432_; lean_object* v_res_3433_; 
v_op_boxed_3431_ = lean_unbox_uint32(v_op_3426_);
lean_dec(v_op_3426_);
v_flags_boxed_3432_ = lean_unbox_uint64(v_flags_3427_);
lean_dec_ref(v_flags_3427_);
v_res_3433_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(v_context_3425_, v_op_boxed_3431_, v_flags_boxed_3432_, v_payload_3428_, v_failurePrefix_3429_);
return v_res_3433_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(uint8_t v_await_3434_, uint64_t v_extra_3435_){
_start:
{
uint64_t v___x_3436_; uint64_t v___y_3438_; 
v___x_3436_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_3434_ == 0)
{
uint64_t v___x_3441_; 
v___x_3441_ = 0ULL;
v___y_3438_ = v___x_3441_;
goto v___jp_3437_;
}
else
{
uint64_t v___x_3442_; 
v___x_3442_ = 2ULL;
v___y_3438_ = v___x_3442_;
goto v___jp_3437_;
}
v___jp_3437_:
{
uint64_t v___x_3439_; uint64_t v___x_3440_; 
v___x_3439_ = lean_uint64_lor(v___x_3436_, v___y_3438_);
v___x_3440_ = lean_uint64_lor(v___x_3439_, v_extra_3435_);
return v___x_3440_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1___boxed(lean_object* v_await_3443_, lean_object* v_extra_3444_){
_start:
{
uint8_t v_await_boxed_3445_; uint64_t v_extra_boxed_3446_; uint64_t v_res_3447_; lean_object* v_r_3448_; 
v_await_boxed_3445_ = lean_unbox(v_await_3443_);
v_extra_boxed_3446_ = lean_unbox_uint64(v_extra_3444_);
lean_dec_ref(v_extra_3444_);
v_res_3447_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(v_await_boxed_3445_, v_extra_boxed_3446_);
v_r_3448_ = lean_box_uint64(v_res_3447_);
return v_r_3448_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3449_; uint8_t v___x_3450_; uint64_t v___x_3451_; 
v___x_3449_ = 8ULL;
v___x_3450_ = 0;
v___x_3451_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(v___x_3450_, v___x_3449_);
return v___x_3451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(lean_object* v_o_3452_, lean_object* v_name_3453_, lean_object* v_args_3454_){
_start:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; uint32_t v___x_3461_; uint64_t v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; 
v___x_3456_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3457_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3457_, 0, v_o_3452_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
lean_inc_ref(v_name_3453_);
v___x_3458_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3458_, 0, v_name_3453_);
v___x_3459_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0));
v___x_3460_ = lean_string_append(v___x_3459_, v_name_3453_);
lean_dec_ref(v_name_3453_);
v___x_3461_ = 205;
v___x_3462_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0);
v___x_3463_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3463_, 0, v_args_3454_);
v___x_3464_ = lean_unsigned_to_nat(3u);
v___x_3465_ = lean_mk_empty_array_with_capacity(v___x_3464_);
v___x_3466_ = lean_array_push(v___x_3465_, v___x_3457_);
v___x_3467_ = lean_array_push(v___x_3466_, v___x_3458_);
v___x_3468_ = lean_array_push(v___x_3467_, v___x_3463_);
v___x_3469_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3469_, 0, v___x_3468_);
v___x_3470_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(v___x_3460_, v___x_3461_, v___x_3462_, v___x_3469_, v___x_3456_);
return v___x_3470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___boxed(lean_object* v_o_3471_, lean_object* v_name_3472_, lean_object* v_args_3473_, lean_object* v___y_3474_){
_start:
{
lean_object* v_res_3475_; 
v_res_3475_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_o_3471_, v_name_3472_, v_args_3473_);
return v_res_3475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm(lean_object* v_self_3477_, lean_object* v_options_3478_){
_start:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3480_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0));
v___x_3481_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_options_3478_);
v___x_3482_ = lean_unsigned_to_nat(1u);
v___x_3483_ = lean_mk_empty_array_with_capacity(v___x_3482_);
v___x_3484_ = lean_array_push(v___x_3483_, v___x_3481_);
v___x_3485_ = l_Lasm_JS_Web_Support_args(v___x_3484_);
v___x_3486_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_self_3477_, v___x_3480_, v___x_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___boxed(lean_object* v_self_3487_, lean_object* v_options_3488_, lean_object* v_a_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm(v_self_3487_, v_options_3488_);
lean_dec(v_options_3488_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(lean_object* v_x_3491_){
_start:
{
if (lean_obj_tag(v_x_3491_) == 0)
{
lean_object* v___x_3492_; 
v___x_3492_ = lean_box(0);
return v___x_3492_;
}
else
{
lean_object* v_val_3493_; lean_object* v_allowConcurrency_3494_; lean_object* v_allowUnconfirmed_3495_; lean_object* v___x_3497_; uint8_t v_isShared_3498_; uint8_t v_isSharedCheck_3512_; 
v_val_3493_ = lean_ctor_get(v_x_3491_, 0);
lean_inc(v_val_3493_);
lean_dec_ref_known(v_x_3491_, 1);
v_allowConcurrency_3494_ = lean_ctor_get(v_val_3493_, 0);
v_allowUnconfirmed_3495_ = lean_ctor_get(v_val_3493_, 1);
v_isSharedCheck_3512_ = !lean_is_exclusive(v_val_3493_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3497_ = v_val_3493_;
v_isShared_3498_ = v_isSharedCheck_3512_;
goto v_resetjp_3496_;
}
else
{
lean_inc(v_allowUnconfirmed_3495_);
lean_inc(v_allowConcurrency_3494_);
lean_dec(v_val_3493_);
v___x_3497_ = lean_box(0);
v_isShared_3498_ = v_isSharedCheck_3512_;
goto v_resetjp_3496_;
}
v_resetjp_3496_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3502_; 
v___x_3499_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_3500_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_3494_);
lean_dec(v_allowConcurrency_3494_);
if (v_isShared_3498_ == 0)
{
lean_ctor_set(v___x_3497_, 1, v___x_3500_);
lean_ctor_set(v___x_3497_, 0, v___x_3499_);
v___x_3502_ = v___x_3497_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3499_);
lean_ctor_set(v_reuseFailAlloc_3511_, 1, v___x_3500_);
v___x_3502_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3503_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_3504_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowUnconfirmed_3495_);
lean_dec(v_allowUnconfirmed_3495_);
v___x_3505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3503_);
lean_ctor_set(v___x_3505_, 1, v___x_3504_);
v___x_3506_ = lean_unsigned_to_nat(2u);
v___x_3507_ = lean_mk_empty_array_with_capacity(v___x_3506_);
v___x_3508_ = lean_array_push(v___x_3507_, v___x_3502_);
v___x_3509_ = lean_array_push(v___x_3508_, v___x_3505_);
v___x_3510_ = l_Lasm_JS_Web_Support_fields(v___x_3509_);
lean_dec_ref(v___x_3509_);
return v___x_3510_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm(lean_object* v_self_3514_, lean_object* v_scheduledTime_3515_, lean_object* v_options_3516_){
_start:
{
lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; 
v___x_3518_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0));
v___x_3519_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3516_);
v___x_3520_ = lean_unsigned_to_nat(2u);
v___x_3521_ = lean_mk_empty_array_with_capacity(v___x_3520_);
v___x_3522_ = lean_array_push(v___x_3521_, v_scheduledTime_3515_);
v___x_3523_ = lean_array_push(v___x_3522_, v___x_3519_);
v___x_3524_ = l_Lasm_JS_Web_Support_args(v___x_3523_);
v___x_3525_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3514_, v___x_3518_, v___x_3524_);
return v___x_3525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___boxed(lean_object* v_self_3526_, lean_object* v_scheduledTime_3527_, lean_object* v_options_3528_, lean_object* v_a_3529_){
_start:
{
lean_object* v_res_3530_; 
v_res_3530_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm(v_self_3526_, v_scheduledTime_3527_, v_options_3528_);
return v_res_3530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm(lean_object* v_self_3532_, lean_object* v_options_3533_){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3535_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0));
v___x_3536_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3533_);
v___x_3537_ = lean_unsigned_to_nat(1u);
v___x_3538_ = lean_mk_empty_array_with_capacity(v___x_3537_);
v___x_3539_ = lean_array_push(v___x_3538_, v___x_3536_);
v___x_3540_ = l_Lasm_JS_Web_Support_args(v___x_3539_);
v___x_3541_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3532_, v___x_3535_, v___x_3540_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___boxed(lean_object* v_self_3542_, lean_object* v_options_3543_, lean_object* v_a_3544_){
_start:
{
lean_object* v_res_3545_; 
v_res_3545_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm(v_self_3542_, v_options_3543_);
return v_res_3545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync(lean_object* v_self_3547_){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; 
v___x_3549_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___closed__0));
v___x_3550_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3551_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3547_, v___x_3549_, v___x_3550_);
return v___x_3551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___boxed(lean_object* v_self_3552_, lean_object* v_a_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_sync(v_self_3552_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark(lean_object* v_self_3556_){
_start:
{
lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; 
v___x_3558_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___closed__0));
v___x_3559_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3560_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3556_, v___x_3558_, v___x_3559_);
return v___x_3560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___boxed(lean_object* v_self_3561_, lean_object* v_a_3562_){
_start:
{
lean_object* v_res_3563_; 
v_res_3563_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark(v_self_3561_);
return v_res_3563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime(lean_object* v_self_3565_, lean_object* v_timestamp_3566_){
_start:
{
lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3568_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___closed__0));
v___x_3569_ = lean_unsigned_to_nat(1u);
v___x_3570_ = lean_mk_empty_array_with_capacity(v___x_3569_);
v___x_3571_ = lean_array_push(v___x_3570_, v_timestamp_3566_);
v___x_3572_ = l_Lasm_JS_Web_Support_args(v___x_3571_);
v___x_3573_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3565_, v___x_3568_, v___x_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___boxed(lean_object* v_self_3574_, lean_object* v_timestamp_3575_, lean_object* v_a_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime(v_self_3574_, v_timestamp_3575_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark(lean_object* v_self_3579_, lean_object* v_bookmark_3580_){
_start:
{
lean_object* v___x_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3582_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___closed__0));
v___x_3583_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3583_, 0, v_bookmark_3580_);
v___x_3584_ = lean_unsigned_to_nat(1u);
v___x_3585_ = lean_mk_empty_array_with_capacity(v___x_3584_);
v___x_3586_ = lean_array_push(v___x_3585_, v___x_3583_);
v___x_3587_ = l_Lasm_JS_Web_Support_args(v___x_3586_);
v___x_3588_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3579_, v___x_3582_, v___x_3587_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___boxed(lean_object* v_self_3589_, lean_object* v_bookmark_3590_, lean_object* v_a_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark(v_self_3589_, v_bookmark_3590_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get(lean_object* v_self_3593_, lean_object* v_key_3594_, lean_object* v_options_3595_){
_start:
{
lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3597_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_3598_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3598_, 0, v_key_3594_);
v___x_3599_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_3595_);
v___x_3600_ = lean_unsigned_to_nat(2u);
v___x_3601_ = lean_mk_empty_array_with_capacity(v___x_3600_);
v___x_3602_ = lean_array_push(v___x_3601_, v___x_3598_);
v___x_3603_ = lean_array_push(v___x_3602_, v___x_3599_);
v___x_3604_ = l_Lasm_JS_Web_Support_args(v___x_3603_);
v___x_3605_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_3593_, v___x_3597_, v___x_3604_);
return v___x_3605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get___boxed(lean_object* v_self_3606_, lean_object* v_key_3607_, lean_object* v_options_3608_, lean_object* v_a_3609_){
_start:
{
lean_object* v_res_3610_; 
v_res_3610_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_get(v_self_3606_, v_key_3607_, v_options_3608_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys(lean_object* v_self_3611_, lean_object* v_keys_3612_, lean_object* v_options_3613_){
_start:
{
lean_object* v___f_3615_; lean_object* v___x_3616_; size_t v_sz_3617_; size_t v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; uint8_t v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; 
v___f_3615_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_3616_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v_sz_3617_ = lean_array_size(v_keys_3612_);
v___x_3618_ = ((size_t)0ULL);
v___x_3619_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3617_, v___x_3618_, v_keys_3612_);
v___x_3620_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3620_, 0, v___x_3619_);
v___x_3621_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_3613_);
v___x_3622_ = lean_unsigned_to_nat(2u);
v___x_3623_ = lean_mk_empty_array_with_capacity(v___x_3622_);
v___x_3624_ = lean_array_push(v___x_3623_, v___x_3620_);
v___x_3625_ = lean_array_push(v___x_3624_, v___x_3621_);
v___x_3626_ = l_Lasm_JS_Web_Support_args(v___x_3625_);
v___x_3627_ = lean_unsigned_to_nat(0u);
v___x_3628_ = 0;
v___x_3629_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3611_, v___x_3616_, v___x_3626_);
v___x_3630_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3627_, v___x_3628_, v___x_3629_, v___f_3615_);
return v___x_3630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys___boxed(lean_object* v_self_3631_, lean_object* v_keys_3632_, lean_object* v_options_3633_, lean_object* v_a_3634_){
_start:
{
lean_object* v_res_3635_; 
v_res_3635_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys(v_self_3631_, v_keys_3632_, v_options_3633_);
return v_res_3635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list(lean_object* v_self_3636_, lean_object* v_options_3637_){
_start:
{
lean_object* v___f_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; uint8_t v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___f_3639_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_3640_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0));
v___x_3641_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(v_options_3637_);
v___x_3642_ = lean_unsigned_to_nat(1u);
v___x_3643_ = lean_mk_empty_array_with_capacity(v___x_3642_);
v___x_3644_ = lean_array_push(v___x_3643_, v___x_3641_);
v___x_3645_ = l_Lasm_JS_Web_Support_args(v___x_3644_);
v___x_3646_ = lean_unsigned_to_nat(0u);
v___x_3647_ = 0;
v___x_3648_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3636_, v___x_3640_, v___x_3645_);
v___x_3649_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3646_, v___x_3647_, v___x_3648_, v___f_3639_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list___boxed(lean_object* v_self_3650_, lean_object* v_options_3651_, lean_object* v_a_3652_){
_start:
{
lean_object* v_res_3653_; 
v_res_3653_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_list(v_self_3650_, v_options_3651_);
return v_res_3653_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put(lean_object* v_self_3654_, lean_object* v_key_3655_, lean_object* v_value_3656_, lean_object* v_options_3657_){
_start:
{
lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3659_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v___x_3660_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3660_, 0, v_key_3655_);
v___x_3661_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3657_);
v___x_3662_ = lean_unsigned_to_nat(3u);
v___x_3663_ = lean_mk_empty_array_with_capacity(v___x_3662_);
v___x_3664_ = lean_array_push(v___x_3663_, v___x_3660_);
v___x_3665_ = lean_array_push(v___x_3664_, v_value_3656_);
v___x_3666_ = lean_array_push(v___x_3665_, v___x_3661_);
v___x_3667_ = l_Lasm_JS_Web_Support_args(v___x_3666_);
v___x_3668_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3654_, v___x_3659_, v___x_3667_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put___boxed(lean_object* v_self_3669_, lean_object* v_key_3670_, lean_object* v_value_3671_, lean_object* v_options_3672_, lean_object* v_a_3673_){
_start:
{
lean_object* v_res_3674_; 
v_res_3674_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_put(v_self_3669_, v_key_3670_, v_value_3671_, v_options_3672_);
lean_dec(v_options_3672_);
return v_res_3674_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries(lean_object* v_self_3675_, lean_object* v_entries_3676_, lean_object* v_options_3677_){
_start:
{
lean_object* v___x_3679_; size_t v_sz_3680_; size_t v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3679_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v_sz_3680_ = lean_array_size(v_entries_3676_);
v___x_3681_ = ((size_t)0ULL);
v___x_3682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_3680_, v___x_3681_, v_entries_3676_);
v___x_3683_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_3683_, 0, v___x_3682_);
v___x_3684_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3677_);
v___x_3685_ = lean_unsigned_to_nat(2u);
v___x_3686_ = lean_mk_empty_array_with_capacity(v___x_3685_);
v___x_3687_ = lean_array_push(v___x_3686_, v___x_3683_);
v___x_3688_ = lean_array_push(v___x_3687_, v___x_3684_);
v___x_3689_ = l_Lasm_JS_Web_Support_args(v___x_3688_);
v___x_3690_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3675_, v___x_3679_, v___x_3689_);
return v___x_3690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries___boxed(lean_object* v_self_3691_, lean_object* v_entries_3692_, lean_object* v_options_3693_, lean_object* v_a_3694_){
_start:
{
lean_object* v_res_3695_; 
v_res_3695_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries(v_self_3691_, v_entries_3692_, v_options_3693_);
lean_dec(v_options_3693_);
return v_res_3695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete(lean_object* v_self_3696_, lean_object* v_key_3697_, lean_object* v_options_3698_){
_start:
{
lean_object* v___x_3700_; lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3700_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v___x_3701_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3701_, 0, v_key_3697_);
v___x_3702_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3698_);
v___x_3703_ = lean_unsigned_to_nat(2u);
v___x_3704_ = lean_mk_empty_array_with_capacity(v___x_3703_);
v___x_3705_ = lean_array_push(v___x_3704_, v___x_3701_);
v___x_3706_ = lean_array_push(v___x_3705_, v___x_3702_);
v___x_3707_ = l_Lasm_JS_Web_Support_args(v___x_3706_);
v___x_3708_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_self_3696_, v___x_3700_, v___x_3707_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete___boxed(lean_object* v_self_3709_, lean_object* v_key_3710_, lean_object* v_options_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete(v_self_3709_, v_key_3710_, v_options_3711_);
lean_dec(v_options_3711_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys(lean_object* v_self_3714_, lean_object* v_keys_3715_, lean_object* v_options_3716_){
_start:
{
lean_object* v___x_3718_; size_t v_sz_3719_; size_t v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3718_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v_sz_3719_ = lean_array_size(v_keys_3715_);
v___x_3720_ = ((size_t)0ULL);
v___x_3721_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3719_, v___x_3720_, v_keys_3715_);
v___x_3722_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3721_);
v___x_3723_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3716_);
v___x_3724_ = lean_unsigned_to_nat(2u);
v___x_3725_ = lean_mk_empty_array_with_capacity(v___x_3724_);
v___x_3726_ = lean_array_push(v___x_3725_, v___x_3722_);
v___x_3727_ = lean_array_push(v___x_3726_, v___x_3723_);
v___x_3728_ = l_Lasm_JS_Web_Support_args(v___x_3727_);
v___x_3729_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_self_3714_, v___x_3718_, v___x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys___boxed(lean_object* v_self_3730_, lean_object* v_keys_3731_, lean_object* v_options_3732_, lean_object* v_a_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys(v_self_3730_, v_keys_3731_, v_options_3732_);
lean_dec(v_options_3732_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback(lean_object* v_self_3736_){
_start:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3738_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___closed__0));
v___x_3739_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3740_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3736_, v___x_3738_, v___x_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___boxed(lean_object* v_self_3741_, lean_object* v_a_3742_){
_start:
{
lean_object* v_res_3743_; 
v_res_3743_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback(v_self_3741_);
return v_res_3743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm(lean_object* v_self_3744_, lean_object* v_options_3745_){
_start:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3747_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0));
v___x_3748_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_options_3745_);
v___x_3749_ = lean_unsigned_to_nat(1u);
v___x_3750_ = lean_mk_empty_array_with_capacity(v___x_3749_);
v___x_3751_ = lean_array_push(v___x_3750_, v___x_3748_);
v___x_3752_ = l_Lasm_JS_Web_Support_args(v___x_3751_);
v___x_3753_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_self_3744_, v___x_3747_, v___x_3752_);
return v___x_3753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm___boxed(lean_object* v_self_3754_, lean_object* v_options_3755_, lean_object* v_a_3756_){
_start:
{
lean_object* v_res_3757_; 
v_res_3757_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm(v_self_3754_, v_options_3755_);
lean_dec(v_options_3755_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm(lean_object* v_self_3758_, lean_object* v_scheduledTime_3759_, lean_object* v_options_3760_){
_start:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3762_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0));
v___x_3763_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3760_);
v___x_3764_ = lean_unsigned_to_nat(2u);
v___x_3765_ = lean_mk_empty_array_with_capacity(v___x_3764_);
v___x_3766_ = lean_array_push(v___x_3765_, v_scheduledTime_3759_);
v___x_3767_ = lean_array_push(v___x_3766_, v___x_3763_);
v___x_3768_ = l_Lasm_JS_Web_Support_args(v___x_3767_);
v___x_3769_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3758_, v___x_3762_, v___x_3768_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm___boxed(lean_object* v_self_3770_, lean_object* v_scheduledTime_3771_, lean_object* v_options_3772_, lean_object* v_a_3773_){
_start:
{
lean_object* v_res_3774_; 
v_res_3774_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm(v_self_3770_, v_scheduledTime_3771_, v_options_3772_);
return v_res_3774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm(lean_object* v_self_3775_, lean_object* v_options_3776_){
_start:
{
lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3778_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0));
v___x_3779_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3776_);
v___x_3780_ = lean_unsigned_to_nat(1u);
v___x_3781_ = lean_mk_empty_array_with_capacity(v___x_3780_);
v___x_3782_ = lean_array_push(v___x_3781_, v___x_3779_);
v___x_3783_ = l_Lasm_JS_Web_Support_args(v___x_3782_);
v___x_3784_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3775_, v___x_3778_, v___x_3783_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm___boxed(lean_object* v_self_3785_, lean_object* v_options_3786_, lean_object* v_a_3787_){
_start:
{
lean_object* v_res_3788_; 
v_res_3788_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm(v_self_3785_, v_options_3786_);
return v_res_3788_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Cache(uint8_t builtin);
lean_object* initialize_Lasm_JS_Cloudflare_Sockets(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Cloudflare_DurableObjects(uint8_t builtin) {
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
res = initialize_Lasm_JS_Cloudflare_Cache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Cloudflare_Sockets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction_default = _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction_default();
l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction = _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectJurisdiction();
l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint_default = _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint_default();
l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint = _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectLocationHint();
l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode_default = _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode_default();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode_default);
l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode = _init_l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode();
lean_mark_persistent(l_Lasm_JS_Cloudflare_instInhabitedDurableObjectRoutingMode);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
