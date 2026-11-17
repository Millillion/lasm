// Lean compiler output
// Module: Lasm.JS.Node.Process
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support public import Lasm.JS.Web.Streams public import Lasm.JS.Web.Url public import Lasm.JS.Node.Events public import Lasm.JS.Node.Buffer public import Lasm.JS.Node.Net
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
lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_fromWithObject_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_net_BlockList_PRIVATE__RANGES_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSReadableStream___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ctor"};
static const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "detail"};
static const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSReadableStream___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__1_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSNetServerOrSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSNetServerOrSocket___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket = (const lean_object*)&l_Lasm_JS_Node_instToJSNetServerOrSocket___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket = (const lean_object*)&l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket = (const lean_object*)&l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "keepOpen"};
static const lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSProcessSendOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessSendOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Node_instToJSProcessSendOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSProcessSendOptions___closed__0_value)} };
static const lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessSendOptions___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions = (const lean_object*)&l_Lasm_JS_Node_instToJSProcessSendOptions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSBooleanOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSBooleanOrDOMString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSBooleanOrDOMString___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSBooleanOrDOMString___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSBooleanOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSBooleanOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.BooleanOrDOMString"};
static const lean_object* l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSBooleanOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSObjectOrJSFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSObjectOrJSFunction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instToJSObjectOrJSFunction___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction = (const lean_object*)&l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "node:process"};
static const lean_object* l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "allowedNodeEnvironmentFlags"};
static const lean_object* l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_arch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "arch"};
static const lean_object* l_Lasm_JS_Node_process_arch___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_arch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_arch___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_arch___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_argv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "argv"};
static const lean_object* l_Lasm_JS_Node_process_argv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_argv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_argv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_argv___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_argv___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_argv___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_argv0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "argv0"};
static const lean_object* l_Lasm_JS_Node_process_argv0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_argv0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_argv0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_argv0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_argv0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_argv0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv0();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_channel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "channel"};
static const lean_object* l_Lasm_JS_Node_process_channel___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_channel___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_channel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_channel___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_channel___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_channel___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* l_Lasm_JS_Node_process_config___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_config___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_config___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_config___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_config___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_config___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_config();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_config___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_connected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "connected"};
static const lean_object* l_Lasm_JS_Node_process_connected___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_connected___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_connected___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_connected___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_connected___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_connected___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_connected();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_connected___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_debugPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "debugPort"};
static const lean_object* l_Lasm_JS_Node_process_debugPort___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_debugPort___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_debugPort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_debugPort___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_debugPort___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_debugPort___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debugPort();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debugPort___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Node.Support.recordOf"};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Object.entries"};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__1_value),((lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Node_process_env___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_env___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_env___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_env___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_env___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_env___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_execArgv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execArgv"};
static const lean_object* l_Lasm_JS_Node_process_execArgv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_execArgv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_execArgv___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_execPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execPath"};
static const lean_object* l_Lasm_JS_Node_process_execPath___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_execPath___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_execPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_execPath___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_execPath___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_execPath___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Option (Lasm.JS.Node.LongLongOrDOMString)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_exitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exitCode"};
static const lean_object* l_Lasm_JS_Node_process_exitCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_exitCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_exitCode___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_cached__builtins___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "cached_builtins"};
static const lean_object* l_Lasm_JS_Node_process_cached__builtins___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_cached__builtins___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_cached__builtins___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_cached__builtins___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_cached__builtins___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_cached__builtins___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cached__builtins();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cached__builtins___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_debug___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_Lasm_JS_Node_process_debug___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_debug___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_debug___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_debug___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_debug___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_debug___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debug();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debug___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_inspector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "inspector"};
static const lean_object* l_Lasm_JS_Node_process_inspector___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_inspector___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_inspector___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_inspector___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_inspector___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_inspector___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_inspector();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_inspector___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_ipv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ipv6"};
static const lean_object* l_Lasm_JS_Node_process_ipv6___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_ipv6___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_ipv6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_ipv6___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_ipv6___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_ipv6___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ipv6();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ipv6___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_require__module___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "require_module"};
static const lean_object* l_Lasm_JS_Node_process_require__module___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_require__module___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_require__module___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_require__module___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_require__module___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_require__module___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_require__module();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_require__module___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_tls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tls"};
static const lean_object* l_Lasm_JS_Node_process_tls___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_tls___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_tls___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_tls___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_tls___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_tls___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_tls__alpn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tls_alpn"};
static const lean_object* l_Lasm_JS_Node_process_tls__alpn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_tls__alpn___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_tls__alpn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_tls__alpn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_tls__alpn___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_tls__alpn___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__alpn();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__alpn___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_tls__ocsp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "tls_ocsp"};
static const lean_object* l_Lasm_JS_Node_process_tls__ocsp___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_tls__ocsp___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_tls__ocsp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_tls__ocsp___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_tls__ocsp___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_tls__ocsp___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__ocsp();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__ocsp___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_tls__sni___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "tls_sni"};
static const lean_object* l_Lasm_JS_Node_process_tls__sni___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_tls__sni___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_tls__sni___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_tls__sni___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_tls__sni___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_tls__sni___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__sni();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__sni___boxed(lean_object*);
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_typescript___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "typescript"};
static const lean_object* l_Lasm_JS_Node_process_typescript___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_typescript___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_typescript___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_typescript___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_typescript___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_typescript___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_typescript();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_typescript___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_uv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "uv"};
static const lean_object* l_Lasm_JS_Node_process_uv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_uv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_uv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_uv___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_uv___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_uv___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uv___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_mainModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mainModule"};
static const lean_object* l_Lasm_JS_Node_process_mainModule___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_mainModule___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_mainModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_mainModule___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_mainModule___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_mainModule___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_mainModule();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_mainModule___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_noDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "noDeprecation"};
static const lean_object* l_Lasm_JS_Node_process_noDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_noDeprecation___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_noDeprecation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_noDeprecation___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_noDeprecation___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_noDeprecation___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_noDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_noDeprecation___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_permission___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "permission"};
static const lean_object* l_Lasm_JS_Node_process_permission___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_permission___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_permission___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_permission___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_permission___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_permission___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pid"};
static const lean_object* l_Lasm_JS_Node_process_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_pid___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_pid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_pid___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_pid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_pid___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_platform___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "platform"};
static const lean_object* l_Lasm_JS_Node_process_platform___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_platform___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_platform___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_platform___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_platform___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_platform___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_ppid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ppid"};
static const lean_object* l_Lasm_JS_Node_process_ppid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_ppid___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_ppid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_ppid___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_ppid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_ppid___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_release___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "release"};
static const lean_object* l_Lasm_JS_Node_process_release___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_release___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_release___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_release___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_release___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_release___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_release();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_release___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "report"};
static const lean_object* l_Lasm_JS_Node_process_report___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_sourceMapsEnabled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "sourceMapsEnabled"};
static const lean_object* l_Lasm_JS_Node_process_sourceMapsEnabled___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_sourceMapsEnabled___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_sourceMapsEnabled___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_sourceMapsEnabled___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_sourceMapsEnabled___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_sourceMapsEnabled___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_sourceMapsEnabled();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_sourceMapsEnabled___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_stderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stderr"};
static const lean_object* l_Lasm_JS_Node_process_stderr___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_stderr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_stderr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_stderr___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_stderr___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_stderr___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stderr();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stderr___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_stdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stdin"};
static const lean_object* l_Lasm_JS_Node_process_stdin___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_stdin___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_stdin___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_stdin___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_stdin___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_stdin___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdin();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdin___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_stdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stdout"};
static const lean_object* l_Lasm_JS_Node_process_stdout___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_stdout___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_stdout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_stdout___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_stdout___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_stdout___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdout();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdout___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_throwDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "throwDeprecation"};
static const lean_object* l_Lasm_JS_Node_process_throwDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_throwDeprecation___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_throwDeprecation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_throwDeprecation___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_throwDeprecation___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_throwDeprecation___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_throwDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_throwDeprecation___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_title___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lasm_JS_Node_process_title___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_title___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_title___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_title___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_title___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_title___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_traceDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "traceDeprecation"};
static const lean_object* l_Lasm_JS_Node_process_traceDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_traceDeprecation___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_traceDeprecation___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_traceDeprecation___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_traceDeprecation___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_traceDeprecation___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceDeprecation___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_traceProcessWarnings___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "traceProcessWarnings"};
static const lean_object* l_Lasm_JS_Node_process_traceProcessWarnings___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_traceProcessWarnings___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_traceProcessWarnings___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_traceProcessWarnings___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_traceProcessWarnings___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_traceProcessWarnings___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceProcessWarnings();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceProcessWarnings___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lasm_JS_Node_process_version___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_version___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_version___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_version___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_version___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_version___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_versions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "versions"};
static const lean_object* l_Lasm_JS_Node_process_versions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_versions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_versions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_versions___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_versions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_versions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.process.abort"};
static const lean_object* l_Lasm_JS_Node_process_abort___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_abort___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_abort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_JS_Node_process_abort___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_abort___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_abort___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_abort___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_abort___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_abort___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_abort___closed__2_value;
static const lean_array_object l_Lasm_JS_Node_process_abort___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_process_abort___closed__3 = (const lean_object*)&l_Lasm_JS_Node_process_abort___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Node_process_abort___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_process_abort___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_abort();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_abort___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_availableMemory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Node.process.availableMemory"};
static const lean_object* l_Lasm_JS_Node_process_availableMemory___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_availableMemory___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_availableMemory___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "availableMemory"};
static const lean_object* l_Lasm_JS_Node_process_availableMemory___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_availableMemory___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_availableMemory___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_availableMemory___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_availableMemory___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_availableMemory___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_availableMemory___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_availableMemory();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_availableMemory___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_chdir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.process.chdir"};
static const lean_object* l_Lasm_JS_Node_process_chdir___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_chdir___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_chdir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "chdir"};
static const lean_object* l_Lasm_JS_Node_process_chdir___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_chdir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_chdir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_chdir___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_chdir___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_chdir___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_chdir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_constrainedMemory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Node.process.constrainedMemory"};
static const lean_object* l_Lasm_JS_Node_process_constrainedMemory___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_constrainedMemory___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_constrainedMemory___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "constrainedMemory"};
static const lean_object* l_Lasm_JS_Node_process_constrainedMemory___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_constrainedMemory___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_constrainedMemory___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_constrainedMemory___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_constrainedMemory___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_constrainedMemory___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_constrainedMemory___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_constrainedMemory();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_constrainedMemory___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_cpuUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Node.process.cpuUsage"};
static const lean_object* l_Lasm_JS_Node_process_cpuUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_cpuUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_cpuUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "cpuUsage"};
static const lean_object* l_Lasm_JS_Node_process_cpuUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_cpuUsage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_cpuUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_cpuUsage___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_cpuUsage___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_cpuUsage___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_cpuUsage___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cpuUsage(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cpuUsage___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_cwd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.process.cwd"};
static const lean_object* l_Lasm_JS_Node_process_cwd___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_cwd___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_cwd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cwd"};
static const lean_object* l_Lasm_JS_Node_process_cwd___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_cwd___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_cwd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_cwd___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_cwd___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_cwd___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_cwd___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_disconnect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.process.disconnect"};
static const lean_object* l_Lasm_JS_Node_process_disconnect___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_disconnect___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_disconnect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "disconnect"};
static const lean_object* l_Lasm_JS_Node_process_disconnect___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_disconnect___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_disconnect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_disconnect___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_disconnect___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_disconnect___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_disconnect___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_disconnect();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_disconnect___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_dlopen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.dlopen"};
static const lean_object* l_Lasm_JS_Node_process_dlopen___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_dlopen___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_dlopen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dlopen"};
static const lean_object* l_Lasm_JS_Node_process_dlopen___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_dlopen___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_dlopen___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_dlopen___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_dlopen___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_dlopen___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_dlopen___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_dlopen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_dlopen___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_emitWarning_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_emitWarning___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.process.emitWarning"};
static const lean_object* l_Lasm_JS_Node_process_emitWarning___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_emitWarning___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_emitWarning___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "emitWarning"};
static const lean_object* l_Lasm_JS_Node_process_emitWarning___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_emitWarning___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_emitWarning___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_emitWarning___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_emitWarning___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_emitWarning___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_emitWarning___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarning(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarning___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_emitWarningWithType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lasm.JS.Node.process.emitWarningWithType"};
static const lean_object* l_Lasm_JS_Node_process_emitWarningWithType___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_emitWarningWithType___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_emitWarningWithType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_emitWarningWithType___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_emitWarning___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_emitWarningWithType___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_emitWarningWithType___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarningWithType(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarningWithType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_execve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.execve"};
static const lean_object* l_Lasm_JS_Node_process_execve___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_execve___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_execve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "execve"};
static const lean_object* l_Lasm_JS_Node_process_execve___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_execve___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_execve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_execve___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_execve___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_execve___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_execve___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execve(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execve___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_exit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.process.exit"};
static const lean_object* l_Lasm_JS_Node_process_exit___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_exit___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_exit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l_Lasm_JS_Node_process_exit___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_exit___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_exit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_exit___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_exit___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_exit___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_exit___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Lasm.JS.Node.process.getActiveResourcesInfo"};
static const lean_object* l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "getActiveResourcesInfo"};
static const lean_object* l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getActiveResourcesInfo();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getActiveResourcesInfo___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_getBuiltinModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Node.process.getBuiltinModule"};
static const lean_object* l_Lasm_JS_Node_process_getBuiltinModule___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_getBuiltinModule___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_getBuiltinModule___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "getBuiltinModule"};
static const lean_object* l_Lasm_JS_Node_process_getBuiltinModule___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_getBuiltinModule___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_getBuiltinModule___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_getBuiltinModule___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_getBuiltinModule___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_getBuiltinModule___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_getBuiltinModule___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getBuiltinModule(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getBuiltinModule___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_getegid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.process.getegid"};
static const lean_object* l_Lasm_JS_Node_process_getegid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_getegid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_getegid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "getegid"};
static const lean_object* l_Lasm_JS_Node_process_getegid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_getegid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_getegid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_getegid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_getegid___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_getegid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_getegid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getegid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getegid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_geteuid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.process.geteuid"};
static const lean_object* l_Lasm_JS_Node_process_geteuid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_geteuid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_geteuid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "geteuid"};
static const lean_object* l_Lasm_JS_Node_process_geteuid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_geteuid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_geteuid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_geteuid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_geteuid___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_geteuid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_geteuid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_geteuid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_geteuid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_getgid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.getgid"};
static const lean_object* l_Lasm_JS_Node_process_getgid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_getgid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_getgid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "getgid"};
static const lean_object* l_Lasm_JS_Node_process_getgid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_getgid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_getgid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_getgid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_getgid___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_getgid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_getgid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgid___boxed(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__11_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Array (Int)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "an element is not Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_getgroups___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.process.getgroups"};
static const lean_object* l_Lasm_JS_Node_process_getgroups___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_getgroups___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_getgroups___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "getgroups"};
static const lean_object* l_Lasm_JS_Node_process_getgroups___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_getgroups___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_getgroups___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_getgroups___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_getgroups___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_getgroups___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_getgroups___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgroups();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgroups___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_getuid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.getuid"};
static const lean_object* l_Lasm_JS_Node_process_getuid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_getuid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_getuid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "getuid"};
static const lean_object* l_Lasm_JS_Node_process_getuid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_getuid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_getuid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_getuid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_getuid___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_getuid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_getuid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getuid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getuid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lasm.JS.Node.process.hasUncaughtExceptionCaptureCallback"};
static const lean_object* l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "hasUncaughtExceptionCaptureCallback"};
static const lean_object* l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_hrtime_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_hrtime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.hrtime"};
static const lean_object* l_Lasm_JS_Node_process_hrtime___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_hrtime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hrtime"};
static const lean_object* l_Lasm_JS_Node_process_hrtime___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_initgroups___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Node.process.initgroups"};
static const lean_object* l_Lasm_JS_Node_process_initgroups___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_initgroups___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_initgroups___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "initgroups"};
static const lean_object* l_Lasm_JS_Node_process_initgroups___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_initgroups___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_initgroups___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_initgroups___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_initgroups___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_initgroups___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_initgroups___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_initgroups(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_initgroups___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_kill___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.process.kill"};
static const lean_object* l_Lasm_JS_Node_process_kill___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_kill___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_kill___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kill"};
static const lean_object* l_Lasm_JS_Node_process_kill___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_kill___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_kill___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_kill___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_kill___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_kill___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_kill___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_loadEnvFile___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.process.loadEnvFile"};
static const lean_object* l_Lasm_JS_Node_process_loadEnvFile___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_loadEnvFile___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_loadEnvFile___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "loadEnvFile"};
static const lean_object* l_Lasm_JS_Node_process_loadEnvFile___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_loadEnvFile___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_loadEnvFile___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_loadEnvFile___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_loadEnvFile___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_loadEnvFile___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_loadEnvFile___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_loadEnvFile(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_loadEnvFile___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_memoryUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.process.memoryUsage"};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_memoryUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "memoryUsage"};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_nextTick___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Node.process.nextTick"};
static const lean_object* l_Lasm_JS_Node_process_nextTick___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_nextTick___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_nextTick___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "nextTick"};
static const lean_object* l_Lasm_JS_Node_process_nextTick___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_nextTick___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_nextTick___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_nextTick___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_nextTick___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_nextTick___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_nextTick___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_nextTick(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_nextTick___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_ref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.process.ref"};
static const lean_object* l_Lasm_JS_Node_process_ref___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_ref___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_ref___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lasm_JS_Node_process_ref___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_ref___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_ref___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_ref___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_ref___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_ref___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_ref___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ref___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_resourceUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.process.resourceUsage"};
static const lean_object* l_Lasm_JS_Node_process_resourceUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_resourceUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_resourceUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "resourceUsage"};
static const lean_object* l_Lasm_JS_Node_process_resourceUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_resourceUsage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_resourceUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_resourceUsage___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_resourceUsage___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_resourceUsage___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_resourceUsage___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_resourceUsage();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_resourceUsage___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__1___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.process.send"};
static const lean_object* l_Lasm_JS_Node_process_send___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_send___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_send___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "send"};
static const lean_object* l_Lasm_JS_Node_process_send___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_send___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_send___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_send___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_send___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_send___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_send___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_setegid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.process.setegid"};
static const lean_object* l_Lasm_JS_Node_process_setegid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_setegid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_setegid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "setegid"};
static const lean_object* l_Lasm_JS_Node_process_setegid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_setegid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_setegid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_setegid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_setegid___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_setegid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_setegid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setegid(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setegid___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_seteuid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node.process.seteuid"};
static const lean_object* l_Lasm_JS_Node_process_seteuid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_seteuid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_seteuid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "seteuid"};
static const lean_object* l_Lasm_JS_Node_process_seteuid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_seteuid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_seteuid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_seteuid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_seteuid___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_seteuid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_seteuid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_seteuid(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_seteuid___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_setgid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.setgid"};
static const lean_object* l_Lasm_JS_Node_process_setgid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_setgid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_setgid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "setgid"};
static const lean_object* l_Lasm_JS_Node_process_setgid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_setgid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_setgid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_setgid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_setgid___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_setgid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_setgid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgid(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgid___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_setgroups___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.process.setgroups"};
static const lean_object* l_Lasm_JS_Node_process_setgroups___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_setgroups___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_setgroups___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "setgroups"};
static const lean_object* l_Lasm_JS_Node_process_setgroups___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_setgroups___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_setgroups___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_setgroups___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_setgroups___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_setgroups___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_setgroups___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgroups(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgroups___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_setuid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.setuid"};
static const lean_object* l_Lasm_JS_Node_process_setuid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_setuid___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_setuid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "setuid"};
static const lean_object* l_Lasm_JS_Node_process_setuid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_setuid___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_setuid___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_setuid___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_setuid___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_setuid___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_setuid___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setuid(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setuid___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Node.process.setSourceMapsEnabled"};
static const lean_object* l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "setSourceMapsEnabled"};
static const lean_object* l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setSourceMapsEnabled(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setSourceMapsEnabled___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lasm.JS.Node.process.setUncaughtExceptionCaptureCallback"};
static const lean_object* l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "setUncaughtExceptionCaptureCallback"};
static const lean_object* l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_threadCpuUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.process.threadCpuUsage"};
static const lean_object* l_Lasm_JS_Node_process_threadCpuUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_threadCpuUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_threadCpuUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "threadCpuUsage"};
static const lean_object* l_Lasm_JS_Node_process_threadCpuUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_threadCpuUsage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_threadCpuUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_threadCpuUsage___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_threadCpuUsage___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_threadCpuUsage___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_threadCpuUsage___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_threadCpuUsage(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_threadCpuUsage___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_umask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.process.umask"};
static const lean_object* l_Lasm_JS_Node_process_umask___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_umask___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_umask___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "umask"};
static const lean_object* l_Lasm_JS_Node_process_umask___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_umask___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_umask___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_umask___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_umask___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_umask___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_umask___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umask();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umask___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_umaskWithMask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.process.umaskWithMask"};
static const lean_object* l_Lasm_JS_Node_process_umaskWithMask___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_umaskWithMask___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_umaskWithMask___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_umaskWithMask___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_umask___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_umaskWithMask___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_umaskWithMask___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umaskWithMask(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umaskWithMask___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_unref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.process.unref"};
static const lean_object* l_Lasm_JS_Node_process_unref___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_unref___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_unref___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unref"};
static const lean_object* l_Lasm_JS_Node_process_unref___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_unref___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_unref___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_unref___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_unref___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_unref___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_unref___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_unref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_unref___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_uptime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.uptime"};
static const lean_object* l_Lasm_JS_Node_process_uptime___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_uptime___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_uptime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "uptime"};
static const lean_object* l_Lasm_JS_Node_process_uptime___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_uptime___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_uptime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_uptime___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_uptime___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_uptime___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_uptime___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Lasm.JS.Node.process.addUncaughtExceptionCaptureCallback"};
static const lean_object* l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "addUncaughtExceptionCaptureCallback"};
static const lean_object* l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "finalization"};
static const lean_object* l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__2_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_arch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_arch___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_arch___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_arch();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_arch___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_argv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_argv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_argv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_argv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_argv0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_argv0___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_argv0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_argv0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv0();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv0___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_channel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_channel___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_channel___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_channel___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_channel();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_channel___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_config___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_config___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_config___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_config();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_config___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_connected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_connected___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_connected___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_connected___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_connected();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_connected___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_debugPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_debugPort___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_debugPort___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_debugPort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debugPort();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debugPort___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_env___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_env___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_env___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_env();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_env___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_execArgv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_execArgv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_execArgv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execArgv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execArgv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_execPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_execPath___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_execPath___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_execPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execPath();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execPath___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_exitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_exitCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_exitCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_exitCode();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_exitCode___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_cached__builtins___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_cached__builtins___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_cached__builtins___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_cached__builtins___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_cached__builtins();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_cached__builtins___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_debug___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_debug___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_debug___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_debug___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debug();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debug___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_inspector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_inspector___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_inspector___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_inspector___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_inspector();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_inspector___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_ipv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_ipv6___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_ipv6___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_ipv6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ipv6();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ipv6___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_require__module___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_require__module___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_require__module___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_require__module___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_require__module();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_require__module___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_tls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_tls___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_tls___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_tls___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_tls__alpn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_tls__alpn___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_tls__alpn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_tls__alpn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__alpn();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__alpn___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_tls__ocsp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_tls__ocsp___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_tls__ocsp___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_tls__ocsp___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__ocsp();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__ocsp___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_tls__sni___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_tls__sni___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_tls__sni___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_tls__sni___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__sni();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__sni___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_typescript___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_typescript___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_typescript___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_typescript___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_typescript();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_typescript___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_uv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_uv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_uv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_uv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_uv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_uv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_mainModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_mainModule___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_mainModule___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_mainModule___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_mainModule();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_mainModule___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_noDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_noDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_noDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_noDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_noDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_noDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_permission___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_permission___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_permission___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_permission___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_permission();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_permission___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_pid___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_pid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_pid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_pid___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_platform___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_platform___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_platform___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_platform___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_platform();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_platform___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_ppid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_ppid___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_ppid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_ppid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ppid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ppid___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_release___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_release___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_release___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_release___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_release();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_release___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_report___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_report___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_report___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_report();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_report___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_sourceMapsEnabled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_sourceMapsEnabled___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_sourceMapsEnabled___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_sourceMapsEnabled___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_sourceMapsEnabled();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_sourceMapsEnabled___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_stderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_stderr___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_stderr___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_stderr___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stderr();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stderr___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_stdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_stdin___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_stdin___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_stdin___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdin();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdin___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_stdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_stdout___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_stdout___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_stdout___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdout();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdout___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_throwDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_throwDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_throwDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_throwDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_throwDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_throwDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_title___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_title___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_title___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_title___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_title();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_title___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_traceDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_traceDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_traceDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_traceDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_traceProcessWarnings___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_traceProcessWarnings___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_traceProcessWarnings___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_traceProcessWarnings___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceProcessWarnings();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceProcessWarnings___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_version___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_version___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_version___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_version();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_version___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_versions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_versions___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_versions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_versions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_versions();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_versions___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_finalization_register___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lasm.JS.Node.process.finalization.register"};
static const lean_object* l_Lasm_JS_Node_process_finalization_register___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_register___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_finalization_register___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "finalization.register"};
static const lean_object* l_Lasm_JS_Node_process_finalization_register___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_register___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_register___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_register___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_finalization_register___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_register___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_register___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_register(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_register___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "Lasm.JS.Node.process.finalization.registerBeforeExit"};
static const lean_object* l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "finalization.registerBeforeExit"};
static const lean_object* l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_registerBeforeExit(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_registerBeforeExit___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_finalization_unregister___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Lasm.JS.Node.process.finalization.unregister"};
static const lean_object* l_Lasm_JS_Node_process_finalization_unregister___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_unregister___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_finalization_unregister___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "finalization.unregister"};
static const lean_object* l_Lasm_JS_Node_process_finalization_unregister___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_unregister___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_finalization_unregister___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_finalization_unregister___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_finalization_unregister___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_finalization_unregister___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_finalization_unregister___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_unregister(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_unregister___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__2_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_arch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_arch___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_arch___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_arch();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_arch___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_argv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_argv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_argv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_argv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_argv0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_argv0___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_argv0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_argv0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv0();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv0___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_channel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_channel___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_channel___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_channel___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_channel();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_channel___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_config___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_config___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_config___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_config();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_config___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_connected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_connected___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_connected___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_connected___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_connected();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_connected___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_debugPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_debugPort___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_debugPort___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_debugPort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debugPort();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debugPort___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_env___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_env___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_env___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_env();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_env___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_execArgv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_execArgv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_execArgv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execArgv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execArgv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_execPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_execPath___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_execPath___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_execPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execPath();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execPath___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_exitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_exitCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_exitCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_exitCode();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_exitCode___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_cached__builtins___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_cached__builtins___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_cached__builtins___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_cached__builtins___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_cached__builtins();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_cached__builtins___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_debug___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_debug___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_debug___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_debug___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debug();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debug___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_inspector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_inspector___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_inspector___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_inspector___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_inspector();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_inspector___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_ipv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_ipv6___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_ipv6___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_ipv6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ipv6();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ipv6___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_require__module___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_require__module___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_require__module___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_require__module___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_require__module();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_require__module___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_tls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_tls___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_tls___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_tls__alpn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls__alpn___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_tls__alpn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_tls__alpn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__alpn();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__alpn___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_tls__ocsp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls__ocsp___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_tls__ocsp___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_tls__ocsp___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__ocsp();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__ocsp___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_tls__sni___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls__sni___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_tls__sni___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_tls__sni___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__sni();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__sni___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_typescript___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_typescript___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_typescript___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_typescript___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_typescript();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_typescript___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_uv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_uv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_uv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_uv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_uv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_uv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_mainModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_mainModule___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_mainModule___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_mainModule___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_mainModule();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_mainModule___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_noDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_noDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_noDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_noDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_noDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_noDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_permission___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_permission___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_permission___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_permission___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_permission();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_permission___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_pid___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_pid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_pid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_pid___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_platform___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_platform___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_platform___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_platform___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_platform();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_platform___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_ppid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_ppid___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_ppid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_ppid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ppid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ppid___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_release___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_release___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_release___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_release___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_release();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_release___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_report___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_report___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_report___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_report___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_report();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_report___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_sourceMapsEnabled___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_stderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_stderr___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_stderr___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_stderr___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stderr();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stderr___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_stdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_stdin___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_stdin___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_stdin___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdin();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdin___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_stdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_stdout___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_stdout___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_stdout___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdout();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdout___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_throwDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_throwDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_throwDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_throwDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_throwDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_throwDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_title___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_title___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_title___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_title___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_title();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_title___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_traceDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_traceDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_traceDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_traceDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_traceProcessWarnings___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_traceProcessWarnings___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_traceProcessWarnings___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_traceProcessWarnings___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceProcessWarnings();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceProcessWarnings___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_version___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_version___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_version___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_version();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_version___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_versions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_versions___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_versions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_versions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_versions();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_versions___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_hrtime_bigint___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.process.hrtime.bigint"};
static const lean_object* l_Lasm_JS_Node_process_hrtime_bigint___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_bigint___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_hrtime_bigint___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "hrtime.bigint"};
static const lean_object* l_Lasm_JS_Node_process_hrtime_bigint___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_bigint___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_hrtime_bigint___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_hrtime_bigint___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_hrtime_bigint___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_hrtime_bigint___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_hrtime_bigint___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_bigint();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_bigint___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__2_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_arch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_arch___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_arch___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_arch();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_arch___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_argv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_argv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_argv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_argv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_argv0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_argv0___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_argv0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_argv0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv0();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv0___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_channel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_channel___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_channel___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_channel___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_channel();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_channel___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_config___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_config___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_config___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_config___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_config();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_config___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_connected___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_connected___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_connected___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_connected___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_connected();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_connected___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_debugPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_debugPort___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_debugPort___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_debugPort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debugPort();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debugPort___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_env___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_env___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_env___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_env();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_env___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_execArgv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_execArgv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_execArgv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execArgv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execArgv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_execPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_execPath___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_execPath___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_execPath___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execPath();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execPath___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_exitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_exitCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_exitCode___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_exitCode();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_exitCode___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_cached__builtins___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_cached__builtins___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_cached__builtins___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_cached__builtins___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_cached__builtins();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_cached__builtins___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_debug___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_debug___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_debug___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_debug___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debug();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debug___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_inspector___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_inspector___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_inspector___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_inspector___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_inspector();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_inspector___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_ipv6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_ipv6___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_ipv6___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_ipv6___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ipv6();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ipv6___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_require__module___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_require__module___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_require__module___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_require__module___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_require__module();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_require__module___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_tls___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_tls___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_tls___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_tls__alpn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls__alpn___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__alpn___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_tls__alpn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__alpn();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__alpn___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_tls__ocsp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls__ocsp___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__ocsp___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_tls__ocsp___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__ocsp();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__ocsp___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_tls__sni___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_tls__sni___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__sni___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_tls__sni___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__sni();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__sni___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_typescript___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_typescript___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_typescript___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_typescript___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_typescript();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_typescript___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_uv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_uv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_uv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_uv___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_uv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_uv___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_mainModule___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_mainModule___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_mainModule___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_mainModule___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_mainModule();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_mainModule___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_noDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_noDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_noDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_noDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_noDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_noDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_permission___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_permission___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_permission___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_permission___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_permission();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_permission___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_pid___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_pid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_pid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_pid___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_platform___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_platform___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_platform___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_platform___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_platform();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_platform___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_ppid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_ppid___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_ppid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_ppid___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ppid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ppid___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_release___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_release___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_release___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_release___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_release();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_release___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_report___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_report___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_report___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_report___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_report();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_report___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_sourceMapsEnabled___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_stderr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_stderr___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_stderr___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_stderr___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stderr();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stderr___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_stdin___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_stdin___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_stdin___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_stdin___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdin();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdin___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_stdout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_stdout___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_stdout___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_stdout___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdout();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdout___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_throwDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_throwDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_throwDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_throwDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_throwDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_throwDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_title___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_title___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_title___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_title___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_title();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_title___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_traceDeprecation___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_traceDeprecation___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_traceDeprecation___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_traceDeprecation___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceDeprecation();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceDeprecation___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_traceProcessWarnings___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_version___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_version___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_version___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_version();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_version___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_versions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)&l_Lasm_JS_Node_process_versions___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_versions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_versions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_versions();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_versions___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_memoryUsage_rss___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Node.process.memoryUsage.rss"};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_rss___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_rss___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_memoryUsage_rss___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "memoryUsage.rss"};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_rss___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_rss___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage_rss___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage_rss___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_memoryUsage_rss___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage_rss___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage_rss___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_rss();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_rss___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_channel_ref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.process.channel.ref"};
static const lean_object* l_Lasm_JS_Node_process_channel_ref___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_channel_ref___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_channel_ref___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "channel.ref"};
static const lean_object* l_Lasm_JS_Node_process_channel_ref___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_channel_ref___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_channel_ref___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_channel_ref___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_channel_ref___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_channel_ref___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_channel_ref___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_ref();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_ref___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_channel_unref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.process.channel.unref"};
static const lean_object* l_Lasm_JS_Node_process_channel_unref___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_channel_unref___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_channel_unref___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "channel.unref"};
static const lean_object* l_Lasm_JS_Node_process_channel_unref___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_channel_unref___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_channel_unref___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_channel_unref___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_channel_unref___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_channel_unref___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_channel_unref___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_unref();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_unref___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_permission_has___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Node.process.permission.has"};
static const lean_object* l_Lasm_JS_Node_process_permission_has___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_permission_has___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_permission_has___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "permission.has"};
static const lean_object* l_Lasm_JS_Node_process_permission_has___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_permission_has___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_permission_has___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_permission_has___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_permission_has___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_permission_has___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_permission_has___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_has(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_has___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_permission_drop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Node.process.permission.drop"};
static const lean_object* l_Lasm_JS_Node_process_permission_drop___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_permission_drop___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_permission_drop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "permission.drop"};
static const lean_object* l_Lasm_JS_Node_process_permission_drop___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_permission_drop___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_permission_drop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_permission_drop___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_permission_drop___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_permission_drop___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_permission_drop___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_drop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_drop___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_compact___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "compact"};
static const lean_object* l_Lasm_JS_Node_process_report_compact___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_compact___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_compact___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_compact___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_compact___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_compact___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_compact___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_compact___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_compact___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_compact___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_compact();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_compact___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_directory___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "directory"};
static const lean_object* l_Lasm_JS_Node_process_report_directory___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_directory___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_directory___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_directory___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_directory___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_directory___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_directory___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_directory___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_directory___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_directory___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_directory();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_directory___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_filename___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "filename"};
static const lean_object* l_Lasm_JS_Node_process_report_filename___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_filename___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_filename___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_filename___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_filename___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_filename___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_filename___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_filename___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_filename___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_filename___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_filename();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_filename___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_reportOnFatalError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "reportOnFatalError"};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnFatalError___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnFatalError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_reportOnFatalError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_reportOnFatalError___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnFatalError___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnFatalError___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_reportOnFatalError___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_reportOnFatalError___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnFatalError___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnFatalError___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnFatalError();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnFatalError___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_reportOnSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "reportOnSignal"};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnSignal___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnSignal___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_reportOnSignal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_reportOnSignal___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnSignal___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnSignal___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_reportOnSignal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_reportOnSignal___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnSignal___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnSignal___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnSignal();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnSignal___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "reportOnUncaughtException"};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnUncaughtException();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnUncaughtException___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_excludeEnv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "excludeEnv"};
static const lean_object* l_Lasm_JS_Node_process_report_excludeEnv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_excludeEnv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_excludeEnv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_excludeEnv___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_excludeEnv___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_excludeEnv___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_excludeEnv___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_excludeEnv___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_excludeEnv___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_excludeEnv___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_excludeEnv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_excludeEnv___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_signal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_JS_Node_process_report_signal___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_signal___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_signal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_signal___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_report_signal___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_signal___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_signal___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_signal___closed__1_value)}};
static const lean_object* l_Lasm_JS_Node_process_report_signal___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_signal___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_signal();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_signal___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_getReport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Node.process.report.getReport"};
static const lean_object* l_Lasm_JS_Node_process_report_getReport___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_getReport___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_report_getReport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "report.getReport"};
static const lean_object* l_Lasm_JS_Node_process_report_getReport___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_getReport___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_getReport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_getReport___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_getReport___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_report_getReport___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_getReport___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_getReport(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_getReport___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_report_writeReport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Node.process.report.writeReport"};
static const lean_object* l_Lasm_JS_Node_process_report_writeReport___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_report_writeReport___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_report_writeReport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "report.writeReport"};
static const lean_object* l_Lasm_JS_Node_process_report_writeReport___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_report_writeReport___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_report_writeReport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_report_writeReport___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_report_writeReport___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_report_writeReport___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_report_writeReport___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_writeReport(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_writeReport___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0(lean_object* v___f_5_, lean_object* v___f_6_, lean_object* v_d_7_){
_start:
{
lean_object* v_type_8_; lean_object* v_code_9_; lean_object* v_ctor_10_; lean_object* v_detail_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_type_8_ = lean_ctor_get(v_d_7_, 0);
lean_inc(v_type_8_);
v_code_9_ = lean_ctor_get(v_d_7_, 1);
lean_inc(v_code_9_);
v_ctor_10_ = lean_ctor_get(v_d_7_, 2);
lean_inc(v_ctor_10_);
v_detail_11_ = lean_ctor_get(v_d_7_, 3);
lean_inc(v_detail_11_);
lean_dec_ref(v_d_7_);
v___x_12_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_5_, 2);
v___x_13_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_5_, v_type_8_);
v___x_14_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_14_, 0, v___x_12_);
lean_ctor_set(v___x_14_, 1, v___x_13_);
v___x_15_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__1));
v___x_16_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_5_, v_code_9_);
v___x_17_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_15_);
lean_ctor_set(v___x_17_, 1, v___x_16_);
v___x_18_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__2));
v___x_19_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_6_, v_ctor_10_);
v___x_20_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_20_, 0, v___x_18_);
lean_ctor_set(v___x_20_, 1, v___x_19_);
v___x_21_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__3));
v___x_22_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_5_, v_detail_11_);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_21_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
v___x_24_ = lean_unsigned_to_nat(4u);
v___x_25_ = lean_mk_empty_array_with_capacity(v___x_24_);
v___x_26_ = lean_array_push(v___x_25_, v___x_14_);
v___x_27_ = lean_array_push(v___x_26_, v___x_17_);
v___x_28_ = lean_array_push(v___x_27_, v___x_20_);
v___x_29_ = lean_array_push(v___x_28_, v___x_23_);
v___x_30_ = l_Lasm_JS_Web_Support_fields(v___x_29_);
lean_dec_ref(v___x_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object* v_x_37_){
_start:
{
if (lean_obj_tag(v_x_37_) == 0)
{
lean_object* v___x_38_; 
v___x_38_ = lean_unsigned_to_nat(0u);
return v___x_38_;
}
else
{
lean_object* v___x_39_; 
v___x_39_ = lean_unsigned_to_nat(1u);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object* v_x_40_){
_start:
{
lean_object* v_res_41_; 
v_res_41_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(v_x_40_);
lean_dec_ref(v_x_40_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object* v_t_42_, lean_object* v_k_43_){
_start:
{
if (lean_obj_tag(v_t_42_) == 0)
{
lean_object* v_value_44_; lean_object* v___x_45_; 
v_value_44_ = lean_ctor_get(v_t_42_, 0);
lean_inc_ref(v_value_44_);
lean_dec_ref_known(v_t_42_, 1);
v___x_45_ = lean_apply_1(v_k_43_, v_value_44_);
return v___x_45_;
}
else
{
double v_value_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v_value_46_ = lean_ctor_get_float(v_t_42_, 0);
lean_dec_ref_known(v_t_42_, 0);
v___x_47_ = lean_box_float(v_value_46_);
v___x_48_ = lean_apply_1(v_k_43_, v___x_47_);
return v___x_48_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object* v_motive_49_, lean_object* v_ctorIdx_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_k_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_51_, v_k_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object* v_motive_55_, lean_object* v_ctorIdx_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_k_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(v_motive_55_, v_ctorIdx_56_, v_t_57_, v_h_58_, v_k_59_);
lean_dec(v_ctorIdx_56_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object* v_t_61_, lean_object* v_domString_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_61_, v_domString_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object* v_motive_64_, lean_object* v_t_65_, lean_object* v_h_66_, lean_object* v_domString_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_65_, v_domString_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object* v_t_69_, lean_object* v_double_70_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_69_, v_double_70_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_double_75_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_73_, v_double_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object* v_x_77_){
_start:
{
if (lean_obj_tag(v_x_77_) == 0)
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
double v_value_86_; lean_object* v___x_88_; uint8_t v_isShared_89_; uint8_t v_isSharedCheck_93_; 
v_value_86_ = lean_ctor_get_float(v_x_77_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_93_ == 0)
{
v___x_88_ = v_x_77_;
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
else
{
lean_dec(v_x_77_);
v___x_88_ = lean_box(0);
v_isShared_89_ = v_isSharedCheck_93_;
goto v_resetjp_87_;
}
v_resetjp_87_:
{
lean_object* v___x_91_; 
if (v_isShared_89_ == 0)
{
lean_ctor_set_tag(v___x_88_, 3);
v___x_91_ = v___x_88_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_92_, 0, v_value_86_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
return v___x_91_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object* v_value_96_){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_97_, 0, v_value_96_);
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double v_value_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_101_, 0, v_value_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object* v_value_102_){
_start:
{
double v_value_boxed_103_; lean_object* v_res_104_; 
v_value_boxed_103_ = lean_unbox_float(v_value_102_);
lean_dec_ref(v_value_102_);
v_res_104_ = l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(v_value_boxed_103_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx(lean_object* v_x_107_){
_start:
{
switch(lean_obj_tag(v_x_107_))
{
case 0:
{
lean_object* v___x_108_; 
v___x_108_ = lean_unsigned_to_nat(0u);
return v___x_108_;
}
case 1:
{
lean_object* v___x_109_; 
v___x_109_ = lean_unsigned_to_nat(1u);
return v___x_109_;
}
default: 
{
lean_object* v___x_110_; 
v___x_110_ = lean_unsigned_to_nat(2u);
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx___boxed(lean_object* v_x_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorIdx(v_x_111_);
lean_dec_ref(v_x_111_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(lean_object* v_t_113_, lean_object* v_k_114_){
_start:
{
if (lean_obj_tag(v_t_113_) == 1)
{
lean_object* v_value_115_; lean_object* v___x_116_; 
v_value_115_ = lean_ctor_get(v_t_113_, 0);
lean_inc(v_value_115_);
lean_dec_ref_known(v_t_113_, 1);
v___x_116_ = lean_apply_1(v_k_114_, v_value_115_);
return v___x_116_;
}
else
{
lean_object* v_value_117_; lean_object* v___x_118_; 
v_value_117_ = lean_ctor_get(v_t_113_, 0);
lean_inc_ref(v_value_117_);
lean_dec_ref(v_t_113_);
v___x_118_ = lean_apply_1(v_k_114_, v_value_117_);
return v___x_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim(lean_object* v_motive_119_, lean_object* v_ctorIdx_120_, lean_object* v_t_121_, lean_object* v_h_122_, lean_object* v_k_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_121_, v_k_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___boxed(lean_object* v_motive_125_, lean_object* v_ctorIdx_126_, lean_object* v_t_127_, lean_object* v_h_128_, lean_object* v_k_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim(v_motive_125_, v_ctorIdx_126_, v_t_127_, v_h_128_, v_k_129_);
lean_dec(v_ctorIdx_126_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim___redArg(lean_object* v_t_131_, lean_object* v_domString_132_){
_start:
{
lean_object* v___x_133_; 
v___x_133_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_131_, v_domString_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_domString_elim(lean_object* v_motive_134_, lean_object* v_t_135_, lean_object* v_h_136_, lean_object* v_domString_137_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_135_, v_domString_137_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim___redArg(lean_object* v_t_139_, lean_object* v_url_140_){
_start:
{
lean_object* v___x_141_; 
v___x_141_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_139_, v_url_140_);
return v___x_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_url_elim(lean_object* v_motive_142_, lean_object* v_t_143_, lean_object* v_h_144_, lean_object* v_url_145_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_143_, v_url_145_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim___redArg(lean_object* v_t_147_, lean_object* v_uint8Array_148_){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_147_, v_uint8Array_148_);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_uint8Array_elim(lean_object* v_motive_150_, lean_object* v_t_151_, lean_object* v_h_152_, lean_object* v_uint8Array_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lasm_JS_Node_DOMStringOrURLOrUint8Array_ctorElim___redArg(v_t_151_, v_uint8Array_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0(lean_object* v_x_156_){
_start:
{
switch(lean_obj_tag(v_x_156_))
{
case 0:
{
lean_object* v_value_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
v_value_157_ = lean_ctor_get(v_x_156_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_156_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v_x_156_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_value_157_);
lean_dec(v_x_156_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 4);
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_value_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
case 1:
{
lean_object* v_value_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v_value_165_ = lean_ctor_get(v_x_156_, 0);
lean_inc(v_value_165_);
lean_dec_ref_known(v_x_156_, 1);
v___x_166_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_167_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_167_, 0, v_value_165_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
return v___x_167_;
}
default: 
{
lean_object* v_value_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
v_value_168_ = lean_ctor_get(v_x_156_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v_x_156_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v_x_156_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_value_168_);
lean_dec(v_x_156_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
lean_ctor_set_tag(v___x_170_, 6);
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_value_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrURLOrUint8Array___lam__0(lean_object* v_value_178_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_179_, 0, v_value_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeURLDOMStringOrURLOrUint8Array___lam__0(lean_object* v_value_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_183_, 0, v_value_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrURLOrUint8Array___lam__0(lean_object* v_value_186_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_187_, 0, v_value_186_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx(lean_object* v_x_190_){
_start:
{
if (lean_obj_tag(v_x_190_) == 0)
{
lean_object* v___x_191_; 
v___x_191_ = lean_unsigned_to_nat(0u);
return v___x_191_;
}
else
{
lean_object* v___x_192_; 
v___x_192_ = lean_unsigned_to_nat(1u);
return v___x_192_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx___boxed(lean_object* v_x_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorIdx(v_x_193_);
lean_dec_ref(v_x_193_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(lean_object* v_t_195_, lean_object* v_k_196_){
_start:
{
lean_object* v_value_197_; lean_object* v___x_198_; 
v_value_197_ = lean_ctor_get(v_t_195_, 0);
lean_inc(v_value_197_);
lean_dec_ref(v_t_195_);
v___x_198_ = lean_apply_1(v_k_196_, v_value_197_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim(lean_object* v_motive_199_, lean_object* v_ctorIdx_200_, lean_object* v_t_201_, lean_object* v_h_202_, lean_object* v_k_203_){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_201_, v_k_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___boxed(lean_object* v_motive_205_, lean_object* v_ctorIdx_206_, lean_object* v_t_207_, lean_object* v_h_208_, lean_object* v_k_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim(v_motive_205_, v_ctorIdx_206_, v_t_207_, v_h_208_, v_k_209_);
lean_dec(v_ctorIdx_206_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim___redArg(lean_object* v_t_211_, lean_object* v_server_212_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_211_, v_server_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_server_elim(lean_object* v_motive_214_, lean_object* v_t_215_, lean_object* v_h_216_, lean_object* v_server_217_){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_215_, v_server_217_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim___redArg(lean_object* v_t_219_, lean_object* v_socket_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_219_, v_socket_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_net_ServerOrSocket_socket_elim(lean_object* v_motive_222_, lean_object* v_t_223_, lean_object* v_h_224_, lean_object* v_socket_225_){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = l_Lasm_JS_Node_net_ServerOrSocket_ctorElim___redArg(v_t_223_, v_socket_225_);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0(lean_object* v_x_227_){
_start:
{
lean_object* v_value_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_value_228_ = lean_ctor_get(v_x_227_, 0);
v___x_229_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
lean_inc(v_value_228_);
v___x_230_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_230_, 0, v_value_228_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0___boxed(lean_object* v_x_231_){
_start:
{
lean_object* v_res_232_; 
v_res_232_ = l_Lasm_JS_Node_instToJSNetServerOrSocket___lam__0(v_x_231_);
lean_dec_ref(v_x_231_);
return v_res_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetServerNetServerOrSocket___lam__0(lean_object* v_value_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_236_, 0, v_value_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeNetSocketNetServerOrSocket___lam__0(lean_object* v_value_239_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v_value_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0(lean_object* v___f_244_, lean_object* v_d_245_){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_246_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0___closed__0));
v___x_247_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_244_, v_d_245_);
v___x_248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = lean_unsigned_to_nat(1u);
v___x_250_ = lean_mk_empty_array_with_capacity(v___x_249_);
v___x_251_ = lean_array_push(v___x_250_, v___x_248_);
v___x_252_ = l_Lasm_JS_Web_Support_fields(v___x_251_);
lean_dec_ref(v___x_251_);
return v___x_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(lean_object* v_x_257_){
_start:
{
if (lean_obj_tag(v_x_257_) == 0)
{
lean_object* v___x_258_; 
v___x_258_ = lean_unsigned_to_nat(0u);
return v___x_258_;
}
else
{
lean_object* v___x_259_; 
v___x_259_ = lean_unsigned_to_nat(1u);
return v___x_259_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx___boxed(lean_object* v_x_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorIdx(v_x_260_);
lean_dec_ref(v_x_260_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(lean_object* v_t_262_, lean_object* v_k_263_){
_start:
{
if (lean_obj_tag(v_t_262_) == 0)
{
lean_object* v_value_264_; lean_object* v___x_265_; 
v_value_264_ = lean_ctor_get(v_t_262_, 0);
lean_inc_ref(v_value_264_);
lean_dec_ref_known(v_t_262_, 1);
v___x_265_ = lean_apply_1(v_k_263_, v_value_264_);
return v___x_265_;
}
else
{
lean_object* v_value_266_; lean_object* v___x_267_; 
v_value_266_ = lean_ctor_get(v_t_262_, 0);
lean_inc(v_value_266_);
lean_dec_ref_known(v_t_262_, 1);
v___x_267_ = lean_apply_1(v_k_263_, v_value_266_);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(lean_object* v_motive_268_, lean_object* v_ctorIdx_269_, lean_object* v_t_270_, lean_object* v_h_271_, lean_object* v_k_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_270_, v_k_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___boxed(lean_object* v_motive_274_, lean_object* v_ctorIdx_275_, lean_object* v_t_276_, lean_object* v_h_277_, lean_object* v_k_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim(v_motive_274_, v_ctorIdx_275_, v_t_276_, v_h_277_, v_k_278_);
lean_dec(v_ctorIdx_275_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim___redArg(lean_object* v_t_280_, lean_object* v_domString_281_){
_start:
{
lean_object* v___x_282_; 
v___x_282_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_280_, v_domString_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_domString_elim(lean_object* v_motive_283_, lean_object* v_t_284_, lean_object* v_h_285_, lean_object* v_domString_286_){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_284_, v_domString_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim___redArg(lean_object* v_t_288_, lean_object* v_longLong_289_){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_288_, v_longLong_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrLongLong_longLong_elim(lean_object* v_motive_291_, lean_object* v_t_292_, lean_object* v_h_293_, lean_object* v_longLong_294_){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = l_Lasm_JS_Node_DOMStringOrLongLong_ctorElim___redArg(v_t_292_, v_longLong_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrLongLong___lam__0(lean_object* v_x_296_){
_start:
{
if (lean_obj_tag(v_x_296_) == 0)
{
lean_object* v_value_297_; lean_object* v___x_299_; uint8_t v_isShared_300_; uint8_t v_isSharedCheck_304_; 
v_value_297_ = lean_ctor_get(v_x_296_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v_x_296_);
if (v_isSharedCheck_304_ == 0)
{
v___x_299_ = v_x_296_;
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
else
{
lean_inc(v_value_297_);
lean_dec(v_x_296_);
v___x_299_ = lean_box(0);
v_isShared_300_ = v_isSharedCheck_304_;
goto v_resetjp_298_;
}
v_resetjp_298_:
{
lean_object* v___x_302_; 
if (v_isShared_300_ == 0)
{
lean_ctor_set_tag(v___x_299_, 4);
v___x_302_ = v___x_299_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v_value_297_);
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
lean_object* v_value_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_317_; 
v_value_305_ = lean_ctor_get(v_x_296_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v_x_296_);
if (v_isSharedCheck_317_ == 0)
{
v___x_307_ = v_x_296_;
v_isShared_308_ = v_isSharedCheck_317_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_value_305_);
lean_dec(v_x_296_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_317_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_309_; lean_object* v___x_310_; uint8_t v___x_311_; 
v___x_309_ = lean_nat_abs(v_value_305_);
v___x_310_ = lean_cstr_to_nat("9007199254740991");
v___x_311_ = lean_nat_dec_le(v___x_309_, v___x_310_);
lean_dec(v___x_309_);
if (v___x_311_ == 0)
{
lean_object* v___x_313_; 
if (v_isShared_308_ == 0)
{
lean_ctor_set_tag(v___x_307_, 5);
v___x_313_ = v___x_307_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_value_305_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
else
{
double v___x_315_; lean_object* v___x_316_; 
lean_del_object(v___x_307_);
v___x_315_ = l_Float_ofInt(v_value_305_);
lean_dec(v_value_305_);
v___x_316_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrLongLong___lam__0(lean_object* v_value_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_321_, 0, v_value_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrLongLong___lam__0(lean_object* v_value_324_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_325_, 0, v_value_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(lean_object* v_x_328_){
_start:
{
if (lean_obj_tag(v_x_328_) == 0)
{
lean_object* v___x_329_; 
v___x_329_ = lean_unsigned_to_nat(0u);
return v___x_329_;
}
else
{
lean_object* v___x_330_; 
v___x_330_ = lean_unsigned_to_nat(1u);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx___boxed(lean_object* v_x_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorIdx(v_x_331_);
lean_dec_ref(v_x_331_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(lean_object* v_t_333_, lean_object* v_k_334_){
_start:
{
if (lean_obj_tag(v_t_333_) == 0)
{
uint8_t v_value_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_value_335_ = lean_ctor_get_uint8(v_t_333_, 0);
lean_dec_ref_known(v_t_333_, 0);
v___x_336_ = lean_box(v_value_335_);
v___x_337_ = lean_apply_1(v_k_334_, v___x_336_);
return v___x_337_;
}
else
{
lean_object* v_value_338_; lean_object* v___x_339_; 
v_value_338_ = lean_ctor_get(v_t_333_, 0);
lean_inc_ref(v_value_338_);
lean_dec_ref_known(v_t_333_, 1);
v___x_339_ = lean_apply_1(v_k_334_, v_value_338_);
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(lean_object* v_motive_340_, lean_object* v_ctorIdx_341_, lean_object* v_t_342_, lean_object* v_h_343_, lean_object* v_k_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_342_, v_k_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___boxed(lean_object* v_motive_346_, lean_object* v_ctorIdx_347_, lean_object* v_t_348_, lean_object* v_h_349_, lean_object* v_k_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim(v_motive_346_, v_ctorIdx_347_, v_t_348_, v_h_349_, v_k_350_);
lean_dec(v_ctorIdx_347_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim___redArg(lean_object* v_t_352_, lean_object* v_boolean_353_){
_start:
{
lean_object* v___x_354_; 
v___x_354_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_352_, v_boolean_353_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_boolean_elim(lean_object* v_motive_355_, lean_object* v_t_356_, lean_object* v_h_357_, lean_object* v_boolean_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_356_, v_boolean_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim___redArg(lean_object* v_t_360_, lean_object* v_domString_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_360_, v_domString_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_BooleanOrDOMString_domString_elim(lean_object* v_motive_363_, lean_object* v_t_364_, lean_object* v_h_365_, lean_object* v_domString_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = l_Lasm_JS_Node_BooleanOrDOMString_ctorElim___redArg(v_t_364_, v_domString_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSBooleanOrDOMString___lam__0(lean_object* v_x_368_){
_start:
{
if (lean_obj_tag(v_x_368_) == 0)
{
uint8_t v_value_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
v_value_369_ = lean_ctor_get_uint8(v_x_368_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v_x_368_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v_x_368_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_dec(v_x_368_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 2);
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_375_, 0, v_value_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
else
{
lean_object* v_value_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_value_377_ = lean_ctor_get(v_x_368_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v_x_368_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v_x_368_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_value_377_);
lean_dec(v_x_368_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 4);
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_value_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(uint8_t v_value_387_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_388_, 0, v_value_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0___boxed(lean_object* v_value_389_){
_start:
{
uint8_t v_value_boxed_390_; lean_object* v_res_391_; 
v_value_boxed_390_ = lean_unbox(v_value_389_);
v_res_391_ = l_Lasm_JS_Node_instCoeBoolBooleanOrDOMString___lam__0(v_value_boxed_390_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringBooleanOrDOMString___lam__0(lean_object* v_value_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v_value_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSBooleanOrDOMString___lam__0(lean_object* v_x_400_){
_start:
{
switch(lean_obj_tag(v_x_400_))
{
case 2:
{
uint8_t v_b_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_409_; 
v_b_401_ = lean_ctor_get_uint8(v_x_400_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_409_ == 0)
{
v___x_403_ = v_x_400_;
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
else
{
lean_dec(v_x_400_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_409_;
goto v_resetjp_402_;
}
v_resetjp_402_:
{
lean_object* v___x_406_; 
if (v_isShared_404_ == 0)
{
lean_ctor_set_tag(v___x_403_, 0);
v___x_406_ = v___x_403_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_408_, 0, v_b_401_);
v___x_406_ = v_reuseFailAlloc_408_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_407_; 
v___x_407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
return v___x_407_;
}
}
}
case 4:
{
lean_object* v_s_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_418_; 
v_s_410_ = lean_ctor_get(v_x_400_, 0);
v_isSharedCheck_418_ = !lean_is_exclusive(v_x_400_);
if (v_isSharedCheck_418_ == 0)
{
v___x_412_ = v_x_400_;
v_isShared_413_ = v_isSharedCheck_418_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_s_410_);
lean_dec(v_x_400_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_418_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set_tag(v___x_412_, 1);
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v_s_410_);
v___x_415_ = v_reuseFailAlloc_417_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; 
v___x_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
}
default: 
{
lean_object* v___x_419_; 
lean_dec(v_x_400_);
v___x_419_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSBooleanOrDOMString___lam__0___closed__0));
return v___x_419_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx(lean_object* v_x_427_){
_start:
{
if (lean_obj_tag(v_x_427_) == 0)
{
lean_object* v___x_428_; 
v___x_428_ = lean_unsigned_to_nat(0u);
return v___x_428_;
}
else
{
lean_object* v___x_429_; 
v___x_429_ = lean_unsigned_to_nat(1u);
return v___x_429_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx___boxed(lean_object* v_x_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorIdx(v_x_430_);
lean_dec_ref(v_x_430_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(lean_object* v_t_432_, lean_object* v_k_433_){
_start:
{
lean_object* v_value_434_; lean_object* v___x_435_; 
v_value_434_ = lean_ctor_get(v_t_432_, 0);
lean_inc(v_value_434_);
lean_dec_ref(v_t_432_);
v___x_435_ = lean_apply_1(v_k_433_, v_value_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim(lean_object* v_motive_436_, lean_object* v_ctorIdx_437_, lean_object* v_t_438_, lean_object* v_h_439_, lean_object* v_k_440_){
_start:
{
lean_object* v___x_441_; 
v___x_441_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_438_, v_k_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___boxed(lean_object* v_motive_442_, lean_object* v_ctorIdx_443_, lean_object* v_t_444_, lean_object* v_h_445_, lean_object* v_k_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim(v_motive_442_, v_ctorIdx_443_, v_t_444_, v_h_445_, v_k_446_);
lean_dec(v_ctorIdx_443_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim___redArg(lean_object* v_t_448_, lean_object* v_object_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_448_, v_object_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_object_elim(lean_object* v_motive_451_, lean_object* v_t_452_, lean_object* v_h_453_, lean_object* v_object_454_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_452_, v_object_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim___redArg(lean_object* v_t_456_, lean_object* v_jsFunction_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_456_, v_jsFunction_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_ObjectOrJSFunction_jsFunction_elim(lean_object* v_motive_459_, lean_object* v_t_460_, lean_object* v_h_461_, lean_object* v_jsFunction_462_){
_start:
{
lean_object* v___x_463_; 
v___x_463_ = l_Lasm_JS_Node_ObjectOrJSFunction_ctorElim___redArg(v_t_460_, v_jsFunction_462_);
return v___x_463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0(lean_object* v_x_464_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
lean_object* v_value_465_; 
v_value_465_ = lean_ctor_get(v_x_464_, 0);
lean_inc(v_value_465_);
return v_value_465_;
}
else
{
lean_object* v_value_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v_value_466_ = lean_ctor_get(v_x_464_, 0);
v___x_467_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
lean_inc(v_value_466_);
v___x_468_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_468_, 0, v_value_466_);
lean_ctor_set(v___x_468_, 1, v___x_467_);
return v___x_468_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0___boxed(lean_object* v_x_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lasm_JS_Node_instToJSObjectOrJSFunction___lam__0(v_x_469_);
lean_dec_ref(v_x_469_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeJSFunctionObjectOrJSFunction___lam__0(lean_object* v_value_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_474_, 0, v_value_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags(){
_start:
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_484_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__2));
v___x_485_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_483_, v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___boxed(lean_object* v_a_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags();
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(lean_object* v_module_489_, lean_object* v_o_490_, lean_object* v_a_491_){
_start:
{
if (lean_obj_tag(v_a_491_) == 0)
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec(v_o_490_);
v___x_493_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0));
v___x_494_ = lean_string_append(v___x_493_, v_module_489_);
v___x_495_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
return v___x_496_;
}
else
{
lean_object* v_tail_497_; 
v_tail_497_ = lean_ctor_get(v_a_491_, 1);
if (lean_obj_tag(v_tail_497_) == 0)
{
lean_object* v_head_498_; lean_object* v___x_499_; 
v_head_498_ = lean_ctor_get(v_a_491_, 0);
lean_inc(v_head_498_);
lean_dec_ref_known(v_a_491_, 2);
v___x_499_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_o_490_, v_head_498_);
return v___x_499_;
}
else
{
lean_object* v_head_500_; lean_object* v___x_501_; 
lean_inc(v_tail_497_);
v_head_500_ = lean_ctor_get(v_a_491_, 0);
lean_inc(v_head_500_);
lean_dec_ref_known(v_a_491_, 2);
v___x_501_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_490_, v_head_500_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
v_o_490_ = v_a_502_;
v_a_491_ = v_tail_497_;
goto _start;
}
else
{
lean_object* v_a_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
lean_dec(v_tail_497_);
v_a_504_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v___x_501_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_a_504_);
lean_dec(v___x_501_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_a_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___boxed(lean_object* v_module_512_, lean_object* v_o_513_, lean_object* v_a_514_, lean_object* v_a_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_512_, v_o_513_, v_a_514_);
lean_dec_ref(v_module_512_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(lean_object* v_module_517_, lean_object* v_path_518_){
_start:
{
lean_object* v___x_520_; 
lean_inc_ref(v_module_517_);
v___x_520_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_module_517_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_522_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_521_);
lean_dec_ref_known(v___x_520_, 1);
v___x_522_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_517_, v_a_521_, v_path_518_);
lean_dec_ref(v_module_517_);
return v___x_522_;
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
lean_dec(v_path_518_);
lean_dec_ref(v_module_517_);
v_a_523_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_530_ == 0)
{
v___x_525_ = v___x_520_;
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_a_523_);
lean_dec(v___x_520_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_530_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_528_; 
if (v_isShared_526_ == 0)
{
v___x_528_ = v___x_525_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_523_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
return v___x_528_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0___boxed(lean_object* v_module_531_, lean_object* v_path_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v_module_531_, v_path_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch(){
_start:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_540_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_541_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__1));
v___x_542_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_540_, v___x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch___boxed(lean_object* v_a_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lasm_JS_Node_process_arch();
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(lean_object* v_module_545_, lean_object* v_o_546_, lean_object* v_a_547_){
_start:
{
if (lean_obj_tag(v_a_547_) == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_dec(v_o_546_);
v___x_549_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0));
v___x_550_ = lean_string_append(v___x_549_, v_module_545_);
v___x_551_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
v___x_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_552_, 0, v___x_551_);
return v___x_552_;
}
else
{
lean_object* v_tail_553_; 
v_tail_553_ = lean_ctor_get(v_a_547_, 1);
if (lean_obj_tag(v_tail_553_) == 0)
{
lean_object* v_head_554_; lean_object* v___x_555_; 
v_head_554_ = lean_ctor_get(v_a_547_, 0);
lean_inc(v_head_554_);
lean_dec_ref_known(v_a_547_, 2);
v___x_555_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_net_BlockList_PRIVATE__RANGES_spec__0(v_o_546_, v_head_554_);
return v___x_555_;
}
else
{
lean_object* v_head_556_; lean_object* v___x_557_; 
lean_inc(v_tail_553_);
v_head_556_ = lean_ctor_get(v_a_547_, 0);
lean_inc(v_head_556_);
lean_dec_ref_known(v_a_547_, 2);
v___x_557_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_546_, v_head_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v___x_557_, 1);
v_o_546_ = v_a_558_;
v_a_547_ = v_tail_553_;
goto _start;
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
lean_dec(v_tail_553_);
v_a_560_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_557_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_557_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0___boxed(lean_object* v_module_568_, lean_object* v_o_569_, lean_object* v_a_570_, lean_object* v_a_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(v_module_568_, v_o_569_, v_a_570_);
lean_dec_ref(v_module_568_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(lean_object* v_module_573_, lean_object* v_path_574_){
_start:
{
lean_object* v___x_576_; 
lean_inc_ref(v_module_573_);
v___x_576_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_module_573_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_578_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc(v_a_577_);
lean_dec_ref_known(v___x_576_, 1);
v___x_578_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(v_module_573_, v_a_577_, v_path_574_);
lean_dec_ref(v_module_573_);
return v___x_578_;
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
lean_dec(v_path_574_);
lean_dec_ref(v_module_573_);
v_a_579_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_576_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_576_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v_a_579_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
return v___x_584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0___boxed(lean_object* v_module_587_, lean_object* v_path_588_, lean_object* v_a_589_){
_start:
{
lean_object* v_res_590_; 
v_res_590_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v_module_587_, v_path_588_);
return v_res_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv(){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_596_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_597_ = ((lean_object*)(l_Lasm_JS_Node_process_argv___closed__1));
v___x_598_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_596_, v___x_597_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv___boxed(lean_object* v_a_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_JS_Node_process_argv();
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv0(){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_607_ = ((lean_object*)(l_Lasm_JS_Node_process_argv0___closed__1));
v___x_608_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_606_, v___x_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv0___boxed(lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lasm_JS_Node_process_argv0();
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel(){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_616_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_617_ = ((lean_object*)(l_Lasm_JS_Node_process_channel___closed__1));
v___x_618_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_616_, v___x_617_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel___boxed(lean_object* v_a_619_){
_start:
{
lean_object* v_res_620_; 
v_res_620_ = l_Lasm_JS_Node_process_channel();
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_config(){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_626_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_627_ = ((lean_object*)(l_Lasm_JS_Node_process_config___closed__1));
v___x_628_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_626_, v___x_627_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_config___boxed(lean_object* v_a_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lasm_JS_Node_process_config();
return v_res_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_connected(){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_636_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_637_ = ((lean_object*)(l_Lasm_JS_Node_process_connected___closed__1));
v___x_638_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_636_, v___x_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_connected___boxed(lean_object* v_a_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lasm_JS_Node_process_connected();
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0_spec__0(lean_object* v_module_641_, lean_object* v_o_642_, lean_object* v_a_643_){
_start:
{
if (lean_obj_tag(v_a_643_) == 0)
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; 
lean_dec(v_o_642_);
v___x_645_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0));
v___x_646_ = lean_string_append(v___x_645_, v_module_641_);
v___x_647_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
v___x_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_648_, 0, v___x_647_);
return v___x_648_;
}
else
{
lean_object* v_tail_649_; 
v_tail_649_ = lean_ctor_get(v_a_643_, 1);
if (lean_obj_tag(v_tail_649_) == 0)
{
lean_object* v_head_650_; lean_object* v___x_651_; 
v_head_650_ = lean_ctor_get(v_a_643_, 0);
lean_inc(v_head_650_);
lean_dec_ref_known(v_a_643_, 2);
v___x_651_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_o_642_, v_head_650_);
return v___x_651_;
}
else
{
lean_object* v_head_652_; lean_object* v___x_653_; 
lean_inc(v_tail_649_);
v_head_652_ = lean_ctor_get(v_a_643_, 0);
lean_inc(v_head_652_);
lean_dec_ref_known(v_a_643_, 2);
v___x_653_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_642_, v_head_652_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
lean_inc(v_a_654_);
lean_dec_ref_known(v___x_653_, 1);
v_o_642_ = v_a_654_;
v_a_643_ = v_tail_649_;
goto _start;
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_dec(v_tail_649_);
v_a_656_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_653_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_653_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0_spec__0___boxed(lean_object* v_module_664_, lean_object* v_o_665_, lean_object* v_a_666_, lean_object* v_a_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0_spec__0(v_module_664_, v_o_665_, v_a_666_);
lean_dec_ref(v_module_664_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0(lean_object* v_module_669_, lean_object* v_path_670_){
_start:
{
lean_object* v___x_672_; 
lean_inc_ref(v_module_669_);
v___x_672_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_module_669_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_674_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0_spec__0(v_module_669_, v_a_673_, v_path_670_);
lean_dec_ref(v_module_669_);
return v___x_674_;
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
lean_dec(v_path_670_);
lean_dec_ref(v_module_669_);
v_a_675_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_672_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_672_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0___boxed(lean_object* v_module_683_, lean_object* v_path_684_, lean_object* v_a_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0(v_module_683_, v_path_684_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debugPort(){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_693_ = ((lean_object*)(l_Lasm_JS_Node_process_debugPort___closed__1));
v___x_694_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0(v___x_692_, v___x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debugPort___boxed(lean_object* v_a_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lasm_JS_Node_process_debugPort();
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0(lean_object* v_v_706_){
_start:
{
uint8_t v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_708_ = 0;
v___x_709_ = lean_unsigned_to_nat(1u);
v___x_710_ = ((lean_object*)(l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___closed__3));
v___x_711_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_712_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_712_, 0, v_v_706_);
lean_ctor_set(v___x_712_, 1, v___x_711_);
v___x_713_ = lean_mk_empty_array_with_capacity(v___x_709_);
v___x_714_ = lean_array_push(v___x_713_, v___x_712_);
v___x_715_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_entries_spec__0_spec__0(v___x_710_, v___x_714_, v___x_708_);
if (lean_obj_tag(v___x_715_) == 0)
{
lean_object* v_a_716_; lean_object* v___x_718_; uint8_t v_isShared_719_; uint8_t v_isSharedCheck_723_; 
v_a_716_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_723_ == 0)
{
v___x_718_ = v___x_715_;
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
else
{
lean_inc(v_a_716_);
lean_dec(v___x_715_);
v___x_718_ = lean_box(0);
v_isShared_719_ = v_isSharedCheck_723_;
goto v_resetjp_717_;
}
v_resetjp_717_:
{
lean_object* v___x_721_; 
if (v_isShared_719_ == 0)
{
v___x_721_ = v___x_718_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_722_; 
v_reuseFailAlloc_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_722_, 0, v_a_716_);
v___x_721_ = v_reuseFailAlloc_722_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
return v___x_721_;
}
}
}
else
{
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
v_a_724_ = lean_ctor_get(v___x_715_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_715_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_715_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_715_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0___boxed(lean_object* v_v_732_, lean_object* v_a_733_){
_start:
{
lean_object* v_res_734_; 
v_res_734_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0(v_v_732_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env(){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_740_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_741_ = ((lean_object*)(l_Lasm_JS_Node_process_env___closed__1));
v___x_742_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_740_, v___x_741_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; lean_object* v___x_744_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_742_, 1);
v___x_744_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0(v_a_743_);
return v___x_744_;
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
v_a_745_ = lean_ctor_get(v___x_742_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_742_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_742_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_742_);
v___x_747_ = lean_box(0);
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
v_resetjp_746_:
{
lean_object* v___x_750_; 
if (v_isShared_748_ == 0)
{
v___x_750_ = v___x_747_;
goto v_reusejp_749_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v_a_745_);
v___x_750_ = v_reuseFailAlloc_751_;
goto v_reusejp_749_;
}
v_reusejp_749_:
{
return v___x_750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env___boxed(lean_object* v_a_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lasm_JS_Node_process_env();
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv(){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_760_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_761_ = ((lean_object*)(l_Lasm_JS_Node_process_execArgv___closed__1));
v___x_762_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_760_, v___x_761_);
return v___x_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv___boxed(lean_object* v_a_763_){
_start:
{
lean_object* v_res_764_; 
v_res_764_ = l_Lasm_JS_Node_process_execArgv();
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath(){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_770_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_771_ = ((lean_object*)(l_Lasm_JS_Node_process_execPath___closed__1));
v___x_772_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_770_, v___x_771_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath___boxed(lean_object* v_a_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lasm_JS_Node_process_execPath();
return v_res_774_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_784_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__8));
v___x_785_ = lean_unsigned_to_nat(46u);
v___x_786_ = lean_unsigned_to_nat(193u);
v___x_787_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__7));
v___x_788_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__6));
v___x_789_ = l_mkPanicMessageWithDecl(v___x_788_, v___x_787_, v___x_786_, v___x_785_, v___x_784_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_792_, lean_object* v_d_793_){
_start:
{
lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_805_; lean_object* v_received_806_; lean_object* v___y_825_; lean_object* v_a_828_; lean_object* v_a_853_; 
switch(lean_obj_tag(v_d_793_))
{
case 1:
{
goto v___jp_795_;
}
case 0:
{
goto v___jp_795_;
}
default: 
{
switch(lean_obj_tag(v_d_793_))
{
case 3:
{
double v_n_856_; lean_object* v___x_857_; 
v_n_856_ = lean_ctor_get_float(v_d_793_, 0);
v___x_857_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_856_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v___x_858_; 
v___x_858_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__11));
v_a_828_ = v___x_858_;
goto v___jp_827_;
}
else
{
lean_object* v_val_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec_ref_known(v_d_793_, 0);
v_val_859_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_857_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_val_859_);
lean_dec(v___x_857_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
lean_ctor_set_tag(v___x_861_, 0);
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_val_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
v_a_853_ = v___x_864_;
goto v___jp_852_;
}
}
}
}
case 4:
{
lean_object* v_s_867_; lean_object* v___x_868_; 
v_s_867_ = lean_ctor_get(v_d_793_, 0);
lean_inc_ref(v_s_867_);
lean_dec_ref_known(v_d_793_, 1);
v___x_868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_868_, 0, v_s_867_);
v_a_853_ = v___x_868_;
goto v___jp_852_;
}
default: 
{
lean_object* v___x_869_; 
v___x_869_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v_a_828_ = v___x_869_;
goto v___jp_827_;
}
}
}
}
v___jp_795_:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_box(0);
v___x_797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_797_, 0, v___x_796_);
return v___x_797_;
}
v___jp_798_:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_801_ = lean_string_append(v___y_799_, v___y_800_);
lean_dec_ref(v___y_800_);
v___x_802_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_802_, 0, v___x_801_);
v___x_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_803_, 0, v___x_802_);
return v___x_803_;
}
v___jp_804_:
{
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; uint8_t v___x_818_; 
v___x_807_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_808_ = lean_string_append(v___x_807_, v_context_792_);
v___x_809_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_810_ = lean_string_append(v___x_808_, v___x_809_);
v___x_811_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_812_ = lean_string_append(v___x_810_, v___x_811_);
v___x_813_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_814_ = lean_string_append(v___x_812_, v___x_813_);
v___x_815_ = lean_string_append(v___x_814_, v_received_806_);
lean_dec_ref(v_received_806_);
v___x_816_ = lean_string_utf8_byte_size(v___y_805_);
v___x_817_ = lean_unsigned_to_nat(0u);
v___x_818_ = lean_nat_dec_eq(v___x_816_, v___x_817_);
if (v___x_818_ == 0)
{
lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_819_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_820_ = lean_string_append(v___x_819_, v___y_805_);
v___x_821_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_822_ = lean_string_append(v___x_820_, v___x_821_);
v___y_799_ = v___x_815_;
v___y_800_ = v___x_822_;
goto v___jp_798_;
}
else
{
lean_object* v___x_823_; 
v___x_823_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___y_799_ = v___x_815_;
v___y_800_ = v___x_823_;
goto v___jp_798_;
}
}
v___jp_824_:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lasm_JS_Data_describe(v_d_793_);
v___y_805_ = v___y_825_;
v_received_806_ = v___x_826_;
goto v___jp_804_;
}
v___jp_827_:
{
if (lean_obj_tag(v_d_793_) == 9)
{
lean_object* v_value_829_; lean_object* v_description_830_; lean_object* v___x_831_; uint8_t v___x_832_; 
v_value_829_ = lean_ctor_get(v_d_793_, 0);
v_description_830_ = lean_ctor_get(v_d_793_, 1);
v___x_831_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_832_ = lean_string_dec_eq(v_description_830_, v___x_831_);
if (v___x_832_ == 0)
{
v___y_825_ = v_a_828_;
goto v___jp_824_;
}
else
{
lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_849_; 
lean_inc(v_value_829_);
v_isSharedCheck_849_ = !lean_is_exclusive(v_d_793_);
if (v_isSharedCheck_849_ == 0)
{
lean_object* v_unused_850_; lean_object* v_unused_851_; 
v_unused_850_ = lean_ctor_get(v_d_793_, 1);
lean_dec(v_unused_850_);
v_unused_851_ = lean_ctor_get(v_d_793_, 0);
lean_dec(v_unused_851_);
v___x_834_ = v_d_793_;
v_isShared_835_ = v_isSharedCheck_849_;
goto v_resetjp_833_;
}
else
{
lean_dec(v_d_793_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_849_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
uint32_t v___x_836_; uint64_t v___x_837_; lean_object* v___x_839_; 
v___x_836_ = 206;
v___x_837_ = 0ULL;
lean_inc(v_value_829_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v___x_831_);
v___x_839_ = v___x_834_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_value_829_);
lean_ctor_set(v_reuseFailAlloc_848_, 1, v___x_831_);
v___x_839_ = v_reuseFailAlloc_848_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
uint32_t v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lasm_js_value_handle(v_value_829_);
lean_dec(v_value_829_);
v___x_841_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_836_, v___x_837_, v___x_839_, v___x_840_);
lean_dec_ref(v___x_839_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; uint8_t v___x_843_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_841_, 1);
v___x_843_ = lean_string_validate_utf8(v_a_842_);
if (v___x_843_ == 0)
{
lean_object* v___x_844_; lean_object* v___x_845_; 
lean_dec(v_a_842_);
v___x_844_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9);
v___x_845_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_844_);
v___y_805_ = v_a_828_;
v_received_806_ = v___x_845_;
goto v___jp_804_;
}
else
{
lean_object* v___x_846_; 
v___x_846_ = lean_string_from_utf8_unchecked(v_a_842_);
v___y_805_ = v_a_828_;
v_received_806_ = v___x_846_;
goto v___jp_804_;
}
}
else
{
lean_object* v___x_847_; 
lean_dec_ref_known(v___x_841_, 1);
v___x_847_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10));
v___y_805_ = v_a_828_;
v_received_806_ = v___x_847_;
goto v___jp_804_;
}
}
}
}
}
else
{
v___y_825_ = v_a_828_;
goto v___jp_824_;
}
}
v___jp_852_:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_854_, 0, v_a_853_);
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_870_, lean_object* v_d_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_870_, v_d_871_);
lean_dec_ref(v_context_870_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_874_, lean_object* v_bytes_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_875_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v_a_878_; lean_object* v___x_879_; 
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_877_, 1);
v___x_879_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_874_, v_a_878_);
return v___x_879_;
}
else
{
lean_object* v_a_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_887_; 
v_a_880_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_887_ == 0)
{
v___x_882_ = v___x_877_;
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_a_880_);
lean_dec(v___x_877_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_887_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_885_; 
if (v_isShared_883_ == 0)
{
v___x_885_ = v___x_882_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v_a_880_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_888_, lean_object* v_bytes_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(v_context_888_, v_bytes_889_);
lean_dec_ref(v_bytes_889_);
lean_dec_ref(v_context_888_);
return v_res_891_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
uint8_t v___x_892_; uint64_t v___x_893_; 
v___x_892_ = 0;
v___x_893_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_892_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(lean_object* v_o_895_, lean_object* v_key_896_){
_start:
{
lean_object* v_k_898_; lean_object* v___x_899_; 
v_k_898_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_898_, 0, v_key_896_);
v___x_899_ = l_Lasm_JS_Wire_encodeIO(v_k_898_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; uint32_t v___x_901_; uint32_t v___x_902_; uint64_t v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v___x_901_ = 203;
v___x_902_ = lasm_js_value_handle(v_o_895_);
v___x_903_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0);
v___x_904_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_905_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_905_, 0, v_o_895_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = lean_unsigned_to_nat(2u);
v___x_907_ = lean_mk_empty_array_with_capacity(v___x_906_);
lean_inc_ref(v_k_898_);
v___x_908_ = lean_array_push(v___x_907_, v_k_898_);
v___x_909_ = lean_array_push(v___x_908_, v___x_905_);
v___x_910_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
v___x_911_ = lasm_js_call(v___x_901_, v___x_902_, v___x_903_, v_a_900_, v___x_910_);
lean_dec_ref_known(v___x_910_, 1);
lean_dec(v_a_900_);
if (lean_obj_tag(v___x_911_) == 0)
{
lean_object* v_a_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v_a_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_a_912_);
lean_dec_ref_known(v___x_911_, 1);
v___x_913_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_914_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_898_);
v___x_915_ = lean_string_append(v___x_913_, v___x_914_);
lean_dec_ref(v___x_914_);
v___x_916_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(v___x_915_, v_a_912_);
lean_dec(v_a_912_);
lean_dec_ref(v___x_915_);
return v___x_916_;
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec_ref_known(v_k_898_, 1);
v_a_917_ = lean_ctor_get(v___x_911_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_911_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_911_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_911_);
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
lean_dec_ref_known(v_k_898_, 1);
lean_dec(v_o_895_);
v_a_925_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_899_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_899_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___boxed(lean_object* v_o_933_, lean_object* v_key_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(v_o_933_, v_key_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(lean_object* v_module_937_, lean_object* v_o_938_, lean_object* v_a_939_){
_start:
{
if (lean_obj_tag(v_a_939_) == 0)
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
lean_dec(v_o_938_);
v___x_941_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0));
v___x_942_ = lean_string_append(v___x_941_, v_module_937_);
v___x_943_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
v___x_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_944_, 0, v___x_943_);
return v___x_944_;
}
else
{
lean_object* v_tail_945_; 
v_tail_945_ = lean_ctor_get(v_a_939_, 1);
if (lean_obj_tag(v_tail_945_) == 0)
{
lean_object* v_head_946_; lean_object* v___x_947_; 
v_head_946_ = lean_ctor_get(v_a_939_, 0);
lean_inc(v_head_946_);
lean_dec_ref_known(v_a_939_, 2);
v___x_947_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(v_o_938_, v_head_946_);
return v___x_947_;
}
else
{
lean_object* v_head_948_; lean_object* v___x_949_; 
lean_inc(v_tail_945_);
v_head_948_ = lean_ctor_get(v_a_939_, 0);
lean_inc(v_head_948_);
lean_dec_ref_known(v_a_939_, 2);
v___x_949_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_938_, v_head_948_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
lean_inc(v_a_950_);
lean_dec_ref_known(v___x_949_, 1);
v_o_938_ = v_a_950_;
v_a_939_ = v_tail_945_;
goto _start;
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_dec(v_tail_945_);
v_a_952_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_949_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_949_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0___boxed(lean_object* v_module_960_, lean_object* v_o_961_, lean_object* v_a_962_, lean_object* v_a_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(v_module_960_, v_o_961_, v_a_962_);
lean_dec_ref(v_module_960_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(lean_object* v_module_965_, lean_object* v_path_966_){
_start:
{
lean_object* v___x_968_; 
lean_inc_ref(v_module_965_);
v___x_968_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_module_965_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v___x_970_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(v_module_965_, v_a_969_, v_path_966_);
lean_dec_ref(v_module_965_);
return v___x_970_;
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
lean_dec(v_path_966_);
lean_dec_ref(v_module_965_);
v_a_971_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_968_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_968_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0___boxed(lean_object* v_module_979_, lean_object* v_path_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v_module_979_, v_path_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode(){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v___x_988_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_989_ = ((lean_object*)(l_Lasm_JS_Node_process_exitCode___closed__1));
v___x_990_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v___x_988_, v___x_989_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode___boxed(lean_object* v_a_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lasm_JS_Node_process_exitCode();
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cached__builtins(){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_998_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_999_ = ((lean_object*)(l_Lasm_JS_Node_process_cached__builtins___closed__1));
v___x_1000_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_998_, v___x_999_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cached__builtins___boxed(lean_object* v_a_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lasm_JS_Node_process_cached__builtins();
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debug(){
_start:
{
lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1009_ = ((lean_object*)(l_Lasm_JS_Node_process_debug___closed__1));
v___x_1010_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1008_, v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_debug___boxed(lean_object* v_a_1011_){
_start:
{
lean_object* v_res_1012_; 
v_res_1012_ = l_Lasm_JS_Node_process_debug();
return v_res_1012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_inspector(){
_start:
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1018_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1019_ = ((lean_object*)(l_Lasm_JS_Node_process_inspector___closed__1));
v___x_1020_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1018_, v___x_1019_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_inspector___boxed(lean_object* v_a_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lasm_JS_Node_process_inspector();
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ipv6(){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1029_ = ((lean_object*)(l_Lasm_JS_Node_process_ipv6___closed__1));
v___x_1030_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1028_, v___x_1029_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ipv6___boxed(lean_object* v_a_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lasm_JS_Node_process_ipv6();
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_require__module(){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1038_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1039_ = ((lean_object*)(l_Lasm_JS_Node_process_require__module___closed__1));
v___x_1040_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1038_, v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_require__module___boxed(lean_object* v_a_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lasm_JS_Node_process_require__module();
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls(){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1048_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1049_ = ((lean_object*)(l_Lasm_JS_Node_process_tls___closed__1));
v___x_1050_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1048_, v___x_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls___boxed(lean_object* v_a_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lasm_JS_Node_process_tls();
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__alpn(){
_start:
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1059_ = ((lean_object*)(l_Lasm_JS_Node_process_tls__alpn___closed__1));
v___x_1060_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1058_, v___x_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__alpn___boxed(lean_object* v_a_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l_Lasm_JS_Node_process_tls__alpn();
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__ocsp(){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1068_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1069_ = ((lean_object*)(l_Lasm_JS_Node_process_tls__ocsp___closed__1));
v___x_1070_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1068_, v___x_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__ocsp___boxed(lean_object* v_a_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lasm_JS_Node_process_tls__ocsp();
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__sni(){
_start:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1078_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Node_process_tls__sni___closed__1));
v___x_1080_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1078_, v___x_1079_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_tls__sni___boxed(lean_object* v_a_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lasm_JS_Node_process_tls__sni();
return v_res_1082_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_1084_ = lean_string_utf8_byte_size(v___x_1083_);
return v___x_1084_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1085_ = lean_unsigned_to_nat(0u);
v___x_1086_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0);
v___x_1087_ = lean_nat_dec_eq(v___x_1086_, v___x_1085_);
return v___x_1087_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_1089_, lean_object* v_d_1090_){
_start:
{
lean_object* v___y_1093_; lean_object* v___y_1094_; 
switch(lean_obj_tag(v_d_1090_))
{
case 2:
{
uint8_t v_b_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1106_; 
v_b_1098_ = lean_ctor_get_uint8(v_d_1090_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v_d_1090_);
if (v_isSharedCheck_1106_ == 0)
{
v___x_1100_ = v_d_1090_;
v_isShared_1101_ = v_isSharedCheck_1106_;
goto v_resetjp_1099_;
}
else
{
lean_dec(v_d_1090_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1106_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
lean_ctor_set_tag(v___x_1100_, 0);
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1105_, 0, v_b_1098_);
v___x_1103_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_1104_; 
v___x_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
return v___x_1104_;
}
}
}
case 4:
{
lean_object* v_s_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1115_; 
v_s_1107_ = lean_ctor_get(v_d_1090_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v_d_1090_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1109_ = v_d_1090_;
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_s_1107_);
lean_dec(v_d_1090_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1115_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
lean_ctor_set_tag(v___x_1109_, 1);
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_s_1107_);
v___x_1112_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1112_);
return v___x_1113_;
}
}
}
default: 
{
lean_object* v___x_1116_; lean_object* v_received_1118_; 
v___x_1116_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
if (lean_obj_tag(v_d_1090_) == 9)
{
lean_object* v_value_1132_; lean_object* v_description_1133_; uint8_t v___x_1134_; 
v_value_1132_ = lean_ctor_get(v_d_1090_, 0);
v_description_1133_ = lean_ctor_get(v_d_1090_, 1);
v___x_1134_ = lean_string_dec_eq(v_description_1133_, v___x_1116_);
if (v___x_1134_ == 0)
{
goto v___jp_1130_;
}
else
{
uint32_t v___x_1135_; uint64_t v___x_1136_; lean_object* v___x_1137_; uint32_t v___x_1138_; lean_object* v___x_1139_; 
lean_inc_n(v_value_1132_, 2);
lean_dec_ref_known(v_d_1090_, 2);
v___x_1135_ = 206;
v___x_1136_ = 0ULL;
v___x_1137_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1137_, 0, v_value_1132_);
lean_ctor_set(v___x_1137_, 1, v___x_1116_);
v___x_1138_ = lasm_js_value_handle(v_value_1132_);
lean_dec(v_value_1132_);
v___x_1139_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1135_, v___x_1136_, v___x_1137_, v___x_1138_);
lean_dec_ref_known(v___x_1137_, 2);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; uint8_t v___x_1141_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v___x_1141_ = lean_string_validate_utf8(v_a_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
lean_dec(v_a_1140_);
v___x_1142_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9);
v___x_1143_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1142_);
v_received_1118_ = v___x_1143_;
goto v___jp_1117_;
}
else
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_string_from_utf8_unchecked(v_a_1140_);
v_received_1118_ = v___x_1144_;
goto v___jp_1117_;
}
}
else
{
lean_object* v___x_1145_; 
lean_dec_ref_known(v___x_1139_, 1);
v___x_1145_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10));
v_received_1118_ = v___x_1145_;
goto v___jp_1117_;
}
}
}
else
{
goto v___jp_1130_;
}
v___jp_1117_:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1119_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1120_ = lean_string_append(v___x_1119_, v_context_1089_);
v___x_1121_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_1122_ = lean_string_append(v___x_1120_, v___x_1121_);
v___x_1123_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSBooleanOrDOMString___closed__1));
v___x_1124_ = lean_string_append(v___x_1122_, v___x_1123_);
v___x_1125_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_1126_ = lean_string_append(v___x_1124_, v___x_1125_);
v___x_1127_ = lean_string_append(v___x_1126_, v_received_1118_);
lean_dec_ref(v_received_1118_);
v___x_1128_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1);
if (v___x_1128_ == 0)
{
lean_object* v___x_1129_; 
v___x_1129_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___y_1093_ = v___x_1127_;
v___y_1094_ = v___x_1129_;
goto v___jp_1092_;
}
else
{
v___y_1093_ = v___x_1127_;
v___y_1094_ = v___x_1116_;
goto v___jp_1092_;
}
}
v___jp_1130_:
{
lean_object* v___x_1131_; 
v___x_1131_ = l_Lasm_JS_Data_describe(v_d_1090_);
v_received_1118_ = v___x_1131_;
goto v___jp_1117_;
}
}
}
v___jp_1092_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1095_ = lean_string_append(v___y_1093_, v___y_1094_);
v___x_1096_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
return v___x_1097_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_1146_, lean_object* v_d_1147_, lean_object* v_a_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_1146_, v_d_1147_);
lean_dec_ref(v_context_1146_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_1150_, lean_object* v_bytes_1151_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1151_);
if (lean_obj_tag(v___x_1153_) == 0)
{
lean_object* v_a_1154_; lean_object* v___x_1155_; 
v_a_1154_ = lean_ctor_get(v___x_1153_, 0);
lean_inc(v_a_1154_);
lean_dec_ref_known(v___x_1153_, 1);
v___x_1155_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_1150_, v_a_1154_);
return v___x_1155_;
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
v_a_1156_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1153_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1153_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1164_, lean_object* v_bytes_1165_, lean_object* v_a_1166_){
_start:
{
lean_object* v_res_1167_; 
v_res_1167_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2(v_context_1164_, v_bytes_1165_);
lean_dec_ref(v_bytes_1165_);
lean_dec_ref(v_context_1164_);
return v_res_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1(lean_object* v_o_1168_, lean_object* v_key_1169_){
_start:
{
lean_object* v_k_1171_; lean_object* v___x_1172_; 
v_k_1171_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1171_, 0, v_key_1169_);
v___x_1172_ = l_Lasm_JS_Wire_encodeIO(v_k_1171_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; uint32_t v___x_1174_; uint32_t v___x_1175_; uint64_t v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1174_ = 203;
v___x_1175_ = lasm_js_value_handle(v_o_1168_);
v___x_1176_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0);
v___x_1177_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_1178_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1178_, 0, v_o_1168_);
lean_ctor_set(v___x_1178_, 1, v___x_1177_);
v___x_1179_ = lean_unsigned_to_nat(2u);
v___x_1180_ = lean_mk_empty_array_with_capacity(v___x_1179_);
lean_inc_ref(v_k_1171_);
v___x_1181_ = lean_array_push(v___x_1180_, v_k_1171_);
v___x_1182_ = lean_array_push(v___x_1181_, v___x_1178_);
v___x_1183_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
v___x_1184_ = lasm_js_call(v___x_1174_, v___x_1175_, v___x_1176_, v_a_1173_, v___x_1183_);
lean_dec_ref_known(v___x_1183_, 1);
lean_dec(v_a_1173_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_object* v_a_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v_a_1185_ = lean_ctor_get(v___x_1184_, 0);
lean_inc(v_a_1185_);
lean_dec_ref_known(v___x_1184_, 1);
v___x_1186_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__1));
v___x_1187_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1171_);
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1_spec__2(v___x_1188_, v_a_1185_);
lean_dec(v_a_1185_);
lean_dec_ref(v___x_1188_);
return v___x_1189_;
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
lean_dec_ref_known(v_k_1171_, 1);
v_a_1190_ = lean_ctor_get(v___x_1184_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1184_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1184_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1184_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
else
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec_ref_known(v_k_1171_, 1);
lean_dec(v_o_1168_);
v_a_1198_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1172_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1172_);
v___x_1200_ = lean_box(0);
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
v_resetjp_1199_:
{
lean_object* v___x_1203_; 
if (v_isShared_1201_ == 0)
{
v___x_1203_ = v___x_1200_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v_a_1198_);
v___x_1203_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
return v___x_1203_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1206_, lean_object* v_key_1207_, lean_object* v_a_1208_){
_start:
{
lean_object* v_res_1209_; 
v_res_1209_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1(v_o_1206_, v_key_1207_);
return v_res_1209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0(lean_object* v_module_1210_, lean_object* v_o_1211_, lean_object* v_a_1212_){
_start:
{
if (lean_obj_tag(v_a_1212_) == 0)
{
lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_dec(v_o_1211_);
v___x_1214_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0));
v___x_1215_ = lean_string_append(v___x_1214_, v_module_1210_);
v___x_1216_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
v___x_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
return v___x_1217_;
}
else
{
lean_object* v_tail_1218_; 
v_tail_1218_ = lean_ctor_get(v_a_1212_, 1);
if (lean_obj_tag(v_tail_1218_) == 0)
{
lean_object* v_head_1219_; lean_object* v___x_1220_; 
v_head_1219_ = lean_ctor_get(v_a_1212_, 0);
lean_inc(v_head_1219_);
lean_dec_ref_known(v_a_1212_, 2);
v___x_1220_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0_spec__1(v_o_1211_, v_head_1219_);
return v___x_1220_;
}
else
{
lean_object* v_head_1221_; lean_object* v___x_1222_; 
lean_inc(v_tail_1218_);
v_head_1221_ = lean_ctor_get(v_a_1212_, 0);
lean_inc(v_head_1221_);
lean_dec_ref_known(v_a_1212_, 2);
v___x_1222_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1211_, v_head_1221_);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_object* v_a_1223_; 
v_a_1223_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_a_1223_);
lean_dec_ref_known(v___x_1222_, 1);
v_o_1211_ = v_a_1223_;
v_a_1212_ = v_tail_1218_;
goto _start;
}
else
{
lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_tail_1218_);
v_a_1225_ = lean_ctor_get(v___x_1222_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1222_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1222_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1222_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0___boxed(lean_object* v_module_1233_, lean_object* v_o_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
lean_object* v_res_1237_; 
v_res_1237_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0(v_module_1233_, v_o_1234_, v_a_1235_);
lean_dec_ref(v_module_1233_);
return v_res_1237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0(lean_object* v_module_1238_, lean_object* v_path_1239_){
_start:
{
lean_object* v___x_1241_; 
lean_inc_ref(v_module_1238_);
v___x_1241_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0_spec__0(v_module_1238_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1243_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1241_, 1);
v___x_1243_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0_spec__0(v_module_1238_, v_a_1242_, v_path_1239_);
lean_dec_ref(v_module_1238_);
return v___x_1243_;
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
lean_dec(v_path_1239_);
lean_dec_ref(v_module_1238_);
v_a_1244_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1241_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1241_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0___boxed(lean_object* v_module_1252_, lean_object* v_path_1253_, lean_object* v_a_1254_){
_start:
{
lean_object* v_res_1255_; 
v_res_1255_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0(v_module_1252_, v_path_1253_);
return v_res_1255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_typescript(){
_start:
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1262_ = ((lean_object*)(l_Lasm_JS_Node_process_typescript___closed__1));
v___x_1263_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0(v___x_1261_, v___x_1262_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_typescript___boxed(lean_object* v_a_1264_){
_start:
{
lean_object* v_res_1265_; 
v_res_1265_ = l_Lasm_JS_Node_process_typescript();
return v_res_1265_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uv(){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1271_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1272_ = ((lean_object*)(l_Lasm_JS_Node_process_uv___closed__1));
v___x_1273_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1271_, v___x_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uv___boxed(lean_object* v_a_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = l_Lasm_JS_Node_process_uv();
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_mainModule(){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1282_ = ((lean_object*)(l_Lasm_JS_Node_process_mainModule___closed__1));
v___x_1283_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_1281_, v___x_1282_);
return v___x_1283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_mainModule___boxed(lean_object* v_a_1284_){
_start:
{
lean_object* v_res_1285_; 
v_res_1285_ = l_Lasm_JS_Node_process_mainModule();
return v_res_1285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_noDeprecation(){
_start:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1292_ = ((lean_object*)(l_Lasm_JS_Node_process_noDeprecation___closed__1));
v___x_1293_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1291_, v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_noDeprecation___boxed(lean_object* v_a_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l_Lasm_JS_Node_process_noDeprecation();
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission(){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1302_ = ((lean_object*)(l_Lasm_JS_Node_process_permission___closed__1));
v___x_1303_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_1301_, v___x_1302_);
return v___x_1303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission___boxed(lean_object* v_a_1304_){
_start:
{
lean_object* v_res_1305_; 
v_res_1305_ = l_Lasm_JS_Node_process_permission();
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid(){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1311_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1312_ = ((lean_object*)(l_Lasm_JS_Node_process_pid___closed__1));
v___x_1313_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_1311_, v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid___boxed(lean_object* v_a_1314_){
_start:
{
lean_object* v_res_1315_; 
v_res_1315_ = l_Lasm_JS_Node_process_pid();
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform(){
_start:
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1322_ = ((lean_object*)(l_Lasm_JS_Node_process_platform___closed__1));
v___x_1323_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1321_, v___x_1322_);
return v___x_1323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform___boxed(lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l_Lasm_JS_Node_process_platform();
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid(){
_start:
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; 
v___x_1331_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1332_ = ((lean_object*)(l_Lasm_JS_Node_process_ppid___closed__1));
v___x_1333_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_1331_, v___x_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid___boxed(lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lasm_JS_Node_process_ppid();
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_release(){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1341_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1342_ = ((lean_object*)(l_Lasm_JS_Node_process_release___closed__1));
v___x_1343_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_1341_, v___x_1342_);
return v___x_1343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_release___boxed(lean_object* v_a_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lasm_JS_Node_process_release();
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report(){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1351_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1352_ = ((lean_object*)(l_Lasm_JS_Node_process_report___closed__1));
v___x_1353_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_1351_, v___x_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report___boxed(lean_object* v_a_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lasm_JS_Node_process_report();
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_sourceMapsEnabled(){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1361_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1362_ = ((lean_object*)(l_Lasm_JS_Node_process_sourceMapsEnabled___closed__1));
v___x_1363_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1361_, v___x_1362_);
return v___x_1363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_sourceMapsEnabled___boxed(lean_object* v_a_1364_){
_start:
{
lean_object* v_res_1365_; 
v_res_1365_ = l_Lasm_JS_Node_process_sourceMapsEnabled();
return v_res_1365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stderr(){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1371_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1372_ = ((lean_object*)(l_Lasm_JS_Node_process_stderr___closed__1));
v___x_1373_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_1371_, v___x_1372_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1376_; uint8_t v_isShared_1377_; uint8_t v_isSharedCheck_1381_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1381_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1381_ == 0)
{
v___x_1376_ = v___x_1373_;
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
else
{
lean_inc(v_a_1374_);
lean_dec(v___x_1373_);
v___x_1376_ = lean_box(0);
v_isShared_1377_ = v_isSharedCheck_1381_;
goto v_resetjp_1375_;
}
v_resetjp_1375_:
{
lean_object* v___x_1379_; 
if (v_isShared_1377_ == 0)
{
v___x_1379_ = v___x_1376_;
goto v_reusejp_1378_;
}
else
{
lean_object* v_reuseFailAlloc_1380_; 
v_reuseFailAlloc_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1380_, 0, v_a_1374_);
v___x_1379_ = v_reuseFailAlloc_1380_;
goto v_reusejp_1378_;
}
v_reusejp_1378_:
{
return v___x_1379_;
}
}
}
else
{
lean_object* v_a_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1389_; 
v_a_1382_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1384_ = v___x_1373_;
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_a_1382_);
lean_dec(v___x_1373_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1389_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1387_; 
if (v_isShared_1385_ == 0)
{
v___x_1387_ = v___x_1384_;
goto v_reusejp_1386_;
}
else
{
lean_object* v_reuseFailAlloc_1388_; 
v_reuseFailAlloc_1388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1388_, 0, v_a_1382_);
v___x_1387_ = v_reuseFailAlloc_1388_;
goto v_reusejp_1386_;
}
v_reusejp_1386_:
{
return v___x_1387_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stderr___boxed(lean_object* v_a_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l_Lasm_JS_Node_process_stderr();
return v_res_1391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdin(){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1397_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1398_ = ((lean_object*)(l_Lasm_JS_Node_process_stdin___closed__1));
v___x_1399_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_1397_, v___x_1398_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; lean_object* v___x_1402_; uint8_t v_isShared_1403_; uint8_t v_isSharedCheck_1407_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1402_ = v___x_1399_;
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
else
{
lean_inc(v_a_1400_);
lean_dec(v___x_1399_);
v___x_1402_ = lean_box(0);
v_isShared_1403_ = v_isSharedCheck_1407_;
goto v_resetjp_1401_;
}
v_resetjp_1401_:
{
lean_object* v___x_1405_; 
if (v_isShared_1403_ == 0)
{
v___x_1405_ = v___x_1402_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_a_1400_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
v_a_1408_ = lean_ctor_get(v___x_1399_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1399_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1399_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdin___boxed(lean_object* v_a_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = l_Lasm_JS_Node_process_stdin();
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdout(){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1423_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1424_ = ((lean_object*)(l_Lasm_JS_Node_process_stdout___closed__1));
v___x_1425_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_1423_, v___x_1424_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1425_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1425_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
else
{
lean_object* v_a_1434_; lean_object* v___x_1436_; uint8_t v_isShared_1437_; uint8_t v_isSharedCheck_1441_; 
v_a_1434_ = lean_ctor_get(v___x_1425_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1425_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1436_ = v___x_1425_;
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
else
{
lean_inc(v_a_1434_);
lean_dec(v___x_1425_);
v___x_1436_ = lean_box(0);
v_isShared_1437_ = v_isSharedCheck_1441_;
goto v_resetjp_1435_;
}
v_resetjp_1435_:
{
lean_object* v___x_1439_; 
if (v_isShared_1437_ == 0)
{
v___x_1439_ = v___x_1436_;
goto v_reusejp_1438_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v_a_1434_);
v___x_1439_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1438_;
}
v_reusejp_1438_:
{
return v___x_1439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_stdout___boxed(lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lasm_JS_Node_process_stdout();
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_throwDeprecation(){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Node_process_throwDeprecation___closed__1));
v___x_1451_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1449_, v___x_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_throwDeprecation___boxed(lean_object* v_a_1452_){
_start:
{
lean_object* v_res_1453_; 
v_res_1453_ = l_Lasm_JS_Node_process_throwDeprecation();
return v_res_1453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title(){
_start:
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1459_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1460_ = ((lean_object*)(l_Lasm_JS_Node_process_title___closed__1));
v___x_1461_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1459_, v___x_1460_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title___boxed(lean_object* v_a_1462_){
_start:
{
lean_object* v_res_1463_; 
v_res_1463_ = l_Lasm_JS_Node_process_title();
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceDeprecation(){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; 
v___x_1469_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1470_ = ((lean_object*)(l_Lasm_JS_Node_process_traceDeprecation___closed__1));
v___x_1471_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1469_, v___x_1470_);
return v___x_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceDeprecation___boxed(lean_object* v_a_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Lasm_JS_Node_process_traceDeprecation();
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceProcessWarnings(){
_start:
{
lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1479_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1480_ = ((lean_object*)(l_Lasm_JS_Node_process_traceProcessWarnings___closed__1));
v___x_1481_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_1479_, v___x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_traceProcessWarnings___boxed(lean_object* v_a_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Lasm_JS_Node_process_traceProcessWarnings();
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version(){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v___x_1489_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1490_ = ((lean_object*)(l_Lasm_JS_Node_process_version___closed__1));
v___x_1491_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1489_, v___x_1490_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version___boxed(lean_object* v_a_1492_){
_start:
{
lean_object* v_res_1493_; 
v_res_1493_ = l_Lasm_JS_Node_process_version();
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions(){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_1500_ = ((lean_object*)(l_Lasm_JS_Node_process_versions___closed__1));
v___x_1501_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_1499_, v___x_1500_);
if (lean_obj_tag(v___x_1501_) == 0)
{
lean_object* v_a_1502_; lean_object* v___x_1503_; 
v_a_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc(v_a_1502_);
lean_dec_ref_known(v___x_1501_, 1);
v___x_1503_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__0(v_a_1502_);
return v___x_1503_;
}
else
{
lean_object* v_a_1504_; lean_object* v___x_1506_; uint8_t v_isShared_1507_; uint8_t v_isSharedCheck_1511_; 
v_a_1504_ = lean_ctor_get(v___x_1501_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v___x_1501_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1506_ = v___x_1501_;
v_isShared_1507_ = v_isSharedCheck_1511_;
goto v_resetjp_1505_;
}
else
{
lean_inc(v_a_1504_);
lean_dec(v___x_1501_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions___boxed(lean_object* v_a_1512_){
_start:
{
lean_object* v_res_1513_; 
v_res_1513_ = l_Lasm_JS_Node_process_versions();
return v_res_1513_;
}
}
static lean_object* _init_l_Lasm_JS_Node_process_abort___closed__4(void){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = ((lean_object*)(l_Lasm_JS_Node_process_abort___closed__3));
v___x_1525_ = l_Lasm_JS_Web_Support_args(v___x_1524_);
return v___x_1525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_abort(){
_start:
{
uint8_t v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1527_ = 0;
v___x_1528_ = ((lean_object*)(l_Lasm_JS_Node_process_abort___closed__2));
v___x_1529_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1530_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1528_, v___x_1529_, v___x_1527_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_abort___boxed(lean_object* v_a_1531_){
_start:
{
lean_object* v_res_1532_; 
v_res_1532_ = l_Lasm_JS_Node_process_abort();
return v_res_1532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_availableMemory(){
_start:
{
uint8_t v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1542_ = 0;
v___x_1543_ = ((lean_object*)(l_Lasm_JS_Node_process_availableMemory___closed__2));
v___x_1544_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1545_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(v___x_1543_, v___x_1544_, v___x_1542_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_availableMemory___boxed(lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lasm_JS_Node_process_availableMemory();
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir(lean_object* v_directory_1556_){
_start:
{
uint8_t v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
v___x_1558_ = 0;
v___x_1559_ = lean_unsigned_to_nat(1u);
v___x_1560_ = ((lean_object*)(l_Lasm_JS_Node_process_chdir___closed__2));
v___x_1561_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1561_, 0, v_directory_1556_);
v___x_1562_ = lean_mk_empty_array_with_capacity(v___x_1559_);
v___x_1563_ = lean_array_push(v___x_1562_, v___x_1561_);
v___x_1564_ = l_Lasm_JS_Web_Support_args(v___x_1563_);
v___x_1565_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1560_, v___x_1564_, v___x_1558_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir___boxed(lean_object* v_directory_1566_, lean_object* v_a_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lasm_JS_Node_process_chdir(v_directory_1566_);
return v_res_1568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_constrainedMemory(){
_start:
{
uint8_t v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___x_1578_ = 0;
v___x_1579_ = ((lean_object*)(l_Lasm_JS_Node_process_constrainedMemory___closed__2));
v___x_1580_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1581_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(v___x_1579_, v___x_1580_, v___x_1578_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_constrainedMemory___boxed(lean_object* v_a_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lasm_JS_Node_process_constrainedMemory();
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cpuUsage(lean_object* v_previousValue_1592_){
_start:
{
uint8_t v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1594_ = 0;
v___x_1595_ = lean_unsigned_to_nat(1u);
v___x_1596_ = ((lean_object*)(l_Lasm_JS_Node_process_cpuUsage___closed__2));
v___x_1597_ = lean_mk_empty_array_with_capacity(v___x_1595_);
v___x_1598_ = lean_array_push(v___x_1597_, v_previousValue_1592_);
v___x_1599_ = l_Lasm_JS_Web_Support_args(v___x_1598_);
v___x_1600_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_1596_, v___x_1599_, v___x_1594_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cpuUsage___boxed(lean_object* v_previousValue_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lasm_JS_Node_process_cpuUsage(v_previousValue_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd(){
_start:
{
uint8_t v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1613_ = 0;
v___x_1614_ = ((lean_object*)(l_Lasm_JS_Node_process_cwd___closed__2));
v___x_1615_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1616_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(v___x_1614_, v___x_1615_, v___x_1613_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd___boxed(lean_object* v_a_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l_Lasm_JS_Node_process_cwd();
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_disconnect(){
_start:
{
uint8_t v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1628_ = 0;
v___x_1629_ = ((lean_object*)(l_Lasm_JS_Node_process_disconnect___closed__2));
v___x_1630_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1631_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1629_, v___x_1630_, v___x_1628_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_disconnect___boxed(lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l_Lasm_JS_Node_process_disconnect();
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_dlopen(lean_object* v_module___1642_, lean_object* v_filename_1643_, lean_object* v_flags_1644_){
_start:
{
uint8_t v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1646_ = 0;
v___x_1647_ = lean_unsigned_to_nat(3u);
v___x_1648_ = ((lean_object*)(l_Lasm_JS_Node_process_dlopen___closed__2));
v___x_1649_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1649_, 0, v_filename_1643_);
v___x_1650_ = lean_mk_empty_array_with_capacity(v___x_1647_);
v___x_1651_ = lean_array_push(v___x_1650_, v_module___1642_);
v___x_1652_ = lean_array_push(v___x_1651_, v___x_1649_);
v___x_1653_ = lean_array_push(v___x_1652_, v_flags_1644_);
v___x_1654_ = l_Lasm_JS_Web_Support_args(v___x_1653_);
v___x_1655_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1648_, v___x_1654_, v___x_1646_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_dlopen___boxed(lean_object* v_module___1656_, lean_object* v_filename_1657_, lean_object* v_flags_1658_, lean_object* v_a_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lasm_JS_Node_process_dlopen(v_module___1656_, v_filename_1657_, v_flags_1658_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_emitWarning_spec__0(lean_object* v_x_1661_){
_start:
{
if (lean_obj_tag(v_x_1661_) == 0)
{
lean_object* v___x_1662_; 
v___x_1662_ = lean_box(0);
return v___x_1662_;
}
else
{
lean_object* v_val_1663_; lean_object* v_type_1664_; lean_object* v_code_1665_; lean_object* v_ctor_1666_; lean_object* v_detail_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v_val_1663_ = lean_ctor_get(v_x_1661_, 0);
lean_inc(v_val_1663_);
lean_dec_ref_known(v_x_1661_, 1);
v_type_1664_ = lean_ctor_get(v_val_1663_, 0);
lean_inc(v_type_1664_);
v_code_1665_ = lean_ctor_get(v_val_1663_, 1);
lean_inc(v_code_1665_);
v_ctor_1666_ = lean_ctor_get(v_val_1663_, 2);
lean_inc(v_ctor_1666_);
v_detail_1667_ = lean_ctor_get(v_val_1663_, 3);
lean_inc(v_detail_1667_);
lean_dec(v_val_1663_);
v___x_1668_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__0));
v___x_1669_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_1664_);
v___x_1670_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1668_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__1));
v___x_1672_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_code_1665_);
v___x_1673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1673_, 0, v___x_1671_);
lean_ctor_set(v___x_1673_, 1, v___x_1672_);
v___x_1674_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__2));
v___x_1675_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_ctor_1666_);
lean_dec(v_ctor_1666_);
v___x_1676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1676_, 0, v___x_1674_);
lean_ctor_set(v___x_1676_, 1, v___x_1675_);
v___x_1677_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessEmitWarningOptions___lam__0___closed__3));
v___x_1678_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_detail_1667_);
v___x_1679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1677_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
v___x_1680_ = lean_unsigned_to_nat(4u);
v___x_1681_ = lean_mk_empty_array_with_capacity(v___x_1680_);
v___x_1682_ = lean_array_push(v___x_1681_, v___x_1670_);
v___x_1683_ = lean_array_push(v___x_1682_, v___x_1673_);
v___x_1684_ = lean_array_push(v___x_1683_, v___x_1676_);
v___x_1685_ = lean_array_push(v___x_1684_, v___x_1679_);
v___x_1686_ = l_Lasm_JS_Web_Support_fields(v___x_1685_);
lean_dec_ref(v___x_1685_);
return v___x_1686_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarning(lean_object* v_warning_1695_, lean_object* v_options_1696_){
_start:
{
uint8_t v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1698_ = 0;
v___x_1699_ = lean_unsigned_to_nat(2u);
v___x_1700_ = ((lean_object*)(l_Lasm_JS_Node_process_emitWarning___closed__2));
v___x_1701_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_emitWarning_spec__0(v_options_1696_);
v___x_1702_ = lean_mk_empty_array_with_capacity(v___x_1699_);
v___x_1703_ = lean_array_push(v___x_1702_, v_warning_1695_);
v___x_1704_ = lean_array_push(v___x_1703_, v___x_1701_);
v___x_1705_ = l_Lasm_JS_Web_Support_args(v___x_1704_);
v___x_1706_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1700_, v___x_1705_, v___x_1698_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarning___boxed(lean_object* v_warning_1707_, lean_object* v_options_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lasm_JS_Node_process_emitWarning(v_warning_1707_, v_options_1708_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarningWithType(lean_object* v_warning_1718_, lean_object* v_type_1719_, lean_object* v_code_1720_, lean_object* v_ctor_1721_){
_start:
{
uint8_t v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1723_ = 0;
v___x_1724_ = lean_unsigned_to_nat(4u);
v___x_1725_ = ((lean_object*)(l_Lasm_JS_Node_process_emitWarningWithType___closed__1));
v___x_1726_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_type_1719_);
v___x_1727_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_code_1720_);
v___x_1728_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_async__hooks_createHook_spec__0(v_ctor_1721_);
v___x_1729_ = lean_mk_empty_array_with_capacity(v___x_1724_);
v___x_1730_ = lean_array_push(v___x_1729_, v_warning_1718_);
v___x_1731_ = lean_array_push(v___x_1730_, v___x_1726_);
v___x_1732_ = lean_array_push(v___x_1731_, v___x_1727_);
v___x_1733_ = lean_array_push(v___x_1732_, v___x_1728_);
v___x_1734_ = l_Lasm_JS_Web_Support_args(v___x_1733_);
v___x_1735_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1725_, v___x_1734_, v___x_1723_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_emitWarningWithType___boxed(lean_object* v_warning_1736_, lean_object* v_type_1737_, lean_object* v_code_1738_, lean_object* v_ctor_1739_, lean_object* v_a_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l_Lasm_JS_Node_process_emitWarningWithType(v_warning_1736_, v_type_1737_, v_code_1738_, v_ctor_1739_);
lean_dec(v_ctor_1739_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execve(lean_object* v_file_1750_, lean_object* v_args_1751_, lean_object* v_env_1752_){
_start:
{
uint8_t v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1754_ = 0;
v___x_1755_ = lean_unsigned_to_nat(3u);
v___x_1756_ = ((lean_object*)(l_Lasm_JS_Node_process_execve___closed__2));
v___x_1757_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1757_, 0, v_file_1750_);
v___x_1758_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_events_on_spec__0_spec__0(v_args_1751_);
v___x_1759_ = lean_mk_empty_array_with_capacity(v___x_1755_);
v___x_1760_ = lean_array_push(v___x_1759_, v___x_1757_);
v___x_1761_ = lean_array_push(v___x_1760_, v___x_1758_);
v___x_1762_ = lean_array_push(v___x_1761_, v_env_1752_);
v___x_1763_ = l_Lasm_JS_Web_Support_args(v___x_1762_);
v___x_1764_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1756_, v___x_1763_, v___x_1754_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execve___boxed(lean_object* v_file_1765_, lean_object* v_args_1766_, lean_object* v_env_1767_, lean_object* v_a_1768_){
_start:
{
lean_object* v_res_1769_; 
v_res_1769_ = l_Lasm_JS_Node_process_execve(v_file_1765_, v_args_1766_, v_env_1767_);
return v_res_1769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit(lean_object* v_code_1778_){
_start:
{
uint8_t v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1780_ = 0;
v___x_1781_ = lean_unsigned_to_nat(1u);
v___x_1782_ = ((lean_object*)(l_Lasm_JS_Node_process_exit___closed__2));
v___x_1783_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_fromWithObject_spec__0(v_code_1778_);
v___x_1784_ = lean_mk_empty_array_with_capacity(v___x_1781_);
v___x_1785_ = lean_array_push(v___x_1784_, v___x_1783_);
v___x_1786_ = l_Lasm_JS_Web_Support_args(v___x_1785_);
v___x_1787_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1782_, v___x_1786_, v___x_1780_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit___boxed(lean_object* v_code_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lasm_JS_Node_process_exit(v_code_1788_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getActiveResourcesInfo(){
_start:
{
uint8_t v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1800_ = 0;
v___x_1801_ = ((lean_object*)(l_Lasm_JS_Node_process_getActiveResourcesInfo___closed__2));
v___x_1802_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1803_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_iterate___at___00Lasm_JS_Web_URLSearchParams_keys_spec__0_spec__0(v___x_1801_, v___x_1802_, v___x_1800_);
return v___x_1803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getActiveResourcesInfo___boxed(lean_object* v_a_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lasm_JS_Node_process_getActiveResourcesInfo();
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(lean_object* v_d_1806_){
_start:
{
switch(lean_obj_tag(v_d_1806_))
{
case 1:
{
goto v___jp_1808_;
}
case 0:
{
goto v___jp_1808_;
}
default: 
{
lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1811_, 0, v_d_1806_);
v___x_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1812_, 0, v___x_1811_);
return v___x_1812_;
}
}
v___jp_1808_:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_box(0);
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
return v___x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg___boxed(lean_object* v_d_1813_, lean_object* v_a_1814_){
_start:
{
lean_object* v_res_1815_; 
v_res_1815_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(v_d_1813_);
return v_res_1815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0(lean_object* v_b_1817_, lean_object* v_args_1818_, uint8_t v_await_1819_){
_start:
{
uint64_t v___y_1822_; uint64_t v___y_1823_; uint64_t v___x_1865_; uint64_t v___y_1867_; 
v___x_1865_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0);
if (v_await_1819_ == 0)
{
uint64_t v___x_1872_; 
v___x_1872_ = 0ULL;
v___y_1867_ = v___x_1872_;
goto v___jp_1866_;
}
else
{
uint64_t v___x_1873_; 
v___x_1873_ = 2ULL;
v___y_1867_ = v___x_1873_;
goto v___jp_1866_;
}
v___jp_1821_:
{
uint64_t v_flags_1824_; uint32_t v___x_1825_; lean_object* v___x_1826_; uint32_t v___x_1827_; lean_object* v___x_1828_; 
v_flags_1824_ = lean_uint64_lor(v___y_1822_, v___y_1823_);
v___x_1825_ = 214;
v___x_1826_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1817_, v_args_1818_);
v___x_1827_ = 0;
v___x_1828_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1825_, v_flags_1824_, v___x_1826_, v___x_1827_);
lean_dec(v___x_1826_);
if (lean_obj_tag(v___x_1828_) == 0)
{
if (lean_obj_tag(v___x_1828_) == 0)
{
lean_object* v_a_1829_; lean_object* v___x_1830_; 
v_a_1829_ = lean_ctor_get(v___x_1828_, 0);
lean_inc(v_a_1829_);
lean_dec_ref_known(v___x_1828_, 1);
v___x_1830_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1829_);
lean_dec(v_a_1829_);
if (lean_obj_tag(v___x_1830_) == 0)
{
lean_object* v_a_1831_; lean_object* v___x_1832_; 
v_a_1831_ = lean_ctor_get(v___x_1830_, 0);
lean_inc(v_a_1831_);
lean_dec_ref_known(v___x_1830_, 1);
v___x_1832_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(v_a_1831_);
return v___x_1832_;
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
v_a_1833_ = lean_ctor_get(v___x_1830_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1830_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1830_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1828_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1828_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
lean_ctor_set_tag(v___x_1843_, 1);
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1864_; 
v_a_1849_ = lean_ctor_get(v___x_1828_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1828_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1851_ = v___x_1828_;
v_isShared_1852_ = v_isSharedCheck_1864_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_a_1849_);
lean_dec(v___x_1828_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1864_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v___x_1853_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1854_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1817_);
v___x_1855_ = lean_string_append(v___x_1853_, v___x_1854_);
lean_dec_ref(v___x_1854_);
v___x_1856_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___closed__0));
v___x_1857_ = lean_string_append(v___x_1855_, v___x_1856_);
v___x_1858_ = lean_io_error_to_string(v_a_1849_);
v___x_1859_ = lean_string_append(v___x_1857_, v___x_1858_);
lean_dec_ref(v___x_1858_);
v___x_1860_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1860_, 0, v___x_1859_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 0, v___x_1860_);
v___x_1862_ = v___x_1851_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1860_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
v___jp_1866_:
{
uint8_t v_construct_1868_; uint64_t v___x_1869_; 
v_construct_1868_ = lean_ctor_get_uint8(v_b_1817_, sizeof(void*)*4);
v___x_1869_ = lean_uint64_lor(v___x_1865_, v___y_1867_);
if (v_construct_1868_ == 0)
{
uint64_t v___x_1870_; 
v___x_1870_ = 0ULL;
v___y_1822_ = v___x_1869_;
v___y_1823_ = v___x_1870_;
goto v___jp_1821_;
}
else
{
uint64_t v___x_1871_; 
v___x_1871_ = 4ULL;
v___y_1822_ = v___x_1869_;
v___y_1823_ = v___x_1871_;
goto v___jp_1821_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___boxed(lean_object* v_b_1874_, lean_object* v_args_1875_, lean_object* v_await_1876_, lean_object* v_a_1877_){
_start:
{
uint8_t v_await_boxed_1878_; lean_object* v_res_1879_; 
v_await_boxed_1878_ = lean_unbox(v_await_1876_);
v_res_1879_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0(v_b_1874_, v_args_1875_, v_await_boxed_1878_);
lean_dec_ref(v_b_1874_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getBuiltinModule(lean_object* v_id_1888_){
_start:
{
uint8_t v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1890_ = 0;
v___x_1891_ = lean_unsigned_to_nat(1u);
v___x_1892_ = ((lean_object*)(l_Lasm_JS_Node_process_getBuiltinModule___closed__2));
v___x_1893_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1893_, 0, v_id_1888_);
v___x_1894_ = lean_mk_empty_array_with_capacity(v___x_1891_);
v___x_1895_ = lean_array_push(v___x_1894_, v___x_1893_);
v___x_1896_ = l_Lasm_JS_Web_Support_args(v___x_1895_);
v___x_1897_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0(v___x_1892_, v___x_1896_, v___x_1890_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getBuiltinModule___boxed(lean_object* v_id_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lasm_JS_Node_process_getBuiltinModule(v_id_1898_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0(lean_object* v_context_1901_, lean_object* v_d_1902_){
_start:
{
lean_object* v___x_1904_; 
v___x_1904_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___redArg(v_d_1902_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0___boxed(lean_object* v_context_1905_, lean_object* v_d_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_res_1908_; 
v_res_1908_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0_spec__0(v_context_1905_, v_d_1906_);
lean_dec_ref(v_context_1905_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getegid(){
_start:
{
uint8_t v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1918_ = 0;
v___x_1919_ = ((lean_object*)(l_Lasm_JS_Node_process_getegid___closed__2));
v___x_1920_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1921_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_1919_, v___x_1920_, v___x_1918_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getegid___boxed(lean_object* v_a_1922_){
_start:
{
lean_object* v_res_1923_; 
v_res_1923_ = l_Lasm_JS_Node_process_getegid();
return v_res_1923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_geteuid(){
_start:
{
uint8_t v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1933_ = 0;
v___x_1934_ = ((lean_object*)(l_Lasm_JS_Node_process_geteuid___closed__2));
v___x_1935_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1936_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_1934_, v___x_1935_, v___x_1933_);
return v___x_1936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_geteuid___boxed(lean_object* v_a_1937_){
_start:
{
lean_object* v_res_1938_; 
v_res_1938_ = l_Lasm_JS_Node_process_geteuid();
return v_res_1938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgid(){
_start:
{
uint8_t v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1948_ = 0;
v___x_1949_ = ((lean_object*)(l_Lasm_JS_Node_process_getgid___closed__2));
v___x_1950_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_1951_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_1949_, v___x_1950_, v___x_1948_);
return v___x_1951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgid___boxed(lean_object* v_a_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lasm_JS_Node_process_getgid();
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1(size_t v_sz_1958_, size_t v_i_1959_, lean_object* v_bs_1960_){
_start:
{
uint8_t v___x_1961_; 
v___x_1961_ = lean_usize_dec_lt(v_i_1959_, v_sz_1958_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; 
v___x_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1962_, 0, v_bs_1960_);
return v___x_1962_;
}
else
{
lean_object* v_v_1963_; lean_object* v___x_1964_; lean_object* v_bs_x27_1965_; lean_object* v_a_1967_; 
v_v_1963_ = lean_array_uget(v_bs_1960_, v_i_1959_);
v___x_1964_ = lean_unsigned_to_nat(0u);
v_bs_x27_1965_ = lean_array_uset(v_bs_1960_, v_i_1959_, v___x_1964_);
switch(lean_obj_tag(v_v_1963_))
{
case 3:
{
double v_n_1972_; lean_object* v___x_1973_; 
v_n_1972_ = lean_ctor_get_float(v_v_1963_, 0);
lean_dec_ref_known(v_v_1963_, 0);
v___x_1973_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1972_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v___x_1974_; 
lean_dec_ref(v_bs_x27_1965_);
v___x_1974_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__0));
return v___x_1974_;
}
else
{
lean_object* v_val_1975_; 
v_val_1975_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_val_1975_);
lean_dec_ref_known(v___x_1973_, 1);
v_a_1967_ = v_val_1975_;
goto v___jp_1966_;
}
}
case 5:
{
lean_object* v_i_1976_; 
v_i_1976_ = lean_ctor_get(v_v_1963_, 0);
lean_inc(v_i_1976_);
lean_dec_ref_known(v_v_1963_, 1);
v_a_1967_ = v_i_1976_;
goto v___jp_1966_;
}
default: 
{
lean_object* v___x_1977_; 
lean_dec_ref(v_bs_x27_1965_);
lean_dec(v_v_1963_);
v___x_1977_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___closed__1));
return v___x_1977_;
}
}
v___jp_1966_:
{
size_t v___x_1968_; size_t v___x_1969_; lean_object* v___x_1970_; 
v___x_1968_ = ((size_t)1ULL);
v___x_1969_ = lean_usize_add(v_i_1959_, v___x_1968_);
v___x_1970_ = lean_array_uset(v_bs_x27_1965_, v_i_1959_, v_a_1967_);
v_i_1959_ = v___x_1969_;
v_bs_1960_ = v___x_1970_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_1978_, lean_object* v_i_1979_, lean_object* v_bs_1980_){
_start:
{
size_t v_sz_boxed_1981_; size_t v_i_boxed_1982_; lean_object* v_res_1983_; 
v_sz_boxed_1981_ = lean_unbox_usize(v_sz_1978_);
lean_dec(v_sz_1978_);
v_i_boxed_1982_ = lean_unbox_usize(v_i_1979_);
lean_dec(v_i_1979_);
v_res_1983_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1(v_sz_boxed_1981_, v_i_boxed_1982_, v_bs_1980_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0(lean_object* v_context_1986_, lean_object* v_d_1987_){
_start:
{
lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1996_; lean_object* v_received_1997_; lean_object* v___y_2016_; lean_object* v_a_2019_; 
if (lean_obj_tag(v_d_1987_) == 7)
{
lean_object* v_items_2043_; size_t v_sz_2044_; size_t v___x_2045_; lean_object* v___x_2046_; 
v_items_2043_ = lean_ctor_get(v_d_1987_, 0);
v_sz_2044_ = lean_array_size(v_items_2043_);
v___x_2045_ = ((size_t)0ULL);
lean_inc_ref(v_items_2043_);
v___x_2046_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0_spec__1(v_sz_2044_, v___x_2045_, v_items_2043_);
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; uint8_t v___x_2051_; 
v_a_2047_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2047_);
lean_dec_ref_known(v___x_2046_, 1);
v___x_2048_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__1));
v___x_2049_ = lean_string_utf8_byte_size(v_a_2047_);
v___x_2050_ = lean_unsigned_to_nat(0u);
v___x_2051_ = lean_nat_dec_eq(v___x_2049_, v___x_2050_);
if (v___x_2051_ == 0)
{
lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2052_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___closed__0));
v___x_2053_ = lean_string_append(v___x_2052_, v_a_2047_);
lean_dec(v_a_2047_);
v___x_2054_ = lean_string_append(v___x_2048_, v___x_2053_);
lean_dec_ref(v___x_2053_);
v_a_2019_ = v___x_2054_;
goto v___jp_2018_;
}
else
{
lean_dec(v_a_2047_);
v_a_2019_ = v___x_2048_;
goto v___jp_2018_;
}
}
else
{
if (lean_obj_tag(v___x_2046_) == 0)
{
lean_object* v_a_2055_; 
v_a_2055_ = lean_ctor_get(v___x_2046_, 0);
lean_inc(v_a_2055_);
lean_dec_ref_known(v___x_2046_, 1);
v_a_2019_ = v_a_2055_;
goto v___jp_2018_;
}
else
{
lean_object* v_a_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2063_; 
lean_dec_ref_known(v_d_1987_, 1);
v_a_2056_ = lean_ctor_get(v___x_2046_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v___x_2046_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2058_ = v___x_2046_;
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_a_2056_);
lean_dec(v___x_2046_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2063_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2061_; 
if (v_isShared_2059_ == 0)
{
lean_ctor_set_tag(v___x_2058_, 0);
v___x_2061_ = v___x_2058_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_a_2056_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
else
{
lean_object* v___x_2064_; 
v___x_2064_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v_a_2019_ = v___x_2064_;
goto v___jp_2018_;
}
v___jp_1989_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1992_ = lean_string_append(v___y_1990_, v___y_1991_);
lean_dec_ref(v___y_1991_);
v___x_1993_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1992_);
v___x_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
return v___x_1994_;
}
v___jp_1995_:
{
lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; uint8_t v___x_2009_; 
v___x_1998_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1999_ = lean_string_append(v___x_1998_, v_context_1986_);
v___x_2000_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_2001_ = lean_string_append(v___x_1999_, v___x_2000_);
v___x_2002_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___closed__0));
v___x_2003_ = lean_string_append(v___x_2001_, v___x_2002_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_2005_ = lean_string_append(v___x_2003_, v___x_2004_);
v___x_2006_ = lean_string_append(v___x_2005_, v_received_1997_);
lean_dec_ref(v_received_1997_);
v___x_2007_ = lean_string_utf8_byte_size(v___y_1996_);
v___x_2008_ = lean_unsigned_to_nat(0u);
v___x_2009_ = lean_nat_dec_eq(v___x_2007_, v___x_2008_);
if (v___x_2009_ == 0)
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2010_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_2011_ = lean_string_append(v___x_2010_, v___y_1996_);
lean_dec_ref(v___y_1996_);
v___x_2012_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__5));
v___x_2013_ = lean_string_append(v___x_2011_, v___x_2012_);
v___y_1990_ = v___x_2006_;
v___y_1991_ = v___x_2013_;
goto v___jp_1989_;
}
else
{
lean_object* v___x_2014_; 
lean_dec_ref(v___y_1996_);
v___x_2014_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___y_1990_ = v___x_2006_;
v___y_1991_ = v___x_2014_;
goto v___jp_1989_;
}
}
v___jp_2015_:
{
lean_object* v___x_2017_; 
v___x_2017_ = l_Lasm_JS_Data_describe(v_d_1987_);
v___y_1996_ = v___y_2016_;
v_received_1997_ = v___x_2017_;
goto v___jp_1995_;
}
v___jp_2018_:
{
if (lean_obj_tag(v_d_1987_) == 9)
{
lean_object* v_value_2020_; lean_object* v_description_2021_; lean_object* v___x_2022_; uint8_t v___x_2023_; 
v_value_2020_ = lean_ctor_get(v_d_1987_, 0);
v_description_2021_ = lean_ctor_get(v_d_1987_, 1);
v___x_2022_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_2023_ = lean_string_dec_eq(v_description_2021_, v___x_2022_);
if (v___x_2023_ == 0)
{
v___y_2016_ = v_a_2019_;
goto v___jp_2015_;
}
else
{
lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2040_; 
lean_inc(v_value_2020_);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_d_1987_);
if (v_isSharedCheck_2040_ == 0)
{
lean_object* v_unused_2041_; lean_object* v_unused_2042_; 
v_unused_2041_ = lean_ctor_get(v_d_1987_, 1);
lean_dec(v_unused_2041_);
v_unused_2042_ = lean_ctor_get(v_d_1987_, 0);
lean_dec(v_unused_2042_);
v___x_2025_ = v_d_1987_;
v_isShared_2026_ = v_isSharedCheck_2040_;
goto v_resetjp_2024_;
}
else
{
lean_dec(v_d_1987_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2040_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
uint32_t v___x_2027_; uint64_t v___x_2028_; lean_object* v___x_2030_; 
v___x_2027_ = 206;
v___x_2028_ = 0ULL;
lean_inc(v_value_2020_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 1, v___x_2022_);
v___x_2030_ = v___x_2025_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_value_2020_);
lean_ctor_set(v_reuseFailAlloc_2039_, 1, v___x_2022_);
v___x_2030_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
uint32_t v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = lasm_js_value_handle(v_value_2020_);
lean_dec(v_value_2020_);
v___x_2032_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2027_, v___x_2028_, v___x_2030_, v___x_2031_);
lean_dec_ref(v___x_2030_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v_a_2033_; uint8_t v___x_2034_; 
v_a_2033_ = lean_ctor_get(v___x_2032_, 0);
lean_inc(v_a_2033_);
lean_dec_ref_known(v___x_2032_, 1);
v___x_2034_ = lean_string_validate_utf8(v_a_2033_);
if (v___x_2034_ == 0)
{
lean_object* v___x_2035_; lean_object* v___x_2036_; 
lean_dec(v_a_2033_);
v___x_2035_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__9);
v___x_2036_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2035_);
v___y_1996_ = v_a_2019_;
v_received_1997_ = v___x_2036_;
goto v___jp_1995_;
}
else
{
lean_object* v___x_2037_; 
v___x_2037_ = lean_string_from_utf8_unchecked(v_a_2033_);
v___y_1996_ = v_a_2019_;
v_received_1997_ = v___x_2037_;
goto v___jp_1995_;
}
}
else
{
lean_object* v___x_2038_; 
lean_dec_ref_known(v___x_2032_, 1);
v___x_2038_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__10));
v___y_1996_ = v_a_2019_;
v_received_1997_ = v___x_2038_;
goto v___jp_1995_;
}
}
}
}
}
else
{
v___y_2016_ = v_a_2019_;
goto v___jp_2015_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0___boxed(lean_object* v_context_2065_, lean_object* v_d_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0(v_context_2065_, v_d_2066_);
lean_dec_ref(v_context_2065_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0(lean_object* v_b_2069_, lean_object* v_args_2070_, uint8_t v_await_2071_){
_start:
{
uint64_t v___y_2074_; uint64_t v___y_2075_; uint64_t v___x_2118_; uint64_t v___y_2120_; 
v___x_2118_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___closed__0);
if (v_await_2071_ == 0)
{
uint64_t v___x_2125_; 
v___x_2125_ = 0ULL;
v___y_2120_ = v___x_2125_;
goto v___jp_2119_;
}
else
{
uint64_t v___x_2126_; 
v___x_2126_ = 2ULL;
v___y_2120_ = v___x_2126_;
goto v___jp_2119_;
}
v___jp_2073_:
{
uint64_t v_flags_2076_; uint32_t v___x_2077_; lean_object* v___x_2078_; uint32_t v___x_2079_; lean_object* v___x_2080_; 
v_flags_2076_ = lean_uint64_lor(v___y_2074_, v___y_2075_);
v___x_2077_ = 214;
v___x_2078_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2069_, v_args_2070_);
v___x_2079_ = 0;
v___x_2080_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2077_, v_flags_2076_, v___x_2078_, v___x_2079_);
lean_dec(v___x_2078_);
if (lean_obj_tag(v___x_2080_) == 0)
{
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v_a_2081_; lean_object* v___x_2082_; 
v_a_2081_ = lean_ctor_get(v___x_2080_, 0);
lean_inc(v_a_2081_);
lean_dec_ref_known(v___x_2080_, 1);
v___x_2082_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_2081_);
lean_dec(v_a_2081_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2082_, 1);
v___x_2084_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2069_);
v___x_2085_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0_spec__0(v___x_2084_, v_a_2083_);
lean_dec_ref(v___x_2084_);
return v___x_2085_;
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2093_; 
v_a_2086_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2088_ = v___x_2082_;
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2082_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2093_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2091_; 
if (v_isShared_2089_ == 0)
{
v___x_2091_ = v___x_2088_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v_a_2086_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
v_a_2094_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v___x_2080_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2080_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
lean_ctor_set_tag(v___x_2096_, 1);
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2117_; 
v_a_2102_ = lean_ctor_get(v___x_2080_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2104_ = v___x_2080_;
v_isShared_2105_ = v_isSharedCheck_2117_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2080_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2117_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2115_; 
v___x_2106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2107_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2069_);
v___x_2108_ = lean_string_append(v___x_2106_, v___x_2107_);
lean_dec_ref(v___x_2107_);
v___x_2109_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getBuiltinModule_spec__0___closed__0));
v___x_2110_ = lean_string_append(v___x_2108_, v___x_2109_);
v___x_2111_ = lean_io_error_to_string(v_a_2102_);
v___x_2112_ = lean_string_append(v___x_2110_, v___x_2111_);
lean_dec_ref(v___x_2111_);
v___x_2113_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2112_);
if (v_isShared_2105_ == 0)
{
lean_ctor_set(v___x_2104_, 0, v___x_2113_);
v___x_2115_ = v___x_2104_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
v___jp_2119_:
{
uint8_t v_construct_2121_; uint64_t v___x_2122_; 
v_construct_2121_ = lean_ctor_get_uint8(v_b_2069_, sizeof(void*)*4);
v___x_2122_ = lean_uint64_lor(v___x_2118_, v___y_2120_);
if (v_construct_2121_ == 0)
{
uint64_t v___x_2123_; 
v___x_2123_ = 0ULL;
v___y_2074_ = v___x_2122_;
v___y_2075_ = v___x_2123_;
goto v___jp_2073_;
}
else
{
uint64_t v___x_2124_; 
v___x_2124_ = 4ULL;
v___y_2074_ = v___x_2122_;
v___y_2075_ = v___x_2124_;
goto v___jp_2073_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0___boxed(lean_object* v_b_2127_, lean_object* v_args_2128_, lean_object* v_await_2129_, lean_object* v_a_2130_){
_start:
{
uint8_t v_await_boxed_2131_; lean_object* v_res_2132_; 
v_await_boxed_2131_ = lean_unbox(v_await_2129_);
v_res_2132_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0(v_b_2127_, v_args_2128_, v_await_boxed_2131_);
lean_dec_ref(v_b_2127_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgroups(){
_start:
{
uint8_t v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; 
v___x_2142_ = 0;
v___x_2143_ = ((lean_object*)(l_Lasm_JS_Node_process_getgroups___closed__2));
v___x_2144_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_2145_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0(v___x_2143_, v___x_2144_, v___x_2142_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getgroups___boxed(lean_object* v_a_2146_){
_start:
{
lean_object* v_res_2147_; 
v_res_2147_ = l_Lasm_JS_Node_process_getgroups();
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getuid(){
_start:
{
uint8_t v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2157_ = 0;
v___x_2158_ = ((lean_object*)(l_Lasm_JS_Node_process_getuid___closed__2));
v___x_2159_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_2160_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_2158_, v___x_2159_, v___x_2157_);
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_getuid___boxed(lean_object* v_a_2161_){
_start:
{
lean_object* v_res_2162_; 
v_res_2162_ = l_Lasm_JS_Node_process_getuid();
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback(){
_start:
{
uint8_t v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2172_ = 0;
v___x_2173_ = ((lean_object*)(l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___closed__2));
v___x_2174_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_2175_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(v___x_2173_, v___x_2174_, v___x_2172_);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback___boxed(lean_object* v_a_2176_){
_start:
{
lean_object* v_res_2177_; 
v_res_2177_ = l_Lasm_JS_Node_process_hasUncaughtExceptionCaptureCallback();
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_hrtime_spec__0(lean_object* v_x_2178_){
_start:
{
if (lean_obj_tag(v_x_2178_) == 0)
{
lean_object* v___x_2179_; 
v___x_2179_ = lean_box(0);
return v___x_2179_;
}
else
{
lean_object* v_val_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2190_; 
v_val_2180_ = lean_ctor_get(v_x_2178_, 0);
v_isSharedCheck_2190_ = !lean_is_exclusive(v_x_2178_);
if (v_isSharedCheck_2190_ == 0)
{
v___x_2182_ = v_x_2178_;
v_isShared_2183_ = v_isSharedCheck_2190_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_val_2180_);
lean_dec(v_x_2178_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2190_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
size_t v_sz_2184_; size_t v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2188_; 
v_sz_2184_ = lean_array_size(v_val_2180_);
v___x_2185_ = ((size_t)0ULL);
v___x_2186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0(v_sz_2184_, v___x_2185_, v_val_2180_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set_tag(v___x_2182_, 7);
lean_ctor_set(v___x_2182_, 0, v___x_2186_);
v___x_2188_ = v___x_2182_;
goto v_reusejp_2187_;
}
else
{
lean_object* v_reuseFailAlloc_2189_; 
v_reuseFailAlloc_2189_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2189_, 0, v___x_2186_);
v___x_2188_ = v_reuseFailAlloc_2189_;
goto v_reusejp_2187_;
}
v_reusejp_2187_:
{
return v___x_2188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime(lean_object* v_time_2199_){
_start:
{
uint8_t v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2201_ = 0;
v___x_2202_ = lean_unsigned_to_nat(1u);
v___x_2203_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime___closed__2));
v___x_2204_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_hrtime_spec__0(v_time_2199_);
v___x_2205_ = lean_mk_empty_array_with_capacity(v___x_2202_);
v___x_2206_ = lean_array_push(v___x_2205_, v___x_2204_);
v___x_2207_ = l_Lasm_JS_Web_Support_args(v___x_2206_);
v___x_2208_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_getgroups_spec__0(v___x_2203_, v___x_2207_, v___x_2201_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime___boxed(lean_object* v_time_2209_, lean_object* v_a_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lasm_JS_Node_process_hrtime(v_time_2209_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_initgroups(lean_object* v_user_2220_, lean_object* v_extraGroup_2221_){
_start:
{
uint8_t v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___y_2227_; lean_object* v___y_2228_; lean_object* v___y_2235_; 
v___x_2223_ = 0;
v___x_2224_ = lean_unsigned_to_nat(2u);
v___x_2225_ = ((lean_object*)(l_Lasm_JS_Node_process_initgroups___closed__2));
if (lean_obj_tag(v_user_2220_) == 0)
{
lean_object* v_value_2252_; lean_object* v___x_2254_; uint8_t v_isShared_2255_; uint8_t v_isSharedCheck_2259_; 
v_value_2252_ = lean_ctor_get(v_user_2220_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v_user_2220_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2254_ = v_user_2220_;
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
else
{
lean_inc(v_value_2252_);
lean_dec(v_user_2220_);
v___x_2254_ = lean_box(0);
v_isShared_2255_ = v_isSharedCheck_2259_;
goto v_resetjp_2253_;
}
v_resetjp_2253_:
{
lean_object* v___x_2257_; 
if (v_isShared_2255_ == 0)
{
lean_ctor_set_tag(v___x_2254_, 4);
v___x_2257_ = v___x_2254_;
goto v_reusejp_2256_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_value_2252_);
v___x_2257_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2256_;
}
v_reusejp_2256_:
{
v___y_2235_ = v___x_2257_;
goto v___jp_2234_;
}
}
}
else
{
double v_value_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
v_value_2260_ = lean_ctor_get_float(v_user_2220_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_user_2220_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v_user_2220_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_dec(v_user_2220_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
lean_ctor_set_tag(v___x_2262_, 3);
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2266_, 0, v_value_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
v___y_2235_ = v___x_2265_;
goto v___jp_2234_;
}
}
}
v___jp_2226_:
{
lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2229_ = lean_mk_empty_array_with_capacity(v___x_2224_);
v___x_2230_ = lean_array_push(v___x_2229_, v___y_2227_);
v___x_2231_ = lean_array_push(v___x_2230_, v___y_2228_);
v___x_2232_ = l_Lasm_JS_Web_Support_args(v___x_2231_);
v___x_2233_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2225_, v___x_2232_, v___x_2223_);
return v___x_2233_;
}
v___jp_2234_:
{
if (lean_obj_tag(v_extraGroup_2221_) == 0)
{
lean_object* v_value_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2243_; 
v_value_2236_ = lean_ctor_get(v_extraGroup_2221_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v_extraGroup_2221_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2238_ = v_extraGroup_2221_;
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_value_2236_);
lean_dec(v_extraGroup_2221_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2241_; 
if (v_isShared_2239_ == 0)
{
lean_ctor_set_tag(v___x_2238_, 4);
v___x_2241_ = v___x_2238_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_value_2236_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
v___y_2227_ = v___y_2235_;
v___y_2228_ = v___x_2241_;
goto v___jp_2226_;
}
}
}
else
{
double v_value_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2251_; 
v_value_2244_ = lean_ctor_get_float(v_extraGroup_2221_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v_extraGroup_2221_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2246_ = v_extraGroup_2221_;
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
else
{
lean_dec(v_extraGroup_2221_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2251_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
lean_object* v___x_2249_; 
if (v_isShared_2247_ == 0)
{
lean_ctor_set_tag(v___x_2246_, 3);
v___x_2249_ = v___x_2246_;
goto v_reusejp_2248_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2250_, 0, v_value_2244_);
v___x_2249_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2248_;
}
v_reusejp_2248_:
{
v___y_2227_ = v___y_2235_;
v___y_2228_ = v___x_2249_;
goto v___jp_2226_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_initgroups___boxed(lean_object* v_user_2268_, lean_object* v_extraGroup_2269_, lean_object* v_a_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Lasm_JS_Node_process_initgroups(v_user_2268_, v_extraGroup_2269_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(lean_object* v_x_2272_){
_start:
{
if (lean_obj_tag(v_x_2272_) == 0)
{
lean_object* v___x_2273_; 
v___x_2273_ = lean_box(0);
return v___x_2273_;
}
else
{
lean_object* v_val_2274_; 
v_val_2274_ = lean_ctor_get(v_x_2272_, 0);
lean_inc(v_val_2274_);
lean_dec_ref_known(v_x_2272_, 1);
if (lean_obj_tag(v_val_2274_) == 0)
{
lean_object* v_value_2275_; lean_object* v___x_2277_; uint8_t v_isShared_2278_; uint8_t v_isSharedCheck_2282_; 
v_value_2275_ = lean_ctor_get(v_val_2274_, 0);
v_isSharedCheck_2282_ = !lean_is_exclusive(v_val_2274_);
if (v_isSharedCheck_2282_ == 0)
{
v___x_2277_ = v_val_2274_;
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
else
{
lean_inc(v_value_2275_);
lean_dec(v_val_2274_);
v___x_2277_ = lean_box(0);
v_isShared_2278_ = v_isSharedCheck_2282_;
goto v_resetjp_2276_;
}
v_resetjp_2276_:
{
lean_object* v___x_2280_; 
if (v_isShared_2278_ == 0)
{
lean_ctor_set_tag(v___x_2277_, 4);
v___x_2280_ = v___x_2277_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2281_; 
v_reuseFailAlloc_2281_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2281_, 0, v_value_2275_);
v___x_2280_ = v_reuseFailAlloc_2281_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
return v___x_2280_;
}
}
}
else
{
double v_value_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_value_2283_ = lean_ctor_get_float(v_val_2274_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_val_2274_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2285_ = v_val_2274_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_dec(v_val_2274_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
if (v_isShared_2286_ == 0)
{
lean_ctor_set_tag(v___x_2285_, 3);
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2289_, 0, v_value_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill(lean_object* v_pid_2299_, lean_object* v_signal_2300_){
_start:
{
uint8_t v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___y_2306_; lean_object* v___x_2313_; lean_object* v___x_2314_; uint8_t v___x_2315_; 
v___x_2302_ = 0;
v___x_2303_ = lean_unsigned_to_nat(2u);
v___x_2304_ = ((lean_object*)(l_Lasm_JS_Node_process_kill___closed__2));
v___x_2313_ = lean_nat_abs(v_pid_2299_);
v___x_2314_ = lean_cstr_to_nat("9007199254740991");
v___x_2315_ = lean_nat_dec_le(v___x_2313_, v___x_2314_);
lean_dec(v___x_2313_);
if (v___x_2315_ == 0)
{
lean_object* v___x_2316_; 
v___x_2316_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2316_, 0, v_pid_2299_);
v___y_2306_ = v___x_2316_;
goto v___jp_2305_;
}
else
{
double v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = l_Float_ofInt(v_pid_2299_);
lean_dec(v_pid_2299_);
v___x_2318_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2318_, 0, v___x_2317_);
v___y_2306_ = v___x_2318_;
goto v___jp_2305_;
}
v___jp_2305_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v___x_2307_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(v_signal_2300_);
v___x_2308_ = lean_mk_empty_array_with_capacity(v___x_2303_);
v___x_2309_ = lean_array_push(v___x_2308_, v___y_2306_);
v___x_2310_ = lean_array_push(v___x_2309_, v___x_2307_);
v___x_2311_ = l_Lasm_JS_Web_Support_args(v___x_2310_);
v___x_2312_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2304_, v___x_2311_, v___x_2302_);
return v___x_2312_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill___boxed(lean_object* v_pid_2319_, lean_object* v_signal_2320_, lean_object* v_a_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lasm_JS_Node_process_kill(v_pid_2319_, v_signal_2320_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_loadEnvFile(lean_object* v_path___2331_){
_start:
{
uint8_t v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___y_2337_; 
v___x_2333_ = 0;
v___x_2334_ = lean_unsigned_to_nat(1u);
v___x_2335_ = ((lean_object*)(l_Lasm_JS_Node_process_loadEnvFile___closed__2));
if (lean_obj_tag(v_path___2331_) == 0)
{
lean_object* v___x_2342_; 
v___x_2342_ = lean_box(1);
v___y_2337_ = v___x_2342_;
goto v___jp_2336_;
}
else
{
lean_object* v_val_2343_; 
v_val_2343_ = lean_ctor_get(v_path___2331_, 0);
lean_inc(v_val_2343_);
lean_dec_ref_known(v_path___2331_, 1);
switch(lean_obj_tag(v_val_2343_))
{
case 0:
{
lean_object* v_value_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2351_; 
v_value_2344_ = lean_ctor_get(v_val_2343_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_val_2343_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2346_ = v_val_2343_;
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_value_2344_);
lean_dec(v_val_2343_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2351_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2349_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set_tag(v___x_2346_, 4);
v___x_2349_ = v___x_2346_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_value_2344_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
v___y_2337_ = v___x_2349_;
goto v___jp_2336_;
}
}
}
case 1:
{
lean_object* v_value_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v_value_2352_ = lean_ctor_get(v_val_2343_, 0);
lean_inc(v_value_2352_);
lean_dec_ref_known(v_val_2343_, 1);
v___x_2353_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_2354_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2354_, 0, v_value_2352_);
lean_ctor_set(v___x_2354_, 1, v___x_2353_);
v___y_2337_ = v___x_2354_;
goto v___jp_2336_;
}
default: 
{
lean_object* v_value_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
v_value_2355_ = lean_ctor_get(v_val_2343_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v_val_2343_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v_val_2343_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_value_2355_);
lean_dec(v_val_2343_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
lean_ctor_set_tag(v___x_2357_, 6);
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_value_2355_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
v___y_2337_ = v___x_2360_;
goto v___jp_2336_;
}
}
}
}
}
v___jp_2336_:
{
lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v___x_2338_ = lean_mk_empty_array_with_capacity(v___x_2334_);
v___x_2339_ = lean_array_push(v___x_2338_, v___y_2337_);
v___x_2340_ = l_Lasm_JS_Web_Support_args(v___x_2339_);
v___x_2341_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2335_, v___x_2340_, v___x_2333_);
return v___x_2341_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_loadEnvFile___boxed(lean_object* v_path___2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lasm_JS_Node_process_loadEnvFile(v_path___2363_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage(){
_start:
{
uint8_t v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2375_ = 0;
v___x_2376_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage___closed__2));
v___x_2377_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_2378_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_2376_, v___x_2377_, v___x_2375_);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage___boxed(lean_object* v_a_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l_Lasm_JS_Node_process_memoryUsage();
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_nextTick(lean_object* v_callback_2389_, lean_object* v_args_2390_){
_start:
{
uint8_t v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; size_t v_sz_2399_; size_t v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2392_ = 0;
v___x_2393_ = ((lean_object*)(l_Lasm_JS_Node_process_nextTick___closed__2));
v___x_2394_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_2395_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2395_, 0, v_callback_2389_);
lean_ctor_set(v___x_2395_, 1, v___x_2394_);
v___x_2396_ = lean_unsigned_to_nat(1u);
v___x_2397_ = lean_mk_empty_array_with_capacity(v___x_2396_);
v___x_2398_ = lean_array_push(v___x_2397_, v___x_2395_);
v_sz_2399_ = lean_array_size(v_args_2390_);
v___x_2400_ = ((size_t)0ULL);
v___x_2401_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_EventEmitter_emit_spec__0(v_sz_2399_, v___x_2400_, v_args_2390_);
v___x_2402_ = l_Lasm_JS_Web_Support_argsWith(v___x_2398_, v___x_2401_);
lean_dec_ref(v___x_2401_);
v___x_2403_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2393_, v___x_2402_, v___x_2392_);
return v___x_2403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_nextTick___boxed(lean_object* v_callback_2404_, lean_object* v_args_2405_, lean_object* v_a_2406_){
_start:
{
lean_object* v_res_2407_; 
v_res_2407_ = l_Lasm_JS_Node_process_nextTick(v_callback_2404_, v_args_2405_);
return v_res_2407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ref(lean_object* v_maybeRefable_2416_){
_start:
{
uint8_t v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2418_ = 0;
v___x_2419_ = lean_unsigned_to_nat(1u);
v___x_2420_ = ((lean_object*)(l_Lasm_JS_Node_process_ref___closed__2));
v___x_2421_ = lean_mk_empty_array_with_capacity(v___x_2419_);
v___x_2422_ = lean_array_push(v___x_2421_, v_maybeRefable_2416_);
v___x_2423_ = l_Lasm_JS_Web_Support_args(v___x_2422_);
v___x_2424_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2420_, v___x_2423_, v___x_2418_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ref___boxed(lean_object* v_maybeRefable_2425_, lean_object* v_a_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Lasm_JS_Node_process_ref(v_maybeRefable_2425_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_resourceUsage(){
_start:
{
uint8_t v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2437_ = 0;
v___x_2438_ = ((lean_object*)(l_Lasm_JS_Node_process_resourceUsage___closed__2));
v___x_2439_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_2440_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_2438_, v___x_2439_, v___x_2437_);
return v___x_2440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_resourceUsage___boxed(lean_object* v_a_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Lasm_JS_Node_process_resourceUsage();
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__0(lean_object* v_x_2443_){
_start:
{
if (lean_obj_tag(v_x_2443_) == 0)
{
lean_object* v___x_2444_; 
v___x_2444_ = lean_box(0);
return v___x_2444_;
}
else
{
lean_object* v_val_2445_; lean_object* v_value_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v_val_2445_ = lean_ctor_get(v_x_2443_, 0);
v_value_2446_ = lean_ctor_get(v_val_2445_, 0);
v___x_2447_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
lean_inc(v_value_2446_);
v___x_2448_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2448_, 0, v_value_2446_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
return v___x_2448_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__0___boxed(lean_object* v_x_2449_){
_start:
{
lean_object* v_res_2450_; 
v_res_2450_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__0(v_x_2449_);
lean_dec(v_x_2449_);
return v_res_2450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__1(lean_object* v_x_2451_){
_start:
{
if (lean_obj_tag(v_x_2451_) == 0)
{
lean_object* v___x_2452_; 
v___x_2452_ = lean_box(0);
return v___x_2452_;
}
else
{
lean_object* v_val_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v_val_2453_ = lean_ctor_get(v_x_2451_, 0);
v___x_2454_ = ((lean_object*)(l_Lasm_JS_Node_instToJSProcessSendOptions___lam__0___closed__0));
v___x_2455_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_val_2453_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2454_);
lean_ctor_set(v___x_2456_, 1, v___x_2455_);
v___x_2457_ = lean_unsigned_to_nat(1u);
v___x_2458_ = lean_mk_empty_array_with_capacity(v___x_2457_);
v___x_2459_ = lean_array_push(v___x_2458_, v___x_2456_);
v___x_2460_ = l_Lasm_JS_Web_Support_fields(v___x_2459_);
lean_dec_ref(v___x_2459_);
return v___x_2460_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__1___boxed(lean_object* v_x_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__1(v_x_2461_);
lean_dec(v_x_2461_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_send(lean_object* v_message_2471_, lean_object* v_sendHandle_2472_, lean_object* v_options_2473_){
_start:
{
uint8_t v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; 
v___x_2475_ = 0;
v___x_2476_ = lean_unsigned_to_nat(3u);
v___x_2477_ = ((lean_object*)(l_Lasm_JS_Node_process_send___closed__2));
v___x_2478_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__0(v_sendHandle_2472_);
v___x_2479_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_send_spec__1(v_options_2473_);
v___x_2480_ = lean_mk_empty_array_with_capacity(v___x_2476_);
v___x_2481_ = lean_array_push(v___x_2480_, v_message_2471_);
v___x_2482_ = lean_array_push(v___x_2481_, v___x_2478_);
v___x_2483_ = lean_array_push(v___x_2482_, v___x_2479_);
v___x_2484_ = l_Lasm_JS_Web_Support_args(v___x_2483_);
v___x_2485_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(v___x_2477_, v___x_2484_, v___x_2475_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_send___boxed(lean_object* v_message_2486_, lean_object* v_sendHandle_2487_, lean_object* v_options_2488_, lean_object* v_a_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lasm_JS_Node_process_send(v_message_2486_, v_sendHandle_2487_, v_options_2488_);
lean_dec(v_options_2488_);
lean_dec(v_sendHandle_2487_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setegid(lean_object* v_id_2499_){
_start:
{
uint8_t v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___y_2505_; 
v___x_2501_ = 0;
v___x_2502_ = lean_unsigned_to_nat(1u);
v___x_2503_ = ((lean_object*)(l_Lasm_JS_Node_process_setegid___closed__2));
if (lean_obj_tag(v_id_2499_) == 0)
{
lean_object* v_value_2510_; lean_object* v___x_2512_; uint8_t v_isShared_2513_; uint8_t v_isSharedCheck_2517_; 
v_value_2510_ = lean_ctor_get(v_id_2499_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v_id_2499_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2512_ = v_id_2499_;
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
else
{
lean_inc(v_value_2510_);
lean_dec(v_id_2499_);
v___x_2512_ = lean_box(0);
v_isShared_2513_ = v_isSharedCheck_2517_;
goto v_resetjp_2511_;
}
v_resetjp_2511_:
{
lean_object* v___x_2515_; 
if (v_isShared_2513_ == 0)
{
lean_ctor_set_tag(v___x_2512_, 4);
v___x_2515_ = v___x_2512_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v_value_2510_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
v___y_2505_ = v___x_2515_;
goto v___jp_2504_;
}
}
}
else
{
double v_value_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
v_value_2518_ = lean_ctor_get_float(v_id_2499_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v_id_2499_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v_id_2499_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_dec(v_id_2499_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
lean_ctor_set_tag(v___x_2520_, 3);
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2524_, 0, v_value_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
v___y_2505_ = v___x_2523_;
goto v___jp_2504_;
}
}
}
v___jp_2504_:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2506_ = lean_mk_empty_array_with_capacity(v___x_2502_);
v___x_2507_ = lean_array_push(v___x_2506_, v___y_2505_);
v___x_2508_ = l_Lasm_JS_Web_Support_args(v___x_2507_);
v___x_2509_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2503_, v___x_2508_, v___x_2501_);
return v___x_2509_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setegid___boxed(lean_object* v_id_2526_, lean_object* v_a_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_Lasm_JS_Node_process_setegid(v_id_2526_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_seteuid(lean_object* v_id_2537_){
_start:
{
uint8_t v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___y_2543_; 
v___x_2539_ = 0;
v___x_2540_ = lean_unsigned_to_nat(1u);
v___x_2541_ = ((lean_object*)(l_Lasm_JS_Node_process_seteuid___closed__2));
if (lean_obj_tag(v_id_2537_) == 0)
{
lean_object* v_value_2548_; lean_object* v___x_2550_; uint8_t v_isShared_2551_; uint8_t v_isSharedCheck_2555_; 
v_value_2548_ = lean_ctor_get(v_id_2537_, 0);
v_isSharedCheck_2555_ = !lean_is_exclusive(v_id_2537_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2550_ = v_id_2537_;
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
else
{
lean_inc(v_value_2548_);
lean_dec(v_id_2537_);
v___x_2550_ = lean_box(0);
v_isShared_2551_ = v_isSharedCheck_2555_;
goto v_resetjp_2549_;
}
v_resetjp_2549_:
{
lean_object* v___x_2553_; 
if (v_isShared_2551_ == 0)
{
lean_ctor_set_tag(v___x_2550_, 4);
v___x_2553_ = v___x_2550_;
goto v_reusejp_2552_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v_value_2548_);
v___x_2553_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2552_;
}
v_reusejp_2552_:
{
v___y_2543_ = v___x_2553_;
goto v___jp_2542_;
}
}
}
else
{
double v_value_2556_; lean_object* v___x_2558_; uint8_t v_isShared_2559_; uint8_t v_isSharedCheck_2563_; 
v_value_2556_ = lean_ctor_get_float(v_id_2537_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v_id_2537_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2558_ = v_id_2537_;
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
else
{
lean_dec(v_id_2537_);
v___x_2558_ = lean_box(0);
v_isShared_2559_ = v_isSharedCheck_2563_;
goto v_resetjp_2557_;
}
v_resetjp_2557_:
{
lean_object* v___x_2561_; 
if (v_isShared_2559_ == 0)
{
lean_ctor_set_tag(v___x_2558_, 3);
v___x_2561_ = v___x_2558_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2562_, 0, v_value_2556_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
v___y_2543_ = v___x_2561_;
goto v___jp_2542_;
}
}
}
v___jp_2542_:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; 
v___x_2544_ = lean_mk_empty_array_with_capacity(v___x_2540_);
v___x_2545_ = lean_array_push(v___x_2544_, v___y_2543_);
v___x_2546_ = l_Lasm_JS_Web_Support_args(v___x_2545_);
v___x_2547_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2541_, v___x_2546_, v___x_2539_);
return v___x_2547_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_seteuid___boxed(lean_object* v_id_2564_, lean_object* v_a_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lasm_JS_Node_process_seteuid(v_id_2564_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgid(lean_object* v_id_2575_){
_start:
{
uint8_t v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___y_2581_; 
v___x_2577_ = 0;
v___x_2578_ = lean_unsigned_to_nat(1u);
v___x_2579_ = ((lean_object*)(l_Lasm_JS_Node_process_setgid___closed__2));
if (lean_obj_tag(v_id_2575_) == 0)
{
lean_object* v_value_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2593_; 
v_value_2586_ = lean_ctor_get(v_id_2575_, 0);
v_isSharedCheck_2593_ = !lean_is_exclusive(v_id_2575_);
if (v_isSharedCheck_2593_ == 0)
{
v___x_2588_ = v_id_2575_;
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_value_2586_);
lean_dec(v_id_2575_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2593_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2591_; 
if (v_isShared_2589_ == 0)
{
lean_ctor_set_tag(v___x_2588_, 4);
v___x_2591_ = v___x_2588_;
goto v_reusejp_2590_;
}
else
{
lean_object* v_reuseFailAlloc_2592_; 
v_reuseFailAlloc_2592_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2592_, 0, v_value_2586_);
v___x_2591_ = v_reuseFailAlloc_2592_;
goto v_reusejp_2590_;
}
v_reusejp_2590_:
{
v___y_2581_ = v___x_2591_;
goto v___jp_2580_;
}
}
}
else
{
double v_value_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2601_; 
v_value_2594_ = lean_ctor_get_float(v_id_2575_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v_id_2575_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2596_ = v_id_2575_;
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
else
{
lean_dec(v_id_2575_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
lean_ctor_set_tag(v___x_2596_, 3);
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_2600_, 0, v_value_2594_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
v___y_2581_ = v___x_2599_;
goto v___jp_2580_;
}
}
}
v___jp_2580_:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v___x_2582_ = lean_mk_empty_array_with_capacity(v___x_2578_);
v___x_2583_ = lean_array_push(v___x_2582_, v___y_2581_);
v___x_2584_ = l_Lasm_JS_Web_Support_args(v___x_2583_);
v___x_2585_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2579_, v___x_2584_, v___x_2577_);
return v___x_2585_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgid___boxed(lean_object* v_id_2602_, lean_object* v_a_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l_Lasm_JS_Node_process_setgid(v_id_2602_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgroups(lean_object* v_groups_2613_){
_start:
{
uint8_t v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; size_t v_sz_2618_; size_t v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2615_ = 0;
v___x_2616_ = lean_unsigned_to_nat(1u);
v___x_2617_ = ((lean_object*)(l_Lasm_JS_Node_process_setgroups___closed__2));
v_sz_2618_ = lean_array_size(v_groups_2613_);
v___x_2619_ = ((size_t)0ULL);
v___x_2620_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_from_spec__0(v_sz_2618_, v___x_2619_, v_groups_2613_);
v___x_2621_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2620_);
v___x_2622_ = lean_mk_empty_array_with_capacity(v___x_2616_);
v___x_2623_ = lean_array_push(v___x_2622_, v___x_2621_);
v___x_2624_ = l_Lasm_JS_Web_Support_args(v___x_2623_);
v___x_2625_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2617_, v___x_2624_, v___x_2615_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setgroups___boxed(lean_object* v_groups_2626_, lean_object* v_a_2627_){
_start:
{
lean_object* v_res_2628_; 
v_res_2628_ = l_Lasm_JS_Node_process_setgroups(v_groups_2626_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setuid(lean_object* v_id_2637_){
_start:
{
uint8_t v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___y_2643_; 
v___x_2639_ = 0;
v___x_2640_ = lean_unsigned_to_nat(1u);
v___x_2641_ = ((lean_object*)(l_Lasm_JS_Node_process_setuid___closed__2));
if (lean_obj_tag(v_id_2637_) == 0)
{
lean_object* v_value_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2660_; 
v_value_2648_ = lean_ctor_get(v_id_2637_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v_id_2637_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2650_ = v_id_2637_;
v_isShared_2651_ = v_isSharedCheck_2660_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_value_2648_);
lean_dec(v_id_2637_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2660_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; uint8_t v___x_2654_; 
v___x_2652_ = lean_nat_abs(v_value_2648_);
v___x_2653_ = lean_cstr_to_nat("9007199254740991");
v___x_2654_ = lean_nat_dec_le(v___x_2652_, v___x_2653_);
lean_dec(v___x_2652_);
if (v___x_2654_ == 0)
{
lean_object* v___x_2656_; 
if (v_isShared_2651_ == 0)
{
lean_ctor_set_tag(v___x_2650_, 5);
v___x_2656_ = v___x_2650_;
goto v_reusejp_2655_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_value_2648_);
v___x_2656_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2655_;
}
v_reusejp_2655_:
{
v___y_2643_ = v___x_2656_;
goto v___jp_2642_;
}
}
else
{
double v___x_2658_; lean_object* v___x_2659_; 
lean_del_object(v___x_2650_);
v___x_2658_ = l_Float_ofInt(v_value_2648_);
lean_dec(v_value_2648_);
v___x_2659_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2659_, 0, v___x_2658_);
v___y_2643_ = v___x_2659_;
goto v___jp_2642_;
}
}
}
else
{
lean_object* v_value_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
v_value_2661_ = lean_ctor_get(v_id_2637_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v_id_2637_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v_id_2637_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_value_2661_);
lean_dec(v_id_2637_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
lean_ctor_set_tag(v___x_2663_, 4);
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_value_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
v___y_2643_ = v___x_2666_;
goto v___jp_2642_;
}
}
}
v___jp_2642_:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2644_ = lean_mk_empty_array_with_capacity(v___x_2640_);
v___x_2645_ = lean_array_push(v___x_2644_, v___y_2643_);
v___x_2646_ = l_Lasm_JS_Web_Support_args(v___x_2645_);
v___x_2647_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2641_, v___x_2646_, v___x_2639_);
return v___x_2647_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setuid___boxed(lean_object* v_id_2669_, lean_object* v_a_2670_){
_start:
{
lean_object* v_res_2671_; 
v_res_2671_ = l_Lasm_JS_Node_process_setuid(v_id_2669_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setSourceMapsEnabled(uint8_t v_val_2680_){
_start:
{
uint8_t v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v___x_2682_ = 0;
v___x_2683_ = lean_unsigned_to_nat(1u);
v___x_2684_ = ((lean_object*)(l_Lasm_JS_Node_process_setSourceMapsEnabled___closed__2));
v___x_2685_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v___x_2685_, 0, v_val_2680_);
v___x_2686_ = lean_mk_empty_array_with_capacity(v___x_2683_);
v___x_2687_ = lean_array_push(v___x_2686_, v___x_2685_);
v___x_2688_ = l_Lasm_JS_Web_Support_args(v___x_2687_);
v___x_2689_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2684_, v___x_2688_, v___x_2682_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setSourceMapsEnabled___boxed(lean_object* v_val_2690_, lean_object* v_a_2691_){
_start:
{
uint8_t v_val_boxed_2692_; lean_object* v_res_2693_; 
v_val_boxed_2692_ = lean_unbox(v_val_2690_);
v_res_2693_ = l_Lasm_JS_Node_process_setSourceMapsEnabled(v_val_boxed_2692_);
return v_res_2693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback(lean_object* v_fn_2702_){
_start:
{
uint8_t v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___y_2708_; 
v___x_2704_ = 0;
v___x_2705_ = lean_unsigned_to_nat(1u);
v___x_2706_ = ((lean_object*)(l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___closed__2));
if (lean_obj_tag(v_fn_2702_) == 0)
{
lean_object* v___x_2713_; 
v___x_2713_ = lean_box(1);
v___y_2708_ = v___x_2713_;
goto v___jp_2707_;
}
else
{
lean_object* v_val_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_val_2714_ = lean_ctor_get(v_fn_2702_, 0);
v___x_2715_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
lean_inc(v_val_2714_);
v___x_2716_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2716_, 0, v_val_2714_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v___y_2708_ = v___x_2716_;
goto v___jp_2707_;
}
v___jp_2707_:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; 
v___x_2709_ = lean_mk_empty_array_with_capacity(v___x_2705_);
v___x_2710_ = lean_array_push(v___x_2709_, v___y_2708_);
v___x_2711_ = l_Lasm_JS_Web_Support_args(v___x_2710_);
v___x_2712_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2706_, v___x_2711_, v___x_2704_);
return v___x_2712_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback___boxed(lean_object* v_fn_2717_, lean_object* v_a_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_Lasm_JS_Node_process_setUncaughtExceptionCaptureCallback(v_fn_2717_);
lean_dec(v_fn_2717_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_threadCpuUsage(lean_object* v_previousValue_2728_){
_start:
{
uint8_t v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2730_ = 0;
v___x_2731_ = lean_unsigned_to_nat(1u);
v___x_2732_ = ((lean_object*)(l_Lasm_JS_Node_process_threadCpuUsage___closed__2));
v___x_2733_ = lean_mk_empty_array_with_capacity(v___x_2731_);
v___x_2734_ = lean_array_push(v___x_2733_, v_previousValue_2728_);
v___x_2735_ = l_Lasm_JS_Web_Support_args(v___x_2734_);
v___x_2736_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_2732_, v___x_2735_, v___x_2730_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_threadCpuUsage___boxed(lean_object* v_previousValue_2737_, lean_object* v_a_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l_Lasm_JS_Node_process_threadCpuUsage(v_previousValue_2737_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umask(){
_start:
{
uint8_t v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2749_ = 0;
v___x_2750_ = ((lean_object*)(l_Lasm_JS_Node_process_umask___closed__2));
v___x_2751_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_2752_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2750_, v___x_2751_, v___x_2749_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umask___boxed(lean_object* v_a_2753_){
_start:
{
lean_object* v_res_2754_; 
v_res_2754_ = l_Lasm_JS_Node_process_umask();
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umaskWithMask(lean_object* v_mask_2762_){
_start:
{
uint8_t v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___y_2768_; 
v___x_2764_ = 0;
v___x_2765_ = lean_unsigned_to_nat(1u);
v___x_2766_ = ((lean_object*)(l_Lasm_JS_Node_process_umaskWithMask___closed__1));
if (lean_obj_tag(v_mask_2762_) == 0)
{
lean_object* v_value_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2780_; 
v_value_2773_ = lean_ctor_get(v_mask_2762_, 0);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_mask_2762_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2775_ = v_mask_2762_;
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_value_2773_);
lean_dec(v_mask_2762_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2780_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2778_; 
if (v_isShared_2776_ == 0)
{
lean_ctor_set_tag(v___x_2775_, 4);
v___x_2778_ = v___x_2775_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_value_2773_);
v___x_2778_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
v___y_2768_ = v___x_2778_;
goto v___jp_2767_;
}
}
}
else
{
lean_object* v_value_2781_; lean_object* v___x_2783_; uint8_t v_isShared_2784_; uint8_t v_isSharedCheck_2793_; 
v_value_2781_ = lean_ctor_get(v_mask_2762_, 0);
v_isSharedCheck_2793_ = !lean_is_exclusive(v_mask_2762_);
if (v_isSharedCheck_2793_ == 0)
{
v___x_2783_ = v_mask_2762_;
v_isShared_2784_ = v_isSharedCheck_2793_;
goto v_resetjp_2782_;
}
else
{
lean_inc(v_value_2781_);
lean_dec(v_mask_2762_);
v___x_2783_ = lean_box(0);
v_isShared_2784_ = v_isSharedCheck_2793_;
goto v_resetjp_2782_;
}
v_resetjp_2782_:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; uint8_t v___x_2787_; 
v___x_2785_ = lean_nat_abs(v_value_2781_);
v___x_2786_ = lean_cstr_to_nat("9007199254740991");
v___x_2787_ = lean_nat_dec_le(v___x_2785_, v___x_2786_);
lean_dec(v___x_2785_);
if (v___x_2787_ == 0)
{
lean_object* v___x_2789_; 
if (v_isShared_2784_ == 0)
{
lean_ctor_set_tag(v___x_2783_, 5);
v___x_2789_ = v___x_2783_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v_value_2781_);
v___x_2789_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
v___y_2768_ = v___x_2789_;
goto v___jp_2767_;
}
}
else
{
double v___x_2791_; lean_object* v___x_2792_; 
lean_del_object(v___x_2783_);
v___x_2791_ = l_Float_ofInt(v_value_2781_);
lean_dec(v_value_2781_);
v___x_2792_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2792_, 0, v___x_2791_);
v___y_2768_ = v___x_2792_;
goto v___jp_2767_;
}
}
}
v___jp_2767_:
{
lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2769_ = lean_mk_empty_array_with_capacity(v___x_2765_);
v___x_2770_ = lean_array_push(v___x_2769_, v___y_2768_);
v___x_2771_ = l_Lasm_JS_Web_Support_args(v___x_2770_);
v___x_2772_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2766_, v___x_2771_, v___x_2764_);
return v___x_2772_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_umaskWithMask___boxed(lean_object* v_mask_2794_, lean_object* v_a_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Lasm_JS_Node_process_umaskWithMask(v_mask_2794_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_unref(lean_object* v_maybeRefable_2805_){
_start:
{
uint8_t v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2807_ = 0;
v___x_2808_ = lean_unsigned_to_nat(1u);
v___x_2809_ = ((lean_object*)(l_Lasm_JS_Node_process_unref___closed__2));
v___x_2810_ = lean_mk_empty_array_with_capacity(v___x_2808_);
v___x_2811_ = lean_array_push(v___x_2810_, v_maybeRefable_2805_);
v___x_2812_ = l_Lasm_JS_Web_Support_args(v___x_2811_);
v___x_2813_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2809_, v___x_2812_, v___x_2807_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_unref___boxed(lean_object* v_maybeRefable_2814_, lean_object* v_a_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_Lasm_JS_Node_process_unref(v_maybeRefable_2814_);
return v_res_2816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime(){
_start:
{
uint8_t v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2826_ = 0;
v___x_2827_ = ((lean_object*)(l_Lasm_JS_Node_process_uptime___closed__2));
v___x_2828_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_2829_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_getMaxListeners_spec__0(v___x_2827_, v___x_2828_, v___x_2826_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime___boxed(lean_object* v_a_2830_){
_start:
{
lean_object* v_res_2831_; 
v_res_2831_ = l_Lasm_JS_Node_process_uptime();
return v_res_2831_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback(lean_object* v_fn_2840_){
_start:
{
uint8_t v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; 
v___x_2842_ = 0;
v___x_2843_ = lean_unsigned_to_nat(1u);
v___x_2844_ = ((lean_object*)(l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___closed__2));
v___x_2845_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_2846_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2846_, 0, v_fn_2840_);
lean_ctor_set(v___x_2846_, 1, v___x_2845_);
v___x_2847_ = lean_mk_empty_array_with_capacity(v___x_2843_);
v___x_2848_ = lean_array_push(v___x_2847_, v___x_2846_);
v___x_2849_ = l_Lasm_JS_Web_Support_args(v___x_2848_);
v___x_2850_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_2844_, v___x_2849_, v___x_2842_);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback___boxed(lean_object* v_fn_2851_, lean_object* v_a_2852_){
_start:
{
lean_object* v_res_2853_; 
v_res_2853_ = l_Lasm_JS_Node_process_addUncaughtExceptionCaptureCallback(v_fn_2851_);
return v_res_2853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags(){
_start:
{
lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2861_; 
v___x_2859_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2860_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___closed__1));
v___x_2861_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_2859_, v___x_2860_);
return v___x_2861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags___boxed(lean_object* v_a_2862_){
_start:
{
lean_object* v_res_2863_; 
v_res_2863_ = l_Lasm_JS_Node_process_finalization_allowedNodeEnvironmentFlags();
return v_res_2863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_arch(){
_start:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2868_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2869_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_arch___closed__0));
v___x_2870_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_2868_, v___x_2869_);
return v___x_2870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_arch___boxed(lean_object* v_a_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Lasm_JS_Node_process_finalization_arch();
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv(){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2877_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2878_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_argv___closed__0));
v___x_2879_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_2877_, v___x_2878_);
return v___x_2879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv___boxed(lean_object* v_a_2880_){
_start:
{
lean_object* v_res_2881_; 
v_res_2881_ = l_Lasm_JS_Node_process_finalization_argv();
return v_res_2881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv0(){
_start:
{
lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; 
v___x_2886_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2887_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_argv0___closed__0));
v___x_2888_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_2886_, v___x_2887_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_argv0___boxed(lean_object* v_a_2889_){
_start:
{
lean_object* v_res_2890_; 
v_res_2890_ = l_Lasm_JS_Node_process_finalization_argv0();
return v_res_2890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_channel(){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2895_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2896_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_channel___closed__0));
v___x_2897_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_2895_, v___x_2896_);
return v___x_2897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_channel___boxed(lean_object* v_a_2898_){
_start:
{
lean_object* v_res_2899_; 
v_res_2899_ = l_Lasm_JS_Node_process_finalization_channel();
return v_res_2899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_config(){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2904_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2905_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_config___closed__0));
v___x_2906_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_2904_, v___x_2905_);
return v___x_2906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_config___boxed(lean_object* v_a_2907_){
_start:
{
lean_object* v_res_2908_; 
v_res_2908_ = l_Lasm_JS_Node_process_finalization_config();
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_connected(){
_start:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2913_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2914_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_connected___closed__0));
v___x_2915_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_2913_, v___x_2914_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_connected___boxed(lean_object* v_a_2916_){
_start:
{
lean_object* v_res_2917_; 
v_res_2917_ = l_Lasm_JS_Node_process_finalization_connected();
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debugPort(){
_start:
{
lean_object* v___x_2922_; lean_object* v___x_2923_; lean_object* v___x_2924_; 
v___x_2922_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2923_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_debugPort___closed__0));
v___x_2924_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0(v___x_2922_, v___x_2923_);
return v___x_2924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debugPort___boxed(lean_object* v_a_2925_){
_start:
{
lean_object* v_res_2926_; 
v_res_2926_ = l_Lasm_JS_Node_process_finalization_debugPort();
return v_res_2926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_env(){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2931_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2932_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_env___closed__0));
v___x_2933_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_2931_, v___x_2932_);
return v___x_2933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_env___boxed(lean_object* v_a_2934_){
_start:
{
lean_object* v_res_2935_; 
v_res_2935_ = l_Lasm_JS_Node_process_finalization_env();
return v_res_2935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execArgv(){
_start:
{
lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2940_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2941_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_execArgv___closed__0));
v___x_2942_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_2940_, v___x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execArgv___boxed(lean_object* v_a_2943_){
_start:
{
lean_object* v_res_2944_; 
v_res_2944_ = l_Lasm_JS_Node_process_finalization_execArgv();
return v_res_2944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execPath(){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; 
v___x_2949_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2950_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_execPath___closed__0));
v___x_2951_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_2949_, v___x_2950_);
return v___x_2951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_execPath___boxed(lean_object* v_a_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l_Lasm_JS_Node_process_finalization_execPath();
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_exitCode(){
_start:
{
lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; 
v___x_2958_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2959_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_exitCode___closed__0));
v___x_2960_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v___x_2958_, v___x_2959_);
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_exitCode___boxed(lean_object* v_a_2961_){
_start:
{
lean_object* v_res_2962_; 
v_res_2962_ = l_Lasm_JS_Node_process_finalization_exitCode();
return v_res_2962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_cached__builtins(){
_start:
{
lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; 
v___x_2967_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2968_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_cached__builtins___closed__0));
v___x_2969_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_2967_, v___x_2968_);
return v___x_2969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_cached__builtins___boxed(lean_object* v_a_2970_){
_start:
{
lean_object* v_res_2971_; 
v_res_2971_ = l_Lasm_JS_Node_process_finalization_cached__builtins();
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debug(){
_start:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; 
v___x_2976_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2977_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_debug___closed__0));
v___x_2978_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_2976_, v___x_2977_);
return v___x_2978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_debug___boxed(lean_object* v_a_2979_){
_start:
{
lean_object* v_res_2980_; 
v_res_2980_ = l_Lasm_JS_Node_process_finalization_debug();
return v_res_2980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_inspector(){
_start:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; 
v___x_2985_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2986_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_inspector___closed__0));
v___x_2987_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_2985_, v___x_2986_);
return v___x_2987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_inspector___boxed(lean_object* v_a_2988_){
_start:
{
lean_object* v_res_2989_; 
v_res_2989_ = l_Lasm_JS_Node_process_finalization_inspector();
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ipv6(){
_start:
{
lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; 
v___x_2994_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_2995_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_ipv6___closed__0));
v___x_2996_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_2994_, v___x_2995_);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ipv6___boxed(lean_object* v_a_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l_Lasm_JS_Node_process_finalization_ipv6();
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_require__module(){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; 
v___x_3003_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3004_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_require__module___closed__0));
v___x_3005_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3003_, v___x_3004_);
return v___x_3005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_require__module___boxed(lean_object* v_a_3006_){
_start:
{
lean_object* v_res_3007_; 
v_res_3007_ = l_Lasm_JS_Node_process_finalization_require__module();
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls(){
_start:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3012_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3013_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_tls___closed__0));
v___x_3014_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3012_, v___x_3013_);
return v___x_3014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls___boxed(lean_object* v_a_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_Lasm_JS_Node_process_finalization_tls();
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__alpn(){
_start:
{
lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3021_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3022_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_tls__alpn___closed__0));
v___x_3023_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3021_, v___x_3022_);
return v___x_3023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__alpn___boxed(lean_object* v_a_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l_Lasm_JS_Node_process_finalization_tls__alpn();
return v_res_3025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__ocsp(){
_start:
{
lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
v___x_3030_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3031_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_tls__ocsp___closed__0));
v___x_3032_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3030_, v___x_3031_);
return v___x_3032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__ocsp___boxed(lean_object* v_a_3033_){
_start:
{
lean_object* v_res_3034_; 
v_res_3034_ = l_Lasm_JS_Node_process_finalization_tls__ocsp();
return v_res_3034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__sni(){
_start:
{
lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3039_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3040_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_tls__sni___closed__0));
v___x_3041_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3039_, v___x_3040_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_tls__sni___boxed(lean_object* v_a_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Lasm_JS_Node_process_finalization_tls__sni();
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_typescript(){
_start:
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3048_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3049_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_typescript___closed__0));
v___x_3050_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0(v___x_3048_, v___x_3049_);
return v___x_3050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_typescript___boxed(lean_object* v_a_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l_Lasm_JS_Node_process_finalization_typescript();
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_uv(){
_start:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3057_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3058_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_uv___closed__0));
v___x_3059_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3057_, v___x_3058_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_uv___boxed(lean_object* v_a_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_Lasm_JS_Node_process_finalization_uv();
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_mainModule(){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v___x_3066_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3067_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_mainModule___closed__0));
v___x_3068_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3066_, v___x_3067_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_mainModule___boxed(lean_object* v_a_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_Lasm_JS_Node_process_finalization_mainModule();
return v_res_3070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_noDeprecation(){
_start:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3075_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3076_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_noDeprecation___closed__0));
v___x_3077_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3075_, v___x_3076_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_noDeprecation___boxed(lean_object* v_a_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Lasm_JS_Node_process_finalization_noDeprecation();
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_permission(){
_start:
{
lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3084_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3085_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_permission___closed__0));
v___x_3086_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3084_, v___x_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_permission___boxed(lean_object* v_a_3087_){
_start:
{
lean_object* v_res_3088_; 
v_res_3088_ = l_Lasm_JS_Node_process_finalization_permission();
return v_res_3088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_pid(){
_start:
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3093_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3094_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_pid___closed__0));
v___x_3095_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_3093_, v___x_3094_);
return v___x_3095_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_pid___boxed(lean_object* v_a_3096_){
_start:
{
lean_object* v_res_3097_; 
v_res_3097_ = l_Lasm_JS_Node_process_finalization_pid();
return v_res_3097_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_platform(){
_start:
{
lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3102_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3103_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_platform___closed__0));
v___x_3104_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3102_, v___x_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_platform___boxed(lean_object* v_a_3105_){
_start:
{
lean_object* v_res_3106_; 
v_res_3106_ = l_Lasm_JS_Node_process_finalization_platform();
return v_res_3106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ppid(){
_start:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; 
v___x_3111_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3112_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_ppid___closed__0));
v___x_3113_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_3111_, v___x_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_ppid___boxed(lean_object* v_a_3114_){
_start:
{
lean_object* v_res_3115_; 
v_res_3115_ = l_Lasm_JS_Node_process_finalization_ppid();
return v_res_3115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_release(){
_start:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3120_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3121_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_release___closed__0));
v___x_3122_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3120_, v___x_3121_);
return v___x_3122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_release___boxed(lean_object* v_a_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lasm_JS_Node_process_finalization_release();
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_report(){
_start:
{
lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v___x_3129_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3130_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_report___closed__0));
v___x_3131_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3129_, v___x_3130_);
return v___x_3131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_report___boxed(lean_object* v_a_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lasm_JS_Node_process_finalization_report();
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_sourceMapsEnabled(){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3138_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3139_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_sourceMapsEnabled___closed__0));
v___x_3140_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3138_, v___x_3139_);
return v___x_3140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_sourceMapsEnabled___boxed(lean_object* v_a_3141_){
_start:
{
lean_object* v_res_3142_; 
v_res_3142_ = l_Lasm_JS_Node_process_finalization_sourceMapsEnabled();
return v_res_3142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stderr(){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3148_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_stderr___closed__0));
v___x_3149_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_3147_, v___x_3148_);
if (lean_obj_tag(v___x_3149_) == 0)
{
lean_object* v_a_3150_; lean_object* v___x_3152_; uint8_t v_isShared_3153_; uint8_t v_isSharedCheck_3157_; 
v_a_3150_ = lean_ctor_get(v___x_3149_, 0);
v_isSharedCheck_3157_ = !lean_is_exclusive(v___x_3149_);
if (v_isSharedCheck_3157_ == 0)
{
v___x_3152_ = v___x_3149_;
v_isShared_3153_ = v_isSharedCheck_3157_;
goto v_resetjp_3151_;
}
else
{
lean_inc(v_a_3150_);
lean_dec(v___x_3149_);
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
v_reuseFailAlloc_3156_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3165_; 
v_a_3158_ = lean_ctor_get(v___x_3149_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3149_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3160_ = v___x_3149_;
v_isShared_3161_ = v_isSharedCheck_3165_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3149_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stderr___boxed(lean_object* v_a_3166_){
_start:
{
lean_object* v_res_3167_; 
v_res_3167_ = l_Lasm_JS_Node_process_finalization_stderr();
return v_res_3167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdin(){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3172_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3173_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_stdin___closed__0));
v___x_3174_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_3172_, v___x_3173_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3182_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3177_ = v___x_3174_;
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3174_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3182_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3180_; 
if (v_isShared_3178_ == 0)
{
v___x_3180_ = v___x_3177_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_a_3175_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
v_a_3183_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3174_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3174_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdin___boxed(lean_object* v_a_3191_){
_start:
{
lean_object* v_res_3192_; 
v_res_3192_ = l_Lasm_JS_Node_process_finalization_stdin();
return v_res_3192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdout(){
_start:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3197_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3198_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_stdout___closed__0));
v___x_3199_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_3197_, v___x_3198_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v___x_3202_; uint8_t v_isShared_3203_; uint8_t v_isSharedCheck_3207_; 
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3207_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3207_ == 0)
{
v___x_3202_ = v___x_3199_;
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
else
{
lean_inc(v_a_3200_);
lean_dec(v___x_3199_);
v___x_3202_ = lean_box(0);
v_isShared_3203_ = v_isSharedCheck_3207_;
goto v_resetjp_3201_;
}
v_resetjp_3201_:
{
lean_object* v___x_3205_; 
if (v_isShared_3203_ == 0)
{
v___x_3205_ = v___x_3202_;
goto v_reusejp_3204_;
}
else
{
lean_object* v_reuseFailAlloc_3206_; 
v_reuseFailAlloc_3206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3206_, 0, v_a_3200_);
v___x_3205_ = v_reuseFailAlloc_3206_;
goto v_reusejp_3204_;
}
v_reusejp_3204_:
{
return v___x_3205_;
}
}
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
v_a_3208_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3199_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3199_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_stdout___boxed(lean_object* v_a_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l_Lasm_JS_Node_process_finalization_stdout();
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_throwDeprecation(){
_start:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; 
v___x_3222_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3223_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_throwDeprecation___closed__0));
v___x_3224_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3222_, v___x_3223_);
return v___x_3224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_throwDeprecation___boxed(lean_object* v_a_3225_){
_start:
{
lean_object* v_res_3226_; 
v_res_3226_ = l_Lasm_JS_Node_process_finalization_throwDeprecation();
return v_res_3226_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_title(){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3231_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3232_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_title___closed__0));
v___x_3233_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3231_, v___x_3232_);
return v___x_3233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_title___boxed(lean_object* v_a_3234_){
_start:
{
lean_object* v_res_3235_; 
v_res_3235_ = l_Lasm_JS_Node_process_finalization_title();
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceDeprecation(){
_start:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3240_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3241_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_traceDeprecation___closed__0));
v___x_3242_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3240_, v___x_3241_);
return v___x_3242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceDeprecation___boxed(lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = l_Lasm_JS_Node_process_finalization_traceDeprecation();
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceProcessWarnings(){
_start:
{
lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3249_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3250_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_traceProcessWarnings___closed__0));
v___x_3251_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3249_, v___x_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_traceProcessWarnings___boxed(lean_object* v_a_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = l_Lasm_JS_Node_process_finalization_traceProcessWarnings();
return v_res_3253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_version(){
_start:
{
lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; 
v___x_3258_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3259_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_version___closed__0));
v___x_3260_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3258_, v___x_3259_);
return v___x_3260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_version___boxed(lean_object* v_a_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = l_Lasm_JS_Node_process_finalization_version();
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_versions(){
_start:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3267_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3268_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_versions___closed__0));
v___x_3269_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3267_, v___x_3268_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_versions___boxed(lean_object* v_a_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_Lasm_JS_Node_process_finalization_versions();
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_register(lean_object* v_ref_3280_, lean_object* v_callback_3281_){
_start:
{
uint8_t v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___y_3287_; 
v___x_3283_ = 0;
v___x_3284_ = lean_unsigned_to_nat(2u);
v___x_3285_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_register___closed__2));
if (lean_obj_tag(v_ref_3280_) == 0)
{
lean_object* v_value_3295_; 
v_value_3295_ = lean_ctor_get(v_ref_3280_, 0);
lean_inc(v_value_3295_);
lean_dec_ref_known(v_ref_3280_, 1);
v___y_3287_ = v_value_3295_;
goto v___jp_3286_;
}
else
{
lean_object* v_value_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; 
v_value_3296_ = lean_ctor_get(v_ref_3280_, 0);
lean_inc(v_value_3296_);
lean_dec_ref_known(v_ref_3280_, 1);
v___x_3297_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_3298_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3298_, 0, v_value_3296_);
lean_ctor_set(v___x_3298_, 1, v___x_3297_);
v___y_3287_ = v___x_3298_;
goto v___jp_3286_;
}
v___jp_3286_:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3288_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_3289_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3289_, 0, v_callback_3281_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
v___x_3290_ = lean_mk_empty_array_with_capacity(v___x_3284_);
v___x_3291_ = lean_array_push(v___x_3290_, v___y_3287_);
v___x_3292_ = lean_array_push(v___x_3291_, v___x_3289_);
v___x_3293_ = l_Lasm_JS_Web_Support_args(v___x_3292_);
v___x_3294_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_3285_, v___x_3293_, v___x_3283_);
return v___x_3294_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_register___boxed(lean_object* v_ref_3299_, lean_object* v_callback_3300_, lean_object* v_a_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l_Lasm_JS_Node_process_finalization_register(v_ref_3299_, v_callback_3300_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_registerBeforeExit(lean_object* v_ref_3311_, lean_object* v_callback_3312_){
_start:
{
uint8_t v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___y_3318_; 
v___x_3314_ = 0;
v___x_3315_ = lean_unsigned_to_nat(2u);
v___x_3316_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_registerBeforeExit___closed__2));
if (lean_obj_tag(v_ref_3311_) == 0)
{
lean_object* v_value_3326_; 
v_value_3326_ = lean_ctor_get(v_ref_3311_, 0);
lean_inc(v_value_3326_);
lean_dec_ref_known(v_ref_3311_, 1);
v___y_3318_ = v_value_3326_;
goto v___jp_3317_;
}
else
{
lean_object* v_value_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v_value_3327_ = lean_ctor_get(v_ref_3311_, 0);
lean_inc(v_value_3327_);
lean_dec_ref_known(v_ref_3311_, 1);
v___x_3328_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_3329_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3329_, 0, v_value_3327_);
lean_ctor_set(v___x_3329_, 1, v___x_3328_);
v___y_3318_ = v___x_3329_;
goto v___jp_3317_;
}
v___jp_3317_:
{
lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___x_3319_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_3320_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3320_, 0, v_callback_3312_);
lean_ctor_set(v___x_3320_, 1, v___x_3319_);
v___x_3321_ = lean_mk_empty_array_with_capacity(v___x_3315_);
v___x_3322_ = lean_array_push(v___x_3321_, v___y_3318_);
v___x_3323_ = lean_array_push(v___x_3322_, v___x_3320_);
v___x_3324_ = l_Lasm_JS_Web_Support_args(v___x_3323_);
v___x_3325_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_3316_, v___x_3324_, v___x_3314_);
return v___x_3325_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_registerBeforeExit___boxed(lean_object* v_ref_3330_, lean_object* v_callback_3331_, lean_object* v_a_3332_){
_start:
{
lean_object* v_res_3333_; 
v_res_3333_ = l_Lasm_JS_Node_process_finalization_registerBeforeExit(v_ref_3330_, v_callback_3331_);
return v_res_3333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_unregister(lean_object* v_ref_3342_){
_start:
{
uint8_t v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___y_3348_; 
v___x_3344_ = 0;
v___x_3345_ = lean_unsigned_to_nat(1u);
v___x_3346_ = ((lean_object*)(l_Lasm_JS_Node_process_finalization_unregister___closed__2));
if (lean_obj_tag(v_ref_3342_) == 0)
{
lean_object* v_value_3353_; 
v_value_3353_ = lean_ctor_get(v_ref_3342_, 0);
lean_inc(v_value_3353_);
lean_dec_ref_known(v_ref_3342_, 1);
v___y_3348_ = v_value_3353_;
goto v___jp_3347_;
}
else
{
lean_object* v_value_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v_value_3354_ = lean_ctor_get(v_ref_3342_, 0);
lean_inc(v_value_3354_);
lean_dec_ref_known(v_ref_3342_, 1);
v___x_3355_ = ((lean_object*)(l_Lasm_JS_Node_instToJSDOMStringOrURLOrUint8Array___lam__0___closed__0));
v___x_3356_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3356_, 0, v_value_3354_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
v___y_3348_ = v___x_3356_;
goto v___jp_3347_;
}
v___jp_3347_:
{
lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3349_ = lean_mk_empty_array_with_capacity(v___x_3345_);
v___x_3350_ = lean_array_push(v___x_3349_, v___y_3348_);
v___x_3351_ = l_Lasm_JS_Web_Support_args(v___x_3350_);
v___x_3352_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_3346_, v___x_3351_, v___x_3344_);
return v___x_3352_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_finalization_unregister___boxed(lean_object* v_ref_3357_, lean_object* v_a_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_Lasm_JS_Node_process_finalization_unregister(v_ref_3357_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags(){
_start:
{
lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3364_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3365_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags___closed__0));
v___x_3366_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3364_, v___x_3365_);
return v___x_3366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags___boxed(lean_object* v_a_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lasm_JS_Node_process_hrtime_allowedNodeEnvironmentFlags();
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_arch(){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3373_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3374_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_arch___closed__0));
v___x_3375_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3373_, v___x_3374_);
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_arch___boxed(lean_object* v_a_3376_){
_start:
{
lean_object* v_res_3377_; 
v_res_3377_ = l_Lasm_JS_Node_process_hrtime_arch();
return v_res_3377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv(){
_start:
{
lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v___x_3382_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3383_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_argv___closed__0));
v___x_3384_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_3382_, v___x_3383_);
return v___x_3384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv___boxed(lean_object* v_a_3385_){
_start:
{
lean_object* v_res_3386_; 
v_res_3386_ = l_Lasm_JS_Node_process_hrtime_argv();
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv0(){
_start:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3391_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3392_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_argv0___closed__0));
v___x_3393_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3391_, v___x_3392_);
return v___x_3393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_argv0___boxed(lean_object* v_a_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Lasm_JS_Node_process_hrtime_argv0();
return v_res_3395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_channel(){
_start:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; 
v___x_3400_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3401_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_channel___closed__0));
v___x_3402_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3400_, v___x_3401_);
return v___x_3402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_channel___boxed(lean_object* v_a_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Lasm_JS_Node_process_hrtime_channel();
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_config(){
_start:
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3409_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3410_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_config___closed__0));
v___x_3411_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3409_, v___x_3410_);
return v___x_3411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_config___boxed(lean_object* v_a_3412_){
_start:
{
lean_object* v_res_3413_; 
v_res_3413_ = l_Lasm_JS_Node_process_hrtime_config();
return v_res_3413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_connected(){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; 
v___x_3418_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3419_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_connected___closed__0));
v___x_3420_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3418_, v___x_3419_);
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_connected___boxed(lean_object* v_a_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_Lasm_JS_Node_process_hrtime_connected();
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debugPort(){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; 
v___x_3427_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3428_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_debugPort___closed__0));
v___x_3429_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0(v___x_3427_, v___x_3428_);
return v___x_3429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debugPort___boxed(lean_object* v_a_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lasm_JS_Node_process_hrtime_debugPort();
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_env(){
_start:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; 
v___x_3436_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3437_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_env___closed__0));
v___x_3438_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3436_, v___x_3437_);
return v___x_3438_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_env___boxed(lean_object* v_a_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Lasm_JS_Node_process_hrtime_env();
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execArgv(){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
v___x_3445_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3446_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_execArgv___closed__0));
v___x_3447_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_3445_, v___x_3446_);
return v___x_3447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execArgv___boxed(lean_object* v_a_3448_){
_start:
{
lean_object* v_res_3449_; 
v_res_3449_ = l_Lasm_JS_Node_process_hrtime_execArgv();
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execPath(){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
v___x_3454_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3455_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_execPath___closed__0));
v___x_3456_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3454_, v___x_3455_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_execPath___boxed(lean_object* v_a_3457_){
_start:
{
lean_object* v_res_3458_; 
v_res_3458_ = l_Lasm_JS_Node_process_hrtime_execPath();
return v_res_3458_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_exitCode(){
_start:
{
lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; 
v___x_3463_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3464_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_exitCode___closed__0));
v___x_3465_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v___x_3463_, v___x_3464_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_exitCode___boxed(lean_object* v_a_3466_){
_start:
{
lean_object* v_res_3467_; 
v_res_3467_ = l_Lasm_JS_Node_process_hrtime_exitCode();
return v_res_3467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_cached__builtins(){
_start:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3472_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3473_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_cached__builtins___closed__0));
v___x_3474_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3472_, v___x_3473_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_cached__builtins___boxed(lean_object* v_a_3475_){
_start:
{
lean_object* v_res_3476_; 
v_res_3476_ = l_Lasm_JS_Node_process_hrtime_cached__builtins();
return v_res_3476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debug(){
_start:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3481_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3482_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_debug___closed__0));
v___x_3483_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3481_, v___x_3482_);
return v___x_3483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_debug___boxed(lean_object* v_a_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l_Lasm_JS_Node_process_hrtime_debug();
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_inspector(){
_start:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3490_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3491_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_inspector___closed__0));
v___x_3492_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3490_, v___x_3491_);
return v___x_3492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_inspector___boxed(lean_object* v_a_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = l_Lasm_JS_Node_process_hrtime_inspector();
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ipv6(){
_start:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3500_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_ipv6___closed__0));
v___x_3501_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3499_, v___x_3500_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ipv6___boxed(lean_object* v_a_3502_){
_start:
{
lean_object* v_res_3503_; 
v_res_3503_ = l_Lasm_JS_Node_process_hrtime_ipv6();
return v_res_3503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_require__module(){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3508_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3509_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_require__module___closed__0));
v___x_3510_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3508_, v___x_3509_);
return v___x_3510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_require__module___boxed(lean_object* v_a_3511_){
_start:
{
lean_object* v_res_3512_; 
v_res_3512_ = l_Lasm_JS_Node_process_hrtime_require__module();
return v_res_3512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls(){
_start:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; 
v___x_3517_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3518_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_tls___closed__0));
v___x_3519_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3517_, v___x_3518_);
return v___x_3519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls___boxed(lean_object* v_a_3520_){
_start:
{
lean_object* v_res_3521_; 
v_res_3521_ = l_Lasm_JS_Node_process_hrtime_tls();
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__alpn(){
_start:
{
lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; 
v___x_3526_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3527_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_tls__alpn___closed__0));
v___x_3528_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3526_, v___x_3527_);
return v___x_3528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__alpn___boxed(lean_object* v_a_3529_){
_start:
{
lean_object* v_res_3530_; 
v_res_3530_ = l_Lasm_JS_Node_process_hrtime_tls__alpn();
return v_res_3530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__ocsp(){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3535_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3536_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_tls__ocsp___closed__0));
v___x_3537_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3535_, v___x_3536_);
return v___x_3537_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__ocsp___boxed(lean_object* v_a_3538_){
_start:
{
lean_object* v_res_3539_; 
v_res_3539_ = l_Lasm_JS_Node_process_hrtime_tls__ocsp();
return v_res_3539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__sni(){
_start:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3544_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3545_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_tls__sni___closed__0));
v___x_3546_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3544_, v___x_3545_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_tls__sni___boxed(lean_object* v_a_3547_){
_start:
{
lean_object* v_res_3548_; 
v_res_3548_ = l_Lasm_JS_Node_process_hrtime_tls__sni();
return v_res_3548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_typescript(){
_start:
{
lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3553_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3554_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_typescript___closed__0));
v___x_3555_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0(v___x_3553_, v___x_3554_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_typescript___boxed(lean_object* v_a_3556_){
_start:
{
lean_object* v_res_3557_; 
v_res_3557_ = l_Lasm_JS_Node_process_hrtime_typescript();
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_uv(){
_start:
{
lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3562_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3563_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_uv___closed__0));
v___x_3564_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3562_, v___x_3563_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_uv___boxed(lean_object* v_a_3565_){
_start:
{
lean_object* v_res_3566_; 
v_res_3566_ = l_Lasm_JS_Node_process_hrtime_uv();
return v_res_3566_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_mainModule(){
_start:
{
lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3571_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3572_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_mainModule___closed__0));
v___x_3573_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3571_, v___x_3572_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_mainModule___boxed(lean_object* v_a_3574_){
_start:
{
lean_object* v_res_3575_; 
v_res_3575_ = l_Lasm_JS_Node_process_hrtime_mainModule();
return v_res_3575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_noDeprecation(){
_start:
{
lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; 
v___x_3580_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3581_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_noDeprecation___closed__0));
v___x_3582_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3580_, v___x_3581_);
return v___x_3582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_noDeprecation___boxed(lean_object* v_a_3583_){
_start:
{
lean_object* v_res_3584_; 
v_res_3584_ = l_Lasm_JS_Node_process_hrtime_noDeprecation();
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_permission(){
_start:
{
lean_object* v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; 
v___x_3589_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3590_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_permission___closed__0));
v___x_3591_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3589_, v___x_3590_);
return v___x_3591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_permission___boxed(lean_object* v_a_3592_){
_start:
{
lean_object* v_res_3593_; 
v_res_3593_ = l_Lasm_JS_Node_process_hrtime_permission();
return v_res_3593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_pid(){
_start:
{
lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; 
v___x_3598_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3599_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_pid___closed__0));
v___x_3600_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_3598_, v___x_3599_);
return v___x_3600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_pid___boxed(lean_object* v_a_3601_){
_start:
{
lean_object* v_res_3602_; 
v_res_3602_ = l_Lasm_JS_Node_process_hrtime_pid();
return v_res_3602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_platform(){
_start:
{
lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3607_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3608_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_platform___closed__0));
v___x_3609_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3607_, v___x_3608_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_platform___boxed(lean_object* v_a_3610_){
_start:
{
lean_object* v_res_3611_; 
v_res_3611_ = l_Lasm_JS_Node_process_hrtime_platform();
return v_res_3611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ppid(){
_start:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; 
v___x_3616_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3617_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_ppid___closed__0));
v___x_3618_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_3616_, v___x_3617_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_ppid___boxed(lean_object* v_a_3619_){
_start:
{
lean_object* v_res_3620_; 
v_res_3620_ = l_Lasm_JS_Node_process_hrtime_ppid();
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_release(){
_start:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; 
v___x_3625_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3626_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_release___closed__0));
v___x_3627_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3625_, v___x_3626_);
return v___x_3627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_release___boxed(lean_object* v_a_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lasm_JS_Node_process_hrtime_release();
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_report(){
_start:
{
lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; 
v___x_3634_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3635_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_report___closed__0));
v___x_3636_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3634_, v___x_3635_);
return v___x_3636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_report___boxed(lean_object* v_a_3637_){
_start:
{
lean_object* v_res_3638_; 
v_res_3638_ = l_Lasm_JS_Node_process_hrtime_report();
return v_res_3638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled(){
_start:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3643_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled___closed__0));
v___x_3645_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3643_, v___x_3644_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled___boxed(lean_object* v_a_3646_){
_start:
{
lean_object* v_res_3647_; 
v_res_3647_ = l_Lasm_JS_Node_process_hrtime_sourceMapsEnabled();
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stderr(){
_start:
{
lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; 
v___x_3652_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3653_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_stderr___closed__0));
v___x_3654_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_3652_, v___x_3653_);
if (lean_obj_tag(v___x_3654_) == 0)
{
lean_object* v_a_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3662_; 
v_a_3655_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3662_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3662_ == 0)
{
v___x_3657_ = v___x_3654_;
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_a_3655_);
lean_dec(v___x_3654_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3662_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
lean_object* v___x_3660_; 
if (v_isShared_3658_ == 0)
{
v___x_3660_ = v___x_3657_;
goto v_reusejp_3659_;
}
else
{
lean_object* v_reuseFailAlloc_3661_; 
v_reuseFailAlloc_3661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3661_, 0, v_a_3655_);
v___x_3660_ = v_reuseFailAlloc_3661_;
goto v_reusejp_3659_;
}
v_reusejp_3659_:
{
return v___x_3660_;
}
}
}
else
{
lean_object* v_a_3663_; lean_object* v___x_3665_; uint8_t v_isShared_3666_; uint8_t v_isSharedCheck_3670_; 
v_a_3663_ = lean_ctor_get(v___x_3654_, 0);
v_isSharedCheck_3670_ = !lean_is_exclusive(v___x_3654_);
if (v_isSharedCheck_3670_ == 0)
{
v___x_3665_ = v___x_3654_;
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
else
{
lean_inc(v_a_3663_);
lean_dec(v___x_3654_);
v___x_3665_ = lean_box(0);
v_isShared_3666_ = v_isSharedCheck_3670_;
goto v_resetjp_3664_;
}
v_resetjp_3664_:
{
lean_object* v___x_3668_; 
if (v_isShared_3666_ == 0)
{
v___x_3668_ = v___x_3665_;
goto v_reusejp_3667_;
}
else
{
lean_object* v_reuseFailAlloc_3669_; 
v_reuseFailAlloc_3669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3669_, 0, v_a_3663_);
v___x_3668_ = v_reuseFailAlloc_3669_;
goto v_reusejp_3667_;
}
v_reusejp_3667_:
{
return v___x_3668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stderr___boxed(lean_object* v_a_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l_Lasm_JS_Node_process_hrtime_stderr();
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdin(){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3677_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3678_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_stdin___closed__0));
v___x_3679_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_3677_, v___x_3678_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3687_; 
v_a_3680_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3687_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3687_ == 0)
{
v___x_3682_ = v___x_3679_;
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3679_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3687_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3685_; 
if (v_isShared_3683_ == 0)
{
v___x_3685_ = v___x_3682_;
goto v_reusejp_3684_;
}
else
{
lean_object* v_reuseFailAlloc_3686_; 
v_reuseFailAlloc_3686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3686_, 0, v_a_3680_);
v___x_3685_ = v_reuseFailAlloc_3686_;
goto v_reusejp_3684_;
}
v_reusejp_3684_:
{
return v___x_3685_;
}
}
}
else
{
lean_object* v_a_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3695_; 
v_a_3688_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3690_ = v___x_3679_;
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_a_3688_);
lean_dec(v___x_3679_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3695_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3693_; 
if (v_isShared_3691_ == 0)
{
v___x_3693_ = v___x_3690_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v_a_3688_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdin___boxed(lean_object* v_a_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lasm_JS_Node_process_hrtime_stdin();
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdout(){
_start:
{
lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3702_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3703_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_stdout___closed__0));
v___x_3704_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_3702_, v___x_3703_);
if (lean_obj_tag(v___x_3704_) == 0)
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
v_a_3705_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3704_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3704_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
else
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
v_a_3713_ = lean_ctor_get(v___x_3704_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3704_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3704_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3704_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_stdout___boxed(lean_object* v_a_3721_){
_start:
{
lean_object* v_res_3722_; 
v_res_3722_ = l_Lasm_JS_Node_process_hrtime_stdout();
return v_res_3722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_throwDeprecation(){
_start:
{
lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3727_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3728_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_throwDeprecation___closed__0));
v___x_3729_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3727_, v___x_3728_);
return v___x_3729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_throwDeprecation___boxed(lean_object* v_a_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l_Lasm_JS_Node_process_hrtime_throwDeprecation();
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_title(){
_start:
{
lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; 
v___x_3736_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3737_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_title___closed__0));
v___x_3738_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3736_, v___x_3737_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_title___boxed(lean_object* v_a_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Lasm_JS_Node_process_hrtime_title();
return v_res_3740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceDeprecation(){
_start:
{
lean_object* v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3745_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3746_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_traceDeprecation___closed__0));
v___x_3747_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3745_, v___x_3746_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceDeprecation___boxed(lean_object* v_a_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lasm_JS_Node_process_hrtime_traceDeprecation();
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceProcessWarnings(){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; 
v___x_3754_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3755_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_traceProcessWarnings___closed__0));
v___x_3756_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3754_, v___x_3755_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_traceProcessWarnings___boxed(lean_object* v_a_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Lasm_JS_Node_process_hrtime_traceProcessWarnings();
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_version(){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3763_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3764_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_version___closed__0));
v___x_3765_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3763_, v___x_3764_);
return v___x_3765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_version___boxed(lean_object* v_a_3766_){
_start:
{
lean_object* v_res_3767_; 
v_res_3767_ = l_Lasm_JS_Node_process_hrtime_version();
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_versions(){
_start:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3772_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3773_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_versions___closed__0));
v___x_3774_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3772_, v___x_3773_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_versions___boxed(lean_object* v_a_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l_Lasm_JS_Node_process_hrtime_versions();
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_bigint(){
_start:
{
uint8_t v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; 
v___x_3786_ = 0;
v___x_3787_ = ((lean_object*)(l_Lasm_JS_Node_process_hrtime_bigint___closed__2));
v___x_3788_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_3789_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_3787_, v___x_3788_, v___x_3786_);
return v___x_3789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_hrtime_bigint___boxed(lean_object* v_a_3790_){
_start:
{
lean_object* v_res_3791_; 
v_res_3791_ = l_Lasm_JS_Node_process_hrtime_bigint();
return v_res_3791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags(){
_start:
{
lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; 
v___x_3796_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3797_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags___closed__0));
v___x_3798_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3796_, v___x_3797_);
return v___x_3798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags___boxed(lean_object* v_a_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l_Lasm_JS_Node_process_memoryUsage_allowedNodeEnvironmentFlags();
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_arch(){
_start:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; 
v___x_3805_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3806_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_arch___closed__0));
v___x_3807_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3805_, v___x_3806_);
return v___x_3807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_arch___boxed(lean_object* v_a_3808_){
_start:
{
lean_object* v_res_3809_; 
v_res_3809_ = l_Lasm_JS_Node_process_memoryUsage_arch();
return v_res_3809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv(){
_start:
{
lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
v___x_3814_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3815_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_argv___closed__0));
v___x_3816_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_3814_, v___x_3815_);
return v___x_3816_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv___boxed(lean_object* v_a_3817_){
_start:
{
lean_object* v_res_3818_; 
v_res_3818_ = l_Lasm_JS_Node_process_memoryUsage_argv();
return v_res_3818_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv0(){
_start:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3823_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3824_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_argv0___closed__0));
v___x_3825_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3823_, v___x_3824_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_argv0___boxed(lean_object* v_a_3826_){
_start:
{
lean_object* v_res_3827_; 
v_res_3827_ = l_Lasm_JS_Node_process_memoryUsage_argv0();
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_channel(){
_start:
{
lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; 
v___x_3832_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3833_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_channel___closed__0));
v___x_3834_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3832_, v___x_3833_);
return v___x_3834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_channel___boxed(lean_object* v_a_3835_){
_start:
{
lean_object* v_res_3836_; 
v_res_3836_ = l_Lasm_JS_Node_process_memoryUsage_channel();
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_config(){
_start:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; 
v___x_3841_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3842_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_config___closed__0));
v___x_3843_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3841_, v___x_3842_);
return v___x_3843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_config___boxed(lean_object* v_a_3844_){
_start:
{
lean_object* v_res_3845_; 
v_res_3845_ = l_Lasm_JS_Node_process_memoryUsage_config();
return v_res_3845_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_connected(){
_start:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v___x_3850_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3851_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_connected___closed__0));
v___x_3852_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3850_, v___x_3851_);
return v___x_3852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_connected___boxed(lean_object* v_a_3853_){
_start:
{
lean_object* v_res_3854_; 
v_res_3854_ = l_Lasm_JS_Node_process_memoryUsage_connected();
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debugPort(){
_start:
{
lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3859_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3860_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_debugPort___closed__0));
v___x_3861_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_debugPort_spec__0(v___x_3859_, v___x_3860_);
return v___x_3861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debugPort___boxed(lean_object* v_a_3862_){
_start:
{
lean_object* v_res_3863_; 
v_res_3863_ = l_Lasm_JS_Node_process_memoryUsage_debugPort();
return v_res_3863_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_env(){
_start:
{
lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3868_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3869_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_env___closed__0));
v___x_3870_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_3868_, v___x_3869_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_env___boxed(lean_object* v_a_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_Lasm_JS_Node_process_memoryUsage_env();
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execArgv(){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
v___x_3877_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3878_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_execArgv___closed__0));
v___x_3879_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_3877_, v___x_3878_);
return v___x_3879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execArgv___boxed(lean_object* v_a_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_Lasm_JS_Node_process_memoryUsage_execArgv();
return v_res_3881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execPath(){
_start:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; 
v___x_3886_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3887_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_execPath___closed__0));
v___x_3888_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_3886_, v___x_3887_);
return v___x_3888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_execPath___boxed(lean_object* v_a_3889_){
_start:
{
lean_object* v_res_3890_; 
v_res_3890_ = l_Lasm_JS_Node_process_memoryUsage_execPath();
return v_res_3890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_exitCode(){
_start:
{
lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; 
v___x_3895_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3896_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_exitCode___closed__0));
v___x_3897_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v___x_3895_, v___x_3896_);
return v___x_3897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_exitCode___boxed(lean_object* v_a_3898_){
_start:
{
lean_object* v_res_3899_; 
v_res_3899_ = l_Lasm_JS_Node_process_memoryUsage_exitCode();
return v_res_3899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_cached__builtins(){
_start:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3904_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3905_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_cached__builtins___closed__0));
v___x_3906_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3904_, v___x_3905_);
return v___x_3906_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_cached__builtins___boxed(lean_object* v_a_3907_){
_start:
{
lean_object* v_res_3908_; 
v_res_3908_ = l_Lasm_JS_Node_process_memoryUsage_cached__builtins();
return v_res_3908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debug(){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3913_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3914_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_debug___closed__0));
v___x_3915_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3913_, v___x_3914_);
return v___x_3915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_debug___boxed(lean_object* v_a_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lasm_JS_Node_process_memoryUsage_debug();
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_inspector(){
_start:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; 
v___x_3922_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3923_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_inspector___closed__0));
v___x_3924_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3922_, v___x_3923_);
return v___x_3924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_inspector___boxed(lean_object* v_a_3925_){
_start:
{
lean_object* v_res_3926_; 
v_res_3926_ = l_Lasm_JS_Node_process_memoryUsage_inspector();
return v_res_3926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ipv6(){
_start:
{
lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3931_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3932_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_ipv6___closed__0));
v___x_3933_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3931_, v___x_3932_);
return v___x_3933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ipv6___boxed(lean_object* v_a_3934_){
_start:
{
lean_object* v_res_3935_; 
v_res_3935_ = l_Lasm_JS_Node_process_memoryUsage_ipv6();
return v_res_3935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_require__module(){
_start:
{
lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; 
v___x_3940_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3941_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_require__module___closed__0));
v___x_3942_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3940_, v___x_3941_);
return v___x_3942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_require__module___boxed(lean_object* v_a_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l_Lasm_JS_Node_process_memoryUsage_require__module();
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls(){
_start:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; 
v___x_3949_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3950_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_tls___closed__0));
v___x_3951_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3949_, v___x_3950_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls___boxed(lean_object* v_a_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l_Lasm_JS_Node_process_memoryUsage_tls();
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__alpn(){
_start:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3958_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3959_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_tls__alpn___closed__0));
v___x_3960_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3958_, v___x_3959_);
return v___x_3960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__alpn___boxed(lean_object* v_a_3961_){
_start:
{
lean_object* v_res_3962_; 
v_res_3962_ = l_Lasm_JS_Node_process_memoryUsage_tls__alpn();
return v_res_3962_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__ocsp(){
_start:
{
lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3967_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3968_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_tls__ocsp___closed__0));
v___x_3969_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3967_, v___x_3968_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__ocsp___boxed(lean_object* v_a_3970_){
_start:
{
lean_object* v_res_3971_; 
v_res_3971_ = l_Lasm_JS_Node_process_memoryUsage_tls__ocsp();
return v_res_3971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__sni(){
_start:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3976_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3977_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_tls__sni___closed__0));
v___x_3978_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3976_, v___x_3977_);
return v___x_3978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_tls__sni___boxed(lean_object* v_a_3979_){
_start:
{
lean_object* v_res_3980_; 
v_res_3980_ = l_Lasm_JS_Node_process_memoryUsage_tls__sni();
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_typescript(){
_start:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; lean_object* v___x_3987_; 
v___x_3985_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3986_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_typescript___closed__0));
v___x_3987_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_typescript_spec__0(v___x_3985_, v___x_3986_);
return v___x_3987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_typescript___boxed(lean_object* v_a_3988_){
_start:
{
lean_object* v_res_3989_; 
v_res_3989_ = l_Lasm_JS_Node_process_memoryUsage_typescript();
return v_res_3989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_uv(){
_start:
{
lean_object* v___x_3994_; lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3994_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_3995_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_uv___closed__0));
v___x_3996_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_3994_, v___x_3995_);
return v___x_3996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_uv___boxed(lean_object* v_a_3997_){
_start:
{
lean_object* v_res_3998_; 
v_res_3998_ = l_Lasm_JS_Node_process_memoryUsage_uv();
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_mainModule(){
_start:
{
lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v___x_4003_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4004_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_mainModule___closed__0));
v___x_4005_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_4003_, v___x_4004_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_mainModule___boxed(lean_object* v_a_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_Lasm_JS_Node_process_memoryUsage_mainModule();
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_noDeprecation(){
_start:
{
lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4012_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4013_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_noDeprecation___closed__0));
v___x_4014_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4012_, v___x_4013_);
return v___x_4014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_noDeprecation___boxed(lean_object* v_a_4015_){
_start:
{
lean_object* v_res_4016_; 
v_res_4016_ = l_Lasm_JS_Node_process_memoryUsage_noDeprecation();
return v_res_4016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_permission(){
_start:
{
lean_object* v___x_4021_; lean_object* v___x_4022_; lean_object* v___x_4023_; 
v___x_4021_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4022_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_permission___closed__0));
v___x_4023_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_4021_, v___x_4022_);
return v___x_4023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_permission___boxed(lean_object* v_a_4024_){
_start:
{
lean_object* v_res_4025_; 
v_res_4025_ = l_Lasm_JS_Node_process_memoryUsage_permission();
return v_res_4025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_pid(){
_start:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; 
v___x_4030_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4031_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_pid___closed__0));
v___x_4032_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_4030_, v___x_4031_);
return v___x_4032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_pid___boxed(lean_object* v_a_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lasm_JS_Node_process_memoryUsage_pid();
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_platform(){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4039_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4040_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_platform___closed__0));
v___x_4041_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_4039_, v___x_4040_);
return v___x_4041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_platform___boxed(lean_object* v_a_4042_){
_start:
{
lean_object* v_res_4043_; 
v_res_4043_ = l_Lasm_JS_Node_process_memoryUsage_platform();
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ppid(){
_start:
{
lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; 
v___x_4048_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4049_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_ppid___closed__0));
v___x_4050_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_INSPECT__MAX__BYTES_spec__0(v___x_4048_, v___x_4049_);
return v___x_4050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_ppid___boxed(lean_object* v_a_4051_){
_start:
{
lean_object* v_res_4052_; 
v_res_4052_ = l_Lasm_JS_Node_process_memoryUsage_ppid();
return v_res_4052_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_release(){
_start:
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4057_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4058_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_release___closed__0));
v___x_4059_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_4057_, v___x_4058_);
return v___x_4059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_release___boxed(lean_object* v_a_4060_){
_start:
{
lean_object* v_res_4061_; 
v_res_4061_ = l_Lasm_JS_Node_process_memoryUsage_release();
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_report(){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v___x_4066_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4067_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_report___closed__0));
v___x_4068_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_4066_, v___x_4067_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_report___boxed(lean_object* v_a_4069_){
_start:
{
lean_object* v_res_4070_; 
v_res_4070_ = l_Lasm_JS_Node_process_memoryUsage_report();
return v_res_4070_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled(){
_start:
{
lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
v___x_4075_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4076_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled___closed__0));
v___x_4077_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4075_, v___x_4076_);
return v___x_4077_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled___boxed(lean_object* v_a_4078_){
_start:
{
lean_object* v_res_4079_; 
v_res_4079_ = l_Lasm_JS_Node_process_memoryUsage_sourceMapsEnabled();
return v_res_4079_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stderr(){
_start:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; 
v___x_4084_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4085_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_stderr___closed__0));
v___x_4086_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_4084_, v___x_4085_);
if (lean_obj_tag(v___x_4086_) == 0)
{
lean_object* v_a_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4094_; 
v_a_4087_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4089_ = v___x_4086_;
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_a_4087_);
lean_dec(v___x_4086_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4094_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4092_; 
if (v_isShared_4090_ == 0)
{
v___x_4092_ = v___x_4089_;
goto v_reusejp_4091_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_a_4087_);
v___x_4092_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4091_;
}
v_reusejp_4091_:
{
return v___x_4092_;
}
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
v_a_4095_ = lean_ctor_get(v___x_4086_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4086_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___x_4086_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4086_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stderr___boxed(lean_object* v_a_4103_){
_start:
{
lean_object* v_res_4104_; 
v_res_4104_ = l_Lasm_JS_Node_process_memoryUsage_stderr();
return v_res_4104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdin(){
_start:
{
lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; 
v___x_4109_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4110_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_stdin___closed__0));
v___x_4111_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_4109_, v___x_4110_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4119_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4114_ = v___x_4111_;
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
else
{
lean_inc(v_a_4112_);
lean_dec(v___x_4111_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4117_; 
if (v_isShared_4115_ == 0)
{
v___x_4117_ = v___x_4114_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4112_);
v___x_4117_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4116_;
}
v_reusejp_4116_:
{
return v___x_4117_;
}
}
}
else
{
lean_object* v_a_4120_; lean_object* v___x_4122_; uint8_t v_isShared_4123_; uint8_t v_isSharedCheck_4127_; 
v_a_4120_ = lean_ctor_get(v___x_4111_, 0);
v_isSharedCheck_4127_ = !lean_is_exclusive(v___x_4111_);
if (v_isSharedCheck_4127_ == 0)
{
v___x_4122_ = v___x_4111_;
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
else
{
lean_inc(v_a_4120_);
lean_dec(v___x_4111_);
v___x_4122_ = lean_box(0);
v_isShared_4123_ = v_isSharedCheck_4127_;
goto v_resetjp_4121_;
}
v_resetjp_4121_:
{
lean_object* v___x_4125_; 
if (v_isShared_4123_ == 0)
{
v___x_4125_ = v___x_4122_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4126_; 
v_reuseFailAlloc_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4126_, 0, v_a_4120_);
v___x_4125_ = v_reuseFailAlloc_4126_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
return v___x_4125_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdin___boxed(lean_object* v_a_4128_){
_start:
{
lean_object* v_res_4129_; 
v_res_4129_ = l_Lasm_JS_Node_process_memoryUsage_stdin();
return v_res_4129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdout(){
_start:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; 
v___x_4134_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4135_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_stdout___closed__0));
v___x_4136_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_SlowBuffer_cast_x3f_spec__0(v___x_4134_, v___x_4135_);
if (lean_obj_tag(v___x_4136_) == 0)
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
v_a_4137_ = lean_ctor_get(v___x_4136_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4136_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4136_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4136_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
else
{
lean_object* v_a_4145_; lean_object* v___x_4147_; uint8_t v_isShared_4148_; uint8_t v_isSharedCheck_4152_; 
v_a_4145_ = lean_ctor_get(v___x_4136_, 0);
v_isSharedCheck_4152_ = !lean_is_exclusive(v___x_4136_);
if (v_isSharedCheck_4152_ == 0)
{
v___x_4147_ = v___x_4136_;
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
else
{
lean_inc(v_a_4145_);
lean_dec(v___x_4136_);
v___x_4147_ = lean_box(0);
v_isShared_4148_ = v_isSharedCheck_4152_;
goto v_resetjp_4146_;
}
v_resetjp_4146_:
{
lean_object* v___x_4150_; 
if (v_isShared_4148_ == 0)
{
v___x_4150_ = v___x_4147_;
goto v_reusejp_4149_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v_a_4145_);
v___x_4150_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4149_;
}
v_reusejp_4149_:
{
return v___x_4150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_stdout___boxed(lean_object* v_a_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l_Lasm_JS_Node_process_memoryUsage_stdout();
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_throwDeprecation(){
_start:
{
lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; 
v___x_4159_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4160_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_throwDeprecation___closed__0));
v___x_4161_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4159_, v___x_4160_);
return v___x_4161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_throwDeprecation___boxed(lean_object* v_a_4162_){
_start:
{
lean_object* v_res_4163_; 
v_res_4163_ = l_Lasm_JS_Node_process_memoryUsage_throwDeprecation();
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_title(){
_start:
{
lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; 
v___x_4168_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4169_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_title___closed__0));
v___x_4170_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_4168_, v___x_4169_);
return v___x_4170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_title___boxed(lean_object* v_a_4171_){
_start:
{
lean_object* v_res_4172_; 
v_res_4172_ = l_Lasm_JS_Node_process_memoryUsage_title();
return v_res_4172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceDeprecation(){
_start:
{
lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; 
v___x_4177_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4178_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_traceDeprecation___closed__0));
v___x_4179_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4177_, v___x_4178_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceDeprecation___boxed(lean_object* v_a_4180_){
_start:
{
lean_object* v_res_4181_; 
v_res_4181_ = l_Lasm_JS_Node_process_memoryUsage_traceDeprecation();
return v_res_4181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings(){
_start:
{
lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; 
v___x_4186_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4187_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings___closed__0));
v___x_4188_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4186_, v___x_4187_);
return v___x_4188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings___boxed(lean_object* v_a_4189_){
_start:
{
lean_object* v_res_4190_; 
v_res_4190_ = l_Lasm_JS_Node_process_memoryUsage_traceProcessWarnings();
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_version(){
_start:
{
lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
v___x_4195_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4196_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_version___closed__0));
v___x_4197_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_4195_, v___x_4196_);
return v___x_4197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_version___boxed(lean_object* v_a_4198_){
_start:
{
lean_object* v_res_4199_; 
v_res_4199_ = l_Lasm_JS_Node_process_memoryUsage_version();
return v_res_4199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_versions(){
_start:
{
lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4204_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4205_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_versions___closed__0));
v___x_4206_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_defaultMaxListeners_spec__0(v___x_4204_, v___x_4205_);
return v___x_4206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_versions___boxed(lean_object* v_a_4207_){
_start:
{
lean_object* v_res_4208_; 
v_res_4208_ = l_Lasm_JS_Node_process_memoryUsage_versions();
return v_res_4208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_rss(){
_start:
{
uint8_t v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; 
v___x_4218_ = 0;
v___x_4219_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage_rss___closed__2));
v___x_4220_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_4221_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_4219_, v___x_4220_, v___x_4218_);
return v___x_4221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage_rss___boxed(lean_object* v_a_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l_Lasm_JS_Node_process_memoryUsage_rss();
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_ref(){
_start:
{
uint8_t v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4233_ = 0;
v___x_4234_ = ((lean_object*)(l_Lasm_JS_Node_process_channel_ref___closed__2));
v___x_4235_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_4236_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_4234_, v___x_4235_, v___x_4233_);
return v___x_4236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_ref___boxed(lean_object* v_a_4237_){
_start:
{
lean_object* v_res_4238_; 
v_res_4238_ = l_Lasm_JS_Node_process_channel_ref();
return v_res_4238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_unref(){
_start:
{
uint8_t v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; 
v___x_4248_ = 0;
v___x_4249_ = ((lean_object*)(l_Lasm_JS_Node_process_channel_unref___closed__2));
v___x_4250_ = lean_obj_once(&l_Lasm_JS_Node_process_abort___closed__4, &l_Lasm_JS_Node_process_abort___closed__4_once, _init_l_Lasm_JS_Node_process_abort___closed__4);
v___x_4251_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_4249_, v___x_4250_, v___x_4248_);
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_channel_unref___boxed(lean_object* v_a_4252_){
_start:
{
lean_object* v_res_4253_; 
v_res_4253_ = l_Lasm_JS_Node_process_channel_unref();
return v_res_4253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_has(lean_object* v_scope_4262_, lean_object* v_reference_4263_){
_start:
{
uint8_t v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4265_ = 0;
v___x_4266_ = lean_unsigned_to_nat(2u);
v___x_4267_ = ((lean_object*)(l_Lasm_JS_Node_process_permission_has___closed__2));
v___x_4268_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4268_, 0, v_scope_4262_);
v___x_4269_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reference_4263_);
v___x_4270_ = lean_mk_empty_array_with_capacity(v___x_4266_);
v___x_4271_ = lean_array_push(v___x_4270_, v___x_4268_);
v___x_4272_ = lean_array_push(v___x_4271_, v___x_4269_);
v___x_4273_ = l_Lasm_JS_Web_Support_args(v___x_4272_);
v___x_4274_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_stream_isErrored_spec__0(v___x_4267_, v___x_4273_, v___x_4265_);
return v___x_4274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_has___boxed(lean_object* v_scope_4275_, lean_object* v_reference_4276_, lean_object* v_a_4277_){
_start:
{
lean_object* v_res_4278_; 
v_res_4278_ = l_Lasm_JS_Node_process_permission_has(v_scope_4275_, v_reference_4276_);
return v_res_4278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_drop(lean_object* v_scope_4287_, lean_object* v_reference_4288_){
_start:
{
uint8_t v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; lean_object* v___x_4296_; lean_object* v___x_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; 
v___x_4290_ = 0;
v___x_4291_ = lean_unsigned_to_nat(2u);
v___x_4292_ = ((lean_object*)(l_Lasm_JS_Node_process_permission_drop___closed__2));
v___x_4293_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4293_, 0, v_scope_4287_);
v___x_4294_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reference_4288_);
v___x_4295_ = lean_mk_empty_array_with_capacity(v___x_4291_);
v___x_4296_ = lean_array_push(v___x_4295_, v___x_4293_);
v___x_4297_ = lean_array_push(v___x_4296_, v___x_4294_);
v___x_4298_ = l_Lasm_JS_Web_Support_args(v___x_4297_);
v___x_4299_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_AsyncResource_bind_spec__0(v___x_4292_, v___x_4298_, v___x_4290_);
return v___x_4299_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_permission_drop___boxed(lean_object* v_scope_4300_, lean_object* v_reference_4301_, lean_object* v_a_4302_){
_start:
{
lean_object* v_res_4303_; 
v_res_4303_ = l_Lasm_JS_Node_process_permission_drop(v_scope_4300_, v_reference_4301_);
return v_res_4303_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_compact(){
_start:
{
lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4312_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4313_ = ((lean_object*)(l_Lasm_JS_Node_process_report_compact___closed__2));
v___x_4314_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4312_, v___x_4313_);
return v___x_4314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_compact___boxed(lean_object* v_a_4315_){
_start:
{
lean_object* v_res_4316_; 
v_res_4316_ = l_Lasm_JS_Node_process_report_compact();
return v_res_4316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_directory(){
_start:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
v___x_4325_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4326_ = ((lean_object*)(l_Lasm_JS_Node_process_report_directory___closed__2));
v___x_4327_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_4325_, v___x_4326_);
return v___x_4327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_directory___boxed(lean_object* v_a_4328_){
_start:
{
lean_object* v_res_4329_; 
v_res_4329_ = l_Lasm_JS_Node_process_report_directory();
return v_res_4329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_filename(){
_start:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v___x_4338_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4339_ = ((lean_object*)(l_Lasm_JS_Node_process_report_filename___closed__2));
v___x_4340_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_4338_, v___x_4339_);
return v___x_4340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_filename___boxed(lean_object* v_a_4341_){
_start:
{
lean_object* v_res_4342_; 
v_res_4342_ = l_Lasm_JS_Node_process_report_filename();
return v_res_4342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnFatalError(){
_start:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
v___x_4351_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4352_ = ((lean_object*)(l_Lasm_JS_Node_process_report_reportOnFatalError___closed__2));
v___x_4353_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4351_, v___x_4352_);
return v___x_4353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnFatalError___boxed(lean_object* v_a_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_Lasm_JS_Node_process_report_reportOnFatalError();
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnSignal(){
_start:
{
lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; 
v___x_4364_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4365_ = ((lean_object*)(l_Lasm_JS_Node_process_report_reportOnSignal___closed__2));
v___x_4366_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4364_, v___x_4365_);
return v___x_4366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnSignal___boxed(lean_object* v_a_4367_){
_start:
{
lean_object* v_res_4368_; 
v_res_4368_ = l_Lasm_JS_Node_process_report_reportOnSignal();
return v_res_4368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnUncaughtException(){
_start:
{
lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; 
v___x_4377_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4378_ = ((lean_object*)(l_Lasm_JS_Node_process_report_reportOnUncaughtException___closed__2));
v___x_4379_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4377_, v___x_4378_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_reportOnUncaughtException___boxed(lean_object* v_a_4380_){
_start:
{
lean_object* v_res_4381_; 
v_res_4381_ = l_Lasm_JS_Node_process_report_reportOnUncaughtException();
return v_res_4381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_excludeEnv(){
_start:
{
lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; 
v___x_4390_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4391_ = ((lean_object*)(l_Lasm_JS_Node_process_report_excludeEnv___closed__2));
v___x_4392_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_events_captureRejections_spec__0(v___x_4390_, v___x_4391_);
return v___x_4392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_excludeEnv___boxed(lean_object* v_a_4393_){
_start:
{
lean_object* v_res_4394_; 
v_res_4394_ = l_Lasm_JS_Node_process_report_excludeEnv();
return v_res_4394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_signal(){
_start:
{
lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; 
v___x_4403_ = ((lean_object*)(l_Lasm_JS_Node_process_allowedNodeEnvironmentFlags___closed__0));
v___x_4404_ = ((lean_object*)(l_Lasm_JS_Node_process_report_signal___closed__2));
v___x_4405_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_4403_, v___x_4404_);
return v___x_4405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_signal___boxed(lean_object* v_a_4406_){
_start:
{
lean_object* v_res_4407_; 
v_res_4407_ = l_Lasm_JS_Node_process_report_signal();
return v_res_4407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_getReport(lean_object* v_err_4416_){
_start:
{
uint8_t v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; 
v___x_4418_ = 0;
v___x_4419_ = lean_unsigned_to_nat(1u);
v___x_4420_ = ((lean_object*)(l_Lasm_JS_Node_process_report_getReport___closed__2));
v___x_4421_ = lean_mk_empty_array_with_capacity(v___x_4419_);
v___x_4422_ = lean_array_push(v___x_4421_, v_err_4416_);
v___x_4423_ = l_Lasm_JS_Web_Support_args(v___x_4422_);
v___x_4424_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_events_on_spec__1(v___x_4420_, v___x_4423_, v___x_4418_);
return v___x_4424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_getReport___boxed(lean_object* v_err_4425_, lean_object* v_a_4426_){
_start:
{
lean_object* v_res_4427_; 
v_res_4427_ = l_Lasm_JS_Node_process_report_getReport(v_err_4425_);
return v_res_4427_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_writeReport(lean_object* v_filename_4436_, lean_object* v_err_4437_){
_start:
{
uint8_t v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; 
v___x_4439_ = 0;
v___x_4440_ = lean_unsigned_to_nat(2u);
v___x_4441_ = ((lean_object*)(l_Lasm_JS_Node_process_report_writeReport___closed__2));
v___x_4442_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_filename_4436_);
v___x_4443_ = lean_mk_empty_array_with_capacity(v___x_4440_);
v___x_4444_ = lean_array_push(v___x_4443_, v___x_4442_);
v___x_4445_ = lean_array_push(v___x_4444_, v_err_4437_);
v___x_4446_ = l_Lasm_JS_Web_Support_args(v___x_4445_);
v___x_4447_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_buffer_atob_spec__0(v___x_4441_, v___x_4446_, v___x_4439_);
return v___x_4447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_report_writeReport___boxed(lean_object* v_filename_4448_, lean_object* v_err_4449_, lean_object* v_a_4450_){
_start:
{
lean_object* v_res_4451_; 
v_res_4451_ = l_Lasm_JS_Node_process_report_writeReport(v_filename_4448_, v_err_4449_);
return v_res_4451_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Events(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Net(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin) {
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
res = initialize_Lasm_JS_Node_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Events(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Buffer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Node_Net(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
