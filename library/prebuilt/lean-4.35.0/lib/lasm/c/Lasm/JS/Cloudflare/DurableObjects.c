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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
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
static const lean_closure_object l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
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
lean_object* v_value_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_940_; 
v_value_907_ = lean_ctor_get(v_x_906_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v_x_906_);
if (v_isSharedCheck_940_ == 0)
{
v___x_909_ = v_x_906_;
v_isShared_910_ = v_isSharedCheck_940_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_value_907_);
lean_dec(v_x_906_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_940_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v_hostname_911_; lean_object* v_port_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_939_; 
v_hostname_911_ = lean_ctor_get(v_value_907_, 0);
v_port_912_ = lean_ctor_get(v_value_907_, 1);
v_isSharedCheck_939_ = !lean_is_exclusive(v_value_907_);
if (v_isSharedCheck_939_ == 0)
{
v___x_914_ = v_value_907_;
v_isShared_915_ = v_isSharedCheck_939_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_port_912_);
lean_inc(v_hostname_911_);
lean_dec(v_value_907_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_939_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; lean_object* v___x_918_; 
v___x_916_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0));
if (v_isShared_910_ == 0)
{
lean_ctor_set_tag(v___x_909_, 4);
lean_ctor_set(v___x_909_, 0, v_hostname_911_);
v___x_918_ = v___x_909_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v_hostname_911_);
v___x_918_ = v_reuseFailAlloc_938_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
lean_object* v___x_920_; 
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 1, v___x_918_);
lean_ctor_set(v___x_914_, 0, v___x_916_);
v___x_920_ = v___x_914_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_916_);
lean_ctor_set(v_reuseFailAlloc_937_, 1, v___x_918_);
v___x_920_ = v_reuseFailAlloc_937_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
lean_object* v___x_921_; lean_object* v___y_923_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v___x_921_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1));
v___x_930_ = lean_nat_to_int(v_port_912_);
v___x_931_ = lean_nat_abs(v___x_930_);
v___x_932_ = lean_cstr_to_nat("9007199254740991");
v___x_933_ = lean_nat_dec_le(v___x_931_, v___x_932_);
lean_dec(v___x_931_);
if (v___x_933_ == 0)
{
lean_object* v___x_934_; 
v___x_934_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_930_);
v___y_923_ = v___x_934_;
goto v___jp_922_;
}
else
{
double v___x_935_; lean_object* v___x_936_; 
v___x_935_ = l_Float_ofInt(v___x_930_);
lean_dec(v___x_930_);
v___x_936_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_936_, 0, v___x_935_);
v___y_923_ = v___x_936_;
goto v___jp_922_;
}
v___jp_922_:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_924_, 0, v___x_921_);
lean_ctor_set(v___x_924_, 1, v___y_923_);
v___x_925_ = lean_unsigned_to_nat(2u);
v___x_926_ = lean_mk_empty_array_with_capacity(v___x_925_);
v___x_927_ = lean_array_push(v___x_926_, v___x_920_);
v___x_928_ = lean_array_push(v___x_927_, v___x_924_);
v___x_929_ = l_Lasm_JS_Web_Support_fields(v___x_928_);
lean_dec_ref(v___x_928_);
return v___x_929_;
}
}
}
}
}
}
else
{
lean_object* v_value_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
v_value_941_ = lean_ctor_get(v_x_906_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v_x_906_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v_x_906_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_value_941_);
lean_dec(v_x_906_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
lean_ctor_set_tag(v___x_943_, 4);
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_value_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeSocketAddressSocketAddressOrDOMString___lam__0(lean_object* v_value_951_){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_952_, 0, v_value_951_);
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instCoeStringSocketAddressOrDOMString___lam__0(lean_object* v_value_955_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_956_, 0, v_value_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0(lean_object* v_x_966_){
_start:
{
lean_object* v___x_968_; 
v___x_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_968_, 0, v_x_966_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0___boxed(lean_object* v_x_969_, lean_object* v___y_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__0(v_x_969_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1(lean_object* v_f_972_, lean_object* v___f_973_, lean_object* v_x_974_){
_start:
{
lean_object* v___x_976_; uint8_t v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_976_ = lean_unsigned_to_nat(0u);
v___x_977_ = 0;
v___x_978_ = lean_apply_1(v_f_972_, lean_box(0));
v___x_979_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_976_, v___x_977_, v___x_978_, v___f_973_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1___boxed(lean_object* v_f_980_, lean_object* v___f_981_, lean_object* v_x_982_, lean_object* v___y_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1(v_f_980_, v___f_981_, v_x_982_);
lean_dec_ref(v_x_982_);
return v_res_984_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_nat_to_int(v___x_992_);
return v___x_993_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7(void){
_start:
{
lean_object* v___x_994_; lean_object* v___x_995_; 
v___x_994_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6);
v___x_995_ = lean_nat_abs(v___x_994_);
return v___x_995_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8(void){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; uint8_t v___x_998_; 
v___x_996_ = lean_cstr_to_nat("9007199254740991");
v___x_997_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__7);
v___x_998_ = lean_nat_dec_le(v___x_997_, v___x_996_);
return v___x_998_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9(void){
_start:
{
lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_999_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6);
v___x_1000_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1000_, 0, v___x_999_);
return v___x_1000_;
}
}
static double _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10(void){
_start:
{
lean_object* v___x_1001_; double v___x_1002_; 
v___x_1001_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__6);
v___x_1002_ = l_Float_ofInt(v___x_1001_);
return v___x_1002_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11(void){
_start:
{
double v___x_1003_; lean_object* v___x_1004_; 
v___x_1003_ = lean_float_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__10);
v___x_1004_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn(lean_object* v_f_1005_){
_start:
{
lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___f_1007_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0));
v___f_1008_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1008_, 0, v_f_1005_);
lean_closure_set(v___f_1008_, 1, v___f_1007_);
v___x_1009_ = lean_unsigned_to_nat(0u);
v___x_1010_ = l_Lasm_JS_Function_ofFn(v___f_1008_, v___x_1009_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1014_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1015_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1013_, v___x_1014_);
if (lean_obj_tag(v___x_1015_) == 0)
{
lean_object* v_a_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___y_1023_; uint8_t v___x_1050_; 
v_a_1016_ = lean_ctor_get(v___x_1015_, 0);
lean_inc(v_a_1016_);
lean_dec_ref_known(v___x_1015_, 1);
v___x_1017_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1018_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1011_);
v___x_1019_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1019_, 0, v_a_1011_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1021_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1050_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8);
if (v___x_1050_ == 0)
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9);
v___y_1023_ = v___x_1051_;
goto v___jp_1022_;
}
else
{
lean_object* v___x_1052_; 
v___x_1052_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11);
v___y_1023_ = v___x_1052_;
goto v___jp_1022_;
}
v___jp_1022_:
{
lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
lean_inc(v___y_1023_);
v___x_1024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1021_);
lean_ctor_set(v___x_1024_, 1, v___y_1023_);
v___x_1025_ = lean_box(0);
v___x_1026_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1026_, 0, v___x_1024_);
lean_ctor_set(v___x_1026_, 1, v___x_1025_);
v___x_1027_ = l_Lasm_JS_obj(v___x_1026_);
v___x_1028_ = lean_unsigned_to_nat(3u);
v___x_1029_ = lean_mk_empty_array_with_capacity(v___x_1028_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1019_);
v___x_1031_ = lean_array_push(v___x_1030_, v___x_1020_);
v___x_1032_ = lean_array_push(v___x_1031_, v___x_1027_);
v___x_1033_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1016_, v___x_1017_, v___x_1032_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; 
v_unused_1041_ = lean_ctor_get(v___x_1033_, 0);
lean_dec(v_unused_1041_);
v___x_1035_ = v___x_1033_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_dec(v___x_1033_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 0, v_a_1011_);
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1011_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
lean_dec(v_a_1011_);
v_a_1042_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1033_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1033_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
lean_dec(v_a_1011_);
v_a_1053_ = lean_ctor_get(v___x_1015_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1015_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1015_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1015_);
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
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
lean_dec(v_a_1011_);
v_a_1061_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1012_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1012_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
else
{
lean_object* v_a_1069_; lean_object* v___x_1071_; uint8_t v_isShared_1072_; uint8_t v_isSharedCheck_1076_; 
v_a_1069_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1076_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1076_ == 0)
{
v___x_1071_ = v___x_1010_;
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
else
{
lean_inc(v_a_1069_);
lean_dec(v___x_1010_);
v___x_1071_ = lean_box(0);
v_isShared_1072_ = v_isSharedCheck_1076_;
goto v_resetjp_1070_;
}
v_resetjp_1070_:
{
lean_object* v___x_1074_; 
if (v_isShared_1072_ == 0)
{
v___x_1074_ = v___x_1071_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1075_; 
v_reuseFailAlloc_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1075_, 0, v_a_1069_);
v___x_1074_ = v_reuseFailAlloc_1075_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
return v___x_1074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___boxed(lean_object* v_f_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn(v_f_1077_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0(lean_object* v_f_1080_, lean_object* v_x_1081_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = lean_apply_1(v_f_1080_, lean_box(0));
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1084_, lean_object* v_x_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0(v_f_1084_, v_x_1085_);
lean_dec_ref(v_x_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn(lean_object* v_f_1088_){
_start:
{
lean_object* v___f_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___f_1090_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1090_, 0, v_f_1088_);
v___x_1091_ = lean_unsigned_to_nat(0u);
v___x_1092_ = l_Lasm_JS_Function_ofSyncFn(v___f_1090_, v___x_1091_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_object* v_a_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v_a_1095_ = lean_ctor_get(v___x_1094_, 0);
lean_inc(v_a_1095_);
lean_dec_ref_known(v___x_1094_, 1);
v___x_1096_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1097_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1095_, v___x_1096_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___y_1105_; uint8_t v___x_1132_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1097_, 1);
v___x_1099_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1100_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1093_);
v___x_1101_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1101_, 0, v_a_1093_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1103_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1132_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; 
v___x_1133_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9);
v___y_1105_ = v___x_1133_;
goto v___jp_1104_;
}
else
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11);
v___y_1105_ = v___x_1134_;
goto v___jp_1104_;
}
v___jp_1104_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
lean_inc(v___y_1105_);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1103_);
lean_ctor_set(v___x_1106_, 1, v___y_1105_);
v___x_1107_ = lean_box(0);
v___x_1108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1106_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = l_Lasm_JS_obj(v___x_1108_);
v___x_1110_ = lean_unsigned_to_nat(3u);
v___x_1111_ = lean_mk_empty_array_with_capacity(v___x_1110_);
v___x_1112_ = lean_array_push(v___x_1111_, v___x_1101_);
v___x_1113_ = lean_array_push(v___x_1112_, v___x_1102_);
v___x_1114_ = lean_array_push(v___x_1113_, v___x_1109_);
v___x_1115_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1098_, v___x_1099_, v___x_1114_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1122_ == 0)
{
lean_object* v_unused_1123_; 
v_unused_1123_ = lean_ctor_get(v___x_1115_, 0);
lean_dec(v_unused_1123_);
v___x_1117_ = v___x_1115_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_dec(v___x_1115_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 0, v_a_1093_);
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1093_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec(v_a_1093_);
v_a_1124_ = lean_ctor_get(v___x_1115_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1115_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1115_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1115_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
}
else
{
lean_object* v_a_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1142_; 
lean_dec(v_a_1093_);
v_a_1135_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1137_ = v___x_1097_;
v_isShared_1138_ = v_isSharedCheck_1142_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_a_1135_);
lean_dec(v___x_1097_);
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
else
{
lean_object* v_a_1143_; lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1150_; 
lean_dec(v_a_1093_);
v_a_1143_ = lean_ctor_get(v___x_1094_, 0);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1145_ = v___x_1094_;
v_isShared_1146_ = v_isSharedCheck_1150_;
goto v_resetjp_1144_;
}
else
{
lean_inc(v_a_1143_);
lean_dec(v___x_1094_);
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
v_reuseFailAlloc_1149_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
v_a_1151_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1092_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1092_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___boxed(lean_object* v_f_1159_, lean_object* v_a_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn(v_f_1159_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0(lean_object* v___f_1163_, lean_object* v_d_1164_){
_start:
{
lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1165_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0));
v___x_1166_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1163_, v_d_1164_);
v___x_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1165_);
lean_ctor_set(v___x_1167_, 1, v___x_1166_);
v___x_1168_ = lean_unsigned_to_nat(1u);
v___x_1169_ = lean_mk_empty_array_with_capacity(v___x_1168_);
v___x_1170_ = lean_array_push(v___x_1169_, v___x_1167_);
v___x_1171_ = l_Lasm_JS_Web_Support_fields(v___x_1170_);
lean_dec_ref(v___x_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0(lean_object* v___f_1178_, lean_object* v_d_1179_){
_start:
{
lean_object* v_allowConcurrency_1180_; lean_object* v_noCache_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1198_; 
v_allowConcurrency_1180_ = lean_ctor_get(v_d_1179_, 0);
v_noCache_1181_ = lean_ctor_get(v_d_1179_, 1);
v_isSharedCheck_1198_ = !lean_is_exclusive(v_d_1179_);
if (v_isSharedCheck_1198_ == 0)
{
v___x_1183_ = v_d_1179_;
v_isShared_1184_ = v_isSharedCheck_1198_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_noCache_1181_);
lean_inc(v_allowConcurrency_1180_);
lean_dec(v_d_1179_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1198_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1188_; 
v___x_1185_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref(v___f_1178_);
v___x_1186_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1178_, v_allowConcurrency_1180_);
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 1, v___x_1186_);
lean_ctor_set(v___x_1183_, 0, v___x_1185_);
v___x_1188_ = v___x_1183_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v___x_1185_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; 
v___x_1189_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1190_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1178_, v_noCache_1181_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1189_);
lean_ctor_set(v___x_1191_, 1, v___x_1190_);
v___x_1192_ = lean_unsigned_to_nat(2u);
v___x_1193_ = lean_mk_empty_array_with_capacity(v___x_1192_);
v___x_1194_ = lean_array_push(v___x_1193_, v___x_1188_);
v___x_1195_ = lean_array_push(v___x_1194_, v___x_1191_);
v___x_1196_ = l_Lasm_JS_Web_Support_fields(v___x_1195_);
lean_dec_ref(v___x_1195_);
return v___x_1196_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0(lean_object* v___f_1208_, lean_object* v___f_1209_, lean_object* v___f_1210_, lean_object* v_d_1211_){
_start:
{
lean_object* v_start_1212_; lean_object* v_startAfter_1213_; lean_object* v_end_1214_; lean_object* v_prefix_1215_; lean_object* v_reverse_1216_; lean_object* v_limit_1217_; lean_object* v_allowConcurrency_1218_; lean_object* v_noCache_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v_start_1212_ = lean_ctor_get(v_d_1211_, 0);
lean_inc(v_start_1212_);
v_startAfter_1213_ = lean_ctor_get(v_d_1211_, 1);
lean_inc(v_startAfter_1213_);
v_end_1214_ = lean_ctor_get(v_d_1211_, 2);
lean_inc(v_end_1214_);
v_prefix_1215_ = lean_ctor_get(v_d_1211_, 3);
lean_inc(v_prefix_1215_);
v_reverse_1216_ = lean_ctor_get(v_d_1211_, 4);
lean_inc(v_reverse_1216_);
v_limit_1217_ = lean_ctor_get(v_d_1211_, 5);
lean_inc(v_limit_1217_);
v_allowConcurrency_1218_ = lean_ctor_get(v_d_1211_, 6);
lean_inc(v_allowConcurrency_1218_);
v_noCache_1219_ = lean_ctor_get(v_d_1211_, 7);
lean_inc(v_noCache_1219_);
lean_dec_ref(v_d_1211_);
v___x_1220_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1208_, 3);
v___x_1221_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1208_, v_start_1212_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___x_1220_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
v___x_1223_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1));
v___x_1224_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1208_, v_startAfter_1213_);
v___x_1225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1223_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2));
v___x_1227_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1208_, v_end_1214_);
v___x_1228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1228_, 0, v___x_1226_);
lean_ctor_set(v___x_1228_, 1, v___x_1227_);
v___x_1229_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3));
v___x_1230_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1208_, v_prefix_1215_);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v___x_1229_);
lean_ctor_set(v___x_1231_, 1, v___x_1230_);
v___x_1232_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4));
lean_inc_ref_n(v___f_1209_, 2);
v___x_1233_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1209_, v_reverse_1216_);
v___x_1234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1232_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5));
v___x_1236_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1210_, v_limit_1217_);
v___x_1237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
v___x_1238_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_1239_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1209_, v_allowConcurrency_1218_);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1238_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1242_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1209_, v_noCache_1219_);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1241_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = lean_unsigned_to_nat(8u);
v___x_1245_ = lean_mk_empty_array_with_capacity(v___x_1244_);
v___x_1246_ = lean_array_push(v___x_1245_, v___x_1222_);
v___x_1247_ = lean_array_push(v___x_1246_, v___x_1225_);
v___x_1248_ = lean_array_push(v___x_1247_, v___x_1228_);
v___x_1249_ = lean_array_push(v___x_1248_, v___x_1231_);
v___x_1250_ = lean_array_push(v___x_1249_, v___x_1234_);
v___x_1251_ = lean_array_push(v___x_1250_, v___x_1237_);
v___x_1252_ = lean_array_push(v___x_1251_, v___x_1240_);
v___x_1253_ = lean_array_push(v___x_1252_, v___x_1243_);
v___x_1254_ = l_Lasm_JS_Web_Support_fields(v___x_1253_);
lean_dec_ref(v___x_1253_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0(lean_object* v___f_1263_, lean_object* v_d_1264_){
_start:
{
lean_object* v_allowConcurrency_1265_; lean_object* v_allowUnconfirmed_1266_; lean_object* v_noCache_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v_allowConcurrency_1265_ = lean_ctor_get(v_d_1264_, 0);
lean_inc(v_allowConcurrency_1265_);
v_allowUnconfirmed_1266_ = lean_ctor_get(v_d_1264_, 1);
lean_inc(v_allowUnconfirmed_1266_);
v_noCache_1267_ = lean_ctor_get(v_d_1264_, 2);
lean_inc(v_noCache_1267_);
lean_dec_ref(v_d_1264_);
v___x_1268_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1263_, 2);
v___x_1269_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1263_, v_allowConcurrency_1265_);
v___x_1270_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1268_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_1272_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1263_, v_allowUnconfirmed_1266_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1271_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1275_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1263_, v_noCache_1267_);
v___x_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1274_);
lean_ctor_set(v___x_1276_, 1, v___x_1275_);
v___x_1277_ = lean_unsigned_to_nat(3u);
v___x_1278_ = lean_mk_empty_array_with_capacity(v___x_1277_);
v___x_1279_ = lean_array_push(v___x_1278_, v___x_1270_);
v___x_1280_ = lean_array_push(v___x_1279_, v___x_1273_);
v___x_1281_ = lean_array_push(v___x_1280_, v___x_1276_);
v___x_1282_ = l_Lasm_JS_Web_Support_fields(v___x_1281_);
lean_dec_ref(v___x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1(lean_object* v_f_1293_, lean_object* v___f_1294_, lean_object* v_x_1295_){
_start:
{
if (lean_obj_tag(v_x_1295_) == 0)
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1305_; 
lean_dec_ref(v___f_1294_);
lean_dec_ref(v_f_1293_);
v_a_1297_ = lean_ctor_get(v_x_1295_, 0);
v_isSharedCheck_1305_ = !lean_is_exclusive(v_x_1295_);
if (v_isSharedCheck_1305_ == 0)
{
v___x_1299_ = v_x_1295_;
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v_x_1295_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1305_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1303_; 
v___x_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
return v___x_1303_;
}
}
}
else
{
lean_object* v_a_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_a_1306_ = lean_ctor_get(v_x_1295_, 0);
lean_inc(v_a_1306_);
lean_dec_ref_known(v_x_1295_, 1);
v___x_1307_ = lean_unsigned_to_nat(0u);
v___x_1308_ = 0;
v___x_1309_ = lean_apply_2(v_f_1293_, v_a_1306_, lean_box(0));
v___x_1310_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1307_, v___x_1308_, v___x_1309_, v___f_1294_);
return v___x_1310_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1___boxed(lean_object* v_f_1311_, lean_object* v___f_1312_, lean_object* v_x_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1(v_f_1311_, v___f_1312_, v_x_1313_);
return v_res_1315_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; 
v___x_1319_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1320_ = lean_string_utf8_byte_size(v___x_1319_);
return v___x_1320_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; uint8_t v___x_1323_; 
v___x_1321_ = lean_unsigned_to_nat(0u);
v___x_1322_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3);
v___x_1323_ = lean_nat_dec_eq(v___x_1322_, v___x_1321_);
return v___x_1323_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1328_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__8));
v___x_1329_ = lean_unsigned_to_nat(46u);
v___x_1330_ = lean_unsigned_to_nat(193u);
v___x_1331_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__7));
v___x_1332_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__6));
v___x_1333_ = l_mkPanicMessageWithDecl(v___x_1332_, v___x_1331_, v___x_1330_, v___x_1329_, v___x_1328_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(lean_object* v_context_1335_, lean_object* v_d_1336_){
_start:
{
lean_object* v___y_1339_; lean_object* v___y_1340_; 
if (lean_obj_tag(v_d_1336_) == 9)
{
lean_object* v_value_1344_; lean_object* v___x_1345_; 
v_value_1344_ = lean_ctor_get(v_d_1336_, 0);
lean_inc(v_value_1344_);
lean_dec_ref_known(v_d_1336_, 2);
v___x_1345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1345_, 0, v_value_1344_);
return v___x_1345_;
}
else
{
lean_object* v___x_1346_; lean_object* v_received_1348_; 
v___x_1346_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
if (lean_obj_tag(v_d_1336_) == 9)
{
lean_object* v_value_1362_; lean_object* v_description_1363_; uint8_t v___x_1364_; 
v_value_1362_ = lean_ctor_get(v_d_1336_, 0);
v_description_1363_ = lean_ctor_get(v_d_1336_, 1);
v___x_1364_ = lean_string_dec_eq(v_description_1363_, v___x_1346_);
if (v___x_1364_ == 0)
{
goto v___jp_1360_;
}
else
{
uint32_t v___x_1365_; uint64_t v___x_1366_; lean_object* v___x_1367_; uint32_t v___x_1368_; lean_object* v___x_1369_; 
lean_inc_n(v_value_1362_, 2);
lean_dec_ref_known(v_d_1336_, 2);
v___x_1365_ = 206;
v___x_1366_ = 0ULL;
v___x_1367_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1367_, 0, v_value_1362_);
lean_ctor_set(v___x_1367_, 1, v___x_1346_);
v___x_1368_ = lasm_js_value_handle(v_value_1362_);
lean_dec(v_value_1362_);
v___x_1369_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1365_, v___x_1366_, v___x_1367_, v___x_1368_);
lean_dec_ref_known(v___x_1367_, 2);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; uint8_t v___x_1371_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1370_);
lean_dec_ref_known(v___x_1369_, 1);
v___x_1371_ = lean_string_validate_utf8(v_a_1370_);
if (v___x_1371_ == 0)
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
lean_dec(v_a_1370_);
v___x_1372_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9);
v___x_1373_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1372_);
v_received_1348_ = v___x_1373_;
goto v___jp_1347_;
}
else
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_string_from_utf8_unchecked(v_a_1370_);
v_received_1348_ = v___x_1374_;
goto v___jp_1347_;
}
}
else
{
lean_object* v___x_1375_; 
lean_dec_ref_known(v___x_1369_, 1);
v___x_1375_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10));
v_received_1348_ = v___x_1375_;
goto v___jp_1347_;
}
}
}
else
{
goto v___jp_1360_;
}
v___jp_1347_:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; uint8_t v___x_1358_; 
v___x_1349_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_1350_ = lean_string_append(v___x_1349_, v_context_1335_);
v___x_1351_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1));
v___x_1352_ = lean_string_append(v___x_1350_, v___x_1351_);
v___x_1353_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__0));
v___x_1354_ = lean_string_append(v___x_1352_, v___x_1353_);
v___x_1355_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2));
v___x_1356_ = lean_string_append(v___x_1354_, v___x_1355_);
v___x_1357_ = lean_string_append(v___x_1356_, v_received_1348_);
lean_dec_ref(v_received_1348_);
v___x_1358_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; 
v___x_1359_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__5));
v___y_1339_ = v___x_1357_;
v___y_1340_ = v___x_1359_;
goto v___jp_1338_;
}
else
{
v___y_1339_ = v___x_1357_;
v___y_1340_ = v___x_1346_;
goto v___jp_1338_;
}
}
v___jp_1360_:
{
lean_object* v___x_1361_; 
v___x_1361_ = l_Lasm_JS_Data_describe(v_d_1336_);
v_received_1348_ = v___x_1361_;
goto v___jp_1347_;
}
}
v___jp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = lean_string_append(v___y_1339_, v___y_1340_);
v___x_1342_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1342_, 0, v___x_1341_);
v___x_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1343_, 0, v___x_1342_);
return v___x_1343_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1376_, lean_object* v_d_1377_, lean_object* v_a_1378_){
_start:
{
lean_object* v_res_1379_; 
v_res_1379_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v_context_1376_, v_d_1377_);
lean_dec_ref(v_context_1376_);
return v_res_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(lean_object* v_args_1381_, lean_object* v_i_1382_){
_start:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; uint8_t v___x_1390_; 
v___x_1384_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___closed__0));
v___x_1385_ = lean_unsigned_to_nat(1u);
v___x_1386_ = lean_nat_add(v_i_1382_, v___x_1385_);
v___x_1387_ = l_Nat_reprFast(v___x_1386_);
v___x_1388_ = lean_string_append(v___x_1384_, v___x_1387_);
lean_dec_ref(v___x_1387_);
v___x_1389_ = lean_array_get_size(v_args_1381_);
v___x_1390_ = lean_nat_dec_lt(v_i_1382_, v___x_1389_);
if (v___x_1390_ == 0)
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1391_ = lean_box(0);
v___x_1392_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v___x_1388_, v___x_1391_);
lean_dec_ref(v___x_1388_);
return v___x_1392_;
}
else
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = lean_array_fget_borrowed(v_args_1381_, v_i_1382_);
lean_inc(v___x_1393_);
v___x_1394_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v___x_1388_, v___x_1393_);
lean_dec_ref(v___x_1388_);
return v___x_1394_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___boxed(lean_object* v_args_1395_, lean_object* v_i_1396_, lean_object* v_a_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1395_, v_i_1396_);
lean_dec(v_i_1396_);
lean_dec_ref(v_args_1395_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0(lean_object* v___f_1399_, lean_object* v_args_1400_){
_start:
{
lean_object* v___x_1402_; uint8_t v___x_1403_; lean_object* v_val_1405_; lean_object* v___x_1408_; 
v___x_1402_ = lean_unsigned_to_nat(0u);
v___x_1403_ = 0;
v___x_1408_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1400_, v___x_1402_);
if (lean_obj_tag(v___x_1408_) == 0)
{
lean_object* v_a_1409_; lean_object* v___x_1411_; uint8_t v_isShared_1412_; uint8_t v_isSharedCheck_1416_; 
v_a_1409_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1416_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1416_ == 0)
{
v___x_1411_ = v___x_1408_;
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
else
{
lean_inc(v_a_1409_);
lean_dec(v___x_1408_);
v___x_1411_ = lean_box(0);
v_isShared_1412_ = v_isSharedCheck_1416_;
goto v_resetjp_1410_;
}
v_resetjp_1410_:
{
lean_object* v___x_1414_; 
if (v_isShared_1412_ == 0)
{
lean_ctor_set_tag(v___x_1411_, 1);
v___x_1414_ = v___x_1411_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v_a_1409_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
v_val_1405_ = v___x_1414_;
goto v___jp_1404_;
}
}
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
v_a_1417_ = lean_ctor_get(v___x_1408_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1408_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1408_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1408_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
lean_ctor_set_tag(v___x_1419_, 0);
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
v_val_1405_ = v___x_1422_;
goto v___jp_1404_;
}
}
}
v___jp_1404_:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1406_, 0, v_val_1405_);
v___x_1407_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1402_, v___x_1403_, v___x_1406_, v___f_1399_);
return v___x_1407_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0___boxed(lean_object* v___f_1425_, lean_object* v_args_1426_, lean_object* v___y_1427_){
_start:
{
lean_object* v_res_1428_; 
v_res_1428_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0(v___f_1425_, v_args_1426_);
lean_dec_ref(v_args_1426_);
return v_res_1428_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1430_ = lean_nat_abs(v___x_1429_);
return v___x_1430_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1(void){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; uint8_t v___x_1433_; 
v___x_1431_ = lean_cstr_to_nat("9007199254740991");
v___x_1432_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0);
v___x_1433_ = lean_nat_dec_le(v___x_1432_, v___x_1431_);
return v___x_1433_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2(void){
_start:
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1434_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1435_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1434_);
return v___x_1435_;
}
}
static double _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3(void){
_start:
{
lean_object* v___x_1436_; double v___x_1437_; 
v___x_1436_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1437_ = l_Float_ofInt(v___x_1436_);
return v___x_1437_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4(void){
_start:
{
double v___x_1438_; lean_object* v___x_1439_; 
v___x_1438_ = lean_float_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3);
v___x_1439_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1439_, 0, v___x_1438_);
return v___x_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn(lean_object* v_f_1440_){
_start:
{
lean_object* v___f_1442_; lean_object* v___f_1443_; lean_object* v___f_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___f_1442_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0));
v___f_1443_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1443_, 0, v_f_1440_);
lean_closure_set(v___f_1443_, 1, v___f_1442_);
v___f_1444_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1444_, 0, v___f_1443_);
v___x_1445_ = lean_unsigned_to_nat(0u);
v___x_1446_ = l_Lasm_JS_Function_ofFn(v___f_1444_, v___x_1445_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1448_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1448_, 1);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1451_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1449_, v___x_1450_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___y_1459_; uint8_t v___x_1486_; 
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1454_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1447_);
v___x_1455_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1455_, 0, v_a_1447_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1457_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1486_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; 
v___x_1487_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2);
v___y_1459_ = v___x_1487_;
goto v___jp_1458_;
}
else
{
lean_object* v___x_1488_; 
v___x_1488_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4);
v___y_1459_ = v___x_1488_;
goto v___jp_1458_;
}
v___jp_1458_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
lean_inc(v___y_1459_);
v___x_1460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1460_, 0, v___x_1457_);
lean_ctor_set(v___x_1460_, 1, v___y_1459_);
v___x_1461_ = lean_box(0);
v___x_1462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1462_, 0, v___x_1460_);
lean_ctor_set(v___x_1462_, 1, v___x_1461_);
v___x_1463_ = l_Lasm_JS_obj(v___x_1462_);
v___x_1464_ = lean_unsigned_to_nat(3u);
v___x_1465_ = lean_mk_empty_array_with_capacity(v___x_1464_);
v___x_1466_ = lean_array_push(v___x_1465_, v___x_1455_);
v___x_1467_ = lean_array_push(v___x_1466_, v___x_1456_);
v___x_1468_ = lean_array_push(v___x_1467_, v___x_1463_);
v___x_1469_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1452_, v___x_1453_, v___x_1468_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1476_ == 0)
{
lean_object* v_unused_1477_; 
v_unused_1477_ = lean_ctor_get(v___x_1469_, 0);
lean_dec(v_unused_1477_);
v___x_1471_ = v___x_1469_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_dec(v___x_1469_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v_a_1447_);
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1447_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
else
{
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec(v_a_1447_);
v_a_1478_ = lean_ctor_get(v___x_1469_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1469_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1469_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1469_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
lean_dec(v_a_1447_);
v_a_1489_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1451_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1451_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
else
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1504_; 
lean_dec(v_a_1447_);
v_a_1497_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1504_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1504_ == 0)
{
v___x_1499_ = v___x_1448_;
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1448_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1504_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
lean_object* v___x_1502_; 
if (v_isShared_1500_ == 0)
{
v___x_1502_ = v___x_1499_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1503_; 
v_reuseFailAlloc_1503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1503_, 0, v_a_1497_);
v___x_1502_ = v_reuseFailAlloc_1503_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
return v___x_1502_;
}
}
}
}
else
{
lean_object* v_a_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1512_; 
v_a_1505_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1507_ = v___x_1446_;
v_isShared_1508_ = v_isSharedCheck_1512_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_a_1505_);
lean_dec(v___x_1446_);
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
v_reuseFailAlloc_1511_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___boxed(lean_object* v_f_1513_, lean_object* v_a_1514_){
_start:
{
lean_object* v_res_1515_; 
v_res_1515_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn(v_f_1513_);
return v_res_1515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0(lean_object* v_f_1516_, lean_object* v_args_1517_){
_start:
{
lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1519_ = lean_unsigned_to_nat(0u);
v___x_1520_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1517_, v___x_1519_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v_a_1521_; lean_object* v___x_1522_; 
v_a_1521_ = lean_ctor_get(v___x_1520_, 0);
lean_inc(v_a_1521_);
lean_dec_ref_known(v___x_1520_, 1);
v___x_1522_ = lean_apply_2(v_f_1516_, v_a_1521_, lean_box(0));
return v___x_1522_;
}
else
{
lean_object* v_a_1523_; lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1530_; 
lean_dec_ref(v_f_1516_);
v_a_1523_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1530_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1525_ = v___x_1520_;
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
else
{
lean_inc(v_a_1523_);
lean_dec(v___x_1520_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1530_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1528_; 
if (v_isShared_1526_ == 0)
{
v___x_1528_ = v___x_1525_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_a_1523_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0___boxed(lean_object* v_f_1531_, lean_object* v_args_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0(v_f_1531_, v_args_1532_);
lean_dec_ref(v_args_1532_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn(lean_object* v_f_1535_){
_start:
{
lean_object* v___f_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; 
v___f_1537_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1537_, 0, v_f_1535_);
v___x_1538_ = lean_unsigned_to_nat(0u);
v___x_1539_ = l_Lasm_JS_Function_ofSyncFn(v___f_1537_, v___x_1538_);
if (lean_obj_tag(v___x_1539_) == 0)
{
lean_object* v_a_1540_; lean_object* v___x_1541_; 
v_a_1540_ = lean_ctor_get(v___x_1539_, 0);
lean_inc(v_a_1540_);
lean_dec_ref_known(v___x_1539_, 1);
v___x_1541_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___x_1543_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1544_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1542_, v___x_1543_);
if (lean_obj_tag(v___x_1544_) == 0)
{
lean_object* v_a_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___y_1552_; uint8_t v___x_1579_; 
v_a_1545_ = lean_ctor_get(v___x_1544_, 0);
lean_inc(v_a_1545_);
lean_dec_ref_known(v___x_1544_, 1);
v___x_1546_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1547_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1540_);
v___x_1548_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1548_, 0, v_a_1540_);
lean_ctor_set(v___x_1548_, 1, v___x_1547_);
v___x_1549_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1550_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1579_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1);
if (v___x_1579_ == 0)
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2);
v___y_1552_ = v___x_1580_;
goto v___jp_1551_;
}
else
{
lean_object* v___x_1581_; 
v___x_1581_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4);
v___y_1552_ = v___x_1581_;
goto v___jp_1551_;
}
v___jp_1551_:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
lean_inc(v___y_1552_);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1550_);
lean_ctor_set(v___x_1553_, 1, v___y_1552_);
v___x_1554_ = lean_box(0);
v___x_1555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1553_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = l_Lasm_JS_obj(v___x_1555_);
v___x_1557_ = lean_unsigned_to_nat(3u);
v___x_1558_ = lean_mk_empty_array_with_capacity(v___x_1557_);
v___x_1559_ = lean_array_push(v___x_1558_, v___x_1548_);
v___x_1560_ = lean_array_push(v___x_1559_, v___x_1549_);
v___x_1561_ = lean_array_push(v___x_1560_, v___x_1556_);
v___x_1562_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1545_, v___x_1546_, v___x_1561_);
if (lean_obj_tag(v___x_1562_) == 0)
{
lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1569_ == 0)
{
lean_object* v_unused_1570_; 
v_unused_1570_ = lean_ctor_get(v___x_1562_, 0);
lean_dec(v_unused_1570_);
v___x_1564_ = v___x_1562_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_dec(v___x_1562_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 0, v_a_1540_);
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1540_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
else
{
lean_object* v_a_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1578_; 
lean_dec(v_a_1540_);
v_a_1571_ = lean_ctor_get(v___x_1562_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1562_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1573_ = v___x_1562_;
v_isShared_1574_ = v_isSharedCheck_1578_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_a_1571_);
lean_dec(v___x_1562_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1578_;
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
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v_a_1571_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
}
}
else
{
lean_object* v_a_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1589_; 
lean_dec(v_a_1540_);
v_a_1582_ = lean_ctor_get(v___x_1544_, 0);
v_isSharedCheck_1589_ = !lean_is_exclusive(v___x_1544_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1584_ = v___x_1544_;
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_a_1582_);
lean_dec(v___x_1544_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1589_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v___x_1587_; 
if (v_isShared_1585_ == 0)
{
v___x_1587_ = v___x_1584_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_a_1582_);
v___x_1587_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
return v___x_1587_;
}
}
}
}
else
{
lean_object* v_a_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1597_; 
lean_dec(v_a_1540_);
v_a_1590_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1592_ = v___x_1541_;
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_a_1590_);
lean_dec(v___x_1541_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1597_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1593_ == 0)
{
v___x_1595_ = v___x_1592_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1590_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
v_a_1598_ = lean_ctor_get(v___x_1539_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1539_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1539_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1539_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___boxed(lean_object* v_f_1606_, lean_object* v_a_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn(v_f_1606_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___lam__0(lean_object* v___f_1609_, lean_object* v_d_1610_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; 
v___x_1611_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_1612_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1609_, v_d_1610_);
v___x_1613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1611_);
lean_ctor_set(v___x_1613_, 1, v___x_1612_);
v___x_1614_ = lean_unsigned_to_nat(1u);
v___x_1615_ = lean_mk_empty_array_with_capacity(v___x_1614_);
v___x_1616_ = lean_array_push(v___x_1615_, v___x_1613_);
v___x_1617_ = l_Lasm_JS_Web_Support_fields(v___x_1616_);
lean_dec_ref(v___x_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___lam__0(lean_object* v___f_1621_, lean_object* v_d_1622_){
_start:
{
lean_object* v_allowConcurrency_1623_; lean_object* v_allowUnconfirmed_1624_; lean_object* v___x_1626_; uint8_t v_isShared_1627_; uint8_t v_isSharedCheck_1641_; 
v_allowConcurrency_1623_ = lean_ctor_get(v_d_1622_, 0);
v_allowUnconfirmed_1624_ = lean_ctor_get(v_d_1622_, 1);
v_isSharedCheck_1641_ = !lean_is_exclusive(v_d_1622_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1626_ = v_d_1622_;
v_isShared_1627_ = v_isSharedCheck_1641_;
goto v_resetjp_1625_;
}
else
{
lean_inc(v_allowUnconfirmed_1624_);
lean_inc(v_allowConcurrency_1623_);
lean_dec(v_d_1622_);
v___x_1626_ = lean_box(0);
v_isShared_1627_ = v_isSharedCheck_1641_;
goto v_resetjp_1625_;
}
v_resetjp_1625_:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1631_; 
v___x_1628_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref(v___f_1621_);
v___x_1629_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1621_, v_allowConcurrency_1623_);
if (v_isShared_1627_ == 0)
{
lean_ctor_set(v___x_1626_, 1, v___x_1629_);
lean_ctor_set(v___x_1626_, 0, v___x_1628_);
v___x_1631_ = v___x_1626_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v___x_1628_);
lean_ctor_set(v_reuseFailAlloc_1640_, 1, v___x_1629_);
v___x_1631_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___x_1632_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_1633_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1621_, v_allowUnconfirmed_1624_);
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1632_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
v___x_1635_ = lean_unsigned_to_nat(2u);
v___x_1636_ = lean_mk_empty_array_with_capacity(v___x_1635_);
v___x_1637_ = lean_array_push(v___x_1636_, v___x_1631_);
v___x_1638_ = lean_array_push(v___x_1637_, v___x_1634_);
v___x_1639_ = l_Lasm_JS_Web_Support_fields(v___x_1638_);
lean_dec_ref(v___x_1638_);
return v___x_1639_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(lean_object* v_x_1645_){
_start:
{
if (lean_obj_tag(v_x_1645_) == 0)
{
lean_object* v___x_1646_; 
v___x_1646_ = lean_box(0);
return v___x_1646_;
}
else
{
lean_object* v_val_1647_; uint8_t v___x_1648_; 
v_val_1647_ = lean_ctor_get(v_x_1645_, 0);
v___x_1648_ = lean_unbox(v_val_1647_);
switch(v___x_1648_)
{
case 0:
{
lean_object* v___x_1649_; 
v___x_1649_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1));
return v___x_1649_;
}
case 1:
{
lean_object* v___x_1650_; 
v___x_1650_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3));
return v___x_1650_;
}
case 2:
{
lean_object* v___x_1651_; 
v___x_1651_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5));
return v___x_1651_;
}
default: 
{
lean_object* v___x_1652_; 
v___x_1652_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7));
return v___x_1652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0___boxed(lean_object* v_x_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(v_x_1653_);
lean_dec(v_x_1653_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(lean_object* v_x_1655_){
_start:
{
if (lean_obj_tag(v_x_1655_) == 0)
{
lean_object* v___x_1656_; 
v___x_1656_ = lean_box(0);
return v___x_1656_;
}
else
{
lean_object* v_val_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
v_val_1657_ = lean_ctor_get(v_x_1655_, 0);
v___x_1658_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
v___x_1659_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(v_val_1657_);
v___x_1660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1658_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = lean_unsigned_to_nat(1u);
v___x_1662_ = lean_mk_empty_array_with_capacity(v___x_1661_);
v___x_1663_ = lean_array_push(v___x_1662_, v___x_1660_);
v___x_1664_ = l_Lasm_JS_Web_Support_fields(v___x_1663_);
lean_dec_ref(v___x_1663_);
return v___x_1664_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0___boxed(lean_object* v_x_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(v_x_1665_);
lean_dec(v_x_1665_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId(lean_object* v_self_1668_, lean_object* v_options_1669_){
_start:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___closed__0));
v___x_1672_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(v_options_1669_);
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_mk_empty_array_with_capacity(v___x_1673_);
v___x_1675_ = lean_array_push(v___x_1674_, v___x_1672_);
v___x_1676_ = l_Lasm_JS_Web_Support_args(v___x_1675_);
v___x_1677_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1668_, v___x_1671_, v___x_1676_);
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
v___x_1683_ = v___x_1680_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_a_1678_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___boxed(lean_object* v_self_1694_, lean_object* v_options_1695_, lean_object* v_a_1696_){
_start:
{
lean_object* v_res_1697_; 
v_res_1697_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId(v_self_1694_, v_options_1695_);
lean_dec(v_options_1695_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName(lean_object* v_self_1699_, lean_object* v_name_1700_){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v___x_1702_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___closed__0));
v___x_1703_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1703_, 0, v_name_1700_);
v___x_1704_ = lean_unsigned_to_nat(1u);
v___x_1705_ = lean_mk_empty_array_with_capacity(v___x_1704_);
v___x_1706_ = lean_array_push(v___x_1705_, v___x_1703_);
v___x_1707_ = l_Lasm_JS_Web_Support_args(v___x_1706_);
v___x_1708_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1699_, v___x_1702_, v___x_1707_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1716_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1716_ == 0)
{
v___x_1711_ = v___x_1708_;
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1708_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1716_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1714_; 
if (v_isShared_1712_ == 0)
{
v___x_1714_ = v___x_1711_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_a_1709_);
v___x_1714_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
return v___x_1714_;
}
}
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
v_a_1717_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1708_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1708_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___boxed(lean_object* v_self_1725_, lean_object* v_name_1726_, lean_object* v_a_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName(v_self_1725_, v_name_1726_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString(lean_object* v_self_1730_, lean_object* v_id_1731_){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1733_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___closed__0));
v___x_1734_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1734_, 0, v_id_1731_);
v___x_1735_ = lean_unsigned_to_nat(1u);
v___x_1736_ = lean_mk_empty_array_with_capacity(v___x_1735_);
v___x_1737_ = lean_array_push(v___x_1736_, v___x_1734_);
v___x_1738_ = l_Lasm_JS_Web_Support_args(v___x_1737_);
v___x_1739_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1730_, v___x_1733_, v___x_1738_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
v_a_1740_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1739_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1739_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
else
{
lean_object* v_a_1748_; lean_object* v___x_1750_; uint8_t v_isShared_1751_; uint8_t v_isSharedCheck_1755_; 
v_a_1748_ = lean_ctor_get(v___x_1739_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1750_ = v___x_1739_;
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
else
{
lean_inc(v_a_1748_);
lean_dec(v___x_1739_);
v___x_1750_ = lean_box(0);
v_isShared_1751_ = v_isSharedCheck_1755_;
goto v_resetjp_1749_;
}
v_resetjp_1749_:
{
lean_object* v___x_1753_; 
if (v_isShared_1751_ == 0)
{
v___x_1753_ = v___x_1750_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1754_; 
v_reuseFailAlloc_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1754_, 0, v_a_1748_);
v___x_1753_ = v_reuseFailAlloc_1754_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
return v___x_1753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___boxed(lean_object* v_self_1756_, lean_object* v_id_1757_, lean_object* v_a_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString(v_self_1756_, v_id_1757_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(lean_object* v_x_1760_){
_start:
{
if (lean_obj_tag(v_x_1760_) == 0)
{
lean_object* v___x_1761_; 
v___x_1761_ = lean_box(0);
return v___x_1761_;
}
else
{
lean_object* v___x_1762_; 
v___x_1762_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__1));
return v___x_1762_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1___boxed(lean_object* v_x_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(v_x_1763_);
lean_dec(v_x_1763_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(lean_object* v_x_1765_){
_start:
{
if (lean_obj_tag(v_x_1765_) == 0)
{
lean_object* v___x_1766_; 
v___x_1766_ = lean_box(0);
return v___x_1766_;
}
else
{
lean_object* v_val_1767_; uint8_t v___x_1768_; 
v_val_1767_ = lean_ctor_get(v_x_1765_, 0);
v___x_1768_ = lean_unbox(v_val_1767_);
switch(v___x_1768_)
{
case 0:
{
lean_object* v___x_1769_; 
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__1));
return v___x_1769_;
}
case 1:
{
lean_object* v___x_1770_; 
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__3));
return v___x_1770_;
}
case 2:
{
lean_object* v___x_1771_; 
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__5));
return v___x_1771_;
}
case 3:
{
lean_object* v___x_1772_; 
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__7));
return v___x_1772_;
}
case 4:
{
lean_object* v___x_1773_; 
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__9));
return v___x_1773_;
}
case 5:
{
lean_object* v___x_1774_; 
v___x_1774_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__11));
return v___x_1774_;
}
case 6:
{
lean_object* v___x_1775_; 
v___x_1775_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__13));
return v___x_1775_;
}
case 7:
{
lean_object* v___x_1776_; 
v___x_1776_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__15));
return v___x_1776_;
}
case 8:
{
lean_object* v___x_1777_; 
v___x_1777_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__17));
return v___x_1777_;
}
case 9:
{
lean_object* v___x_1778_; 
v___x_1778_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__19));
return v___x_1778_;
}
default: 
{
lean_object* v___x_1779_; 
v___x_1779_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__21));
return v___x_1779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0___boxed(lean_object* v_x_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(v_x_1780_);
lean_dec(v_x_1780_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(lean_object* v_x_1782_){
_start:
{
if (lean_obj_tag(v_x_1782_) == 0)
{
lean_object* v___x_1783_; 
v___x_1783_ = lean_box(0);
return v___x_1783_;
}
else
{
lean_object* v_val_1784_; lean_object* v_locationHint_1785_; lean_object* v_routingMode_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1803_; 
v_val_1784_ = lean_ctor_get(v_x_1782_, 0);
lean_inc(v_val_1784_);
lean_dec_ref_known(v_x_1782_, 1);
v_locationHint_1785_ = lean_ctor_get(v_val_1784_, 0);
v_routingMode_1786_ = lean_ctor_get(v_val_1784_, 1);
v_isSharedCheck_1803_ = !lean_is_exclusive(v_val_1784_);
if (v_isSharedCheck_1803_ == 0)
{
v___x_1788_ = v_val_1784_;
v_isShared_1789_ = v_isSharedCheck_1803_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_routingMode_1786_);
lean_inc(v_locationHint_1785_);
lean_dec(v_val_1784_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1803_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1793_; 
v___x_1790_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__0));
v___x_1791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(v_locationHint_1785_);
lean_dec(v_locationHint_1785_);
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 1, v___x_1791_);
lean_ctor_set(v___x_1788_, 0, v___x_1790_);
v___x_1793_ = v___x_1788_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v___x_1790_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v___x_1791_);
v___x_1793_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1794_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__1));
v___x_1795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(v_routingMode_1786_);
lean_dec(v_routingMode_1786_);
v___x_1796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1794_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = lean_unsigned_to_nat(2u);
v___x_1798_ = lean_mk_empty_array_with_capacity(v___x_1797_);
v___x_1799_ = lean_array_push(v___x_1798_, v___x_1793_);
v___x_1800_ = lean_array_push(v___x_1799_, v___x_1796_);
v___x_1801_ = l_Lasm_JS_Web_Support_fields(v___x_1800_);
lean_dec_ref(v___x_1800_);
return v___x_1801_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get(lean_object* v_self_1805_, lean_object* v_id_1806_, lean_object* v_options_1807_){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1809_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_1810_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1811_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1811_, 0, v_id_1806_);
lean_ctor_set(v___x_1811_, 1, v___x_1810_);
v___x_1812_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(v_options_1807_);
v___x_1813_ = lean_unsigned_to_nat(2u);
v___x_1814_ = lean_mk_empty_array_with_capacity(v___x_1813_);
v___x_1815_ = lean_array_push(v___x_1814_, v___x_1811_);
v___x_1816_ = lean_array_push(v___x_1815_, v___x_1812_);
v___x_1817_ = l_Lasm_JS_Web_Support_args(v___x_1816_);
v___x_1818_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1805_, v___x_1809_, v___x_1817_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1826_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1821_ = v___x_1818_;
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1818_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1824_; 
if (v_isShared_1822_ == 0)
{
v___x_1824_ = v___x_1821_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_a_1819_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
else
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
v_a_1827_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1818_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1818_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___boxed(lean_object* v_self_1835_, lean_object* v_id_1836_, lean_object* v_options_1837_, lean_object* v_a_1838_){
_start:
{
lean_object* v_res_1839_; 
v_res_1839_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_get(v_self_1835_, v_id_1836_, v_options_1837_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName(lean_object* v_self_1841_, lean_object* v_name_1842_, lean_object* v_options_1843_){
_start:
{
lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1845_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___closed__0));
v___x_1846_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1846_, 0, v_name_1842_);
v___x_1847_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(v_options_1843_);
v___x_1848_ = lean_unsigned_to_nat(2u);
v___x_1849_ = lean_mk_empty_array_with_capacity(v___x_1848_);
v___x_1850_ = lean_array_push(v___x_1849_, v___x_1846_);
v___x_1851_ = lean_array_push(v___x_1850_, v___x_1847_);
v___x_1852_ = l_Lasm_JS_Web_Support_args(v___x_1851_);
v___x_1853_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1841_, v___x_1845_, v___x_1852_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1853_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1853_);
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
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
v_a_1862_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1853_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1853_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___boxed(lean_object* v_self_1870_, lean_object* v_name_1871_, lean_object* v_options_1872_, lean_object* v_a_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName(v_self_1870_, v_name_1871_, v_options_1872_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction(lean_object* v_self_1875_, uint8_t v_jurisdiction_1876_){
_start:
{
lean_object* v___x_1878_; lean_object* v___y_1880_; 
v___x_1878_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
switch(v_jurisdiction_1876_)
{
case 0:
{
lean_object* v___x_1902_; 
v___x_1902_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1));
v___y_1880_ = v___x_1902_;
goto v___jp_1879_;
}
case 1:
{
lean_object* v___x_1903_; 
v___x_1903_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3));
v___y_1880_ = v___x_1903_;
goto v___jp_1879_;
}
case 2:
{
lean_object* v___x_1904_; 
v___x_1904_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5));
v___y_1880_ = v___x_1904_;
goto v___jp_1879_;
}
default: 
{
lean_object* v___x_1905_; 
v___x_1905_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7));
v___y_1880_ = v___x_1905_;
goto v___jp_1879_;
}
}
v___jp_1879_:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1881_ = lean_unsigned_to_nat(1u);
v___x_1882_ = lean_mk_empty_array_with_capacity(v___x_1881_);
lean_inc(v___y_1880_);
v___x_1883_ = lean_array_push(v___x_1882_, v___y_1880_);
v___x_1884_ = l_Lasm_JS_Web_Support_args(v___x_1883_);
v___x_1885_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1875_, v___x_1878_, v___x_1884_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1893_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1888_ = v___x_1885_;
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1885_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1893_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1891_; 
if (v_isShared_1889_ == 0)
{
v___x_1891_ = v___x_1888_;
goto v_reusejp_1890_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1892_, 0, v_a_1886_);
v___x_1891_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1890_;
}
v_reusejp_1890_:
{
return v___x_1891_;
}
}
}
else
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1901_; 
v_a_1894_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1901_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1901_ == 0)
{
v___x_1896_ = v___x_1885_;
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1885_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1901_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
lean_object* v___x_1899_; 
if (v_isShared_1897_ == 0)
{
v___x_1899_ = v___x_1896_;
goto v_reusejp_1898_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v_a_1894_);
v___x_1899_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1898_;
}
v_reusejp_1898_:
{
return v___x_1899_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction___boxed(lean_object* v_self_1906_, lean_object* v_jurisdiction_1907_, lean_object* v_a_1908_){
_start:
{
uint8_t v_jurisdiction_boxed_1909_; lean_object* v_res_1910_; 
v_jurisdiction_boxed_1909_ = lean_unbox(v_jurisdiction_1907_);
v_res_1910_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction(v_self_1906_, v_jurisdiction_boxed_1909_);
return v_res_1910_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1911_; uint64_t v___x_1912_; 
v___x_1911_ = 0;
v___x_1912_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1911_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(lean_object* v_o_1914_, lean_object* v_key_1915_){
_start:
{
lean_object* v_k_1917_; lean_object* v___x_1918_; 
v_k_1917_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1917_, 0, v_key_1915_);
v___x_1918_ = l_Lasm_JS_Wire_encodeIO(v_k_1917_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_a_1919_; uint32_t v___x_1920_; uint32_t v___x_1921_; uint64_t v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_a_1919_ = lean_ctor_get(v___x_1918_, 0);
lean_inc(v_a_1919_);
lean_dec_ref_known(v___x_1918_, 1);
v___x_1920_ = 203;
v___x_1921_ = lasm_js_value_handle(v_o_1914_);
v___x_1922_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
v___x_1923_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1924_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1924_, 0, v_o_1914_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_unsigned_to_nat(2u);
v___x_1926_ = lean_mk_empty_array_with_capacity(v___x_1925_);
lean_inc_ref(v_k_1917_);
v___x_1927_ = lean_array_push(v___x_1926_, v_k_1917_);
v___x_1928_ = lean_array_push(v___x_1927_, v___x_1924_);
v___x_1929_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1928_);
v___x_1930_ = lasm_js_call(v___x_1920_, v___x_1921_, v___x_1922_, v_a_1919_, v___x_1929_);
lean_dec_ref_known(v___x_1929_, 1);
lean_dec(v_a_1919_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v___x_1932_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__1));
v___x_1933_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1917_);
v___x_1934_ = lean_string_append(v___x_1932_, v___x_1933_);
lean_dec_ref(v___x_1933_);
v___x_1935_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1934_, v_a_1931_);
lean_dec(v_a_1931_);
lean_dec_ref(v___x_1934_);
return v___x_1935_;
}
else
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1943_; 
lean_dec_ref_known(v_k_1917_, 1);
v_a_1936_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1938_ = v___x_1930_;
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1930_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1943_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1941_; 
if (v_isShared_1939_ == 0)
{
v___x_1941_ = v___x_1938_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v_a_1936_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref_known(v_k_1917_, 1);
lean_dec(v_o_1914_);
v_a_1944_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1918_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1918_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___boxed(lean_object* v_o_1952_, lean_object* v_key_1953_, lean_object* v_a_1954_){
_start:
{
lean_object* v_res_1955_; 
v_res_1955_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_o_1952_, v_key_1953_);
return v_res_1955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name(lean_object* v_self_1957_){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0));
v___x_1960_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_1957_, v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name___boxed(lean_object* v_self_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lasm_JS_Cloudflare_DurableObjectId_name(v_self_1961_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction(lean_object* v_self_1964_){
_start:
{
lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1966_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
v___x_1967_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_1964_, v___x_1966_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction___boxed(lean_object* v_self_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction(v_self_1968_);
return v_res_1970_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2(void){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__1));
v___x_1975_ = l_Lasm_JS_Web_Support_args(v___x_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString(lean_object* v_self_1976_){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__0));
v___x_1979_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_1980_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1976_, v___x_1978_, v___x_1979_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString___boxed(lean_object* v_self_1981_, lean_object* v_a_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_Lasm_JS_Cloudflare_DurableObjectId_toString(v_self_1981_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals(lean_object* v_self_1985_, lean_object* v_other_1986_){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; 
v___x_1988_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_equals___closed__0));
v___x_1989_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1990_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1990_, 0, v_other_1986_);
lean_ctor_set(v___x_1990_, 1, v___x_1989_);
v___x_1991_ = lean_unsigned_to_nat(1u);
v___x_1992_ = lean_mk_empty_array_with_capacity(v___x_1991_);
v___x_1993_ = lean_array_push(v___x_1992_, v___x_1990_);
v___x_1994_ = l_Lasm_JS_Web_Support_args(v___x_1993_);
v___x_1995_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_1985_, v___x_1988_, v___x_1994_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals___boxed(lean_object* v_self_1996_, lean_object* v_other_1997_, lean_object* v_a_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l_Lasm_JS_Cloudflare_DurableObjectId_equals(v_self_1996_, v_other_1997_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id(lean_object* v_self_2001_){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; 
v___x_2003_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0));
v___x_2004_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2001_, v___x_2003_);
if (lean_obj_tag(v___x_2004_) == 0)
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2012_; 
v_a_2005_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_2007_ = v___x_2004_;
v_isShared_2008_ = v_isSharedCheck_2012_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v___x_2004_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2012_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2010_; 
if (v_isShared_2008_ == 0)
{
v___x_2010_ = v___x_2007_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_a_2005_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
else
{
lean_object* v_a_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
v_a_2013_ = lean_ctor_get(v___x_2004_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2004_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_2004_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_a_2013_);
lean_dec(v___x_2004_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id___boxed(lean_object* v_self_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Lasm_JS_Cloudflare_DurableObjectStub_id(v_self_2021_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name(lean_object* v_self_2024_){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0));
v___x_2027_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_2024_, v___x_2026_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name___boxed(lean_object* v_self_2028_, lean_object* v_a_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Lasm_JS_Cloudflare_DurableObjectStub_name(v_self_2028_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0(lean_object* v_x_2031_){
_start:
{
if (lean_obj_tag(v_x_2031_) == 0)
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2041_; 
v_a_2033_ = lean_ctor_get(v_x_2031_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v_x_2031_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2035_ = v_x_2031_;
v_isShared_2036_ = v_isSharedCheck_2041_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v_x_2031_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2041_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
lean_object* v___x_2039_; 
v___x_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2039_, 0, v___x_2038_);
return v___x_2039_;
}
}
}
else
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2050_; 
v_a_2042_ = lean_ctor_get(v_x_2031_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_x_2031_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2044_ = v_x_2031_;
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v_x_2031_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2042_);
v___x_2047_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
return v___x_2048_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0___boxed(lean_object* v_x_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0(v_x_2051_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch(lean_object* v_self_2056_, lean_object* v_input_2057_, lean_object* v_init_2058_){
_start:
{
lean_object* v___f_2060_; lean_object* v___x_2061_; lean_object* v___y_2063_; 
v___f_2060_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__0));
v___x_2061_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__1));
if (lean_obj_tag(v_input_2057_) == 1)
{
lean_object* v_value_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2081_; 
v_value_2074_ = lean_ctor_get(v_input_2057_, 0);
v_isSharedCheck_2081_ = !lean_is_exclusive(v_input_2057_);
if (v_isSharedCheck_2081_ == 0)
{
v___x_2076_ = v_input_2057_;
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_value_2074_);
lean_dec(v_input_2057_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2081_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v___x_2079_; 
if (v_isShared_2077_ == 0)
{
lean_ctor_set_tag(v___x_2076_, 4);
v___x_2079_ = v___x_2076_;
goto v_reusejp_2078_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_value_2074_);
v___x_2079_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2078_;
}
v_reusejp_2078_:
{
v___y_2063_ = v___x_2079_;
goto v___jp_2062_;
}
}
}
else
{
lean_object* v_value_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v_value_2082_ = lean_ctor_get(v_input_2057_, 0);
lean_inc(v_value_2082_);
lean_dec_ref(v_input_2057_);
v___x_2083_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2084_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2084_, 0, v_value_2082_);
lean_ctor_set(v___x_2084_, 1, v___x_2083_);
v___y_2063_ = v___x_2084_;
goto v___jp_2062_;
}
v___jp_2062_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2064_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Request_new_spec__0(v_init_2058_);
v___x_2065_ = lean_unsigned_to_nat(2u);
v___x_2066_ = lean_mk_empty_array_with_capacity(v___x_2065_);
v___x_2067_ = lean_array_push(v___x_2066_, v___y_2063_);
v___x_2068_ = lean_array_push(v___x_2067_, v___x_2064_);
v___x_2069_ = l_Lasm_JS_Web_Support_args(v___x_2068_);
v___x_2070_ = lean_unsigned_to_nat(0u);
v___x_2071_ = 0;
v___x_2072_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2056_, v___x_2061_, v___x_2069_);
v___x_2073_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2070_, v___x_2071_, v___x_2072_, v___f_2060_);
return v___x_2073_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___boxed(lean_object* v_self_2085_, lean_object* v_input_2086_, lean_object* v_init_2087_, lean_object* v_a_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_Lasm_JS_Cloudflare_DurableObjectStub_fetch(v_self_2085_, v_input_2086_, v_init_2087_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect(lean_object* v_self_2091_, lean_object* v_address_2092_, lean_object* v_options_2093_){
_start:
{
lean_object* v___x_2095_; lean_object* v___y_2097_; 
v___x_2095_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_connect___closed__0));
if (lean_obj_tag(v_address_2092_) == 0)
{
lean_object* v_value_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2154_; 
v_value_2121_ = lean_ctor_get(v_address_2092_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v_address_2092_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2123_ = v_address_2092_;
v_isShared_2124_ = v_isSharedCheck_2154_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_value_2121_);
lean_dec(v_address_2092_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2154_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v_hostname_2125_; lean_object* v_port_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2153_; 
v_hostname_2125_ = lean_ctor_get(v_value_2121_, 0);
v_port_2126_ = lean_ctor_get(v_value_2121_, 1);
v_isSharedCheck_2153_ = !lean_is_exclusive(v_value_2121_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2128_ = v_value_2121_;
v_isShared_2129_ = v_isSharedCheck_2153_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_port_2126_);
lean_inc(v_hostname_2125_);
lean_dec(v_value_2121_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2153_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2130_; lean_object* v___x_2132_; 
v___x_2130_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0));
if (v_isShared_2124_ == 0)
{
lean_ctor_set_tag(v___x_2123_, 4);
lean_ctor_set(v___x_2123_, 0, v_hostname_2125_);
v___x_2132_ = v___x_2123_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_hostname_2125_);
v___x_2132_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2134_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 1, v___x_2132_);
lean_ctor_set(v___x_2128_, 0, v___x_2130_);
v___x_2134_ = v___x_2128_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v___x_2130_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
lean_object* v___x_2135_; lean_object* v___y_2137_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; uint8_t v___x_2147_; 
v___x_2135_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1));
v___x_2144_ = lean_nat_to_int(v_port_2126_);
v___x_2145_ = lean_nat_abs(v___x_2144_);
v___x_2146_ = lean_cstr_to_nat("9007199254740991");
v___x_2147_ = lean_nat_dec_le(v___x_2145_, v___x_2146_);
lean_dec(v___x_2145_);
if (v___x_2147_ == 0)
{
lean_object* v___x_2148_; 
v___x_2148_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2148_, 0, v___x_2144_);
v___y_2137_ = v___x_2148_;
goto v___jp_2136_;
}
else
{
double v___x_2149_; lean_object* v___x_2150_; 
v___x_2149_ = l_Float_ofInt(v___x_2144_);
lean_dec(v___x_2144_);
v___x_2150_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2150_, 0, v___x_2149_);
v___y_2137_ = v___x_2150_;
goto v___jp_2136_;
}
v___jp_2136_:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2135_);
lean_ctor_set(v___x_2138_, 1, v___y_2137_);
v___x_2139_ = lean_unsigned_to_nat(2u);
v___x_2140_ = lean_mk_empty_array_with_capacity(v___x_2139_);
v___x_2141_ = lean_array_push(v___x_2140_, v___x_2134_);
v___x_2142_ = lean_array_push(v___x_2141_, v___x_2138_);
v___x_2143_ = l_Lasm_JS_Web_Support_fields(v___x_2142_);
lean_dec_ref(v___x_2142_);
v___y_2097_ = v___x_2143_;
goto v___jp_2096_;
}
}
}
}
}
}
else
{
lean_object* v_value_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
v_value_2155_ = lean_ctor_get(v_address_2092_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v_address_2092_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2157_ = v_address_2092_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_value_2155_);
lean_dec(v_address_2092_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
lean_ctor_set_tag(v___x_2157_, 4);
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_value_2155_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
v___y_2097_ = v___x_2160_;
goto v___jp_2096_;
}
}
}
v___jp_2096_:
{
lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2098_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_connect_spec__0(v_options_2093_);
v___x_2099_ = lean_unsigned_to_nat(2u);
v___x_2100_ = lean_mk_empty_array_with_capacity(v___x_2099_);
v___x_2101_ = lean_array_push(v___x_2100_, v___y_2097_);
v___x_2102_ = lean_array_push(v___x_2101_, v___x_2098_);
v___x_2103_ = l_Lasm_JS_Web_Support_args(v___x_2102_);
v___x_2104_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2091_, v___x_2095_, v___x_2103_);
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
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
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
v___x_2118_ = v___x_2115_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_a_2113_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect___boxed(lean_object* v_self_2163_, lean_object* v_address_2164_, lean_object* v_options_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Lasm_JS_Cloudflare_DurableObjectStub_connect(v_self_2163_, v_address_2164_, v_options_2165_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props(lean_object* v_self_2169_){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2171_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_props___closed__0));
v___x_2172_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2169_, v___x_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props___boxed(lean_object* v_self_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v_res_2175_; 
v_res_2175_ = l_Lasm_JS_Cloudflare_DurableObjectState_props(v_self_2173_);
return v_res_2175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id(lean_object* v_self_2176_){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2178_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0));
v___x_2179_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2176_, v___x_2178_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
v_a_2180_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2179_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2179_);
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
v_reuseFailAlloc_2186_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2195_; 
v_a_2188_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2195_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2195_ == 0)
{
v___x_2190_ = v___x_2179_;
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_a_2188_);
lean_dec(v___x_2179_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2195_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2193_; 
if (v_isShared_2191_ == 0)
{
v___x_2193_ = v___x_2190_;
goto v_reusejp_2192_;
}
else
{
lean_object* v_reuseFailAlloc_2194_; 
v_reuseFailAlloc_2194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2194_, 0, v_a_2188_);
v___x_2193_ = v_reuseFailAlloc_2194_;
goto v_reusejp_2192_;
}
v_reusejp_2192_:
{
return v___x_2193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id___boxed(lean_object* v_self_2196_, lean_object* v_a_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lasm_JS_Cloudflare_DurableObjectState_id(v_self_2196_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage(lean_object* v_self_2200_){
_start:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_storage___closed__0));
v___x_2203_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2200_, v___x_2202_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2211_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2206_ = v___x_2203_;
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2203_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2209_; 
if (v_isShared_2207_ == 0)
{
v___x_2209_ = v___x_2206_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2204_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
v_a_2212_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___x_2203_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___x_2203_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage___boxed(lean_object* v_self_2220_, lean_object* v_a_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lasm_JS_Cloudflare_DurableObjectState_storage(v_self_2220_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil(lean_object* v_self_2224_, lean_object* v_promise_2225_){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2227_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___closed__0));
v___x_2228_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2229_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2229_, 0, v_promise_2225_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = lean_unsigned_to_nat(1u);
v___x_2231_ = lean_mk_empty_array_with_capacity(v___x_2230_);
v___x_2232_ = lean_array_push(v___x_2231_, v___x_2229_);
v___x_2233_ = l_Lasm_JS_Web_Support_args(v___x_2232_);
v___x_2234_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2224_, v___x_2227_, v___x_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___boxed(lean_object* v_self_2235_, lean_object* v_promise_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil(v_self_2235_, v_promise_2236_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile(lean_object* v_self_2240_, lean_object* v_callback_2241_){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2243_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___closed__0));
v___x_2244_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2245_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2245_, 0, v_callback_2241_);
lean_ctor_set(v___x_2245_, 1, v___x_2244_);
v___x_2246_ = lean_unsigned_to_nat(1u);
v___x_2247_ = lean_mk_empty_array_with_capacity(v___x_2246_);
v___x_2248_ = lean_array_push(v___x_2247_, v___x_2245_);
v___x_2249_ = l_Lasm_JS_Web_Support_args(v___x_2248_);
v___x_2250_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_2240_, v___x_2243_, v___x_2249_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___boxed(lean_object* v_self_2251_, lean_object* v_callback_2252_, lean_object* v_a_2253_){
_start:
{
lean_object* v_res_2254_; 
v_res_2254_ = l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile(v_self_2251_, v_callback_2252_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(lean_object* v_x_2255_){
_start:
{
if (lean_obj_tag(v_x_2255_) == 0)
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_box(0);
return v___x_2256_;
}
else
{
lean_object* v_val_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v_val_2257_ = lean_ctor_get(v_x_2255_, 0);
v___x_2258_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0));
v___x_2259_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2257_);
v___x_2260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2258_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
v___x_2261_ = lean_unsigned_to_nat(1u);
v___x_2262_ = lean_mk_empty_array_with_capacity(v___x_2261_);
v___x_2263_ = lean_array_push(v___x_2262_, v___x_2260_);
v___x_2264_ = l_Lasm_JS_Web_Support_fields(v___x_2263_);
lean_dec_ref(v___x_2263_);
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0___boxed(lean_object* v_x_2265_){
_start:
{
lean_object* v_res_2266_; 
v_res_2266_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(v_x_2265_);
lean_dec(v_x_2265_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort(lean_object* v_self_2268_, lean_object* v_reason_2269_, lean_object* v_options_2270_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2272_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_abort___closed__0));
v___x_2273_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_2269_);
v___x_2274_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(v_options_2270_);
v___x_2275_ = lean_unsigned_to_nat(2u);
v___x_2276_ = lean_mk_empty_array_with_capacity(v___x_2275_);
v___x_2277_ = lean_array_push(v___x_2276_, v___x_2273_);
v___x_2278_ = lean_array_push(v___x_2277_, v___x_2274_);
v___x_2279_ = l_Lasm_JS_Web_Support_args(v___x_2278_);
v___x_2280_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2268_, v___x_2272_, v___x_2279_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort___boxed(lean_object* v_self_2281_, lean_object* v_reason_2282_, lean_object* v_options_2283_, lean_object* v_a_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Lasm_JS_Cloudflare_DurableObjectState_abort(v_self_2281_, v_reason_2282_, v_options_2283_);
lean_dec(v_options_2283_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(lean_object* v_x_2286_){
_start:
{
if (lean_obj_tag(v_x_2286_) == 0)
{
lean_object* v___x_2287_; 
v___x_2287_ = lean_box(0);
return v___x_2287_;
}
else
{
lean_object* v_val_2288_; lean_object* v_allowConcurrency_2289_; lean_object* v_noCache_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2307_; 
v_val_2288_ = lean_ctor_get(v_x_2286_, 0);
lean_inc(v_val_2288_);
lean_dec_ref_known(v_x_2286_, 1);
v_allowConcurrency_2289_ = lean_ctor_get(v_val_2288_, 0);
v_noCache_2290_ = lean_ctor_get(v_val_2288_, 1);
v_isSharedCheck_2307_ = !lean_is_exclusive(v_val_2288_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2292_ = v_val_2288_;
v_isShared_2293_ = v_isSharedCheck_2307_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_noCache_2290_);
lean_inc(v_allowConcurrency_2289_);
lean_dec(v_val_2288_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2307_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2297_; 
v___x_2294_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2295_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2289_);
lean_dec(v_allowConcurrency_2289_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 1, v___x_2295_);
lean_ctor_set(v___x_2292_, 0, v___x_2294_);
v___x_2297_ = v___x_2292_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v___x_2294_);
lean_ctor_set(v_reuseFailAlloc_2306_, 1, v___x_2295_);
v___x_2297_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2298_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2299_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2290_);
lean_dec(v_noCache_2290_);
v___x_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2298_);
lean_ctor_set(v___x_2300_, 1, v___x_2299_);
v___x_2301_ = lean_unsigned_to_nat(2u);
v___x_2302_ = lean_mk_empty_array_with_capacity(v___x_2301_);
v___x_2303_ = lean_array_push(v___x_2302_, v___x_2297_);
v___x_2304_ = lean_array_push(v___x_2303_, v___x_2300_);
v___x_2305_ = l_Lasm_JS_Web_Support_fields(v___x_2304_);
lean_dec_ref(v___x_2304_);
return v___x_2305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get(lean_object* v_self_2308_, lean_object* v_key_2309_, lean_object* v_options_2310_){
_start:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2312_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_2313_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2313_, 0, v_key_2309_);
v___x_2314_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_2310_);
v___x_2315_ = lean_unsigned_to_nat(2u);
v___x_2316_ = lean_mk_empty_array_with_capacity(v___x_2315_);
v___x_2317_ = lean_array_push(v___x_2316_, v___x_2313_);
v___x_2318_ = lean_array_push(v___x_2317_, v___x_2314_);
v___x_2319_ = l_Lasm_JS_Web_Support_args(v___x_2318_);
v___x_2320_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_2308_, v___x_2312_, v___x_2319_);
return v___x_2320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get___boxed(lean_object* v_self_2321_, lean_object* v_key_2322_, lean_object* v_options_2323_, lean_object* v_a_2324_){
_start:
{
lean_object* v_res_2325_; 
v_res_2325_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_get(v_self_2321_, v_key_2322_, v_options_2323_);
return v_res_2325_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2331_, size_t v_i_2332_, lean_object* v_bs_2333_){
_start:
{
uint8_t v___x_2336_; 
v___x_2336_ = lean_usize_dec_lt(v_i_2332_, v_sz_2331_);
if (v___x_2336_ == 0)
{
lean_object* v___x_2337_; 
v___x_2337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2337_, 0, v_bs_2333_);
return v___x_2337_;
}
else
{
lean_object* v_v_2338_; 
v_v_2338_ = lean_array_uget_borrowed(v_bs_2333_, v_i_2332_);
if (lean_obj_tag(v_v_2338_) == 7)
{
lean_object* v_items_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; uint8_t v___x_2342_; 
v_items_2339_ = lean_ctor_get(v_v_2338_, 0);
lean_inc_ref(v_items_2339_);
v___x_2340_ = lean_array_get_size(v_items_2339_);
v___x_2341_ = lean_unsigned_to_nat(2u);
v___x_2342_ = lean_nat_dec_eq(v___x_2340_, v___x_2341_);
if (v___x_2342_ == 0)
{
lean_dec_ref(v_items_2339_);
lean_dec_ref(v_bs_2333_);
goto v___jp_2334_;
}
else
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = lean_unsigned_to_nat(0u);
v___x_2344_ = lean_array_fget_borrowed(v_items_2339_, v___x_2343_);
if (lean_obj_tag(v___x_2344_) == 4)
{
lean_object* v_s_2345_; lean_object* v_bs_x27_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; size_t v___x_2350_; size_t v___x_2351_; lean_object* v___x_2352_; 
v_s_2345_ = lean_ctor_get(v___x_2344_, 0);
lean_inc_ref(v_s_2345_);
v_bs_x27_2346_ = lean_array_uset(v_bs_2333_, v_i_2332_, v___x_2343_);
v___x_2347_ = lean_unsigned_to_nat(1u);
v___x_2348_ = lean_array_fget(v_items_2339_, v___x_2347_);
lean_dec_ref(v_items_2339_);
v___x_2349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2349_, 0, v_s_2345_);
lean_ctor_set(v___x_2349_, 1, v___x_2348_);
v___x_2350_ = ((size_t)1ULL);
v___x_2351_ = lean_usize_add(v_i_2332_, v___x_2350_);
v___x_2352_ = lean_array_uset(v_bs_x27_2346_, v_i_2332_, v___x_2349_);
v_i_2332_ = v___x_2351_;
v_bs_2333_ = v___x_2352_;
goto _start;
}
else
{
lean_object* v___x_2354_; 
lean_dec_ref(v_items_2339_);
lean_dec_ref(v_bs_2333_);
v___x_2354_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__2));
return v___x_2354_;
}
}
}
else
{
lean_dec_ref(v_bs_2333_);
goto v___jp_2334_;
}
}
v___jp_2334_:
{
lean_object* v___x_2335_; 
v___x_2335_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2335_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2355_, lean_object* v_i_2356_, lean_object* v_bs_2357_){
_start:
{
size_t v_sz_boxed_2358_; size_t v_i_boxed_2359_; lean_object* v_res_2360_; 
v_sz_boxed_2358_ = lean_unbox_usize(v_sz_2355_);
lean_dec(v_sz_2355_);
v_i_boxed_2359_ = lean_unbox_usize(v_i_2356_);
lean_dec(v_i_2356_);
v_res_2360_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2358_, v_i_boxed_2359_, v_bs_2357_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(lean_object* v_context_2366_, lean_object* v_d_2367_){
_start:
{
lean_object* v___y_2370_; lean_object* v___y_2371_; lean_object* v___y_2376_; lean_object* v_received_2377_; lean_object* v___y_2396_; lean_object* v_a_2399_; 
if (lean_obj_tag(v_d_2367_) == 7)
{
lean_object* v_items_2423_; size_t v_sz_2424_; size_t v___x_2425_; lean_object* v___x_2426_; 
v_items_2423_ = lean_ctor_get(v_d_2367_, 0);
v_sz_2424_ = lean_array_size(v_items_2423_);
v___x_2425_ = ((size_t)0ULL);
lean_inc_ref(v_items_2423_);
v___x_2426_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(v_sz_2424_, v___x_2425_, v_items_2423_);
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; uint8_t v___x_2431_; 
v_a_2427_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_a_2427_);
lean_dec_ref_known(v___x_2426_, 1);
v___x_2428_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__3));
v___x_2429_ = lean_string_utf8_byte_size(v_a_2427_);
v___x_2430_ = lean_unsigned_to_nat(0u);
v___x_2431_ = lean_nat_dec_eq(v___x_2429_, v___x_2430_);
if (v___x_2431_ == 0)
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4));
v___x_2433_ = lean_string_append(v___x_2432_, v_a_2427_);
lean_dec(v_a_2427_);
v___x_2434_ = lean_string_append(v___x_2428_, v___x_2433_);
lean_dec_ref(v___x_2433_);
v_a_2399_ = v___x_2434_;
goto v___jp_2398_;
}
else
{
lean_dec(v_a_2427_);
v_a_2399_ = v___x_2428_;
goto v___jp_2398_;
}
}
else
{
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2435_; 
v_a_2435_ = lean_ctor_get(v___x_2426_, 0);
lean_inc(v_a_2435_);
lean_dec_ref_known(v___x_2426_, 1);
v_a_2399_ = v_a_2435_;
goto v___jp_2398_;
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2443_; 
lean_dec_ref_known(v_d_2367_, 1);
v_a_2436_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2443_ == 0)
{
v___x_2438_ = v___x_2426_;
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v___x_2426_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2443_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2441_; 
if (v_isShared_2439_ == 0)
{
lean_ctor_set_tag(v___x_2438_, 0);
v___x_2441_ = v___x_2438_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v_a_2436_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
}
}
else
{
lean_object* v___x_2444_; 
v___x_2444_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v_a_2399_ = v___x_2444_;
goto v___jp_2398_;
}
v___jp_2369_:
{
lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2372_ = lean_string_append(v___y_2370_, v___y_2371_);
lean_dec_ref(v___y_2371_);
v___x_2373_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
v___x_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2374_, 0, v___x_2373_);
return v___x_2374_;
}
v___jp_2375_:
{
lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; uint8_t v___x_2389_; 
v___x_2378_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_2379_ = lean_string_append(v___x_2378_, v_context_2366_);
v___x_2380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1));
v___x_2381_ = lean_string_append(v___x_2379_, v___x_2380_);
v___x_2382_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__0));
v___x_2383_ = lean_string_append(v___x_2381_, v___x_2382_);
v___x_2384_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2));
v___x_2385_ = lean_string_append(v___x_2383_, v___x_2384_);
v___x_2386_ = lean_string_append(v___x_2385_, v_received_2377_);
lean_dec_ref(v_received_2377_);
v___x_2387_ = lean_string_utf8_byte_size(v___y_2376_);
v___x_2388_ = lean_unsigned_to_nat(0u);
v___x_2389_ = lean_nat_dec_eq(v___x_2387_, v___x_2388_);
if (v___x_2389_ == 0)
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2390_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__1));
v___x_2391_ = lean_string_append(v___x_2390_, v___y_2376_);
lean_dec_ref(v___y_2376_);
v___x_2392_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__2));
v___x_2393_ = lean_string_append(v___x_2391_, v___x_2392_);
v___y_2370_ = v___x_2386_;
v___y_2371_ = v___x_2393_;
goto v___jp_2369_;
}
else
{
lean_object* v___x_2394_; 
lean_dec_ref(v___y_2376_);
v___x_2394_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___y_2370_ = v___x_2386_;
v___y_2371_ = v___x_2394_;
goto v___jp_2369_;
}
}
v___jp_2395_:
{
lean_object* v___x_2397_; 
v___x_2397_ = l_Lasm_JS_Data_describe(v_d_2367_);
v___y_2376_ = v___y_2396_;
v_received_2377_ = v___x_2397_;
goto v___jp_2375_;
}
v___jp_2398_:
{
if (lean_obj_tag(v_d_2367_) == 9)
{
lean_object* v_value_2400_; lean_object* v_description_2401_; lean_object* v___x_2402_; uint8_t v___x_2403_; 
v_value_2400_ = lean_ctor_get(v_d_2367_, 0);
v_description_2401_ = lean_ctor_get(v_d_2367_, 1);
v___x_2402_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2403_ = lean_string_dec_eq(v_description_2401_, v___x_2402_);
if (v___x_2403_ == 0)
{
v___y_2396_ = v_a_2399_;
goto v___jp_2395_;
}
else
{
lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2420_; 
lean_inc(v_value_2400_);
v_isSharedCheck_2420_ = !lean_is_exclusive(v_d_2367_);
if (v_isSharedCheck_2420_ == 0)
{
lean_object* v_unused_2421_; lean_object* v_unused_2422_; 
v_unused_2421_ = lean_ctor_get(v_d_2367_, 1);
lean_dec(v_unused_2421_);
v_unused_2422_ = lean_ctor_get(v_d_2367_, 0);
lean_dec(v_unused_2422_);
v___x_2405_ = v_d_2367_;
v_isShared_2406_ = v_isSharedCheck_2420_;
goto v_resetjp_2404_;
}
else
{
lean_dec(v_d_2367_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2420_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
uint32_t v___x_2407_; uint64_t v___x_2408_; lean_object* v___x_2410_; 
v___x_2407_ = 206;
v___x_2408_ = 0ULL;
lean_inc(v_value_2400_);
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 1, v___x_2402_);
v___x_2410_ = v___x_2405_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_value_2400_);
lean_ctor_set(v_reuseFailAlloc_2419_, 1, v___x_2402_);
v___x_2410_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
uint32_t v___x_2411_; lean_object* v___x_2412_; 
v___x_2411_ = lasm_js_value_handle(v_value_2400_);
lean_dec(v_value_2400_);
v___x_2412_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2407_, v___x_2408_, v___x_2410_, v___x_2411_);
lean_dec_ref(v___x_2410_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; uint8_t v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
lean_dec_ref_known(v___x_2412_, 1);
v___x_2414_ = lean_string_validate_utf8(v_a_2413_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
lean_dec(v_a_2413_);
v___x_2415_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9);
v___x_2416_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2415_);
v___y_2376_ = v_a_2399_;
v_received_2377_ = v___x_2416_;
goto v___jp_2375_;
}
else
{
lean_object* v___x_2417_; 
v___x_2417_ = lean_string_from_utf8_unchecked(v_a_2413_);
v___y_2376_ = v_a_2399_;
v_received_2377_ = v___x_2417_;
goto v___jp_2375_;
}
}
else
{
lean_object* v___x_2418_; 
lean_dec_ref_known(v___x_2412_, 1);
v___x_2418_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10));
v___y_2376_ = v_a_2399_;
v_received_2377_ = v___x_2418_;
goto v___jp_2375_;
}
}
}
}
}
else
{
v___y_2396_ = v_a_2399_;
goto v___jp_2395_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2445_, lean_object* v_d_2446_, lean_object* v_a_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(v_context_2445_, v_d_2446_);
lean_dec_ref(v_context_2445_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(lean_object* v_b_2449_, lean_object* v_args_2450_, uint8_t v_await_2451_){
_start:
{
uint64_t v___y_2454_; uint64_t v___y_2455_; uint64_t v___x_2498_; uint64_t v___y_2500_; 
v___x_2498_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_2451_ == 0)
{
uint64_t v___x_2505_; 
v___x_2505_ = 0ULL;
v___y_2500_ = v___x_2505_;
goto v___jp_2499_;
}
else
{
uint64_t v___x_2506_; 
v___x_2506_ = 2ULL;
v___y_2500_ = v___x_2506_;
goto v___jp_2499_;
}
v___jp_2453_:
{
uint64_t v_flags_2456_; uint32_t v___x_2457_; lean_object* v___x_2458_; uint32_t v___x_2459_; lean_object* v___x_2460_; 
v_flags_2456_ = lean_uint64_lor(v___y_2454_, v___y_2455_);
v___x_2457_ = 214;
v___x_2458_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2449_, v_args_2450_);
v___x_2459_ = 0;
v___x_2460_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2457_, v_flags_2456_, v___x_2458_, v___x_2459_);
lean_dec(v___x_2458_);
if (lean_obj_tag(v___x_2460_) == 0)
{
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2462_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2462_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2461_);
lean_dec(v_a_2461_);
if (lean_obj_tag(v___x_2462_) == 0)
{
lean_object* v_a_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v_a_2463_ = lean_ctor_get(v___x_2462_, 0);
lean_inc(v_a_2463_);
lean_dec_ref_known(v___x_2462_, 1);
v___x_2464_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2449_);
v___x_2465_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(v___x_2464_, v_a_2463_);
lean_dec_ref(v___x_2464_);
return v___x_2465_;
}
else
{
lean_object* v_a_2466_; lean_object* v___x_2468_; uint8_t v_isShared_2469_; uint8_t v_isSharedCheck_2473_; 
v_a_2466_ = lean_ctor_get(v___x_2462_, 0);
v_isSharedCheck_2473_ = !lean_is_exclusive(v___x_2462_);
if (v_isSharedCheck_2473_ == 0)
{
v___x_2468_ = v___x_2462_;
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
else
{
lean_inc(v_a_2466_);
lean_dec(v___x_2462_);
v___x_2468_ = lean_box(0);
v_isShared_2469_ = v_isSharedCheck_2473_;
goto v_resetjp_2467_;
}
v_resetjp_2467_:
{
lean_object* v___x_2471_; 
if (v_isShared_2469_ == 0)
{
v___x_2471_ = v___x_2468_;
goto v_reusejp_2470_;
}
else
{
lean_object* v_reuseFailAlloc_2472_; 
v_reuseFailAlloc_2472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2472_, 0, v_a_2466_);
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
else
{
lean_object* v_a_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2481_; 
v_a_2474_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2476_ = v___x_2460_;
v_isShared_2477_ = v_isSharedCheck_2481_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_a_2474_);
lean_dec(v___x_2460_);
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
return v___x_2479_;
}
}
}
}
else
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2497_; 
v_a_2482_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2497_ == 0)
{
v___x_2484_ = v___x_2460_;
v_isShared_2485_ = v_isSharedCheck_2497_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2460_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2497_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2495_; 
v___x_2486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_2487_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2449_);
v___x_2488_ = lean_string_append(v___x_2486_, v___x_2487_);
lean_dec_ref(v___x_2487_);
v___x_2489_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4));
v___x_2490_ = lean_string_append(v___x_2488_, v___x_2489_);
v___x_2491_ = lean_io_error_to_string(v_a_2482_);
v___x_2492_ = lean_string_append(v___x_2490_, v___x_2491_);
lean_dec_ref(v___x_2491_);
v___x_2493_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2493_, 0, v___x_2492_);
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 0, v___x_2493_);
v___x_2495_ = v___x_2484_;
goto v_reusejp_2494_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v___x_2493_);
v___x_2495_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2494_;
}
v_reusejp_2494_:
{
return v___x_2495_;
}
}
}
}
v___jp_2499_:
{
uint8_t v_construct_2501_; uint64_t v___x_2502_; 
v_construct_2501_ = lean_ctor_get_uint8(v_b_2449_, sizeof(void*)*4);
v___x_2502_ = lean_uint64_lor(v___x_2498_, v___y_2500_);
if (v_construct_2501_ == 0)
{
uint64_t v___x_2503_; 
v___x_2503_ = 0ULL;
v___y_2454_ = v___x_2502_;
v___y_2455_ = v___x_2503_;
goto v___jp_2453_;
}
else
{
uint64_t v___x_2504_; 
v___x_2504_ = 4ULL;
v___y_2454_ = v___x_2502_;
v___y_2455_ = v___x_2504_;
goto v___jp_2453_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0___boxed(lean_object* v_b_2507_, lean_object* v_args_2508_, lean_object* v_await_2509_, lean_object* v_a_2510_){
_start:
{
uint8_t v_await_boxed_2511_; lean_object* v_res_2512_; 
v_await_boxed_2511_ = lean_unbox(v_await_2509_);
v_res_2512_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(v_b_2507_, v_args_2508_, v_await_boxed_2511_);
lean_dec_ref(v_b_2507_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(lean_object* v_v_2522_){
_start:
{
uint8_t v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2524_ = 0;
v___x_2525_ = lean_unsigned_to_nat(1u);
v___x_2526_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__3));
v___x_2527_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2528_, 0, v_v_2522_);
lean_ctor_set(v___x_2528_, 1, v___x_2527_);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2525_);
v___x_2530_ = lean_array_push(v___x_2529_, v___x_2528_);
v___x_2531_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(v___x_2526_, v___x_2530_, v___x_2524_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2531_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2531_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
v_a_2540_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2531_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2531_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___boxed(lean_object* v_v_2548_, lean_object* v_a_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(v_v_2548_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0(lean_object* v_x_2551_){
_start:
{
lean_object* v_val_2554_; 
if (lean_obj_tag(v_x_2551_) == 0)
{
lean_object* v_a_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2564_; 
v_a_2556_ = lean_ctor_get(v_x_2551_, 0);
v_isSharedCheck_2564_ = !lean_is_exclusive(v_x_2551_);
if (v_isSharedCheck_2564_ == 0)
{
v___x_2558_ = v_x_2551_;
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
else
{
lean_inc(v_a_2556_);
lean_dec(v_x_2551_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2564_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2563_; 
v_reuseFailAlloc_2563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2563_, 0, v_a_2556_);
v___x_2561_ = v_reuseFailAlloc_2563_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2562_, 0, v___x_2561_);
return v___x_2562_;
}
}
}
else
{
lean_object* v_a_2565_; lean_object* v___x_2567_; uint8_t v_isShared_2568_; uint8_t v_isSharedCheck_2578_; 
v_a_2565_ = lean_ctor_get(v_x_2551_, 0);
v_isSharedCheck_2578_ = !lean_is_exclusive(v_x_2551_);
if (v_isSharedCheck_2578_ == 0)
{
v___x_2567_ = v_x_2551_;
v_isShared_2568_ = v_isSharedCheck_2578_;
goto v_resetjp_2566_;
}
else
{
lean_inc(v_a_2565_);
lean_dec(v_x_2551_);
v___x_2567_ = lean_box(0);
v_isShared_2568_ = v_isSharedCheck_2578_;
goto v_resetjp_2566_;
}
v_resetjp_2566_:
{
lean_object* v___x_2569_; 
v___x_2569_ = l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(v_a_2565_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v_a_2570_; lean_object* v___x_2572_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v___x_2569_, 1);
if (v_isShared_2568_ == 0)
{
lean_ctor_set(v___x_2567_, 0, v_a_2570_);
v___x_2572_ = v___x_2567_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
v_val_2554_ = v___x_2572_;
goto v___jp_2553_;
}
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; 
v_a_2574_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2569_, 1);
if (v_isShared_2568_ == 0)
{
lean_ctor_set_tag(v___x_2567_, 0);
lean_ctor_set(v___x_2567_, 0, v_a_2574_);
v___x_2576_ = v___x_2567_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2577_; 
v_reuseFailAlloc_2577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2577_, 0, v_a_2574_);
v___x_2576_ = v_reuseFailAlloc_2577_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
v_val_2554_ = v___x_2576_;
goto v___jp_2553_;
}
}
}
}
v___jp_2553_:
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2555_, 0, v_val_2554_);
return v___x_2555_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0___boxed(lean_object* v_x_2579_, lean_object* v___y_2580_){
_start:
{
lean_object* v_res_2581_; 
v_res_2581_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0(v_x_2579_);
return v_res_2581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys(lean_object* v_self_2583_, lean_object* v_keys_2584_, lean_object* v_options_2585_){
_start:
{
lean_object* v___f_2587_; lean_object* v___x_2588_; size_t v_sz_2589_; size_t v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; uint8_t v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___f_2587_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_2588_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v_sz_2589_ = lean_array_size(v_keys_2584_);
v___x_2590_ = ((size_t)0ULL);
v___x_2591_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2589_, v___x_2590_, v_keys_2584_);
v___x_2592_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
v___x_2593_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_2585_);
v___x_2594_ = lean_unsigned_to_nat(2u);
v___x_2595_ = lean_mk_empty_array_with_capacity(v___x_2594_);
v___x_2596_ = lean_array_push(v___x_2595_, v___x_2592_);
v___x_2597_ = lean_array_push(v___x_2596_, v___x_2593_);
v___x_2598_ = l_Lasm_JS_Web_Support_args(v___x_2597_);
v___x_2599_ = lean_unsigned_to_nat(0u);
v___x_2600_ = 0;
v___x_2601_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2583_, v___x_2588_, v___x_2598_);
v___x_2602_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2599_, v___x_2600_, v___x_2601_, v___f_2587_);
return v___x_2602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___boxed(lean_object* v_self_2603_, lean_object* v_keys_2604_, lean_object* v_options_2605_, lean_object* v_a_2606_){
_start:
{
lean_object* v_res_2607_; 
v_res_2607_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys(v_self_2603_, v_keys_2604_, v_options_2605_);
return v_res_2607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(lean_object* v_x_2608_){
_start:
{
if (lean_obj_tag(v_x_2608_) == 0)
{
lean_object* v___x_2609_; 
v___x_2609_ = lean_box(0);
return v___x_2609_;
}
else
{
lean_object* v_val_2610_; lean_object* v_start_2611_; lean_object* v_startAfter_2612_; lean_object* v_end_2613_; lean_object* v_prefix_2614_; lean_object* v_reverse_2615_; lean_object* v_limit_2616_; lean_object* v_allowConcurrency_2617_; lean_object* v_noCache_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; 
v_val_2610_ = lean_ctor_get(v_x_2608_, 0);
lean_inc(v_val_2610_);
lean_dec_ref_known(v_x_2608_, 1);
v_start_2611_ = lean_ctor_get(v_val_2610_, 0);
lean_inc(v_start_2611_);
v_startAfter_2612_ = lean_ctor_get(v_val_2610_, 1);
lean_inc(v_startAfter_2612_);
v_end_2613_ = lean_ctor_get(v_val_2610_, 2);
lean_inc(v_end_2613_);
v_prefix_2614_ = lean_ctor_get(v_val_2610_, 3);
lean_inc(v_prefix_2614_);
v_reverse_2615_ = lean_ctor_get(v_val_2610_, 4);
lean_inc(v_reverse_2615_);
v_limit_2616_ = lean_ctor_get(v_val_2610_, 5);
lean_inc(v_limit_2616_);
v_allowConcurrency_2617_ = lean_ctor_get(v_val_2610_, 6);
lean_inc(v_allowConcurrency_2617_);
v_noCache_2618_ = lean_ctor_get(v_val_2610_, 7);
lean_inc(v_noCache_2618_);
lean_dec(v_val_2610_);
v___x_2619_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0));
v___x_2620_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_start_2611_);
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2619_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1));
v___x_2623_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_startAfter_2612_);
v___x_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2624_, 0, v___x_2622_);
lean_ctor_set(v___x_2624_, 1, v___x_2623_);
v___x_2625_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2));
v___x_2626_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_end_2613_);
v___x_2627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2625_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3));
v___x_2629_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_2614_);
v___x_2630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2628_);
lean_ctor_set(v___x_2630_, 1, v___x_2629_);
v___x_2631_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4));
v___x_2632_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reverse_2615_);
lean_dec(v_reverse_2615_);
v___x_2633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2631_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
v___x_2634_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5));
v___x_2635_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_limit_2616_);
v___x_2636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2636_, 0, v___x_2634_);
lean_ctor_set(v___x_2636_, 1, v___x_2635_);
v___x_2637_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2638_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2617_);
lean_dec(v_allowConcurrency_2617_);
v___x_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2637_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2641_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2618_);
lean_dec(v_noCache_2618_);
v___x_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2640_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = lean_unsigned_to_nat(8u);
v___x_2644_ = lean_mk_empty_array_with_capacity(v___x_2643_);
v___x_2645_ = lean_array_push(v___x_2644_, v___x_2621_);
v___x_2646_ = lean_array_push(v___x_2645_, v___x_2624_);
v___x_2647_ = lean_array_push(v___x_2646_, v___x_2627_);
v___x_2648_ = lean_array_push(v___x_2647_, v___x_2630_);
v___x_2649_ = lean_array_push(v___x_2648_, v___x_2633_);
v___x_2650_ = lean_array_push(v___x_2649_, v___x_2636_);
v___x_2651_ = lean_array_push(v___x_2650_, v___x_2639_);
v___x_2652_ = lean_array_push(v___x_2651_, v___x_2642_);
v___x_2653_ = l_Lasm_JS_Web_Support_fields(v___x_2652_);
lean_dec_ref(v___x_2652_);
return v___x_2653_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list(lean_object* v_self_2655_, lean_object* v_options_2656_){
_start:
{
lean_object* v___f_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; uint8_t v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___f_2658_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_2659_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0));
v___x_2660_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(v_options_2656_);
v___x_2661_ = lean_unsigned_to_nat(1u);
v___x_2662_ = lean_mk_empty_array_with_capacity(v___x_2661_);
v___x_2663_ = lean_array_push(v___x_2662_, v___x_2660_);
v___x_2664_ = l_Lasm_JS_Web_Support_args(v___x_2663_);
v___x_2665_ = lean_unsigned_to_nat(0u);
v___x_2666_ = 0;
v___x_2667_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2655_, v___x_2659_, v___x_2664_);
v___x_2668_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2665_, v___x_2666_, v___x_2667_, v___f_2658_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list___boxed(lean_object* v_self_2669_, lean_object* v_options_2670_, lean_object* v_a_2671_){
_start:
{
lean_object* v_res_2672_; 
v_res_2672_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_list(v_self_2669_, v_options_2670_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(lean_object* v_x_2673_){
_start:
{
if (lean_obj_tag(v_x_2673_) == 0)
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_box(0);
return v___x_2674_;
}
else
{
lean_object* v_val_2675_; lean_object* v_allowConcurrency_2676_; lean_object* v_allowUnconfirmed_2677_; lean_object* v_noCache_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v_val_2675_ = lean_ctor_get(v_x_2673_, 0);
v_allowConcurrency_2676_ = lean_ctor_get(v_val_2675_, 0);
v_allowUnconfirmed_2677_ = lean_ctor_get(v_val_2675_, 1);
v_noCache_2678_ = lean_ctor_get(v_val_2675_, 2);
v___x_2679_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2680_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2676_);
v___x_2681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2679_);
lean_ctor_set(v___x_2681_, 1, v___x_2680_);
v___x_2682_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_2683_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowUnconfirmed_2677_);
v___x_2684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2684_, 0, v___x_2682_);
lean_ctor_set(v___x_2684_, 1, v___x_2683_);
v___x_2685_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2686_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2678_);
v___x_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2685_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = lean_unsigned_to_nat(3u);
v___x_2689_ = lean_mk_empty_array_with_capacity(v___x_2688_);
v___x_2690_ = lean_array_push(v___x_2689_, v___x_2681_);
v___x_2691_ = lean_array_push(v___x_2690_, v___x_2684_);
v___x_2692_ = lean_array_push(v___x_2691_, v___x_2687_);
v___x_2693_ = l_Lasm_JS_Web_Support_fields(v___x_2692_);
lean_dec_ref(v___x_2692_);
return v___x_2693_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0___boxed(lean_object* v_x_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_x_2694_);
lean_dec(v_x_2694_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put(lean_object* v_self_2697_, lean_object* v_key_2698_, lean_object* v_value_2699_, lean_object* v_options_2700_){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v___x_2702_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v___x_2703_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2703_, 0, v_key_2698_);
v___x_2704_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2700_);
v___x_2705_ = lean_unsigned_to_nat(3u);
v___x_2706_ = lean_mk_empty_array_with_capacity(v___x_2705_);
v___x_2707_ = lean_array_push(v___x_2706_, v___x_2703_);
v___x_2708_ = lean_array_push(v___x_2707_, v_value_2699_);
v___x_2709_ = lean_array_push(v___x_2708_, v___x_2704_);
v___x_2710_ = l_Lasm_JS_Web_Support_args(v___x_2709_);
v___x_2711_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2697_, v___x_2702_, v___x_2710_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put___boxed(lean_object* v_self_2712_, lean_object* v_key_2713_, lean_object* v_value_2714_, lean_object* v_options_2715_, lean_object* v_a_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_put(v_self_2712_, v_key_2713_, v_value_2714_, v_options_2715_);
lean_dec(v_options_2715_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(size_t v_sz_2718_, size_t v_i_2719_, lean_object* v_bs_2720_){
_start:
{
uint8_t v___x_2721_; 
v___x_2721_ = lean_usize_dec_lt(v_i_2719_, v_sz_2718_);
if (v___x_2721_ == 0)
{
return v_bs_2720_;
}
else
{
lean_object* v_v_2722_; lean_object* v___x_2723_; lean_object* v_bs_x27_2724_; size_t v___x_2725_; size_t v___x_2726_; lean_object* v___x_2727_; 
v_v_2722_ = lean_array_uget(v_bs_2720_, v_i_2719_);
v___x_2723_ = lean_unsigned_to_nat(0u);
v_bs_x27_2724_ = lean_array_uset(v_bs_2720_, v_i_2719_, v___x_2723_);
v___x_2725_ = ((size_t)1ULL);
v___x_2726_ = lean_usize_add(v_i_2719_, v___x_2725_);
v___x_2727_ = lean_array_uset(v_bs_x27_2724_, v_i_2719_, v_v_2722_);
v_i_2719_ = v___x_2726_;
v_bs_2720_ = v___x_2727_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0___boxed(lean_object* v_sz_2729_, lean_object* v_i_2730_, lean_object* v_bs_2731_){
_start:
{
size_t v_sz_boxed_2732_; size_t v_i_boxed_2733_; lean_object* v_res_2734_; 
v_sz_boxed_2732_ = lean_unbox_usize(v_sz_2729_);
lean_dec(v_sz_2729_);
v_i_boxed_2733_ = lean_unbox_usize(v_i_2730_);
lean_dec(v_i_2730_);
v_res_2734_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_boxed_2732_, v_i_boxed_2733_, v_bs_2731_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries(lean_object* v_self_2735_, lean_object* v_entries_2736_, lean_object* v_options_2737_){
_start:
{
lean_object* v___x_2739_; size_t v_sz_2740_; size_t v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2739_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v_sz_2740_ = lean_array_size(v_entries_2736_);
v___x_2741_ = ((size_t)0ULL);
v___x_2742_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_2740_, v___x_2741_, v_entries_2736_);
v___x_2743_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_2743_, 0, v___x_2742_);
v___x_2744_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2737_);
v___x_2745_ = lean_unsigned_to_nat(2u);
v___x_2746_ = lean_mk_empty_array_with_capacity(v___x_2745_);
v___x_2747_ = lean_array_push(v___x_2746_, v___x_2743_);
v___x_2748_ = lean_array_push(v___x_2747_, v___x_2744_);
v___x_2749_ = l_Lasm_JS_Web_Support_args(v___x_2748_);
v___x_2750_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2735_, v___x_2739_, v___x_2749_);
return v___x_2750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries___boxed(lean_object* v_self_2751_, lean_object* v_entries_2752_, lean_object* v_options_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries(v_self_2751_, v_entries_2752_, v_options_2753_);
lean_dec(v_options_2753_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete(lean_object* v_self_2757_, lean_object* v_key_2758_, lean_object* v_options_2759_){
_start:
{
lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2761_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v___x_2762_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2762_, 0, v_key_2758_);
v___x_2763_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2759_);
v___x_2764_ = lean_unsigned_to_nat(2u);
v___x_2765_ = lean_mk_empty_array_with_capacity(v___x_2764_);
v___x_2766_ = lean_array_push(v___x_2765_, v___x_2762_);
v___x_2767_ = lean_array_push(v___x_2766_, v___x_2763_);
v___x_2768_ = l_Lasm_JS_Web_Support_args(v___x_2767_);
v___x_2769_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_self_2757_, v___x_2761_, v___x_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___boxed(lean_object* v_self_2770_, lean_object* v_key_2771_, lean_object* v_options_2772_, lean_object* v_a_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_delete(v_self_2770_, v_key_2771_, v_options_2772_);
lean_dec(v_options_2772_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2(lean_object* v___f_2775_, lean_object* v_x_2776_){
_start:
{
if (lean_obj_tag(v_x_2776_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2786_; 
lean_dec_ref(v___f_2775_);
v_a_2778_ = lean_ctor_get(v_x_2776_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v_x_2776_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2780_ = v_x_2776_;
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v_x_2776_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2786_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
lean_object* v___x_2783_; 
if (v_isShared_2781_ == 0)
{
v___x_2783_ = v___x_2780_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2778_);
v___x_2783_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
lean_object* v___x_2784_; 
v___x_2784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
return v___x_2784_;
}
}
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2788_; 
v_a_2787_ = lean_ctor_get(v_x_2776_, 0);
lean_inc(v_a_2787_);
lean_dec_ref_known(v_x_2776_, 1);
v___x_2788_ = lean_apply_2(v___f_2775_, v_a_2787_, lean_box(0));
return v___x_2788_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2789_, lean_object* v_x_2790_, lean_object* v___y_2791_){
_start:
{
lean_object* v_res_2792_; 
v_res_2792_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2(v___f_2789_, v_x_2790_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3(lean_object* v_a_2793_, lean_object* v_x_2794_){
_start:
{
if (lean_obj_tag(v_x_2794_) == 0)
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2804_; 
v_a_2796_ = lean_ctor_get(v_x_2794_, 0);
v_isSharedCheck_2804_ = !lean_is_exclusive(v_x_2794_);
if (v_isSharedCheck_2804_ == 0)
{
v___x_2798_ = v_x_2794_;
v_isShared_2799_ = v_isSharedCheck_2804_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v_x_2794_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2804_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
lean_object* v___x_2802_; 
v___x_2802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2802_, 0, v___x_2801_);
return v___x_2802_;
}
}
}
else
{
lean_object* v___x_2805_; 
lean_dec_ref_known(v_x_2794_, 1);
v___x_2805_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2793_);
return v___x_2805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed(lean_object* v_a_2806_, lean_object* v_x_2807_, lean_object* v___y_2808_){
_start:
{
lean_object* v_res_2809_; 
v_res_2809_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3(v_a_2806_, v_x_2807_);
lean_dec(v_a_2806_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7(lean_object* v___f_2810_, lean_object* v_a_2811_, uint32_t v_op_2812_, uint64_t v_flags_2813_, lean_object* v_payload_2814_, lean_object* v_x_2815_){
_start:
{
if (lean_obj_tag(v_x_2815_) == 0)
{
lean_object* v___x_2817_; 
lean_dec_ref(v___f_2810_);
v___x_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2817_, 0, v_x_2815_);
return v___x_2817_;
}
else
{
lean_object* v_a_2818_; lean_object* v___x_2820_; uint8_t v_isShared_2821_; uint8_t v_isSharedCheck_2838_; 
v_a_2818_ = lean_ctor_get(v_x_2815_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v_x_2815_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2820_ = v_x_2815_;
v_isShared_2821_ = v_isSharedCheck_2838_;
goto v_resetjp_2819_;
}
else
{
lean_inc(v_a_2818_);
lean_dec(v_x_2815_);
v___x_2820_ = lean_box(0);
v_isShared_2821_ = v_isSharedCheck_2838_;
goto v_resetjp_2819_;
}
v_resetjp_2819_:
{
uint32_t v___x_2822_; lean_object* v___x_2823_; uint8_t v___x_2824_; lean_object* v_val_2826_; lean_object* v___x_2829_; 
v___x_2822_ = 0;
v___x_2823_ = lean_unsigned_to_nat(0u);
v___x_2824_ = 0;
v___x_2829_ = lasm_js_call_into(v_a_2811_, v_op_2812_, v___x_2822_, v_flags_2813_, v_a_2818_, v_payload_2814_);
lean_dec(v_a_2818_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_object* v_a_2830_; lean_object* v___x_2832_; 
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v___x_2829_, 1);
if (v_isShared_2821_ == 0)
{
lean_ctor_set(v___x_2820_, 0, v_a_2830_);
v___x_2832_ = v___x_2820_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2830_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
v_val_2826_ = v___x_2832_;
goto v___jp_2825_;
}
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; 
v_a_2834_ = lean_ctor_get(v___x_2829_, 0);
lean_inc(v_a_2834_);
lean_dec_ref_known(v___x_2829_, 1);
if (v_isShared_2821_ == 0)
{
lean_ctor_set_tag(v___x_2820_, 0);
lean_ctor_set(v___x_2820_, 0, v_a_2834_);
v___x_2836_ = v___x_2820_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2834_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
v_val_2826_ = v___x_2836_;
goto v___jp_2825_;
}
}
v___jp_2825_:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; 
v___x_2827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2827_, 0, v_val_2826_);
v___x_2828_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2823_, v___x_2824_, v___x_2827_, v___f_2810_);
return v___x_2828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed(lean_object* v___f_2839_, lean_object* v_a_2840_, lean_object* v_op_2841_, lean_object* v_flags_2842_, lean_object* v_payload_2843_, lean_object* v_x_2844_, lean_object* v___y_2845_){
_start:
{
uint32_t v_op_boxed_2846_; uint64_t v_flags_boxed_2847_; lean_object* v_res_2848_; 
v_op_boxed_2846_ = lean_unbox_uint32(v_op_2841_);
lean_dec(v_op_2841_);
v_flags_boxed_2847_ = lean_unbox_uint64(v_flags_2842_);
lean_dec_ref(v_flags_2842_);
v_res_2848_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7(v___f_2839_, v_a_2840_, v_op_boxed_2846_, v_flags_boxed_2847_, v_payload_2843_, v_x_2844_);
lean_dec(v_payload_2843_);
lean_dec(v_a_2840_);
return v_res_2848_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5(lean_object* v___x_2849_, uint8_t v___x_2850_, lean_object* v___f_2851_, lean_object* v_a_2852_, uint32_t v_op_2853_, uint64_t v_flags_2854_, lean_object* v_payload_2855_, lean_object* v_x_2856_){
_start:
{
lean_object* v_val_2859_; 
if (lean_obj_tag(v_x_2856_) == 0)
{
lean_object* v___x_2862_; 
lean_dec_ref(v___f_2851_);
lean_dec(v___x_2849_);
v___x_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2862_, 0, v_x_2856_);
return v___x_2862_;
}
else
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2877_; 
v_a_2863_ = lean_ctor_get(v_x_2856_, 0);
v_isSharedCheck_2877_ = !lean_is_exclusive(v_x_2856_);
if (v_isSharedCheck_2877_ == 0)
{
v___x_2865_ = v_x_2856_;
v_isShared_2866_ = v_isSharedCheck_2877_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v_x_2856_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2877_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
uint32_t v___x_2867_; lean_object* v___x_2868_; 
v___x_2867_ = 0;
v___x_2868_ = lasm_js_call_into(v_a_2852_, v_op_2853_, v___x_2867_, v_flags_2854_, v_a_2863_, v_payload_2855_);
lean_dec(v_a_2863_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_a_2869_; lean_object* v___x_2871_; 
v_a_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc(v_a_2869_);
lean_dec_ref_known(v___x_2868_, 1);
if (v_isShared_2866_ == 0)
{
lean_ctor_set(v___x_2865_, 0, v_a_2869_);
v___x_2871_ = v___x_2865_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2869_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
v_val_2859_ = v___x_2871_;
goto v___jp_2858_;
}
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; 
v_a_2873_ = lean_ctor_get(v___x_2868_, 0);
lean_inc(v_a_2873_);
lean_dec_ref_known(v___x_2868_, 1);
if (v_isShared_2866_ == 0)
{
lean_ctor_set_tag(v___x_2865_, 0);
lean_ctor_set(v___x_2865_, 0, v_a_2873_);
v___x_2875_ = v___x_2865_;
goto v_reusejp_2874_;
}
else
{
lean_object* v_reuseFailAlloc_2876_; 
v_reuseFailAlloc_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2876_, 0, v_a_2873_);
v___x_2875_ = v_reuseFailAlloc_2876_;
goto v_reusejp_2874_;
}
v_reusejp_2874_:
{
v_val_2859_ = v___x_2875_;
goto v___jp_2858_;
}
}
}
}
v___jp_2858_:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2860_, 0, v_val_2859_);
v___x_2861_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2849_, v___x_2850_, v___x_2860_, v___f_2851_);
return v___x_2861_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed(lean_object* v___x_2878_, lean_object* v___x_2879_, lean_object* v___f_2880_, lean_object* v_a_2881_, lean_object* v_op_2882_, lean_object* v_flags_2883_, lean_object* v_payload_2884_, lean_object* v_x_2885_, lean_object* v___y_2886_){
_start:
{
uint8_t v___x_890__boxed_2887_; uint32_t v_op_boxed_2888_; uint64_t v_flags_boxed_2889_; lean_object* v_res_2890_; 
v___x_890__boxed_2887_ = lean_unbox(v___x_2879_);
v_op_boxed_2888_ = lean_unbox_uint32(v_op_2882_);
lean_dec(v_op_2882_);
v_flags_boxed_2889_ = lean_unbox_uint64(v_flags_2883_);
lean_dec_ref(v_flags_2883_);
v_res_2890_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5(v___x_2878_, v___x_890__boxed_2887_, v___f_2880_, v_a_2881_, v_op_boxed_2888_, v_flags_boxed_2889_, v_payload_2884_, v_x_2885_);
lean_dec(v_payload_2884_);
lean_dec(v_a_2881_);
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_2891_, uint32_t v_op_2892_, uint64_t v_flags_2893_, lean_object* v_payload_2894_, lean_object* v___f_2895_, lean_object* v___f_2896_, lean_object* v___f_2897_, lean_object* v_x_2898_){
_start:
{
if (lean_obj_tag(v_x_2898_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2908_; 
lean_dec_ref(v___f_2897_);
lean_dec_ref(v___f_2896_);
lean_dec_ref(v___f_2895_);
lean_dec(v_payload_2894_);
v_a_2900_ = lean_ctor_get(v_x_2898_, 0);
v_isSharedCheck_2908_ = !lean_is_exclusive(v_x_2898_);
if (v_isSharedCheck_2908_ == 0)
{
v___x_2902_ = v_x_2898_;
v_isShared_2903_ = v_isSharedCheck_2908_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v_x_2898_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2908_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
lean_object* v___x_2906_; 
v___x_2906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2905_);
return v___x_2906_;
}
}
}
else
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2955_; 
v_a_2909_ = lean_ctor_get(v_x_2898_, 0);
v_isSharedCheck_2955_ = !lean_is_exclusive(v_x_2898_);
if (v_isSharedCheck_2955_ == 0)
{
v___x_2911_ = v_x_2898_;
v_isShared_2912_ = v_isSharedCheck_2955_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v_x_2898_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2955_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; uint8_t v___x_2915_; 
v___x_2913_ = lean_string_utf8_byte_size(v_failurePrefix_2891_);
v___x_2914_ = lean_unsigned_to_nat(0u);
v___x_2915_ = lean_nat_dec_eq(v___x_2913_, v___x_2914_);
if (v___x_2915_ == 0)
{
lean_object* v___f_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___f_2920_; lean_object* v_val_2922_; lean_object* v___x_2927_; 
lean_dec_ref(v___f_2897_);
lean_inc(v_a_2909_);
v___f_2916_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2916_, 0, v_a_2909_);
v___x_2917_ = lean_box(v___x_2915_);
v___x_2918_ = lean_box_uint32(v_op_2892_);
v___x_2919_ = lean_box_uint64(v_flags_2893_);
lean_inc(v_payload_2894_);
v___f_2920_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2920_, 0, v___x_2914_);
lean_closure_set(v___f_2920_, 1, v___x_2917_);
lean_closure_set(v___f_2920_, 2, v___f_2916_);
lean_closure_set(v___f_2920_, 3, v_a_2909_);
lean_closure_set(v___f_2920_, 4, v___x_2918_);
lean_closure_set(v___f_2920_, 5, v___x_2919_);
lean_closure_set(v___f_2920_, 6, v_payload_2894_);
v___x_2927_ = l_Lasm_JS_Wire_encodeIO(v_payload_2894_);
lean_dec(v_payload_2894_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_object* v_a_2928_; lean_object* v___x_2930_; 
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
lean_inc(v_a_2928_);
lean_dec_ref_known(v___x_2927_, 1);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v_a_2928_);
v___x_2930_ = v___x_2911_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2928_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
v_val_2922_ = v___x_2930_;
goto v___jp_2921_;
}
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; 
v_a_2932_ = lean_ctor_get(v___x_2927_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v___x_2927_, 1);
if (v_isShared_2912_ == 0)
{
lean_ctor_set_tag(v___x_2911_, 0);
lean_ctor_set(v___x_2911_, 0, v_a_2932_);
v___x_2934_ = v___x_2911_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2932_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
v_val_2922_ = v___x_2934_;
goto v___jp_2921_;
}
}
v___jp_2921_:
{
lean_object* v___x_2923_; lean_object* v___x_2924_; lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2923_, 0, v_val_2922_);
v___x_2924_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2914_, v___x_2915_, v___x_2923_, v___f_2920_);
v___x_2925_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2914_, v___x_2915_, v___x_2924_, v___f_2895_);
v___x_2926_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2914_, v___x_2915_, v___x_2925_, v___f_2896_);
return v___x_2926_;
}
}
else
{
lean_object* v___f_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___f_2939_; uint8_t v___x_2940_; lean_object* v_val_2942_; lean_object* v___x_2946_; 
lean_dec_ref(v___f_2896_);
lean_dec_ref(v___f_2895_);
lean_inc(v_a_2909_);
v___f_2936_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2936_, 0, v_a_2909_);
v___x_2937_ = lean_box_uint32(v_op_2892_);
v___x_2938_ = lean_box_uint64(v_flags_2893_);
lean_inc(v_payload_2894_);
v___f_2939_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2939_, 0, v___f_2936_);
lean_closure_set(v___f_2939_, 1, v_a_2909_);
lean_closure_set(v___f_2939_, 2, v___x_2937_);
lean_closure_set(v___f_2939_, 3, v___x_2938_);
lean_closure_set(v___f_2939_, 4, v_payload_2894_);
v___x_2940_ = 0;
v___x_2946_ = l_Lasm_JS_Wire_encodeIO(v_payload_2894_);
lean_dec(v_payload_2894_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2949_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___x_2946_, 1);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v_a_2947_);
v___x_2949_ = v___x_2911_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2947_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
v_val_2942_ = v___x_2949_;
goto v___jp_2941_;
}
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; 
v_a_2951_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2951_);
lean_dec_ref_known(v___x_2946_, 1);
if (v_isShared_2912_ == 0)
{
lean_ctor_set_tag(v___x_2911_, 0);
lean_ctor_set(v___x_2911_, 0, v_a_2951_);
v___x_2953_ = v___x_2911_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2954_; 
v_reuseFailAlloc_2954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2954_, 0, v_a_2951_);
v___x_2953_ = v_reuseFailAlloc_2954_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
v_val_2942_ = v___x_2953_;
goto v___jp_2941_;
}
}
v___jp_2941_:
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2943_, 0, v_val_2942_);
v___x_2944_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2914_, v___x_2940_, v___x_2943_, v___f_2939_);
v___x_2945_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2914_, v___x_2940_, v___x_2944_, v___f_2897_);
return v___x_2945_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_2956_, lean_object* v_op_2957_, lean_object* v_flags_2958_, lean_object* v_payload_2959_, lean_object* v___f_2960_, lean_object* v___f_2961_, lean_object* v___f_2962_, lean_object* v_x_2963_, lean_object* v___y_2964_){
_start:
{
uint32_t v_op_boxed_2965_; uint64_t v_flags_boxed_2966_; lean_object* v_res_2967_; 
v_op_boxed_2965_ = lean_unbox_uint32(v_op_2957_);
lean_dec(v_op_2957_);
v_flags_boxed_2966_ = lean_unbox_uint64(v_flags_2958_);
lean_dec_ref(v_flags_2958_);
v_res_2967_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6(v_failurePrefix_2956_, v_op_boxed_2965_, v_flags_boxed_2966_, v_payload_2959_, v___f_2960_, v___f_2961_, v___f_2962_, v_x_2963_);
lean_dec_ref(v_failurePrefix_2956_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1(lean_object* v___f_2968_, lean_object* v_bytes_2969_){
_start:
{
lean_object* v___x_2971_; uint8_t v___x_2972_; lean_object* v_val_2974_; lean_object* v___x_2977_; 
v___x_2971_ = lean_unsigned_to_nat(0u);
v___x_2972_ = 0;
v___x_2977_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2969_);
if (lean_obj_tag(v___x_2977_) == 0)
{
lean_object* v_a_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_2985_; 
v_a_2978_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_2985_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_2985_ == 0)
{
v___x_2980_ = v___x_2977_;
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_a_2978_);
lean_dec(v___x_2977_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_2985_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
lean_object* v___x_2983_; 
if (v_isShared_2981_ == 0)
{
lean_ctor_set_tag(v___x_2980_, 1);
v___x_2983_ = v___x_2980_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_a_2978_);
v___x_2983_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
v_val_2974_ = v___x_2983_;
goto v___jp_2973_;
}
}
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
v_a_2986_ = lean_ctor_get(v___x_2977_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2977_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2977_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2977_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
lean_ctor_set_tag(v___x_2988_, 0);
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
v_val_2974_ = v___x_2991_;
goto v___jp_2973_;
}
}
}
v___jp_2973_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2975_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2975_, 0, v_val_2974_);
v___x_2976_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2971_, v___x_2972_, v___x_2975_, v___f_2968_);
return v___x_2976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2994_, lean_object* v_bytes_2995_, lean_object* v___y_2996_){
_start:
{
lean_object* v_res_2997_; 
v_res_2997_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1(v___f_2994_, v_bytes_2995_);
lean_dec_ref(v_bytes_2995_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8(lean_object* v___f_2998_, lean_object* v_x_2999_){
_start:
{
if (lean_obj_tag(v_x_2999_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3009_; 
lean_dec_ref(v___f_2998_);
v_a_3001_ = lean_ctor_get(v_x_2999_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v_x_2999_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3003_ = v_x_2999_;
v_isShared_3004_ = v_isSharedCheck_3009_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v_x_2999_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3009_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
lean_object* v___x_3006_; 
if (v_isShared_3004_ == 0)
{
v___x_3006_ = v___x_3003_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_a_3001_);
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
lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3021_; 
v_isSharedCheck_3021_ = !lean_is_exclusive(v_x_2999_);
if (v_isSharedCheck_3021_ == 0)
{
lean_object* v_unused_3022_; 
v_unused_3022_ = lean_ctor_get(v_x_2999_, 0);
lean_dec(v_unused_3022_);
v___x_3011_ = v_x_2999_;
v_isShared_3012_ = v_isSharedCheck_3021_;
goto v_resetjp_3010_;
}
else
{
lean_dec(v_x_2999_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3021_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3013_; uint8_t v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3017_; 
v___x_3013_ = lean_unsigned_to_nat(0u);
v___x_3014_ = 0;
v___x_3015_ = lean_io_promise_new();
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3015_);
v___x_3017_ = v___x_3011_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3020_; 
v_reuseFailAlloc_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3020_, 0, v___x_3015_);
v___x_3017_ = v_reuseFailAlloc_3020_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
v___x_3019_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3013_, v___x_3014_, v___x_3018_, v___f_2998_);
return v___x_3019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8___boxed(lean_object* v___f_3023_, lean_object* v_x_3024_, lean_object* v___y_3025_){
_start:
{
lean_object* v_res_3026_; 
v_res_3026_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8(v___f_3023_, v_x_3024_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_3027_, lean_object* v_x_3028_){
_start:
{
if (lean_obj_tag(v_x_3028_) == 0)
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3041_; 
v_a_3030_ = lean_ctor_get(v_x_3028_, 0);
v_isSharedCheck_3041_ = !lean_is_exclusive(v_x_3028_);
if (v_isSharedCheck_3041_ == 0)
{
v___x_3032_ = v_x_3028_;
v_isShared_3033_ = v_isSharedCheck_3041_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v_x_3028_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3041_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3038_; 
v___x_3034_ = lean_io_error_to_string(v_a_3030_);
v___x_3035_ = lean_string_append(v_failurePrefix_3027_, v___x_3034_);
lean_dec_ref(v___x_3034_);
v___x_3036_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3036_, 0, v___x_3035_);
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 0, v___x_3036_);
v___x_3038_ = v___x_3032_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v___x_3036_);
v___x_3038_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
lean_object* v___x_3039_; 
v___x_3039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3038_);
return v___x_3039_;
}
}
}
else
{
lean_object* v___x_3042_; 
lean_dec_ref(v_failurePrefix_3027_);
v___x_3042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3042_, 0, v_x_3028_);
return v___x_3042_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_3043_, lean_object* v_x_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v_res_3046_; 
v_res_3046_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4(v_failurePrefix_3043_, v_x_3044_);
return v_res_3046_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0(lean_object* v_context_3047_, lean_object* v_x_3048_){
_start:
{
lean_object* v_val_3051_; 
if (lean_obj_tag(v_x_3048_) == 0)
{
lean_object* v_a_3053_; lean_object* v___x_3055_; uint8_t v_isShared_3056_; uint8_t v_isSharedCheck_3061_; 
v_a_3053_ = lean_ctor_get(v_x_3048_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v_x_3048_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3055_ = v_x_3048_;
v_isShared_3056_ = v_isSharedCheck_3061_;
goto v_resetjp_3054_;
}
else
{
lean_inc(v_a_3053_);
lean_dec(v_x_3048_);
v___x_3055_ = lean_box(0);
v_isShared_3056_ = v_isSharedCheck_3061_;
goto v_resetjp_3054_;
}
v_resetjp_3054_:
{
lean_object* v___x_3058_; 
if (v_isShared_3056_ == 0)
{
v___x_3058_ = v___x_3055_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3053_);
v___x_3058_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3059_; 
v___x_3059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3058_);
return v___x_3059_;
}
}
}
else
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3075_; 
v_a_3062_ = lean_ctor_get(v_x_3048_, 0);
v_isSharedCheck_3075_ = !lean_is_exclusive(v_x_3048_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3064_ = v_x_3048_;
v_isShared_3065_ = v_isSharedCheck_3075_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v_x_3048_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3075_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3066_; 
v___x_3066_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_3047_, v_a_3062_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3069_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
if (v_isShared_3065_ == 0)
{
lean_ctor_set(v___x_3064_, 0, v_a_3067_);
v___x_3069_ = v___x_3064_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3067_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
v_val_3051_ = v___x_3069_;
goto v___jp_3050_;
}
}
else
{
lean_object* v_a_3071_; lean_object* v___x_3073_; 
v_a_3071_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3071_);
lean_dec_ref_known(v___x_3066_, 1);
if (v_isShared_3065_ == 0)
{
lean_ctor_set_tag(v___x_3064_, 0);
lean_ctor_set(v___x_3064_, 0, v_a_3071_);
v___x_3073_ = v___x_3064_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3071_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
v_val_3051_ = v___x_3073_;
goto v___jp_3050_;
}
}
}
}
v___jp_3050_:
{
lean_object* v___x_3052_; 
v___x_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3052_, 0, v_val_3051_);
return v___x_3052_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3076_, lean_object* v_x_3077_, lean_object* v___y_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0(v_context_3076_, v_x_3077_);
lean_dec_ref(v_context_3076_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(lean_object* v_context_3080_, uint32_t v_op_3081_, uint64_t v_flags_3082_, lean_object* v_payload_3083_, lean_object* v_failurePrefix_3084_){
_start:
{
lean_object* v___f_3086_; lean_object* v___f_3087_; lean_object* v___f_3088_; lean_object* v___f_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___f_3092_; lean_object* v___f_3093_; lean_object* v___x_3094_; uint8_t v___x_3095_; lean_object* v_val_3097_; lean_object* v___x_3100_; 
v___f_3086_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3086_, 0, v_context_3080_);
v___f_3087_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3087_, 0, v___f_3086_);
v___f_3088_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3088_, 0, v___f_3087_);
lean_inc_ref(v_failurePrefix_3084_);
v___f_3089_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3089_, 0, v_failurePrefix_3084_);
v___x_3090_ = lean_box_uint32(v_op_3081_);
v___x_3091_ = lean_box_uint64(v_flags_3082_);
lean_inc_ref(v___f_3088_);
v___f_3092_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3092_, 0, v_failurePrefix_3084_);
lean_closure_set(v___f_3092_, 1, v___x_3090_);
lean_closure_set(v___f_3092_, 2, v___x_3091_);
lean_closure_set(v___f_3092_, 3, v_payload_3083_);
lean_closure_set(v___f_3092_, 4, v___f_3089_);
lean_closure_set(v___f_3092_, 5, v___f_3088_);
lean_closure_set(v___f_3092_, 6, v___f_3088_);
v___f_3093_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3093_, 0, v___f_3092_);
v___x_3094_ = lean_unsigned_to_nat(0u);
v___x_3095_ = 0;
v___x_3100_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3100_) == 0)
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
v_a_3101_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3100_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3100_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
lean_ctor_set_tag(v___x_3103_, 1);
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
v_val_3097_ = v___x_3106_;
goto v___jp_3096_;
}
}
}
else
{
lean_object* v_a_3109_; lean_object* v___x_3111_; uint8_t v_isShared_3112_; uint8_t v_isSharedCheck_3116_; 
v_a_3109_ = lean_ctor_get(v___x_3100_, 0);
v_isSharedCheck_3116_ = !lean_is_exclusive(v___x_3100_);
if (v_isSharedCheck_3116_ == 0)
{
v___x_3111_ = v___x_3100_;
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
else
{
lean_inc(v_a_3109_);
lean_dec(v___x_3100_);
v___x_3111_ = lean_box(0);
v_isShared_3112_ = v_isSharedCheck_3116_;
goto v_resetjp_3110_;
}
v_resetjp_3110_:
{
lean_object* v___x_3114_; 
if (v_isShared_3112_ == 0)
{
lean_ctor_set_tag(v___x_3111_, 0);
v___x_3114_ = v___x_3111_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v_a_3109_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
v_val_3097_ = v___x_3114_;
goto v___jp_3096_;
}
}
}
v___jp_3096_:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3098_, 0, v_val_3097_);
v___x_3099_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3094_, v___x_3095_, v___x_3098_, v___f_3093_);
return v___x_3099_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___boxed(lean_object* v_context_3117_, lean_object* v_op_3118_, lean_object* v_flags_3119_, lean_object* v_payload_3120_, lean_object* v_failurePrefix_3121_, lean_object* v_a_3122_){
_start:
{
uint32_t v_op_boxed_3123_; uint64_t v_flags_boxed_3124_; lean_object* v_res_3125_; 
v_op_boxed_3123_ = lean_unbox_uint32(v_op_3118_);
lean_dec(v_op_3118_);
v_flags_boxed_3124_ = lean_unbox_uint64(v_flags_3119_);
lean_dec_ref(v_flags_3119_);
v_res_3125_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(v_context_3117_, v_op_boxed_3123_, v_flags_boxed_3124_, v_payload_3120_, v_failurePrefix_3121_);
return v_res_3125_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(uint8_t v_await_3126_, uint64_t v_extra_3127_){
_start:
{
uint64_t v___x_3128_; uint64_t v___y_3130_; 
v___x_3128_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_3126_ == 0)
{
uint64_t v___x_3133_; 
v___x_3133_ = 0ULL;
v___y_3130_ = v___x_3133_;
goto v___jp_3129_;
}
else
{
uint64_t v___x_3134_; 
v___x_3134_ = 2ULL;
v___y_3130_ = v___x_3134_;
goto v___jp_3129_;
}
v___jp_3129_:
{
uint64_t v___x_3131_; uint64_t v___x_3132_; 
v___x_3131_ = lean_uint64_lor(v___x_3128_, v___y_3130_);
v___x_3132_ = lean_uint64_lor(v___x_3131_, v_extra_3127_);
return v___x_3132_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0___boxed(lean_object* v_await_3135_, lean_object* v_extra_3136_){
_start:
{
uint8_t v_await_boxed_3137_; uint64_t v_extra_boxed_3138_; uint64_t v_res_3139_; lean_object* v_r_3140_; 
v_await_boxed_3137_ = lean_unbox(v_await_3135_);
v_extra_boxed_3138_ = lean_unbox_uint64(v_extra_3136_);
lean_dec_ref(v_extra_3136_);
v_res_3139_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(v_await_boxed_3137_, v_extra_boxed_3138_);
v_r_3140_ = lean_box_uint64(v_res_3139_);
return v_r_3140_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1(void){
_start:
{
uint64_t v___x_3142_; uint8_t v___x_3143_; uint64_t v___x_3144_; 
v___x_3142_ = 8ULL;
v___x_3143_ = 0;
v___x_3144_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(v___x_3143_, v___x_3142_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(lean_object* v_o_3145_, lean_object* v_name_3146_, lean_object* v_args_3147_){
_start:
{
lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; uint32_t v___x_3154_; uint64_t v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3149_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3150_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3150_, 0, v_o_3145_);
lean_ctor_set(v___x_3150_, 1, v___x_3149_);
lean_inc_ref(v_name_3146_);
v___x_3151_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3151_, 0, v_name_3146_);
v___x_3152_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0));
v___x_3153_ = lean_string_append(v___x_3152_, v_name_3146_);
lean_dec_ref(v_name_3146_);
v___x_3154_ = 205;
v___x_3155_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1);
v___x_3156_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3156_, 0, v_args_3147_);
v___x_3157_ = lean_unsigned_to_nat(3u);
v___x_3158_ = lean_mk_empty_array_with_capacity(v___x_3157_);
v___x_3159_ = lean_array_push(v___x_3158_, v___x_3150_);
v___x_3160_ = lean_array_push(v___x_3159_, v___x_3151_);
v___x_3161_ = lean_array_push(v___x_3160_, v___x_3156_);
v___x_3162_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
v___x_3163_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(v___x_3153_, v___x_3154_, v___x_3155_, v___x_3162_, v___x_3149_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___boxed(lean_object* v_o_3164_, lean_object* v_name_3165_, lean_object* v_args_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_o_3164_, v_name_3165_, v_args_3166_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys(lean_object* v_self_3169_, lean_object* v_keys_3170_, lean_object* v_options_3171_){
_start:
{
lean_object* v___x_3173_; size_t v_sz_3174_; size_t v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; 
v___x_3173_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v_sz_3174_ = lean_array_size(v_keys_3170_);
v___x_3175_ = ((size_t)0ULL);
v___x_3176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3174_, v___x_3175_, v_keys_3170_);
v___x_3177_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3176_);
v___x_3178_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3171_);
v___x_3179_ = lean_unsigned_to_nat(2u);
v___x_3180_ = lean_mk_empty_array_with_capacity(v___x_3179_);
v___x_3181_ = lean_array_push(v___x_3180_, v___x_3177_);
v___x_3182_ = lean_array_push(v___x_3181_, v___x_3178_);
v___x_3183_ = l_Lasm_JS_Web_Support_args(v___x_3182_);
v___x_3184_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_self_3169_, v___x_3173_, v___x_3183_);
return v___x_3184_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys___boxed(lean_object* v_self_3185_, lean_object* v_keys_3186_, lean_object* v_options_3187_, lean_object* v_a_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys(v_self_3185_, v_keys_3186_, v_options_3187_);
lean_dec(v_options_3187_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll(lean_object* v_self_3191_, lean_object* v_options_3192_){
_start:
{
lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; 
v___x_3194_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___closed__0));
v___x_3195_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3192_);
v___x_3196_ = lean_unsigned_to_nat(1u);
v___x_3197_ = lean_mk_empty_array_with_capacity(v___x_3196_);
v___x_3198_ = lean_array_push(v___x_3197_, v___x_3195_);
v___x_3199_ = l_Lasm_JS_Web_Support_args(v___x_3198_);
v___x_3200_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3191_, v___x_3194_, v___x_3199_);
return v___x_3200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___boxed(lean_object* v_self_3201_, lean_object* v_options_3202_, lean_object* v_a_3203_){
_start:
{
lean_object* v_res_3204_; 
v_res_3204_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll(v_self_3201_, v_options_3202_);
lean_dec(v_options_3202_);
return v_res_3204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction(lean_object* v_self_3206_, lean_object* v_closure_3207_){
_start:
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; 
v___x_3209_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___closed__0));
v___x_3210_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3211_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3211_, 0, v_closure_3207_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
v___x_3212_ = lean_unsigned_to_nat(1u);
v___x_3213_ = lean_mk_empty_array_with_capacity(v___x_3212_);
v___x_3214_ = lean_array_push(v___x_3213_, v___x_3211_);
v___x_3215_ = l_Lasm_JS_Web_Support_args(v___x_3214_);
v___x_3216_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_3206_, v___x_3209_, v___x_3215_);
return v___x_3216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___boxed(lean_object* v_self_3217_, lean_object* v_closure_3218_, lean_object* v_a_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction(v_self_3217_, v_closure_3218_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(lean_object* v_x_3221_){
_start:
{
if (lean_obj_tag(v_x_3221_) == 0)
{
lean_object* v___x_3222_; 
v___x_3222_ = lean_box(0);
return v___x_3222_;
}
else
{
lean_object* v_val_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v_val_3223_ = lean_ctor_get(v_x_3221_, 0);
v___x_3224_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_3225_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_3223_);
v___x_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3224_);
lean_ctor_set(v___x_3226_, 1, v___x_3225_);
v___x_3227_ = lean_unsigned_to_nat(1u);
v___x_3228_ = lean_mk_empty_array_with_capacity(v___x_3227_);
v___x_3229_ = lean_array_push(v___x_3228_, v___x_3226_);
v___x_3230_ = l_Lasm_JS_Web_Support_fields(v___x_3229_);
lean_dec_ref(v___x_3229_);
return v___x_3230_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0___boxed(lean_object* v_x_3231_){
_start:
{
lean_object* v_res_3232_; 
v_res_3232_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_x_3231_);
lean_dec(v_x_3231_);
return v_res_3232_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2(lean_object* v___f_3233_, lean_object* v_x_3234_){
_start:
{
if (lean_obj_tag(v_x_3234_) == 0)
{
lean_object* v_a_3236_; lean_object* v___x_3238_; uint8_t v_isShared_3239_; uint8_t v_isSharedCheck_3244_; 
lean_dec_ref(v___f_3233_);
v_a_3236_ = lean_ctor_get(v_x_3234_, 0);
v_isSharedCheck_3244_ = !lean_is_exclusive(v_x_3234_);
if (v_isSharedCheck_3244_ == 0)
{
v___x_3238_ = v_x_3234_;
v_isShared_3239_ = v_isSharedCheck_3244_;
goto v_resetjp_3237_;
}
else
{
lean_inc(v_a_3236_);
lean_dec(v_x_3234_);
v___x_3238_ = lean_box(0);
v_isShared_3239_ = v_isSharedCheck_3244_;
goto v_resetjp_3237_;
}
v_resetjp_3237_:
{
lean_object* v___x_3241_; 
if (v_isShared_3239_ == 0)
{
v___x_3241_ = v___x_3238_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3243_; 
v_reuseFailAlloc_3243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3243_, 0, v_a_3236_);
v___x_3241_ = v_reuseFailAlloc_3243_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
lean_object* v___x_3242_; 
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
return v___x_3242_;
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3246_; 
v_a_3245_ = lean_ctor_get(v_x_3234_, 0);
lean_inc(v_a_3245_);
lean_dec_ref_known(v_x_3234_, 1);
v___x_3246_ = lean_apply_2(v___f_3233_, v_a_3245_, lean_box(0));
return v___x_3246_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2___boxed(lean_object* v___f_3247_, lean_object* v_x_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2(v___f_3247_, v_x_3248_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0(lean_object* v_context_3251_, lean_object* v_x_3252_){
_start:
{
lean_object* v_val_3255_; 
if (lean_obj_tag(v_x_3252_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3265_; 
v_a_3257_ = lean_ctor_get(v_x_3252_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v_x_3252_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3259_ = v_x_3252_;
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v_x_3252_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3262_; 
if (v_isShared_3260_ == 0)
{
v___x_3262_ = v___x_3259_;
goto v_reusejp_3261_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3257_);
v___x_3262_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3261_;
}
v_reusejp_3261_:
{
lean_object* v___x_3263_; 
v___x_3263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3263_, 0, v___x_3262_);
return v___x_3263_;
}
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3279_; 
v_a_3266_ = lean_ctor_get(v_x_3252_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v_x_3252_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3268_ = v_x_3252_;
v_isShared_3269_ = v_isSharedCheck_3279_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v_x_3252_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3279_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_3251_, v_a_3266_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3273_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
if (v_isShared_3269_ == 0)
{
lean_ctor_set(v___x_3268_, 0, v_a_3271_);
v___x_3273_ = v___x_3268_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_a_3271_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
v_val_3255_ = v___x_3273_;
goto v___jp_3254_;
}
}
else
{
lean_object* v_a_3275_; lean_object* v___x_3277_; 
v_a_3275_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3275_);
lean_dec_ref_known(v___x_3270_, 1);
if (v_isShared_3269_ == 0)
{
lean_ctor_set_tag(v___x_3268_, 0);
lean_ctor_set(v___x_3268_, 0, v_a_3275_);
v___x_3277_ = v___x_3268_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3275_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
v_val_3255_ = v___x_3277_;
goto v___jp_3254_;
}
}
}
}
v___jp_3254_:
{
lean_object* v___x_3256_; 
v___x_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3256_, 0, v_val_3255_);
return v___x_3256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0___boxed(lean_object* v_context_3280_, lean_object* v_x_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v_res_3283_; 
v_res_3283_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0(v_context_3280_, v_x_3281_);
lean_dec_ref(v_context_3280_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_3284_, uint32_t v_op_3285_, uint64_t v_flags_3286_, lean_object* v_payload_3287_, lean_object* v___f_3288_, lean_object* v___f_3289_, lean_object* v___f_3290_, lean_object* v_x_3291_){
_start:
{
if (lean_obj_tag(v_x_3291_) == 0)
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3301_; 
lean_dec_ref(v___f_3290_);
lean_dec_ref(v___f_3289_);
lean_dec_ref(v___f_3288_);
lean_dec(v_payload_3287_);
v_a_3293_ = lean_ctor_get(v_x_3291_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v_x_3291_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3295_ = v_x_3291_;
v_isShared_3296_ = v_isSharedCheck_3301_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v_x_3291_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3301_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
lean_object* v___x_3299_; 
v___x_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3299_, 0, v___x_3298_);
return v___x_3299_;
}
}
}
else
{
lean_object* v_a_3302_; lean_object* v___x_3304_; uint8_t v_isShared_3305_; uint8_t v_isSharedCheck_3348_; 
v_a_3302_ = lean_ctor_get(v_x_3291_, 0);
v_isSharedCheck_3348_ = !lean_is_exclusive(v_x_3291_);
if (v_isSharedCheck_3348_ == 0)
{
v___x_3304_ = v_x_3291_;
v_isShared_3305_ = v_isSharedCheck_3348_;
goto v_resetjp_3303_;
}
else
{
lean_inc(v_a_3302_);
lean_dec(v_x_3291_);
v___x_3304_ = lean_box(0);
v_isShared_3305_ = v_isSharedCheck_3348_;
goto v_resetjp_3303_;
}
v_resetjp_3303_:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; uint8_t v___x_3308_; 
v___x_3306_ = lean_string_utf8_byte_size(v_failurePrefix_3284_);
v___x_3307_ = lean_unsigned_to_nat(0u);
v___x_3308_ = lean_nat_dec_eq(v___x_3306_, v___x_3307_);
if (v___x_3308_ == 0)
{
lean_object* v___f_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___f_3313_; lean_object* v_val_3315_; lean_object* v___x_3320_; 
lean_dec_ref(v___f_3290_);
lean_inc(v_a_3302_);
v___f_3309_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3309_, 0, v_a_3302_);
v___x_3310_ = lean_box(v___x_3308_);
v___x_3311_ = lean_box_uint32(v_op_3285_);
v___x_3312_ = lean_box_uint64(v_flags_3286_);
lean_inc(v_payload_3287_);
v___f_3313_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3313_, 0, v___x_3307_);
lean_closure_set(v___f_3313_, 1, v___x_3310_);
lean_closure_set(v___f_3313_, 2, v___f_3309_);
lean_closure_set(v___f_3313_, 3, v_a_3302_);
lean_closure_set(v___f_3313_, 4, v___x_3311_);
lean_closure_set(v___f_3313_, 5, v___x_3312_);
lean_closure_set(v___f_3313_, 6, v_payload_3287_);
v___x_3320_ = l_Lasm_JS_Wire_encodeIO(v_payload_3287_);
lean_dec(v_payload_3287_);
if (lean_obj_tag(v___x_3320_) == 0)
{
lean_object* v_a_3321_; lean_object* v___x_3323_; 
v_a_3321_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3320_, 1);
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 0, v_a_3321_);
v___x_3323_ = v___x_3304_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3321_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
v_val_3315_ = v___x_3323_;
goto v___jp_3314_;
}
}
else
{
lean_object* v_a_3325_; lean_object* v___x_3327_; 
v_a_3325_ = lean_ctor_get(v___x_3320_, 0);
lean_inc(v_a_3325_);
lean_dec_ref_known(v___x_3320_, 1);
if (v_isShared_3305_ == 0)
{
lean_ctor_set_tag(v___x_3304_, 0);
lean_ctor_set(v___x_3304_, 0, v_a_3325_);
v___x_3327_ = v___x_3304_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3328_; 
v_reuseFailAlloc_3328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3328_, 0, v_a_3325_);
v___x_3327_ = v_reuseFailAlloc_3328_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
v_val_3315_ = v___x_3327_;
goto v___jp_3314_;
}
}
v___jp_3314_:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3316_, 0, v_val_3315_);
v___x_3317_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3307_, v___x_3308_, v___x_3316_, v___f_3313_);
v___x_3318_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3307_, v___x_3308_, v___x_3317_, v___f_3288_);
v___x_3319_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3307_, v___x_3308_, v___x_3318_, v___f_3289_);
return v___x_3319_;
}
}
else
{
lean_object* v___f_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___f_3332_; uint8_t v___x_3333_; lean_object* v_val_3335_; lean_object* v___x_3339_; 
lean_dec_ref(v___f_3289_);
lean_dec_ref(v___f_3288_);
lean_inc(v_a_3302_);
v___f_3329_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3329_, 0, v_a_3302_);
v___x_3330_ = lean_box_uint32(v_op_3285_);
v___x_3331_ = lean_box_uint64(v_flags_3286_);
lean_inc(v_payload_3287_);
v___f_3332_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3332_, 0, v___f_3329_);
lean_closure_set(v___f_3332_, 1, v_a_3302_);
lean_closure_set(v___f_3332_, 2, v___x_3330_);
lean_closure_set(v___f_3332_, 3, v___x_3331_);
lean_closure_set(v___f_3332_, 4, v_payload_3287_);
v___x_3333_ = 0;
v___x_3339_ = l_Lasm_JS_Wire_encodeIO(v_payload_3287_);
lean_dec(v_payload_3287_);
if (lean_obj_tag(v___x_3339_) == 0)
{
lean_object* v_a_3340_; lean_object* v___x_3342_; 
v_a_3340_ = lean_ctor_get(v___x_3339_, 0);
lean_inc(v_a_3340_);
lean_dec_ref_known(v___x_3339_, 1);
if (v_isShared_3305_ == 0)
{
lean_ctor_set(v___x_3304_, 0, v_a_3340_);
v___x_3342_ = v___x_3304_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_a_3340_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
v_val_3335_ = v___x_3342_;
goto v___jp_3334_;
}
}
else
{
lean_object* v_a_3344_; lean_object* v___x_3346_; 
v_a_3344_ = lean_ctor_get(v___x_3339_, 0);
lean_inc(v_a_3344_);
lean_dec_ref_known(v___x_3339_, 1);
if (v_isShared_3305_ == 0)
{
lean_ctor_set_tag(v___x_3304_, 0);
lean_ctor_set(v___x_3304_, 0, v_a_3344_);
v___x_3346_ = v___x_3304_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v_a_3344_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
v_val_3335_ = v___x_3346_;
goto v___jp_3334_;
}
}
v___jp_3334_:
{
lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; 
v___x_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3336_, 0, v_val_3335_);
v___x_3337_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3307_, v___x_3333_, v___x_3336_, v___f_3332_);
v___x_3338_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3307_, v___x_3333_, v___x_3337_, v___f_3290_);
return v___x_3338_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_3349_, lean_object* v_op_3350_, lean_object* v_flags_3351_, lean_object* v_payload_3352_, lean_object* v___f_3353_, lean_object* v___f_3354_, lean_object* v___f_3355_, lean_object* v_x_3356_, lean_object* v___y_3357_){
_start:
{
uint32_t v_op_boxed_3358_; uint64_t v_flags_boxed_3359_; lean_object* v_res_3360_; 
v_op_boxed_3358_ = lean_unbox_uint32(v_op_3350_);
lean_dec(v_op_3350_);
v_flags_boxed_3359_ = lean_unbox_uint64(v_flags_3351_);
lean_dec_ref(v_flags_3351_);
v_res_3360_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9(v_failurePrefix_3349_, v_op_boxed_3358_, v_flags_boxed_3359_, v_payload_3352_, v___f_3353_, v___f_3354_, v___f_3355_, v_x_3356_);
lean_dec_ref(v_failurePrefix_3349_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1(lean_object* v___f_3361_, lean_object* v_bytes_3362_){
_start:
{
lean_object* v___x_3364_; uint8_t v___x_3365_; lean_object* v_val_3367_; lean_object* v___x_3370_; 
v___x_3364_ = lean_unsigned_to_nat(0u);
v___x_3365_ = 0;
v___x_3370_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3362_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v_a_3371_; lean_object* v___x_3373_; uint8_t v_isShared_3374_; uint8_t v_isSharedCheck_3378_; 
v_a_3371_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3378_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3378_ == 0)
{
v___x_3373_ = v___x_3370_;
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
else
{
lean_inc(v_a_3371_);
lean_dec(v___x_3370_);
v___x_3373_ = lean_box(0);
v_isShared_3374_ = v_isSharedCheck_3378_;
goto v_resetjp_3372_;
}
v_resetjp_3372_:
{
lean_object* v___x_3376_; 
if (v_isShared_3374_ == 0)
{
lean_ctor_set_tag(v___x_3373_, 1);
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
v_val_3367_ = v___x_3376_;
goto v___jp_3366_;
}
}
}
else
{
lean_object* v_a_3379_; lean_object* v___x_3381_; uint8_t v_isShared_3382_; uint8_t v_isSharedCheck_3386_; 
v_a_3379_ = lean_ctor_get(v___x_3370_, 0);
v_isSharedCheck_3386_ = !lean_is_exclusive(v___x_3370_);
if (v_isSharedCheck_3386_ == 0)
{
v___x_3381_ = v___x_3370_;
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
else
{
lean_inc(v_a_3379_);
lean_dec(v___x_3370_);
v___x_3381_ = lean_box(0);
v_isShared_3382_ = v_isSharedCheck_3386_;
goto v_resetjp_3380_;
}
v_resetjp_3380_:
{
lean_object* v___x_3384_; 
if (v_isShared_3382_ == 0)
{
lean_ctor_set_tag(v___x_3381_, 0);
v___x_3384_ = v___x_3381_;
goto v_reusejp_3383_;
}
else
{
lean_object* v_reuseFailAlloc_3385_; 
v_reuseFailAlloc_3385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3385_, 0, v_a_3379_);
v___x_3384_ = v_reuseFailAlloc_3385_;
goto v_reusejp_3383_;
}
v_reusejp_3383_:
{
v_val_3367_ = v___x_3384_;
goto v___jp_3366_;
}
}
}
v___jp_3366_:
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3368_, 0, v_val_3367_);
v___x_3369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3364_, v___x_3365_, v___x_3368_, v___f_3361_);
return v___x_3369_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1___boxed(lean_object* v___f_3387_, lean_object* v_bytes_3388_, lean_object* v___y_3389_){
_start:
{
lean_object* v_res_3390_; 
v_res_3390_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1(v___f_3387_, v_bytes_3388_);
lean_dec_ref(v_bytes_3388_);
return v_res_3390_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3(lean_object* v___f_3391_, lean_object* v_x_3392_){
_start:
{
if (lean_obj_tag(v_x_3392_) == 0)
{
lean_object* v_a_3394_; lean_object* v___x_3396_; uint8_t v_isShared_3397_; uint8_t v_isSharedCheck_3402_; 
lean_dec_ref(v___f_3391_);
v_a_3394_ = lean_ctor_get(v_x_3392_, 0);
v_isSharedCheck_3402_ = !lean_is_exclusive(v_x_3392_);
if (v_isSharedCheck_3402_ == 0)
{
v___x_3396_ = v_x_3392_;
v_isShared_3397_ = v_isSharedCheck_3402_;
goto v_resetjp_3395_;
}
else
{
lean_inc(v_a_3394_);
lean_dec(v_x_3392_);
v___x_3396_ = lean_box(0);
v_isShared_3397_ = v_isSharedCheck_3402_;
goto v_resetjp_3395_;
}
v_resetjp_3395_:
{
lean_object* v___x_3399_; 
if (v_isShared_3397_ == 0)
{
v___x_3399_ = v___x_3396_;
goto v_reusejp_3398_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3394_);
v___x_3399_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3398_;
}
v_reusejp_3398_:
{
lean_object* v___x_3400_; 
v___x_3400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3399_);
return v___x_3400_;
}
}
}
else
{
lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3414_; 
v_isSharedCheck_3414_ = !lean_is_exclusive(v_x_3392_);
if (v_isSharedCheck_3414_ == 0)
{
lean_object* v_unused_3415_; 
v_unused_3415_ = lean_ctor_get(v_x_3392_, 0);
lean_dec(v_unused_3415_);
v___x_3404_ = v_x_3392_;
v_isShared_3405_ = v_isSharedCheck_3414_;
goto v_resetjp_3403_;
}
else
{
lean_dec(v_x_3392_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3414_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3406_; uint8_t v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3410_; 
v___x_3406_ = lean_unsigned_to_nat(0u);
v___x_3407_ = 0;
v___x_3408_ = lean_io_promise_new();
if (v_isShared_3405_ == 0)
{
lean_ctor_set(v___x_3404_, 0, v___x_3408_);
v___x_3410_ = v___x_3404_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3413_; 
v_reuseFailAlloc_3413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3413_, 0, v___x_3408_);
v___x_3410_ = v_reuseFailAlloc_3413_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; 
v___x_3411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3411_, 0, v___x_3410_);
v___x_3412_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3406_, v___x_3407_, v___x_3411_, v___f_3391_);
return v___x_3412_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3___boxed(lean_object* v___f_3416_, lean_object* v_x_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v_res_3419_; 
v_res_3419_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3(v___f_3416_, v_x_3417_);
return v_res_3419_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(lean_object* v_context_3420_, uint32_t v_op_3421_, uint64_t v_flags_3422_, lean_object* v_payload_3423_, lean_object* v_failurePrefix_3424_){
_start:
{
lean_object* v___f_3426_; lean_object* v___f_3427_; lean_object* v___f_3428_; lean_object* v___f_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___f_3432_; lean_object* v___f_3433_; lean_object* v___x_3434_; uint8_t v___x_3435_; lean_object* v_val_3437_; lean_object* v___x_3440_; 
v___f_3426_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3426_, 0, v_context_3420_);
v___f_3427_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3427_, 0, v___f_3426_);
v___f_3428_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3428_, 0, v___f_3427_);
lean_inc_ref(v_failurePrefix_3424_);
v___f_3429_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3429_, 0, v_failurePrefix_3424_);
v___x_3430_ = lean_box_uint32(v_op_3421_);
v___x_3431_ = lean_box_uint64(v_flags_3422_);
lean_inc_ref(v___f_3428_);
v___f_3432_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3432_, 0, v_failurePrefix_3424_);
lean_closure_set(v___f_3432_, 1, v___x_3430_);
lean_closure_set(v___f_3432_, 2, v___x_3431_);
lean_closure_set(v___f_3432_, 3, v_payload_3423_);
lean_closure_set(v___f_3432_, 4, v___f_3429_);
lean_closure_set(v___f_3432_, 5, v___f_3428_);
lean_closure_set(v___f_3432_, 6, v___f_3428_);
v___f_3433_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3433_, 0, v___f_3432_);
v___x_3434_ = lean_unsigned_to_nat(0u);
v___x_3435_ = 0;
v___x_3440_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3440_) == 0)
{
lean_object* v_a_3441_; lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3448_; 
v_a_3441_ = lean_ctor_get(v___x_3440_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3440_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3443_ = v___x_3440_;
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
else
{
lean_inc(v_a_3441_);
lean_dec(v___x_3440_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
lean_ctor_set_tag(v___x_3443_, 1);
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3441_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
v_val_3437_ = v___x_3446_;
goto v___jp_3436_;
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
v_a_3449_ = lean_ctor_get(v___x_3440_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3440_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3440_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3440_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
lean_ctor_set_tag(v___x_3451_, 0);
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
v_val_3437_ = v___x_3454_;
goto v___jp_3436_;
}
}
}
v___jp_3436_:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3438_, 0, v_val_3437_);
v___x_3439_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3434_, v___x_3435_, v___x_3438_, v___f_3433_);
return v___x_3439_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___boxed(lean_object* v_context_3457_, lean_object* v_op_3458_, lean_object* v_flags_3459_, lean_object* v_payload_3460_, lean_object* v_failurePrefix_3461_, lean_object* v_a_3462_){
_start:
{
uint32_t v_op_boxed_3463_; uint64_t v_flags_boxed_3464_; lean_object* v_res_3465_; 
v_op_boxed_3463_ = lean_unbox_uint32(v_op_3458_);
lean_dec(v_op_3458_);
v_flags_boxed_3464_ = lean_unbox_uint64(v_flags_3459_);
lean_dec_ref(v_flags_3459_);
v_res_3465_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(v_context_3457_, v_op_boxed_3463_, v_flags_boxed_3464_, v_payload_3460_, v_failurePrefix_3461_);
return v_res_3465_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(uint8_t v_await_3466_, uint64_t v_extra_3467_){
_start:
{
uint64_t v___x_3468_; uint64_t v___y_3470_; 
v___x_3468_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_3466_ == 0)
{
uint64_t v___x_3473_; 
v___x_3473_ = 0ULL;
v___y_3470_ = v___x_3473_;
goto v___jp_3469_;
}
else
{
uint64_t v___x_3474_; 
v___x_3474_ = 2ULL;
v___y_3470_ = v___x_3474_;
goto v___jp_3469_;
}
v___jp_3469_:
{
uint64_t v___x_3471_; uint64_t v___x_3472_; 
v___x_3471_ = lean_uint64_lor(v___x_3468_, v___y_3470_);
v___x_3472_ = lean_uint64_lor(v___x_3471_, v_extra_3467_);
return v___x_3472_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1___boxed(lean_object* v_await_3475_, lean_object* v_extra_3476_){
_start:
{
uint8_t v_await_boxed_3477_; uint64_t v_extra_boxed_3478_; uint64_t v_res_3479_; lean_object* v_r_3480_; 
v_await_boxed_3477_ = lean_unbox(v_await_3475_);
v_extra_boxed_3478_ = lean_unbox_uint64(v_extra_3476_);
lean_dec_ref(v_extra_3476_);
v_res_3479_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(v_await_boxed_3477_, v_extra_boxed_3478_);
v_r_3480_ = lean_box_uint64(v_res_3479_);
return v_r_3480_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3481_; uint8_t v___x_3482_; uint64_t v___x_3483_; 
v___x_3481_ = 8ULL;
v___x_3482_ = 0;
v___x_3483_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(v___x_3482_, v___x_3481_);
return v___x_3483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(lean_object* v_o_3484_, lean_object* v_name_3485_, lean_object* v_args_3486_){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; uint32_t v___x_3493_; uint64_t v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3488_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3489_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3489_, 0, v_o_3484_);
lean_ctor_set(v___x_3489_, 1, v___x_3488_);
lean_inc_ref(v_name_3485_);
v___x_3490_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3490_, 0, v_name_3485_);
v___x_3491_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0));
v___x_3492_ = lean_string_append(v___x_3491_, v_name_3485_);
lean_dec_ref(v_name_3485_);
v___x_3493_ = 205;
v___x_3494_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0);
v___x_3495_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3495_, 0, v_args_3486_);
v___x_3496_ = lean_unsigned_to_nat(3u);
v___x_3497_ = lean_mk_empty_array_with_capacity(v___x_3496_);
v___x_3498_ = lean_array_push(v___x_3497_, v___x_3489_);
v___x_3499_ = lean_array_push(v___x_3498_, v___x_3490_);
v___x_3500_ = lean_array_push(v___x_3499_, v___x_3495_);
v___x_3501_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
v___x_3502_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(v___x_3492_, v___x_3493_, v___x_3494_, v___x_3501_, v___x_3488_);
return v___x_3502_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___boxed(lean_object* v_o_3503_, lean_object* v_name_3504_, lean_object* v_args_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_o_3503_, v_name_3504_, v_args_3505_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm(lean_object* v_self_3509_, lean_object* v_options_3510_){
_start:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3512_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0));
v___x_3513_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_options_3510_);
v___x_3514_ = lean_unsigned_to_nat(1u);
v___x_3515_ = lean_mk_empty_array_with_capacity(v___x_3514_);
v___x_3516_ = lean_array_push(v___x_3515_, v___x_3513_);
v___x_3517_ = l_Lasm_JS_Web_Support_args(v___x_3516_);
v___x_3518_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_self_3509_, v___x_3512_, v___x_3517_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___boxed(lean_object* v_self_3519_, lean_object* v_options_3520_, lean_object* v_a_3521_){
_start:
{
lean_object* v_res_3522_; 
v_res_3522_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm(v_self_3519_, v_options_3520_);
lean_dec(v_options_3520_);
return v_res_3522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(lean_object* v_x_3523_){
_start:
{
if (lean_obj_tag(v_x_3523_) == 0)
{
lean_object* v___x_3524_; 
v___x_3524_ = lean_box(0);
return v___x_3524_;
}
else
{
lean_object* v_val_3525_; lean_object* v_allowConcurrency_3526_; lean_object* v_allowUnconfirmed_3527_; lean_object* v___x_3529_; uint8_t v_isShared_3530_; uint8_t v_isSharedCheck_3544_; 
v_val_3525_ = lean_ctor_get(v_x_3523_, 0);
lean_inc(v_val_3525_);
lean_dec_ref_known(v_x_3523_, 1);
v_allowConcurrency_3526_ = lean_ctor_get(v_val_3525_, 0);
v_allowUnconfirmed_3527_ = lean_ctor_get(v_val_3525_, 1);
v_isSharedCheck_3544_ = !lean_is_exclusive(v_val_3525_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3529_ = v_val_3525_;
v_isShared_3530_ = v_isSharedCheck_3544_;
goto v_resetjp_3528_;
}
else
{
lean_inc(v_allowUnconfirmed_3527_);
lean_inc(v_allowConcurrency_3526_);
lean_dec(v_val_3525_);
v___x_3529_ = lean_box(0);
v_isShared_3530_ = v_isSharedCheck_3544_;
goto v_resetjp_3528_;
}
v_resetjp_3528_:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3534_; 
v___x_3531_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_3532_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_3526_);
lean_dec(v_allowConcurrency_3526_);
if (v_isShared_3530_ == 0)
{
lean_ctor_set(v___x_3529_, 1, v___x_3532_);
lean_ctor_set(v___x_3529_, 0, v___x_3531_);
v___x_3534_ = v___x_3529_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3531_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v___x_3532_);
v___x_3534_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; 
v___x_3535_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_3536_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowUnconfirmed_3527_);
lean_dec(v_allowUnconfirmed_3527_);
v___x_3537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3535_);
lean_ctor_set(v___x_3537_, 1, v___x_3536_);
v___x_3538_ = lean_unsigned_to_nat(2u);
v___x_3539_ = lean_mk_empty_array_with_capacity(v___x_3538_);
v___x_3540_ = lean_array_push(v___x_3539_, v___x_3534_);
v___x_3541_ = lean_array_push(v___x_3540_, v___x_3537_);
v___x_3542_ = l_Lasm_JS_Web_Support_fields(v___x_3541_);
lean_dec_ref(v___x_3541_);
return v___x_3542_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm(lean_object* v_self_3546_, lean_object* v_scheduledTime_3547_, lean_object* v_options_3548_){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3550_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0));
v___x_3551_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3548_);
v___x_3552_ = lean_unsigned_to_nat(2u);
v___x_3553_ = lean_mk_empty_array_with_capacity(v___x_3552_);
v___x_3554_ = lean_array_push(v___x_3553_, v_scheduledTime_3547_);
v___x_3555_ = lean_array_push(v___x_3554_, v___x_3551_);
v___x_3556_ = l_Lasm_JS_Web_Support_args(v___x_3555_);
v___x_3557_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3546_, v___x_3550_, v___x_3556_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___boxed(lean_object* v_self_3558_, lean_object* v_scheduledTime_3559_, lean_object* v_options_3560_, lean_object* v_a_3561_){
_start:
{
lean_object* v_res_3562_; 
v_res_3562_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm(v_self_3558_, v_scheduledTime_3559_, v_options_3560_);
return v_res_3562_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm(lean_object* v_self_3564_, lean_object* v_options_3565_){
_start:
{
lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3567_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0));
v___x_3568_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3565_);
v___x_3569_ = lean_unsigned_to_nat(1u);
v___x_3570_ = lean_mk_empty_array_with_capacity(v___x_3569_);
v___x_3571_ = lean_array_push(v___x_3570_, v___x_3568_);
v___x_3572_ = l_Lasm_JS_Web_Support_args(v___x_3571_);
v___x_3573_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3564_, v___x_3567_, v___x_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___boxed(lean_object* v_self_3574_, lean_object* v_options_3575_, lean_object* v_a_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm(v_self_3574_, v_options_3575_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync(lean_object* v_self_3579_){
_start:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3581_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___closed__0));
v___x_3582_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3583_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3579_, v___x_3581_, v___x_3582_);
return v___x_3583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___boxed(lean_object* v_self_3584_, lean_object* v_a_3585_){
_start:
{
lean_object* v_res_3586_; 
v_res_3586_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_sync(v_self_3584_);
return v_res_3586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark(lean_object* v_self_3588_){
_start:
{
lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3590_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___closed__0));
v___x_3591_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3592_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3588_, v___x_3590_, v___x_3591_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___boxed(lean_object* v_self_3593_, lean_object* v_a_3594_){
_start:
{
lean_object* v_res_3595_; 
v_res_3595_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark(v_self_3593_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime(lean_object* v_self_3597_, lean_object* v_timestamp_3598_){
_start:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; 
v___x_3600_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___closed__0));
v___x_3601_ = lean_unsigned_to_nat(1u);
v___x_3602_ = lean_mk_empty_array_with_capacity(v___x_3601_);
v___x_3603_ = lean_array_push(v___x_3602_, v_timestamp_3598_);
v___x_3604_ = l_Lasm_JS_Web_Support_args(v___x_3603_);
v___x_3605_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3597_, v___x_3600_, v___x_3604_);
return v___x_3605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___boxed(lean_object* v_self_3606_, lean_object* v_timestamp_3607_, lean_object* v_a_3608_){
_start:
{
lean_object* v_res_3609_; 
v_res_3609_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime(v_self_3606_, v_timestamp_3607_);
return v_res_3609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark(lean_object* v_self_3611_, lean_object* v_bookmark_3612_){
_start:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; 
v___x_3614_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___closed__0));
v___x_3615_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3615_, 0, v_bookmark_3612_);
v___x_3616_ = lean_unsigned_to_nat(1u);
v___x_3617_ = lean_mk_empty_array_with_capacity(v___x_3616_);
v___x_3618_ = lean_array_push(v___x_3617_, v___x_3615_);
v___x_3619_ = l_Lasm_JS_Web_Support_args(v___x_3618_);
v___x_3620_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3611_, v___x_3614_, v___x_3619_);
return v___x_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___boxed(lean_object* v_self_3621_, lean_object* v_bookmark_3622_, lean_object* v_a_3623_){
_start:
{
lean_object* v_res_3624_; 
v_res_3624_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark(v_self_3621_, v_bookmark_3622_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get(lean_object* v_self_3625_, lean_object* v_key_3626_, lean_object* v_options_3627_){
_start:
{
lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3629_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_3630_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3630_, 0, v_key_3626_);
v___x_3631_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_3627_);
v___x_3632_ = lean_unsigned_to_nat(2u);
v___x_3633_ = lean_mk_empty_array_with_capacity(v___x_3632_);
v___x_3634_ = lean_array_push(v___x_3633_, v___x_3630_);
v___x_3635_ = lean_array_push(v___x_3634_, v___x_3631_);
v___x_3636_ = l_Lasm_JS_Web_Support_args(v___x_3635_);
v___x_3637_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_3625_, v___x_3629_, v___x_3636_);
return v___x_3637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get___boxed(lean_object* v_self_3638_, lean_object* v_key_3639_, lean_object* v_options_3640_, lean_object* v_a_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_get(v_self_3638_, v_key_3639_, v_options_3640_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys(lean_object* v_self_3643_, lean_object* v_keys_3644_, lean_object* v_options_3645_){
_start:
{
lean_object* v___f_3647_; lean_object* v___x_3648_; size_t v_sz_3649_; size_t v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; uint8_t v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; 
v___f_3647_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_3648_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v_sz_3649_ = lean_array_size(v_keys_3644_);
v___x_3650_ = ((size_t)0ULL);
v___x_3651_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3649_, v___x_3650_, v_keys_3644_);
v___x_3652_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3651_);
v___x_3653_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_3645_);
v___x_3654_ = lean_unsigned_to_nat(2u);
v___x_3655_ = lean_mk_empty_array_with_capacity(v___x_3654_);
v___x_3656_ = lean_array_push(v___x_3655_, v___x_3652_);
v___x_3657_ = lean_array_push(v___x_3656_, v___x_3653_);
v___x_3658_ = l_Lasm_JS_Web_Support_args(v___x_3657_);
v___x_3659_ = lean_unsigned_to_nat(0u);
v___x_3660_ = 0;
v___x_3661_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3643_, v___x_3648_, v___x_3658_);
v___x_3662_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3659_, v___x_3660_, v___x_3661_, v___f_3647_);
return v___x_3662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys___boxed(lean_object* v_self_3663_, lean_object* v_keys_3664_, lean_object* v_options_3665_, lean_object* v_a_3666_){
_start:
{
lean_object* v_res_3667_; 
v_res_3667_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys(v_self_3663_, v_keys_3664_, v_options_3665_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list(lean_object* v_self_3668_, lean_object* v_options_3669_){
_start:
{
lean_object* v___f_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; lean_object* v___x_3678_; uint8_t v___x_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
v___f_3671_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_3672_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0));
v___x_3673_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(v_options_3669_);
v___x_3674_ = lean_unsigned_to_nat(1u);
v___x_3675_ = lean_mk_empty_array_with_capacity(v___x_3674_);
v___x_3676_ = lean_array_push(v___x_3675_, v___x_3673_);
v___x_3677_ = l_Lasm_JS_Web_Support_args(v___x_3676_);
v___x_3678_ = lean_unsigned_to_nat(0u);
v___x_3679_ = 0;
v___x_3680_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3668_, v___x_3672_, v___x_3677_);
v___x_3681_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3678_, v___x_3679_, v___x_3680_, v___f_3671_);
return v___x_3681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list___boxed(lean_object* v_self_3682_, lean_object* v_options_3683_, lean_object* v_a_3684_){
_start:
{
lean_object* v_res_3685_; 
v_res_3685_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_list(v_self_3682_, v_options_3683_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put(lean_object* v_self_3686_, lean_object* v_key_3687_, lean_object* v_value_3688_, lean_object* v_options_3689_){
_start:
{
lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; 
v___x_3691_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v___x_3692_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3692_, 0, v_key_3687_);
v___x_3693_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3689_);
v___x_3694_ = lean_unsigned_to_nat(3u);
v___x_3695_ = lean_mk_empty_array_with_capacity(v___x_3694_);
v___x_3696_ = lean_array_push(v___x_3695_, v___x_3692_);
v___x_3697_ = lean_array_push(v___x_3696_, v_value_3688_);
v___x_3698_ = lean_array_push(v___x_3697_, v___x_3693_);
v___x_3699_ = l_Lasm_JS_Web_Support_args(v___x_3698_);
v___x_3700_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3686_, v___x_3691_, v___x_3699_);
return v___x_3700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put___boxed(lean_object* v_self_3701_, lean_object* v_key_3702_, lean_object* v_value_3703_, lean_object* v_options_3704_, lean_object* v_a_3705_){
_start:
{
lean_object* v_res_3706_; 
v_res_3706_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_put(v_self_3701_, v_key_3702_, v_value_3703_, v_options_3704_);
lean_dec(v_options_3704_);
return v_res_3706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries(lean_object* v_self_3707_, lean_object* v_entries_3708_, lean_object* v_options_3709_){
_start:
{
lean_object* v___x_3711_; size_t v_sz_3712_; size_t v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; lean_object* v___x_3722_; 
v___x_3711_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v_sz_3712_ = lean_array_size(v_entries_3708_);
v___x_3713_ = ((size_t)0ULL);
v___x_3714_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_3712_, v___x_3713_, v_entries_3708_);
v___x_3715_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_3715_, 0, v___x_3714_);
v___x_3716_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3709_);
v___x_3717_ = lean_unsigned_to_nat(2u);
v___x_3718_ = lean_mk_empty_array_with_capacity(v___x_3717_);
v___x_3719_ = lean_array_push(v___x_3718_, v___x_3715_);
v___x_3720_ = lean_array_push(v___x_3719_, v___x_3716_);
v___x_3721_ = l_Lasm_JS_Web_Support_args(v___x_3720_);
v___x_3722_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3707_, v___x_3711_, v___x_3721_);
return v___x_3722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries___boxed(lean_object* v_self_3723_, lean_object* v_entries_3724_, lean_object* v_options_3725_, lean_object* v_a_3726_){
_start:
{
lean_object* v_res_3727_; 
v_res_3727_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries(v_self_3723_, v_entries_3724_, v_options_3725_);
lean_dec(v_options_3725_);
return v_res_3727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete(lean_object* v_self_3728_, lean_object* v_key_3729_, lean_object* v_options_3730_){
_start:
{
lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3732_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v___x_3733_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3733_, 0, v_key_3729_);
v___x_3734_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3730_);
v___x_3735_ = lean_unsigned_to_nat(2u);
v___x_3736_ = lean_mk_empty_array_with_capacity(v___x_3735_);
v___x_3737_ = lean_array_push(v___x_3736_, v___x_3733_);
v___x_3738_ = lean_array_push(v___x_3737_, v___x_3734_);
v___x_3739_ = l_Lasm_JS_Web_Support_args(v___x_3738_);
v___x_3740_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_self_3728_, v___x_3732_, v___x_3739_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete___boxed(lean_object* v_self_3741_, lean_object* v_key_3742_, lean_object* v_options_3743_, lean_object* v_a_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete(v_self_3741_, v_key_3742_, v_options_3743_);
lean_dec(v_options_3743_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys(lean_object* v_self_3746_, lean_object* v_keys_3747_, lean_object* v_options_3748_){
_start:
{
lean_object* v___x_3750_; size_t v_sz_3751_; size_t v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; 
v___x_3750_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v_sz_3751_ = lean_array_size(v_keys_3747_);
v___x_3752_ = ((size_t)0ULL);
v___x_3753_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3751_, v___x_3752_, v_keys_3747_);
v___x_3754_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3753_);
v___x_3755_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3748_);
v___x_3756_ = lean_unsigned_to_nat(2u);
v___x_3757_ = lean_mk_empty_array_with_capacity(v___x_3756_);
v___x_3758_ = lean_array_push(v___x_3757_, v___x_3754_);
v___x_3759_ = lean_array_push(v___x_3758_, v___x_3755_);
v___x_3760_ = l_Lasm_JS_Web_Support_args(v___x_3759_);
v___x_3761_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_self_3746_, v___x_3750_, v___x_3760_);
return v___x_3761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys___boxed(lean_object* v_self_3762_, lean_object* v_keys_3763_, lean_object* v_options_3764_, lean_object* v_a_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys(v_self_3762_, v_keys_3763_, v_options_3764_);
lean_dec(v_options_3764_);
return v_res_3766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback(lean_object* v_self_3768_){
_start:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3770_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___closed__0));
v___x_3771_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3772_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3768_, v___x_3770_, v___x_3771_);
return v___x_3772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___boxed(lean_object* v_self_3773_, lean_object* v_a_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback(v_self_3773_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm(lean_object* v_self_3776_, lean_object* v_options_3777_){
_start:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; 
v___x_3779_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0));
v___x_3780_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_options_3777_);
v___x_3781_ = lean_unsigned_to_nat(1u);
v___x_3782_ = lean_mk_empty_array_with_capacity(v___x_3781_);
v___x_3783_ = lean_array_push(v___x_3782_, v___x_3780_);
v___x_3784_ = l_Lasm_JS_Web_Support_args(v___x_3783_);
v___x_3785_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_self_3776_, v___x_3779_, v___x_3784_);
return v___x_3785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm___boxed(lean_object* v_self_3786_, lean_object* v_options_3787_, lean_object* v_a_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm(v_self_3786_, v_options_3787_);
lean_dec(v_options_3787_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm(lean_object* v_self_3790_, lean_object* v_scheduledTime_3791_, lean_object* v_options_3792_){
_start:
{
lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3794_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0));
v___x_3795_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3792_);
v___x_3796_ = lean_unsigned_to_nat(2u);
v___x_3797_ = lean_mk_empty_array_with_capacity(v___x_3796_);
v___x_3798_ = lean_array_push(v___x_3797_, v_scheduledTime_3791_);
v___x_3799_ = lean_array_push(v___x_3798_, v___x_3795_);
v___x_3800_ = l_Lasm_JS_Web_Support_args(v___x_3799_);
v___x_3801_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3790_, v___x_3794_, v___x_3800_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm___boxed(lean_object* v_self_3802_, lean_object* v_scheduledTime_3803_, lean_object* v_options_3804_, lean_object* v_a_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm(v_self_3802_, v_scheduledTime_3803_, v_options_3804_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm(lean_object* v_self_3807_, lean_object* v_options_3808_){
_start:
{
lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3810_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0));
v___x_3811_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3808_);
v___x_3812_ = lean_unsigned_to_nat(1u);
v___x_3813_ = lean_mk_empty_array_with_capacity(v___x_3812_);
v___x_3814_ = lean_array_push(v___x_3813_, v___x_3811_);
v___x_3815_ = l_Lasm_JS_Web_Support_args(v___x_3814_);
v___x_3816_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3807_, v___x_3810_, v___x_3815_);
return v___x_3816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm___boxed(lean_object* v_self_3817_, lean_object* v_options_3818_, lean_object* v_a_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm(v_self_3817_, v_options_3818_);
return v_res_3820_;
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
