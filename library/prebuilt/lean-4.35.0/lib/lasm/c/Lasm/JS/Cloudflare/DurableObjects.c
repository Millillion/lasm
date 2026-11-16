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
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
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
lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; 
v___f_1007_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0));
v___f_1008_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1008_, 0, v_f_1005_);
lean_closure_set(v___f_1008_, 1, v___f_1007_);
v___x_1009_ = l_Lasm_JS_Function_ofFn(v___f_1008_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1011_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
v___x_1011_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1013_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1014_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1012_, v___x_1013_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___y_1022_; uint8_t v___x_1049_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_a_1015_);
lean_dec_ref_known(v___x_1014_, 1);
v___x_1016_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1017_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1010_);
v___x_1018_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1018_, 0, v_a_1010_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1020_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1049_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8);
if (v___x_1049_ == 0)
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9);
v___y_1022_ = v___x_1050_;
goto v___jp_1021_;
}
else
{
lean_object* v___x_1051_; 
v___x_1051_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11);
v___y_1022_ = v___x_1051_;
goto v___jp_1021_;
}
v___jp_1021_:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_inc(v___y_1022_);
v___x_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1023_, 0, v___x_1020_);
lean_ctor_set(v___x_1023_, 1, v___y_1022_);
v___x_1024_ = lean_box(0);
v___x_1025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1023_);
lean_ctor_set(v___x_1025_, 1, v___x_1024_);
v___x_1026_ = l_Lasm_JS_obj(v___x_1025_);
v___x_1027_ = lean_unsigned_to_nat(3u);
v___x_1028_ = lean_mk_empty_array_with_capacity(v___x_1027_);
v___x_1029_ = lean_array_push(v___x_1028_, v___x_1018_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1019_);
v___x_1031_ = lean_array_push(v___x_1030_, v___x_1026_);
v___x_1032_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1015_, v___x_1016_, v___x_1031_);
if (lean_obj_tag(v___x_1032_) == 0)
{
lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v___x_1032_, 0);
lean_dec(v_unused_1040_);
v___x_1034_ = v___x_1032_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_dec(v___x_1032_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v_a_1010_);
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1010_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_dec(v_a_1010_);
v_a_1041_ = lean_ctor_get(v___x_1032_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1032_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1032_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1032_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
}
else
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
lean_dec(v_a_1010_);
v_a_1052_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___x_1014_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1014_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1052_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1067_; 
lean_dec(v_a_1010_);
v_a_1060_ = lean_ctor_get(v___x_1011_, 0);
v_isSharedCheck_1067_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1067_ == 0)
{
v___x_1062_ = v___x_1011_;
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_a_1060_);
lean_dec(v___x_1011_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1067_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1065_; 
if (v_isShared_1063_ == 0)
{
v___x_1065_ = v___x_1062_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1066_; 
v_reuseFailAlloc_1066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1066_, 0, v_a_1060_);
v___x_1065_ = v_reuseFailAlloc_1066_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
return v___x_1065_;
}
}
}
}
else
{
lean_object* v_a_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
v_a_1068_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1009_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_a_1068_);
lean_dec(v___x_1009_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___boxed(lean_object* v_f_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn(v_f_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0(lean_object* v_f_1079_, lean_object* v_x_1080_){
_start:
{
lean_object* v___x_1082_; 
v___x_1082_ = lean_apply_1(v_f_1079_, lean_box(0));
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1083_, lean_object* v_x_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0(v_f_1083_, v_x_1084_);
lean_dec_ref(v_x_1084_);
return v_res_1086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn(lean_object* v_f_1087_){
_start:
{
lean_object* v___f_1089_; lean_object* v___x_1090_; 
v___f_1089_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1089_, 0, v_f_1087_);
v___x_1090_ = l_Lasm_JS_Function_ofSyncFn(v___f_1089_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1095_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1093_, v___x_1094_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___y_1103_; uint8_t v___x_1130_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1097_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1091_);
v___x_1099_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1099_, 0, v_a_1091_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1101_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1130_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__8);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__9);
v___y_1103_ = v___x_1131_;
goto v___jp_1102_;
}
else
{
lean_object* v___x_1132_; 
v___x_1132_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11, &l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__11);
v___y_1103_ = v___x_1132_;
goto v___jp_1102_;
}
v___jp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
lean_inc(v___y_1103_);
v___x_1104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1101_);
lean_ctor_set(v___x_1104_, 1, v___y_1103_);
v___x_1105_ = lean_box(0);
v___x_1106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1104_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = l_Lasm_JS_obj(v___x_1106_);
v___x_1108_ = lean_unsigned_to_nat(3u);
v___x_1109_ = lean_mk_empty_array_with_capacity(v___x_1108_);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1099_);
v___x_1111_ = lean_array_push(v___x_1110_, v___x_1100_);
v___x_1112_ = lean_array_push(v___x_1111_, v___x_1107_);
v___x_1113_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1096_, v___x_1097_, v___x_1112_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1120_ == 0)
{
lean_object* v_unused_1121_; 
v_unused_1121_ = lean_ctor_get(v___x_1113_, 0);
lean_dec(v_unused_1121_);
v___x_1115_ = v___x_1113_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_dec(v___x_1113_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 0, v_a_1091_);
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1091_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec(v_a_1091_);
v_a_1122_ = lean_ctor_get(v___x_1113_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1113_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1113_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1113_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
}
else
{
lean_object* v_a_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1140_; 
lean_dec(v_a_1091_);
v_a_1133_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1135_ = v___x_1095_;
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_a_1133_);
lean_dec(v___x_1095_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1140_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
lean_object* v___x_1138_; 
if (v_isShared_1136_ == 0)
{
v___x_1138_ = v___x_1135_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_a_1133_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
else
{
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec(v_a_1091_);
v_a_1141_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1092_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1092_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
else
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v_a_1149_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___x_1090_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___x_1090_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn___boxed(lean_object* v_f_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofSyncFn(v_f_1157_);
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0(lean_object* v___f_1161_, lean_object* v_d_1162_){
_start:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1163_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0));
v___x_1164_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1161_, v_d_1162_);
v___x_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1163_);
lean_ctor_set(v___x_1165_, 1, v___x_1164_);
v___x_1166_ = lean_unsigned_to_nat(1u);
v___x_1167_ = lean_mk_empty_array_with_capacity(v___x_1166_);
v___x_1168_ = lean_array_push(v___x_1167_, v___x_1165_);
v___x_1169_ = l_Lasm_JS_Web_Support_fields(v___x_1168_);
lean_dec_ref(v___x_1168_);
return v___x_1169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0(lean_object* v___f_1176_, lean_object* v_d_1177_){
_start:
{
lean_object* v_allowConcurrency_1178_; lean_object* v_noCache_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1196_; 
v_allowConcurrency_1178_ = lean_ctor_get(v_d_1177_, 0);
v_noCache_1179_ = lean_ctor_get(v_d_1177_, 1);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_d_1177_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1181_ = v_d_1177_;
v_isShared_1182_ = v_isSharedCheck_1196_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_noCache_1179_);
lean_inc(v_allowConcurrency_1178_);
lean_dec(v_d_1177_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1196_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1183_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref(v___f_1176_);
v___x_1184_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1176_, v_allowConcurrency_1178_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v___x_1184_);
lean_ctor_set(v___x_1181_, 0, v___x_1183_);
v___x_1186_ = v___x_1181_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1183_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1187_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1188_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1176_, v_noCache_1179_);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v___x_1190_ = lean_unsigned_to_nat(2u);
v___x_1191_ = lean_mk_empty_array_with_capacity(v___x_1190_);
v___x_1192_ = lean_array_push(v___x_1191_, v___x_1186_);
v___x_1193_ = lean_array_push(v___x_1192_, v___x_1189_);
v___x_1194_ = l_Lasm_JS_Web_Support_fields(v___x_1193_);
lean_dec_ref(v___x_1193_);
return v___x_1194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0(lean_object* v___f_1206_, lean_object* v___f_1207_, lean_object* v___f_1208_, lean_object* v_d_1209_){
_start:
{
lean_object* v_start_1210_; lean_object* v_startAfter_1211_; lean_object* v_end_1212_; lean_object* v_prefix_1213_; lean_object* v_reverse_1214_; lean_object* v_limit_1215_; lean_object* v_allowConcurrency_1216_; lean_object* v_noCache_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v_start_1210_ = lean_ctor_get(v_d_1209_, 0);
lean_inc(v_start_1210_);
v_startAfter_1211_ = lean_ctor_get(v_d_1209_, 1);
lean_inc(v_startAfter_1211_);
v_end_1212_ = lean_ctor_get(v_d_1209_, 2);
lean_inc(v_end_1212_);
v_prefix_1213_ = lean_ctor_get(v_d_1209_, 3);
lean_inc(v_prefix_1213_);
v_reverse_1214_ = lean_ctor_get(v_d_1209_, 4);
lean_inc(v_reverse_1214_);
v_limit_1215_ = lean_ctor_get(v_d_1209_, 5);
lean_inc(v_limit_1215_);
v_allowConcurrency_1216_ = lean_ctor_get(v_d_1209_, 6);
lean_inc(v_allowConcurrency_1216_);
v_noCache_1217_ = lean_ctor_get(v_d_1209_, 7);
lean_inc(v_noCache_1217_);
lean_dec_ref(v_d_1209_);
v___x_1218_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1206_, 3);
v___x_1219_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_start_1210_);
v___x_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1218_);
lean_ctor_set(v___x_1220_, 1, v___x_1219_);
v___x_1221_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1));
v___x_1222_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_startAfter_1211_);
v___x_1223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1221_);
lean_ctor_set(v___x_1223_, 1, v___x_1222_);
v___x_1224_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2));
v___x_1225_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_end_1212_);
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1224_);
lean_ctor_set(v___x_1226_, 1, v___x_1225_);
v___x_1227_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3));
v___x_1228_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1206_, v_prefix_1213_);
v___x_1229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1229_, 0, v___x_1227_);
lean_ctor_set(v___x_1229_, 1, v___x_1228_);
v___x_1230_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4));
lean_inc_ref_n(v___f_1207_, 2);
v___x_1231_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_reverse_1214_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1230_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
v___x_1233_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5));
v___x_1234_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1208_, v_limit_1215_);
v___x_1235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1233_);
lean_ctor_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_1237_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_allowConcurrency_1216_);
v___x_1238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1236_);
lean_ctor_set(v___x_1238_, 1, v___x_1237_);
v___x_1239_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1240_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1207_, v_noCache_1217_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = lean_unsigned_to_nat(8u);
v___x_1243_ = lean_mk_empty_array_with_capacity(v___x_1242_);
v___x_1244_ = lean_array_push(v___x_1243_, v___x_1220_);
v___x_1245_ = lean_array_push(v___x_1244_, v___x_1223_);
v___x_1246_ = lean_array_push(v___x_1245_, v___x_1226_);
v___x_1247_ = lean_array_push(v___x_1246_, v___x_1229_);
v___x_1248_ = lean_array_push(v___x_1247_, v___x_1232_);
v___x_1249_ = lean_array_push(v___x_1248_, v___x_1235_);
v___x_1250_ = lean_array_push(v___x_1249_, v___x_1238_);
v___x_1251_ = lean_array_push(v___x_1250_, v___x_1241_);
v___x_1252_ = l_Lasm_JS_Web_Support_fields(v___x_1251_);
lean_dec_ref(v___x_1251_);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0(lean_object* v___f_1261_, lean_object* v_d_1262_){
_start:
{
lean_object* v_allowConcurrency_1263_; lean_object* v_allowUnconfirmed_1264_; lean_object* v_noCache_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v_allowConcurrency_1263_ = lean_ctor_get(v_d_1262_, 0);
lean_inc(v_allowConcurrency_1263_);
v_allowUnconfirmed_1264_ = lean_ctor_get(v_d_1262_, 1);
lean_inc(v_allowUnconfirmed_1264_);
v_noCache_1265_ = lean_ctor_get(v_d_1262_, 2);
lean_inc(v_noCache_1265_);
lean_dec_ref(v_d_1262_);
v___x_1266_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1261_, 2);
v___x_1267_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1261_, v_allowConcurrency_1263_);
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1266_);
lean_ctor_set(v___x_1268_, 1, v___x_1267_);
v___x_1269_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_1270_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1261_, v_allowUnconfirmed_1264_);
v___x_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1269_);
lean_ctor_set(v___x_1271_, 1, v___x_1270_);
v___x_1272_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_1273_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1261_, v_noCache_1265_);
v___x_1274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1272_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = lean_unsigned_to_nat(3u);
v___x_1276_ = lean_mk_empty_array_with_capacity(v___x_1275_);
v___x_1277_ = lean_array_push(v___x_1276_, v___x_1268_);
v___x_1278_ = lean_array_push(v___x_1277_, v___x_1271_);
v___x_1279_ = lean_array_push(v___x_1278_, v___x_1274_);
v___x_1280_ = l_Lasm_JS_Web_Support_fields(v___x_1279_);
lean_dec_ref(v___x_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1(lean_object* v_f_1291_, lean_object* v___f_1292_, lean_object* v_x_1293_){
_start:
{
if (lean_obj_tag(v_x_1293_) == 0)
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1303_; 
lean_dec_ref(v___f_1292_);
lean_dec_ref(v_f_1291_);
v_a_1295_ = lean_ctor_get(v_x_1293_, 0);
v_isSharedCheck_1303_ = !lean_is_exclusive(v_x_1293_);
if (v_isSharedCheck_1303_ == 0)
{
v___x_1297_ = v_x_1293_;
v_isShared_1298_ = v_isSharedCheck_1303_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v_x_1293_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1303_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1302_; 
v_reuseFailAlloc_1302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1302_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1302_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
lean_object* v___x_1301_; 
v___x_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
return v___x_1301_;
}
}
}
else
{
lean_object* v_a_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v_a_1304_ = lean_ctor_get(v_x_1293_, 0);
lean_inc(v_a_1304_);
lean_dec_ref_known(v_x_1293_, 1);
v___x_1305_ = lean_unsigned_to_nat(0u);
v___x_1306_ = 0;
v___x_1307_ = lean_apply_2(v_f_1291_, v_a_1304_, lean_box(0));
v___x_1308_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1305_, v___x_1306_, v___x_1307_, v___f_1292_);
return v___x_1308_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1___boxed(lean_object* v_f_1309_, lean_object* v___f_1310_, lean_object* v_x_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1(v_f_1309_, v___f_1310_, v_x_1311_);
return v_res_1313_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1318_ = lean_string_utf8_byte_size(v___x_1317_);
return v___x_1318_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; uint8_t v___x_1321_; 
v___x_1319_ = lean_unsigned_to_nat(0u);
v___x_1320_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__3);
v___x_1321_ = lean_nat_dec_eq(v___x_1320_, v___x_1319_);
return v___x_1321_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; 
v___x_1326_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__8));
v___x_1327_ = lean_unsigned_to_nat(46u);
v___x_1328_ = lean_unsigned_to_nat(193u);
v___x_1329_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__7));
v___x_1330_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__6));
v___x_1331_ = l_mkPanicMessageWithDecl(v___x_1330_, v___x_1329_, v___x_1328_, v___x_1327_, v___x_1326_);
return v___x_1331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(lean_object* v_context_1333_, lean_object* v_d_1334_){
_start:
{
lean_object* v___y_1337_; lean_object* v___y_1338_; 
if (lean_obj_tag(v_d_1334_) == 9)
{
lean_object* v_value_1342_; lean_object* v___x_1343_; 
v_value_1342_ = lean_ctor_get(v_d_1334_, 0);
lean_inc(v_value_1342_);
lean_dec_ref_known(v_d_1334_, 2);
v___x_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1343_, 0, v_value_1342_);
return v___x_1343_;
}
else
{
lean_object* v___x_1344_; lean_object* v_received_1346_; 
v___x_1344_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
if (lean_obj_tag(v_d_1334_) == 9)
{
lean_object* v_value_1360_; lean_object* v_description_1361_; uint8_t v___x_1362_; 
v_value_1360_ = lean_ctor_get(v_d_1334_, 0);
v_description_1361_ = lean_ctor_get(v_d_1334_, 1);
v___x_1362_ = lean_string_dec_eq(v_description_1361_, v___x_1344_);
if (v___x_1362_ == 0)
{
goto v___jp_1358_;
}
else
{
uint32_t v___x_1363_; uint64_t v___x_1364_; lean_object* v___x_1365_; uint32_t v___x_1366_; lean_object* v___x_1367_; 
lean_inc_n(v_value_1360_, 2);
lean_dec_ref_known(v_d_1334_, 2);
v___x_1363_ = 206;
v___x_1364_ = 0ULL;
v___x_1365_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1365_, 0, v_value_1360_);
lean_ctor_set(v___x_1365_, 1, v___x_1344_);
v___x_1366_ = lasm_js_value_handle(v_value_1360_);
lean_dec(v_value_1360_);
v___x_1367_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1363_, v___x_1364_, v___x_1365_, v___x_1366_);
lean_dec_ref_known(v___x_1365_, 2);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; uint8_t v___x_1369_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref_known(v___x_1367_, 1);
v___x_1369_ = lean_string_validate_utf8(v_a_1368_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
lean_dec(v_a_1368_);
v___x_1370_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9);
v___x_1371_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1370_);
v_received_1346_ = v___x_1371_;
goto v___jp_1345_;
}
else
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_string_from_utf8_unchecked(v_a_1368_);
v_received_1346_ = v___x_1372_;
goto v___jp_1345_;
}
}
else
{
lean_object* v___x_1373_; 
lean_dec_ref_known(v___x_1367_, 1);
v___x_1373_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10));
v_received_1346_ = v___x_1373_;
goto v___jp_1345_;
}
}
}
else
{
goto v___jp_1358_;
}
v___jp_1345_:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
v___x_1347_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_1348_ = lean_string_append(v___x_1347_, v_context_1333_);
v___x_1349_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1));
v___x_1350_ = lean_string_append(v___x_1348_, v___x_1349_);
v___x_1351_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instFromJSDurableObjectTransaction___closed__0));
v___x_1352_ = lean_string_append(v___x_1350_, v___x_1351_);
v___x_1353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2));
v___x_1354_ = lean_string_append(v___x_1352_, v___x_1353_);
v___x_1355_ = lean_string_append(v___x_1354_, v_received_1346_);
lean_dec_ref(v_received_1346_);
v___x_1356_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__4);
if (v___x_1356_ == 0)
{
lean_object* v___x_1357_; 
v___x_1357_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__5));
v___y_1337_ = v___x_1355_;
v___y_1338_ = v___x_1357_;
goto v___jp_1336_;
}
else
{
v___y_1337_ = v___x_1355_;
v___y_1338_ = v___x_1344_;
goto v___jp_1336_;
}
}
v___jp_1358_:
{
lean_object* v___x_1359_; 
v___x_1359_ = l_Lasm_JS_Data_describe(v_d_1334_);
v_received_1346_ = v___x_1359_;
goto v___jp_1345_;
}
}
v___jp_1336_:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1339_ = lean_string_append(v___y_1337_, v___y_1338_);
v___x_1340_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1339_);
v___x_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
return v___x_1341_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1374_, lean_object* v_d_1375_, lean_object* v_a_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v_context_1374_, v_d_1375_);
lean_dec_ref(v_context_1374_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(lean_object* v_args_1379_, lean_object* v_i_1380_){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1382_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___closed__0));
v___x_1383_ = lean_unsigned_to_nat(1u);
v___x_1384_ = lean_nat_add(v_i_1380_, v___x_1383_);
v___x_1385_ = l_Nat_reprFast(v___x_1384_);
v___x_1386_ = lean_string_append(v___x_1382_, v___x_1385_);
lean_dec_ref(v___x_1385_);
v___x_1387_ = lean_array_get_size(v_args_1379_);
v___x_1388_ = lean_nat_dec_lt(v_i_1380_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = lean_box(0);
v___x_1390_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v___x_1386_, v___x_1389_);
lean_dec_ref(v___x_1386_);
return v___x_1390_;
}
else
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1391_ = lean_array_fget_borrowed(v_args_1379_, v_i_1380_);
lean_inc(v___x_1391_);
v___x_1392_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0(v___x_1386_, v___x_1391_);
lean_dec_ref(v___x_1386_);
return v___x_1392_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0___boxed(lean_object* v_args_1393_, lean_object* v_i_1394_, lean_object* v_a_1395_){
_start:
{
lean_object* v_res_1396_; 
v_res_1396_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1393_, v_i_1394_);
lean_dec(v_i_1394_);
lean_dec_ref(v_args_1393_);
return v_res_1396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0(lean_object* v___f_1397_, lean_object* v_args_1398_){
_start:
{
lean_object* v___x_1400_; uint8_t v___x_1401_; lean_object* v_val_1403_; lean_object* v___x_1406_; 
v___x_1400_ = lean_unsigned_to_nat(0u);
v___x_1401_ = 0;
v___x_1406_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1398_, v___x_1400_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1414_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1409_ = v___x_1406_;
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1406_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1414_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1412_; 
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 1);
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
v_val_1403_ = v___x_1412_;
goto v___jp_1402_;
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
v_a_1415_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1406_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1406_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
lean_ctor_set_tag(v___x_1417_, 0);
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
v_val_1403_ = v___x_1420_;
goto v___jp_1402_;
}
}
}
v___jp_1402_:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_val_1403_);
v___x_1405_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1400_, v___x_1401_, v___x_1404_, v___f_1397_);
return v___x_1405_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0___boxed(lean_object* v___f_1423_, lean_object* v_args_1424_, lean_object* v___y_1425_){
_start:
{
lean_object* v_res_1426_; 
v_res_1426_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0(v___f_1423_, v_args_1424_);
lean_dec_ref(v_args_1424_);
return v_res_1426_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0(void){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1428_ = lean_nat_abs(v___x_1427_);
return v___x_1428_;
}
}
static uint8_t _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; 
v___x_1429_ = lean_cstr_to_nat("9007199254740991");
v___x_1430_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__0);
v___x_1431_ = lean_nat_dec_le(v___x_1430_, v___x_1429_);
return v___x_1431_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2(void){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; 
v___x_1432_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1433_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1432_);
return v___x_1433_;
}
}
static double _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3(void){
_start:
{
lean_object* v___x_1434_; double v___x_1435_; 
v___x_1434_ = lean_obj_once(&l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9, &l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9_once, _init_l_Lasm_JS_Cloudflare_instReprDurableObjectJurisdiction_repr___closed__9);
v___x_1435_ = l_Float_ofInt(v___x_1434_);
return v___x_1435_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4(void){
_start:
{
double v___x_1436_; lean_object* v___x_1437_; 
v___x_1436_ = lean_float_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__3);
v___x_1437_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1437_, 0, v___x_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn(lean_object* v_f_1438_){
_start:
{
lean_object* v___f_1440_; lean_object* v___f_1441_; lean_object* v___f_1442_; lean_object* v___x_1443_; 
v___f_1440_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__0));
v___f_1441_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1441_, 0, v_f_1438_);
lean_closure_set(v___f_1441_, 1, v___f_1440_);
v___f_1442_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1442_, 0, v___f_1441_);
v___x_1443_ = l_Lasm_JS_Function_ofFn(v___f_1442_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; lean_object* v___x_1445_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1445_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_a_1446_);
lean_dec_ref_known(v___x_1445_, 1);
v___x_1447_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1448_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1446_, v___x_1447_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___y_1456_; uint8_t v___x_1483_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1448_, 1);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1451_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1444_);
v___x_1452_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1452_, 0, v_a_1444_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1454_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1483_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; 
v___x_1484_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2);
v___y_1456_ = v___x_1484_;
goto v___jp_1455_;
}
else
{
lean_object* v___x_1485_; 
v___x_1485_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4);
v___y_1456_ = v___x_1485_;
goto v___jp_1455_;
}
v___jp_1455_:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
lean_inc(v___y_1456_);
v___x_1457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1457_, 0, v___x_1454_);
lean_ctor_set(v___x_1457_, 1, v___y_1456_);
v___x_1458_ = lean_box(0);
v___x_1459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1457_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = l_Lasm_JS_obj(v___x_1459_);
v___x_1461_ = lean_unsigned_to_nat(3u);
v___x_1462_ = lean_mk_empty_array_with_capacity(v___x_1461_);
v___x_1463_ = lean_array_push(v___x_1462_, v___x_1452_);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1453_);
v___x_1465_ = lean_array_push(v___x_1464_, v___x_1460_);
v___x_1466_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1449_, v___x_1450_, v___x_1465_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1473_ == 0)
{
lean_object* v_unused_1474_; 
v_unused_1474_ = lean_ctor_get(v___x_1466_, 0);
lean_dec(v_unused_1474_);
v___x_1468_ = v___x_1466_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_dec(v___x_1466_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 0, v_a_1444_);
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1444_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1482_; 
lean_dec(v_a_1444_);
v_a_1475_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1482_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1477_ = v___x_1466_;
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_a_1475_);
lean_dec(v___x_1466_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1482_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___x_1480_; 
if (v_isShared_1478_ == 0)
{
v___x_1480_ = v___x_1477_;
goto v_reusejp_1479_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v_a_1475_);
v___x_1480_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1479_;
}
v_reusejp_1479_:
{
return v___x_1480_;
}
}
}
}
}
else
{
lean_object* v_a_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
lean_dec(v_a_1444_);
v_a_1486_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1493_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1493_ == 0)
{
v___x_1488_ = v___x_1448_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_a_1486_);
lean_dec(v___x_1448_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v_a_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
else
{
lean_object* v_a_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1501_; 
lean_dec(v_a_1444_);
v_a_1494_ = lean_ctor_get(v___x_1445_, 0);
v_isSharedCheck_1501_ = !lean_is_exclusive(v___x_1445_);
if (v_isSharedCheck_1501_ == 0)
{
v___x_1496_ = v___x_1445_;
v_isShared_1497_ = v_isSharedCheck_1501_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_a_1494_);
lean_dec(v___x_1445_);
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
v_reuseFailAlloc_1500_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1509_; 
v_a_1502_ = lean_ctor_get(v___x_1443_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1443_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1504_ = v___x_1443_;
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_a_1502_);
lean_dec(v___x_1443_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1505_ == 0)
{
v___x_1507_ = v___x_1504_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_a_1502_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___boxed(lean_object* v_f_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn(v_f_1510_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0(lean_object* v_f_1513_, lean_object* v_args_1514_){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = lean_unsigned_to_nat(0u);
v___x_1517_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0(v_args_1514_, v___x_1516_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1519_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___x_1519_ = lean_apply_2(v_f_1513_, v_a_1518_, lean_box(0));
return v___x_1519_;
}
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec_ref(v_f_1513_);
v_a_1520_ = lean_ctor_get(v___x_1517_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1517_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1517_);
v___x_1522_ = lean_box(0);
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
v_resetjp_1521_:
{
lean_object* v___x_1525_; 
if (v_isShared_1523_ == 0)
{
v___x_1525_ = v___x_1522_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v_a_1520_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0___boxed(lean_object* v_f_1528_, lean_object* v_args_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v_res_1531_; 
v_res_1531_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0(v_f_1528_, v_args_1529_);
lean_dec_ref(v_args_1529_);
return v_res_1531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn(lean_object* v_f_1532_){
_start:
{
lean_object* v___f_1534_; lean_object* v___x_1535_; 
v___f_1534_ = lean_alloc_closure((void*)(l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1534_, 0, v_f_1532_);
v___x_1535_ = l_Lasm_JS_Function_ofSyncFn(v___f_1534_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v_a_1536_; lean_object* v___x_1537_; 
v_a_1536_ = lean_ctor_get(v___x_1535_, 0);
lean_inc(v_a_1536_);
lean_dec_ref_known(v___x_1535_, 1);
v___x_1537_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
v___x_1539_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__1));
v___x_1540_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1538_, v___x_1539_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v_a_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___y_1548_; uint8_t v___x_1575_; 
v_a_1541_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_a_1541_);
lean_dec_ref_known(v___x_1540_, 1);
v___x_1542_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__2));
v___x_1543_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
lean_inc(v_a_1536_);
v___x_1544_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1544_, 0, v_a_1536_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__4));
v___x_1546_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStateBlockConcurrencyWhileCallback_ofFn___closed__5));
v___x_1575_ = lean_uint8_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__1);
if (v___x_1575_ == 0)
{
lean_object* v___x_1576_; 
v___x_1576_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__2);
v___y_1548_ = v___x_1576_;
goto v___jp_1547_;
}
else
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4, &l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4_once, _init_l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn___closed__4);
v___y_1548_ = v___x_1577_;
goto v___jp_1547_;
}
v___jp_1547_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_inc(v___y_1548_);
v___x_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1546_);
lean_ctor_set(v___x_1549_, 1, v___y_1548_);
v___x_1550_ = lean_box(0);
v___x_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = l_Lasm_JS_obj(v___x_1551_);
v___x_1553_ = lean_unsigned_to_nat(3u);
v___x_1554_ = lean_mk_empty_array_with_capacity(v___x_1553_);
v___x_1555_ = lean_array_push(v___x_1554_, v___x_1544_);
v___x_1556_ = lean_array_push(v___x_1555_, v___x_1545_);
v___x_1557_ = lean_array_push(v___x_1556_, v___x_1552_);
v___x_1558_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1541_, v___x_1542_, v___x_1557_);
if (lean_obj_tag(v___x_1558_) == 0)
{
lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1565_ == 0)
{
lean_object* v_unused_1566_; 
v_unused_1566_ = lean_ctor_get(v___x_1558_, 0);
lean_dec(v_unused_1566_);
v___x_1560_ = v___x_1558_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_dec(v___x_1558_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
lean_ctor_set(v___x_1560_, 0, v_a_1536_);
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1536_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
else
{
lean_object* v_a_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1574_; 
lean_dec(v_a_1536_);
v_a_1567_ = lean_ctor_get(v___x_1558_, 0);
v_isSharedCheck_1574_ = !lean_is_exclusive(v___x_1558_);
if (v_isSharedCheck_1574_ == 0)
{
v___x_1569_ = v___x_1558_;
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_a_1567_);
lean_dec(v___x_1558_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1574_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v___x_1572_; 
if (v_isShared_1570_ == 0)
{
v___x_1572_ = v___x_1569_;
goto v_reusejp_1571_;
}
else
{
lean_object* v_reuseFailAlloc_1573_; 
v_reuseFailAlloc_1573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1573_, 0, v_a_1567_);
v___x_1572_ = v_reuseFailAlloc_1573_;
goto v_reusejp_1571_;
}
v_reusejp_1571_:
{
return v___x_1572_;
}
}
}
}
}
else
{
lean_object* v_a_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1585_; 
lean_dec(v_a_1536_);
v_a_1578_ = lean_ctor_get(v___x_1540_, 0);
v_isSharedCheck_1585_ = !lean_is_exclusive(v___x_1540_);
if (v_isSharedCheck_1585_ == 0)
{
v___x_1580_ = v___x_1540_;
v_isShared_1581_ = v_isSharedCheck_1585_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_a_1578_);
lean_dec(v___x_1540_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1585_;
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
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_a_1578_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
return v___x_1583_;
}
}
}
}
else
{
lean_object* v_a_1586_; lean_object* v___x_1588_; uint8_t v_isShared_1589_; uint8_t v_isSharedCheck_1593_; 
lean_dec(v_a_1536_);
v_a_1586_ = lean_ctor_get(v___x_1537_, 0);
v_isSharedCheck_1593_ = !lean_is_exclusive(v___x_1537_);
if (v_isSharedCheck_1593_ == 0)
{
v___x_1588_ = v___x_1537_;
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
else
{
lean_inc(v_a_1586_);
lean_dec(v___x_1537_);
v___x_1588_ = lean_box(0);
v_isShared_1589_ = v_isSharedCheck_1593_;
goto v_resetjp_1587_;
}
v_resetjp_1587_:
{
lean_object* v___x_1591_; 
if (v_isShared_1589_ == 0)
{
v___x_1591_ = v___x_1588_;
goto v_reusejp_1590_;
}
else
{
lean_object* v_reuseFailAlloc_1592_; 
v_reuseFailAlloc_1592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1592_, 0, v_a_1586_);
v___x_1591_ = v_reuseFailAlloc_1592_;
goto v_reusejp_1590_;
}
v_reusejp_1590_:
{
return v___x_1591_;
}
}
}
}
else
{
lean_object* v_a_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1601_; 
v_a_1594_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1596_ = v___x_1535_;
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_a_1594_);
lean_dec(v___x_1535_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1601_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v___x_1599_; 
if (v_isShared_1597_ == 0)
{
v___x_1599_ = v___x_1596_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v_a_1594_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn___boxed(lean_object* v_f_1602_, lean_object* v_a_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofSyncFn(v_f_1602_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectGetAlarmOptions___lam__0(lean_object* v___f_1605_, lean_object* v_d_1606_){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1607_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_1608_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1605_, v_d_1606_);
v___x_1609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1607_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
v___x_1610_ = lean_unsigned_to_nat(1u);
v___x_1611_ = lean_mk_empty_array_with_capacity(v___x_1610_);
v___x_1612_ = lean_array_push(v___x_1611_, v___x_1609_);
v___x_1613_ = l_Lasm_JS_Web_Support_fields(v___x_1612_);
lean_dec_ref(v___x_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_instToJSDurableObjectSetAlarmOptions___lam__0(lean_object* v___f_1617_, lean_object* v_d_1618_){
_start:
{
lean_object* v_allowConcurrency_1619_; lean_object* v_allowUnconfirmed_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1637_; 
v_allowConcurrency_1619_ = lean_ctor_get(v_d_1618_, 0);
v_allowUnconfirmed_1620_ = lean_ctor_get(v_d_1618_, 1);
v_isSharedCheck_1637_ = !lean_is_exclusive(v_d_1618_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1622_ = v_d_1618_;
v_isShared_1623_ = v_isSharedCheck_1637_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_allowUnconfirmed_1620_);
lean_inc(v_allowConcurrency_1619_);
lean_dec(v_d_1618_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1637_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1627_; 
v___x_1624_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
lean_inc_ref(v___f_1617_);
v___x_1625_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1617_, v_allowConcurrency_1619_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 1, v___x_1625_);
lean_ctor_set(v___x_1622_, 0, v___x_1624_);
v___x_1627_ = v___x_1622_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v___x_1624_);
lean_ctor_set(v_reuseFailAlloc_1636_, 1, v___x_1625_);
v___x_1627_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1628_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_1629_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1617_, v_allowUnconfirmed_1620_);
v___x_1630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
v___x_1631_ = lean_unsigned_to_nat(2u);
v___x_1632_ = lean_mk_empty_array_with_capacity(v___x_1631_);
v___x_1633_ = lean_array_push(v___x_1632_, v___x_1627_);
v___x_1634_ = lean_array_push(v___x_1633_, v___x_1630_);
v___x_1635_ = l_Lasm_JS_Web_Support_fields(v___x_1634_);
lean_dec_ref(v___x_1634_);
return v___x_1635_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(lean_object* v_x_1641_){
_start:
{
if (lean_obj_tag(v_x_1641_) == 0)
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_box(0);
return v___x_1642_;
}
else
{
lean_object* v_val_1643_; uint8_t v___x_1644_; 
v_val_1643_ = lean_ctor_get(v_x_1641_, 0);
v___x_1644_ = lean_unbox(v_val_1643_);
switch(v___x_1644_)
{
case 0:
{
lean_object* v___x_1645_; 
v___x_1645_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1));
return v___x_1645_;
}
case 1:
{
lean_object* v___x_1646_; 
v___x_1646_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3));
return v___x_1646_;
}
case 2:
{
lean_object* v___x_1647_; 
v___x_1647_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5));
return v___x_1647_;
}
default: 
{
lean_object* v___x_1648_; 
v___x_1648_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7));
return v___x_1648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0___boxed(lean_object* v_x_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(v_x_1649_);
lean_dec(v_x_1649_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(lean_object* v_x_1651_){
_start:
{
if (lean_obj_tag(v_x_1651_) == 0)
{
lean_object* v___x_1652_; 
v___x_1652_ = lean_box(0);
return v___x_1652_;
}
else
{
lean_object* v_val_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v_val_1653_ = lean_ctor_get(v_x_1651_, 0);
v___x_1654_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
v___x_1655_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0_spec__0(v_val_1653_);
v___x_1656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1654_);
lean_ctor_set(v___x_1656_, 1, v___x_1655_);
v___x_1657_ = lean_unsigned_to_nat(1u);
v___x_1658_ = lean_mk_empty_array_with_capacity(v___x_1657_);
v___x_1659_ = lean_array_push(v___x_1658_, v___x_1656_);
v___x_1660_ = l_Lasm_JS_Web_Support_fields(v___x_1659_);
lean_dec_ref(v___x_1659_);
return v___x_1660_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0___boxed(lean_object* v_x_1661_){
_start:
{
lean_object* v_res_1662_; 
v_res_1662_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(v_x_1661_);
lean_dec(v_x_1661_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId(lean_object* v_self_1664_, lean_object* v_options_1665_){
_start:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v___x_1667_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___closed__0));
v___x_1668_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId_spec__0(v_options_1665_);
v___x_1669_ = lean_unsigned_to_nat(1u);
v___x_1670_ = lean_mk_empty_array_with_capacity(v___x_1669_);
v___x_1671_ = lean_array_push(v___x_1670_, v___x_1668_);
v___x_1672_ = l_Lasm_JS_Web_Support_args(v___x_1671_);
v___x_1673_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1664_, v___x_1667_, v___x_1672_);
if (lean_obj_tag(v___x_1673_) == 0)
{
lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1681_; 
v_a_1674_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1676_ = v___x_1673_;
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1673_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1679_; 
if (v_isShared_1677_ == 0)
{
v___x_1679_ = v___x_1676_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1674_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
else
{
lean_object* v_a_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1689_; 
v_a_1682_ = lean_ctor_get(v___x_1673_, 0);
v_isSharedCheck_1689_ = !lean_is_exclusive(v___x_1673_);
if (v_isSharedCheck_1689_ == 0)
{
v___x_1684_ = v___x_1673_;
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_a_1682_);
lean_dec(v___x_1673_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1689_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v___x_1687_; 
if (v_isShared_1685_ == 0)
{
v___x_1687_ = v___x_1684_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_a_1682_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
return v___x_1687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId___boxed(lean_object* v_self_1690_, lean_object* v_options_1691_, lean_object* v_a_1692_){
_start:
{
lean_object* v_res_1693_; 
v_res_1693_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_newUniqueId(v_self_1690_, v_options_1691_);
lean_dec(v_options_1691_);
return v_res_1693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName(lean_object* v_self_1695_, lean_object* v_name_1696_){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1698_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___closed__0));
v___x_1699_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1699_, 0, v_name_1696_);
v___x_1700_ = lean_unsigned_to_nat(1u);
v___x_1701_ = lean_mk_empty_array_with_capacity(v___x_1700_);
v___x_1702_ = lean_array_push(v___x_1701_, v___x_1699_);
v___x_1703_ = l_Lasm_JS_Web_Support_args(v___x_1702_);
v___x_1704_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1695_, v___x_1698_, v___x_1703_);
if (lean_obj_tag(v___x_1704_) == 0)
{
lean_object* v_a_1705_; lean_object* v___x_1707_; uint8_t v_isShared_1708_; uint8_t v_isSharedCheck_1712_; 
v_a_1705_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1712_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1712_ == 0)
{
v___x_1707_ = v___x_1704_;
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
else
{
lean_inc(v_a_1705_);
lean_dec(v___x_1704_);
v___x_1707_ = lean_box(0);
v_isShared_1708_ = v_isSharedCheck_1712_;
goto v_resetjp_1706_;
}
v_resetjp_1706_:
{
lean_object* v___x_1710_; 
if (v_isShared_1708_ == 0)
{
v___x_1710_ = v___x_1707_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1711_; 
v_reuseFailAlloc_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1711_, 0, v_a_1705_);
v___x_1710_ = v_reuseFailAlloc_1711_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
return v___x_1710_;
}
}
}
else
{
lean_object* v_a_1713_; lean_object* v___x_1715_; uint8_t v_isShared_1716_; uint8_t v_isSharedCheck_1720_; 
v_a_1713_ = lean_ctor_get(v___x_1704_, 0);
v_isSharedCheck_1720_ = !lean_is_exclusive(v___x_1704_);
if (v_isSharedCheck_1720_ == 0)
{
v___x_1715_ = v___x_1704_;
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
else
{
lean_inc(v_a_1713_);
lean_dec(v___x_1704_);
v___x_1715_ = lean_box(0);
v_isShared_1716_ = v_isSharedCheck_1720_;
goto v_resetjp_1714_;
}
v_resetjp_1714_:
{
lean_object* v___x_1718_; 
if (v_isShared_1716_ == 0)
{
v___x_1718_ = v___x_1715_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_a_1713_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName___boxed(lean_object* v_self_1721_, lean_object* v_name_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromName(v_self_1721_, v_name_1722_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString(lean_object* v_self_1726_, lean_object* v_id_1727_){
_start:
{
lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1729_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___closed__0));
v___x_1730_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1730_, 0, v_id_1727_);
v___x_1731_ = lean_unsigned_to_nat(1u);
v___x_1732_ = lean_mk_empty_array_with_capacity(v___x_1731_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1730_);
v___x_1734_ = l_Lasm_JS_Web_Support_args(v___x_1733_);
v___x_1735_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1726_, v___x_1729_, v___x_1734_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v___x_1735_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v___x_1735_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
else
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
v_a_1744_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v___x_1735_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v___x_1735_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString___boxed(lean_object* v_self_1752_, lean_object* v_id_1753_, lean_object* v_a_1754_){
_start:
{
lean_object* v_res_1755_; 
v_res_1755_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_idFromString(v_self_1752_, v_id_1753_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(lean_object* v_x_1756_){
_start:
{
if (lean_obj_tag(v_x_1756_) == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = lean_box(0);
return v___x_1757_;
}
else
{
lean_object* v___x_1758_; 
v___x_1758_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectRoutingMode___lam__0___closed__1));
return v___x_1758_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1___boxed(lean_object* v_x_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(v_x_1759_);
lean_dec(v_x_1759_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(lean_object* v_x_1761_){
_start:
{
if (lean_obj_tag(v_x_1761_) == 0)
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_box(0);
return v___x_1762_;
}
else
{
lean_object* v_val_1763_; uint8_t v___x_1764_; 
v_val_1763_ = lean_ctor_get(v_x_1761_, 0);
v___x_1764_ = lean_unbox(v_val_1763_);
switch(v___x_1764_)
{
case 0:
{
lean_object* v___x_1765_; 
v___x_1765_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__1));
return v___x_1765_;
}
case 1:
{
lean_object* v___x_1766_; 
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__3));
return v___x_1766_;
}
case 2:
{
lean_object* v___x_1767_; 
v___x_1767_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__5));
return v___x_1767_;
}
case 3:
{
lean_object* v___x_1768_; 
v___x_1768_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__7));
return v___x_1768_;
}
case 4:
{
lean_object* v___x_1769_; 
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__9));
return v___x_1769_;
}
case 5:
{
lean_object* v___x_1770_; 
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__11));
return v___x_1770_;
}
case 6:
{
lean_object* v___x_1771_; 
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__13));
return v___x_1771_;
}
case 7:
{
lean_object* v___x_1772_; 
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__15));
return v___x_1772_;
}
case 8:
{
lean_object* v___x_1773_; 
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__17));
return v___x_1773_;
}
case 9:
{
lean_object* v___x_1774_; 
v___x_1774_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__19));
return v___x_1774_;
}
default: 
{
lean_object* v___x_1775_; 
v___x_1775_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectLocationHint___lam__0___closed__21));
return v___x_1775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0___boxed(lean_object* v_x_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(v_x_1776_);
lean_dec(v_x_1776_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(lean_object* v_x_1778_){
_start:
{
if (lean_obj_tag(v_x_1778_) == 0)
{
lean_object* v___x_1779_; 
v___x_1779_ = lean_box(0);
return v___x_1779_;
}
else
{
lean_object* v_val_1780_; lean_object* v_locationHint_1781_; lean_object* v_routingMode_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1799_; 
v_val_1780_ = lean_ctor_get(v_x_1778_, 0);
lean_inc(v_val_1780_);
lean_dec_ref_known(v_x_1778_, 1);
v_locationHint_1781_ = lean_ctor_get(v_val_1780_, 0);
v_routingMode_1782_ = lean_ctor_get(v_val_1780_, 1);
v_isSharedCheck_1799_ = !lean_is_exclusive(v_val_1780_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1784_ = v_val_1780_;
v_isShared_1785_ = v_isSharedCheck_1799_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_routingMode_1782_);
lean_inc(v_locationHint_1781_);
lean_dec(v_val_1780_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1799_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1789_; 
v___x_1786_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__0));
v___x_1787_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__0(v_locationHint_1781_);
lean_dec(v_locationHint_1781_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 1, v___x_1787_);
lean_ctor_set(v___x_1784_, 0, v___x_1786_);
v___x_1789_ = v___x_1784_;
goto v_reusejp_1788_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1786_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v___x_1787_);
v___x_1789_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1788_;
}
v_reusejp_1788_:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1790_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceGetDurableObjectOptions___lam__0___closed__1));
v___x_1791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0_spec__1(v_routingMode_1782_);
lean_dec(v_routingMode_1782_);
v___x_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = lean_unsigned_to_nat(2u);
v___x_1794_ = lean_mk_empty_array_with_capacity(v___x_1793_);
v___x_1795_ = lean_array_push(v___x_1794_, v___x_1789_);
v___x_1796_ = lean_array_push(v___x_1795_, v___x_1792_);
v___x_1797_ = l_Lasm_JS_Web_Support_fields(v___x_1796_);
lean_dec_ref(v___x_1796_);
return v___x_1797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get(lean_object* v_self_1801_, lean_object* v_id_1802_, lean_object* v_options_1803_){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v___x_1805_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_1806_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1807_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1807_, 0, v_id_1802_);
lean_ctor_set(v___x_1807_, 1, v___x_1806_);
v___x_1808_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(v_options_1803_);
v___x_1809_ = lean_unsigned_to_nat(2u);
v___x_1810_ = lean_mk_empty_array_with_capacity(v___x_1809_);
v___x_1811_ = lean_array_push(v___x_1810_, v___x_1807_);
v___x_1812_ = lean_array_push(v___x_1811_, v___x_1808_);
v___x_1813_ = l_Lasm_JS_Web_Support_args(v___x_1812_);
v___x_1814_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1801_, v___x_1805_, v___x_1813_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1822_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1822_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1822_ == 0)
{
v___x_1817_ = v___x_1814_;
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_a_1815_);
lean_dec(v___x_1814_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1822_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v___x_1820_; 
if (v_isShared_1818_ == 0)
{
v___x_1820_ = v___x_1817_;
goto v_reusejp_1819_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v_a_1815_);
v___x_1820_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1819_;
}
v_reusejp_1819_:
{
return v___x_1820_;
}
}
}
else
{
lean_object* v_a_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1830_; 
v_a_1823_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1825_ = v___x_1814_;
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_a_1823_);
lean_dec(v___x_1814_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1830_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v___x_1828_; 
if (v_isShared_1826_ == 0)
{
v___x_1828_ = v___x_1825_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1823_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___boxed(lean_object* v_self_1831_, lean_object* v_id_1832_, lean_object* v_options_1833_, lean_object* v_a_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_get(v_self_1831_, v_id_1832_, v_options_1833_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName(lean_object* v_self_1837_, lean_object* v_name_1838_, lean_object* v_options_1839_){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1841_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___closed__0));
v___x_1842_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1842_, 0, v_name_1838_);
v___x_1843_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectNamespace_get_spec__0(v_options_1839_);
v___x_1844_ = lean_unsigned_to_nat(2u);
v___x_1845_ = lean_mk_empty_array_with_capacity(v___x_1844_);
v___x_1846_ = lean_array_push(v___x_1845_, v___x_1842_);
v___x_1847_ = lean_array_push(v___x_1846_, v___x_1843_);
v___x_1848_ = l_Lasm_JS_Web_Support_args(v___x_1847_);
v___x_1849_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1837_, v___x_1841_, v___x_1848_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1849_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1849_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
else
{
lean_object* v_a_1858_; lean_object* v___x_1860_; uint8_t v_isShared_1861_; uint8_t v_isSharedCheck_1865_; 
v_a_1858_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1860_ = v___x_1849_;
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
else
{
lean_inc(v_a_1858_);
lean_dec(v___x_1849_);
v___x_1860_ = lean_box(0);
v_isShared_1861_ = v_isSharedCheck_1865_;
goto v_resetjp_1859_;
}
v_resetjp_1859_:
{
lean_object* v___x_1863_; 
if (v_isShared_1861_ == 0)
{
v___x_1863_ = v___x_1860_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v_a_1858_);
v___x_1863_ = v_reuseFailAlloc_1864_;
goto v_reusejp_1862_;
}
v_reusejp_1862_:
{
return v___x_1863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName___boxed(lean_object* v_self_1866_, lean_object* v_name_1867_, lean_object* v_options_1868_, lean_object* v_a_1869_){
_start:
{
lean_object* v_res_1870_; 
v_res_1870_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_getByName(v_self_1866_, v_name_1867_, v_options_1868_);
return v_res_1870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction(lean_object* v_self_1871_, uint8_t v_jurisdiction_1872_){
_start:
{
lean_object* v___x_1874_; lean_object* v___y_1876_; 
v___x_1874_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
switch(v_jurisdiction_1872_)
{
case 0:
{
lean_object* v___x_1898_; 
v___x_1898_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__1));
v___y_1876_ = v___x_1898_;
goto v___jp_1875_;
}
case 1:
{
lean_object* v___x_1899_; 
v___x_1899_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__3));
v___y_1876_ = v___x_1899_;
goto v___jp_1875_;
}
case 2:
{
lean_object* v___x_1900_; 
v___x_1900_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__5));
v___y_1876_ = v___x_1900_;
goto v___jp_1875_;
}
default: 
{
lean_object* v___x_1901_; 
v___x_1901_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectJurisdiction___lam__0___closed__7));
v___y_1876_ = v___x_1901_;
goto v___jp_1875_;
}
}
v___jp_1875_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1877_ = lean_unsigned_to_nat(1u);
v___x_1878_ = lean_mk_empty_array_with_capacity(v___x_1877_);
lean_inc(v___y_1876_);
v___x_1879_ = lean_array_push(v___x_1878_, v___y_1876_);
v___x_1880_ = l_Lasm_JS_Web_Support_args(v___x_1879_);
v___x_1881_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1871_, v___x_1874_, v___x_1880_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1882_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
return v___x_1887_;
}
}
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_a_1890_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1881_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1881_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
return v___x_1895_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction___boxed(lean_object* v_self_1902_, lean_object* v_jurisdiction_1903_, lean_object* v_a_1904_){
_start:
{
uint8_t v_jurisdiction_boxed_1905_; lean_object* v_res_1906_; 
v_jurisdiction_boxed_1905_ = lean_unbox(v_jurisdiction_1903_);
v_res_1906_ = l_Lasm_JS_Cloudflare_DurableObjectNamespace_jurisdiction(v_self_1902_, v_jurisdiction_boxed_1905_);
return v_res_1906_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1907_; uint64_t v___x_1908_; 
v___x_1907_ = 0;
v___x_1908_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(lean_object* v_o_1910_, lean_object* v_key_1911_){
_start:
{
lean_object* v_k_1913_; lean_object* v___x_1914_; 
v_k_1913_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1913_, 0, v_key_1911_);
v___x_1914_ = l_Lasm_JS_Wire_encodeIO(v_k_1913_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; uint32_t v___x_1916_; uint32_t v___x_1917_; uint64_t v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = 203;
v___x_1917_ = lasm_js_value_handle(v_o_1910_);
v___x_1918_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
v___x_1919_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1920_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1920_, 0, v_o_1910_);
lean_ctor_set(v___x_1920_, 1, v___x_1919_);
v___x_1921_ = lean_unsigned_to_nat(2u);
v___x_1922_ = lean_mk_empty_array_with_capacity(v___x_1921_);
lean_inc_ref(v_k_1913_);
v___x_1923_ = lean_array_push(v___x_1922_, v_k_1913_);
v___x_1924_ = lean_array_push(v___x_1923_, v___x_1920_);
v___x_1925_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1925_, 0, v___x_1924_);
v___x_1926_ = lasm_js_call(v___x_1916_, v___x_1917_, v___x_1918_, v_a_1915_, v___x_1925_);
lean_dec_ref_known(v___x_1925_, 1);
lean_dec(v_a_1915_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v___x_1926_, 1);
v___x_1928_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__1));
v___x_1929_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1913_);
v___x_1930_ = lean_string_append(v___x_1928_, v___x_1929_);
lean_dec_ref(v___x_1929_);
v___x_1931_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1930_, v_a_1927_);
lean_dec(v_a_1927_);
lean_dec_ref(v___x_1930_);
return v___x_1931_;
}
else
{
lean_object* v_a_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1939_; 
lean_dec_ref_known(v_k_1913_, 1);
v_a_1932_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1939_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1939_ == 0)
{
v___x_1934_ = v___x_1926_;
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_a_1932_);
lean_dec(v___x_1926_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1939_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1937_; 
if (v_isShared_1935_ == 0)
{
v___x_1937_ = v___x_1934_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1938_; 
v_reuseFailAlloc_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1938_, 0, v_a_1932_);
v___x_1937_ = v_reuseFailAlloc_1938_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
return v___x_1937_;
}
}
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec_ref_known(v_k_1913_, 1);
lean_dec(v_o_1910_);
v_a_1940_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1914_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1914_);
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
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___boxed(lean_object* v_o_1948_, lean_object* v_key_1949_, lean_object* v_a_1950_){
_start:
{
lean_object* v_res_1951_; 
v_res_1951_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_o_1948_, v_key_1949_);
return v_res_1951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name(lean_object* v_self_1953_){
_start:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0));
v___x_1956_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_1953_, v___x_1955_);
return v___x_1956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_name___boxed(lean_object* v_self_1957_, lean_object* v_a_1958_){
_start:
{
lean_object* v_res_1959_; 
v_res_1959_ = l_Lasm_JS_Cloudflare_DurableObjectId_name(v_self_1957_);
return v_res_1959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction(lean_object* v_self_1960_){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
v___x_1962_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespaceNewUniqueIdOptions___lam__0___closed__0));
v___x_1963_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_1960_, v___x_1962_);
return v___x_1963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction___boxed(lean_object* v_self_1964_, lean_object* v_a_1965_){
_start:
{
lean_object* v_res_1966_; 
v_res_1966_ = l_Lasm_JS_Cloudflare_DurableObjectId_jurisdiction(v_self_1964_);
return v_res_1966_;
}
}
static lean_object* _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2(void){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1970_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__1));
v___x_1971_ = l_Lasm_JS_Web_Support_args(v___x_1970_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString(lean_object* v_self_1972_){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1974_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__0));
v___x_1975_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_1976_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URL_toString_spec__0(v_self_1972_, v___x_1974_, v___x_1975_);
return v___x_1976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_toString___boxed(lean_object* v_self_1977_, lean_object* v_a_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = l_Lasm_JS_Cloudflare_DurableObjectId_toString(v_self_1977_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals(lean_object* v_self_1981_, lean_object* v_other_1982_){
_start:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v___x_1984_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_equals___closed__0));
v___x_1985_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_1986_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1986_, 0, v_other_1982_);
lean_ctor_set(v___x_1986_, 1, v___x_1985_);
v___x_1987_ = lean_unsigned_to_nat(1u);
v___x_1988_ = lean_mk_empty_array_with_capacity(v___x_1987_);
v___x_1989_ = lean_array_push(v___x_1988_, v___x_1986_);
v___x_1990_ = l_Lasm_JS_Web_Support_args(v___x_1989_);
v___x_1991_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_1981_, v___x_1984_, v___x_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectId_equals___boxed(lean_object* v_self_1992_, lean_object* v_other_1993_, lean_object* v_a_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Lasm_JS_Cloudflare_DurableObjectId_equals(v_self_1992_, v_other_1993_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id(lean_object* v_self_1997_){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1999_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0));
v___x_2000_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1997_, v___x_1999_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2008_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_2003_ = v___x_2000_;
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_2000_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2006_; 
if (v_isShared_2004_ == 0)
{
v___x_2006_ = v___x_2003_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_2001_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
else
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2016_; 
v_a_2009_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2016_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2016_ == 0)
{
v___x_2011_ = v___x_2000_;
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_2000_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2016_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2015_; 
v_reuseFailAlloc_2015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2015_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2015_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
return v___x_2014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_id___boxed(lean_object* v_self_2017_, lean_object* v_a_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_Lasm_JS_Cloudflare_DurableObjectStub_id(v_self_2017_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name(lean_object* v_self_2020_){
_start:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2022_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectId_name___closed__0));
v___x_2023_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0(v_self_2020_, v___x_2022_);
return v___x_2023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_name___boxed(lean_object* v_self_2024_, lean_object* v_a_2025_){
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l_Lasm_JS_Cloudflare_DurableObjectStub_name(v_self_2024_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0(lean_object* v_x_2027_){
_start:
{
if (lean_obj_tag(v_x_2027_) == 0)
{
lean_object* v_a_2029_; lean_object* v___x_2031_; uint8_t v_isShared_2032_; uint8_t v_isSharedCheck_2037_; 
v_a_2029_ = lean_ctor_get(v_x_2027_, 0);
v_isSharedCheck_2037_ = !lean_is_exclusive(v_x_2027_);
if (v_isSharedCheck_2037_ == 0)
{
v___x_2031_ = v_x_2027_;
v_isShared_2032_ = v_isSharedCheck_2037_;
goto v_resetjp_2030_;
}
else
{
lean_inc(v_a_2029_);
lean_dec(v_x_2027_);
v___x_2031_ = lean_box(0);
v_isShared_2032_ = v_isSharedCheck_2037_;
goto v_resetjp_2030_;
}
v_resetjp_2030_:
{
lean_object* v___x_2034_; 
if (v_isShared_2032_ == 0)
{
v___x_2034_ = v___x_2031_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v_a_2029_);
v___x_2034_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
lean_object* v___x_2035_; 
v___x_2035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2035_, 0, v___x_2034_);
return v___x_2035_;
}
}
}
else
{
lean_object* v_a_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2046_; 
v_a_2038_ = lean_ctor_get(v_x_2027_, 0);
v_isSharedCheck_2046_ = !lean_is_exclusive(v_x_2027_);
if (v_isSharedCheck_2046_ == 0)
{
v___x_2040_ = v_x_2027_;
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_a_2038_);
lean_dec(v_x_2027_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2046_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2043_; 
if (v_isShared_2041_ == 0)
{
v___x_2043_ = v___x_2040_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v_a_2038_);
v___x_2043_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
lean_object* v___x_2044_; 
v___x_2044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
return v___x_2044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0___boxed(lean_object* v_x_2047_, lean_object* v___y_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___lam__0(v_x_2047_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch(lean_object* v_self_2052_, lean_object* v_input_2053_, lean_object* v_init_2054_){
_start:
{
lean_object* v___f_2056_; lean_object* v___x_2057_; lean_object* v___y_2059_; 
v___f_2056_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__0));
v___x_2057_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___closed__1));
if (lean_obj_tag(v_input_2053_) == 1)
{
lean_object* v_value_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
v_value_2070_ = lean_ctor_get(v_input_2053_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v_input_2053_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v_input_2053_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_value_2070_);
lean_dec(v_input_2053_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
lean_ctor_set_tag(v___x_2072_, 4);
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_value_2070_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
v___y_2059_ = v___x_2075_;
goto v___jp_2058_;
}
}
}
else
{
lean_object* v_value_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; 
v_value_2078_ = lean_ctor_get(v_input_2053_, 0);
lean_inc(v_value_2078_);
lean_dec_ref(v_input_2053_);
v___x_2079_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2080_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2080_, 0, v_value_2078_);
lean_ctor_set(v___x_2080_, 1, v___x_2079_);
v___y_2059_ = v___x_2080_;
goto v___jp_2058_;
}
v___jp_2058_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; uint8_t v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2060_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Request_new_spec__0(v_init_2054_);
v___x_2061_ = lean_unsigned_to_nat(2u);
v___x_2062_ = lean_mk_empty_array_with_capacity(v___x_2061_);
v___x_2063_ = lean_array_push(v___x_2062_, v___y_2059_);
v___x_2064_ = lean_array_push(v___x_2063_, v___x_2060_);
v___x_2065_ = l_Lasm_JS_Web_Support_args(v___x_2064_);
v___x_2066_ = lean_unsigned_to_nat(0u);
v___x_2067_ = 0;
v___x_2068_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2052_, v___x_2057_, v___x_2065_);
v___x_2069_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2066_, v___x_2067_, v___x_2068_, v___f_2056_);
return v___x_2069_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_fetch___boxed(lean_object* v_self_2081_, lean_object* v_input_2082_, lean_object* v_init_2083_, lean_object* v_a_2084_){
_start:
{
lean_object* v_res_2085_; 
v_res_2085_ = l_Lasm_JS_Cloudflare_DurableObjectStub_fetch(v_self_2081_, v_input_2082_, v_init_2083_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect(lean_object* v_self_2087_, lean_object* v_address_2088_, lean_object* v_options_2089_){
_start:
{
lean_object* v___x_2091_; lean_object* v___y_2093_; 
v___x_2091_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_connect___closed__0));
if (lean_obj_tag(v_address_2088_) == 0)
{
lean_object* v_value_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2150_; 
v_value_2117_ = lean_ctor_get(v_address_2088_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v_address_2088_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2119_ = v_address_2088_;
v_isShared_2120_ = v_isSharedCheck_2150_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_value_2117_);
lean_dec(v_address_2088_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2150_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v_hostname_2121_; lean_object* v_port_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2149_; 
v_hostname_2121_ = lean_ctor_get(v_value_2117_, 0);
v_port_2122_ = lean_ctor_get(v_value_2117_, 1);
v_isSharedCheck_2149_ = !lean_is_exclusive(v_value_2117_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2124_ = v_value_2117_;
v_isShared_2125_ = v_isSharedCheck_2149_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_port_2122_);
lean_inc(v_hostname_2121_);
lean_dec(v_value_2117_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2149_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2126_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__0));
if (v_isShared_2120_ == 0)
{
lean_ctor_set_tag(v___x_2119_, 4);
lean_ctor_set(v___x_2119_, 0, v_hostname_2121_);
v___x_2128_ = v___x_2119_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_hostname_2121_);
v___x_2128_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2130_; 
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 1, v___x_2128_);
lean_ctor_set(v___x_2124_, 0, v___x_2126_);
v___x_2130_ = v___x_2124_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2126_);
lean_ctor_set(v_reuseFailAlloc_2147_, 1, v___x_2128_);
v___x_2130_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
lean_object* v___x_2131_; lean_object* v___y_2133_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; uint8_t v___x_2143_; 
v___x_2131_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSSocketAddressOrDOMString___lam__0___closed__1));
v___x_2140_ = lean_nat_to_int(v_port_2122_);
v___x_2141_ = lean_nat_abs(v___x_2140_);
v___x_2142_ = lean_cstr_to_nat("9007199254740991");
v___x_2143_ = lean_nat_dec_le(v___x_2141_, v___x_2142_);
lean_dec(v___x_2141_);
if (v___x_2143_ == 0)
{
lean_object* v___x_2144_; 
v___x_2144_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2140_);
v___y_2133_ = v___x_2144_;
goto v___jp_2132_;
}
else
{
double v___x_2145_; lean_object* v___x_2146_; 
v___x_2145_ = l_Float_ofInt(v___x_2140_);
lean_dec(v___x_2140_);
v___x_2146_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2146_, 0, v___x_2145_);
v___y_2133_ = v___x_2146_;
goto v___jp_2132_;
}
v___jp_2132_:
{
lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2131_);
lean_ctor_set(v___x_2134_, 1, v___y_2133_);
v___x_2135_ = lean_unsigned_to_nat(2u);
v___x_2136_ = lean_mk_empty_array_with_capacity(v___x_2135_);
v___x_2137_ = lean_array_push(v___x_2136_, v___x_2130_);
v___x_2138_ = lean_array_push(v___x_2137_, v___x_2134_);
v___x_2139_ = l_Lasm_JS_Web_Support_fields(v___x_2138_);
lean_dec_ref(v___x_2138_);
v___y_2093_ = v___x_2139_;
goto v___jp_2092_;
}
}
}
}
}
}
else
{
lean_object* v_value_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
v_value_2151_ = lean_ctor_get(v_address_2088_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v_address_2088_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v_address_2088_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_value_2151_);
lean_dec(v_address_2088_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
lean_ctor_set_tag(v___x_2153_, 4);
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_value_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
v___y_2093_ = v___x_2156_;
goto v___jp_2092_;
}
}
}
v___jp_2092_:
{
lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2094_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_connect_spec__0(v_options_2089_);
v___x_2095_ = lean_unsigned_to_nat(2u);
v___x_2096_ = lean_mk_empty_array_with_capacity(v___x_2095_);
v___x_2097_ = lean_array_push(v___x_2096_, v___y_2093_);
v___x_2098_ = lean_array_push(v___x_2097_, v___x_2094_);
v___x_2099_ = l_Lasm_JS_Web_Support_args(v___x_2098_);
v___x_2100_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_2087_, v___x_2091_, v___x_2099_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2108_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2103_ = v___x_2100_;
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_a_2101_);
lean_dec(v___x_2100_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2108_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
lean_object* v___x_2106_; 
if (v_isShared_2104_ == 0)
{
v___x_2106_ = v___x_2103_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_a_2101_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
v_a_2109_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2100_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2100_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
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
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStub_connect___boxed(lean_object* v_self_2159_, lean_object* v_address_2160_, lean_object* v_options_2161_, lean_object* v_a_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Lasm_JS_Cloudflare_DurableObjectStub_connect(v_self_2159_, v_address_2160_, v_options_2161_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props(lean_object* v_self_2165_){
_start:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2167_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_props___closed__0));
v___x_2168_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_CustomEvent_detail_spec__0(v_self_2165_, v___x_2167_);
return v___x_2168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_props___boxed(lean_object* v_self_2169_, lean_object* v_a_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Lasm_JS_Cloudflare_DurableObjectState_props(v_self_2169_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id(lean_object* v_self_2172_){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2174_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStub_id___closed__0));
v___x_2175_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2172_, v___x_2174_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v_a_2176_; lean_object* v___x_2178_; uint8_t v_isShared_2179_; uint8_t v_isSharedCheck_2183_; 
v_a_2176_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2183_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2183_ == 0)
{
v___x_2178_ = v___x_2175_;
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
else
{
lean_inc(v_a_2176_);
lean_dec(v___x_2175_);
v___x_2178_ = lean_box(0);
v_isShared_2179_ = v_isSharedCheck_2183_;
goto v_resetjp_2177_;
}
v_resetjp_2177_:
{
lean_object* v___x_2181_; 
if (v_isShared_2179_ == 0)
{
v___x_2181_ = v___x_2178_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_a_2176_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
v_a_2184_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2175_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2175_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_id___boxed(lean_object* v_self_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l_Lasm_JS_Cloudflare_DurableObjectState_id(v_self_2192_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage(lean_object* v_self_2196_){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_storage___closed__0));
v___x_2199_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_2196_, v___x_2198_);
if (lean_obj_tag(v___x_2199_) == 0)
{
lean_object* v_a_2200_; lean_object* v___x_2202_; uint8_t v_isShared_2203_; uint8_t v_isSharedCheck_2207_; 
v_a_2200_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2207_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2202_ = v___x_2199_;
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
else
{
lean_inc(v_a_2200_);
lean_dec(v___x_2199_);
v___x_2202_ = lean_box(0);
v_isShared_2203_ = v_isSharedCheck_2207_;
goto v_resetjp_2201_;
}
v_resetjp_2201_:
{
lean_object* v___x_2205_; 
if (v_isShared_2203_ == 0)
{
v___x_2205_ = v___x_2202_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_a_2200_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
}
else
{
lean_object* v_a_2208_; lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2215_; 
v_a_2208_ = lean_ctor_get(v___x_2199_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2199_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2210_ = v___x_2199_;
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
else
{
lean_inc(v_a_2208_);
lean_dec(v___x_2199_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2215_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v___x_2213_; 
if (v_isShared_2211_ == 0)
{
v___x_2213_ = v___x_2210_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v_a_2208_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_storage___boxed(lean_object* v_self_2216_, lean_object* v_a_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Lasm_JS_Cloudflare_DurableObjectState_storage(v_self_2216_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil(lean_object* v_self_2220_, lean_object* v_promise_2221_){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2223_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___closed__0));
v___x_2224_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2225_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2225_, 0, v_promise_2221_);
lean_ctor_set(v___x_2225_, 1, v___x_2224_);
v___x_2226_ = lean_unsigned_to_nat(1u);
v___x_2227_ = lean_mk_empty_array_with_capacity(v___x_2226_);
v___x_2228_ = lean_array_push(v___x_2227_, v___x_2225_);
v___x_2229_ = l_Lasm_JS_Web_Support_args(v___x_2228_);
v___x_2230_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2220_, v___x_2223_, v___x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil___boxed(lean_object* v_self_2231_, lean_object* v_promise_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l_Lasm_JS_Cloudflare_DurableObjectState_waitUntil(v_self_2231_, v_promise_2232_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile(lean_object* v_self_2236_, lean_object* v_callback_2237_){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2239_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___closed__0));
v___x_2240_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2241_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2241_, 0, v_callback_2237_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
v___x_2242_ = lean_unsigned_to_nat(1u);
v___x_2243_ = lean_mk_empty_array_with_capacity(v___x_2242_);
v___x_2244_ = lean_array_push(v___x_2243_, v___x_2241_);
v___x_2245_ = l_Lasm_JS_Web_Support_args(v___x_2244_);
v___x_2246_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_2236_, v___x_2239_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile___boxed(lean_object* v_self_2247_, lean_object* v_callback_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lasm_JS_Cloudflare_DurableObjectState_blockConcurrencyWhile(v_self_2247_, v_callback_2248_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(lean_object* v_x_2251_){
_start:
{
if (lean_obj_tag(v_x_2251_) == 0)
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_box(0);
return v___x_2252_;
}
else
{
lean_object* v_val_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v_val_2253_ = lean_ctor_get(v_x_2251_, 0);
v___x_2254_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectAbortOptions___lam__0___closed__0));
v___x_2255_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2253_);
v___x_2256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2254_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = lean_unsigned_to_nat(1u);
v___x_2258_ = lean_mk_empty_array_with_capacity(v___x_2257_);
v___x_2259_ = lean_array_push(v___x_2258_, v___x_2256_);
v___x_2260_ = l_Lasm_JS_Web_Support_fields(v___x_2259_);
lean_dec_ref(v___x_2259_);
return v___x_2260_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0___boxed(lean_object* v_x_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(v_x_2261_);
lean_dec(v_x_2261_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort(lean_object* v_self_2264_, lean_object* v_reason_2265_, lean_object* v_options_2266_){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2268_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectState_abort___closed__0));
v___x_2269_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_2265_);
v___x_2270_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectState_abort_spec__0(v_options_2266_);
v___x_2271_ = lean_unsigned_to_nat(2u);
v___x_2272_ = lean_mk_empty_array_with_capacity(v___x_2271_);
v___x_2273_ = lean_array_push(v___x_2272_, v___x_2269_);
v___x_2274_ = lean_array_push(v___x_2273_, v___x_2270_);
v___x_2275_ = l_Lasm_JS_Web_Support_args(v___x_2274_);
v___x_2276_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2264_, v___x_2268_, v___x_2275_);
return v___x_2276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectState_abort___boxed(lean_object* v_self_2277_, lean_object* v_reason_2278_, lean_object* v_options_2279_, lean_object* v_a_2280_){
_start:
{
lean_object* v_res_2281_; 
v_res_2281_ = l_Lasm_JS_Cloudflare_DurableObjectState_abort(v_self_2277_, v_reason_2278_, v_options_2279_);
lean_dec(v_options_2279_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(lean_object* v_x_2282_){
_start:
{
if (lean_obj_tag(v_x_2282_) == 0)
{
lean_object* v___x_2283_; 
v___x_2283_ = lean_box(0);
return v___x_2283_;
}
else
{
lean_object* v_val_2284_; lean_object* v_allowConcurrency_2285_; lean_object* v_noCache_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2303_; 
v_val_2284_ = lean_ctor_get(v_x_2282_, 0);
lean_inc(v_val_2284_);
lean_dec_ref_known(v_x_2282_, 1);
v_allowConcurrency_2285_ = lean_ctor_get(v_val_2284_, 0);
v_noCache_2286_ = lean_ctor_get(v_val_2284_, 1);
v_isSharedCheck_2303_ = !lean_is_exclusive(v_val_2284_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2288_ = v_val_2284_;
v_isShared_2289_ = v_isSharedCheck_2303_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_noCache_2286_);
lean_inc(v_allowConcurrency_2285_);
lean_dec(v_val_2284_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2303_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2293_; 
v___x_2290_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2291_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2285_);
lean_dec(v_allowConcurrency_2285_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 1, v___x_2291_);
lean_ctor_set(v___x_2288_, 0, v___x_2290_);
v___x_2293_ = v___x_2288_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v___x_2290_);
lean_ctor_set(v_reuseFailAlloc_2302_, 1, v___x_2291_);
v___x_2293_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2294_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2295_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2286_);
lean_dec(v_noCache_2286_);
v___x_2296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2296_, 0, v___x_2294_);
lean_ctor_set(v___x_2296_, 1, v___x_2295_);
v___x_2297_ = lean_unsigned_to_nat(2u);
v___x_2298_ = lean_mk_empty_array_with_capacity(v___x_2297_);
v___x_2299_ = lean_array_push(v___x_2298_, v___x_2293_);
v___x_2300_ = lean_array_push(v___x_2299_, v___x_2296_);
v___x_2301_ = l_Lasm_JS_Web_Support_fields(v___x_2300_);
lean_dec_ref(v___x_2300_);
return v___x_2301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get(lean_object* v_self_2304_, lean_object* v_key_2305_, lean_object* v_options_2306_){
_start:
{
lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2308_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_2309_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2309_, 0, v_key_2305_);
v___x_2310_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_2306_);
v___x_2311_ = lean_unsigned_to_nat(2u);
v___x_2312_ = lean_mk_empty_array_with_capacity(v___x_2311_);
v___x_2313_ = lean_array_push(v___x_2312_, v___x_2309_);
v___x_2314_ = lean_array_push(v___x_2313_, v___x_2310_);
v___x_2315_ = l_Lasm_JS_Web_Support_args(v___x_2314_);
v___x_2316_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_2304_, v___x_2308_, v___x_2315_);
return v___x_2316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_get___boxed(lean_object* v_self_2317_, lean_object* v_key_2318_, lean_object* v_options_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_get(v_self_2317_, v_key_2318_, v_options_2319_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(size_t v_sz_2327_, size_t v_i_2328_, lean_object* v_bs_2329_){
_start:
{
uint8_t v___x_2332_; 
v___x_2332_ = lean_usize_dec_lt(v_i_2328_, v_sz_2327_);
if (v___x_2332_ == 0)
{
lean_object* v___x_2333_; 
v___x_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2333_, 0, v_bs_2329_);
return v___x_2333_;
}
else
{
lean_object* v_v_2334_; 
v_v_2334_ = lean_array_uget_borrowed(v_bs_2329_, v_i_2328_);
if (lean_obj_tag(v_v_2334_) == 7)
{
lean_object* v_items_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; uint8_t v___x_2338_; 
v_items_2335_ = lean_ctor_get(v_v_2334_, 0);
lean_inc_ref(v_items_2335_);
v___x_2336_ = lean_array_get_size(v_items_2335_);
v___x_2337_ = lean_unsigned_to_nat(2u);
v___x_2338_ = lean_nat_dec_eq(v___x_2336_, v___x_2337_);
if (v___x_2338_ == 0)
{
lean_dec_ref(v_items_2335_);
lean_dec_ref(v_bs_2329_);
goto v___jp_2330_;
}
else
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = lean_unsigned_to_nat(0u);
v___x_2340_ = lean_array_fget_borrowed(v_items_2335_, v___x_2339_);
if (lean_obj_tag(v___x_2340_) == 4)
{
lean_object* v_s_2341_; lean_object* v_bs_x27_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; size_t v___x_2346_; size_t v___x_2347_; lean_object* v___x_2348_; 
v_s_2341_ = lean_ctor_get(v___x_2340_, 0);
lean_inc_ref(v_s_2341_);
v_bs_x27_2342_ = lean_array_uset(v_bs_2329_, v_i_2328_, v___x_2339_);
v___x_2343_ = lean_unsigned_to_nat(1u);
v___x_2344_ = lean_array_fget(v_items_2335_, v___x_2343_);
lean_dec_ref(v_items_2335_);
v___x_2345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2345_, 0, v_s_2341_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = ((size_t)1ULL);
v___x_2347_ = lean_usize_add(v_i_2328_, v___x_2346_);
v___x_2348_ = lean_array_uset(v_bs_x27_2342_, v_i_2328_, v___x_2345_);
v_i_2328_ = v___x_2347_;
v_bs_2329_ = v___x_2348_;
goto _start;
}
else
{
lean_object* v___x_2350_; 
lean_dec_ref(v_items_2335_);
lean_dec_ref(v_bs_2329_);
v___x_2350_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__2));
return v___x_2350_;
}
}
}
else
{
lean_dec_ref(v_bs_2329_);
goto v___jp_2330_;
}
}
v___jp_2330_:
{
lean_object* v___x_2331_; 
v___x_2331_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___closed__1));
return v___x_2331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_sz_2351_, lean_object* v_i_2352_, lean_object* v_bs_2353_){
_start:
{
size_t v_sz_boxed_2354_; size_t v_i_boxed_2355_; lean_object* v_res_2356_; 
v_sz_boxed_2354_ = lean_unbox_usize(v_sz_2351_);
lean_dec(v_sz_2351_);
v_i_boxed_2355_ = lean_unbox_usize(v_i_2352_);
lean_dec(v_i_2352_);
v_res_2356_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(v_sz_boxed_2354_, v_i_boxed_2355_, v_bs_2353_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(lean_object* v_context_2362_, lean_object* v_d_2363_){
_start:
{
lean_object* v___y_2366_; lean_object* v___y_2367_; lean_object* v___y_2372_; lean_object* v_received_2373_; lean_object* v___y_2392_; lean_object* v_a_2395_; 
if (lean_obj_tag(v_d_2363_) == 7)
{
lean_object* v_items_2419_; size_t v_sz_2420_; size_t v___x_2421_; lean_object* v___x_2422_; 
v_items_2419_ = lean_ctor_get(v_d_2363_, 0);
v_sz_2420_ = lean_array_size(v_items_2419_);
v___x_2421_ = ((size_t)0ULL);
lean_inc_ref(v_items_2419_);
v___x_2422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1_spec__2(v_sz_2420_, v___x_2421_, v_items_2419_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; uint8_t v___x_2427_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2422_, 1);
v___x_2424_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__3));
v___x_2425_ = lean_string_utf8_byte_size(v_a_2423_);
v___x_2426_ = lean_unsigned_to_nat(0u);
v___x_2427_ = lean_nat_dec_eq(v___x_2425_, v___x_2426_);
if (v___x_2427_ == 0)
{
lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2428_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4));
v___x_2429_ = lean_string_append(v___x_2428_, v_a_2423_);
lean_dec(v_a_2423_);
v___x_2430_ = lean_string_append(v___x_2424_, v___x_2429_);
lean_dec_ref(v___x_2429_);
v_a_2395_ = v___x_2430_;
goto v___jp_2394_;
}
else
{
lean_dec(v_a_2423_);
v_a_2395_ = v___x_2424_;
goto v___jp_2394_;
}
}
else
{
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2431_; 
v_a_2431_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2422_, 1);
v_a_2395_ = v_a_2431_;
goto v___jp_2394_;
}
else
{
lean_object* v_a_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2439_; 
lean_dec_ref_known(v_d_2363_, 1);
v_a_2432_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2434_ = v___x_2422_;
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
else
{
lean_inc(v_a_2432_);
lean_dec(v___x_2422_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2439_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
lean_object* v___x_2437_; 
if (v_isShared_2435_ == 0)
{
lean_ctor_set_tag(v___x_2434_, 0);
v___x_2437_ = v___x_2434_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_a_2432_);
v___x_2437_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
return v___x_2437_;
}
}
}
}
}
else
{
lean_object* v___x_2440_; 
v___x_2440_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v_a_2395_ = v___x_2440_;
goto v___jp_2394_;
}
v___jp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; 
v___x_2368_ = lean_string_append(v___y_2366_, v___y_2367_);
lean_dec_ref(v___y_2367_);
v___x_2369_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2369_, 0, v___x_2368_);
v___x_2370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2370_, 0, v___x_2369_);
return v___x_2370_;
}
v___jp_2371_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; uint8_t v___x_2385_; 
v___x_2374_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_2375_ = lean_string_append(v___x_2374_, v_context_2362_);
v___x_2376_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__1));
v___x_2377_ = lean_string_append(v___x_2375_, v___x_2376_);
v___x_2378_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__0));
v___x_2379_ = lean_string_append(v___x_2377_, v___x_2378_);
v___x_2380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__2));
v___x_2381_ = lean_string_append(v___x_2379_, v___x_2380_);
v___x_2382_ = lean_string_append(v___x_2381_, v_received_2373_);
lean_dec_ref(v_received_2373_);
v___x_2383_ = lean_string_utf8_byte_size(v___y_2372_);
v___x_2384_ = lean_unsigned_to_nat(0u);
v___x_2385_ = lean_nat_dec_eq(v___x_2383_, v___x_2384_);
if (v___x_2385_ == 0)
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2386_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__1));
v___x_2387_ = lean_string_append(v___x_2386_, v___y_2372_);
lean_dec_ref(v___y_2372_);
v___x_2388_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__2));
v___x_2389_ = lean_string_append(v___x_2387_, v___x_2388_);
v___y_2366_ = v___x_2382_;
v___y_2367_ = v___x_2389_;
goto v___jp_2365_;
}
else
{
lean_object* v___x_2390_; 
lean_dec_ref(v___y_2372_);
v___x_2390_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___y_2366_ = v___x_2382_;
v___y_2367_ = v___x_2390_;
goto v___jp_2365_;
}
}
v___jp_2391_:
{
lean_object* v___x_2393_; 
v___x_2393_ = l_Lasm_JS_Data_describe(v_d_2363_);
v___y_2372_ = v___y_2392_;
v_received_2373_ = v___x_2393_;
goto v___jp_2371_;
}
v___jp_2394_:
{
if (lean_obj_tag(v_d_2363_) == 9)
{
lean_object* v_value_2396_; lean_object* v_description_2397_; lean_object* v___x_2398_; uint8_t v___x_2399_; 
v_value_2396_ = lean_ctor_get(v_d_2363_, 0);
v_description_2397_ = lean_ctor_get(v_d_2363_, 1);
v___x_2398_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2399_ = lean_string_dec_eq(v_description_2397_, v___x_2398_);
if (v___x_2399_ == 0)
{
v___y_2392_ = v_a_2395_;
goto v___jp_2391_;
}
else
{
lean_object* v___x_2401_; uint8_t v_isShared_2402_; uint8_t v_isSharedCheck_2416_; 
lean_inc(v_value_2396_);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_d_2363_);
if (v_isSharedCheck_2416_ == 0)
{
lean_object* v_unused_2417_; lean_object* v_unused_2418_; 
v_unused_2417_ = lean_ctor_get(v_d_2363_, 1);
lean_dec(v_unused_2417_);
v_unused_2418_ = lean_ctor_get(v_d_2363_, 0);
lean_dec(v_unused_2418_);
v___x_2401_ = v_d_2363_;
v_isShared_2402_ = v_isSharedCheck_2416_;
goto v_resetjp_2400_;
}
else
{
lean_dec(v_d_2363_);
v___x_2401_ = lean_box(0);
v_isShared_2402_ = v_isSharedCheck_2416_;
goto v_resetjp_2400_;
}
v_resetjp_2400_:
{
uint32_t v___x_2403_; uint64_t v___x_2404_; lean_object* v___x_2406_; 
v___x_2403_ = 206;
v___x_2404_ = 0ULL;
lean_inc(v_value_2396_);
if (v_isShared_2402_ == 0)
{
lean_ctor_set(v___x_2401_, 1, v___x_2398_);
v___x_2406_ = v___x_2401_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_value_2396_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v___x_2398_);
v___x_2406_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
uint32_t v___x_2407_; lean_object* v___x_2408_; 
v___x_2407_ = lasm_js_value_handle(v_value_2396_);
lean_dec(v_value_2396_);
v___x_2408_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2403_, v___x_2404_, v___x_2406_, v___x_2407_);
lean_dec_ref(v___x_2406_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v_a_2409_; uint8_t v___x_2410_; 
v_a_2409_ = lean_ctor_get(v___x_2408_, 0);
lean_inc(v_a_2409_);
lean_dec_ref_known(v___x_2408_, 1);
v___x_2410_ = lean_string_validate_utf8(v_a_2409_);
if (v___x_2410_ == 0)
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
lean_dec(v_a_2409_);
v___x_2411_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__9);
v___x_2412_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2411_);
v___y_2372_ = v_a_2395_;
v_received_2373_ = v___x_2412_;
goto v___jp_2371_;
}
else
{
lean_object* v___x_2413_; 
v___x_2413_ = lean_string_from_utf8_unchecked(v_a_2409_);
v___y_2372_ = v_a_2395_;
v_received_2373_ = v___x_2413_;
goto v___jp_2371_;
}
}
else
{
lean_object* v___x_2414_; 
lean_dec_ref_known(v___x_2408_, 1);
v___x_2414_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__10));
v___y_2372_ = v_a_2395_;
v_received_2373_ = v___x_2414_;
goto v___jp_2371_;
}
}
}
}
}
else
{
v___y_2392_ = v_a_2395_;
goto v___jp_2391_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2441_, lean_object* v_d_2442_, lean_object* v_a_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(v_context_2441_, v_d_2442_);
lean_dec_ref(v_context_2441_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(lean_object* v_b_2445_, lean_object* v_args_2446_, uint8_t v_await_2447_){
_start:
{
uint64_t v___y_2450_; uint64_t v___y_2451_; uint64_t v___x_2494_; uint64_t v___y_2496_; 
v___x_2494_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_2447_ == 0)
{
uint64_t v___x_2501_; 
v___x_2501_ = 0ULL;
v___y_2496_ = v___x_2501_;
goto v___jp_2495_;
}
else
{
uint64_t v___x_2502_; 
v___x_2502_ = 2ULL;
v___y_2496_ = v___x_2502_;
goto v___jp_2495_;
}
v___jp_2449_:
{
uint64_t v_flags_2452_; uint32_t v___x_2453_; lean_object* v___x_2454_; uint32_t v___x_2455_; lean_object* v___x_2456_; 
v_flags_2452_ = lean_uint64_lor(v___y_2450_, v___y_2451_);
v___x_2453_ = 214;
v___x_2454_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2445_, v_args_2446_);
v___x_2455_ = 0;
v___x_2456_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2453_, v_flags_2452_, v___x_2454_, v___x_2455_);
lean_dec(v___x_2454_);
if (lean_obj_tag(v___x_2456_) == 0)
{
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; lean_object* v___x_2458_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2456_, 1);
v___x_2458_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2457_);
lean_dec(v_a_2457_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2458_, 1);
v___x_2460_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2445_);
v___x_2461_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1(v___x_2460_, v_a_2459_);
lean_dec_ref(v___x_2460_);
return v___x_2461_;
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
v_a_2462_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___x_2458_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2458_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
v_a_2470_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2456_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2456_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
lean_ctor_set_tag(v___x_2472_, 1);
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
else
{
lean_object* v_a_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2493_; 
v_a_2478_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2493_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2480_ = v___x_2456_;
v_isShared_2481_ = v_isSharedCheck_2493_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_a_2478_);
lean_dec(v___x_2456_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2493_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2491_; 
v___x_2482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Cloudflare_DurableObjectStorageTransactionClosure_ofFn_spec__0_spec__0___closed__0));
v___x_2483_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2445_);
v___x_2484_ = lean_string_append(v___x_2482_, v___x_2483_);
lean_dec_ref(v___x_2483_);
v___x_2485_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0_spec__1___closed__4));
v___x_2486_ = lean_string_append(v___x_2484_, v___x_2485_);
v___x_2487_ = lean_io_error_to_string(v_a_2478_);
v___x_2488_ = lean_string_append(v___x_2486_, v___x_2487_);
lean_dec_ref(v___x_2487_);
v___x_2489_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2489_, 0, v___x_2488_);
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 0, v___x_2489_);
v___x_2491_ = v___x_2480_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v___x_2489_);
v___x_2491_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
return v___x_2491_;
}
}
}
}
v___jp_2495_:
{
uint8_t v_construct_2497_; uint64_t v___x_2498_; 
v_construct_2497_ = lean_ctor_get_uint8(v_b_2445_, sizeof(void*)*4);
v___x_2498_ = lean_uint64_lor(v___x_2494_, v___y_2496_);
if (v_construct_2497_ == 0)
{
uint64_t v___x_2499_; 
v___x_2499_ = 0ULL;
v___y_2450_ = v___x_2498_;
v___y_2451_ = v___x_2499_;
goto v___jp_2449_;
}
else
{
uint64_t v___x_2500_; 
v___x_2500_ = 4ULL;
v___y_2450_ = v___x_2498_;
v___y_2451_ = v___x_2500_;
goto v___jp_2449_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0___boxed(lean_object* v_b_2503_, lean_object* v_args_2504_, lean_object* v_await_2505_, lean_object* v_a_2506_){
_start:
{
uint8_t v_await_boxed_2507_; lean_object* v_res_2508_; 
v_await_boxed_2507_ = lean_unbox(v_await_2505_);
v_res_2508_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(v_b_2503_, v_args_2504_, v_await_boxed_2507_);
lean_dec_ref(v_b_2503_);
return v_res_2508_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(lean_object* v_v_2518_){
_start:
{
uint8_t v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2520_ = 0;
v___x_2521_ = lean_unsigned_to_nat(1u);
v___x_2522_ = ((lean_object*)(l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___closed__3));
v___x_2523_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_2524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_v_2518_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = lean_mk_empty_array_with_capacity(v___x_2521_);
v___x_2526_ = lean_array_push(v___x_2525_, v___x_2524_);
v___x_2527_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0_spec__0(v___x_2522_, v___x_2526_, v___x_2520_);
if (lean_obj_tag(v___x_2527_) == 0)
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
v_a_2528_ = lean_ctor_get(v___x_2527_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2527_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2527_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
else
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2543_; 
v_a_2536_ = lean_ctor_get(v___x_2527_, 0);
v_isSharedCheck_2543_ = !lean_is_exclusive(v___x_2527_);
if (v_isSharedCheck_2543_ == 0)
{
v___x_2538_ = v___x_2527_;
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2527_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2543_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2541_; 
if (v_isShared_2539_ == 0)
{
v___x_2541_ = v___x_2538_;
goto v_reusejp_2540_;
}
else
{
lean_object* v_reuseFailAlloc_2542_; 
v_reuseFailAlloc_2542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2542_, 0, v_a_2536_);
v___x_2541_ = v_reuseFailAlloc_2542_;
goto v_reusejp_2540_;
}
v_reusejp_2540_:
{
return v___x_2541_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0___boxed(lean_object* v_v_2544_, lean_object* v_a_2545_){
_start:
{
lean_object* v_res_2546_; 
v_res_2546_ = l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(v_v_2544_);
return v_res_2546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0(lean_object* v_x_2547_){
_start:
{
lean_object* v_val_2550_; 
if (lean_obj_tag(v_x_2547_) == 0)
{
lean_object* v_a_2552_; lean_object* v___x_2554_; uint8_t v_isShared_2555_; uint8_t v_isSharedCheck_2560_; 
v_a_2552_ = lean_ctor_get(v_x_2547_, 0);
v_isSharedCheck_2560_ = !lean_is_exclusive(v_x_2547_);
if (v_isSharedCheck_2560_ == 0)
{
v___x_2554_ = v_x_2547_;
v_isShared_2555_ = v_isSharedCheck_2560_;
goto v_resetjp_2553_;
}
else
{
lean_inc(v_a_2552_);
lean_dec(v_x_2547_);
v___x_2554_ = lean_box(0);
v_isShared_2555_ = v_isSharedCheck_2560_;
goto v_resetjp_2553_;
}
v_resetjp_2553_:
{
lean_object* v___x_2557_; 
if (v_isShared_2555_ == 0)
{
v___x_2557_ = v___x_2554_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_a_2552_);
v___x_2557_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
return v___x_2558_;
}
}
}
else
{
lean_object* v_a_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2574_; 
v_a_2561_ = lean_ctor_get(v_x_2547_, 0);
v_isSharedCheck_2574_ = !lean_is_exclusive(v_x_2547_);
if (v_isSharedCheck_2574_ == 0)
{
v___x_2563_ = v_x_2547_;
v_isShared_2564_ = v_isSharedCheck_2574_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_a_2561_);
lean_dec(v_x_2547_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2574_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v___x_2565_; 
v___x_2565_ = l_Lasm_JS_Cloudflare_Support_mapOf___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys_spec__0(v_a_2561_);
if (lean_obj_tag(v___x_2565_) == 0)
{
lean_object* v_a_2566_; lean_object* v___x_2568_; 
v_a_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2566_);
lean_dec_ref_known(v___x_2565_, 1);
if (v_isShared_2564_ == 0)
{
lean_ctor_set(v___x_2563_, 0, v_a_2566_);
v___x_2568_ = v___x_2563_;
goto v_reusejp_2567_;
}
else
{
lean_object* v_reuseFailAlloc_2569_; 
v_reuseFailAlloc_2569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2569_, 0, v_a_2566_);
v___x_2568_ = v_reuseFailAlloc_2569_;
goto v_reusejp_2567_;
}
v_reusejp_2567_:
{
v_val_2550_ = v___x_2568_;
goto v___jp_2549_;
}
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; 
v_a_2570_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_a_2570_);
lean_dec_ref_known(v___x_2565_, 1);
if (v_isShared_2564_ == 0)
{
lean_ctor_set_tag(v___x_2563_, 0);
lean_ctor_set(v___x_2563_, 0, v_a_2570_);
v___x_2572_ = v___x_2563_;
goto v_reusejp_2571_;
}
else
{
lean_object* v_reuseFailAlloc_2573_; 
v_reuseFailAlloc_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2573_, 0, v_a_2570_);
v___x_2572_ = v_reuseFailAlloc_2573_;
goto v_reusejp_2571_;
}
v_reusejp_2571_:
{
v_val_2550_ = v___x_2572_;
goto v___jp_2549_;
}
}
}
}
v___jp_2549_:
{
lean_object* v___x_2551_; 
v___x_2551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2551_, 0, v_val_2550_);
return v___x_2551_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0___boxed(lean_object* v_x_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___lam__0(v_x_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys(lean_object* v_self_2579_, lean_object* v_keys_2580_, lean_object* v_options_2581_){
_start:
{
lean_object* v___f_2583_; lean_object* v___x_2584_; size_t v_sz_2585_; size_t v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; uint8_t v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___f_2583_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_2584_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v_sz_2585_ = lean_array_size(v_keys_2580_);
v___x_2586_ = ((size_t)0ULL);
v___x_2587_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_2585_, v___x_2586_, v_keys_2580_);
v___x_2588_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2587_);
v___x_2589_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_2581_);
v___x_2590_ = lean_unsigned_to_nat(2u);
v___x_2591_ = lean_mk_empty_array_with_capacity(v___x_2590_);
v___x_2592_ = lean_array_push(v___x_2591_, v___x_2588_);
v___x_2593_ = lean_array_push(v___x_2592_, v___x_2589_);
v___x_2594_ = l_Lasm_JS_Web_Support_args(v___x_2593_);
v___x_2595_ = lean_unsigned_to_nat(0u);
v___x_2596_ = 0;
v___x_2597_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2579_, v___x_2584_, v___x_2594_);
v___x_2598_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2595_, v___x_2596_, v___x_2597_, v___f_2583_);
return v___x_2598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___boxed(lean_object* v_self_2599_, lean_object* v_keys_2600_, lean_object* v_options_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys(v_self_2599_, v_keys_2600_, v_options_2601_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(lean_object* v_x_2604_){
_start:
{
if (lean_obj_tag(v_x_2604_) == 0)
{
lean_object* v___x_2605_; 
v___x_2605_ = lean_box(0);
return v___x_2605_;
}
else
{
lean_object* v_val_2606_; lean_object* v_start_2607_; lean_object* v_startAfter_2608_; lean_object* v_end_2609_; lean_object* v_prefix_2610_; lean_object* v_reverse_2611_; lean_object* v_limit_2612_; lean_object* v_allowConcurrency_2613_; lean_object* v_noCache_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v_val_2606_ = lean_ctor_get(v_x_2604_, 0);
lean_inc(v_val_2606_);
lean_dec_ref_known(v_x_2604_, 1);
v_start_2607_ = lean_ctor_get(v_val_2606_, 0);
lean_inc(v_start_2607_);
v_startAfter_2608_ = lean_ctor_get(v_val_2606_, 1);
lean_inc(v_startAfter_2608_);
v_end_2609_ = lean_ctor_get(v_val_2606_, 2);
lean_inc(v_end_2609_);
v_prefix_2610_ = lean_ctor_get(v_val_2606_, 3);
lean_inc(v_prefix_2610_);
v_reverse_2611_ = lean_ctor_get(v_val_2606_, 4);
lean_inc(v_reverse_2611_);
v_limit_2612_ = lean_ctor_get(v_val_2606_, 5);
lean_inc(v_limit_2612_);
v_allowConcurrency_2613_ = lean_ctor_get(v_val_2606_, 6);
lean_inc(v_allowConcurrency_2613_);
v_noCache_2614_ = lean_ctor_get(v_val_2606_, 7);
lean_inc(v_noCache_2614_);
lean_dec(v_val_2606_);
v___x_2615_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__0));
v___x_2616_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_start_2607_);
v___x_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2615_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
v___x_2618_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__1));
v___x_2619_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_startAfter_2608_);
v___x_2620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2618_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
v___x_2621_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__2));
v___x_2622_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_end_2609_);
v___x_2623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2623_, 0, v___x_2621_);
lean_ctor_set(v___x_2623_, 1, v___x_2622_);
v___x_2624_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__3));
v___x_2625_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_prefix_2610_);
v___x_2626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2624_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__4));
v___x_2628_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reverse_2611_);
lean_dec(v_reverse_2611_);
v___x_2629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
v___x_2630_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectListOptions___lam__0___closed__5));
v___x_2631_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_limit_2612_);
v___x_2632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2630_);
lean_ctor_set(v___x_2632_, 1, v___x_2631_);
v___x_2633_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2634_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2613_);
lean_dec(v_allowConcurrency_2613_);
v___x_2635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2633_);
lean_ctor_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2637_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2614_);
lean_dec(v_noCache_2614_);
v___x_2638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2636_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
v___x_2639_ = lean_unsigned_to_nat(8u);
v___x_2640_ = lean_mk_empty_array_with_capacity(v___x_2639_);
v___x_2641_ = lean_array_push(v___x_2640_, v___x_2617_);
v___x_2642_ = lean_array_push(v___x_2641_, v___x_2620_);
v___x_2643_ = lean_array_push(v___x_2642_, v___x_2623_);
v___x_2644_ = lean_array_push(v___x_2643_, v___x_2626_);
v___x_2645_ = lean_array_push(v___x_2644_, v___x_2629_);
v___x_2646_ = lean_array_push(v___x_2645_, v___x_2632_);
v___x_2647_ = lean_array_push(v___x_2646_, v___x_2635_);
v___x_2648_ = lean_array_push(v___x_2647_, v___x_2638_);
v___x_2649_ = l_Lasm_JS_Web_Support_fields(v___x_2648_);
lean_dec_ref(v___x_2648_);
return v___x_2649_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list(lean_object* v_self_2651_, lean_object* v_options_2652_){
_start:
{
lean_object* v___f_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; uint8_t v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___f_2654_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_2655_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0));
v___x_2656_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(v_options_2652_);
v___x_2657_ = lean_unsigned_to_nat(1u);
v___x_2658_ = lean_mk_empty_array_with_capacity(v___x_2657_);
v___x_2659_ = lean_array_push(v___x_2658_, v___x_2656_);
v___x_2660_ = l_Lasm_JS_Web_Support_args(v___x_2659_);
v___x_2661_ = lean_unsigned_to_nat(0u);
v___x_2662_ = 0;
v___x_2663_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_2651_, v___x_2655_, v___x_2660_);
v___x_2664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2661_, v___x_2662_, v___x_2663_, v___f_2654_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_list___boxed(lean_object* v_self_2665_, lean_object* v_options_2666_, lean_object* v_a_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_list(v_self_2665_, v_options_2666_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(lean_object* v_x_2669_){
_start:
{
if (lean_obj_tag(v_x_2669_) == 0)
{
lean_object* v___x_2670_; 
v___x_2670_ = lean_box(0);
return v___x_2670_;
}
else
{
lean_object* v_val_2671_; lean_object* v_allowConcurrency_2672_; lean_object* v_allowUnconfirmed_2673_; lean_object* v_noCache_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v_val_2671_ = lean_ctor_get(v_x_2669_, 0);
v_allowConcurrency_2672_ = lean_ctor_get(v_val_2671_, 0);
v_allowUnconfirmed_2673_ = lean_ctor_get(v_val_2671_, 1);
v_noCache_2674_ = lean_ctor_get(v_val_2671_, 2);
v___x_2675_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_2676_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_2672_);
v___x_2677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2677_, 0, v___x_2675_);
lean_ctor_set(v___x_2677_, 1, v___x_2676_);
v___x_2678_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_2679_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowUnconfirmed_2673_);
v___x_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2678_);
lean_ctor_set(v___x_2680_, 1, v___x_2679_);
v___x_2681_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__1));
v___x_2682_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_noCache_2674_);
v___x_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2681_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = lean_unsigned_to_nat(3u);
v___x_2685_ = lean_mk_empty_array_with_capacity(v___x_2684_);
v___x_2686_ = lean_array_push(v___x_2685_, v___x_2677_);
v___x_2687_ = lean_array_push(v___x_2686_, v___x_2680_);
v___x_2688_ = lean_array_push(v___x_2687_, v___x_2683_);
v___x_2689_ = l_Lasm_JS_Web_Support_fields(v___x_2688_);
lean_dec_ref(v___x_2688_);
return v___x_2689_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0___boxed(lean_object* v_x_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_x_2690_);
lean_dec(v_x_2690_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put(lean_object* v_self_2693_, lean_object* v_key_2694_, lean_object* v_value_2695_, lean_object* v_options_2696_){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2698_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v___x_2699_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2699_, 0, v_key_2694_);
v___x_2700_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2696_);
v___x_2701_ = lean_unsigned_to_nat(3u);
v___x_2702_ = lean_mk_empty_array_with_capacity(v___x_2701_);
v___x_2703_ = lean_array_push(v___x_2702_, v___x_2699_);
v___x_2704_ = lean_array_push(v___x_2703_, v_value_2695_);
v___x_2705_ = lean_array_push(v___x_2704_, v___x_2700_);
v___x_2706_ = l_Lasm_JS_Web_Support_args(v___x_2705_);
v___x_2707_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2693_, v___x_2698_, v___x_2706_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_put___boxed(lean_object* v_self_2708_, lean_object* v_key_2709_, lean_object* v_value_2710_, lean_object* v_options_2711_, lean_object* v_a_2712_){
_start:
{
lean_object* v_res_2713_; 
v_res_2713_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_put(v_self_2708_, v_key_2709_, v_value_2710_, v_options_2711_);
lean_dec(v_options_2711_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(size_t v_sz_2714_, size_t v_i_2715_, lean_object* v_bs_2716_){
_start:
{
uint8_t v___x_2717_; 
v___x_2717_ = lean_usize_dec_lt(v_i_2715_, v_sz_2714_);
if (v___x_2717_ == 0)
{
return v_bs_2716_;
}
else
{
lean_object* v_v_2718_; lean_object* v___x_2719_; lean_object* v_bs_x27_2720_; size_t v___x_2721_; size_t v___x_2722_; lean_object* v___x_2723_; 
v_v_2718_ = lean_array_uget(v_bs_2716_, v_i_2715_);
v___x_2719_ = lean_unsigned_to_nat(0u);
v_bs_x27_2720_ = lean_array_uset(v_bs_2716_, v_i_2715_, v___x_2719_);
v___x_2721_ = ((size_t)1ULL);
v___x_2722_ = lean_usize_add(v_i_2715_, v___x_2721_);
v___x_2723_ = lean_array_uset(v_bs_x27_2720_, v_i_2715_, v_v_2718_);
v_i_2715_ = v___x_2722_;
v_bs_2716_ = v___x_2723_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0___boxed(lean_object* v_sz_2725_, lean_object* v_i_2726_, lean_object* v_bs_2727_){
_start:
{
size_t v_sz_boxed_2728_; size_t v_i_boxed_2729_; lean_object* v_res_2730_; 
v_sz_boxed_2728_ = lean_unbox_usize(v_sz_2725_);
lean_dec(v_sz_2725_);
v_i_boxed_2729_ = lean_unbox_usize(v_i_2726_);
lean_dec(v_i_2726_);
v_res_2730_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_boxed_2728_, v_i_boxed_2729_, v_bs_2727_);
return v_res_2730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries(lean_object* v_self_2731_, lean_object* v_entries_2732_, lean_object* v_options_2733_){
_start:
{
lean_object* v___x_2735_; size_t v_sz_2736_; size_t v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2735_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v_sz_2736_ = lean_array_size(v_entries_2732_);
v___x_2737_ = ((size_t)0ULL);
v___x_2738_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_2736_, v___x_2737_, v_entries_2732_);
v___x_2739_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_2739_, 0, v___x_2738_);
v___x_2740_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2733_);
v___x_2741_ = lean_unsigned_to_nat(2u);
v___x_2742_ = lean_mk_empty_array_with_capacity(v___x_2741_);
v___x_2743_ = lean_array_push(v___x_2742_, v___x_2739_);
v___x_2744_ = lean_array_push(v___x_2743_, v___x_2740_);
v___x_2745_ = l_Lasm_JS_Web_Support_args(v___x_2744_);
v___x_2746_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_2731_, v___x_2735_, v___x_2745_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries___boxed(lean_object* v_self_2747_, lean_object* v_entries_2748_, lean_object* v_options_2749_, lean_object* v_a_2750_){
_start:
{
lean_object* v_res_2751_; 
v_res_2751_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries(v_self_2747_, v_entries_2748_, v_options_2749_);
lean_dec(v_options_2749_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete(lean_object* v_self_2753_, lean_object* v_key_2754_, lean_object* v_options_2755_){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2757_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v___x_2758_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2758_, 0, v_key_2754_);
v___x_2759_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_2755_);
v___x_2760_ = lean_unsigned_to_nat(2u);
v___x_2761_ = lean_mk_empty_array_with_capacity(v___x_2760_);
v___x_2762_ = lean_array_push(v___x_2761_, v___x_2758_);
v___x_2763_ = lean_array_push(v___x_2762_, v___x_2759_);
v___x_2764_ = l_Lasm_JS_Web_Support_args(v___x_2763_);
v___x_2765_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_self_2753_, v___x_2757_, v___x_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___boxed(lean_object* v_self_2766_, lean_object* v_key_2767_, lean_object* v_options_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_delete(v_self_2766_, v_key_2767_, v_options_2768_);
lean_dec(v_options_2768_);
return v_res_2770_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2(lean_object* v___f_2771_, lean_object* v_x_2772_){
_start:
{
if (lean_obj_tag(v_x_2772_) == 0)
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2782_; 
lean_dec_ref(v___f_2771_);
v_a_2774_ = lean_ctor_get(v_x_2772_, 0);
v_isSharedCheck_2782_ = !lean_is_exclusive(v_x_2772_);
if (v_isSharedCheck_2782_ == 0)
{
v___x_2776_ = v_x_2772_;
v_isShared_2777_ = v_isSharedCheck_2782_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v_x_2772_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2782_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2781_; 
v_reuseFailAlloc_2781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2781_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2781_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
lean_object* v___x_2780_; 
v___x_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2780_, 0, v___x_2779_);
return v___x_2780_;
}
}
}
else
{
lean_object* v_a_2783_; lean_object* v___x_2784_; 
v_a_2783_ = lean_ctor_get(v_x_2772_, 0);
lean_inc(v_a_2783_);
lean_dec_ref_known(v_x_2772_, 1);
v___x_2784_ = lean_apply_2(v___f_2771_, v_a_2783_, lean_box(0));
return v___x_2784_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2___boxed(lean_object* v___f_2785_, lean_object* v_x_2786_, lean_object* v___y_2787_){
_start:
{
lean_object* v_res_2788_; 
v_res_2788_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2(v___f_2785_, v_x_2786_);
return v_res_2788_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3(lean_object* v_a_2789_, lean_object* v_x_2790_){
_start:
{
if (lean_obj_tag(v_x_2790_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2800_; 
v_a_2792_ = lean_ctor_get(v_x_2790_, 0);
v_isSharedCheck_2800_ = !lean_is_exclusive(v_x_2790_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2794_ = v_x_2790_;
v_isShared_2795_ = v_isSharedCheck_2800_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v_x_2790_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2800_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
lean_object* v___x_2798_; 
v___x_2798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2798_, 0, v___x_2797_);
return v___x_2798_;
}
}
}
else
{
lean_object* v___x_2801_; 
lean_dec_ref_known(v_x_2790_, 1);
v___x_2801_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_2789_);
return v___x_2801_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed(lean_object* v_a_2802_, lean_object* v_x_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v_res_2805_; 
v_res_2805_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3(v_a_2802_, v_x_2803_);
lean_dec(v_a_2802_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7(lean_object* v___f_2806_, lean_object* v_a_2807_, uint32_t v_op_2808_, uint64_t v_flags_2809_, lean_object* v_payload_2810_, lean_object* v_x_2811_){
_start:
{
if (lean_obj_tag(v_x_2811_) == 0)
{
lean_object* v___x_2813_; 
lean_dec_ref(v___f_2806_);
v___x_2813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2813_, 0, v_x_2811_);
return v___x_2813_;
}
else
{
lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2834_; 
v_a_2814_ = lean_ctor_get(v_x_2811_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v_x_2811_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2816_ = v_x_2811_;
v_isShared_2817_ = v_isSharedCheck_2834_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v_x_2811_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2834_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
uint32_t v___x_2818_; lean_object* v___x_2819_; uint8_t v___x_2820_; lean_object* v_val_2822_; lean_object* v___x_2825_; 
v___x_2818_ = 0;
v___x_2819_ = lean_unsigned_to_nat(0u);
v___x_2820_ = 0;
v___x_2825_ = lasm_js_call_into(v_a_2807_, v_op_2808_, v___x_2818_, v_flags_2809_, v_a_2814_, v_payload_2810_);
lean_dec(v_a_2814_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v_a_2826_; lean_object* v___x_2828_; 
v_a_2826_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2826_);
lean_dec_ref_known(v___x_2825_, 1);
if (v_isShared_2817_ == 0)
{
lean_ctor_set(v___x_2816_, 0, v_a_2826_);
v___x_2828_ = v___x_2816_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2826_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
v_val_2822_ = v___x_2828_;
goto v___jp_2821_;
}
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2832_; 
v_a_2830_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_a_2830_);
lean_dec_ref_known(v___x_2825_, 1);
if (v_isShared_2817_ == 0)
{
lean_ctor_set_tag(v___x_2816_, 0);
lean_ctor_set(v___x_2816_, 0, v_a_2830_);
v___x_2832_ = v___x_2816_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2830_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
v_val_2822_ = v___x_2832_;
goto v___jp_2821_;
}
}
v___jp_2821_:
{
lean_object* v___x_2823_; lean_object* v___x_2824_; 
v___x_2823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2823_, 0, v_val_2822_);
v___x_2824_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2819_, v___x_2820_, v___x_2823_, v___f_2806_);
return v___x_2824_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed(lean_object* v___f_2835_, lean_object* v_a_2836_, lean_object* v_op_2837_, lean_object* v_flags_2838_, lean_object* v_payload_2839_, lean_object* v_x_2840_, lean_object* v___y_2841_){
_start:
{
uint32_t v_op_boxed_2842_; uint64_t v_flags_boxed_2843_; lean_object* v_res_2844_; 
v_op_boxed_2842_ = lean_unbox_uint32(v_op_2837_);
lean_dec(v_op_2837_);
v_flags_boxed_2843_ = lean_unbox_uint64(v_flags_2838_);
lean_dec_ref(v_flags_2838_);
v_res_2844_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7(v___f_2835_, v_a_2836_, v_op_boxed_2842_, v_flags_boxed_2843_, v_payload_2839_, v_x_2840_);
lean_dec(v_payload_2839_);
lean_dec(v_a_2836_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5(lean_object* v___x_2845_, uint8_t v___x_2846_, lean_object* v___f_2847_, lean_object* v_a_2848_, uint32_t v_op_2849_, uint64_t v_flags_2850_, lean_object* v_payload_2851_, lean_object* v_x_2852_){
_start:
{
lean_object* v_val_2855_; 
if (lean_obj_tag(v_x_2852_) == 0)
{
lean_object* v___x_2858_; 
lean_dec_ref(v___f_2847_);
lean_dec(v___x_2845_);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v_x_2852_);
return v___x_2858_;
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2873_; 
v_a_2859_ = lean_ctor_get(v_x_2852_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v_x_2852_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2861_ = v_x_2852_;
v_isShared_2862_ = v_isSharedCheck_2873_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v_x_2852_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2873_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
uint32_t v___x_2863_; lean_object* v___x_2864_; 
v___x_2863_ = 0;
v___x_2864_ = lasm_js_call_into(v_a_2848_, v_op_2849_, v___x_2863_, v_flags_2850_, v_a_2859_, v_payload_2851_);
lean_dec(v_a_2859_);
if (lean_obj_tag(v___x_2864_) == 0)
{
lean_object* v_a_2865_; lean_object* v___x_2867_; 
v_a_2865_ = lean_ctor_get(v___x_2864_, 0);
lean_inc(v_a_2865_);
lean_dec_ref_known(v___x_2864_, 1);
if (v_isShared_2862_ == 0)
{
lean_ctor_set(v___x_2861_, 0, v_a_2865_);
v___x_2867_ = v___x_2861_;
goto v_reusejp_2866_;
}
else
{
lean_object* v_reuseFailAlloc_2868_; 
v_reuseFailAlloc_2868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2868_, 0, v_a_2865_);
v___x_2867_ = v_reuseFailAlloc_2868_;
goto v_reusejp_2866_;
}
v_reusejp_2866_:
{
v_val_2855_ = v___x_2867_;
goto v___jp_2854_;
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; 
v_a_2869_ = lean_ctor_get(v___x_2864_, 0);
lean_inc(v_a_2869_);
lean_dec_ref_known(v___x_2864_, 1);
if (v_isShared_2862_ == 0)
{
lean_ctor_set_tag(v___x_2861_, 0);
lean_ctor_set(v___x_2861_, 0, v_a_2869_);
v___x_2871_ = v___x_2861_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_a_2869_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
v_val_2855_ = v___x_2871_;
goto v___jp_2854_;
}
}
}
}
v___jp_2854_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2856_, 0, v_val_2855_);
v___x_2857_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2845_, v___x_2846_, v___x_2856_, v___f_2847_);
return v___x_2857_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed(lean_object* v___x_2874_, lean_object* v___x_2875_, lean_object* v___f_2876_, lean_object* v_a_2877_, lean_object* v_op_2878_, lean_object* v_flags_2879_, lean_object* v_payload_2880_, lean_object* v_x_2881_, lean_object* v___y_2882_){
_start:
{
uint8_t v___x_890__boxed_2883_; uint32_t v_op_boxed_2884_; uint64_t v_flags_boxed_2885_; lean_object* v_res_2886_; 
v___x_890__boxed_2883_ = lean_unbox(v___x_2875_);
v_op_boxed_2884_ = lean_unbox_uint32(v_op_2878_);
lean_dec(v_op_2878_);
v_flags_boxed_2885_ = lean_unbox_uint64(v_flags_2879_);
lean_dec_ref(v_flags_2879_);
v_res_2886_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5(v___x_2874_, v___x_890__boxed_2883_, v___f_2876_, v_a_2877_, v_op_boxed_2884_, v_flags_boxed_2885_, v_payload_2880_, v_x_2881_);
lean_dec(v_payload_2880_);
lean_dec(v_a_2877_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6(lean_object* v_failurePrefix_2887_, uint32_t v_op_2888_, uint64_t v_flags_2889_, lean_object* v_payload_2890_, lean_object* v___f_2891_, lean_object* v___f_2892_, lean_object* v___f_2893_, lean_object* v_x_2894_){
_start:
{
if (lean_obj_tag(v_x_2894_) == 0)
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2904_; 
lean_dec_ref(v___f_2893_);
lean_dec_ref(v___f_2892_);
lean_dec_ref(v___f_2891_);
lean_dec(v_payload_2890_);
v_a_2896_ = lean_ctor_get(v_x_2894_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v_x_2894_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2898_ = v_x_2894_;
v_isShared_2899_ = v_isSharedCheck_2904_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v_x_2894_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2904_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2901_; 
if (v_isShared_2899_ == 0)
{
v___x_2901_ = v___x_2898_;
goto v_reusejp_2900_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2896_);
v___x_2901_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2900_;
}
v_reusejp_2900_:
{
lean_object* v___x_2902_; 
v___x_2902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2902_, 0, v___x_2901_);
return v___x_2902_;
}
}
}
else
{
lean_object* v_a_2905_; lean_object* v___x_2907_; uint8_t v_isShared_2908_; uint8_t v_isSharedCheck_2951_; 
v_a_2905_ = lean_ctor_get(v_x_2894_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v_x_2894_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2907_ = v_x_2894_;
v_isShared_2908_ = v_isSharedCheck_2951_;
goto v_resetjp_2906_;
}
else
{
lean_inc(v_a_2905_);
lean_dec(v_x_2894_);
v___x_2907_ = lean_box(0);
v_isShared_2908_ = v_isSharedCheck_2951_;
goto v_resetjp_2906_;
}
v_resetjp_2906_:
{
lean_object* v___x_2909_; lean_object* v___x_2910_; uint8_t v___x_2911_; 
v___x_2909_ = lean_string_utf8_byte_size(v_failurePrefix_2887_);
v___x_2910_ = lean_unsigned_to_nat(0u);
v___x_2911_ = lean_nat_dec_eq(v___x_2909_, v___x_2910_);
if (v___x_2911_ == 0)
{
lean_object* v___f_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___f_2916_; lean_object* v_val_2918_; lean_object* v___x_2923_; 
lean_dec_ref(v___f_2893_);
lean_inc(v_a_2905_);
v___f_2912_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2912_, 0, v_a_2905_);
v___x_2913_ = lean_box(v___x_2911_);
v___x_2914_ = lean_box_uint32(v_op_2888_);
v___x_2915_ = lean_box_uint64(v_flags_2889_);
lean_inc(v_payload_2890_);
v___f_2916_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_2916_, 0, v___x_2910_);
lean_closure_set(v___f_2916_, 1, v___x_2913_);
lean_closure_set(v___f_2916_, 2, v___f_2912_);
lean_closure_set(v___f_2916_, 3, v_a_2905_);
lean_closure_set(v___f_2916_, 4, v___x_2914_);
lean_closure_set(v___f_2916_, 5, v___x_2915_);
lean_closure_set(v___f_2916_, 6, v_payload_2890_);
v___x_2923_ = l_Lasm_JS_Wire_encodeIO(v_payload_2890_);
lean_dec(v_payload_2890_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2926_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2924_);
lean_dec_ref_known(v___x_2923_, 1);
if (v_isShared_2908_ == 0)
{
lean_ctor_set(v___x_2907_, 0, v_a_2924_);
v___x_2926_ = v___x_2907_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2924_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
v_val_2918_ = v___x_2926_;
goto v___jp_2917_;
}
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; 
v_a_2928_ = lean_ctor_get(v___x_2923_, 0);
lean_inc(v_a_2928_);
lean_dec_ref_known(v___x_2923_, 1);
if (v_isShared_2908_ == 0)
{
lean_ctor_set_tag(v___x_2907_, 0);
lean_ctor_set(v___x_2907_, 0, v_a_2928_);
v___x_2930_ = v___x_2907_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2928_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
v_val_2918_ = v___x_2930_;
goto v___jp_2917_;
}
}
v___jp_2917_:
{
lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; 
v___x_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2919_, 0, v_val_2918_);
v___x_2920_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2910_, v___x_2911_, v___x_2919_, v___f_2916_);
v___x_2921_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2910_, v___x_2911_, v___x_2920_, v___f_2891_);
v___x_2922_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2910_, v___x_2911_, v___x_2921_, v___f_2892_);
return v___x_2922_;
}
}
else
{
lean_object* v___f_2932_; lean_object* v___x_2933_; lean_object* v___x_2934_; lean_object* v___f_2935_; uint8_t v___x_2936_; lean_object* v_val_2938_; lean_object* v___x_2942_; 
lean_dec_ref(v___f_2892_);
lean_dec_ref(v___f_2891_);
lean_inc(v_a_2905_);
v___f_2932_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2932_, 0, v_a_2905_);
v___x_2933_ = lean_box_uint32(v_op_2888_);
v___x_2934_ = lean_box_uint64(v_flags_2889_);
lean_inc(v_payload_2890_);
v___f_2935_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_2935_, 0, v___f_2932_);
lean_closure_set(v___f_2935_, 1, v_a_2905_);
lean_closure_set(v___f_2935_, 2, v___x_2933_);
lean_closure_set(v___f_2935_, 3, v___x_2934_);
lean_closure_set(v___f_2935_, 4, v_payload_2890_);
v___x_2936_ = 0;
v___x_2942_ = l_Lasm_JS_Wire_encodeIO(v_payload_2890_);
lean_dec(v_payload_2890_);
if (lean_obj_tag(v___x_2942_) == 0)
{
lean_object* v_a_2943_; lean_object* v___x_2945_; 
v_a_2943_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2943_);
lean_dec_ref_known(v___x_2942_, 1);
if (v_isShared_2908_ == 0)
{
lean_ctor_set(v___x_2907_, 0, v_a_2943_);
v___x_2945_ = v___x_2907_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2946_; 
v_reuseFailAlloc_2946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2946_, 0, v_a_2943_);
v___x_2945_ = v_reuseFailAlloc_2946_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
v_val_2938_ = v___x_2945_;
goto v___jp_2937_;
}
}
else
{
lean_object* v_a_2947_; lean_object* v___x_2949_; 
v_a_2947_ = lean_ctor_get(v___x_2942_, 0);
lean_inc(v_a_2947_);
lean_dec_ref_known(v___x_2942_, 1);
if (v_isShared_2908_ == 0)
{
lean_ctor_set_tag(v___x_2907_, 0);
lean_ctor_set(v___x_2907_, 0, v_a_2947_);
v___x_2949_ = v___x_2907_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2947_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
v_val_2938_ = v___x_2949_;
goto v___jp_2937_;
}
}
v___jp_2937_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2939_, 0, v_val_2938_);
v___x_2940_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2910_, v___x_2936_, v___x_2939_, v___f_2935_);
v___x_2941_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2910_, v___x_2936_, v___x_2940_, v___f_2893_);
return v___x_2941_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6___boxed(lean_object* v_failurePrefix_2952_, lean_object* v_op_2953_, lean_object* v_flags_2954_, lean_object* v_payload_2955_, lean_object* v___f_2956_, lean_object* v___f_2957_, lean_object* v___f_2958_, lean_object* v_x_2959_, lean_object* v___y_2960_){
_start:
{
uint32_t v_op_boxed_2961_; uint64_t v_flags_boxed_2962_; lean_object* v_res_2963_; 
v_op_boxed_2961_ = lean_unbox_uint32(v_op_2953_);
lean_dec(v_op_2953_);
v_flags_boxed_2962_ = lean_unbox_uint64(v_flags_2954_);
lean_dec_ref(v_flags_2954_);
v_res_2963_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6(v_failurePrefix_2952_, v_op_boxed_2961_, v_flags_boxed_2962_, v_payload_2955_, v___f_2956_, v___f_2957_, v___f_2958_, v_x_2959_);
lean_dec_ref(v_failurePrefix_2952_);
return v_res_2963_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1(lean_object* v___f_2964_, lean_object* v_bytes_2965_){
_start:
{
lean_object* v___x_2967_; uint8_t v___x_2968_; lean_object* v_val_2970_; lean_object* v___x_2973_; 
v___x_2967_ = lean_unsigned_to_nat(0u);
v___x_2968_ = 0;
v___x_2973_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2965_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2976_; uint8_t v_isShared_2977_; uint8_t v_isSharedCheck_2981_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2976_ = v___x_2973_;
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
else
{
lean_inc(v_a_2974_);
lean_dec(v___x_2973_);
v___x_2976_ = lean_box(0);
v_isShared_2977_ = v_isSharedCheck_2981_;
goto v_resetjp_2975_;
}
v_resetjp_2975_:
{
lean_object* v___x_2979_; 
if (v_isShared_2977_ == 0)
{
lean_ctor_set_tag(v___x_2976_, 1);
v___x_2979_ = v___x_2976_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2974_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
v_val_2970_ = v___x_2979_;
goto v___jp_2969_;
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
v_a_2982_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2973_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2973_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
lean_ctor_set_tag(v___x_2984_, 0);
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
v_val_2970_ = v___x_2987_;
goto v___jp_2969_;
}
}
}
v___jp_2969_:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2971_, 0, v_val_2970_);
v___x_2972_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2967_, v___x_2968_, v___x_2971_, v___f_2964_);
return v___x_2972_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1___boxed(lean_object* v___f_2990_, lean_object* v_bytes_2991_, lean_object* v___y_2992_){
_start:
{
lean_object* v_res_2993_; 
v_res_2993_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1(v___f_2990_, v_bytes_2991_);
lean_dec_ref(v_bytes_2991_);
return v_res_2993_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8(lean_object* v___f_2994_, lean_object* v_x_2995_){
_start:
{
if (lean_obj_tag(v_x_2995_) == 0)
{
lean_object* v_a_2997_; lean_object* v___x_2999_; uint8_t v_isShared_3000_; uint8_t v_isSharedCheck_3005_; 
lean_dec_ref(v___f_2994_);
v_a_2997_ = lean_ctor_get(v_x_2995_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v_x_2995_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_2999_ = v_x_2995_;
v_isShared_3000_ = v_isSharedCheck_3005_;
goto v_resetjp_2998_;
}
else
{
lean_inc(v_a_2997_);
lean_dec(v_x_2995_);
v___x_2999_ = lean_box(0);
v_isShared_3000_ = v_isSharedCheck_3005_;
goto v_resetjp_2998_;
}
v_resetjp_2998_:
{
lean_object* v___x_3002_; 
if (v_isShared_3000_ == 0)
{
v___x_3002_ = v___x_2999_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2997_);
v___x_3002_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3003_; 
v___x_3003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3003_, 0, v___x_3002_);
return v___x_3003_;
}
}
}
else
{
lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3017_; 
v_isSharedCheck_3017_ = !lean_is_exclusive(v_x_2995_);
if (v_isSharedCheck_3017_ == 0)
{
lean_object* v_unused_3018_; 
v_unused_3018_ = lean_ctor_get(v_x_2995_, 0);
lean_dec(v_unused_3018_);
v___x_3007_ = v_x_2995_;
v_isShared_3008_ = v_isSharedCheck_3017_;
goto v_resetjp_3006_;
}
else
{
lean_dec(v_x_2995_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3017_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3009_; uint8_t v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3013_; 
v___x_3009_ = lean_unsigned_to_nat(0u);
v___x_3010_ = 0;
v___x_3011_ = lean_io_promise_new();
if (v_isShared_3008_ == 0)
{
lean_ctor_set(v___x_3007_, 0, v___x_3011_);
v___x_3013_ = v___x_3007_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3011_);
v___x_3013_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
lean_object* v___x_3014_; lean_object* v___x_3015_; 
v___x_3014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3013_);
v___x_3015_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3009_, v___x_3010_, v___x_3014_, v___f_2994_);
return v___x_3015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8___boxed(lean_object* v___f_3019_, lean_object* v_x_3020_, lean_object* v___y_3021_){
_start:
{
lean_object* v_res_3022_; 
v_res_3022_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8(v___f_3019_, v_x_3020_);
return v_res_3022_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4(lean_object* v_failurePrefix_3023_, lean_object* v_x_3024_){
_start:
{
if (lean_obj_tag(v_x_3024_) == 0)
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3037_; 
v_a_3026_ = lean_ctor_get(v_x_3024_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v_x_3024_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3028_ = v_x_3024_;
v_isShared_3029_ = v_isSharedCheck_3037_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v_x_3024_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3037_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3034_; 
v___x_3030_ = lean_io_error_to_string(v_a_3026_);
v___x_3031_ = lean_string_append(v_failurePrefix_3023_, v___x_3030_);
lean_dec_ref(v___x_3030_);
v___x_3032_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3031_);
if (v_isShared_3029_ == 0)
{
lean_ctor_set(v___x_3028_, 0, v___x_3032_);
v___x_3034_ = v___x_3028_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v___x_3032_);
v___x_3034_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
lean_object* v___x_3035_; 
v___x_3035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
return v___x_3035_;
}
}
}
else
{
lean_object* v___x_3038_; 
lean_dec_ref(v_failurePrefix_3023_);
v___x_3038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3038_, 0, v_x_3024_);
return v___x_3038_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed(lean_object* v_failurePrefix_3039_, lean_object* v_x_3040_, lean_object* v___y_3041_){
_start:
{
lean_object* v_res_3042_; 
v_res_3042_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4(v_failurePrefix_3039_, v_x_3040_);
return v_res_3042_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0(lean_object* v_context_3043_, lean_object* v_x_3044_){
_start:
{
lean_object* v_val_3047_; 
if (lean_obj_tag(v_x_3044_) == 0)
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3057_; 
v_a_3049_ = lean_ctor_get(v_x_3044_, 0);
v_isSharedCheck_3057_ = !lean_is_exclusive(v_x_3044_);
if (v_isSharedCheck_3057_ == 0)
{
v___x_3051_ = v_x_3044_;
v_isShared_3052_ = v_isSharedCheck_3057_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v_x_3044_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3057_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3056_; 
v_reuseFailAlloc_3056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3056_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3056_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
lean_object* v___x_3055_; 
v___x_3055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3055_, 0, v___x_3054_);
return v___x_3055_;
}
}
}
else
{
lean_object* v_a_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3071_; 
v_a_3058_ = lean_ctor_get(v_x_3044_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v_x_3044_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3060_ = v_x_3044_;
v_isShared_3061_ = v_isSharedCheck_3071_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_a_3058_);
lean_dec(v_x_3044_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3071_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0_spec__0_spec__1(v_context_3043_, v_a_3058_);
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v_a_3063_; lean_object* v___x_3065_; 
v_a_3063_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_a_3063_);
lean_dec_ref_known(v___x_3062_, 1);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 0, v_a_3063_);
v___x_3065_ = v___x_3060_;
goto v_reusejp_3064_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_a_3063_);
v___x_3065_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3064_;
}
v_reusejp_3064_:
{
v_val_3047_ = v___x_3065_;
goto v___jp_3046_;
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; 
v_a_3067_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3062_, 1);
if (v_isShared_3061_ == 0)
{
lean_ctor_set_tag(v___x_3060_, 0);
lean_ctor_set(v___x_3060_, 0, v_a_3067_);
v___x_3069_ = v___x_3060_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3067_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
v_val_3047_ = v___x_3069_;
goto v___jp_3046_;
}
}
}
}
v___jp_3046_:
{
lean_object* v___x_3048_; 
v___x_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3048_, 0, v_val_3047_);
return v___x_3048_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0___boxed(lean_object* v_context_3072_, lean_object* v_x_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v_res_3075_; 
v_res_3075_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0(v_context_3072_, v_x_3073_);
lean_dec_ref(v_context_3072_);
return v_res_3075_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(lean_object* v_context_3076_, uint32_t v_op_3077_, uint64_t v_flags_3078_, lean_object* v_payload_3079_, lean_object* v_failurePrefix_3080_){
_start:
{
lean_object* v___f_3082_; lean_object* v___f_3083_; lean_object* v___f_3084_; lean_object* v___f_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___f_3088_; lean_object* v___f_3089_; lean_object* v___x_3090_; uint8_t v___x_3091_; lean_object* v_val_3093_; lean_object* v___x_3096_; 
v___f_3082_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3082_, 0, v_context_3076_);
v___f_3083_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3083_, 0, v___f_3082_);
v___f_3084_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3084_, 0, v___f_3083_);
lean_inc_ref(v_failurePrefix_3080_);
v___f_3085_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3085_, 0, v_failurePrefix_3080_);
v___x_3086_ = lean_box_uint32(v_op_3077_);
v___x_3087_ = lean_box_uint64(v_flags_3078_);
lean_inc_ref(v___f_3084_);
v___f_3088_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_3088_, 0, v_failurePrefix_3080_);
lean_closure_set(v___f_3088_, 1, v___x_3086_);
lean_closure_set(v___f_3088_, 2, v___x_3087_);
lean_closure_set(v___f_3088_, 3, v_payload_3079_);
lean_closure_set(v___f_3088_, 4, v___f_3085_);
lean_closure_set(v___f_3088_, 5, v___f_3084_);
lean_closure_set(v___f_3088_, 6, v___f_3084_);
v___f_3089_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__8___boxed), 3, 1);
lean_closure_set(v___f_3089_, 0, v___f_3088_);
v___x_3090_ = lean_unsigned_to_nat(0u);
v___x_3091_ = 0;
v___x_3096_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v_a_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3104_; 
v_a_3097_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3104_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3104_ == 0)
{
v___x_3099_ = v___x_3096_;
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_a_3097_);
lean_dec(v___x_3096_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3104_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v___x_3102_; 
if (v_isShared_3100_ == 0)
{
lean_ctor_set_tag(v___x_3099_, 1);
v___x_3102_ = v___x_3099_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v_a_3097_);
v___x_3102_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
v_val_3093_ = v___x_3102_;
goto v___jp_3092_;
}
}
}
else
{
lean_object* v_a_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3112_; 
v_a_3105_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3112_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3112_ == 0)
{
v___x_3107_ = v___x_3096_;
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_a_3105_);
lean_dec(v___x_3096_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3112_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___x_3110_; 
if (v_isShared_3108_ == 0)
{
lean_ctor_set_tag(v___x_3107_, 0);
v___x_3110_ = v___x_3107_;
goto v_reusejp_3109_;
}
else
{
lean_object* v_reuseFailAlloc_3111_; 
v_reuseFailAlloc_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3111_, 0, v_a_3105_);
v___x_3110_ = v_reuseFailAlloc_3111_;
goto v_reusejp_3109_;
}
v_reusejp_3109_:
{
v_val_3093_ = v___x_3110_;
goto v___jp_3092_;
}
}
}
v___jp_3092_:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3094_, 0, v_val_3093_);
v___x_3095_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3090_, v___x_3091_, v___x_3094_, v___f_3089_);
return v___x_3095_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___boxed(lean_object* v_context_3113_, lean_object* v_op_3114_, lean_object* v_flags_3115_, lean_object* v_payload_3116_, lean_object* v_failurePrefix_3117_, lean_object* v_a_3118_){
_start:
{
uint32_t v_op_boxed_3119_; uint64_t v_flags_boxed_3120_; lean_object* v_res_3121_; 
v_op_boxed_3119_ = lean_unbox_uint32(v_op_3114_);
lean_dec(v_op_3114_);
v_flags_boxed_3120_ = lean_unbox_uint64(v_flags_3115_);
lean_dec_ref(v_flags_3115_);
v_res_3121_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(v_context_3113_, v_op_boxed_3119_, v_flags_boxed_3120_, v_payload_3116_, v_failurePrefix_3117_);
return v_res_3121_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(uint8_t v_await_3122_, uint64_t v_extra_3123_){
_start:
{
uint64_t v___x_3124_; uint64_t v___y_3126_; 
v___x_3124_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_3122_ == 0)
{
uint64_t v___x_3129_; 
v___x_3129_ = 0ULL;
v___y_3126_ = v___x_3129_;
goto v___jp_3125_;
}
else
{
uint64_t v___x_3130_; 
v___x_3130_ = 2ULL;
v___y_3126_ = v___x_3130_;
goto v___jp_3125_;
}
v___jp_3125_:
{
uint64_t v___x_3127_; uint64_t v___x_3128_; 
v___x_3127_ = lean_uint64_lor(v___x_3124_, v___y_3126_);
v___x_3128_ = lean_uint64_lor(v___x_3127_, v_extra_3123_);
return v___x_3128_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0___boxed(lean_object* v_await_3131_, lean_object* v_extra_3132_){
_start:
{
uint8_t v_await_boxed_3133_; uint64_t v_extra_boxed_3134_; uint64_t v_res_3135_; lean_object* v_r_3136_; 
v_await_boxed_3133_ = lean_unbox(v_await_3131_);
v_extra_boxed_3134_ = lean_unbox_uint64(v_extra_3132_);
lean_dec_ref(v_extra_3132_);
v_res_3135_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(v_await_boxed_3133_, v_extra_boxed_3134_);
v_r_3136_ = lean_box_uint64(v_res_3135_);
return v_r_3136_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1(void){
_start:
{
uint64_t v___x_3138_; uint8_t v___x_3139_; uint64_t v___x_3140_; 
v___x_3138_ = 8ULL;
v___x_3139_ = 0;
v___x_3140_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__0(v___x_3139_, v___x_3138_);
return v___x_3140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(lean_object* v_o_3141_, lean_object* v_name_3142_, lean_object* v_args_3143_){
_start:
{
lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; uint32_t v___x_3150_; uint64_t v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; 
v___x_3145_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3146_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3146_, 0, v_o_3141_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
lean_inc_ref(v_name_3142_);
v___x_3147_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3147_, 0, v_name_3142_);
v___x_3148_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0));
v___x_3149_ = lean_string_append(v___x_3148_, v_name_3142_);
lean_dec_ref(v_name_3142_);
v___x_3150_ = 205;
v___x_3151_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__1);
v___x_3152_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3152_, 0, v_args_3143_);
v___x_3153_ = lean_unsigned_to_nat(3u);
v___x_3154_ = lean_mk_empty_array_with_capacity(v___x_3153_);
v___x_3155_ = lean_array_push(v___x_3154_, v___x_3146_);
v___x_3156_ = lean_array_push(v___x_3155_, v___x_3147_);
v___x_3157_ = lean_array_push(v___x_3156_, v___x_3152_);
v___x_3158_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
v___x_3159_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1(v___x_3149_, v___x_3150_, v___x_3151_, v___x_3158_, v___x_3145_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___boxed(lean_object* v_o_3160_, lean_object* v_name_3161_, lean_object* v_args_3162_, lean_object* v___y_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_o_3160_, v_name_3161_, v_args_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys(lean_object* v_self_3165_, lean_object* v_keys_3166_, lean_object* v_options_3167_){
_start:
{
lean_object* v___x_3169_; size_t v_sz_3170_; size_t v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; 
v___x_3169_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v_sz_3170_ = lean_array_size(v_keys_3166_);
v___x_3171_ = ((size_t)0ULL);
v___x_3172_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3170_, v___x_3171_, v_keys_3166_);
v___x_3173_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3173_, 0, v___x_3172_);
v___x_3174_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3167_);
v___x_3175_ = lean_unsigned_to_nat(2u);
v___x_3176_ = lean_mk_empty_array_with_capacity(v___x_3175_);
v___x_3177_ = lean_array_push(v___x_3176_, v___x_3173_);
v___x_3178_ = lean_array_push(v___x_3177_, v___x_3174_);
v___x_3179_ = l_Lasm_JS_Web_Support_args(v___x_3178_);
v___x_3180_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_self_3165_, v___x_3169_, v___x_3179_);
return v___x_3180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys___boxed(lean_object* v_self_3181_, lean_object* v_keys_3182_, lean_object* v_options_3183_, lean_object* v_a_3184_){
_start:
{
lean_object* v_res_3185_; 
v_res_3185_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys(v_self_3181_, v_keys_3182_, v_options_3183_);
lean_dec(v_options_3183_);
return v_res_3185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll(lean_object* v_self_3187_, lean_object* v_options_3188_){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; 
v___x_3190_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___closed__0));
v___x_3191_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3188_);
v___x_3192_ = lean_unsigned_to_nat(1u);
v___x_3193_ = lean_mk_empty_array_with_capacity(v___x_3192_);
v___x_3194_ = lean_array_push(v___x_3193_, v___x_3191_);
v___x_3195_ = l_Lasm_JS_Web_Support_args(v___x_3194_);
v___x_3196_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3187_, v___x_3190_, v___x_3195_);
return v___x_3196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll___boxed(lean_object* v_self_3197_, lean_object* v_options_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAll(v_self_3197_, v_options_3198_);
lean_dec(v_options_3198_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction(lean_object* v_self_3202_, lean_object* v_closure_3203_){
_start:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3205_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___closed__0));
v___x_3206_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3207_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3207_, 0, v_closure_3203_);
lean_ctor_set(v___x_3207_, 1, v___x_3206_);
v___x_3208_ = lean_unsigned_to_nat(1u);
v___x_3209_ = lean_mk_empty_array_with_capacity(v___x_3208_);
v___x_3210_ = lean_array_push(v___x_3209_, v___x_3207_);
v___x_3211_ = l_Lasm_JS_Web_Support_args(v___x_3210_);
v___x_3212_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_3202_, v___x_3205_, v___x_3211_);
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction___boxed(lean_object* v_self_3213_, lean_object* v_closure_3214_, lean_object* v_a_3215_){
_start:
{
lean_object* v_res_3216_; 
v_res_3216_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_transaction(v_self_3213_, v_closure_3214_);
return v_res_3216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(lean_object* v_x_3217_){
_start:
{
if (lean_obj_tag(v_x_3217_) == 0)
{
lean_object* v___x_3218_; 
v___x_3218_ = lean_box(0);
return v___x_3218_;
}
else
{
lean_object* v_val_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; 
v_val_3219_ = lean_ctor_get(v_x_3217_, 0);
v___x_3220_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_3221_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_3219_);
v___x_3222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3220_);
lean_ctor_set(v___x_3222_, 1, v___x_3221_);
v___x_3223_ = lean_unsigned_to_nat(1u);
v___x_3224_ = lean_mk_empty_array_with_capacity(v___x_3223_);
v___x_3225_ = lean_array_push(v___x_3224_, v___x_3222_);
v___x_3226_ = l_Lasm_JS_Web_Support_fields(v___x_3225_);
lean_dec_ref(v___x_3225_);
return v___x_3226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0___boxed(lean_object* v_x_3227_){
_start:
{
lean_object* v_res_3228_; 
v_res_3228_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_x_3227_);
lean_dec(v_x_3227_);
return v_res_3228_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2(lean_object* v___f_3229_, lean_object* v_x_3230_){
_start:
{
if (lean_obj_tag(v_x_3230_) == 0)
{
lean_object* v_a_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3240_; 
lean_dec_ref(v___f_3229_);
v_a_3232_ = lean_ctor_get(v_x_3230_, 0);
v_isSharedCheck_3240_ = !lean_is_exclusive(v_x_3230_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3234_ = v_x_3230_;
v_isShared_3235_ = v_isSharedCheck_3240_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_a_3232_);
lean_dec(v_x_3230_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3240_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3237_; 
if (v_isShared_3235_ == 0)
{
v___x_3237_ = v___x_3234_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3239_; 
v_reuseFailAlloc_3239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3239_, 0, v_a_3232_);
v___x_3237_ = v_reuseFailAlloc_3239_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
lean_object* v___x_3238_; 
v___x_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3237_);
return v___x_3238_;
}
}
}
else
{
lean_object* v_a_3241_; lean_object* v___x_3242_; 
v_a_3241_ = lean_ctor_get(v_x_3230_, 0);
lean_inc(v_a_3241_);
lean_dec_ref_known(v_x_3230_, 1);
v___x_3242_ = lean_apply_2(v___f_3229_, v_a_3241_, lean_box(0));
return v___x_3242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2___boxed(lean_object* v___f_3243_, lean_object* v_x_3244_, lean_object* v___y_3245_){
_start:
{
lean_object* v_res_3246_; 
v_res_3246_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2(v___f_3243_, v_x_3244_);
return v_res_3246_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0(lean_object* v_context_3247_, lean_object* v_x_3248_){
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
v___x_3266_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_ReadableStreamDefaultController_desiredSize_spec__0_spec__0_spec__1(v_context_3247_, v_a_3262_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0___boxed(lean_object* v_context_3276_, lean_object* v_x_3277_, lean_object* v___y_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0(v_context_3276_, v_x_3277_);
lean_dec_ref(v_context_3276_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9(lean_object* v_failurePrefix_3280_, uint32_t v_op_3281_, uint64_t v_flags_3282_, lean_object* v_payload_3283_, lean_object* v___f_3284_, lean_object* v___f_3285_, lean_object* v___f_3286_, lean_object* v_x_3287_){
_start:
{
if (lean_obj_tag(v_x_3287_) == 0)
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3297_; 
lean_dec_ref(v___f_3286_);
lean_dec_ref(v___f_3285_);
lean_dec_ref(v___f_3284_);
lean_dec(v_payload_3283_);
v_a_3289_ = lean_ctor_get(v_x_3287_, 0);
v_isSharedCheck_3297_ = !lean_is_exclusive(v_x_3287_);
if (v_isSharedCheck_3297_ == 0)
{
v___x_3291_ = v_x_3287_;
v_isShared_3292_ = v_isSharedCheck_3297_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v_x_3287_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3297_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3296_; 
v_reuseFailAlloc_3296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3296_, 0, v_a_3289_);
v___x_3294_ = v_reuseFailAlloc_3296_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
lean_object* v___x_3295_; 
v___x_3295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3294_);
return v___x_3295_;
}
}
}
else
{
lean_object* v_a_3298_; lean_object* v___x_3300_; uint8_t v_isShared_3301_; uint8_t v_isSharedCheck_3344_; 
v_a_3298_ = lean_ctor_get(v_x_3287_, 0);
v_isSharedCheck_3344_ = !lean_is_exclusive(v_x_3287_);
if (v_isSharedCheck_3344_ == 0)
{
v___x_3300_ = v_x_3287_;
v_isShared_3301_ = v_isSharedCheck_3344_;
goto v_resetjp_3299_;
}
else
{
lean_inc(v_a_3298_);
lean_dec(v_x_3287_);
v___x_3300_ = lean_box(0);
v_isShared_3301_ = v_isSharedCheck_3344_;
goto v_resetjp_3299_;
}
v_resetjp_3299_:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; uint8_t v___x_3304_; 
v___x_3302_ = lean_string_utf8_byte_size(v_failurePrefix_3280_);
v___x_3303_ = lean_unsigned_to_nat(0u);
v___x_3304_ = lean_nat_dec_eq(v___x_3302_, v___x_3303_);
if (v___x_3304_ == 0)
{
lean_object* v___f_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___f_3309_; lean_object* v_val_3311_; lean_object* v___x_3316_; 
lean_dec_ref(v___f_3286_);
lean_inc(v_a_3298_);
v___f_3305_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3305_, 0, v_a_3298_);
v___x_3306_ = lean_box(v___x_3304_);
v___x_3307_ = lean_box_uint32(v_op_3281_);
v___x_3308_ = lean_box_uint64(v_flags_3282_);
lean_inc(v_payload_3283_);
v___f_3309_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__5___boxed), 9, 7);
lean_closure_set(v___f_3309_, 0, v___x_3303_);
lean_closure_set(v___f_3309_, 1, v___x_3306_);
lean_closure_set(v___f_3309_, 2, v___f_3305_);
lean_closure_set(v___f_3309_, 3, v_a_3298_);
lean_closure_set(v___f_3309_, 4, v___x_3307_);
lean_closure_set(v___f_3309_, 5, v___x_3308_);
lean_closure_set(v___f_3309_, 6, v_payload_3283_);
v___x_3316_ = l_Lasm_JS_Wire_encodeIO(v_payload_3283_);
lean_dec(v_payload_3283_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3319_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3317_);
lean_dec_ref_known(v___x_3316_, 1);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 0, v_a_3317_);
v___x_3319_ = v___x_3300_;
goto v_reusejp_3318_;
}
else
{
lean_object* v_reuseFailAlloc_3320_; 
v_reuseFailAlloc_3320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3320_, 0, v_a_3317_);
v___x_3319_ = v_reuseFailAlloc_3320_;
goto v_reusejp_3318_;
}
v_reusejp_3318_:
{
v_val_3311_ = v___x_3319_;
goto v___jp_3310_;
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; 
v_a_3321_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3321_);
lean_dec_ref_known(v___x_3316_, 1);
if (v_isShared_3301_ == 0)
{
lean_ctor_set_tag(v___x_3300_, 0);
lean_ctor_set(v___x_3300_, 0, v_a_3321_);
v___x_3323_ = v___x_3300_;
goto v_reusejp_3322_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_a_3321_);
v___x_3323_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3322_;
}
v_reusejp_3322_:
{
v_val_3311_ = v___x_3323_;
goto v___jp_3310_;
}
}
v___jp_3310_:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; 
v___x_3312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3312_, 0, v_val_3311_);
v___x_3313_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3303_, v___x_3304_, v___x_3312_, v___f_3309_);
v___x_3314_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3303_, v___x_3304_, v___x_3313_, v___f_3284_);
v___x_3315_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3303_, v___x_3304_, v___x_3314_, v___f_3285_);
return v___x_3315_;
}
}
else
{
lean_object* v___f_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___f_3328_; uint8_t v___x_3329_; lean_object* v_val_3331_; lean_object* v___x_3335_; 
lean_dec_ref(v___f_3285_);
lean_dec_ref(v___f_3284_);
lean_inc(v_a_3298_);
v___f_3325_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3325_, 0, v_a_3298_);
v___x_3326_ = lean_box_uint32(v_op_3281_);
v___x_3327_ = lean_box_uint64(v_flags_3282_);
lean_inc(v_payload_3283_);
v___f_3328_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__7___boxed), 7, 5);
lean_closure_set(v___f_3328_, 0, v___f_3325_);
lean_closure_set(v___f_3328_, 1, v_a_3298_);
lean_closure_set(v___f_3328_, 2, v___x_3326_);
lean_closure_set(v___f_3328_, 3, v___x_3327_);
lean_closure_set(v___f_3328_, 4, v_payload_3283_);
v___x_3329_ = 0;
v___x_3335_ = l_Lasm_JS_Wire_encodeIO(v_payload_3283_);
lean_dec(v_payload_3283_);
if (lean_obj_tag(v___x_3335_) == 0)
{
lean_object* v_a_3336_; lean_object* v___x_3338_; 
v_a_3336_ = lean_ctor_get(v___x_3335_, 0);
lean_inc(v_a_3336_);
lean_dec_ref_known(v___x_3335_, 1);
if (v_isShared_3301_ == 0)
{
lean_ctor_set(v___x_3300_, 0, v_a_3336_);
v___x_3338_ = v___x_3300_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_a_3336_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
v_val_3331_ = v___x_3338_;
goto v___jp_3330_;
}
}
else
{
lean_object* v_a_3340_; lean_object* v___x_3342_; 
v_a_3340_ = lean_ctor_get(v___x_3335_, 0);
lean_inc(v_a_3340_);
lean_dec_ref_known(v___x_3335_, 1);
if (v_isShared_3301_ == 0)
{
lean_ctor_set_tag(v___x_3300_, 0);
lean_ctor_set(v___x_3300_, 0, v_a_3340_);
v___x_3342_ = v___x_3300_;
goto v_reusejp_3341_;
}
else
{
lean_object* v_reuseFailAlloc_3343_; 
v_reuseFailAlloc_3343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3343_, 0, v_a_3340_);
v___x_3342_ = v_reuseFailAlloc_3343_;
goto v_reusejp_3341_;
}
v_reusejp_3341_:
{
v_val_3331_ = v___x_3342_;
goto v___jp_3330_;
}
}
v___jp_3330_:
{
lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3332_, 0, v_val_3331_);
v___x_3333_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3303_, v___x_3329_, v___x_3332_, v___f_3328_);
v___x_3334_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3303_, v___x_3329_, v___x_3333_, v___f_3286_);
return v___x_3334_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9___boxed(lean_object* v_failurePrefix_3345_, lean_object* v_op_3346_, lean_object* v_flags_3347_, lean_object* v_payload_3348_, lean_object* v___f_3349_, lean_object* v___f_3350_, lean_object* v___f_3351_, lean_object* v_x_3352_, lean_object* v___y_3353_){
_start:
{
uint32_t v_op_boxed_3354_; uint64_t v_flags_boxed_3355_; lean_object* v_res_3356_; 
v_op_boxed_3354_ = lean_unbox_uint32(v_op_3346_);
lean_dec(v_op_3346_);
v_flags_boxed_3355_ = lean_unbox_uint64(v_flags_3347_);
lean_dec_ref(v_flags_3347_);
v_res_3356_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9(v_failurePrefix_3345_, v_op_boxed_3354_, v_flags_boxed_3355_, v_payload_3348_, v___f_3349_, v___f_3350_, v___f_3351_, v_x_3352_);
lean_dec_ref(v_failurePrefix_3345_);
return v_res_3356_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1(lean_object* v___f_3357_, lean_object* v_bytes_3358_){
_start:
{
lean_object* v___x_3360_; uint8_t v___x_3361_; lean_object* v_val_3363_; lean_object* v___x_3366_; 
v___x_3360_ = lean_unsigned_to_nat(0u);
v___x_3361_ = 0;
v___x_3366_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_3358_);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v_a_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3374_; 
v_a_3367_ = lean_ctor_get(v___x_3366_, 0);
v_isSharedCheck_3374_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3369_ = v___x_3366_;
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_a_3367_);
lean_dec(v___x_3366_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
lean_object* v___x_3372_; 
if (v_isShared_3370_ == 0)
{
lean_ctor_set_tag(v___x_3369_, 1);
v___x_3372_ = v___x_3369_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v_a_3367_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
v_val_3363_ = v___x_3372_;
goto v___jp_3362_;
}
}
}
else
{
lean_object* v_a_3375_; lean_object* v___x_3377_; uint8_t v_isShared_3378_; uint8_t v_isSharedCheck_3382_; 
v_a_3375_ = lean_ctor_get(v___x_3366_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3377_ = v___x_3366_;
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
else
{
lean_inc(v_a_3375_);
lean_dec(v___x_3366_);
v___x_3377_ = lean_box(0);
v_isShared_3378_ = v_isSharedCheck_3382_;
goto v_resetjp_3376_;
}
v_resetjp_3376_:
{
lean_object* v___x_3380_; 
if (v_isShared_3378_ == 0)
{
lean_ctor_set_tag(v___x_3377_, 0);
v___x_3380_ = v___x_3377_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v_a_3375_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
v_val_3363_ = v___x_3380_;
goto v___jp_3362_;
}
}
}
v___jp_3362_:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3364_, 0, v_val_3363_);
v___x_3365_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3360_, v___x_3361_, v___x_3364_, v___f_3357_);
return v___x_3365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1___boxed(lean_object* v___f_3383_, lean_object* v_bytes_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1(v___f_3383_, v_bytes_3384_);
lean_dec_ref(v_bytes_3384_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3(lean_object* v___f_3387_, lean_object* v_x_3388_){
_start:
{
if (lean_obj_tag(v_x_3388_) == 0)
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3398_; 
lean_dec_ref(v___f_3387_);
v_a_3390_ = lean_ctor_get(v_x_3388_, 0);
v_isSharedCheck_3398_ = !lean_is_exclusive(v_x_3388_);
if (v_isSharedCheck_3398_ == 0)
{
v___x_3392_ = v_x_3388_;
v_isShared_3393_ = v_isSharedCheck_3398_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v_x_3388_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3398_;
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
lean_object* v_reuseFailAlloc_3397_; 
v_reuseFailAlloc_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3397_, 0, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3397_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
lean_object* v___x_3396_; 
v___x_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3396_, 0, v___x_3395_);
return v___x_3396_;
}
}
}
else
{
lean_object* v___x_3400_; uint8_t v_isShared_3401_; uint8_t v_isSharedCheck_3410_; 
v_isSharedCheck_3410_ = !lean_is_exclusive(v_x_3388_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v_x_3388_, 0);
lean_dec(v_unused_3411_);
v___x_3400_ = v_x_3388_;
v_isShared_3401_ = v_isSharedCheck_3410_;
goto v_resetjp_3399_;
}
else
{
lean_dec(v_x_3388_);
v___x_3400_ = lean_box(0);
v_isShared_3401_ = v_isSharedCheck_3410_;
goto v_resetjp_3399_;
}
v_resetjp_3399_:
{
lean_object* v___x_3402_; uint8_t v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3406_; 
v___x_3402_ = lean_unsigned_to_nat(0u);
v___x_3403_ = 0;
v___x_3404_ = lean_io_promise_new();
if (v_isShared_3401_ == 0)
{
lean_ctor_set(v___x_3400_, 0, v___x_3404_);
v___x_3406_ = v___x_3400_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v___x_3404_);
v___x_3406_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; 
v___x_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3407_, 0, v___x_3406_);
v___x_3408_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3402_, v___x_3403_, v___x_3407_, v___f_3387_);
return v___x_3408_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3___boxed(lean_object* v___f_3412_, lean_object* v_x_3413_, lean_object* v___y_3414_){
_start:
{
lean_object* v_res_3415_; 
v_res_3415_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3(v___f_3412_, v_x_3413_);
return v_res_3415_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(lean_object* v_context_3416_, uint32_t v_op_3417_, uint64_t v_flags_3418_, lean_object* v_payload_3419_, lean_object* v_failurePrefix_3420_){
_start:
{
lean_object* v___f_3422_; lean_object* v___f_3423_; lean_object* v___f_3424_; lean_object* v___f_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___f_3428_; lean_object* v___f_3429_; lean_object* v___x_3430_; uint8_t v___x_3431_; lean_object* v_val_3433_; lean_object* v___x_3436_; 
v___f_3422_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3422_, 0, v_context_3416_);
v___f_3423_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__1___boxed), 3, 1);
lean_closure_set(v___f_3423_, 0, v___f_3422_);
v___f_3424_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3424_, 0, v___f_3423_);
lean_inc_ref(v_failurePrefix_3420_);
v___f_3425_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_3425_, 0, v_failurePrefix_3420_);
v___x_3426_ = lean_box_uint32(v_op_3417_);
v___x_3427_ = lean_box_uint64(v_flags_3418_);
lean_inc_ref(v___f_3424_);
v___f_3428_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__9___boxed), 9, 7);
lean_closure_set(v___f_3428_, 0, v_failurePrefix_3420_);
lean_closure_set(v___f_3428_, 1, v___x_3426_);
lean_closure_set(v___f_3428_, 2, v___x_3427_);
lean_closure_set(v___f_3428_, 3, v_payload_3419_);
lean_closure_set(v___f_3428_, 4, v___f_3425_);
lean_closure_set(v___f_3428_, 5, v___f_3424_);
lean_closure_set(v___f_3428_, 6, v___f_3424_);
v___f_3429_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3429_, 0, v___f_3428_);
v___x_3430_ = lean_unsigned_to_nat(0u);
v___x_3431_ = 0;
v___x_3436_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_3436_) == 0)
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3444_; 
v_a_3437_ = lean_ctor_get(v___x_3436_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3436_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3439_ = v___x_3436_;
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v___x_3436_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
lean_ctor_set_tag(v___x_3439_, 1);
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_a_3437_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
v_val_3433_ = v___x_3442_;
goto v___jp_3432_;
}
}
}
else
{
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3452_; 
v_a_3445_ = lean_ctor_get(v___x_3436_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3436_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3447_ = v___x_3436_;
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3436_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
if (v_isShared_3448_ == 0)
{
lean_ctor_set_tag(v___x_3447_, 0);
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_a_3445_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
v_val_3433_ = v___x_3450_;
goto v___jp_3432_;
}
}
}
v___jp_3432_:
{
lean_object* v___x_3434_; lean_object* v___x_3435_; 
v___x_3434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3434_, 0, v_val_3433_);
v___x_3435_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3430_, v___x_3431_, v___x_3434_, v___f_3429_);
return v___x_3435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2___boxed(lean_object* v_context_3453_, lean_object* v_op_3454_, lean_object* v_flags_3455_, lean_object* v_payload_3456_, lean_object* v_failurePrefix_3457_, lean_object* v_a_3458_){
_start:
{
uint32_t v_op_boxed_3459_; uint64_t v_flags_boxed_3460_; lean_object* v_res_3461_; 
v_op_boxed_3459_ = lean_unbox_uint32(v_op_3454_);
lean_dec(v_op_3454_);
v_flags_boxed_3460_ = lean_unbox_uint64(v_flags_3455_);
lean_dec_ref(v_flags_3455_);
v_res_3461_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(v_context_3453_, v_op_boxed_3459_, v_flags_boxed_3460_, v_payload_3456_, v_failurePrefix_3457_);
return v_res_3461_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(uint8_t v_await_3462_, uint64_t v_extra_3463_){
_start:
{
uint64_t v___x_3464_; uint64_t v___y_3466_; 
v___x_3464_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Cloudflare_DurableObjectId_name_spec__0___closed__0);
if (v_await_3462_ == 0)
{
uint64_t v___x_3469_; 
v___x_3469_ = 0ULL;
v___y_3466_ = v___x_3469_;
goto v___jp_3465_;
}
else
{
uint64_t v___x_3470_; 
v___x_3470_ = 2ULL;
v___y_3466_ = v___x_3470_;
goto v___jp_3465_;
}
v___jp_3465_:
{
uint64_t v___x_3467_; uint64_t v___x_3468_; 
v___x_3467_ = lean_uint64_lor(v___x_3464_, v___y_3466_);
v___x_3468_ = lean_uint64_lor(v___x_3467_, v_extra_3463_);
return v___x_3468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1___boxed(lean_object* v_await_3471_, lean_object* v_extra_3472_){
_start:
{
uint8_t v_await_boxed_3473_; uint64_t v_extra_boxed_3474_; uint64_t v_res_3475_; lean_object* v_r_3476_; 
v_await_boxed_3473_ = lean_unbox(v_await_3471_);
v_extra_boxed_3474_ = lean_unbox_uint64(v_extra_3472_);
lean_dec_ref(v_extra_3472_);
v_res_3475_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(v_await_boxed_3473_, v_extra_boxed_3474_);
v_r_3476_ = lean_box_uint64(v_res_3475_);
return v_r_3476_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3477_; uint8_t v___x_3478_; uint64_t v___x_3479_; 
v___x_3477_ = 8ULL;
v___x_3478_ = 0;
v___x_3479_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__1(v___x_3478_, v___x_3477_);
return v___x_3479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(lean_object* v_o_3480_, lean_object* v_name_3481_, lean_object* v_args_3482_){
_start:
{
lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; uint32_t v___x_3489_; uint64_t v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3484_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectNamespace___lam__0___closed__0));
v___x_3485_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3485_, 0, v_o_3480_);
lean_ctor_set(v___x_3485_, 1, v___x_3484_);
lean_inc_ref(v_name_3481_);
v___x_3486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3486_, 0, v_name_3481_);
v___x_3487_ = ((lean_object*)(l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0___closed__0));
v___x_3488_ = lean_string_append(v___x_3487_, v_name_3481_);
lean_dec_ref(v_name_3481_);
v___x_3489_ = 205;
v___x_3490_ = lean_uint64_once(&l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0, &l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___closed__0);
v___x_3491_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3491_, 0, v_args_3482_);
v___x_3492_ = lean_unsigned_to_nat(3u);
v___x_3493_ = lean_mk_empty_array_with_capacity(v___x_3492_);
v___x_3494_ = lean_array_push(v___x_3493_, v___x_3485_);
v___x_3495_ = lean_array_push(v___x_3494_, v___x_3486_);
v___x_3496_ = lean_array_push(v___x_3495_, v___x_3491_);
v___x_3497_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
v___x_3498_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1_spec__2(v___x_3488_, v___x_3489_, v___x_3490_, v___x_3497_, v___x_3484_);
return v___x_3498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1___boxed(lean_object* v_o_3499_, lean_object* v_name_3500_, lean_object* v_args_3501_, lean_object* v___y_3502_){
_start:
{
lean_object* v_res_3503_; 
v_res_3503_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_o_3499_, v_name_3500_, v_args_3501_);
return v_res_3503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm(lean_object* v_self_3505_, lean_object* v_options_3506_){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3508_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0));
v___x_3509_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_options_3506_);
v___x_3510_ = lean_unsigned_to_nat(1u);
v___x_3511_ = lean_mk_empty_array_with_capacity(v___x_3510_);
v___x_3512_ = lean_array_push(v___x_3511_, v___x_3509_);
v___x_3513_ = l_Lasm_JS_Web_Support_args(v___x_3512_);
v___x_3514_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_self_3505_, v___x_3508_, v___x_3513_);
return v___x_3514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___boxed(lean_object* v_self_3515_, lean_object* v_options_3516_, lean_object* v_a_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm(v_self_3515_, v_options_3516_);
lean_dec(v_options_3516_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(lean_object* v_x_3519_){
_start:
{
if (lean_obj_tag(v_x_3519_) == 0)
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_box(0);
return v___x_3520_;
}
else
{
lean_object* v_val_3521_; lean_object* v_allowConcurrency_3522_; lean_object* v_allowUnconfirmed_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3540_; 
v_val_3521_ = lean_ctor_get(v_x_3519_, 0);
lean_inc(v_val_3521_);
lean_dec_ref_known(v_x_3519_, 1);
v_allowConcurrency_3522_ = lean_ctor_get(v_val_3521_, 0);
v_allowUnconfirmed_3523_ = lean_ctor_get(v_val_3521_, 1);
v_isSharedCheck_3540_ = !lean_is_exclusive(v_val_3521_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3525_ = v_val_3521_;
v_isShared_3526_ = v_isSharedCheck_3540_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_allowUnconfirmed_3523_);
lean_inc(v_allowConcurrency_3522_);
lean_dec(v_val_3521_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3540_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3530_; 
v___x_3527_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectGetOptions___lam__0___closed__0));
v___x_3528_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowConcurrency_3522_);
lean_dec(v_allowConcurrency_3522_);
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 1, v___x_3528_);
lean_ctor_set(v___x_3525_, 0, v___x_3527_);
v___x_3530_ = v___x_3525_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3527_);
lean_ctor_set(v_reuseFailAlloc_3539_, 1, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; lean_object* v___x_3538_; 
v___x_3531_ = ((lean_object*)(l_Lasm_JS_Cloudflare_instToJSDurableObjectPutOptions___lam__0___closed__0));
v___x_3532_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_allowUnconfirmed_3523_);
lean_dec(v_allowUnconfirmed_3523_);
v___x_3533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3531_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = lean_unsigned_to_nat(2u);
v___x_3535_ = lean_mk_empty_array_with_capacity(v___x_3534_);
v___x_3536_ = lean_array_push(v___x_3535_, v___x_3530_);
v___x_3537_ = lean_array_push(v___x_3536_, v___x_3533_);
v___x_3538_ = l_Lasm_JS_Web_Support_fields(v___x_3537_);
lean_dec_ref(v___x_3537_);
return v___x_3538_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm(lean_object* v_self_3542_, lean_object* v_scheduledTime_3543_, lean_object* v_options_3544_){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3546_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0));
v___x_3547_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3544_);
v___x_3548_ = lean_unsigned_to_nat(2u);
v___x_3549_ = lean_mk_empty_array_with_capacity(v___x_3548_);
v___x_3550_ = lean_array_push(v___x_3549_, v_scheduledTime_3543_);
v___x_3551_ = lean_array_push(v___x_3550_, v___x_3547_);
v___x_3552_ = l_Lasm_JS_Web_Support_args(v___x_3551_);
v___x_3553_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3542_, v___x_3546_, v___x_3552_);
return v___x_3553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___boxed(lean_object* v_self_3554_, lean_object* v_scheduledTime_3555_, lean_object* v_options_3556_, lean_object* v_a_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm(v_self_3554_, v_scheduledTime_3555_, v_options_3556_);
return v_res_3558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm(lean_object* v_self_3560_, lean_object* v_options_3561_){
_start:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v___x_3563_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0));
v___x_3564_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3561_);
v___x_3565_ = lean_unsigned_to_nat(1u);
v___x_3566_ = lean_mk_empty_array_with_capacity(v___x_3565_);
v___x_3567_ = lean_array_push(v___x_3566_, v___x_3564_);
v___x_3568_ = l_Lasm_JS_Web_Support_args(v___x_3567_);
v___x_3569_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3560_, v___x_3563_, v___x_3568_);
return v___x_3569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___boxed(lean_object* v_self_3570_, lean_object* v_options_3571_, lean_object* v_a_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm(v_self_3570_, v_options_3571_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync(lean_object* v_self_3575_){
_start:
{
lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; 
v___x_3577_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___closed__0));
v___x_3578_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3579_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3575_, v___x_3577_, v___x_3578_);
return v___x_3579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_sync___boxed(lean_object* v_self_3580_, lean_object* v_a_3581_){
_start:
{
lean_object* v_res_3582_; 
v_res_3582_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_sync(v_self_3580_);
return v_res_3582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark(lean_object* v_self_3584_){
_start:
{
lean_object* v___x_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3586_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___closed__0));
v___x_3587_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3588_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3584_, v___x_3586_, v___x_3587_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark___boxed(lean_object* v_self_3589_, lean_object* v_a_3590_){
_start:
{
lean_object* v_res_3591_; 
v_res_3591_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getCurrentBookmark(v_self_3589_);
return v_res_3591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime(lean_object* v_self_3593_, lean_object* v_timestamp_3594_){
_start:
{
lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; 
v___x_3596_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___closed__0));
v___x_3597_ = lean_unsigned_to_nat(1u);
v___x_3598_ = lean_mk_empty_array_with_capacity(v___x_3597_);
v___x_3599_ = lean_array_push(v___x_3598_, v_timestamp_3594_);
v___x_3600_ = l_Lasm_JS_Web_Support_args(v___x_3599_);
v___x_3601_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3593_, v___x_3596_, v___x_3600_);
return v___x_3601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime___boxed(lean_object* v_self_3602_, lean_object* v_timestamp_3603_, lean_object* v_a_3604_){
_start:
{
lean_object* v_res_3605_; 
v_res_3605_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_getBookmarkForTime(v_self_3602_, v_timestamp_3603_);
return v_res_3605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark(lean_object* v_self_3607_, lean_object* v_bookmark_3608_){
_start:
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3610_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___closed__0));
v___x_3611_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3611_, 0, v_bookmark_3608_);
v___x_3612_ = lean_unsigned_to_nat(1u);
v___x_3613_ = lean_mk_empty_array_with_capacity(v___x_3612_);
v___x_3614_ = lean_array_push(v___x_3613_, v___x_3611_);
v___x_3615_ = l_Lasm_JS_Web_Support_args(v___x_3614_);
v___x_3616_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_text_spec__0(v_self_3607_, v___x_3610_, v___x_3615_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark___boxed(lean_object* v_self_3617_, lean_object* v_bookmark_3618_, lean_object* v_a_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lasm_JS_Cloudflare_DurableObjectStorage_onNextSessionRestoreBookmark(v_self_3617_, v_bookmark_3618_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get(lean_object* v_self_3621_, lean_object* v_key_3622_, lean_object* v_options_3623_){
_start:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3625_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v___x_3626_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3626_, 0, v_key_3622_);
v___x_3627_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_3623_);
v___x_3628_ = lean_unsigned_to_nat(2u);
v___x_3629_ = lean_mk_empty_array_with_capacity(v___x_3628_);
v___x_3630_ = lean_array_push(v___x_3629_, v___x_3626_);
v___x_3631_ = lean_array_push(v___x_3630_, v___x_3627_);
v___x_3632_ = l_Lasm_JS_Web_Support_args(v___x_3631_);
v___x_3633_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Request_json_spec__0(v_self_3621_, v___x_3625_, v___x_3632_);
return v___x_3633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_get___boxed(lean_object* v_self_3634_, lean_object* v_key_3635_, lean_object* v_options_3636_, lean_object* v_a_3637_){
_start:
{
lean_object* v_res_3638_; 
v_res_3638_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_get(v_self_3634_, v_key_3635_, v_options_3636_);
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys(lean_object* v_self_3639_, lean_object* v_keys_3640_, lean_object* v_options_3641_){
_start:
{
lean_object* v___f_3643_; lean_object* v___x_3644_; size_t v_sz_3645_; size_t v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; uint8_t v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___f_3643_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectNamespace_get___closed__0));
v_sz_3645_ = lean_array_size(v_keys_3640_);
v___x_3646_ = ((size_t)0ULL);
v___x_3647_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3645_, v___x_3646_, v_keys_3640_);
v___x_3648_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3648_, 0, v___x_3647_);
v___x_3649_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_get_spec__0(v_options_3641_);
v___x_3650_ = lean_unsigned_to_nat(2u);
v___x_3651_ = lean_mk_empty_array_with_capacity(v___x_3650_);
v___x_3652_ = lean_array_push(v___x_3651_, v___x_3648_);
v___x_3653_ = lean_array_push(v___x_3652_, v___x_3649_);
v___x_3654_ = l_Lasm_JS_Web_Support_args(v___x_3653_);
v___x_3655_ = lean_unsigned_to_nat(0u);
v___x_3656_ = 0;
v___x_3657_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3639_, v___x_3644_, v___x_3654_);
v___x_3658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3655_, v___x_3656_, v___x_3657_, v___f_3643_);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys___boxed(lean_object* v_self_3659_, lean_object* v_keys_3660_, lean_object* v_options_3661_, lean_object* v_a_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_getWithKeys(v_self_3659_, v_keys_3660_, v_options_3661_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list(lean_object* v_self_3664_, lean_object* v_options_3665_){
_start:
{
lean_object* v___f_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; uint8_t v___x_3675_; lean_object* v___x_3676_; lean_object* v___x_3677_; 
v___f_3667_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getWithKeys___closed__0));
v___x_3668_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_list___closed__0));
v___x_3669_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_list_spec__0(v_options_3665_);
v___x_3670_ = lean_unsigned_to_nat(1u);
v___x_3671_ = lean_mk_empty_array_with_capacity(v___x_3670_);
v___x_3672_ = lean_array_push(v___x_3671_, v___x_3669_);
v___x_3673_ = l_Lasm_JS_Web_Support_args(v___x_3672_);
v___x_3674_ = lean_unsigned_to_nat(0u);
v___x_3675_ = 0;
v___x_3676_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_3664_, v___x_3668_, v___x_3673_);
v___x_3677_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3674_, v___x_3675_, v___x_3676_, v___f_3667_);
return v___x_3677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_list___boxed(lean_object* v_self_3678_, lean_object* v_options_3679_, lean_object* v_a_3680_){
_start:
{
lean_object* v_res_3681_; 
v_res_3681_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_list(v_self_3678_, v_options_3679_);
return v_res_3681_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put(lean_object* v_self_3682_, lean_object* v_key_3683_, lean_object* v_value_3684_, lean_object* v_options_3685_){
_start:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; 
v___x_3687_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v___x_3688_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3688_, 0, v_key_3683_);
v___x_3689_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3685_);
v___x_3690_ = lean_unsigned_to_nat(3u);
v___x_3691_ = lean_mk_empty_array_with_capacity(v___x_3690_);
v___x_3692_ = lean_array_push(v___x_3691_, v___x_3688_);
v___x_3693_ = lean_array_push(v___x_3692_, v_value_3684_);
v___x_3694_ = lean_array_push(v___x_3693_, v___x_3689_);
v___x_3695_ = l_Lasm_JS_Web_Support_args(v___x_3694_);
v___x_3696_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3682_, v___x_3687_, v___x_3695_);
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_put___boxed(lean_object* v_self_3697_, lean_object* v_key_3698_, lean_object* v_value_3699_, lean_object* v_options_3700_, lean_object* v_a_3701_){
_start:
{
lean_object* v_res_3702_; 
v_res_3702_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_put(v_self_3697_, v_key_3698_, v_value_3699_, v_options_3700_);
lean_dec(v_options_3700_);
return v_res_3702_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries(lean_object* v_self_3703_, lean_object* v_entries_3704_, lean_object* v_options_3705_){
_start:
{
lean_object* v___x_3707_; size_t v_sz_3708_; size_t v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; lean_object* v___x_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3707_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_put___closed__0));
v_sz_3708_ = lean_array_size(v_entries_3704_);
v___x_3709_ = ((size_t)0ULL);
v___x_3710_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Cloudflare_DurableObjectStorage_putWithEntries_spec__0(v_sz_3708_, v___x_3709_, v_entries_3704_);
v___x_3711_ = lean_alloc_ctor(8, 1, 0);
lean_ctor_set(v___x_3711_, 0, v___x_3710_);
v___x_3712_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3705_);
v___x_3713_ = lean_unsigned_to_nat(2u);
v___x_3714_ = lean_mk_empty_array_with_capacity(v___x_3713_);
v___x_3715_ = lean_array_push(v___x_3714_, v___x_3711_);
v___x_3716_ = lean_array_push(v___x_3715_, v___x_3712_);
v___x_3717_ = l_Lasm_JS_Web_Support_args(v___x_3716_);
v___x_3718_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3703_, v___x_3707_, v___x_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries___boxed(lean_object* v_self_3719_, lean_object* v_entries_3720_, lean_object* v_options_3721_, lean_object* v_a_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_putWithEntries(v_self_3719_, v_entries_3720_, v_options_3721_);
lean_dec(v_options_3721_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete(lean_object* v_self_3724_, lean_object* v_key_3725_, lean_object* v_options_3726_){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3728_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v___x_3729_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3729_, 0, v_key_3725_);
v___x_3730_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3726_);
v___x_3731_ = lean_unsigned_to_nat(2u);
v___x_3732_ = lean_mk_empty_array_with_capacity(v___x_3731_);
v___x_3733_ = lean_array_push(v___x_3732_, v___x_3729_);
v___x_3734_ = lean_array_push(v___x_3733_, v___x_3730_);
v___x_3735_ = l_Lasm_JS_Web_Support_args(v___x_3734_);
v___x_3736_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_Cache_delete_spec__1(v_self_3724_, v___x_3728_, v___x_3735_);
return v___x_3736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete___boxed(lean_object* v_self_3737_, lean_object* v_key_3738_, lean_object* v_options_3739_, lean_object* v_a_3740_){
_start:
{
lean_object* v_res_3741_; 
v_res_3741_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_delete(v_self_3737_, v_key_3738_, v_options_3739_);
lean_dec(v_options_3739_);
return v_res_3741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys(lean_object* v_self_3742_, lean_object* v_keys_3743_, lean_object* v_options_3744_){
_start:
{
lean_object* v___x_3746_; size_t v_sz_3747_; size_t v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; 
v___x_3746_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_delete___closed__0));
v_sz_3747_ = lean_array_size(v_keys_3743_);
v___x_3748_ = ((size_t)0ULL);
v___x_3749_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_URLSearchParams_new_spec__0_spec__0(v_sz_3747_, v___x_3748_, v_keys_3743_);
v___x_3750_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_3750_, 0, v___x_3749_);
v___x_3751_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_put_spec__0(v_options_3744_);
v___x_3752_ = lean_unsigned_to_nat(2u);
v___x_3753_ = lean_mk_empty_array_with_capacity(v___x_3752_);
v___x_3754_ = lean_array_push(v___x_3753_, v___x_3750_);
v___x_3755_ = lean_array_push(v___x_3754_, v___x_3751_);
v___x_3756_ = l_Lasm_JS_Web_Support_args(v___x_3755_);
v___x_3757_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_deleteWithKeys_spec__0(v_self_3742_, v___x_3746_, v___x_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys___boxed(lean_object* v_self_3758_, lean_object* v_keys_3759_, lean_object* v_options_3760_, lean_object* v_a_3761_){
_start:
{
lean_object* v_res_3762_; 
v_res_3762_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteWithKeys(v_self_3758_, v_keys_3759_, v_options_3760_);
lean_dec(v_options_3760_);
return v_res_3762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback(lean_object* v_self_3764_){
_start:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; 
v___x_3766_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___closed__0));
v___x_3767_ = lean_obj_once(&l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2, &l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2_once, _init_l_Lasm_JS_Cloudflare_DurableObjectId_toString___closed__2);
v___x_3768_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_3764_, v___x_3766_, v___x_3767_);
return v___x_3768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback___boxed(lean_object* v_self_3769_, lean_object* v_a_3770_){
_start:
{
lean_object* v_res_3771_; 
v_res_3771_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_rollback(v_self_3769_);
return v_res_3771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm(lean_object* v_self_3772_, lean_object* v_options_3773_){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3775_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm___closed__0));
v___x_3776_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__0(v_options_3773_);
v___x_3777_ = lean_unsigned_to_nat(1u);
v___x_3778_ = lean_mk_empty_array_with_capacity(v___x_3777_);
v___x_3779_ = lean_array_push(v___x_3778_, v___x_3776_);
v___x_3780_ = l_Lasm_JS_Web_Support_args(v___x_3779_);
v___x_3781_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Cloudflare_DurableObjectStorage_getAlarm_spec__1(v_self_3772_, v___x_3775_, v___x_3780_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm___boxed(lean_object* v_self_3782_, lean_object* v_options_3783_, lean_object* v_a_3784_){
_start:
{
lean_object* v_res_3785_; 
v_res_3785_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_getAlarm(v_self_3782_, v_options_3783_);
lean_dec(v_options_3783_);
return v_res_3785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm(lean_object* v_self_3786_, lean_object* v_scheduledTime_3787_, lean_object* v_options_3788_){
_start:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; 
v___x_3790_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm___closed__0));
v___x_3791_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3788_);
v___x_3792_ = lean_unsigned_to_nat(2u);
v___x_3793_ = lean_mk_empty_array_with_capacity(v___x_3792_);
v___x_3794_ = lean_array_push(v___x_3793_, v_scheduledTime_3787_);
v___x_3795_ = lean_array_push(v___x_3794_, v___x_3791_);
v___x_3796_ = l_Lasm_JS_Web_Support_args(v___x_3795_);
v___x_3797_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3786_, v___x_3790_, v___x_3796_);
return v___x_3797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm___boxed(lean_object* v_self_3798_, lean_object* v_scheduledTime_3799_, lean_object* v_options_3800_, lean_object* v_a_3801_){
_start:
{
lean_object* v_res_3802_; 
v_res_3802_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_setAlarm(v_self_3798_, v_scheduledTime_3799_, v_options_3800_);
return v_res_3802_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm(lean_object* v_self_3803_, lean_object* v_options_3804_){
_start:
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; 
v___x_3806_ = ((lean_object*)(l_Lasm_JS_Cloudflare_DurableObjectStorage_deleteAlarm___closed__0));
v___x_3807_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Cloudflare_DurableObjectStorage_setAlarm_spec__0(v_options_3804_);
v___x_3808_ = lean_unsigned_to_nat(1u);
v___x_3809_ = lean_mk_empty_array_with_capacity(v___x_3808_);
v___x_3810_ = lean_array_push(v___x_3809_, v___x_3807_);
v___x_3811_ = l_Lasm_JS_Web_Support_args(v___x_3810_);
v___x_3812_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_3803_, v___x_3806_, v___x_3811_);
return v___x_3812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm___boxed(lean_object* v_self_3813_, lean_object* v_options_3814_, lean_object* v_a_3815_){
_start:
{
lean_object* v_res_3816_; 
v_res_3816_ = l_Lasm_JS_Cloudflare_DurableObjectTransaction_deleteAlarm(v_self_3813_, v_options_3814_);
return v_res_3816_;
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
