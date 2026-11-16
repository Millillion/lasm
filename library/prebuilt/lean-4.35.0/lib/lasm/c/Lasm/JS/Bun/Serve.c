// Lean compiler output
// Module: Lasm.JS.Bun.Serve
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.File public import Lasm.JS.Web.Url public import Lasm.JS.Web.Fetch public import Lasm.JS.Bun.Core
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
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_MarkdownRenderCallbacksLink_ofFn_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_UdpBaseUDPSocket_address_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8Array___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
extern lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrBunFileOrSequenceOfDOMStringOrUint8ArrayOrBunFile;
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SocketHandlerData_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Bun_argv_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_UdpSocketHandlerData_ofFn_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_TerminalOptionsExit_ofFn_spec__1(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_getCertificate_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSUnit___lam__0(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_Web_instToJSHeadersInit;
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_SocketListener_data_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_BunFile_name_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_end_spec__0(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Headers_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocket = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Bun.ServerWebSocket"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServer = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Bun.Server"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServer___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServer___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServer = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType = (const lean_object*)&l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Bun.ServerWebSocketBinaryType.nodebuffer"};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Bun.ServerWebSocketBinaryType.arraybuffer"};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Lasm.JS.Bun.ServerWebSocketBinaryType.uint8array"};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Lasm.JS.Bun.ServerWebSocketBinaryType.blob"};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__7_value;
static lean_once_cell_t l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8;
static lean_once_cell_t l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprServerWebSocketBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType = (const lean_object*)&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType;
static const lean_string_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "nodebuffer"};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "arraybuffer"};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "uint8array"};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "blob"};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Bun.ServerWebSocketBinaryType"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqWebSocketCompressor_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqWebSocketCompressor_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqWebSocketCompressor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqWebSocketCompressor_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqWebSocketCompressor___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqWebSocketCompressor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqWebSocketCompressor = (const lean_object*)&l_Lasm_JS_Bun_instBEqWebSocketCompressor___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Bun.WebSocketCompressor.disable"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Bun.WebSocketCompressor.shared"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Lasm.JS.Bun.WebSocketCompressor.dedicated"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v3KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v4KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v8KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__11_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v16KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__12_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__13_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v32KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__14_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__15 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__15_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v64KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__16 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__16_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__17 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__17_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v128KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__18 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__18_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__19 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__19_value;
static const lean_string_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lasm.JS.Bun.WebSocketCompressor.v256KB"};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__20 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__20_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__21 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__21_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprWebSocketCompressor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor = (const lean_object*)&l_Lasm_JS_Bun_instReprWebSocketCompressor___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedWebSocketCompressor_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedWebSocketCompressor;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "disable"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "shared"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "dedicated"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "3KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "4KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "8KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "16KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__12_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "32KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__14_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__14_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__15_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "64KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__16 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__16_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__16_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__17 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__17_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "128KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__18 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__18_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__18_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__19 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__19_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "256KB"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__20 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__20_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__20_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__21 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__21_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSWebSocketCompressor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressor___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(10) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__7_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__9_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Bun.WebSocketCompressor"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketCompressor___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerProtocol_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqServerProtocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqServerProtocol___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqServerProtocol___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instBEqServerProtocol___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Bun.ServerProtocol.http"};
static const lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Bun.ServerProtocol.https"};
static const lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprServerProtocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprServerProtocol___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedServerProtocol_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedServerProtocol;
static const lean_string_object l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServerProtocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSServerProtocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServerProtocol___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Bun.ServerProtocol"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerProtocol___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerProtocol___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob = (const lean_object*)&l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob = (const lean_object*)&l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob = (const lean_object*)&l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketCorkCallback = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lasm.JS.Bun.ServerWebSocketCorkCallback"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocketCorkCallback___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__3_value)}};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__6;
static lean_once_cell_t l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7;
static lean_once_cell_t l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8;
static lean_once_cell_t l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__9;
static lean_once_cell_t l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort = (const lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort = (const lean_object*)&l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_tlsOptions_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_tlsOptions_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_sequence_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_sequence_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "passphrase"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "dhParamsFile"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "serverName"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "servername"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "lowMemoryMode"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "rejectUnauthorized"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "requestCert"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ca"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "crl"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cert"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "secureOptions"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ALPNProtocols"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__12_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ciphers"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "clientRenegotiationLimit"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__14_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "clientRenegotiationWindow"};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__15 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__15_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__0_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__4;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__6_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__7_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__8_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__9_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__10_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__11_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__5_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__6_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__12_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__12_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__7_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__8_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__9_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__10_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__13_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__13_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__11_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__14_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions = (const lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions = (const lean_object*)&l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions = (const lean_object*)&l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "hmr"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "console"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "chromeDevToolsAutomaticWorkspaceFolders"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeDevelopment___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1_value)} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeDevelopment___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopment___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeDevelopment = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopment___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_serveDevelopment_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_serveDevelopment_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeDevelopmentUnion = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion = (const lean_object*)&l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion = (const lean_object*)&l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptionsError = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Bun.ServeOptionsError"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsError = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.JS.Bun.ErrorLike"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "errno"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "syscall"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptionsFetch = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Bun.ServeOptionsFetch"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsFetch = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutes___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeRoutes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServeRoutes___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeRoutes___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutes___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeRoutes = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutes___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutes_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutesWithUpgrade_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutesWithUpgrade_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade = (const lean_object*)&l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade = (const lean_object*)&l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerMessage = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lasm.JS.Bun.WebSocketHandlerMessage"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerMessage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.DOMStringOrUint8Array"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerOpen = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Bun.WebSocketHandlerOpen"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerOpen___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerDrain = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.WebSocketHandlerDrain"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerDrain___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerClose = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.WebSocketHandlerClose"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerClose___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__1(lean_object*, lean_object*, double, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0;
static lean_once_cell_t l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__1;
static lean_once_cell_t l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2;
static lean_once_cell_t l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3;
static lean_once_cell_t l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__4;
static lean_once_cell_t l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPing = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Bun.WebSocketHandlerPing"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPing___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPong = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Bun.WebSocketHandlerPong"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerPong___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerError = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Bun.WebSocketHandlerError"};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSWebSocketHandlerError = (const lean_object*)&l_Lasm_JS_Bun_instFromJSWebSocketHandlerError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean = (const lean_object*)&l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean = (const lean_object*)&l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "compress"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decompress"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___closed__0_value)} };
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_webSocketHandlerPerMessageDeflate_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_webSocketHandlerPerMessageDeflate_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate = (const lean_object*)&l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate = (const lean_object*)&l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate = (const lean_object*)&l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "message"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "open"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "drain"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ping"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pong"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "maxPayloadLength"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "backpressureLimit"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "closeOnBackpressureLimit"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "idleTimeout"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "publishToSelf"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__12_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "sendPings"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "perMessageDeflate"};
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__14_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSUnit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__0_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__1_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*12, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0, .m_arity = 13, .m_num_fixed = 12, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__2_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___closed__0_value)} };
static const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler = (const lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reusePort"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ipv6Only"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "http3"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "http2"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "http1"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tls"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "maxRequestBodySize"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "development"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__11_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "routes"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__12 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__12_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "websocket"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__13 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__13_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unix"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__14 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__14_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*10, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServeOptions___lam__0, .m_arity = 11, .m_num_fixed = 10, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServerWebSocket___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___closed__2_value)} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptions = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSRequestOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSRequestOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString = (const lean_object*)&l_Lasm_JS_Bun_instToJSRequestOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString = (const lean_object*)&l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_instToJSServerUpgradeOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instToJSServerUpgradeOptions___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerUpgradeOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_arrayBuffer_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_arrayBuffer_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_blob_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_blob_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob = (const lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob = (const lean_object*)&l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_subscriptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "subscriptions"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscriptions___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_subscriptions___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscriptions(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscriptions___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_remoteAddress___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "remoteAddress"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_remoteAddress___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_remoteAddress___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_remoteAddress(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_remoteAddress___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_readyState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "readyState"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_readyState___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_readyState___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_readyState(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_readyState___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "Option (Lasm.JS.Bun.ServerWebSocketBinaryType)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_binaryType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "binaryType"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_binaryType___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_binaryType___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_binaryType(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_binaryType___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_data(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_data___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_isPaused___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isPaused"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_isPaused___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_isPaused___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isPaused(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isPaused___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_send___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "send"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_send___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_send___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_send(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_sendText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "sendText"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendText___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_sendText___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendText(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendText___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_sendBinary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "sendBinary"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendBinary___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_sendBinary___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendBinary(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendBinary___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_close(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_close___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "terminate"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__0_value;
static const lean_array_object l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_terminate(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_terminate___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_ServerWebSocket_ping_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_ping(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_ping___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pong(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pong___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_publish___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "publish"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_publish___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_publish___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publish(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publish___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_publishText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "publishText"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishText___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_publishText___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishText(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishText___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_publishBinary___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "publishBinary"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishBinary___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_publishBinary___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishBinary(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishBinary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_subscribe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "subscribe"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscribe___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_subscribe___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscribe___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_unsubscribe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unsubscribe"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_unsubscribe___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_unsubscribe___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_unsubscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_unsubscribe___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_isSubscribed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "isSubscribed"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_isSubscribed___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_isSubscribed___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isSubscribed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isSubscribed___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_cork___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cork"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_cork___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_cork___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_cork(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_cork___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "getBufferedAmount"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_pause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pause"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_pause___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_pause___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pause(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pause___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_ServerWebSocket_resume___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "resume"};
static const lean_object* l_Lasm_JS_Bun_ServerWebSocket_resume___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_ServerWebSocket_resume___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_resume(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_resume___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_pendingRequests___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "pendingRequests"};
static const lean_object* l_Lasm_JS_Bun_Server_pendingRequests___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_pendingRequests___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_pendingWebSockets___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "pendingWebSockets"};
static const lean_object* l_Lasm_JS_Bun_Server_pendingWebSockets___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_pendingWebSockets___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingWebSockets(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingWebSockets___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_url___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_JS_Bun_Server_url___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_url___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Nat)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Option (Lasm.JS.Bun.ServerProtocol)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_protocol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "protocol"};
static const lean_object* l_Lasm_JS_Bun_Server_protocol___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_protocol___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_stop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "stop"};
static const lean_object* l_Lasm_JS_Bun_Server_stop___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_stop___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "closeIdleConnections"};
static const lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__5___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__10(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__10___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__11(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__11___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__9___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__14_spec__15(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__14(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__8(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__8___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__7___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__12(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__12___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__13(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__13___boxed(lean_object*);
static const lean_ctor_object l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_reload___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "reload"};
static const lean_object* l_Lasm_JS_Bun_Server_reload___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_reload___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_Server_fetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_Server_fetch___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_Server_fetch___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_fetch___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_upgrade_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_upgrade___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "upgrade"};
static const lean_object* l_Lasm_JS_Bun_Server_upgrade___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_upgrade___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_upgrade(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_upgrade___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_publish(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_publish___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_subscriberCount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "subscriberCount"};
static const lean_object* l_Lasm_JS_Bun_Server_subscriberCount___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_subscriberCount___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_subscriberCount(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_subscriberCount___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Option (Lasm.JS.Bun.SocketAddress)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "address"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "family"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_requestIP___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "requestIP"};
static const lean_object* l_Lasm_JS_Bun_Server_requestIP___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_requestIP___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_timeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "timeout"};
static const lean_object* l_Lasm_JS_Bun_Server_timeout___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_timeout___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_ref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lasm_JS_Bun_Server_ref___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_ref___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_unref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "unref"};
static const lean_object* l_Lasm_JS_Bun_Server_unref___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_unref___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_serve___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.JS.Bun.serve"};
static const lean_object* l_Lasm_JS_Bun_serve___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_serve___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_serve___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Bun_serve___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_serve___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_serve___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Bun.serve"};
static const lean_object* l_Lasm_JS_Bun_serve___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_serve___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_serve___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_serve___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_serve___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_serve___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_serve___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_serve___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Bun_instFromJSServerWebSocket___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorIdx(uint8_t v_x_29_){
_start:
{
switch(v_x_29_)
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
case 2:
{
lean_object* v___x_32_; 
v___x_32_ = lean_unsigned_to_nat(2u);
return v___x_32_;
}
default: 
{
lean_object* v___x_33_; 
v___x_33_ = lean_unsigned_to_nat(3u);
return v___x_33_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorIdx___boxed(lean_object* v_x_34_){
_start:
{
uint8_t v_x_boxed_35_; lean_object* v_res_36_; 
v_x_boxed_35_ = lean_unbox(v_x_34_);
v_res_36_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorIdx(v_x_boxed_35_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim___redArg(lean_object* v_k_37_){
_start:
{
lean_inc(v_k_37_);
return v_k_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim___redArg___boxed(lean_object* v_k_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim___redArg(v_k_38_);
lean_dec(v_k_38_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim(lean_object* v_motive_40_, lean_object* v_ctorIdx_41_, uint8_t v_t_42_, lean_object* v_h_43_, lean_object* v_k_44_){
_start:
{
lean_inc(v_k_44_);
return v_k_44_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim___boxed(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
uint8_t v_t_boxed_50_; lean_object* v_res_51_; 
v_t_boxed_50_ = lean_unbox(v_t_47_);
v_res_51_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorElim(v_motive_45_, v_ctorIdx_46_, v_t_boxed_50_, v_h_48_, v_k_49_);
lean_dec(v_k_49_);
lean_dec(v_ctorIdx_46_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim___redArg(lean_object* v_nodebuffer_52_){
_start:
{
lean_inc(v_nodebuffer_52_);
return v_nodebuffer_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim___redArg___boxed(lean_object* v_nodebuffer_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim___redArg(v_nodebuffer_53_);
lean_dec(v_nodebuffer_53_);
return v_res_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim(lean_object* v_motive_55_, uint8_t v_t_56_, lean_object* v_h_57_, lean_object* v_nodebuffer_58_){
_start:
{
lean_inc(v_nodebuffer_58_);
return v_nodebuffer_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim___boxed(lean_object* v_motive_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_nodebuffer_62_){
_start:
{
uint8_t v_t_boxed_63_; lean_object* v_res_64_; 
v_t_boxed_63_ = lean_unbox(v_t_60_);
v_res_64_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_nodebuffer_elim(v_motive_59_, v_t_boxed_63_, v_h_61_, v_nodebuffer_62_);
lean_dec(v_nodebuffer_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim___redArg(lean_object* v_arraybuffer_65_){
_start:
{
lean_inc(v_arraybuffer_65_);
return v_arraybuffer_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim___redArg___boxed(lean_object* v_arraybuffer_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim___redArg(v_arraybuffer_66_);
lean_dec(v_arraybuffer_66_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim(lean_object* v_motive_68_, uint8_t v_t_69_, lean_object* v_h_70_, lean_object* v_arraybuffer_71_){
_start:
{
lean_inc(v_arraybuffer_71_);
return v_arraybuffer_71_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim___boxed(lean_object* v_motive_72_, lean_object* v_t_73_, lean_object* v_h_74_, lean_object* v_arraybuffer_75_){
_start:
{
uint8_t v_t_boxed_76_; lean_object* v_res_77_; 
v_t_boxed_76_ = lean_unbox(v_t_73_);
v_res_77_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_arraybuffer_elim(v_motive_72_, v_t_boxed_76_, v_h_74_, v_arraybuffer_75_);
lean_dec(v_arraybuffer_75_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim___redArg(lean_object* v_uint8array_78_){
_start:
{
lean_inc(v_uint8array_78_);
return v_uint8array_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim___redArg___boxed(lean_object* v_uint8array_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim___redArg(v_uint8array_79_);
lean_dec(v_uint8array_79_);
return v_res_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim(lean_object* v_motive_81_, uint8_t v_t_82_, lean_object* v_h_83_, lean_object* v_uint8array_84_){
_start:
{
lean_inc(v_uint8array_84_);
return v_uint8array_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim___boxed(lean_object* v_motive_85_, lean_object* v_t_86_, lean_object* v_h_87_, lean_object* v_uint8array_88_){
_start:
{
uint8_t v_t_boxed_89_; lean_object* v_res_90_; 
v_t_boxed_89_ = lean_unbox(v_t_86_);
v_res_90_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_uint8array_elim(v_motive_85_, v_t_boxed_89_, v_h_87_, v_uint8array_88_);
lean_dec(v_uint8array_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim___redArg(lean_object* v_blob_91_){
_start:
{
lean_inc(v_blob_91_);
return v_blob_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim___redArg___boxed(lean_object* v_blob_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim___redArg(v_blob_92_);
lean_dec(v_blob_92_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim(lean_object* v_motive_94_, uint8_t v_t_95_, lean_object* v_h_96_, lean_object* v_blob_97_){
_start:
{
lean_inc(v_blob_97_);
return v_blob_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim___boxed(lean_object* v_motive_98_, lean_object* v_t_99_, lean_object* v_h_100_, lean_object* v_blob_101_){
_start:
{
uint8_t v_t_boxed_102_; lean_object* v_res_103_; 
v_t_boxed_102_ = lean_unbox(v_t_99_);
v_res_103_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_blob_elim(v_motive_98_, v_t_boxed_102_, v_h_100_, v_blob_101_);
lean_dec(v_blob_101_);
return v_res_103_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType_beq(uint8_t v_x_104_, uint8_t v_y_105_){
_start:
{
lean_object* v___x_106_; lean_object* v___x_107_; uint8_t v___x_108_; 
v___x_106_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorIdx(v_x_104_);
v___x_107_ = l_Lasm_JS_Bun_ServerWebSocketBinaryType_ctorIdx(v_y_105_);
v___x_108_ = lean_nat_dec_eq(v___x_106_, v___x_107_);
lean_dec(v___x_107_);
lean_dec(v___x_106_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType_beq___boxed(lean_object* v_x_109_, lean_object* v_y_110_){
_start:
{
uint8_t v_x_21__boxed_111_; uint8_t v_y_22__boxed_112_; uint8_t v_res_113_; lean_object* v_r_114_; 
v_x_21__boxed_111_ = lean_unbox(v_x_109_);
v_y_22__boxed_112_ = lean_unbox(v_y_110_);
v_res_113_ = l_Lasm_JS_Bun_instBEqServerWebSocketBinaryType_beq(v_x_21__boxed_111_, v_y_22__boxed_112_);
v_r_114_ = lean_box(v_res_113_);
return v_r_114_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; 
v___x_129_ = lean_unsigned_to_nat(2u);
v___x_130_ = lean_nat_to_int(v___x_129_);
return v___x_130_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9(void){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = lean_unsigned_to_nat(1u);
v___x_132_ = lean_nat_to_int(v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr(uint8_t v_x_133_, lean_object* v_prec_134_){
_start:
{
lean_object* v___y_136_; lean_object* v___y_143_; lean_object* v___y_150_; lean_object* v___y_157_; 
switch(v_x_133_)
{
case 0:
{
lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(1024u);
v___x_164_ = lean_nat_dec_le(v___x_163_, v_prec_134_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; 
v___x_165_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_136_ = v___x_165_;
goto v___jp_135_;
}
else
{
lean_object* v___x_166_; 
v___x_166_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_136_ = v___x_166_;
goto v___jp_135_;
}
}
case 1:
{
lean_object* v___x_167_; uint8_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(1024u);
v___x_168_ = lean_nat_dec_le(v___x_167_, v_prec_134_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; 
v___x_169_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_143_ = v___x_169_;
goto v___jp_142_;
}
else
{
lean_object* v___x_170_; 
v___x_170_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_143_ = v___x_170_;
goto v___jp_142_;
}
}
case 2:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(1024u);
v___x_172_ = lean_nat_dec_le(v___x_171_, v_prec_134_);
if (v___x_172_ == 0)
{
lean_object* v___x_173_; 
v___x_173_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_150_ = v___x_173_;
goto v___jp_149_;
}
else
{
lean_object* v___x_174_; 
v___x_174_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_150_ = v___x_174_;
goto v___jp_149_;
}
}
default: 
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_unsigned_to_nat(1024u);
v___x_176_ = lean_nat_dec_le(v___x_175_, v_prec_134_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_157_ = v___x_177_;
goto v___jp_156_;
}
else
{
lean_object* v___x_178_; 
v___x_178_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_157_ = v___x_178_;
goto v___jp_156_;
}
}
}
v___jp_135_:
{
lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_137_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__1));
lean_inc(v___y_136_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_136_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_134_);
return v___x_141_;
}
v___jp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; uint8_t v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_144_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__3));
lean_inc(v___y_143_);
v___x_145_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_145_, 0, v___y_143_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
v___x_146_ = 0;
v___x_147_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_147_, 0, v___x_145_);
lean_ctor_set_uint8(v___x_147_, sizeof(void*)*1, v___x_146_);
v___x_148_ = l_Repr_addAppParen(v___x_147_, v_prec_134_);
return v___x_148_;
}
v___jp_149_:
{
lean_object* v___x_151_; lean_object* v___x_152_; uint8_t v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_151_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__5));
lean_inc(v___y_150_);
v___x_152_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_152_, 0, v___y_150_);
lean_ctor_set(v___x_152_, 1, v___x_151_);
v___x_153_ = 0;
v___x_154_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_154_, 0, v___x_152_);
lean_ctor_set_uint8(v___x_154_, sizeof(void*)*1, v___x_153_);
v___x_155_ = l_Repr_addAppParen(v___x_154_, v_prec_134_);
return v___x_155_;
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_158_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__7));
lean_inc(v___y_157_);
v___x_159_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_159_, 0, v___y_157_);
lean_ctor_set(v___x_159_, 1, v___x_158_);
v___x_160_ = 0;
v___x_161_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_161_, 0, v___x_159_);
lean_ctor_set_uint8(v___x_161_, sizeof(void*)*1, v___x_160_);
v___x_162_ = l_Repr_addAppParen(v___x_161_, v_prec_134_);
return v___x_162_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___boxed(lean_object* v_x_179_, lean_object* v_prec_180_){
_start:
{
uint8_t v_x_225__boxed_181_; lean_object* v_res_182_; 
v_x_225__boxed_181_ = lean_unbox(v_x_179_);
v_res_182_ = l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr(v_x_225__boxed_181_, v_prec_180_);
lean_dec(v_prec_180_);
return v_res_182_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType_default(void){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = 0;
return v___x_185_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType(void){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = 0;
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0(uint8_t v_x_199_){
_start:
{
switch(v_x_199_)
{
case 0:
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__1));
return v___x_200_;
}
case 1:
{
lean_object* v___x_201_; 
v___x_201_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__3));
return v___x_201_;
}
case 2:
{
lean_object* v___x_202_; 
v___x_202_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__5));
return v___x_202_;
}
default: 
{
lean_object* v___x_203_; 
v___x_203_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__7));
return v___x_203_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___boxed(lean_object* v_x_204_){
_start:
{
uint8_t v_x_74__boxed_205_; lean_object* v_res_206_; 
v_x_74__boxed_205_ = lean_unbox(v_x_204_);
v_res_206_ = l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0(v_x_74__boxed_205_);
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0(lean_object* v_x_224_){
_start:
{
if (lean_obj_tag(v_x_224_) == 4)
{
lean_object* v_s_227_; lean_object* v___x_228_; uint8_t v___x_229_; 
v_s_227_ = lean_ctor_get(v_x_224_, 0);
v___x_228_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__0));
v___x_229_ = lean_string_dec_eq(v_s_227_, v___x_228_);
if (v___x_229_ == 0)
{
lean_object* v___x_230_; uint8_t v___x_231_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__2));
v___x_231_ = lean_string_dec_eq(v_s_227_, v___x_230_);
if (v___x_231_ == 0)
{
lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_232_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__4));
v___x_233_ = lean_string_dec_eq(v_s_227_, v___x_232_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_234_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__6));
v___x_235_ = lean_string_dec_eq(v_s_227_, v___x_234_);
if (v___x_235_ == 0)
{
goto v___jp_225_;
}
else
{
lean_object* v___x_236_; 
v___x_236_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__2));
return v___x_236_;
}
}
else
{
lean_object* v___x_237_; 
v___x_237_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__3));
return v___x_237_;
}
}
else
{
lean_object* v___x_238_; 
v___x_238_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__4));
return v___x_238_;
}
}
else
{
lean_object* v___x_239_; 
v___x_239_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__5));
return v___x_239_;
}
}
else
{
goto v___jp_225_;
}
v___jp_225_:
{
lean_object* v___x_226_; 
v___x_226_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__1));
return v___x_226_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___boxed(lean_object* v_x_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0(v_x_240_);
lean_dec(v_x_240_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorIdx(uint8_t v_x_249_){
_start:
{
switch(v_x_249_)
{
case 0:
{
lean_object* v___x_250_; 
v___x_250_ = lean_unsigned_to_nat(0u);
return v___x_250_;
}
case 1:
{
lean_object* v___x_251_; 
v___x_251_ = lean_unsigned_to_nat(1u);
return v___x_251_;
}
case 2:
{
lean_object* v___x_252_; 
v___x_252_ = lean_unsigned_to_nat(2u);
return v___x_252_;
}
case 3:
{
lean_object* v___x_253_; 
v___x_253_ = lean_unsigned_to_nat(3u);
return v___x_253_;
}
case 4:
{
lean_object* v___x_254_; 
v___x_254_ = lean_unsigned_to_nat(4u);
return v___x_254_;
}
case 5:
{
lean_object* v___x_255_; 
v___x_255_ = lean_unsigned_to_nat(5u);
return v___x_255_;
}
case 6:
{
lean_object* v___x_256_; 
v___x_256_ = lean_unsigned_to_nat(6u);
return v___x_256_;
}
case 7:
{
lean_object* v___x_257_; 
v___x_257_ = lean_unsigned_to_nat(7u);
return v___x_257_;
}
case 8:
{
lean_object* v___x_258_; 
v___x_258_ = lean_unsigned_to_nat(8u);
return v___x_258_;
}
case 9:
{
lean_object* v___x_259_; 
v___x_259_ = lean_unsigned_to_nat(9u);
return v___x_259_;
}
default: 
{
lean_object* v___x_260_; 
v___x_260_ = lean_unsigned_to_nat(10u);
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorIdx___boxed(lean_object* v_x_261_){
_start:
{
uint8_t v_x_boxed_262_; lean_object* v_res_263_; 
v_x_boxed_262_ = lean_unbox(v_x_261_);
v_res_263_ = l_Lasm_JS_Bun_WebSocketCompressor_ctorIdx(v_x_boxed_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim___redArg(lean_object* v_k_264_){
_start:
{
lean_inc(v_k_264_);
return v_k_264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim___redArg___boxed(lean_object* v_k_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lasm_JS_Bun_WebSocketCompressor_ctorElim___redArg(v_k_265_);
lean_dec(v_k_265_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim(lean_object* v_motive_267_, lean_object* v_ctorIdx_268_, uint8_t v_t_269_, lean_object* v_h_270_, lean_object* v_k_271_){
_start:
{
lean_inc(v_k_271_);
return v_k_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_ctorElim___boxed(lean_object* v_motive_272_, lean_object* v_ctorIdx_273_, lean_object* v_t_274_, lean_object* v_h_275_, lean_object* v_k_276_){
_start:
{
uint8_t v_t_boxed_277_; lean_object* v_res_278_; 
v_t_boxed_277_ = lean_unbox(v_t_274_);
v_res_278_ = l_Lasm_JS_Bun_WebSocketCompressor_ctorElim(v_motive_272_, v_ctorIdx_273_, v_t_boxed_277_, v_h_275_, v_k_276_);
lean_dec(v_k_276_);
lean_dec(v_ctorIdx_273_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim___redArg(lean_object* v_disable_279_){
_start:
{
lean_inc(v_disable_279_);
return v_disable_279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim___redArg___boxed(lean_object* v_disable_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lasm_JS_Bun_WebSocketCompressor_disable_elim___redArg(v_disable_280_);
lean_dec(v_disable_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim(lean_object* v_motive_282_, uint8_t v_t_283_, lean_object* v_h_284_, lean_object* v_disable_285_){
_start:
{
lean_inc(v_disable_285_);
return v_disable_285_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_disable_elim___boxed(lean_object* v_motive_286_, lean_object* v_t_287_, lean_object* v_h_288_, lean_object* v_disable_289_){
_start:
{
uint8_t v_t_boxed_290_; lean_object* v_res_291_; 
v_t_boxed_290_ = lean_unbox(v_t_287_);
v_res_291_ = l_Lasm_JS_Bun_WebSocketCompressor_disable_elim(v_motive_286_, v_t_boxed_290_, v_h_288_, v_disable_289_);
lean_dec(v_disable_289_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim___redArg(lean_object* v_shared_292_){
_start:
{
lean_inc(v_shared_292_);
return v_shared_292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim___redArg___boxed(lean_object* v_shared_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lasm_JS_Bun_WebSocketCompressor_shared_elim___redArg(v_shared_293_);
lean_dec(v_shared_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim(lean_object* v_motive_295_, uint8_t v_t_296_, lean_object* v_h_297_, lean_object* v_shared_298_){
_start:
{
lean_inc(v_shared_298_);
return v_shared_298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_shared_elim___boxed(lean_object* v_motive_299_, lean_object* v_t_300_, lean_object* v_h_301_, lean_object* v_shared_302_){
_start:
{
uint8_t v_t_boxed_303_; lean_object* v_res_304_; 
v_t_boxed_303_ = lean_unbox(v_t_300_);
v_res_304_ = l_Lasm_JS_Bun_WebSocketCompressor_shared_elim(v_motive_299_, v_t_boxed_303_, v_h_301_, v_shared_302_);
lean_dec(v_shared_302_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim___redArg(lean_object* v_dedicated_305_){
_start:
{
lean_inc(v_dedicated_305_);
return v_dedicated_305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim___redArg___boxed(lean_object* v_dedicated_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim___redArg(v_dedicated_306_);
lean_dec(v_dedicated_306_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim(lean_object* v_motive_308_, uint8_t v_t_309_, lean_object* v_h_310_, lean_object* v_dedicated_311_){
_start:
{
lean_inc(v_dedicated_311_);
return v_dedicated_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim___boxed(lean_object* v_motive_312_, lean_object* v_t_313_, lean_object* v_h_314_, lean_object* v_dedicated_315_){
_start:
{
uint8_t v_t_boxed_316_; lean_object* v_res_317_; 
v_t_boxed_316_ = lean_unbox(v_t_313_);
v_res_317_ = l_Lasm_JS_Bun_WebSocketCompressor_dedicated_elim(v_motive_312_, v_t_boxed_316_, v_h_314_, v_dedicated_315_);
lean_dec(v_dedicated_315_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim___redArg(lean_object* v_v3KB_318_){
_start:
{
lean_inc(v_v3KB_318_);
return v_v3KB_318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim___redArg___boxed(lean_object* v_v3KB_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim___redArg(v_v3KB_319_);
lean_dec(v_v3KB_319_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim(lean_object* v_motive_321_, uint8_t v_t_322_, lean_object* v_h_323_, lean_object* v_v3KB_324_){
_start:
{
lean_inc(v_v3KB_324_);
return v_v3KB_324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim___boxed(lean_object* v_motive_325_, lean_object* v_t_326_, lean_object* v_h_327_, lean_object* v_v3KB_328_){
_start:
{
uint8_t v_t_boxed_329_; lean_object* v_res_330_; 
v_t_boxed_329_ = lean_unbox(v_t_326_);
v_res_330_ = l_Lasm_JS_Bun_WebSocketCompressor_v3KB_elim(v_motive_325_, v_t_boxed_329_, v_h_327_, v_v3KB_328_);
lean_dec(v_v3KB_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim___redArg(lean_object* v_v4KB_331_){
_start:
{
lean_inc(v_v4KB_331_);
return v_v4KB_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim___redArg___boxed(lean_object* v_v4KB_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim___redArg(v_v4KB_332_);
lean_dec(v_v4KB_332_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim(lean_object* v_motive_334_, uint8_t v_t_335_, lean_object* v_h_336_, lean_object* v_v4KB_337_){
_start:
{
lean_inc(v_v4KB_337_);
return v_v4KB_337_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim___boxed(lean_object* v_motive_338_, lean_object* v_t_339_, lean_object* v_h_340_, lean_object* v_v4KB_341_){
_start:
{
uint8_t v_t_boxed_342_; lean_object* v_res_343_; 
v_t_boxed_342_ = lean_unbox(v_t_339_);
v_res_343_ = l_Lasm_JS_Bun_WebSocketCompressor_v4KB_elim(v_motive_338_, v_t_boxed_342_, v_h_340_, v_v4KB_341_);
lean_dec(v_v4KB_341_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim___redArg(lean_object* v_v8KB_344_){
_start:
{
lean_inc(v_v8KB_344_);
return v_v8KB_344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim___redArg___boxed(lean_object* v_v8KB_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim___redArg(v_v8KB_345_);
lean_dec(v_v8KB_345_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim(lean_object* v_motive_347_, uint8_t v_t_348_, lean_object* v_h_349_, lean_object* v_v8KB_350_){
_start:
{
lean_inc(v_v8KB_350_);
return v_v8KB_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim___boxed(lean_object* v_motive_351_, lean_object* v_t_352_, lean_object* v_h_353_, lean_object* v_v8KB_354_){
_start:
{
uint8_t v_t_boxed_355_; lean_object* v_res_356_; 
v_t_boxed_355_ = lean_unbox(v_t_352_);
v_res_356_ = l_Lasm_JS_Bun_WebSocketCompressor_v8KB_elim(v_motive_351_, v_t_boxed_355_, v_h_353_, v_v8KB_354_);
lean_dec(v_v8KB_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim___redArg(lean_object* v_v16KB_357_){
_start:
{
lean_inc(v_v16KB_357_);
return v_v16KB_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim___redArg___boxed(lean_object* v_v16KB_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim___redArg(v_v16KB_358_);
lean_dec(v_v16KB_358_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim(lean_object* v_motive_360_, uint8_t v_t_361_, lean_object* v_h_362_, lean_object* v_v16KB_363_){
_start:
{
lean_inc(v_v16KB_363_);
return v_v16KB_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim___boxed(lean_object* v_motive_364_, lean_object* v_t_365_, lean_object* v_h_366_, lean_object* v_v16KB_367_){
_start:
{
uint8_t v_t_boxed_368_; lean_object* v_res_369_; 
v_t_boxed_368_ = lean_unbox(v_t_365_);
v_res_369_ = l_Lasm_JS_Bun_WebSocketCompressor_v16KB_elim(v_motive_364_, v_t_boxed_368_, v_h_366_, v_v16KB_367_);
lean_dec(v_v16KB_367_);
return v_res_369_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim___redArg(lean_object* v_v32KB_370_){
_start:
{
lean_inc(v_v32KB_370_);
return v_v32KB_370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim___redArg___boxed(lean_object* v_v32KB_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim___redArg(v_v32KB_371_);
lean_dec(v_v32KB_371_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim(lean_object* v_motive_373_, uint8_t v_t_374_, lean_object* v_h_375_, lean_object* v_v32KB_376_){
_start:
{
lean_inc(v_v32KB_376_);
return v_v32KB_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim___boxed(lean_object* v_motive_377_, lean_object* v_t_378_, lean_object* v_h_379_, lean_object* v_v32KB_380_){
_start:
{
uint8_t v_t_boxed_381_; lean_object* v_res_382_; 
v_t_boxed_381_ = lean_unbox(v_t_378_);
v_res_382_ = l_Lasm_JS_Bun_WebSocketCompressor_v32KB_elim(v_motive_377_, v_t_boxed_381_, v_h_379_, v_v32KB_380_);
lean_dec(v_v32KB_380_);
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim___redArg(lean_object* v_v64KB_383_){
_start:
{
lean_inc(v_v64KB_383_);
return v_v64KB_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim___redArg___boxed(lean_object* v_v64KB_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim___redArg(v_v64KB_384_);
lean_dec(v_v64KB_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim(lean_object* v_motive_386_, uint8_t v_t_387_, lean_object* v_h_388_, lean_object* v_v64KB_389_){
_start:
{
lean_inc(v_v64KB_389_);
return v_v64KB_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim___boxed(lean_object* v_motive_390_, lean_object* v_t_391_, lean_object* v_h_392_, lean_object* v_v64KB_393_){
_start:
{
uint8_t v_t_boxed_394_; lean_object* v_res_395_; 
v_t_boxed_394_ = lean_unbox(v_t_391_);
v_res_395_ = l_Lasm_JS_Bun_WebSocketCompressor_v64KB_elim(v_motive_390_, v_t_boxed_394_, v_h_392_, v_v64KB_393_);
lean_dec(v_v64KB_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim___redArg(lean_object* v_v128KB_396_){
_start:
{
lean_inc(v_v128KB_396_);
return v_v128KB_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim___redArg___boxed(lean_object* v_v128KB_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim___redArg(v_v128KB_397_);
lean_dec(v_v128KB_397_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim(lean_object* v_motive_399_, uint8_t v_t_400_, lean_object* v_h_401_, lean_object* v_v128KB_402_){
_start:
{
lean_inc(v_v128KB_402_);
return v_v128KB_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim___boxed(lean_object* v_motive_403_, lean_object* v_t_404_, lean_object* v_h_405_, lean_object* v_v128KB_406_){
_start:
{
uint8_t v_t_boxed_407_; lean_object* v_res_408_; 
v_t_boxed_407_ = lean_unbox(v_t_404_);
v_res_408_ = l_Lasm_JS_Bun_WebSocketCompressor_v128KB_elim(v_motive_403_, v_t_boxed_407_, v_h_405_, v_v128KB_406_);
lean_dec(v_v128KB_406_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim___redArg(lean_object* v_v256KB_409_){
_start:
{
lean_inc(v_v256KB_409_);
return v_v256KB_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim___redArg___boxed(lean_object* v_v256KB_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim___redArg(v_v256KB_410_);
lean_dec(v_v256KB_410_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim(lean_object* v_motive_412_, uint8_t v_t_413_, lean_object* v_h_414_, lean_object* v_v256KB_415_){
_start:
{
lean_inc(v_v256KB_415_);
return v_v256KB_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim___boxed(lean_object* v_motive_416_, lean_object* v_t_417_, lean_object* v_h_418_, lean_object* v_v256KB_419_){
_start:
{
uint8_t v_t_boxed_420_; lean_object* v_res_421_; 
v_t_boxed_420_ = lean_unbox(v_t_417_);
v_res_421_ = l_Lasm_JS_Bun_WebSocketCompressor_v256KB_elim(v_motive_416_, v_t_boxed_420_, v_h_418_, v_v256KB_419_);
lean_dec(v_v256KB_419_);
return v_res_421_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqWebSocketCompressor_beq(uint8_t v_x_422_, uint8_t v_y_423_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_424_ = l_Lasm_JS_Bun_WebSocketCompressor_ctorIdx(v_x_422_);
v___x_425_ = l_Lasm_JS_Bun_WebSocketCompressor_ctorIdx(v_y_423_);
v___x_426_ = lean_nat_dec_eq(v___x_424_, v___x_425_);
lean_dec(v___x_425_);
lean_dec(v___x_424_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqWebSocketCompressor_beq___boxed(lean_object* v_x_427_, lean_object* v_y_428_){
_start:
{
uint8_t v_x_21__boxed_429_; uint8_t v_y_22__boxed_430_; uint8_t v_res_431_; lean_object* v_r_432_; 
v_x_21__boxed_429_ = lean_unbox(v_x_427_);
v_y_22__boxed_430_ = lean_unbox(v_y_428_);
v_res_431_ = l_Lasm_JS_Bun_instBEqWebSocketCompressor_beq(v_x_21__boxed_429_, v_y_22__boxed_430_);
v_r_432_ = lean_box(v_res_431_);
return v_r_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr(uint8_t v_x_468_, lean_object* v_prec_469_){
_start:
{
lean_object* v___y_471_; lean_object* v___y_478_; lean_object* v___y_485_; lean_object* v___y_492_; lean_object* v___y_499_; lean_object* v___y_506_; lean_object* v___y_513_; lean_object* v___y_520_; lean_object* v___y_527_; lean_object* v___y_534_; lean_object* v___y_541_; 
switch(v_x_468_)
{
case 0:
{
lean_object* v___x_547_; uint8_t v___x_548_; 
v___x_547_ = lean_unsigned_to_nat(1024u);
v___x_548_ = lean_nat_dec_le(v___x_547_, v_prec_469_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; 
v___x_549_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_471_ = v___x_549_;
goto v___jp_470_;
}
else
{
lean_object* v___x_550_; 
v___x_550_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_471_ = v___x_550_;
goto v___jp_470_;
}
}
case 1:
{
lean_object* v___x_551_; uint8_t v___x_552_; 
v___x_551_ = lean_unsigned_to_nat(1024u);
v___x_552_ = lean_nat_dec_le(v___x_551_, v_prec_469_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; 
v___x_553_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_478_ = v___x_553_;
goto v___jp_477_;
}
else
{
lean_object* v___x_554_; 
v___x_554_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_478_ = v___x_554_;
goto v___jp_477_;
}
}
case 2:
{
lean_object* v___x_555_; uint8_t v___x_556_; 
v___x_555_ = lean_unsigned_to_nat(1024u);
v___x_556_ = lean_nat_dec_le(v___x_555_, v_prec_469_);
if (v___x_556_ == 0)
{
lean_object* v___x_557_; 
v___x_557_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_485_ = v___x_557_;
goto v___jp_484_;
}
else
{
lean_object* v___x_558_; 
v___x_558_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_485_ = v___x_558_;
goto v___jp_484_;
}
}
case 3:
{
lean_object* v___x_559_; uint8_t v___x_560_; 
v___x_559_ = lean_unsigned_to_nat(1024u);
v___x_560_ = lean_nat_dec_le(v___x_559_, v_prec_469_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; 
v___x_561_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_492_ = v___x_561_;
goto v___jp_491_;
}
else
{
lean_object* v___x_562_; 
v___x_562_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_492_ = v___x_562_;
goto v___jp_491_;
}
}
case 4:
{
lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_563_ = lean_unsigned_to_nat(1024u);
v___x_564_ = lean_nat_dec_le(v___x_563_, v_prec_469_);
if (v___x_564_ == 0)
{
lean_object* v___x_565_; 
v___x_565_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_499_ = v___x_565_;
goto v___jp_498_;
}
else
{
lean_object* v___x_566_; 
v___x_566_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_499_ = v___x_566_;
goto v___jp_498_;
}
}
case 5:
{
lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = lean_unsigned_to_nat(1024u);
v___x_568_ = lean_nat_dec_le(v___x_567_, v_prec_469_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; 
v___x_569_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_506_ = v___x_569_;
goto v___jp_505_;
}
else
{
lean_object* v___x_570_; 
v___x_570_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_506_ = v___x_570_;
goto v___jp_505_;
}
}
case 6:
{
lean_object* v___x_571_; uint8_t v___x_572_; 
v___x_571_ = lean_unsigned_to_nat(1024u);
v___x_572_ = lean_nat_dec_le(v___x_571_, v_prec_469_);
if (v___x_572_ == 0)
{
lean_object* v___x_573_; 
v___x_573_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_513_ = v___x_573_;
goto v___jp_512_;
}
else
{
lean_object* v___x_574_; 
v___x_574_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_513_ = v___x_574_;
goto v___jp_512_;
}
}
case 7:
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_unsigned_to_nat(1024u);
v___x_576_ = lean_nat_dec_le(v___x_575_, v_prec_469_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
v___x_577_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_520_ = v___x_577_;
goto v___jp_519_;
}
else
{
lean_object* v___x_578_; 
v___x_578_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_520_ = v___x_578_;
goto v___jp_519_;
}
}
case 8:
{
lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_579_ = lean_unsigned_to_nat(1024u);
v___x_580_ = lean_nat_dec_le(v___x_579_, v_prec_469_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; 
v___x_581_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_527_ = v___x_581_;
goto v___jp_526_;
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_527_ = v___x_582_;
goto v___jp_526_;
}
}
case 9:
{
lean_object* v___x_583_; uint8_t v___x_584_; 
v___x_583_ = lean_unsigned_to_nat(1024u);
v___x_584_ = lean_nat_dec_le(v___x_583_, v_prec_469_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; 
v___x_585_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_534_ = v___x_585_;
goto v___jp_533_;
}
else
{
lean_object* v___x_586_; 
v___x_586_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_534_ = v___x_586_;
goto v___jp_533_;
}
}
default: 
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = lean_unsigned_to_nat(1024u);
v___x_588_ = lean_nat_dec_le(v___x_587_, v_prec_469_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; 
v___x_589_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_541_ = v___x_589_;
goto v___jp_540_;
}
else
{
lean_object* v___x_590_; 
v___x_590_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_541_ = v___x_590_;
goto v___jp_540_;
}
}
}
v___jp_470_:
{
lean_object* v___x_472_; lean_object* v___x_473_; uint8_t v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_472_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__1));
lean_inc(v___y_471_);
v___x_473_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_473_, 0, v___y_471_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
v___x_474_ = 0;
v___x_475_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_475_, 0, v___x_473_);
lean_ctor_set_uint8(v___x_475_, sizeof(void*)*1, v___x_474_);
v___x_476_ = l_Repr_addAppParen(v___x_475_, v_prec_469_);
return v___x_476_;
}
v___jp_477_:
{
lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_479_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__3));
lean_inc(v___y_478_);
v___x_480_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_480_, 0, v___y_478_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
v___x_481_ = 0;
v___x_482_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_482_, 0, v___x_480_);
lean_ctor_set_uint8(v___x_482_, sizeof(void*)*1, v___x_481_);
v___x_483_ = l_Repr_addAppParen(v___x_482_, v_prec_469_);
return v___x_483_;
}
v___jp_484_:
{
lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_486_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__5));
lean_inc(v___y_485_);
v___x_487_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_487_, 0, v___y_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = 0;
v___x_489_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set_uint8(v___x_489_, sizeof(void*)*1, v___x_488_);
v___x_490_ = l_Repr_addAppParen(v___x_489_, v_prec_469_);
return v___x_490_;
}
v___jp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; uint8_t v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_493_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__7));
lean_inc(v___y_492_);
v___x_494_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_494_, 0, v___y_492_);
lean_ctor_set(v___x_494_, 1, v___x_493_);
v___x_495_ = 0;
v___x_496_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_496_, 0, v___x_494_);
lean_ctor_set_uint8(v___x_496_, sizeof(void*)*1, v___x_495_);
v___x_497_ = l_Repr_addAppParen(v___x_496_, v_prec_469_);
return v___x_497_;
}
v___jp_498_:
{
lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_500_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__9));
lean_inc(v___y_499_);
v___x_501_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_501_, 0, v___y_499_);
lean_ctor_set(v___x_501_, 1, v___x_500_);
v___x_502_ = 0;
v___x_503_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_503_, 0, v___x_501_);
lean_ctor_set_uint8(v___x_503_, sizeof(void*)*1, v___x_502_);
v___x_504_ = l_Repr_addAppParen(v___x_503_, v_prec_469_);
return v___x_504_;
}
v___jp_505_:
{
lean_object* v___x_507_; lean_object* v___x_508_; uint8_t v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_507_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__11));
lean_inc(v___y_506_);
v___x_508_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_508_, 0, v___y_506_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
v___x_509_ = 0;
v___x_510_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_510_, 0, v___x_508_);
lean_ctor_set_uint8(v___x_510_, sizeof(void*)*1, v___x_509_);
v___x_511_ = l_Repr_addAppParen(v___x_510_, v_prec_469_);
return v___x_511_;
}
v___jp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_514_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__13));
lean_inc(v___y_513_);
v___x_515_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_515_, 0, v___y_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = 0;
v___x_517_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set_uint8(v___x_517_, sizeof(void*)*1, v___x_516_);
v___x_518_ = l_Repr_addAppParen(v___x_517_, v_prec_469_);
return v___x_518_;
}
v___jp_519_:
{
lean_object* v___x_521_; lean_object* v___x_522_; uint8_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_521_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__15));
lean_inc(v___y_520_);
v___x_522_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_522_, 0, v___y_520_);
lean_ctor_set(v___x_522_, 1, v___x_521_);
v___x_523_ = 0;
v___x_524_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_524_, 0, v___x_522_);
lean_ctor_set_uint8(v___x_524_, sizeof(void*)*1, v___x_523_);
v___x_525_ = l_Repr_addAppParen(v___x_524_, v_prec_469_);
return v___x_525_;
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; uint8_t v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_528_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__17));
lean_inc(v___y_527_);
v___x_529_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_529_, 0, v___y_527_);
lean_ctor_set(v___x_529_, 1, v___x_528_);
v___x_530_ = 0;
v___x_531_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_531_, 0, v___x_529_);
lean_ctor_set_uint8(v___x_531_, sizeof(void*)*1, v___x_530_);
v___x_532_ = l_Repr_addAppParen(v___x_531_, v_prec_469_);
return v___x_532_;
}
v___jp_533_:
{
lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_535_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__19));
lean_inc(v___y_534_);
v___x_536_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_536_, 0, v___y_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = 0;
v___x_538_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_538_, 0, v___x_536_);
lean_ctor_set_uint8(v___x_538_, sizeof(void*)*1, v___x_537_);
v___x_539_ = l_Repr_addAppParen(v___x_538_, v_prec_469_);
return v___x_539_;
}
v___jp_540_:
{
lean_object* v___x_542_; lean_object* v___x_543_; uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_542_ = ((lean_object*)(l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___closed__21));
lean_inc(v___y_541_);
v___x_543_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_543_, 0, v___y_541_);
lean_ctor_set(v___x_543_, 1, v___x_542_);
v___x_544_ = 0;
v___x_545_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_545_, 0, v___x_543_);
lean_ctor_set_uint8(v___x_545_, sizeof(void*)*1, v___x_544_);
v___x_546_ = l_Repr_addAppParen(v___x_545_, v_prec_469_);
return v___x_546_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprWebSocketCompressor_repr___boxed(lean_object* v_x_591_, lean_object* v_prec_592_){
_start:
{
uint8_t v_x_599__boxed_593_; lean_object* v_res_594_; 
v_x_599__boxed_593_ = lean_unbox(v_x_591_);
v_res_594_ = l_Lasm_JS_Bun_instReprWebSocketCompressor_repr(v_x_599__boxed_593_, v_prec_592_);
lean_dec(v_prec_592_);
return v_res_594_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedWebSocketCompressor_default(void){
_start:
{
uint8_t v___x_597_; 
v___x_597_ = 0;
return v___x_597_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedWebSocketCompressor(void){
_start:
{
uint8_t v___x_598_; 
v___x_598_ = 0;
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0(uint8_t v_x_632_){
_start:
{
switch(v_x_632_)
{
case 0:
{
lean_object* v___x_633_; 
v___x_633_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__1));
return v___x_633_;
}
case 1:
{
lean_object* v___x_634_; 
v___x_634_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__3));
return v___x_634_;
}
case 2:
{
lean_object* v___x_635_; 
v___x_635_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__5));
return v___x_635_;
}
case 3:
{
lean_object* v___x_636_; 
v___x_636_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__7));
return v___x_636_;
}
case 4:
{
lean_object* v___x_637_; 
v___x_637_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__9));
return v___x_637_;
}
case 5:
{
lean_object* v___x_638_; 
v___x_638_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__11));
return v___x_638_;
}
case 6:
{
lean_object* v___x_639_; 
v___x_639_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__13));
return v___x_639_;
}
case 7:
{
lean_object* v___x_640_; 
v___x_640_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__15));
return v___x_640_;
}
case 8:
{
lean_object* v___x_641_; 
v___x_641_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__17));
return v___x_641_;
}
case 9:
{
lean_object* v___x_642_; 
v___x_642_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__19));
return v___x_642_;
}
default: 
{
lean_object* v___x_643_; 
v___x_643_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__21));
return v___x_643_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___boxed(lean_object* v_x_644_){
_start:
{
uint8_t v_x_193__boxed_645_; lean_object* v_res_646_; 
v_x_193__boxed_645_ = lean_unbox(v_x_644_);
v_res_646_ = l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0(v_x_193__boxed_645_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0(lean_object* v_x_684_){
_start:
{
if (lean_obj_tag(v_x_684_) == 4)
{
lean_object* v_s_687_; lean_object* v___x_688_; uint8_t v___x_689_; 
v_s_687_ = lean_ctor_get(v_x_684_, 0);
v___x_688_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__0));
v___x_689_ = lean_string_dec_eq(v_s_687_, v___x_688_);
if (v___x_689_ == 0)
{
lean_object* v___x_690_; uint8_t v___x_691_; 
v___x_690_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__2));
v___x_691_ = lean_string_dec_eq(v_s_687_, v___x_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_692_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__4));
v___x_693_ = lean_string_dec_eq(v_s_687_, v___x_692_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_694_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__6));
v___x_695_ = lean_string_dec_eq(v_s_687_, v___x_694_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__8));
v___x_697_ = lean_string_dec_eq(v_s_687_, v___x_696_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; uint8_t v___x_699_; 
v___x_698_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__10));
v___x_699_ = lean_string_dec_eq(v_s_687_, v___x_698_);
if (v___x_699_ == 0)
{
lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_700_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__12));
v___x_701_ = lean_string_dec_eq(v_s_687_, v___x_700_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_702_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__14));
v___x_703_ = lean_string_dec_eq(v_s_687_, v___x_702_);
if (v___x_703_ == 0)
{
lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_704_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__16));
v___x_705_ = lean_string_dec_eq(v_s_687_, v___x_704_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; uint8_t v___x_707_; 
v___x_706_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__18));
v___x_707_ = lean_string_dec_eq(v_s_687_, v___x_706_);
if (v___x_707_ == 0)
{
lean_object* v___x_708_; uint8_t v___x_709_; 
v___x_708_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__20));
v___x_709_ = lean_string_dec_eq(v_s_687_, v___x_708_);
if (v___x_709_ == 0)
{
goto v___jp_685_;
}
else
{
lean_object* v___x_710_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__1));
return v___x_710_;
}
}
else
{
lean_object* v___x_711_; 
v___x_711_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__2));
return v___x_711_;
}
}
else
{
lean_object* v___x_712_; 
v___x_712_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__3));
return v___x_712_;
}
}
else
{
lean_object* v___x_713_; 
v___x_713_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__4));
return v___x_713_;
}
}
else
{
lean_object* v___x_714_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__5));
return v___x_714_;
}
}
else
{
lean_object* v___x_715_; 
v___x_715_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__6));
return v___x_715_;
}
}
else
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__7));
return v___x_716_;
}
}
else
{
lean_object* v___x_717_; 
v___x_717_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__8));
return v___x_717_;
}
}
else
{
lean_object* v___x_718_; 
v___x_718_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__9));
return v___x_718_;
}
}
else
{
lean_object* v___x_719_; 
v___x_719_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__10));
return v___x_719_;
}
}
else
{
lean_object* v___x_720_; 
v___x_720_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__11));
return v___x_720_;
}
}
else
{
goto v___jp_685_;
}
v___jp_685_:
{
lean_object* v___x_686_; 
v___x_686_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___closed__0));
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0___boxed(lean_object* v_x_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lasm_JS_Bun_instFromJSWebSocketCompressor___lam__0(v_x_721_);
lean_dec(v_x_721_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx(uint8_t v_x_730_){
_start:
{
if (v_x_730_ == 0)
{
lean_object* v___x_731_; 
v___x_731_ = lean_unsigned_to_nat(0u);
return v___x_731_;
}
else
{
lean_object* v___x_732_; 
v___x_732_ = lean_unsigned_to_nat(1u);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx___boxed(lean_object* v_x_733_){
_start:
{
uint8_t v_x_boxed_734_; lean_object* v_res_735_; 
v_x_boxed_734_ = lean_unbox(v_x_733_);
v_res_735_ = l_Lasm_JS_Bun_ServerProtocol_ctorIdx(v_x_boxed_734_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg(lean_object* v_k_736_){
_start:
{
lean_inc(v_k_736_);
return v_k_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg___boxed(lean_object* v_k_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg(v_k_737_);
lean_dec(v_k_737_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim(lean_object* v_motive_739_, lean_object* v_ctorIdx_740_, uint8_t v_t_741_, lean_object* v_h_742_, lean_object* v_k_743_){
_start:
{
lean_inc(v_k_743_);
return v_k_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___boxed(lean_object* v_motive_744_, lean_object* v_ctorIdx_745_, lean_object* v_t_746_, lean_object* v_h_747_, lean_object* v_k_748_){
_start:
{
uint8_t v_t_boxed_749_; lean_object* v_res_750_; 
v_t_boxed_749_ = lean_unbox(v_t_746_);
v_res_750_ = l_Lasm_JS_Bun_ServerProtocol_ctorElim(v_motive_744_, v_ctorIdx_745_, v_t_boxed_749_, v_h_747_, v_k_748_);
lean_dec(v_k_748_);
lean_dec(v_ctorIdx_745_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg(lean_object* v_http_751_){
_start:
{
lean_inc(v_http_751_);
return v_http_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg___boxed(lean_object* v_http_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg(v_http_752_);
lean_dec(v_http_752_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim(lean_object* v_motive_754_, uint8_t v_t_755_, lean_object* v_h_756_, lean_object* v_http_757_){
_start:
{
lean_inc(v_http_757_);
return v_http_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___boxed(lean_object* v_motive_758_, lean_object* v_t_759_, lean_object* v_h_760_, lean_object* v_http_761_){
_start:
{
uint8_t v_t_boxed_762_; lean_object* v_res_763_; 
v_t_boxed_762_ = lean_unbox(v_t_759_);
v_res_763_ = l_Lasm_JS_Bun_ServerProtocol_http_elim(v_motive_758_, v_t_boxed_762_, v_h_760_, v_http_761_);
lean_dec(v_http_761_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg(lean_object* v_https_764_){
_start:
{
lean_inc(v_https_764_);
return v_https_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg___boxed(lean_object* v_https_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg(v_https_765_);
lean_dec(v_https_765_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim(lean_object* v_motive_767_, uint8_t v_t_768_, lean_object* v_h_769_, lean_object* v_https_770_){
_start:
{
lean_inc(v_https_770_);
return v_https_770_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___boxed(lean_object* v_motive_771_, lean_object* v_t_772_, lean_object* v_h_773_, lean_object* v_https_774_){
_start:
{
uint8_t v_t_boxed_775_; lean_object* v_res_776_; 
v_t_boxed_775_ = lean_unbox(v_t_772_);
v_res_776_ = l_Lasm_JS_Bun_ServerProtocol_https_elim(v_motive_771_, v_t_boxed_775_, v_h_773_, v_https_774_);
lean_dec(v_https_774_);
return v_res_776_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerProtocol_beq(uint8_t v_x_777_, uint8_t v_y_778_){
_start:
{
lean_object* v___x_779_; lean_object* v___x_780_; uint8_t v___x_781_; 
v___x_779_ = l_Lasm_JS_Bun_ServerProtocol_ctorIdx(v_x_777_);
v___x_780_ = l_Lasm_JS_Bun_ServerProtocol_ctorIdx(v_y_778_);
v___x_781_ = lean_nat_dec_eq(v___x_779_, v___x_780_);
lean_dec(v___x_780_);
lean_dec(v___x_779_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed(lean_object* v_x_782_, lean_object* v_y_783_){
_start:
{
uint8_t v_x_21__boxed_784_; uint8_t v_y_22__boxed_785_; uint8_t v_res_786_; lean_object* v_r_787_; 
v_x_21__boxed_784_ = lean_unbox(v_x_782_);
v_y_22__boxed_785_ = lean_unbox(v_y_783_);
v_res_786_ = l_Lasm_JS_Bun_instBEqServerProtocol_beq(v_x_21__boxed_784_, v_y_22__boxed_785_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr(uint8_t v_x_796_, lean_object* v_prec_797_){
_start:
{
lean_object* v___y_799_; lean_object* v___y_806_; 
if (v_x_796_ == 0)
{
lean_object* v___x_812_; uint8_t v___x_813_; 
v___x_812_ = lean_unsigned_to_nat(1024u);
v___x_813_ = lean_nat_dec_le(v___x_812_, v_prec_797_);
if (v___x_813_ == 0)
{
lean_object* v___x_814_; 
v___x_814_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_799_ = v___x_814_;
goto v___jp_798_;
}
else
{
lean_object* v___x_815_; 
v___x_815_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_799_ = v___x_815_;
goto v___jp_798_;
}
}
else
{
lean_object* v___x_816_; uint8_t v___x_817_; 
v___x_816_ = lean_unsigned_to_nat(1024u);
v___x_817_ = lean_nat_dec_le(v___x_816_, v_prec_797_);
if (v___x_817_ == 0)
{
lean_object* v___x_818_; 
v___x_818_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___y_806_ = v___x_818_;
goto v___jp_805_;
}
else
{
lean_object* v___x_819_; 
v___x_819_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___y_806_ = v___x_819_;
goto v___jp_805_;
}
}
v___jp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; uint8_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_800_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__1));
lean_inc(v___y_799_);
v___x_801_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_801_, 0, v___y_799_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = 0;
v___x_803_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_803_, 0, v___x_801_);
lean_ctor_set_uint8(v___x_803_, sizeof(void*)*1, v___x_802_);
v___x_804_ = l_Repr_addAppParen(v___x_803_, v_prec_797_);
return v___x_804_;
}
v___jp_805_:
{
lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_807_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__3));
lean_inc(v___y_806_);
v___x_808_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_808_, 0, v___y_806_);
lean_ctor_set(v___x_808_, 1, v___x_807_);
v___x_809_ = 0;
v___x_810_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_810_, 0, v___x_808_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*1, v___x_809_);
v___x_811_ = l_Repr_addAppParen(v___x_810_, v_prec_797_);
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed(lean_object* v_x_820_, lean_object* v_prec_821_){
_start:
{
uint8_t v_x_113__boxed_822_; lean_object* v_res_823_; 
v_x_113__boxed_822_ = lean_unbox(v_x_820_);
v_res_823_ = l_Lasm_JS_Bun_instReprServerProtocol_repr(v_x_113__boxed_822_, v_prec_821_);
lean_dec(v_prec_821_);
return v_res_823_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerProtocol_default(void){
_start:
{
uint8_t v___x_826_; 
v___x_826_ = 0;
return v___x_826_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerProtocol(void){
_start:
{
uint8_t v___x_827_; 
v___x_827_ = 0;
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0(uint8_t v_x_834_){
_start:
{
if (v_x_834_ == 0)
{
lean_object* v___x_835_; 
v___x_835_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__1));
return v___x_835_;
}
else
{
lean_object* v___x_836_; 
v___x_836_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__3));
return v___x_836_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___boxed(lean_object* v_x_837_){
_start:
{
uint8_t v_x_40__boxed_838_; lean_object* v_res_839_; 
v_x_40__boxed_838_ = lean_unbox(v_x_837_);
v_res_839_ = l_Lasm_JS_Bun_instToJSServerProtocol___lam__0(v_x_40__boxed_838_);
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0(lean_object* v_x_850_){
_start:
{
if (lean_obj_tag(v_x_850_) == 4)
{
lean_object* v_s_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_s_853_ = lean_ctor_get(v_x_850_, 0);
v___x_854_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_855_ = lean_string_dec_eq(v_s_853_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; uint8_t v___x_857_; 
v___x_856_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_857_ = lean_string_dec_eq(v_s_853_, v___x_856_);
if (v___x_857_ == 0)
{
goto v___jp_851_;
}
else
{
lean_object* v___x_858_; 
v___x_858_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__1));
return v___x_858_;
}
}
else
{
lean_object* v___x_859_; 
v___x_859_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__2));
return v___x_859_;
}
}
else
{
goto v___jp_851_;
}
v___jp_851_:
{
lean_object* v___x_852_; 
v___x_852_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__0));
return v___x_852_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___boxed(lean_object* v_x_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0(v_x_860_);
lean_dec(v_x_860_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorIdx(lean_object* v_x_869_){
_start:
{
if (lean_obj_tag(v_x_869_) == 0)
{
lean_object* v___x_870_; 
v___x_870_ = lean_unsigned_to_nat(0u);
return v___x_870_;
}
else
{
lean_object* v___x_871_; 
v___x_871_ = lean_unsigned_to_nat(1u);
return v___x_871_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorIdx___boxed(lean_object* v_x_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorIdx(v_x_872_);
lean_dec_ref(v_x_872_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___redArg(lean_object* v_t_874_, lean_object* v_k_875_){
_start:
{
if (lean_obj_tag(v_t_874_) == 0)
{
lean_object* v_value_876_; lean_object* v___x_877_; 
v_value_876_ = lean_ctor_get(v_t_874_, 0);
lean_inc_ref(v_value_876_);
lean_dec_ref_known(v_t_874_, 1);
v___x_877_ = lean_apply_1(v_k_875_, v_value_876_);
return v___x_877_;
}
else
{
lean_object* v_value_878_; lean_object* v___x_879_; 
v_value_878_ = lean_ctor_get(v_t_874_, 0);
lean_inc(v_value_878_);
lean_dec_ref_known(v_t_874_, 1);
v___x_879_ = lean_apply_1(v_k_875_, v_value_878_);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim(lean_object* v_motive_880_, lean_object* v_ctorIdx_881_, lean_object* v_t_882_, lean_object* v_h_883_, lean_object* v_k_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___redArg(v_t_882_, v_k_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___boxed(lean_object* v_motive_886_, lean_object* v_ctorIdx_887_, lean_object* v_t_888_, lean_object* v_h_889_, lean_object* v_k_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim(v_motive_886_, v_ctorIdx_887_, v_t_888_, v_h_889_, v_k_890_);
lean_dec(v_ctorIdx_887_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_uint8Array_elim___redArg(lean_object* v_t_892_, lean_object* v_uint8Array_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___redArg(v_t_892_, v_uint8Array_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_uint8Array_elim(lean_object* v_motive_895_, lean_object* v_t_896_, lean_object* v_h_897_, lean_object* v_uint8Array_898_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___redArg(v_t_896_, v_uint8Array_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_blob_elim___redArg(lean_object* v_t_900_, lean_object* v_blob_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___redArg(v_t_900_, v_blob_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Uint8ArrayOrBlob_blob_elim(lean_object* v_motive_903_, lean_object* v_t_904_, lean_object* v_h_905_, lean_object* v_blob_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l_Lasm_JS_Bun_Uint8ArrayOrBlob_ctorElim___redArg(v_t_904_, v_blob_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSUint8ArrayOrBlob___lam__0(lean_object* v_x_908_){
_start:
{
if (lean_obj_tag(v_x_908_) == 0)
{
lean_object* v_value_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
v_value_909_ = lean_ctor_get(v_x_908_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v_x_908_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v_x_908_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_value_909_);
lean_dec(v_x_908_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
lean_ctor_set_tag(v___x_911_, 6);
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_value_909_);
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
lean_object* v_value_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v_value_917_ = lean_ctor_get(v_x_908_, 0);
lean_inc(v_value_917_);
lean_dec_ref_known(v_x_908_, 1);
v___x_918_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_919_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_919_, 0, v_value_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
return v___x_919_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeByteArrayUint8ArrayOrBlob___lam__0(lean_object* v_value_922_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_923_, 0, v_value_922_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBlobUint8ArrayOrBlob___lam__0(lean_object* v_value_926_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_927_, 0, v_value_926_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__0(lean_object* v_x_937_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_939_, 0, v_x_937_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__0___boxed(lean_object* v_x_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__0(v_x_940_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__1(lean_object* v_f_943_, lean_object* v___f_944_, lean_object* v_x_945_){
_start:
{
if (lean_obj_tag(v_x_945_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_955_; 
lean_dec_ref(v___f_944_);
lean_dec_ref(v_f_943_);
v_a_947_ = lean_ctor_get(v_x_945_, 0);
v_isSharedCheck_955_ = !lean_is_exclusive(v_x_945_);
if (v_isSharedCheck_955_ == 0)
{
v___x_949_ = v_x_945_;
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v_x_945_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_955_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_954_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
lean_object* v___x_953_; 
v___x_953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
return v___x_953_;
}
}
}
else
{
lean_object* v_a_956_; lean_object* v___x_957_; uint8_t v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; 
v_a_956_ = lean_ctor_get(v_x_945_, 0);
lean_inc(v_a_956_);
lean_dec_ref_known(v_x_945_, 1);
v___x_957_ = lean_unsigned_to_nat(0u);
v___x_958_ = 0;
v___x_959_ = lean_apply_2(v_f_943_, v_a_956_, lean_box(0));
v___x_960_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_957_, v___x_958_, v___x_959_, v___f_944_);
return v___x_960_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__1___boxed(lean_object* v_f_961_, lean_object* v___f_962_, lean_object* v_x_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__1(v_f_961_, v___f_962_, v_x_963_);
return v_res_965_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_969_; lean_object* v___x_970_; 
v___x_969_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_970_ = lean_string_utf8_byte_size(v___x_969_);
return v___x_970_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_971_; lean_object* v___x_972_; uint8_t v___x_973_; 
v___x_971_ = lean_unsigned_to_nat(0u);
v___x_972_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__3);
v___x_973_ = lean_nat_dec_eq(v___x_972_, v___x_971_);
return v___x_973_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_978_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__8));
v___x_979_ = lean_unsigned_to_nat(46u);
v___x_980_ = lean_unsigned_to_nat(193u);
v___x_981_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__7));
v___x_982_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__6));
v___x_983_ = l_mkPanicMessageWithDecl(v___x_982_, v___x_981_, v___x_980_, v___x_979_, v___x_978_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0(lean_object* v_context_985_, lean_object* v_d_986_){
_start:
{
lean_object* v___y_989_; lean_object* v___y_990_; 
if (lean_obj_tag(v_d_986_) == 9)
{
lean_object* v_value_994_; lean_object* v___x_995_; 
v_value_994_ = lean_ctor_get(v_d_986_, 0);
lean_inc(v_value_994_);
lean_dec_ref_known(v_d_986_, 2);
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v_value_994_);
return v___x_995_;
}
else
{
lean_object* v___x_996_; lean_object* v_received_998_; 
v___x_996_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
if (lean_obj_tag(v_d_986_) == 9)
{
lean_object* v_value_1012_; lean_object* v_description_1013_; uint8_t v___x_1014_; 
v_value_1012_ = lean_ctor_get(v_d_986_, 0);
v_description_1013_ = lean_ctor_get(v_d_986_, 1);
v___x_1014_ = lean_string_dec_eq(v_description_1013_, v___x_996_);
if (v___x_1014_ == 0)
{
goto v___jp_1010_;
}
else
{
uint32_t v___x_1015_; uint64_t v___x_1016_; lean_object* v___x_1017_; uint32_t v___x_1018_; lean_object* v___x_1019_; 
lean_inc_n(v_value_1012_, 2);
lean_dec_ref_known(v_d_986_, 2);
v___x_1015_ = 206;
v___x_1016_ = 0ULL;
v___x_1017_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1017_, 0, v_value_1012_);
lean_ctor_set(v___x_1017_, 1, v___x_996_);
v___x_1018_ = lasm_js_value_handle(v_value_1012_);
lean_dec(v_value_1012_);
v___x_1019_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1015_, v___x_1016_, v___x_1017_, v___x_1018_);
lean_dec_ref_known(v___x_1017_, 2);
if (lean_obj_tag(v___x_1019_) == 0)
{
lean_object* v_a_1020_; uint8_t v___x_1021_; 
v_a_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc(v_a_1020_);
lean_dec_ref_known(v___x_1019_, 1);
v___x_1021_ = lean_string_validate_utf8(v_a_1020_);
if (v___x_1021_ == 0)
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
lean_dec(v_a_1020_);
v___x_1022_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_1023_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1022_);
v_received_998_ = v___x_1023_;
goto v___jp_997_;
}
else
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_string_from_utf8_unchecked(v_a_1020_);
v_received_998_ = v___x_1024_;
goto v___jp_997_;
}
}
else
{
lean_object* v___x_1025_; 
lean_dec_ref_known(v___x_1019_, 1);
v___x_1025_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v_received_998_ = v___x_1025_;
goto v___jp_997_;
}
}
}
else
{
goto v___jp_1010_;
}
v___jp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; uint8_t v___x_1008_; 
v___x_999_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1000_ = lean_string_append(v___x_999_, v_context_985_);
v___x_1001_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1002_ = lean_string_append(v___x_1000_, v___x_1001_);
v___x_1003_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocket___closed__1));
v___x_1004_ = lean_string_append(v___x_1002_, v___x_1003_);
v___x_1005_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1006_ = lean_string_append(v___x_1004_, v___x_1005_);
v___x_1007_ = lean_string_append(v___x_1006_, v_received_998_);
lean_dec_ref(v_received_998_);
v___x_1008_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_1008_ == 0)
{
lean_object* v___x_1009_; 
v___x_1009_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__5));
v___y_989_ = v___x_1007_;
v___y_990_ = v___x_1009_;
goto v___jp_988_;
}
else
{
v___y_989_ = v___x_1007_;
v___y_990_ = v___x_996_;
goto v___jp_988_;
}
}
v___jp_1010_:
{
lean_object* v___x_1011_; 
v___x_1011_ = l_Lasm_JS_Data_describe(v_d_986_);
v_received_998_ = v___x_1011_;
goto v___jp_997_;
}
}
v___jp_988_:
{
lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; 
v___x_991_ = lean_string_append(v___y_989_, v___y_990_);
v___x_992_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_992_, 0, v___x_991_);
v___x_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_993_, 0, v___x_992_);
return v___x_993_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1026_, lean_object* v_d_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0(v_context_1026_, v_d_1027_);
lean_dec_ref(v_context_1026_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(lean_object* v_args_1031_, lean_object* v_i_1032_){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1034_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0));
v___x_1035_ = lean_unsigned_to_nat(1u);
v___x_1036_ = lean_nat_add(v_i_1032_, v___x_1035_);
v___x_1037_ = l_Nat_reprFast(v___x_1036_);
v___x_1038_ = lean_string_append(v___x_1034_, v___x_1037_);
lean_dec_ref(v___x_1037_);
v___x_1039_ = lean_array_get_size(v_args_1031_);
v___x_1040_ = lean_nat_dec_lt(v_i_1032_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_box(0);
v___x_1042_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0(v___x_1038_, v___x_1041_);
lean_dec_ref(v___x_1038_);
return v___x_1042_;
}
else
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_array_fget_borrowed(v_args_1031_, v_i_1032_);
lean_inc(v___x_1043_);
v___x_1044_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0(v___x_1038_, v___x_1043_);
lean_dec_ref(v___x_1038_);
return v___x_1044_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___boxed(lean_object* v_args_1045_, lean_object* v_i_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_1045_, v_i_1046_);
lean_dec(v_i_1046_);
lean_dec_ref(v_args_1045_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2(lean_object* v___f_1049_, lean_object* v_args_1050_){
_start:
{
lean_object* v___x_1052_; uint8_t v___x_1053_; lean_object* v_val_1055_; lean_object* v___x_1058_; 
v___x_1052_ = lean_unsigned_to_nat(0u);
v___x_1053_ = 0;
v___x_1058_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_1050_, v___x_1052_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
v_a_1059_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1058_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1058_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
lean_ctor_set_tag(v___x_1061_, 1);
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
v_val_1055_ = v___x_1064_;
goto v___jp_1054_;
}
}
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
v_a_1067_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1058_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1058_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
lean_ctor_set_tag(v___x_1069_, 0);
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
v_val_1055_ = v___x_1072_;
goto v___jp_1054_;
}
}
}
v___jp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1056_, 0, v_val_1055_);
v___x_1057_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1052_, v___x_1053_, v___x_1056_, v___f_1049_);
return v___x_1057_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2___boxed(lean_object* v___f_1075_, lean_object* v_args_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2(v___f_1075_, v_args_1076_);
lean_dec_ref(v_args_1076_);
return v_res_1078_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__6(void){
_start:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___x_1087_ = lean_nat_abs(v___x_1086_);
return v___x_1087_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7(void){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v___x_1088_ = lean_cstr_to_nat("9007199254740991");
v___x_1089_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__6, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__6_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__6);
v___x_1090_ = lean_nat_dec_le(v___x_1089_, v___x_1088_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___x_1092_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
return v___x_1092_;
}
}
static double _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__9(void){
_start:
{
lean_object* v___x_1093_; double v___x_1094_; 
v___x_1093_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__9);
v___x_1094_ = l_Float_ofInt(v___x_1093_);
return v___x_1094_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10(void){
_start:
{
double v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_float_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__9, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__9_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__9);
v___x_1096_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1096_, 0, v___x_1095_);
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn(lean_object* v_f_1097_){
_start:
{
lean_object* v___f_1099_; lean_object* v___f_1100_; lean_object* v___f_1101_; lean_object* v___x_1102_; 
v___f_1099_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__0));
v___f_1100_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1100_, 0, v_f_1097_);
lean_closure_set(v___f_1100_, 1, v___f_1099_);
v___f_1101_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1101_, 0, v___f_1100_);
v___x_1102_ = l_Lasm_JS_Function_ofFn(v___f_1101_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v_a_1103_; lean_object* v___x_1104_; 
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
lean_inc(v_a_1103_);
lean_dec_ref_known(v___x_1102_, 1);
v___x_1104_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v_a_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v_a_1105_ = lean_ctor_get(v___x_1104_, 0);
lean_inc(v_a_1105_);
lean_dec_ref_known(v___x_1104_, 1);
v___x_1106_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_1107_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1105_, v___x_1106_);
if (lean_obj_tag(v___x_1107_) == 0)
{
lean_object* v_a_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___y_1115_; uint8_t v___x_1142_; 
v_a_1108_ = lean_ctor_get(v___x_1107_, 0);
lean_inc(v_a_1108_);
lean_dec_ref_known(v___x_1107_, 1);
v___x_1109_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_1110_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_1103_);
v___x_1111_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1111_, 0, v_a_1103_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_1113_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_1142_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; 
v___x_1143_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_1115_ = v___x_1143_;
goto v___jp_1114_;
}
else
{
lean_object* v___x_1144_; 
v___x_1144_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_1115_ = v___x_1144_;
goto v___jp_1114_;
}
v___jp_1114_:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; 
lean_inc(v___y_1115_);
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1113_);
lean_ctor_set(v___x_1116_, 1, v___y_1115_);
v___x_1117_ = lean_box(0);
v___x_1118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1116_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = l_Lasm_JS_obj(v___x_1118_);
v___x_1120_ = lean_unsigned_to_nat(3u);
v___x_1121_ = lean_mk_empty_array_with_capacity(v___x_1120_);
v___x_1122_ = lean_array_push(v___x_1121_, v___x_1111_);
v___x_1123_ = lean_array_push(v___x_1122_, v___x_1112_);
v___x_1124_ = lean_array_push(v___x_1123_, v___x_1119_);
v___x_1125_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1108_, v___x_1109_, v___x_1124_);
if (lean_obj_tag(v___x_1125_) == 0)
{
lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1132_; 
v_isSharedCheck_1132_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1132_ == 0)
{
lean_object* v_unused_1133_; 
v_unused_1133_ = lean_ctor_get(v___x_1125_, 0);
lean_dec(v_unused_1133_);
v___x_1127_ = v___x_1125_;
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
else
{
lean_dec(v___x_1125_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1132_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
lean_object* v___x_1130_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set(v___x_1127_, 0, v_a_1103_);
v___x_1130_ = v___x_1127_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v_a_1103_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
else
{
lean_object* v_a_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1141_; 
lean_dec(v_a_1103_);
v_a_1134_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1136_ = v___x_1125_;
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_a_1134_);
lean_dec(v___x_1125_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1141_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1139_; 
if (v_isShared_1137_ == 0)
{
v___x_1139_ = v___x_1136_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_a_1134_);
v___x_1139_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
return v___x_1139_;
}
}
}
}
}
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_dec(v_a_1103_);
v_a_1145_ = lean_ctor_get(v___x_1107_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1107_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1107_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1107_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_dec(v_a_1103_);
v_a_1153_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1104_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1104_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
v_a_1161_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1102_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1102_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___x_1166_; 
if (v_isShared_1164_ == 0)
{
v___x_1166_ = v___x_1163_;
goto v_reusejp_1165_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v_a_1161_);
v___x_1166_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1165_;
}
v_reusejp_1165_:
{
return v___x_1166_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___boxed(lean_object* v_f_1169_, lean_object* v_a_1170_){
_start:
{
lean_object* v_res_1171_; 
v_res_1171_ = l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn(v_f_1169_);
return v_res_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___lam__0(lean_object* v_f_1172_, lean_object* v_args_1173_){
_start:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1175_ = lean_unsigned_to_nat(0u);
v___x_1176_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_1173_, v___x_1175_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v_a_1177_; lean_object* v___x_1178_; 
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1177_);
lean_dec_ref_known(v___x_1176_, 1);
v___x_1178_ = lean_apply_2(v_f_1172_, v_a_1177_, lean_box(0));
return v___x_1178_;
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v_f_1172_);
v_a_1179_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1176_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1176_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___lam__0___boxed(lean_object* v_f_1187_, lean_object* v_args_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___lam__0(v_f_1187_, v_args_1188_);
lean_dec_ref(v_args_1188_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn(lean_object* v_f_1191_){
_start:
{
lean_object* v___f_1193_; lean_object* v___x_1194_; 
v___f_1193_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1193_, 0, v_f_1191_);
v___x_1194_ = l_Lasm_JS_Function_ofSyncFn(v___f_1193_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_object* v_a_1195_; lean_object* v___x_1196_; 
v_a_1195_ = lean_ctor_get(v___x_1194_, 0);
lean_inc(v_a_1195_);
lean_dec_ref_known(v___x_1194_, 1);
v___x_1196_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1198_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_1199_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1197_, v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___y_1207_; uint8_t v___x_1234_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___x_1199_, 1);
v___x_1201_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_1202_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_1195_);
v___x_1203_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1203_, 0, v_a_1195_);
lean_ctor_set(v___x_1203_, 1, v___x_1202_);
v___x_1204_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_1205_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_1234_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_1234_ == 0)
{
lean_object* v___x_1235_; 
v___x_1235_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_1207_ = v___x_1235_;
goto v___jp_1206_;
}
else
{
lean_object* v___x_1236_; 
v___x_1236_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_1207_ = v___x_1236_;
goto v___jp_1206_;
}
v___jp_1206_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
lean_inc(v___y_1207_);
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1205_);
lean_ctor_set(v___x_1208_, 1, v___y_1207_);
v___x_1209_ = lean_box(0);
v___x_1210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1210_, 0, v___x_1208_);
lean_ctor_set(v___x_1210_, 1, v___x_1209_);
v___x_1211_ = l_Lasm_JS_obj(v___x_1210_);
v___x_1212_ = lean_unsigned_to_nat(3u);
v___x_1213_ = lean_mk_empty_array_with_capacity(v___x_1212_);
v___x_1214_ = lean_array_push(v___x_1213_, v___x_1203_);
v___x_1215_ = lean_array_push(v___x_1214_, v___x_1204_);
v___x_1216_ = lean_array_push(v___x_1215_, v___x_1211_);
v___x_1217_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1200_, v___x_1201_, v___x_1216_);
if (lean_obj_tag(v___x_1217_) == 0)
{
lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1224_ == 0)
{
lean_object* v_unused_1225_; 
v_unused_1225_ = lean_ctor_get(v___x_1217_, 0);
lean_dec(v_unused_1225_);
v___x_1219_ = v___x_1217_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_dec(v___x_1217_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
lean_ctor_set(v___x_1219_, 0, v_a_1195_);
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1195_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec(v_a_1195_);
v_a_1226_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1217_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1217_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
}
else
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1244_; 
lean_dec(v_a_1195_);
v_a_1237_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1244_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1244_ == 0)
{
v___x_1239_ = v___x_1199_;
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1199_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1244_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1242_; 
if (v_isShared_1240_ == 0)
{
v___x_1242_ = v___x_1239_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_a_1237_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
}
else
{
lean_object* v_a_1245_; lean_object* v___x_1247_; uint8_t v_isShared_1248_; uint8_t v_isSharedCheck_1252_; 
lean_dec(v_a_1195_);
v_a_1245_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1247_ = v___x_1196_;
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
else
{
lean_inc(v_a_1245_);
lean_dec(v___x_1196_);
v___x_1247_ = lean_box(0);
v_isShared_1248_ = v_isSharedCheck_1252_;
goto v_resetjp_1246_;
}
v_resetjp_1246_:
{
lean_object* v___x_1250_; 
if (v_isShared_1248_ == 0)
{
v___x_1250_ = v___x_1247_;
goto v_reusejp_1249_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v_a_1245_);
v___x_1250_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1249_;
}
v_reusejp_1249_:
{
return v___x_1250_;
}
}
}
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
v_a_1253_ = lean_ctor_get(v___x_1194_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1194_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1194_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1194_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn___boxed(lean_object* v_f_1261_, lean_object* v_a_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofSyncFn(v_f_1261_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(lean_object* v_x_1264_){
_start:
{
if (lean_obj_tag(v_x_1264_) == 0)
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_unsigned_to_nat(0u);
return v___x_1265_;
}
else
{
lean_object* v___x_1266_; 
v___x_1266_ = lean_unsigned_to_nat(1u);
return v___x_1266_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___boxed(lean_object* v_x_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(v_x_1267_);
lean_dec_ref(v_x_1267_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(lean_object* v_t_1269_, lean_object* v_k_1270_){
_start:
{
if (lean_obj_tag(v_t_1269_) == 0)
{
lean_object* v_value_1271_; lean_object* v___x_1272_; 
v_value_1271_ = lean_ctor_get(v_t_1269_, 0);
lean_inc_ref(v_value_1271_);
lean_dec_ref_known(v_t_1269_, 1);
v___x_1272_ = lean_apply_1(v_k_1270_, v_value_1271_);
return v___x_1272_;
}
else
{
lean_object* v_value_1273_; lean_object* v___x_1274_; 
v_value_1273_ = lean_ctor_get(v_t_1269_, 0);
lean_inc(v_value_1273_);
lean_dec_ref_known(v_t_1269_, 1);
v___x_1274_ = lean_apply_1(v_k_1270_, v_value_1273_);
return v___x_1274_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(lean_object* v_motive_1275_, lean_object* v_ctorIdx_1276_, lean_object* v_t_1277_, lean_object* v_h_1278_, lean_object* v_k_1279_){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_1277_, v_k_1279_);
return v___x_1280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___boxed(lean_object* v_motive_1281_, lean_object* v_ctorIdx_1282_, lean_object* v_t_1283_, lean_object* v_h_1284_, lean_object* v_k_1285_){
_start:
{
lean_object* v_res_1286_; 
v_res_1286_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(v_motive_1281_, v_ctorIdx_1282_, v_t_1283_, v_h_1284_, v_k_1285_);
lean_dec(v_ctorIdx_1282_);
return v_res_1286_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim___redArg(lean_object* v_t_1287_, lean_object* v_domString_1288_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_1287_, v_domString_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim(lean_object* v_motive_1290_, lean_object* v_t_1291_, lean_object* v_h_1292_, lean_object* v_domString_1293_){
_start:
{
lean_object* v___x_1294_; 
v___x_1294_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_1291_, v_domString_1293_);
return v___x_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim___redArg(lean_object* v_t_1295_, lean_object* v_unsignedShort_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_1295_, v_unsignedShort_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim(lean_object* v_motive_1298_, lean_object* v_t_1299_, lean_object* v_h_1300_, lean_object* v_unsignedShort_1301_){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_1299_, v_unsignedShort_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0(lean_object* v_x_1303_){
_start:
{
if (lean_obj_tag(v_x_1303_) == 0)
{
lean_object* v_value_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1311_; 
v_value_1304_ = lean_ctor_get(v_x_1303_, 0);
v_isSharedCheck_1311_ = !lean_is_exclusive(v_x_1303_);
if (v_isSharedCheck_1311_ == 0)
{
v___x_1306_ = v_x_1303_;
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_value_1304_);
lean_dec(v_x_1303_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1311_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1309_; 
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 4);
v___x_1309_ = v___x_1306_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_value_1304_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
}
else
{
lean_object* v_value_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1325_; 
v_value_1312_ = lean_ctor_get(v_x_1303_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v_x_1303_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1314_ = v_x_1303_;
v_isShared_1315_ = v_isSharedCheck_1325_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_value_1312_);
lean_dec(v_x_1303_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1325_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1316_ = lean_nat_to_int(v_value_1312_);
v___x_1317_ = lean_nat_abs(v___x_1316_);
v___x_1318_ = lean_cstr_to_nat("9007199254740991");
v___x_1319_ = lean_nat_dec_le(v___x_1317_, v___x_1318_);
lean_dec(v___x_1317_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1321_; 
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 5);
lean_ctor_set(v___x_1314_, 0, v___x_1316_);
v___x_1321_ = v___x_1314_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1316_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
else
{
double v___x_1323_; lean_object* v___x_1324_; 
lean_del_object(v___x_1314_);
v___x_1323_ = l_Float_ofInt(v___x_1316_);
lean_dec(v___x_1316_);
v___x_1324_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1324_, 0, v___x_1323_);
return v___x_1324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object* v_value_1328_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1329_, 0, v_value_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object* v_value_1332_){
_start:
{
lean_object* v___x_1333_; 
v___x_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1333_, 0, v_value_1332_);
return v___x_1333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorIdx(lean_object* v_x_1336_){
_start:
{
if (lean_obj_tag(v_x_1336_) == 0)
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_unsigned_to_nat(0u);
return v___x_1337_;
}
else
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_unsigned_to_nat(1u);
return v___x_1338_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorIdx___boxed(lean_object* v_x_1339_){
_start:
{
lean_object* v_res_1340_; 
v_res_1340_ = l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorIdx(v_x_1339_);
lean_dec_ref(v_x_1339_);
return v_res_1340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___redArg(lean_object* v_t_1341_, lean_object* v_k_1342_){
_start:
{
lean_object* v_value_1343_; lean_object* v___x_1344_; 
v_value_1343_ = lean_ctor_get(v_t_1341_, 0);
lean_inc_ref(v_value_1343_);
lean_dec_ref(v_t_1341_);
v___x_1344_ = lean_apply_1(v_k_1342_, v_value_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim(lean_object* v_motive_1345_, lean_object* v_ctorIdx_1346_, lean_object* v_t_1347_, lean_object* v_h_1348_, lean_object* v_k_1349_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___redArg(v_t_1347_, v_k_1349_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___boxed(lean_object* v_motive_1351_, lean_object* v_ctorIdx_1352_, lean_object* v_t_1353_, lean_object* v_h_1354_, lean_object* v_k_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim(v_motive_1351_, v_ctorIdx_1352_, v_t_1353_, v_h_1354_, v_k_1355_);
lean_dec(v_ctorIdx_1352_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_tlsOptions_elim___redArg(lean_object* v_t_1357_, lean_object* v_tlsOptions_1358_){
_start:
{
lean_object* v___x_1359_; 
v___x_1359_ = l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___redArg(v_t_1357_, v_tlsOptions_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_tlsOptions_elim(lean_object* v_motive_1360_, lean_object* v_t_1361_, lean_object* v_h_1362_, lean_object* v_tlsOptions_1363_){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___redArg(v_t_1361_, v_tlsOptions_1363_);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_sequence_elim___redArg(lean_object* v_t_1365_, lean_object* v_sequence_1366_){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___redArg(v_t_1365_, v_sequence_1366_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_sequence_elim(lean_object* v_motive_1368_, lean_object* v_t_1369_, lean_object* v_h_1370_, lean_object* v_sequence_1371_){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = l_Lasm_JS_Bun_TLSOptionsOrSequenceOfTLSOptions_ctorElim___redArg(v_t_1369_, v_sequence_1371_);
return v___x_1372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0(lean_object* v___f_1389_, lean_object* v___f_1390_, lean_object* v___x_1391_, lean_object* v___f_1392_, lean_object* v___f_1393_, lean_object* v_x_1394_){
_start:
{
lean_object* v_passphrase_1395_; lean_object* v_dhParamsFile_1396_; lean_object* v_serverName_1397_; lean_object* v_servername_1398_; lean_object* v_lowMemoryMode_1399_; lean_object* v_rejectUnauthorized_1400_; lean_object* v_requestCert_1401_; lean_object* v_ca_1402_; lean_object* v_crl_1403_; lean_object* v_cert_1404_; lean_object* v_key_1405_; lean_object* v_secureOptions_1406_; lean_object* v_ALPNProtocols_1407_; lean_object* v_ciphers_1408_; lean_object* v_clientRenegotiationLimit_1409_; lean_object* v_clientRenegotiationWindow_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_passphrase_1395_ = lean_ctor_get(v_x_1394_, 0);
lean_inc(v_passphrase_1395_);
v_dhParamsFile_1396_ = lean_ctor_get(v_x_1394_, 1);
lean_inc(v_dhParamsFile_1396_);
v_serverName_1397_ = lean_ctor_get(v_x_1394_, 2);
lean_inc(v_serverName_1397_);
v_servername_1398_ = lean_ctor_get(v_x_1394_, 3);
lean_inc(v_servername_1398_);
v_lowMemoryMode_1399_ = lean_ctor_get(v_x_1394_, 4);
lean_inc(v_lowMemoryMode_1399_);
v_rejectUnauthorized_1400_ = lean_ctor_get(v_x_1394_, 5);
lean_inc(v_rejectUnauthorized_1400_);
v_requestCert_1401_ = lean_ctor_get(v_x_1394_, 6);
lean_inc(v_requestCert_1401_);
v_ca_1402_ = lean_ctor_get(v_x_1394_, 7);
lean_inc(v_ca_1402_);
v_crl_1403_ = lean_ctor_get(v_x_1394_, 8);
lean_inc(v_crl_1403_);
v_cert_1404_ = lean_ctor_get(v_x_1394_, 9);
lean_inc(v_cert_1404_);
v_key_1405_ = lean_ctor_get(v_x_1394_, 10);
lean_inc(v_key_1405_);
v_secureOptions_1406_ = lean_ctor_get(v_x_1394_, 11);
lean_inc(v_secureOptions_1406_);
v_ALPNProtocols_1407_ = lean_ctor_get(v_x_1394_, 12);
lean_inc(v_ALPNProtocols_1407_);
v_ciphers_1408_ = lean_ctor_get(v_x_1394_, 13);
lean_inc(v_ciphers_1408_);
v_clientRenegotiationLimit_1409_ = lean_ctor_get(v_x_1394_, 14);
lean_inc(v_clientRenegotiationLimit_1409_);
v_clientRenegotiationWindow_1410_ = lean_ctor_get(v_x_1394_, 15);
lean_inc(v_clientRenegotiationWindow_1410_);
lean_dec_ref(v_x_1394_);
v___x_1411_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_1389_, 4);
v___x_1412_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1389_, v_passphrase_1395_);
v___x_1413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1413_, 0, v___x_1411_);
lean_ctor_set(v___x_1413_, 1, v___x_1412_);
v___x_1414_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__1));
v___x_1415_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1389_, v_dhParamsFile_1396_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__2));
v___x_1418_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1389_, v_serverName_1397_);
v___x_1419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1419_, 0, v___x_1417_);
lean_ctor_set(v___x_1419_, 1, v___x_1418_);
v___x_1420_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__3));
v___x_1421_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1389_, v_servername_1398_);
v___x_1422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
v___x_1423_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__4));
lean_inc_ref_n(v___f_1390_, 2);
v___x_1424_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1390_, v_lowMemoryMode_1399_);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1423_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
v___x_1426_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__5));
v___x_1427_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1390_, v_rejectUnauthorized_1400_);
v___x_1428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__6));
v___x_1430_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1390_, v_requestCert_1401_);
v___x_1431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1429_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__7));
lean_inc_ref_n(v___x_1391_, 3);
v___x_1433_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1391_, v_ca_1402_);
v___x_1434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1432_);
lean_ctor_set(v___x_1434_, 1, v___x_1433_);
v___x_1435_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__8));
v___x_1436_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1391_, v_crl_1403_);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1435_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__9));
v___x_1439_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1391_, v_cert_1404_);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1438_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__10));
v___x_1442_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1391_, v_key_1405_);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1441_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__11));
lean_inc_ref_n(v___f_1392_, 2);
v___x_1445_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1392_, v_secureOptions_1406_);
v___x_1446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__12));
v___x_1448_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1393_, v_ALPNProtocols_1407_);
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1447_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__13));
v___x_1451_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1389_, v_ciphers_1408_);
v___x_1452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1450_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__14));
v___x_1454_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1392_, v_clientRenegotiationLimit_1409_);
v___x_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1453_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
v___x_1456_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__15));
v___x_1457_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1392_, v_clientRenegotiationWindow_1410_);
v___x_1458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = lean_unsigned_to_nat(16u);
v___x_1460_ = lean_mk_empty_array_with_capacity(v___x_1459_);
v___x_1461_ = lean_array_push(v___x_1460_, v___x_1413_);
v___x_1462_ = lean_array_push(v___x_1461_, v___x_1416_);
v___x_1463_ = lean_array_push(v___x_1462_, v___x_1419_);
v___x_1464_ = lean_array_push(v___x_1463_, v___x_1422_);
v___x_1465_ = lean_array_push(v___x_1464_, v___x_1425_);
v___x_1466_ = lean_array_push(v___x_1465_, v___x_1428_);
v___x_1467_ = lean_array_push(v___x_1466_, v___x_1431_);
v___x_1468_ = lean_array_push(v___x_1467_, v___x_1434_);
v___x_1469_ = lean_array_push(v___x_1468_, v___x_1437_);
v___x_1470_ = lean_array_push(v___x_1469_, v___x_1440_);
v___x_1471_ = lean_array_push(v___x_1470_, v___x_1443_);
v___x_1472_ = lean_array_push(v___x_1471_, v___x_1446_);
v___x_1473_ = lean_array_push(v___x_1472_, v___x_1449_);
v___x_1474_ = lean_array_push(v___x_1473_, v___x_1452_);
v___x_1475_ = lean_array_push(v___x_1474_, v___x_1455_);
v___x_1476_ = lean_array_push(v___x_1475_, v___x_1458_);
v___x_1477_ = l_Lasm_JS_Web_Support_fields(v___x_1476_);
lean_dec_ref(v___x_1476_);
return v___x_1477_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__4(void){
_start:
{
lean_object* v___f_1482_; lean_object* v___f_1483_; lean_object* v___x_1484_; lean_object* v___f_1485_; lean_object* v___f_1486_; lean_object* v___f_1487_; 
v___f_1482_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__3));
v___f_1483_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__2));
v___x_1484_ = l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrBunFileOrSequenceOfDOMStringOrUint8ArrayOrBunFile;
v___f_1485_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1));
v___f_1486_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__0));
v___f_1487_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0), 6, 5);
lean_closure_set(v___f_1487_, 0, v___f_1486_);
lean_closure_set(v___f_1487_, 1, v___f_1485_);
lean_closure_set(v___f_1487_, 2, v___x_1484_);
lean_closure_set(v___f_1487_, 3, v___f_1483_);
lean_closure_set(v___f_1487_, 4, v___f_1482_);
return v___f_1487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1(lean_object* v_x_1507_){
_start:
{
if (lean_obj_tag(v_x_1507_) == 0)
{
lean_object* v_value_1508_; lean_object* v_passphrase_1509_; lean_object* v_dhParamsFile_1510_; lean_object* v_serverName_1511_; lean_object* v_servername_1512_; lean_object* v_lowMemoryMode_1513_; lean_object* v_rejectUnauthorized_1514_; lean_object* v_requestCert_1515_; lean_object* v_ca_1516_; lean_object* v_crl_1517_; lean_object* v_cert_1518_; lean_object* v_key_1519_; lean_object* v_secureOptions_1520_; lean_object* v_ALPNProtocols_1521_; lean_object* v_ciphers_1522_; lean_object* v_clientRenegotiationLimit_1523_; lean_object* v_clientRenegotiationWindow_1524_; lean_object* v___f_1525_; lean_object* v___f_1526_; lean_object* v___x_1527_; lean_object* v___f_1528_; lean_object* v___f_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v_value_1508_ = lean_ctor_get(v_x_1507_, 0);
lean_inc_ref(v_value_1508_);
lean_dec_ref_known(v_x_1507_, 1);
v_passphrase_1509_ = lean_ctor_get(v_value_1508_, 0);
lean_inc(v_passphrase_1509_);
v_dhParamsFile_1510_ = lean_ctor_get(v_value_1508_, 1);
lean_inc(v_dhParamsFile_1510_);
v_serverName_1511_ = lean_ctor_get(v_value_1508_, 2);
lean_inc(v_serverName_1511_);
v_servername_1512_ = lean_ctor_get(v_value_1508_, 3);
lean_inc(v_servername_1512_);
v_lowMemoryMode_1513_ = lean_ctor_get(v_value_1508_, 4);
lean_inc(v_lowMemoryMode_1513_);
v_rejectUnauthorized_1514_ = lean_ctor_get(v_value_1508_, 5);
lean_inc(v_rejectUnauthorized_1514_);
v_requestCert_1515_ = lean_ctor_get(v_value_1508_, 6);
lean_inc(v_requestCert_1515_);
v_ca_1516_ = lean_ctor_get(v_value_1508_, 7);
lean_inc(v_ca_1516_);
v_crl_1517_ = lean_ctor_get(v_value_1508_, 8);
lean_inc(v_crl_1517_);
v_cert_1518_ = lean_ctor_get(v_value_1508_, 9);
lean_inc(v_cert_1518_);
v_key_1519_ = lean_ctor_get(v_value_1508_, 10);
lean_inc(v_key_1519_);
v_secureOptions_1520_ = lean_ctor_get(v_value_1508_, 11);
lean_inc(v_secureOptions_1520_);
v_ALPNProtocols_1521_ = lean_ctor_get(v_value_1508_, 12);
lean_inc(v_ALPNProtocols_1521_);
v_ciphers_1522_ = lean_ctor_get(v_value_1508_, 13);
lean_inc(v_ciphers_1522_);
v_clientRenegotiationLimit_1523_ = lean_ctor_get(v_value_1508_, 14);
lean_inc(v_clientRenegotiationLimit_1523_);
v_clientRenegotiationWindow_1524_ = lean_ctor_get(v_value_1508_, 15);
lean_inc(v_clientRenegotiationWindow_1524_);
lean_dec_ref(v_value_1508_);
v___f_1525_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__0));
v___f_1526_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1));
v___x_1527_ = l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrBunFileOrSequenceOfDOMStringOrUint8ArrayOrBunFile;
v___f_1528_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__2));
v___f_1529_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__3));
v___x_1530_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__0));
v___x_1531_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1525_, v_passphrase_1509_);
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1530_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__1));
v___x_1534_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1525_, v_dhParamsFile_1510_);
v___x_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1533_);
lean_ctor_set(v___x_1535_, 1, v___x_1534_);
v___x_1536_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__2));
v___x_1537_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1525_, v_serverName_1511_);
v___x_1538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1538_, 0, v___x_1536_);
lean_ctor_set(v___x_1538_, 1, v___x_1537_);
v___x_1539_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__3));
v___x_1540_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1525_, v_servername_1512_);
v___x_1541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1541_, 0, v___x_1539_);
lean_ctor_set(v___x_1541_, 1, v___x_1540_);
v___x_1542_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__4));
v___x_1543_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1526_, v_lowMemoryMode_1513_);
v___x_1544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1544_, 0, v___x_1542_);
lean_ctor_set(v___x_1544_, 1, v___x_1543_);
v___x_1545_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__5));
v___x_1546_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1526_, v_rejectUnauthorized_1514_);
v___x_1547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
v___x_1548_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__6));
v___x_1549_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1526_, v_requestCert_1515_);
v___x_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1548_);
lean_ctor_set(v___x_1550_, 1, v___x_1549_);
v___x_1551_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__7));
v___x_1552_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1527_, v_ca_1516_);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__8));
v___x_1555_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1527_, v_crl_1517_);
v___x_1556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1554_);
lean_ctor_set(v___x_1556_, 1, v___x_1555_);
v___x_1557_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__9));
v___x_1558_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1527_, v_cert_1518_);
v___x_1559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1557_);
lean_ctor_set(v___x_1559_, 1, v___x_1558_);
v___x_1560_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__10));
v___x_1561_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_1527_, v_key_1519_);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1560_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
v___x_1563_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__11));
v___x_1564_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1528_, v_secureOptions_1520_);
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
v___x_1566_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__12));
v___x_1567_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1529_, v_ALPNProtocols_1521_);
v___x_1568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1566_);
lean_ctor_set(v___x_1568_, 1, v___x_1567_);
v___x_1569_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__13));
v___x_1570_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1525_, v_ciphers_1522_);
v___x_1571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1569_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__14));
v___x_1573_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1528_, v_clientRenegotiationLimit_1523_);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v___x_1572_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
v___x_1575_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__15));
v___x_1576_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1528_, v_clientRenegotiationWindow_1524_);
v___x_1577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1575_);
lean_ctor_set(v___x_1577_, 1, v___x_1576_);
v___x_1578_ = lean_unsigned_to_nat(16u);
v___x_1579_ = lean_mk_empty_array_with_capacity(v___x_1578_);
v___x_1580_ = lean_array_push(v___x_1579_, v___x_1532_);
v___x_1581_ = lean_array_push(v___x_1580_, v___x_1535_);
v___x_1582_ = lean_array_push(v___x_1581_, v___x_1538_);
v___x_1583_ = lean_array_push(v___x_1582_, v___x_1541_);
v___x_1584_ = lean_array_push(v___x_1583_, v___x_1544_);
v___x_1585_ = lean_array_push(v___x_1584_, v___x_1547_);
v___x_1586_ = lean_array_push(v___x_1585_, v___x_1550_);
v___x_1587_ = lean_array_push(v___x_1586_, v___x_1553_);
v___x_1588_ = lean_array_push(v___x_1587_, v___x_1556_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1559_);
v___x_1590_ = lean_array_push(v___x_1589_, v___x_1562_);
v___x_1591_ = lean_array_push(v___x_1590_, v___x_1565_);
v___x_1592_ = lean_array_push(v___x_1591_, v___x_1568_);
v___x_1593_ = lean_array_push(v___x_1592_, v___x_1571_);
v___x_1594_ = lean_array_push(v___x_1593_, v___x_1574_);
v___x_1595_ = lean_array_push(v___x_1594_, v___x_1577_);
v___x_1596_ = l_Lasm_JS_Web_Support_fields(v___x_1595_);
lean_dec_ref(v___x_1595_);
return v___x_1596_;
}
else
{
lean_object* v_value_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1609_; 
v_value_1597_ = lean_ctor_get(v_x_1507_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v_x_1507_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1599_ = v_x_1507_;
v_isShared_1600_ = v_isSharedCheck_1609_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_value_1597_);
lean_dec(v_x_1507_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1609_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___f_1601_; lean_object* v___x_1602_; size_t v_sz_1603_; size_t v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1607_; 
v___f_1601_ = lean_obj_once(&l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__4, &l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__4_once, _init_l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__4);
v___x_1602_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__14));
v_sz_1603_ = lean_array_size(v_value_1597_);
v___x_1604_ = ((size_t)0ULL);
v___x_1605_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_1602_, v___f_1601_, v_sz_1603_, v___x_1604_, v_value_1597_);
if (v_isShared_1600_ == 0)
{
lean_ctor_set_tag(v___x_1599_, 7);
lean_ctor_set(v___x_1599_, 0, v___x_1605_);
v___x_1607_ = v___x_1599_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1605_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeTLSOptionsTLSOptionsOrSequenceOfTLSOptions___lam__0(lean_object* v_value_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1613_, 0, v_value_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeArrayTLSOptionsTLSOptionsOrSequenceOfTLSOptions___lam__0(lean_object* v_value_1616_){
_start:
{
lean_object* v___x_1617_; 
v___x_1617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1617_, 0, v_value_1616_);
return v___x_1617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0(lean_object* v___f_1623_, lean_object* v_d_1624_){
_start:
{
lean_object* v_hmr_1625_; lean_object* v_console_1626_; lean_object* v_chromeDevToolsAutomaticWorkspaceFolders_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v_hmr_1625_ = lean_ctor_get(v_d_1624_, 0);
lean_inc(v_hmr_1625_);
v_console_1626_ = lean_ctor_get(v_d_1624_, 1);
lean_inc(v_console_1626_);
v_chromeDevToolsAutomaticWorkspaceFolders_1627_ = lean_ctor_get(v_d_1624_, 2);
lean_inc(v_chromeDevToolsAutomaticWorkspaceFolders_1627_);
lean_dec_ref(v_d_1624_);
v___x_1628_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__0));
lean_inc_ref_n(v___f_1623_, 2);
v___x_1629_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1623_, v_hmr_1625_);
v___x_1630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__1));
v___x_1632_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1623_, v_console_1626_);
v___x_1633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1633_, 0, v___x_1631_);
lean_ctor_set(v___x_1633_, 1, v___x_1632_);
v___x_1634_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__2));
v___x_1635_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1623_, v_chromeDevToolsAutomaticWorkspaceFolders_1627_);
v___x_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1634_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = lean_unsigned_to_nat(3u);
v___x_1638_ = lean_mk_empty_array_with_capacity(v___x_1637_);
v___x_1639_ = lean_array_push(v___x_1638_, v___x_1630_);
v___x_1640_ = lean_array_push(v___x_1639_, v___x_1633_);
v___x_1641_ = lean_array_push(v___x_1640_, v___x_1636_);
v___x_1642_ = l_Lasm_JS_Web_Support_fields(v___x_1641_);
lean_dec_ref(v___x_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorIdx(lean_object* v_x_1646_){
_start:
{
if (lean_obj_tag(v_x_1646_) == 0)
{
lean_object* v___x_1647_; 
v___x_1647_ = lean_unsigned_to_nat(0u);
return v___x_1647_;
}
else
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_unsigned_to_nat(1u);
return v___x_1648_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorIdx___boxed(lean_object* v_x_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorIdx(v_x_1649_);
lean_dec_ref(v_x_1649_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___redArg(lean_object* v_t_1651_, lean_object* v_k_1652_){
_start:
{
if (lean_obj_tag(v_t_1651_) == 0)
{
uint8_t v_value_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v_value_1653_ = lean_ctor_get_uint8(v_t_1651_, 0);
lean_dec_ref_known(v_t_1651_, 0);
v___x_1654_ = lean_box(v_value_1653_);
v___x_1655_ = lean_apply_1(v_k_1652_, v___x_1654_);
return v___x_1655_;
}
else
{
lean_object* v_value_1656_; lean_object* v___x_1657_; 
v_value_1656_ = lean_ctor_get(v_t_1651_, 0);
lean_inc_ref(v_value_1656_);
lean_dec_ref_known(v_t_1651_, 1);
v___x_1657_ = lean_apply_1(v_k_1652_, v_value_1656_);
return v___x_1657_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim(lean_object* v_motive_1658_, lean_object* v_ctorIdx_1659_, lean_object* v_t_1660_, lean_object* v_h_1661_, lean_object* v_k_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___redArg(v_t_1660_, v_k_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___boxed(lean_object* v_motive_1664_, lean_object* v_ctorIdx_1665_, lean_object* v_t_1666_, lean_object* v_h_1667_, lean_object* v_k_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim(v_motive_1664_, v_ctorIdx_1665_, v_t_1666_, v_h_1667_, v_k_1668_);
lean_dec(v_ctorIdx_1665_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_boolean_elim___redArg(lean_object* v_t_1670_, lean_object* v_boolean_1671_){
_start:
{
lean_object* v___x_1672_; 
v___x_1672_ = l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___redArg(v_t_1670_, v_boolean_1671_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_boolean_elim(lean_object* v_motive_1673_, lean_object* v_t_1674_, lean_object* v_h_1675_, lean_object* v_boolean_1676_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___redArg(v_t_1674_, v_boolean_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_serveDevelopment_elim___redArg(lean_object* v_t_1678_, lean_object* v_serveDevelopment_1679_){
_start:
{
lean_object* v___x_1680_; 
v___x_1680_ = l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___redArg(v_t_1678_, v_serveDevelopment_1679_);
return v___x_1680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeDevelopmentUnion_serveDevelopment_elim(lean_object* v_motive_1681_, lean_object* v_t_1682_, lean_object* v_h_1683_, lean_object* v_serveDevelopment_1684_){
_start:
{
lean_object* v___x_1685_; 
v___x_1685_ = l_Lasm_JS_Bun_ServeDevelopmentUnion_ctorElim___redArg(v_t_1682_, v_serveDevelopment_1684_);
return v___x_1685_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeDevelopmentUnion___lam__0(lean_object* v_x_1686_){
_start:
{
if (lean_obj_tag(v_x_1686_) == 0)
{
uint8_t v_value_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1694_; 
v_value_1687_ = lean_ctor_get_uint8(v_x_1686_, 0);
v_isSharedCheck_1694_ = !lean_is_exclusive(v_x_1686_);
if (v_isSharedCheck_1694_ == 0)
{
v___x_1689_ = v_x_1686_;
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
else
{
lean_dec(v_x_1686_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1694_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1692_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set_tag(v___x_1689_, 2);
v___x_1692_ = v___x_1689_;
goto v_reusejp_1691_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_1693_, 0, v_value_1687_);
v___x_1692_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1691_;
}
v_reusejp_1691_:
{
return v___x_1692_;
}
}
}
else
{
lean_object* v_value_1695_; lean_object* v_hmr_1696_; lean_object* v_console_1697_; lean_object* v_chromeDevToolsAutomaticWorkspaceFolders_1698_; lean_object* v___f_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v_value_1695_ = lean_ctor_get(v_x_1686_, 0);
lean_inc_ref(v_value_1695_);
lean_dec_ref_known(v_x_1686_, 1);
v_hmr_1696_ = lean_ctor_get(v_value_1695_, 0);
lean_inc(v_hmr_1696_);
v_console_1697_ = lean_ctor_get(v_value_1695_, 1);
lean_inc(v_console_1697_);
v_chromeDevToolsAutomaticWorkspaceFolders_1698_ = lean_ctor_get(v_value_1695_, 2);
lean_inc(v_chromeDevToolsAutomaticWorkspaceFolders_1698_);
lean_dec_ref(v_value_1695_);
v___f_1699_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__1___closed__1));
v___x_1700_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__0));
v___x_1701_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1699_, v_hmr_1696_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1700_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__1));
v___x_1704_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1699_, v_console_1697_);
v___x_1705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1705_, 0, v___x_1703_);
lean_ctor_set(v___x_1705_, 1, v___x_1704_);
v___x_1706_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__2));
v___x_1707_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1699_, v_chromeDevToolsAutomaticWorkspaceFolders_1698_);
v___x_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1706_);
lean_ctor_set(v___x_1708_, 1, v___x_1707_);
v___x_1709_ = lean_unsigned_to_nat(3u);
v___x_1710_ = lean_mk_empty_array_with_capacity(v___x_1709_);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1702_);
v___x_1712_ = lean_array_push(v___x_1711_, v___x_1705_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1708_);
v___x_1714_ = l_Lasm_JS_Web_Support_fields(v___x_1713_);
lean_dec_ref(v___x_1713_);
return v___x_1714_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___lam__0(uint8_t v_value_1717_){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_1718_, 0, v_value_1717_);
return v___x_1718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___lam__0___boxed(lean_object* v_value_1719_){
_start:
{
uint8_t v_value_boxed_1720_; lean_object* v_res_1721_; 
v_value_boxed_1720_ = lean_unbox(v_value_1719_);
v_res_1721_ = l_Lasm_JS_Bun_instCoeBoolServeDevelopmentUnion___lam__0(v_value_boxed_1720_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeServeDevelopmentServeDevelopmentUnion___lam__0(lean_object* v_value_1724_){
_start:
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1725_, 0, v_value_1724_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(lean_object* v_x_1735_){
_start:
{
if (lean_obj_tag(v_x_1735_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1745_; 
v_a_1737_ = lean_ctor_get(v_x_1735_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v_x_1735_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1739_ = v_x_1735_;
v_isShared_1740_ = v_isSharedCheck_1745_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_a_1737_);
lean_dec(v_x_1735_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1745_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
lean_object* v___x_1742_; 
if (v_isShared_1740_ == 0)
{
v___x_1742_ = v___x_1739_;
goto v_reusejp_1741_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1737_);
v___x_1742_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1741_;
}
v_reusejp_1741_:
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1743_, 0, v___x_1742_);
return v___x_1743_;
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1756_; 
v_a_1746_ = lean_ctor_get(v_x_1735_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v_x_1735_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1748_ = v_x_1735_;
v_isShared_1749_ = v_isSharedCheck_1756_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v_x_1735_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1756_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1753_; 
v___x_1750_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_1751_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1751_, 0, v_a_1746_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set(v___x_1748_, 0, v___x_1751_);
v___x_1753_ = v___x_1748_;
goto v_reusejp_1752_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1751_);
v___x_1753_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1752_;
}
v_reusejp_1752_:
{
lean_object* v___x_1754_; 
v___x_1754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed(lean_object* v_x_1757_, lean_object* v___y_1758_){
_start:
{
lean_object* v_res_1759_; 
v_res_1759_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(v_x_1757_);
return v_res_1759_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(lean_object* v_f_1760_, lean_object* v___f_1761_, lean_object* v_x_1762_){
_start:
{
if (lean_obj_tag(v_x_1762_) == 0)
{
lean_object* v_a_1764_; lean_object* v___x_1766_; uint8_t v_isShared_1767_; uint8_t v_isSharedCheck_1772_; 
lean_dec_ref(v___f_1761_);
lean_dec_ref(v_f_1760_);
v_a_1764_ = lean_ctor_get(v_x_1762_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v_x_1762_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1766_ = v_x_1762_;
v_isShared_1767_ = v_isSharedCheck_1772_;
goto v_resetjp_1765_;
}
else
{
lean_inc(v_a_1764_);
lean_dec(v_x_1762_);
v___x_1766_ = lean_box(0);
v_isShared_1767_ = v_isSharedCheck_1772_;
goto v_resetjp_1765_;
}
v_resetjp_1765_:
{
lean_object* v___x_1769_; 
if (v_isShared_1767_ == 0)
{
v___x_1769_ = v___x_1766_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1764_);
v___x_1769_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
lean_object* v___x_1770_; 
v___x_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1770_, 0, v___x_1769_);
return v___x_1770_;
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1774_; uint8_t v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v_a_1773_ = lean_ctor_get(v_x_1762_, 0);
lean_inc(v_a_1773_);
lean_dec_ref_known(v_x_1762_, 1);
v___x_1774_ = lean_unsigned_to_nat(0u);
v___x_1775_ = 0;
v___x_1776_ = lean_apply_2(v_f_1760_, v_a_1773_, lean_box(0));
v___x_1777_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1774_, v___x_1775_, v___x_1776_, v___f_1761_);
return v___x_1777_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed(lean_object* v_f_1778_, lean_object* v___f_1779_, lean_object* v_x_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(v_f_1778_, v___f_1779_, v_x_1780_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(lean_object* v_context_1789_, lean_object* v_d_1790_){
_start:
{
lean_object* v___y_1793_; lean_object* v___y_1794_; lean_object* v___y_1799_; lean_object* v_received_1800_; lean_object* v___y_1819_; lean_object* v_a_1822_; lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__3));
lean_inc(v_d_1790_);
v___x_1847_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_1790_, v___x_1846_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref_known(v___x_1847_, 1);
v_a_1822_ = v_a_1848_;
goto v___jp_1821_;
}
else
{
lean_object* v_a_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v_a_1849_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1847_, 1);
v___x_1850_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__4));
lean_inc(v_d_1790_);
v___x_1851_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SpawnBaseOptionsIgnorePipeInheritOnExit_ofFn_spec__0_spec__0_spec__1(v_d_1790_, v___x_1850_);
if (lean_obj_tag(v___x_1851_) == 0)
{
lean_object* v_a_1852_; 
lean_dec(v_a_1849_);
v_a_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1852_);
lean_dec_ref_known(v___x_1851_, 1);
v_a_1822_ = v_a_1852_;
goto v___jp_1821_;
}
else
{
lean_object* v_a_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v_a_1853_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_a_1853_);
lean_dec_ref_known(v___x_1851_, 1);
v___x_1854_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__5));
lean_inc(v_d_1790_);
v___x_1855_ = l_Lasm_JS_readField___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_cloneAs___at___00Lasm_JS_Web_URLPattern_exec_spec__0_spec__0_spec__1_spec__2_spec__3(v_d_1790_, v___x_1854_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; 
lean_dec(v_a_1853_);
lean_dec(v_a_1849_);
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v___x_1855_, 1);
v_a_1822_ = v_a_1856_;
goto v___jp_1821_;
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1865_; 
lean_dec(v_d_1790_);
v_a_1857_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1865_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1859_ = v___x_1855_;
v_isShared_1860_ = v_isSharedCheck_1865_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1855_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1865_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1861_; lean_object* v___x_1863_; 
v___x_1861_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1861_, 0, v_a_1849_);
lean_ctor_set(v___x_1861_, 1, v_a_1853_);
lean_ctor_set(v___x_1861_, 2, v_a_1857_);
if (v_isShared_1860_ == 0)
{
lean_ctor_set_tag(v___x_1859_, 0);
lean_ctor_set(v___x_1859_, 0, v___x_1861_);
v___x_1863_ = v___x_1859_;
goto v_reusejp_1862_;
}
else
{
lean_object* v_reuseFailAlloc_1864_; 
v_reuseFailAlloc_1864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1864_, 0, v___x_1861_);
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
v___jp_1792_:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1795_ = lean_string_append(v___y_1793_, v___y_1794_);
lean_dec_ref(v___y_1794_);
v___x_1796_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
v___x_1797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1796_);
return v___x_1797_;
}
v___jp_1798_:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1801_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_1802_ = lean_string_append(v___x_1801_, v_context_1789_);
v___x_1803_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_1804_ = lean_string_append(v___x_1802_, v___x_1803_);
v___x_1805_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__0));
v___x_1806_ = lean_string_append(v___x_1804_, v___x_1805_);
v___x_1807_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_1808_ = lean_string_append(v___x_1806_, v___x_1807_);
v___x_1809_ = lean_string_append(v___x_1808_, v_received_1800_);
lean_dec_ref(v_received_1800_);
v___x_1810_ = lean_string_utf8_byte_size(v___y_1799_);
v___x_1811_ = lean_unsigned_to_nat(0u);
v___x_1812_ = lean_nat_dec_eq(v___x_1810_, v___x_1811_);
if (v___x_1812_ == 0)
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1813_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__1));
v___x_1814_ = lean_string_append(v___x_1813_, v___y_1799_);
lean_dec_ref(v___y_1799_);
v___x_1815_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__2));
v___x_1816_ = lean_string_append(v___x_1814_, v___x_1815_);
v___y_1793_ = v___x_1809_;
v___y_1794_ = v___x_1816_;
goto v___jp_1792_;
}
else
{
lean_object* v___x_1817_; 
lean_dec_ref(v___y_1799_);
v___x_1817_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___y_1793_ = v___x_1809_;
v___y_1794_ = v___x_1817_;
goto v___jp_1792_;
}
}
v___jp_1818_:
{
lean_object* v___x_1820_; 
v___x_1820_ = l_Lasm_JS_Data_describe(v_d_1790_);
v___y_1799_ = v___y_1819_;
v_received_1800_ = v___x_1820_;
goto v___jp_1798_;
}
v___jp_1821_:
{
if (lean_obj_tag(v_d_1790_) == 9)
{
lean_object* v_value_1823_; lean_object* v_description_1824_; lean_object* v___x_1825_; uint8_t v___x_1826_; 
v_value_1823_ = lean_ctor_get(v_d_1790_, 0);
v_description_1824_ = lean_ctor_get(v_d_1790_, 1);
v___x_1825_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_1826_ = lean_string_dec_eq(v_description_1824_, v___x_1825_);
if (v___x_1826_ == 0)
{
v___y_1819_ = v_a_1822_;
goto v___jp_1818_;
}
else
{
lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1843_; 
lean_inc(v_value_1823_);
v_isSharedCheck_1843_ = !lean_is_exclusive(v_d_1790_);
if (v_isSharedCheck_1843_ == 0)
{
lean_object* v_unused_1844_; lean_object* v_unused_1845_; 
v_unused_1844_ = lean_ctor_get(v_d_1790_, 1);
lean_dec(v_unused_1844_);
v_unused_1845_ = lean_ctor_get(v_d_1790_, 0);
lean_dec(v_unused_1845_);
v___x_1828_ = v_d_1790_;
v_isShared_1829_ = v_isSharedCheck_1843_;
goto v_resetjp_1827_;
}
else
{
lean_dec(v_d_1790_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1843_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
uint32_t v___x_1830_; uint64_t v___x_1831_; lean_object* v___x_1833_; 
v___x_1830_ = 206;
v___x_1831_ = 0ULL;
lean_inc(v_value_1823_);
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 1, v___x_1825_);
v___x_1833_ = v___x_1828_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v_value_1823_);
lean_ctor_set(v_reuseFailAlloc_1842_, 1, v___x_1825_);
v___x_1833_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
uint32_t v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lasm_js_value_handle(v_value_1823_);
lean_dec(v_value_1823_);
v___x_1835_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1830_, v___x_1831_, v___x_1833_, v___x_1834_);
lean_dec_ref(v___x_1833_);
if (lean_obj_tag(v___x_1835_) == 0)
{
lean_object* v_a_1836_; uint8_t v___x_1837_; 
v_a_1836_ = lean_ctor_get(v___x_1835_, 0);
lean_inc(v_a_1836_);
lean_dec_ref_known(v___x_1835_, 1);
v___x_1837_ = lean_string_validate_utf8(v_a_1836_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1838_; lean_object* v___x_1839_; 
lean_dec(v_a_1836_);
v___x_1838_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_1839_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1838_);
v___y_1799_ = v_a_1822_;
v_received_1800_ = v___x_1839_;
goto v___jp_1798_;
}
else
{
lean_object* v___x_1840_; 
v___x_1840_ = lean_string_from_utf8_unchecked(v_a_1836_);
v___y_1799_ = v_a_1822_;
v_received_1800_ = v___x_1840_;
goto v___jp_1798_;
}
}
else
{
lean_object* v___x_1841_; 
lean_dec_ref_known(v___x_1835_, 1);
v___x_1841_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v___y_1799_ = v_a_1822_;
v_received_1800_ = v___x_1841_;
goto v___jp_1798_;
}
}
}
}
}
else
{
v___y_1819_ = v_a_1822_;
goto v___jp_1818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1866_, lean_object* v_d_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(v_context_1866_, v_d_1867_);
lean_dec_ref(v_context_1866_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(lean_object* v_args_1870_, lean_object* v_i_1871_){
_start:
{
lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; uint8_t v___x_1879_; 
v___x_1873_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0));
v___x_1874_ = lean_unsigned_to_nat(1u);
v___x_1875_ = lean_nat_add(v_i_1871_, v___x_1874_);
v___x_1876_ = l_Nat_reprFast(v___x_1875_);
v___x_1877_ = lean_string_append(v___x_1873_, v___x_1876_);
lean_dec_ref(v___x_1876_);
v___x_1878_ = lean_array_get_size(v_args_1870_);
v___x_1879_ = lean_nat_dec_lt(v_i_1871_, v___x_1878_);
if (v___x_1879_ == 0)
{
lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1880_ = lean_box(0);
v___x_1881_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(v___x_1877_, v___x_1880_);
lean_dec_ref(v___x_1877_);
return v___x_1881_;
}
else
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = lean_array_fget_borrowed(v_args_1870_, v_i_1871_);
lean_inc(v___x_1882_);
v___x_1883_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(v___x_1877_, v___x_1882_);
lean_dec_ref(v___x_1877_);
return v___x_1883_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0___boxed(lean_object* v_args_1884_, lean_object* v_i_1885_, lean_object* v_a_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(v_args_1884_, v_i_1885_);
lean_dec(v_i_1885_);
lean_dec_ref(v_args_1884_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(lean_object* v___f_1888_, lean_object* v_args_1889_){
_start:
{
lean_object* v___x_1891_; uint8_t v___x_1892_; lean_object* v_val_1894_; lean_object* v___x_1897_; 
v___x_1891_ = lean_unsigned_to_nat(0u);
v___x_1892_ = 0;
v___x_1897_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(v_args_1889_, v___x_1891_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
lean_ctor_set_tag(v___x_1900_, 1);
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
v_val_1894_ = v___x_1903_;
goto v___jp_1893_;
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
v_a_1906_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1897_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1897_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
lean_ctor_set_tag(v___x_1908_, 0);
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
v_val_1894_ = v___x_1911_;
goto v___jp_1893_;
}
}
}
v___jp_1893_:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
v___x_1895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1895_, 0, v_val_1894_);
v___x_1896_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1891_, v___x_1892_, v___x_1895_, v___f_1888_);
return v___x_1896_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed(lean_object* v___f_1914_, lean_object* v_args_1915_, lean_object* v___y_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(v___f_1914_, v_args_1915_);
lean_dec_ref(v_args_1915_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn(lean_object* v_f_1919_){
_start:
{
lean_object* v___f_1921_; lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___x_1924_; 
v___f_1921_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_1922_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1922_, 0, v_f_1919_);
lean_closure_set(v___f_1922_, 1, v___f_1921_);
v___f_1923_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1923_, 0, v___f_1922_);
v___x_1924_ = l_Lasm_JS_Function_ofFn(v___f_1923_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1926_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc(v_a_1925_);
lean_dec_ref_known(v___x_1924_, 1);
v___x_1926_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v___x_1926_, 1);
v___x_1928_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_1929_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_1927_, v___x_1928_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___y_1937_; uint8_t v___x_1964_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref_known(v___x_1929_, 1);
v___x_1931_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_1932_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_1925_);
v___x_1933_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1933_, 0, v_a_1925_);
lean_ctor_set(v___x_1933_, 1, v___x_1932_);
v___x_1934_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_1935_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_1964_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_1964_ == 0)
{
lean_object* v___x_1965_; 
v___x_1965_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_1937_ = v___x_1965_;
goto v___jp_1936_;
}
else
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_1937_ = v___x_1966_;
goto v___jp_1936_;
}
v___jp_1936_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; 
lean_inc(v___y_1937_);
v___x_1938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1935_);
lean_ctor_set(v___x_1938_, 1, v___y_1937_);
v___x_1939_ = lean_box(0);
v___x_1940_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1938_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
v___x_1941_ = l_Lasm_JS_obj(v___x_1940_);
v___x_1942_ = lean_unsigned_to_nat(3u);
v___x_1943_ = lean_mk_empty_array_with_capacity(v___x_1942_);
v___x_1944_ = lean_array_push(v___x_1943_, v___x_1933_);
v___x_1945_ = lean_array_push(v___x_1944_, v___x_1934_);
v___x_1946_ = lean_array_push(v___x_1945_, v___x_1941_);
v___x_1947_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_1930_, v___x_1931_, v___x_1946_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v___x_1949_; uint8_t v_isShared_1950_; uint8_t v_isSharedCheck_1954_; 
v_isSharedCheck_1954_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1954_ == 0)
{
lean_object* v_unused_1955_; 
v_unused_1955_ = lean_ctor_get(v___x_1947_, 0);
lean_dec(v_unused_1955_);
v___x_1949_ = v___x_1947_;
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
else
{
lean_dec(v___x_1947_);
v___x_1949_ = lean_box(0);
v_isShared_1950_ = v_isSharedCheck_1954_;
goto v_resetjp_1948_;
}
v_resetjp_1948_:
{
lean_object* v___x_1952_; 
if (v_isShared_1950_ == 0)
{
lean_ctor_set(v___x_1949_, 0, v_a_1925_);
v___x_1952_ = v___x_1949_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1953_; 
v_reuseFailAlloc_1953_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1953_, 0, v_a_1925_);
v___x_1952_ = v_reuseFailAlloc_1953_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
return v___x_1952_;
}
}
}
else
{
lean_object* v_a_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1963_; 
lean_dec(v_a_1925_);
v_a_1956_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1963_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1963_ == 0)
{
v___x_1958_ = v___x_1947_;
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_a_1956_);
lean_dec(v___x_1947_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1963_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1961_; 
if (v_isShared_1959_ == 0)
{
v___x_1961_ = v___x_1958_;
goto v_reusejp_1960_;
}
else
{
lean_object* v_reuseFailAlloc_1962_; 
v_reuseFailAlloc_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1962_, 0, v_a_1956_);
v___x_1961_ = v_reuseFailAlloc_1962_;
goto v_reusejp_1960_;
}
v_reusejp_1960_:
{
return v___x_1961_;
}
}
}
}
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec(v_a_1925_);
v_a_1967_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1929_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1929_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_dec(v_a_1925_);
v_a_1975_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1926_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1926_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1990_; 
v_a_1983_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1990_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1990_ == 0)
{
v___x_1985_ = v___x_1924_;
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v___x_1924_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1990_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
lean_object* v___x_1988_; 
if (v_isShared_1986_ == 0)
{
v___x_1988_ = v___x_1985_;
goto v_reusejp_1987_;
}
else
{
lean_object* v_reuseFailAlloc_1989_; 
v_reuseFailAlloc_1989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1989_, 0, v_a_1983_);
v___x_1988_ = v_reuseFailAlloc_1989_;
goto v_reusejp_1987_;
}
v_reusejp_1987_:
{
return v___x_1988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object* v_f_1991_, lean_object* v_a_1992_){
_start:
{
lean_object* v_res_1993_; 
v_res_1993_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn(v_f_1991_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object* v_f_1994_, lean_object* v_args_1995_){
_start:
{
lean_object* v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = lean_unsigned_to_nat(0u);
v___x_1998_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(v_args_1995_, v___x_1997_);
if (lean_obj_tag(v___x_1998_) == 0)
{
lean_object* v_a_1999_; lean_object* v___x_2000_; 
v_a_1999_ = lean_ctor_get(v___x_1998_, 0);
lean_inc(v_a_1999_);
lean_dec_ref_known(v___x_1998_, 1);
v___x_2000_ = lean_apply_2(v_f_1994_, v_a_1999_, lean_box(0));
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2010_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2003_ = v___x_2000_;
v_isShared_2004_ = v_isSharedCheck_2010_;
goto v_resetjp_2002_;
}
else
{
lean_inc(v_a_2001_);
lean_dec(v___x_2000_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2010_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_2005_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_2006_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2006_, 0, v_a_2001_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
if (v_isShared_2004_ == 0)
{
lean_ctor_set(v___x_2003_, 0, v___x_2006_);
v___x_2008_ = v___x_2003_;
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
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
v_a_2011_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_2000_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2000_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
else
{
lean_object* v_a_2019_; lean_object* v___x_2021_; uint8_t v_isShared_2022_; uint8_t v_isSharedCheck_2026_; 
lean_dec_ref(v_f_1994_);
v_a_2019_ = lean_ctor_get(v___x_1998_, 0);
v_isSharedCheck_2026_ = !lean_is_exclusive(v___x_1998_);
if (v_isSharedCheck_2026_ == 0)
{
v___x_2021_ = v___x_1998_;
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
else
{
lean_inc(v_a_2019_);
lean_dec(v___x_1998_);
v___x_2021_ = lean_box(0);
v_isShared_2022_ = v_isSharedCheck_2026_;
goto v_resetjp_2020_;
}
v_resetjp_2020_:
{
lean_object* v___x_2024_; 
if (v_isShared_2022_ == 0)
{
v___x_2024_ = v___x_2021_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v_a_2019_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object* v_f_2027_, lean_object* v_args_2028_, lean_object* v___y_2029_){
_start:
{
lean_object* v_res_2030_; 
v_res_2030_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(v_f_2027_, v_args_2028_);
lean_dec_ref(v_args_2028_);
return v_res_2030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object* v_f_2031_){
_start:
{
lean_object* v___f_2033_; lean_object* v___x_2034_; 
v___f_2033_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2033_, 0, v_f_2031_);
v___x_2034_ = l_Lasm_JS_Function_ofSyncFn(v___f_2033_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_object* v_a_2035_; lean_object* v___x_2036_; 
v_a_2035_ = lean_ctor_get(v___x_2034_, 0);
lean_inc(v_a_2035_);
lean_dec_ref_known(v___x_2034_, 1);
v___x_2036_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
v___x_2038_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_2039_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2037_, v___x_2038_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___y_2047_; uint8_t v___x_2074_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
lean_dec_ref_known(v___x_2039_, 1);
v___x_2041_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_2042_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_2035_);
v___x_2043_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2043_, 0, v_a_2035_);
lean_ctor_set(v___x_2043_, 1, v___x_2042_);
v___x_2044_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_2045_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_2074_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_2074_ == 0)
{
lean_object* v___x_2075_; 
v___x_2075_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_2047_ = v___x_2075_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2076_; 
v___x_2076_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_2047_ = v___x_2076_;
goto v___jp_2046_;
}
v___jp_2046_:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
lean_inc(v___y_2047_);
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2045_);
lean_ctor_set(v___x_2048_, 1, v___y_2047_);
v___x_2049_ = lean_box(0);
v___x_2050_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2048_);
lean_ctor_set(v___x_2050_, 1, v___x_2049_);
v___x_2051_ = l_Lasm_JS_obj(v___x_2050_);
v___x_2052_ = lean_unsigned_to_nat(3u);
v___x_2053_ = lean_mk_empty_array_with_capacity(v___x_2052_);
v___x_2054_ = lean_array_push(v___x_2053_, v___x_2043_);
v___x_2055_ = lean_array_push(v___x_2054_, v___x_2044_);
v___x_2056_ = lean_array_push(v___x_2055_, v___x_2051_);
v___x_2057_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2040_, v___x_2041_, v___x_2056_);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v___x_2059_; uint8_t v_isShared_2060_; uint8_t v_isSharedCheck_2064_; 
v_isSharedCheck_2064_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2064_ == 0)
{
lean_object* v_unused_2065_; 
v_unused_2065_ = lean_ctor_get(v___x_2057_, 0);
lean_dec(v_unused_2065_);
v___x_2059_ = v___x_2057_;
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
else
{
lean_dec(v___x_2057_);
v___x_2059_ = lean_box(0);
v_isShared_2060_ = v_isSharedCheck_2064_;
goto v_resetjp_2058_;
}
v_resetjp_2058_:
{
lean_object* v___x_2062_; 
if (v_isShared_2060_ == 0)
{
lean_ctor_set(v___x_2059_, 0, v_a_2035_);
v___x_2062_ = v___x_2059_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_a_2035_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_dec(v_a_2035_);
v_a_2066_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2057_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2057_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
else
{
lean_object* v_a_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2084_; 
lean_dec(v_a_2035_);
v_a_2077_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2084_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2084_ == 0)
{
v___x_2079_ = v___x_2039_;
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_a_2077_);
lean_dec(v___x_2039_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2084_;
goto v_resetjp_2078_;
}
v_resetjp_2078_:
{
lean_object* v___x_2082_; 
if (v_isShared_2080_ == 0)
{
v___x_2082_ = v___x_2079_;
goto v_reusejp_2081_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_a_2077_);
v___x_2082_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2081_;
}
v_reusejp_2081_:
{
return v___x_2082_;
}
}
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v_a_2035_);
v_a_2085_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2036_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2036_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
v_a_2093_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2034_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2034_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object* v_f_2101_, lean_object* v_a_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(v_f_2101_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object* v_f_2111_, lean_object* v_a_2112_, lean_object* v___f_2113_, lean_object* v_x_2114_){
_start:
{
if (lean_obj_tag(v_x_2114_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2124_; 
lean_dec_ref(v___f_2113_);
lean_dec(v_a_2112_);
lean_dec_ref(v_f_2111_);
v_a_2116_ = lean_ctor_get(v_x_2114_, 0);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_x_2114_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2118_ = v_x_2114_;
v_isShared_2119_ = v_isSharedCheck_2124_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v_x_2114_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2124_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
lean_object* v___x_2122_; 
v___x_2122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2121_);
return v___x_2122_;
}
}
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2126_; uint8_t v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; 
v_a_2125_ = lean_ctor_get(v_x_2114_, 0);
lean_inc(v_a_2125_);
lean_dec_ref_known(v_x_2114_, 1);
v___x_2126_ = lean_unsigned_to_nat(0u);
v___x_2127_ = 0;
v___x_2128_ = lean_apply_3(v_f_2111_, v_a_2112_, v_a_2125_, lean_box(0));
v___x_2129_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2126_, v___x_2127_, v___x_2128_, v___f_2113_);
return v___x_2129_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object* v_f_2130_, lean_object* v_a_2131_, lean_object* v___f_2132_, lean_object* v_x_2133_, lean_object* v___y_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(v_f_2130_, v_a_2131_, v___f_2132_, v_x_2133_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object* v_context_2136_, lean_object* v_d_2137_){
_start:
{
lean_object* v___y_2140_; lean_object* v___y_2141_; 
if (lean_obj_tag(v_d_2137_) == 9)
{
lean_object* v_value_2145_; lean_object* v___x_2146_; 
v_value_2145_ = lean_ctor_get(v_d_2137_, 0);
lean_inc(v_value_2145_);
lean_dec_ref_known(v_d_2137_, 2);
v___x_2146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2146_, 0, v_value_2145_);
return v___x_2146_;
}
else
{
lean_object* v___x_2147_; lean_object* v_received_2149_; 
v___x_2147_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
if (lean_obj_tag(v_d_2137_) == 9)
{
lean_object* v_value_2163_; lean_object* v_description_2164_; uint8_t v___x_2165_; 
v_value_2163_ = lean_ctor_get(v_d_2137_, 0);
v_description_2164_ = lean_ctor_get(v_d_2137_, 1);
v___x_2165_ = lean_string_dec_eq(v_description_2164_, v___x_2147_);
if (v___x_2165_ == 0)
{
goto v___jp_2161_;
}
else
{
uint32_t v___x_2166_; uint64_t v___x_2167_; lean_object* v___x_2168_; uint32_t v___x_2169_; lean_object* v___x_2170_; 
lean_inc_n(v_value_2163_, 2);
lean_dec_ref_known(v_d_2137_, 2);
v___x_2166_ = 206;
v___x_2167_ = 0ULL;
v___x_2168_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2168_, 0, v_value_2163_);
lean_ctor_set(v___x_2168_, 1, v___x_2147_);
v___x_2169_ = lasm_js_value_handle(v_value_2163_);
lean_dec(v_value_2163_);
v___x_2170_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2166_, v___x_2167_, v___x_2168_, v___x_2169_);
lean_dec_ref_known(v___x_2168_, 2);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; uint8_t v___x_2172_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc(v_a_2171_);
lean_dec_ref_known(v___x_2170_, 1);
v___x_2172_ = lean_string_validate_utf8(v_a_2171_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; lean_object* v___x_2174_; 
lean_dec(v_a_2171_);
v___x_2173_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_2174_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2173_);
v_received_2149_ = v___x_2174_;
goto v___jp_2148_;
}
else
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_string_from_utf8_unchecked(v_a_2171_);
v_received_2149_ = v___x_2175_;
goto v___jp_2148_;
}
}
else
{
lean_object* v___x_2176_; 
lean_dec_ref_known(v___x_2170_, 1);
v___x_2176_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v_received_2149_ = v___x_2176_;
goto v___jp_2148_;
}
}
}
else
{
goto v___jp_2161_;
}
v___jp_2148_:
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; uint8_t v___x_2159_; 
v___x_2150_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2151_ = lean_string_append(v___x_2150_, v_context_2136_);
v___x_2152_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2153_ = lean_string_append(v___x_2151_, v___x_2152_);
v___x_2154_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServer___closed__0));
v___x_2155_ = lean_string_append(v___x_2153_, v___x_2154_);
v___x_2156_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2157_ = lean_string_append(v___x_2155_, v___x_2156_);
v___x_2158_ = lean_string_append(v___x_2157_, v_received_2149_);
lean_dec_ref(v_received_2149_);
v___x_2159_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; 
v___x_2160_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__5));
v___y_2140_ = v___x_2158_;
v___y_2141_ = v___x_2160_;
goto v___jp_2139_;
}
else
{
v___y_2140_ = v___x_2158_;
v___y_2141_ = v___x_2147_;
goto v___jp_2139_;
}
}
v___jp_2161_:
{
lean_object* v___x_2162_; 
v___x_2162_ = l_Lasm_JS_Data_describe(v_d_2137_);
v_received_2149_ = v___x_2162_;
goto v___jp_2148_;
}
}
v___jp_2139_:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2142_ = lean_string_append(v___y_2140_, v___y_2141_);
v___x_2143_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2142_);
v___x_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
return v___x_2144_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object* v_context_2177_, lean_object* v_d_2178_, lean_object* v_a_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v_context_2177_, v_d_2178_);
lean_dec_ref(v_context_2177_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object* v_args_2181_, lean_object* v_i_2182_){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; uint8_t v___x_2190_; 
v___x_2184_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0));
v___x_2185_ = lean_unsigned_to_nat(1u);
v___x_2186_ = lean_nat_add(v_i_2182_, v___x_2185_);
v___x_2187_ = l_Nat_reprFast(v___x_2186_);
v___x_2188_ = lean_string_append(v___x_2184_, v___x_2187_);
lean_dec_ref(v___x_2187_);
v___x_2189_ = lean_array_get_size(v_args_2181_);
v___x_2190_ = lean_nat_dec_lt(v_i_2182_, v___x_2189_);
if (v___x_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = lean_box(0);
v___x_2192_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_2188_, v___x_2191_);
lean_dec_ref(v___x_2188_);
return v___x_2192_;
}
else
{
lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2193_ = lean_array_fget_borrowed(v_args_2181_, v_i_2182_);
lean_inc(v___x_2193_);
v___x_2194_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_2188_, v___x_2193_);
lean_dec_ref(v___x_2188_);
return v___x_2194_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object* v_args_2195_, lean_object* v_i_2196_, lean_object* v_a_2197_){
_start:
{
lean_object* v_res_2198_; 
v_res_2198_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_2195_, v_i_2196_);
lean_dec(v_i_2196_);
lean_dec_ref(v_args_2195_);
return v_res_2198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object* v_f_2199_, lean_object* v___f_2200_, lean_object* v_args_2201_, lean_object* v_x_2202_){
_start:
{
if (lean_obj_tag(v_x_2202_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2212_; 
lean_dec_ref(v___f_2200_);
lean_dec_ref(v_f_2199_);
v_a_2204_ = lean_ctor_get(v_x_2202_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_x_2202_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2206_ = v_x_2202_;
v_isShared_2207_ = v_isSharedCheck_2212_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v_x_2202_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2212_;
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
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2204_);
v___x_2209_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
lean_object* v___x_2210_; 
v___x_2210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2209_);
return v___x_2210_;
}
}
}
else
{
lean_object* v_a_2213_; lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2234_; 
v_a_2213_ = lean_ctor_get(v_x_2202_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v_x_2202_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2215_ = v_x_2202_;
v_isShared_2216_ = v_isSharedCheck_2234_;
goto v_resetjp_2214_;
}
else
{
lean_inc(v_a_2213_);
lean_dec(v_x_2202_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2234_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___f_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; uint8_t v___x_2220_; lean_object* v_val_2222_; lean_object* v___x_2225_; 
v___f_2217_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2217_, 0, v_f_2199_);
lean_closure_set(v___f_2217_, 1, v_a_2213_);
lean_closure_set(v___f_2217_, 2, v___f_2200_);
v___x_2218_ = lean_unsigned_to_nat(1u);
v___x_2219_ = lean_unsigned_to_nat(0u);
v___x_2220_ = 0;
v___x_2225_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_2201_, v___x_2218_);
if (lean_obj_tag(v___x_2225_) == 0)
{
lean_object* v_a_2226_; lean_object* v___x_2228_; 
v_a_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_a_2226_);
lean_dec_ref_known(v___x_2225_, 1);
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 0, v_a_2226_);
v___x_2228_ = v___x_2215_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2226_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
v_val_2222_ = v___x_2228_;
goto v___jp_2221_;
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; 
v_a_2230_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v___x_2225_, 1);
if (v_isShared_2216_ == 0)
{
lean_ctor_set_tag(v___x_2215_, 0);
lean_ctor_set(v___x_2215_, 0, v_a_2230_);
v___x_2232_ = v___x_2215_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2230_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
v_val_2222_ = v___x_2232_;
goto v___jp_2221_;
}
}
v___jp_2221_:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2223_, 0, v_val_2222_);
v___x_2224_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2219_, v___x_2220_, v___x_2223_, v___f_2217_);
return v___x_2224_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object* v_f_2235_, lean_object* v___f_2236_, lean_object* v_args_2237_, lean_object* v_x_2238_, lean_object* v___y_2239_){
_start:
{
lean_object* v_res_2240_; 
v_res_2240_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(v_f_2235_, v___f_2236_, v_args_2237_, v_x_2238_);
lean_dec_ref(v_args_2237_);
return v_res_2240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object* v_args_2241_, lean_object* v_i_2242_){
_start:
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; uint8_t v___x_2250_; 
v___x_2244_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0));
v___x_2245_ = lean_unsigned_to_nat(1u);
v___x_2246_ = lean_nat_add(v_i_2242_, v___x_2245_);
v___x_2247_ = l_Nat_reprFast(v___x_2246_);
v___x_2248_ = lean_string_append(v___x_2244_, v___x_2247_);
lean_dec_ref(v___x_2247_);
v___x_2249_ = lean_array_get_size(v_args_2241_);
v___x_2250_ = lean_nat_dec_lt(v_i_2242_, v___x_2249_);
if (v___x_2250_ == 0)
{
lean_object* v___x_2251_; lean_object* v___x_2252_; 
v___x_2251_ = lean_box(0);
v___x_2252_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_2248_, v___x_2251_);
lean_dec_ref(v___x_2248_);
return v___x_2252_;
}
else
{
lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2253_ = lean_array_fget_borrowed(v_args_2241_, v_i_2242_);
lean_inc(v___x_2253_);
v___x_2254_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_2248_, v___x_2253_);
lean_dec_ref(v___x_2248_);
return v___x_2254_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object* v_args_2255_, lean_object* v_i_2256_, lean_object* v_a_2257_){
_start:
{
lean_object* v_res_2258_; 
v_res_2258_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_2255_, v_i_2256_);
lean_dec(v_i_2256_);
lean_dec_ref(v_args_2255_);
return v_res_2258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object* v_f_2259_, lean_object* v___f_2260_, lean_object* v_args_2261_){
_start:
{
lean_object* v___f_2263_; lean_object* v___x_2264_; uint8_t v___x_2265_; lean_object* v_val_2267_; lean_object* v___x_2270_; 
lean_inc_ref(v_args_2261_);
v___f_2263_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2263_, 0, v_f_2259_);
lean_closure_set(v___f_2263_, 1, v___f_2260_);
lean_closure_set(v___f_2263_, 2, v_args_2261_);
v___x_2264_ = lean_unsigned_to_nat(0u);
v___x_2265_ = 0;
v___x_2270_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_2261_, v___x_2264_);
lean_dec_ref(v_args_2261_);
if (lean_obj_tag(v___x_2270_) == 0)
{
lean_object* v_a_2271_; lean_object* v___x_2273_; uint8_t v_isShared_2274_; uint8_t v_isSharedCheck_2278_; 
v_a_2271_ = lean_ctor_get(v___x_2270_, 0);
v_isSharedCheck_2278_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2278_ == 0)
{
v___x_2273_ = v___x_2270_;
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
else
{
lean_inc(v_a_2271_);
lean_dec(v___x_2270_);
v___x_2273_ = lean_box(0);
v_isShared_2274_ = v_isSharedCheck_2278_;
goto v_resetjp_2272_;
}
v_resetjp_2272_:
{
lean_object* v___x_2276_; 
if (v_isShared_2274_ == 0)
{
lean_ctor_set_tag(v___x_2273_, 1);
v___x_2276_ = v___x_2273_;
goto v_reusejp_2275_;
}
else
{
lean_object* v_reuseFailAlloc_2277_; 
v_reuseFailAlloc_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2277_, 0, v_a_2271_);
v___x_2276_ = v_reuseFailAlloc_2277_;
goto v_reusejp_2275_;
}
v_reusejp_2275_:
{
v_val_2267_ = v___x_2276_;
goto v___jp_2266_;
}
}
}
else
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
v_a_2279_ = lean_ctor_get(v___x_2270_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2270_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v___x_2270_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2270_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
lean_ctor_set_tag(v___x_2281_, 0);
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
v_val_2267_ = v___x_2284_;
goto v___jp_2266_;
}
}
}
v___jp_2266_:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2268_, 0, v_val_2267_);
v___x_2269_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2264_, v___x_2265_, v___x_2268_, v___f_2263_);
return v___x_2269_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object* v_f_2287_, lean_object* v___f_2288_, lean_object* v_args_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(v_f_2287_, v___f_2288_, v_args_2289_);
return v_res_2291_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0(void){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; 
v___x_2292_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___x_2293_ = lean_nat_abs(v___x_2292_);
return v___x_2293_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1(void){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; uint8_t v___x_2296_; 
v___x_2294_ = lean_cstr_to_nat("9007199254740991");
v___x_2295_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0);
v___x_2296_ = lean_nat_dec_le(v___x_2295_, v___x_2294_);
return v___x_2296_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2(void){
_start:
{
lean_object* v___x_2297_; lean_object* v___x_2298_; 
v___x_2297_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___x_2298_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2297_);
return v___x_2298_;
}
}
static double _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3(void){
_start:
{
lean_object* v___x_2299_; double v___x_2300_; 
v___x_2299_ = lean_obj_once(&l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8, &l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8_once, _init_l_Lasm_JS_Bun_instReprServerWebSocketBinaryType_repr___closed__8);
v___x_2300_ = l_Float_ofInt(v___x_2299_);
return v___x_2300_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4(void){
_start:
{
double v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = lean_float_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3);
v___x_2302_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object* v_f_2303_){
_start:
{
lean_object* v___f_2305_; lean_object* v___f_2306_; lean_object* v___x_2307_; 
v___f_2305_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_2306_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_2306_, 0, v_f_2303_);
lean_closure_set(v___f_2306_, 1, v___f_2305_);
v___x_2307_ = l_Lasm_JS_Function_ofFn(v___f_2306_);
if (lean_obj_tag(v___x_2307_) == 0)
{
lean_object* v_a_2308_; lean_object* v___x_2309_; 
v_a_2308_ = lean_ctor_get(v___x_2307_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v___x_2307_, 1);
v___x_2309_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref_known(v___x_2309_, 1);
v___x_2311_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_2312_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2310_, v___x_2311_);
if (lean_obj_tag(v___x_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___y_2320_; uint8_t v___x_2347_; 
v_a_2313_ = lean_ctor_get(v___x_2312_, 0);
lean_inc(v_a_2313_);
lean_dec_ref_known(v___x_2312_, 1);
v___x_2314_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_2315_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_2308_);
v___x_2316_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2316_, 0, v_a_2308_);
lean_ctor_set(v___x_2316_, 1, v___x_2315_);
v___x_2317_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_2318_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_2347_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_2347_ == 0)
{
lean_object* v___x_2348_; 
v___x_2348_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_2320_ = v___x_2348_;
goto v___jp_2319_;
}
else
{
lean_object* v___x_2349_; 
v___x_2349_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_2320_ = v___x_2349_;
goto v___jp_2319_;
}
v___jp_2319_:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; 
lean_inc(v___y_2320_);
v___x_2321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2321_, 0, v___x_2318_);
lean_ctor_set(v___x_2321_, 1, v___y_2320_);
v___x_2322_ = lean_box(0);
v___x_2323_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2323_, 0, v___x_2321_);
lean_ctor_set(v___x_2323_, 1, v___x_2322_);
v___x_2324_ = l_Lasm_JS_obj(v___x_2323_);
v___x_2325_ = lean_unsigned_to_nat(3u);
v___x_2326_ = lean_mk_empty_array_with_capacity(v___x_2325_);
v___x_2327_ = lean_array_push(v___x_2326_, v___x_2316_);
v___x_2328_ = lean_array_push(v___x_2327_, v___x_2317_);
v___x_2329_ = lean_array_push(v___x_2328_, v___x_2324_);
v___x_2330_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2313_, v___x_2314_, v___x_2329_);
if (lean_obj_tag(v___x_2330_) == 0)
{
lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2337_ == 0)
{
lean_object* v_unused_2338_; 
v_unused_2338_ = lean_ctor_get(v___x_2330_, 0);
lean_dec(v_unused_2338_);
v___x_2332_ = v___x_2330_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_dec(v___x_2330_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
lean_ctor_set(v___x_2332_, 0, v_a_2308_);
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2308_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; uint8_t v_isShared_2342_; uint8_t v_isSharedCheck_2346_; 
lean_dec(v_a_2308_);
v_a_2339_ = lean_ctor_get(v___x_2330_, 0);
v_isSharedCheck_2346_ = !lean_is_exclusive(v___x_2330_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2341_ = v___x_2330_;
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
else
{
lean_inc(v_a_2339_);
lean_dec(v___x_2330_);
v___x_2341_ = lean_box(0);
v_isShared_2342_ = v_isSharedCheck_2346_;
goto v_resetjp_2340_;
}
v_resetjp_2340_:
{
lean_object* v___x_2344_; 
if (v_isShared_2342_ == 0)
{
v___x_2344_ = v___x_2341_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_a_2339_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
}
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec(v_a_2308_);
v_a_2350_ = lean_ctor_get(v___x_2312_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2312_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2312_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2312_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
lean_dec(v_a_2308_);
v_a_2358_ = lean_ctor_get(v___x_2309_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2309_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2309_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2309_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2373_; 
v_a_2366_ = lean_ctor_get(v___x_2307_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2307_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2368_ = v___x_2307_;
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2307_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2371_; 
if (v_isShared_2369_ == 0)
{
v___x_2371_ = v___x_2368_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2366_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object* v_f_2374_, lean_object* v_a_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(v_f_2374_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object* v_f_2377_, lean_object* v_args_2378_){
_start:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2380_ = lean_unsigned_to_nat(0u);
v___x_2381_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_2378_, v___x_2380_);
if (lean_obj_tag(v___x_2381_) == 0)
{
lean_object* v_a_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v_a_2382_ = lean_ctor_get(v___x_2381_, 0);
lean_inc(v_a_2382_);
lean_dec_ref_known(v___x_2381_, 1);
v___x_2383_ = lean_unsigned_to_nat(1u);
v___x_2384_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_2378_, v___x_2383_);
if (lean_obj_tag(v___x_2384_) == 0)
{
lean_object* v_a_2385_; lean_object* v___x_2386_; 
v_a_2385_ = lean_ctor_get(v___x_2384_, 0);
lean_inc(v_a_2385_);
lean_dec_ref_known(v___x_2384_, 1);
v___x_2386_ = lean_apply_3(v_f_2377_, v_a_2382_, v_a_2385_, lean_box(0));
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2396_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2396_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2396_ == 0)
{
v___x_2389_ = v___x_2386_;
v_isShared_2390_ = v_isSharedCheck_2396_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2386_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2396_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2394_; 
v___x_2391_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_2392_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2392_, 0, v_a_2387_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 0, v___x_2392_);
v___x_2394_ = v___x_2389_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2395_; 
v_reuseFailAlloc_2395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2395_, 0, v___x_2392_);
v___x_2394_ = v_reuseFailAlloc_2395_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
return v___x_2394_;
}
}
}
else
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2404_; 
v_a_2397_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2404_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2404_ == 0)
{
v___x_2399_ = v___x_2386_;
v_isShared_2400_ = v_isSharedCheck_2404_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2386_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2404_;
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
lean_object* v_reuseFailAlloc_2403_; 
v_reuseFailAlloc_2403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2403_, 0, v_a_2397_);
v___x_2402_ = v_reuseFailAlloc_2403_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
return v___x_2402_;
}
}
}
}
else
{
lean_object* v_a_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2412_; 
lean_dec(v_a_2382_);
lean_dec_ref(v_f_2377_);
v_a_2405_ = lean_ctor_get(v___x_2384_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2384_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2407_ = v___x_2384_;
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_a_2405_);
lean_dec(v___x_2384_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2412_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2410_; 
if (v_isShared_2408_ == 0)
{
v___x_2410_ = v___x_2407_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v_a_2405_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
}
else
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2420_; 
lean_dec_ref(v_f_2377_);
v_a_2413_ = lean_ctor_get(v___x_2381_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2381_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2415_ = v___x_2381_;
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2381_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2418_; 
if (v_isShared_2416_ == 0)
{
v___x_2418_ = v___x_2415_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_a_2413_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object* v_f_2421_, lean_object* v_args_2422_, lean_object* v___y_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(v_f_2421_, v_args_2422_);
lean_dec_ref(v_args_2422_);
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object* v_f_2425_){
_start:
{
lean_object* v___f_2427_; lean_object* v___x_2428_; 
v___f_2427_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2427_, 0, v_f_2425_);
v___x_2428_ = l_Lasm_JS_Function_ofSyncFn(v___f_2427_);
if (lean_obj_tag(v___x_2428_) == 0)
{
lean_object* v_a_2429_; lean_object* v___x_2430_; 
v_a_2429_ = lean_ctor_get(v___x_2428_, 0);
lean_inc(v_a_2429_);
lean_dec_ref_known(v___x_2428_, 1);
v___x_2430_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
lean_inc(v_a_2431_);
lean_dec_ref_known(v___x_2430_, 1);
v___x_2432_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_2433_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2431_, v___x_2432_);
if (lean_obj_tag(v___x_2433_) == 0)
{
lean_object* v_a_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___y_2441_; uint8_t v___x_2468_; 
v_a_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2433_, 1);
v___x_2435_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_2436_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_2429_);
v___x_2437_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2437_, 0, v_a_2429_);
lean_ctor_set(v___x_2437_, 1, v___x_2436_);
v___x_2438_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_2439_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_2468_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_2468_ == 0)
{
lean_object* v___x_2469_; 
v___x_2469_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_2441_ = v___x_2469_;
goto v___jp_2440_;
}
else
{
lean_object* v___x_2470_; 
v___x_2470_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_2441_ = v___x_2470_;
goto v___jp_2440_;
}
v___jp_2440_:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
lean_inc(v___y_2441_);
v___x_2442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2442_, 0, v___x_2439_);
lean_ctor_set(v___x_2442_, 1, v___y_2441_);
v___x_2443_ = lean_box(0);
v___x_2444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2442_);
lean_ctor_set(v___x_2444_, 1, v___x_2443_);
v___x_2445_ = l_Lasm_JS_obj(v___x_2444_);
v___x_2446_ = lean_unsigned_to_nat(3u);
v___x_2447_ = lean_mk_empty_array_with_capacity(v___x_2446_);
v___x_2448_ = lean_array_push(v___x_2447_, v___x_2437_);
v___x_2449_ = lean_array_push(v___x_2448_, v___x_2438_);
v___x_2450_ = lean_array_push(v___x_2449_, v___x_2445_);
v___x_2451_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2434_, v___x_2435_, v___x_2450_);
if (lean_obj_tag(v___x_2451_) == 0)
{
lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2458_; 
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2458_ == 0)
{
lean_object* v_unused_2459_; 
v_unused_2459_ = lean_ctor_get(v___x_2451_, 0);
lean_dec(v_unused_2459_);
v___x_2453_ = v___x_2451_;
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
else
{
lean_dec(v___x_2451_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v_a_2429_);
v___x_2456_ = v___x_2453_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_a_2429_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
else
{
lean_object* v_a_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2467_; 
lean_dec(v_a_2429_);
v_a_2460_ = lean_ctor_get(v___x_2451_, 0);
v_isSharedCheck_2467_ = !lean_is_exclusive(v___x_2451_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2462_ = v___x_2451_;
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_a_2460_);
lean_dec(v___x_2451_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2467_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_a_2460_);
v___x_2465_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
return v___x_2465_;
}
}
}
}
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
lean_dec(v_a_2429_);
v_a_2471_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2433_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2433_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
lean_dec(v_a_2429_);
v_a_2479_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2430_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2430_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2494_; 
v_a_2487_ = lean_ctor_get(v___x_2428_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2428_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2489_ = v___x_2428_;
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2428_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2487_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object* v_f_2495_, lean_object* v_a_2496_){
_start:
{
lean_object* v_res_2497_; 
v_res_2497_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(v_f_2495_);
return v_res_2497_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__0));
v___x_2501_ = l_Lasm_JS_Web_Support_fields(v___x_2500_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutes___lam__0(lean_object* v_x_2502_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = lean_obj_once(&l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1, &l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1_once, _init_l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutesWithUpgrade___lam__0(lean_object* v_x_2506_){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = lean_obj_once(&l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1, &l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1_once, _init_l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1);
return v___x_2507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorIdx(lean_object* v_x_2510_){
_start:
{
if (lean_obj_tag(v_x_2510_) == 0)
{
lean_object* v___x_2511_; 
v___x_2511_ = lean_unsigned_to_nat(0u);
return v___x_2511_;
}
else
{
lean_object* v___x_2512_; 
v___x_2512_ = lean_unsigned_to_nat(1u);
return v___x_2512_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorIdx___boxed(lean_object* v_x_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorIdx(v_x_2513_);
lean_dec_ref(v_x_2513_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___redArg(lean_object* v_t_2515_, lean_object* v_k_2516_){
_start:
{
lean_object* v_value_2517_; lean_object* v___x_2518_; 
v_value_2517_ = lean_ctor_get(v_t_2515_, 0);
lean_inc(v_value_2517_);
lean_dec_ref(v_t_2515_);
v___x_2518_ = lean_apply_1(v_k_2516_, v_value_2517_);
return v___x_2518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim(lean_object* v_motive_2519_, lean_object* v_ctorIdx_2520_, lean_object* v_t_2521_, lean_object* v_h_2522_, lean_object* v_k_2523_){
_start:
{
lean_object* v___x_2524_; 
v___x_2524_ = l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___redArg(v_t_2521_, v_k_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___boxed(lean_object* v_motive_2525_, lean_object* v_ctorIdx_2526_, lean_object* v_t_2527_, lean_object* v_h_2528_, lean_object* v_k_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim(v_motive_2525_, v_ctorIdx_2526_, v_t_2527_, v_h_2528_, v_k_2529_);
lean_dec(v_ctorIdx_2526_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutes_elim___redArg(lean_object* v_t_2531_, lean_object* v_serveRoutes_2532_){
_start:
{
lean_object* v___x_2533_; 
v___x_2533_ = l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___redArg(v_t_2531_, v_serveRoutes_2532_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutes_elim(lean_object* v_motive_2534_, lean_object* v_t_2535_, lean_object* v_h_2536_, lean_object* v_serveRoutes_2537_){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___redArg(v_t_2535_, v_serveRoutes_2537_);
return v___x_2538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutesWithUpgrade_elim___redArg(lean_object* v_t_2539_, lean_object* v_serveRoutesWithUpgrade_2540_){
_start:
{
lean_object* v___x_2541_; 
v___x_2541_ = l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___redArg(v_t_2539_, v_serveRoutesWithUpgrade_2540_);
return v___x_2541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_serveRoutesWithUpgrade_elim(lean_object* v_motive_2542_, lean_object* v_t_2543_, lean_object* v_h_2544_, lean_object* v_serveRoutesWithUpgrade_2545_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = l_Lasm_JS_Bun_ServeRoutesOrServeRoutesWithUpgrade_ctorElim___redArg(v_t_2543_, v_serveRoutesWithUpgrade_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___lam__0(lean_object* v_x_2547_){
_start:
{
lean_object* v___x_2548_; 
v___x_2548_ = lean_obj_once(&l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1, &l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1_once, _init_l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1);
return v___x_2548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___lam__0___boxed(lean_object* v_x_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l_Lasm_JS_Bun_instToJSServeRoutesOrServeRoutesWithUpgrade___lam__0(v_x_2549_);
lean_dec_ref(v_x_2549_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeServeRoutesServeRoutesOrServeRoutesWithUpgrade___lam__0(lean_object* v_value_2553_){
_start:
{
lean_object* v___x_2554_; 
v___x_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2554_, 0, v_value_2553_);
return v___x_2554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeServeRoutesWithUpgradeServeRoutesOrServeRoutesWithUpgrade___lam__0(lean_object* v_value_2557_){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2558_, 0, v_value_2557_);
return v___x_2558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0(lean_object* v_x_2572_){
_start:
{
if (lean_obj_tag(v_x_2572_) == 0)
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2582_; 
v_a_2574_ = lean_ctor_get(v_x_2572_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v_x_2572_);
if (v_isSharedCheck_2582_ == 0)
{
v___x_2576_ = v_x_2572_;
v_isShared_2577_ = v_isSharedCheck_2582_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v_x_2572_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2582_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
lean_object* v___x_2580_; 
v___x_2580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2579_);
return v___x_2580_;
}
}
}
else
{
lean_object* v___x_2583_; 
lean_dec_ref_known(v_x_2572_, 1);
v___x_2583_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___closed__1));
return v___x_2583_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0___boxed(lean_object* v_x_2584_, lean_object* v___y_2585_){
_start:
{
lean_object* v_res_2586_; 
v_res_2586_ = l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__0(v_x_2584_);
return v_res_2586_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__1(lean_object* v_f_2587_, lean_object* v_a_2588_, lean_object* v___f_2589_, lean_object* v_x_2590_){
_start:
{
if (lean_obj_tag(v_x_2590_) == 0)
{
lean_object* v_a_2592_; lean_object* v___x_2594_; uint8_t v_isShared_2595_; uint8_t v_isSharedCheck_2600_; 
lean_dec_ref(v___f_2589_);
lean_dec(v_a_2588_);
lean_dec_ref(v_f_2587_);
v_a_2592_ = lean_ctor_get(v_x_2590_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v_x_2590_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2594_ = v_x_2590_;
v_isShared_2595_ = v_isSharedCheck_2600_;
goto v_resetjp_2593_;
}
else
{
lean_inc(v_a_2592_);
lean_dec(v_x_2590_);
v___x_2594_ = lean_box(0);
v_isShared_2595_ = v_isSharedCheck_2600_;
goto v_resetjp_2593_;
}
v_resetjp_2593_:
{
lean_object* v___x_2597_; 
if (v_isShared_2595_ == 0)
{
v___x_2597_ = v___x_2594_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2592_);
v___x_2597_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
lean_object* v___x_2598_; 
v___x_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2597_);
return v___x_2598_;
}
}
}
else
{
lean_object* v_a_2601_; lean_object* v___x_2602_; uint8_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; 
v_a_2601_ = lean_ctor_get(v_x_2590_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v_x_2590_, 1);
v___x_2602_ = lean_unsigned_to_nat(0u);
v___x_2603_ = 0;
v___x_2604_ = lean_apply_3(v_f_2587_, v_a_2588_, v_a_2601_, lean_box(0));
v___x_2605_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2602_, v___x_2603_, v___x_2604_, v___f_2589_);
return v___x_2605_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__1___boxed(lean_object* v_f_2606_, lean_object* v_a_2607_, lean_object* v___f_2608_, lean_object* v_x_2609_, lean_object* v___y_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__1(v_f_2606_, v_a_2607_, v___f_2608_, v_x_2609_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0(lean_object* v_context_2613_, lean_object* v_d_2614_){
_start:
{
lean_object* v___y_2617_; lean_object* v___y_2618_; 
switch(lean_obj_tag(v_d_2614_))
{
case 4:
{
lean_object* v_s_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2630_; 
v_s_2622_ = lean_ctor_get(v_d_2614_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v_d_2614_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2624_ = v_d_2614_;
v_isShared_2625_ = v_isSharedCheck_2630_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_s_2622_);
lean_dec(v_d_2614_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2630_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
lean_ctor_set_tag(v___x_2624_, 0);
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_s_2622_);
v___x_2627_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
lean_object* v___x_2628_; 
v___x_2628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2628_, 0, v___x_2627_);
return v___x_2628_;
}
}
}
case 6:
{
lean_object* v_b_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2639_; 
v_b_2631_ = lean_ctor_get(v_d_2614_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v_d_2614_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2633_ = v_d_2614_;
v_isShared_2634_ = v_isSharedCheck_2639_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_b_2631_);
lean_dec(v_d_2614_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2639_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2636_; 
if (v_isShared_2634_ == 0)
{
lean_ctor_set_tag(v___x_2633_, 1);
v___x_2636_ = v___x_2633_;
goto v_reusejp_2635_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_b_2631_);
v___x_2636_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2635_;
}
v_reusejp_2635_:
{
lean_object* v___x_2637_; 
v___x_2637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2637_, 0, v___x_2636_);
return v___x_2637_;
}
}
}
default: 
{
lean_object* v___x_2640_; lean_object* v_received_2642_; 
v___x_2640_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
if (lean_obj_tag(v_d_2614_) == 9)
{
lean_object* v_value_2656_; lean_object* v_description_2657_; uint8_t v___x_2658_; 
v_value_2656_ = lean_ctor_get(v_d_2614_, 0);
v_description_2657_ = lean_ctor_get(v_d_2614_, 1);
v___x_2658_ = lean_string_dec_eq(v_description_2657_, v___x_2640_);
if (v___x_2658_ == 0)
{
goto v___jp_2654_;
}
else
{
uint32_t v___x_2659_; uint64_t v___x_2660_; lean_object* v___x_2661_; uint32_t v___x_2662_; lean_object* v___x_2663_; 
lean_inc_n(v_value_2656_, 2);
lean_dec_ref_known(v_d_2614_, 2);
v___x_2659_ = 206;
v___x_2660_ = 0ULL;
v___x_2661_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2661_, 0, v_value_2656_);
lean_ctor_set(v___x_2661_, 1, v___x_2640_);
v___x_2662_ = lasm_js_value_handle(v_value_2656_);
lean_dec(v_value_2656_);
v___x_2663_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2659_, v___x_2660_, v___x_2661_, v___x_2662_);
lean_dec_ref_known(v___x_2661_, 2);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; uint8_t v___x_2665_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
v___x_2665_ = lean_string_validate_utf8(v_a_2664_);
if (v___x_2665_ == 0)
{
lean_object* v___x_2666_; lean_object* v___x_2667_; 
lean_dec(v_a_2664_);
v___x_2666_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_2667_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2666_);
v_received_2642_ = v___x_2667_;
goto v___jp_2641_;
}
else
{
lean_object* v___x_2668_; 
v___x_2668_ = lean_string_from_utf8_unchecked(v_a_2664_);
v_received_2642_ = v___x_2668_;
goto v___jp_2641_;
}
}
else
{
lean_object* v___x_2669_; 
lean_dec_ref_known(v___x_2663_, 1);
v___x_2669_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v_received_2642_ = v___x_2669_;
goto v___jp_2641_;
}
}
}
else
{
goto v___jp_2654_;
}
v___jp_2641_:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; uint8_t v___x_2652_; 
v___x_2643_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_2644_ = lean_string_append(v___x_2643_, v_context_2613_);
v___x_2645_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_2646_ = lean_string_append(v___x_2644_, v___x_2645_);
v___x_2647_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0___closed__0));
v___x_2648_ = lean_string_append(v___x_2646_, v___x_2647_);
v___x_2649_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_2650_ = lean_string_append(v___x_2648_, v___x_2649_);
v___x_2651_ = lean_string_append(v___x_2650_, v_received_2642_);
lean_dec_ref(v_received_2642_);
v___x_2652_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__4);
if (v___x_2652_ == 0)
{
lean_object* v___x_2653_; 
v___x_2653_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__5));
v___y_2617_ = v___x_2651_;
v___y_2618_ = v___x_2653_;
goto v___jp_2616_;
}
else
{
v___y_2617_ = v___x_2651_;
v___y_2618_ = v___x_2640_;
goto v___jp_2616_;
}
}
v___jp_2654_:
{
lean_object* v___x_2655_; 
v___x_2655_ = l_Lasm_JS_Data_describe(v_d_2614_);
v_received_2642_ = v___x_2655_;
goto v___jp_2641_;
}
}
}
v___jp_2616_:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2619_ = lean_string_append(v___y_2617_, v___y_2618_);
v___x_2620_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2620_, 0, v___x_2619_);
v___x_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2620_);
return v___x_2621_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0___boxed(lean_object* v_context_2670_, lean_object* v_d_2671_, lean_object* v_a_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0(v_context_2670_, v_d_2671_);
lean_dec_ref(v_context_2670_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0(lean_object* v_args_2674_, lean_object* v_i_2675_){
_start:
{
lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; uint8_t v___x_2683_; 
v___x_2677_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0___closed__0));
v___x_2678_ = lean_unsigned_to_nat(1u);
v___x_2679_ = lean_nat_add(v_i_2675_, v___x_2678_);
v___x_2680_ = l_Nat_reprFast(v___x_2679_);
v___x_2681_ = lean_string_append(v___x_2677_, v___x_2680_);
lean_dec_ref(v___x_2680_);
v___x_2682_ = lean_array_get_size(v_args_2674_);
v___x_2683_ = lean_nat_dec_lt(v_i_2675_, v___x_2682_);
if (v___x_2683_ == 0)
{
lean_object* v___x_2684_; lean_object* v___x_2685_; 
v___x_2684_ = lean_box(0);
v___x_2685_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0(v___x_2681_, v___x_2684_);
lean_dec_ref(v___x_2681_);
return v___x_2685_;
}
else
{
lean_object* v___x_2686_; lean_object* v___x_2687_; 
v___x_2686_ = lean_array_fget_borrowed(v_args_2674_, v_i_2675_);
lean_inc(v___x_2686_);
v___x_2687_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0_spec__0(v___x_2681_, v___x_2686_);
lean_dec_ref(v___x_2681_);
return v___x_2687_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0___boxed(lean_object* v_args_2688_, lean_object* v_i_2689_, lean_object* v_a_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0(v_args_2688_, v_i_2689_);
lean_dec(v_i_2689_);
lean_dec_ref(v_args_2688_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__2(lean_object* v_f_2692_, lean_object* v___f_2693_, lean_object* v_args_2694_, lean_object* v_x_2695_){
_start:
{
if (lean_obj_tag(v_x_2695_) == 0)
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2705_; 
lean_dec_ref(v___f_2693_);
lean_dec_ref(v_f_2692_);
v_a_2697_ = lean_ctor_get(v_x_2695_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v_x_2695_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2699_ = v_x_2695_;
v_isShared_2700_ = v_isSharedCheck_2705_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v_x_2695_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2705_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2702_; 
if (v_isShared_2700_ == 0)
{
v___x_2702_ = v___x_2699_;
goto v_reusejp_2701_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v_a_2697_);
v___x_2702_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2701_;
}
v_reusejp_2701_:
{
lean_object* v___x_2703_; 
v___x_2703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2702_);
return v___x_2703_;
}
}
}
else
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2727_; 
v_a_2706_ = lean_ctor_get(v_x_2695_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v_x_2695_);
if (v_isSharedCheck_2727_ == 0)
{
v___x_2708_ = v_x_2695_;
v_isShared_2709_ = v_isSharedCheck_2727_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v_x_2695_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2727_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___f_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; uint8_t v___x_2713_; lean_object* v_val_2715_; lean_object* v___x_2718_; 
v___f_2710_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_2710_, 0, v_f_2692_);
lean_closure_set(v___f_2710_, 1, v_a_2706_);
lean_closure_set(v___f_2710_, 2, v___f_2693_);
v___x_2711_ = lean_unsigned_to_nat(1u);
v___x_2712_ = lean_unsigned_to_nat(0u);
v___x_2713_ = 0;
v___x_2718_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0(v_args_2694_, v___x_2711_);
if (lean_obj_tag(v___x_2718_) == 0)
{
lean_object* v_a_2719_; lean_object* v___x_2721_; 
v_a_2719_ = lean_ctor_get(v___x_2718_, 0);
lean_inc(v_a_2719_);
lean_dec_ref_known(v___x_2718_, 1);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 0, v_a_2719_);
v___x_2721_ = v___x_2708_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2719_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
v_val_2715_ = v___x_2721_;
goto v___jp_2714_;
}
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; 
v_a_2723_ = lean_ctor_get(v___x_2718_, 0);
lean_inc(v_a_2723_);
lean_dec_ref_known(v___x_2718_, 1);
if (v_isShared_2709_ == 0)
{
lean_ctor_set_tag(v___x_2708_, 0);
lean_ctor_set(v___x_2708_, 0, v_a_2723_);
v___x_2725_ = v___x_2708_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v_a_2723_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
v_val_2715_ = v___x_2725_;
goto v___jp_2714_;
}
}
v___jp_2714_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2716_, 0, v_val_2715_);
v___x_2717_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2712_, v___x_2713_, v___x_2716_, v___f_2710_);
return v___x_2717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__2___boxed(lean_object* v_f_2728_, lean_object* v___f_2729_, lean_object* v_args_2730_, lean_object* v_x_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v_res_2733_; 
v_res_2733_ = l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__2(v_f_2728_, v___f_2729_, v_args_2730_, v_x_2731_);
lean_dec_ref(v_args_2730_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__3(lean_object* v_f_2734_, lean_object* v___f_2735_, lean_object* v_args_2736_){
_start:
{
lean_object* v___f_2738_; lean_object* v___x_2739_; uint8_t v___x_2740_; lean_object* v_val_2742_; lean_object* v___x_2745_; 
lean_inc_ref(v_args_2736_);
v___f_2738_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_2738_, 0, v_f_2734_);
lean_closure_set(v___f_2738_, 1, v___f_2735_);
lean_closure_set(v___f_2738_, 2, v_args_2736_);
v___x_2739_ = lean_unsigned_to_nat(0u);
v___x_2740_ = 0;
v___x_2745_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_2736_, v___x_2739_);
lean_dec_ref(v_args_2736_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2745_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2745_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
lean_ctor_set_tag(v___x_2748_, 1);
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
v_val_2742_ = v___x_2751_;
goto v___jp_2741_;
}
}
}
else
{
lean_object* v_a_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
v_a_2754_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v___x_2745_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_a_2754_);
lean_dec(v___x_2745_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set_tag(v___x_2756_, 0);
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_a_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
v_val_2742_ = v___x_2759_;
goto v___jp_2741_;
}
}
}
v___jp_2741_:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2743_, 0, v_val_2742_);
v___x_2744_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2739_, v___x_2740_, v___x_2743_, v___f_2738_);
return v___x_2744_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__3___boxed(lean_object* v_f_2762_, lean_object* v___f_2763_, lean_object* v_args_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__3(v_f_2762_, v___f_2763_, v_args_2764_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn(lean_object* v_f_2768_){
_start:
{
lean_object* v___f_2770_; lean_object* v___f_2771_; lean_object* v___x_2772_; 
v___f_2770_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0));
v___f_2771_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_2771_, 0, v_f_2768_);
lean_closure_set(v___f_2771_, 1, v___f_2770_);
v___x_2772_ = l_Lasm_JS_Function_ofFn(v___f_2771_);
if (lean_obj_tag(v___x_2772_) == 0)
{
lean_object* v_a_2773_; lean_object* v___x_2774_; 
v_a_2773_ = lean_ctor_get(v___x_2772_, 0);
lean_inc(v_a_2773_);
lean_dec_ref_known(v___x_2772_, 1);
v___x_2774_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2774_) == 0)
{
lean_object* v_a_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v_a_2775_ = lean_ctor_get(v___x_2774_, 0);
lean_inc(v_a_2775_);
lean_dec_ref_known(v___x_2774_, 1);
v___x_2776_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_2777_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2775_, v___x_2776_);
if (lean_obj_tag(v___x_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___y_2785_; uint8_t v___x_2812_; 
v_a_2778_ = lean_ctor_get(v___x_2777_, 0);
lean_inc(v_a_2778_);
lean_dec_ref_known(v___x_2777_, 1);
v___x_2779_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_2780_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_2773_);
v___x_2781_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2781_, 0, v_a_2773_);
lean_ctor_set(v___x_2781_, 1, v___x_2780_);
v___x_2782_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_2783_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_2812_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_2812_ == 0)
{
lean_object* v___x_2813_; 
v___x_2813_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_2785_ = v___x_2813_;
goto v___jp_2784_;
}
else
{
lean_object* v___x_2814_; 
v___x_2814_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_2785_ = v___x_2814_;
goto v___jp_2784_;
}
v___jp_2784_:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
lean_inc(v___y_2785_);
v___x_2786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2783_);
lean_ctor_set(v___x_2786_, 1, v___y_2785_);
v___x_2787_ = lean_box(0);
v___x_2788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2786_);
lean_ctor_set(v___x_2788_, 1, v___x_2787_);
v___x_2789_ = l_Lasm_JS_obj(v___x_2788_);
v___x_2790_ = lean_unsigned_to_nat(3u);
v___x_2791_ = lean_mk_empty_array_with_capacity(v___x_2790_);
v___x_2792_ = lean_array_push(v___x_2791_, v___x_2781_);
v___x_2793_ = lean_array_push(v___x_2792_, v___x_2782_);
v___x_2794_ = lean_array_push(v___x_2793_, v___x_2789_);
v___x_2795_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2778_, v___x_2779_, v___x_2794_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2802_ == 0)
{
lean_object* v_unused_2803_; 
v_unused_2803_ = lean_ctor_get(v___x_2795_, 0);
lean_dec(v_unused_2803_);
v___x_2797_ = v___x_2795_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_dec(v___x_2795_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
lean_ctor_set(v___x_2797_, 0, v_a_2773_);
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2773_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
else
{
lean_object* v_a_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2811_; 
lean_dec(v_a_2773_);
v_a_2804_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2811_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2811_ == 0)
{
v___x_2806_ = v___x_2795_;
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_a_2804_);
lean_dec(v___x_2795_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2811_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2809_; 
if (v_isShared_2807_ == 0)
{
v___x_2809_ = v___x_2806_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v_a_2804_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
}
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
lean_dec(v_a_2773_);
v_a_2815_ = lean_ctor_get(v___x_2777_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2777_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2777_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2777_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
else
{
lean_object* v_a_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2830_; 
lean_dec(v_a_2773_);
v_a_2823_ = lean_ctor_get(v___x_2774_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v___x_2774_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2825_ = v___x_2774_;
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_a_2823_);
lean_dec(v___x_2774_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2830_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v___x_2828_; 
if (v_isShared_2826_ == 0)
{
v___x_2828_ = v___x_2825_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2823_);
v___x_2828_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
return v___x_2828_;
}
}
}
}
else
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2838_; 
v_a_2831_ = lean_ctor_get(v___x_2772_, 0);
v_isSharedCheck_2838_ = !lean_is_exclusive(v___x_2772_);
if (v_isSharedCheck_2838_ == 0)
{
v___x_2833_ = v___x_2772_;
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2772_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2838_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
lean_object* v___x_2836_; 
if (v_isShared_2834_ == 0)
{
v___x_2836_ = v___x_2833_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2837_; 
v_reuseFailAlloc_2837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2837_, 0, v_a_2831_);
v___x_2836_ = v_reuseFailAlloc_2837_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
return v___x_2836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___boxed(lean_object* v_f_2839_, lean_object* v_a_2840_){
_start:
{
lean_object* v_res_2841_; 
v_res_2841_ = l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn(v_f_2839_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___lam__0(lean_object* v_f_2842_, lean_object* v_args_2843_){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2845_ = lean_unsigned_to_nat(0u);
v___x_2846_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_2843_, v___x_2845_);
if (lean_obj_tag(v___x_2846_) == 0)
{
lean_object* v_a_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_a_2847_ = lean_ctor_get(v___x_2846_, 0);
lean_inc(v_a_2847_);
lean_dec_ref_known(v___x_2846_, 1);
v___x_2848_ = lean_unsigned_to_nat(1u);
v___x_2849_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_WebSocketHandlerMessage_ofFn_spec__0(v_args_2843_, v___x_2848_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2851_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
lean_inc(v_a_2850_);
lean_dec_ref_known(v___x_2849_, 1);
v___x_2851_ = lean_apply_3(v_f_2842_, v_a_2847_, v_a_2850_, lean_box(0));
if (lean_obj_tag(v___x_2851_) == 0)
{
lean_object* v___x_2853_; uint8_t v_isShared_2854_; uint8_t v_isSharedCheck_2859_; 
v_isSharedCheck_2859_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2859_ == 0)
{
lean_object* v_unused_2860_; 
v_unused_2860_ = lean_ctor_get(v___x_2851_, 0);
lean_dec(v_unused_2860_);
v___x_2853_ = v___x_2851_;
v_isShared_2854_ = v_isSharedCheck_2859_;
goto v_resetjp_2852_;
}
else
{
lean_dec(v___x_2851_);
v___x_2853_ = lean_box(0);
v_isShared_2854_ = v_isSharedCheck_2859_;
goto v_resetjp_2852_;
}
v_resetjp_2852_:
{
lean_object* v___x_2855_; lean_object* v___x_2857_; 
v___x_2855_ = lean_box(0);
if (v_isShared_2854_ == 0)
{
lean_ctor_set(v___x_2853_, 0, v___x_2855_);
v___x_2857_ = v___x_2853_;
goto v_reusejp_2856_;
}
else
{
lean_object* v_reuseFailAlloc_2858_; 
v_reuseFailAlloc_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2858_, 0, v___x_2855_);
v___x_2857_ = v_reuseFailAlloc_2858_;
goto v_reusejp_2856_;
}
v_reusejp_2856_:
{
return v___x_2857_;
}
}
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2868_; 
v_a_2861_ = lean_ctor_get(v___x_2851_, 0);
v_isSharedCheck_2868_ = !lean_is_exclusive(v___x_2851_);
if (v_isSharedCheck_2868_ == 0)
{
v___x_2863_ = v___x_2851_;
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2851_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2868_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2867_; 
v_reuseFailAlloc_2867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2867_, 0, v_a_2861_);
v___x_2866_ = v_reuseFailAlloc_2867_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
return v___x_2866_;
}
}
}
}
else
{
lean_object* v_a_2869_; lean_object* v___x_2871_; uint8_t v_isShared_2872_; uint8_t v_isSharedCheck_2876_; 
lean_dec(v_a_2847_);
lean_dec_ref(v_f_2842_);
v_a_2869_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2876_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2876_ == 0)
{
v___x_2871_ = v___x_2849_;
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
else
{
lean_inc(v_a_2869_);
lean_dec(v___x_2849_);
v___x_2871_ = lean_box(0);
v_isShared_2872_ = v_isSharedCheck_2876_;
goto v_resetjp_2870_;
}
v_resetjp_2870_:
{
lean_object* v___x_2874_; 
if (v_isShared_2872_ == 0)
{
v___x_2874_ = v___x_2871_;
goto v_reusejp_2873_;
}
else
{
lean_object* v_reuseFailAlloc_2875_; 
v_reuseFailAlloc_2875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2875_, 0, v_a_2869_);
v___x_2874_ = v_reuseFailAlloc_2875_;
goto v_reusejp_2873_;
}
v_reusejp_2873_:
{
return v___x_2874_;
}
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
lean_dec_ref(v_f_2842_);
v_a_2877_ = lean_ctor_get(v___x_2846_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2846_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2846_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2846_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___lam__0___boxed(lean_object* v_f_2885_, lean_object* v_args_2886_, lean_object* v___y_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___lam__0(v_f_2885_, v_args_2886_);
lean_dec_ref(v_args_2886_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn(lean_object* v_f_2889_){
_start:
{
lean_object* v___f_2891_; lean_object* v___x_2892_; 
v___f_2891_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2891_, 0, v_f_2889_);
v___x_2892_ = l_Lasm_JS_Function_ofSyncFn(v___f_2891_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v_a_2893_; lean_object* v___x_2894_; 
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
lean_inc(v_a_2893_);
lean_dec_ref_known(v___x_2892_, 1);
v___x_2894_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_object* v_a_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v_a_2895_ = lean_ctor_get(v___x_2894_, 0);
lean_inc(v_a_2895_);
lean_dec_ref_known(v___x_2894_, 1);
v___x_2896_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_2897_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_2895_, v___x_2896_);
if (lean_obj_tag(v___x_2897_) == 0)
{
lean_object* v_a_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___y_2905_; uint8_t v___x_2932_; 
v_a_2898_ = lean_ctor_get(v___x_2897_, 0);
lean_inc(v_a_2898_);
lean_dec_ref_known(v___x_2897_, 1);
v___x_2899_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_2900_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_2893_);
v___x_2901_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2901_, 0, v_a_2893_);
lean_ctor_set(v___x_2901_, 1, v___x_2900_);
v___x_2902_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_2903_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_2932_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_2932_ == 0)
{
lean_object* v___x_2933_; 
v___x_2933_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_2905_ = v___x_2933_;
goto v___jp_2904_;
}
else
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_2905_ = v___x_2934_;
goto v___jp_2904_;
}
v___jp_2904_:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
lean_inc(v___y_2905_);
v___x_2906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2903_);
lean_ctor_set(v___x_2906_, 1, v___y_2905_);
v___x_2907_ = lean_box(0);
v___x_2908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2906_);
lean_ctor_set(v___x_2908_, 1, v___x_2907_);
v___x_2909_ = l_Lasm_JS_obj(v___x_2908_);
v___x_2910_ = lean_unsigned_to_nat(3u);
v___x_2911_ = lean_mk_empty_array_with_capacity(v___x_2910_);
v___x_2912_ = lean_array_push(v___x_2911_, v___x_2901_);
v___x_2913_ = lean_array_push(v___x_2912_, v___x_2902_);
v___x_2914_ = lean_array_push(v___x_2913_, v___x_2909_);
v___x_2915_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_2898_, v___x_2899_, v___x_2914_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v___x_2917_; uint8_t v_isShared_2918_; uint8_t v_isSharedCheck_2922_; 
v_isSharedCheck_2922_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2922_ == 0)
{
lean_object* v_unused_2923_; 
v_unused_2923_ = lean_ctor_get(v___x_2915_, 0);
lean_dec(v_unused_2923_);
v___x_2917_ = v___x_2915_;
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
else
{
lean_dec(v___x_2915_);
v___x_2917_ = lean_box(0);
v_isShared_2918_ = v_isSharedCheck_2922_;
goto v_resetjp_2916_;
}
v_resetjp_2916_:
{
lean_object* v___x_2920_; 
if (v_isShared_2918_ == 0)
{
lean_ctor_set(v___x_2917_, 0, v_a_2893_);
v___x_2920_ = v___x_2917_;
goto v_reusejp_2919_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v_a_2893_);
v___x_2920_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2919_;
}
v_reusejp_2919_:
{
return v___x_2920_;
}
}
}
else
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2931_; 
lean_dec(v_a_2893_);
v_a_2924_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_2931_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2926_ = v___x_2915_;
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2915_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2931_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
lean_object* v___x_2929_; 
if (v_isShared_2927_ == 0)
{
v___x_2929_ = v___x_2926_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v_a_2924_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
}
}
else
{
lean_object* v_a_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2942_; 
lean_dec(v_a_2893_);
v_a_2935_ = lean_ctor_get(v___x_2897_, 0);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___x_2897_);
if (v_isSharedCheck_2942_ == 0)
{
v___x_2937_ = v___x_2897_;
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_a_2935_);
lean_dec(v___x_2897_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2940_; 
if (v_isShared_2938_ == 0)
{
v___x_2940_ = v___x_2937_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v_a_2935_);
v___x_2940_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
return v___x_2940_;
}
}
}
}
else
{
lean_object* v_a_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2950_; 
lean_dec(v_a_2893_);
v_a_2943_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2945_ = v___x_2894_;
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_a_2943_);
lean_dec(v___x_2894_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2950_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v_a_2943_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
v_a_2951_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2892_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2892_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn___boxed(lean_object* v_f_2959_, lean_object* v_a_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lasm_JS_Bun_WebSocketHandlerMessage_ofSyncFn(v_f_2959_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___lam__1(lean_object* v_f_2969_, lean_object* v___f_2970_, lean_object* v_x_2971_){
_start:
{
if (lean_obj_tag(v_x_2971_) == 0)
{
lean_object* v_a_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_2981_; 
lean_dec_ref(v___f_2970_);
lean_dec_ref(v_f_2969_);
v_a_2973_ = lean_ctor_get(v_x_2971_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_x_2971_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2975_ = v_x_2971_;
v_isShared_2976_ = v_isSharedCheck_2981_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_a_2973_);
lean_dec(v_x_2971_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_2981_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2978_; 
if (v_isShared_2976_ == 0)
{
v___x_2978_ = v___x_2975_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_a_2973_);
v___x_2978_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2979_, 0, v___x_2978_);
return v___x_2979_;
}
}
}
else
{
lean_object* v_a_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v_a_2982_ = lean_ctor_get(v_x_2971_, 0);
lean_inc(v_a_2982_);
lean_dec_ref_known(v_x_2971_, 1);
v___x_2983_ = lean_unsigned_to_nat(0u);
v___x_2984_ = 0;
v___x_2985_ = lean_apply_2(v_f_2969_, v_a_2982_, lean_box(0));
v___x_2986_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2983_, v___x_2984_, v___x_2985_, v___f_2970_);
return v___x_2986_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___lam__1___boxed(lean_object* v_f_2987_, lean_object* v___f_2988_, lean_object* v_x_2989_, lean_object* v___y_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___lam__1(v_f_2987_, v___f_2988_, v_x_2989_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn(lean_object* v_f_2992_){
_start:
{
lean_object* v___f_2994_; lean_object* v___f_2995_; lean_object* v___f_2996_; lean_object* v___x_2997_; 
v___f_2994_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0));
v___f_2995_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_2995_, 0, v_f_2992_);
lean_closure_set(v___f_2995_, 1, v___f_2994_);
v___f_2996_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2996_, 0, v___f_2995_);
v___x_2997_ = l_Lasm_JS_Function_ofFn(v___f_2996_);
if (lean_obj_tag(v___x_2997_) == 0)
{
lean_object* v_a_2998_; lean_object* v___x_2999_; 
v_a_2998_ = lean_ctor_get(v___x_2997_, 0);
lean_inc(v_a_2998_);
lean_dec_ref_known(v___x_2997_, 1);
v___x_2999_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref_known(v___x_2999_, 1);
v___x_3001_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3002_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3000_, v___x_3001_);
if (lean_obj_tag(v___x_3002_) == 0)
{
lean_object* v_a_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___y_3010_; uint8_t v___x_3037_; 
v_a_3003_ = lean_ctor_get(v___x_3002_, 0);
lean_inc(v_a_3003_);
lean_dec_ref_known(v___x_3002_, 1);
v___x_3004_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3005_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_2998_);
v___x_3006_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3006_, 0, v_a_2998_);
lean_ctor_set(v___x_3006_, 1, v___x_3005_);
v___x_3007_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3008_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3037_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_3037_ == 0)
{
lean_object* v___x_3038_; 
v___x_3038_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_3010_ = v___x_3038_;
goto v___jp_3009_;
}
else
{
lean_object* v___x_3039_; 
v___x_3039_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_3010_ = v___x_3039_;
goto v___jp_3009_;
}
v___jp_3009_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
lean_inc(v___y_3010_);
v___x_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3011_, 0, v___x_3008_);
lean_ctor_set(v___x_3011_, 1, v___y_3010_);
v___x_3012_ = lean_box(0);
v___x_3013_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3011_);
lean_ctor_set(v___x_3013_, 1, v___x_3012_);
v___x_3014_ = l_Lasm_JS_obj(v___x_3013_);
v___x_3015_ = lean_unsigned_to_nat(3u);
v___x_3016_ = lean_mk_empty_array_with_capacity(v___x_3015_);
v___x_3017_ = lean_array_push(v___x_3016_, v___x_3006_);
v___x_3018_ = lean_array_push(v___x_3017_, v___x_3007_);
v___x_3019_ = lean_array_push(v___x_3018_, v___x_3014_);
v___x_3020_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3003_, v___x_3004_, v___x_3019_);
if (lean_obj_tag(v___x_3020_) == 0)
{
lean_object* v___x_3022_; uint8_t v_isShared_3023_; uint8_t v_isSharedCheck_3027_; 
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3027_ == 0)
{
lean_object* v_unused_3028_; 
v_unused_3028_ = lean_ctor_get(v___x_3020_, 0);
lean_dec(v_unused_3028_);
v___x_3022_ = v___x_3020_;
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
else
{
lean_dec(v___x_3020_);
v___x_3022_ = lean_box(0);
v_isShared_3023_ = v_isSharedCheck_3027_;
goto v_resetjp_3021_;
}
v_resetjp_3021_:
{
lean_object* v___x_3025_; 
if (v_isShared_3023_ == 0)
{
lean_ctor_set(v___x_3022_, 0, v_a_2998_);
v___x_3025_ = v___x_3022_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_a_2998_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
else
{
lean_object* v_a_3029_; lean_object* v___x_3031_; uint8_t v_isShared_3032_; uint8_t v_isSharedCheck_3036_; 
lean_dec(v_a_2998_);
v_a_3029_ = lean_ctor_get(v___x_3020_, 0);
v_isSharedCheck_3036_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3036_ == 0)
{
v___x_3031_ = v___x_3020_;
v_isShared_3032_ = v_isSharedCheck_3036_;
goto v_resetjp_3030_;
}
else
{
lean_inc(v_a_3029_);
lean_dec(v___x_3020_);
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
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_dec(v_a_2998_);
v_a_3040_ = lean_ctor_get(v___x_3002_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3002_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_3002_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3002_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
else
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
lean_dec(v_a_2998_);
v_a_3048_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_2999_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_2999_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
v_a_3056_ = lean_ctor_get(v___x_2997_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_2997_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_2997_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_2997_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___boxed(lean_object* v_f_3064_, lean_object* v_a_3065_){
_start:
{
lean_object* v_res_3066_; 
v_res_3066_ = l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn(v_f_3064_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___lam__0(lean_object* v_f_3067_, lean_object* v_args_3068_){
_start:
{
lean_object* v___x_3070_; lean_object* v___x_3071_; 
v___x_3070_ = lean_unsigned_to_nat(0u);
v___x_3071_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_3068_, v___x_3070_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v___x_3073_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3071_, 1);
v___x_3073_ = lean_apply_2(v_f_3067_, v_a_3072_, lean_box(0));
if (lean_obj_tag(v___x_3073_) == 0)
{
lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3081_; 
v_isSharedCheck_3081_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3081_ == 0)
{
lean_object* v_unused_3082_; 
v_unused_3082_ = lean_ctor_get(v___x_3073_, 0);
lean_dec(v_unused_3082_);
v___x_3075_ = v___x_3073_;
v_isShared_3076_ = v_isSharedCheck_3081_;
goto v_resetjp_3074_;
}
else
{
lean_dec(v___x_3073_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3081_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3077_; lean_object* v___x_3079_; 
v___x_3077_ = lean_box(0);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v___x_3077_);
v___x_3079_ = v___x_3075_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3080_; 
v_reuseFailAlloc_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3080_, 0, v___x_3077_);
v___x_3079_ = v_reuseFailAlloc_3080_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
return v___x_3079_;
}
}
}
else
{
lean_object* v_a_3083_; lean_object* v___x_3085_; uint8_t v_isShared_3086_; uint8_t v_isSharedCheck_3090_; 
v_a_3083_ = lean_ctor_get(v___x_3073_, 0);
v_isSharedCheck_3090_ = !lean_is_exclusive(v___x_3073_);
if (v_isSharedCheck_3090_ == 0)
{
v___x_3085_ = v___x_3073_;
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
else
{
lean_inc(v_a_3083_);
lean_dec(v___x_3073_);
v___x_3085_ = lean_box(0);
v_isShared_3086_ = v_isSharedCheck_3090_;
goto v_resetjp_3084_;
}
v_resetjp_3084_:
{
lean_object* v___x_3088_; 
if (v_isShared_3086_ == 0)
{
v___x_3088_ = v___x_3085_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3083_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
}
else
{
lean_object* v_a_3091_; lean_object* v___x_3093_; uint8_t v_isShared_3094_; uint8_t v_isSharedCheck_3098_; 
lean_dec_ref(v_f_3067_);
v_a_3091_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3098_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3098_ == 0)
{
v___x_3093_ = v___x_3071_;
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
else
{
lean_inc(v_a_3091_);
lean_dec(v___x_3071_);
v___x_3093_ = lean_box(0);
v_isShared_3094_ = v_isSharedCheck_3098_;
goto v_resetjp_3092_;
}
v_resetjp_3092_:
{
lean_object* v___x_3096_; 
if (v_isShared_3094_ == 0)
{
v___x_3096_ = v___x_3093_;
goto v_reusejp_3095_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v_a_3091_);
v___x_3096_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3095_;
}
v_reusejp_3095_:
{
return v___x_3096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___lam__0___boxed(lean_object* v_f_3099_, lean_object* v_args_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___lam__0(v_f_3099_, v_args_3100_);
lean_dec_ref(v_args_3100_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn(lean_object* v_f_3103_){
_start:
{
lean_object* v___f_3105_; lean_object* v___x_3106_; 
v___f_3105_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3105_, 0, v_f_3103_);
v___x_3106_ = l_Lasm_JS_Function_ofSyncFn(v___f_3105_);
if (lean_obj_tag(v___x_3106_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3108_; 
v_a_3107_ = lean_ctor_get(v___x_3106_, 0);
lean_inc(v_a_3107_);
lean_dec_ref_known(v___x_3106_, 1);
v___x_3108_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3108_) == 0)
{
lean_object* v_a_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; 
v_a_3109_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_a_3109_);
lean_dec_ref_known(v___x_3108_, 1);
v___x_3110_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3111_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3109_, v___x_3110_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___y_3119_; uint8_t v___x_3146_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
lean_inc(v_a_3112_);
lean_dec_ref_known(v___x_3111_, 1);
v___x_3113_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3114_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_3107_);
v___x_3115_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3115_, 0, v_a_3107_);
lean_ctor_set(v___x_3115_, 1, v___x_3114_);
v___x_3116_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3117_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3146_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_3146_ == 0)
{
lean_object* v___x_3147_; 
v___x_3147_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_3119_ = v___x_3147_;
goto v___jp_3118_;
}
else
{
lean_object* v___x_3148_; 
v___x_3148_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_3119_ = v___x_3148_;
goto v___jp_3118_;
}
v___jp_3118_:
{
lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
lean_inc(v___y_3119_);
v___x_3120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3117_);
lean_ctor_set(v___x_3120_, 1, v___y_3119_);
v___x_3121_ = lean_box(0);
v___x_3122_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3120_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = l_Lasm_JS_obj(v___x_3122_);
v___x_3124_ = lean_unsigned_to_nat(3u);
v___x_3125_ = lean_mk_empty_array_with_capacity(v___x_3124_);
v___x_3126_ = lean_array_push(v___x_3125_, v___x_3115_);
v___x_3127_ = lean_array_push(v___x_3126_, v___x_3116_);
v___x_3128_ = lean_array_push(v___x_3127_, v___x_3123_);
v___x_3129_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3112_, v___x_3113_, v___x_3128_);
if (lean_obj_tag(v___x_3129_) == 0)
{
lean_object* v___x_3131_; uint8_t v_isShared_3132_; uint8_t v_isSharedCheck_3136_; 
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3136_ == 0)
{
lean_object* v_unused_3137_; 
v_unused_3137_ = lean_ctor_get(v___x_3129_, 0);
lean_dec(v_unused_3137_);
v___x_3131_ = v___x_3129_;
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
else
{
lean_dec(v___x_3129_);
v___x_3131_ = lean_box(0);
v_isShared_3132_ = v_isSharedCheck_3136_;
goto v_resetjp_3130_;
}
v_resetjp_3130_:
{
lean_object* v___x_3134_; 
if (v_isShared_3132_ == 0)
{
lean_ctor_set(v___x_3131_, 0, v_a_3107_);
v___x_3134_ = v___x_3131_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_a_3107_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
}
else
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
lean_dec(v_a_3107_);
v_a_3138_ = lean_ctor_get(v___x_3129_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3129_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3140_ = v___x_3129_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_3129_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec(v_a_3107_);
v_a_3149_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3111_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3111_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
lean_dec(v_a_3107_);
v_a_3157_ = lean_ctor_get(v___x_3108_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3108_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_3108_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3108_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
v_a_3165_ = lean_ctor_get(v___x_3106_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3106_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3106_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3106_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___boxed(lean_object* v_f_3173_, lean_object* v_a_3174_){
_start:
{
lean_object* v_res_3175_; 
v_res_3175_ = l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn(v_f_3173_);
return v_res_3175_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofFn(lean_object* v_f_3183_){
_start:
{
lean_object* v___f_3185_; lean_object* v___f_3186_; lean_object* v___f_3187_; lean_object* v___x_3188_; 
v___f_3185_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0));
v___f_3186_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerOpen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3186_, 0, v_f_3183_);
lean_closure_set(v___f_3186_, 1, v___f_3185_);
v___f_3187_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3187_, 0, v___f_3186_);
v___x_3188_ = l_Lasm_JS_Function_ofFn(v___f_3187_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; lean_object* v___x_3190_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref_known(v___x_3188_, 1);
v___x_3190_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref_known(v___x_3190_, 1);
v___x_3192_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3193_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3191_, v___x_3192_);
if (lean_obj_tag(v___x_3193_) == 0)
{
lean_object* v_a_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___y_3201_; uint8_t v___x_3228_; 
v_a_3194_ = lean_ctor_get(v___x_3193_, 0);
lean_inc(v_a_3194_);
lean_dec_ref_known(v___x_3193_, 1);
v___x_3195_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3196_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_3189_);
v___x_3197_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3197_, 0, v_a_3189_);
lean_ctor_set(v___x_3197_, 1, v___x_3196_);
v___x_3198_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3199_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3228_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_3228_ == 0)
{
lean_object* v___x_3229_; 
v___x_3229_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_3201_ = v___x_3229_;
goto v___jp_3200_;
}
else
{
lean_object* v___x_3230_; 
v___x_3230_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_3201_ = v___x_3230_;
goto v___jp_3200_;
}
v___jp_3200_:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_inc(v___y_3201_);
v___x_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3199_);
lean_ctor_set(v___x_3202_, 1, v___y_3201_);
v___x_3203_ = lean_box(0);
v___x_3204_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3204_, 0, v___x_3202_);
lean_ctor_set(v___x_3204_, 1, v___x_3203_);
v___x_3205_ = l_Lasm_JS_obj(v___x_3204_);
v___x_3206_ = lean_unsigned_to_nat(3u);
v___x_3207_ = lean_mk_empty_array_with_capacity(v___x_3206_);
v___x_3208_ = lean_array_push(v___x_3207_, v___x_3197_);
v___x_3209_ = lean_array_push(v___x_3208_, v___x_3198_);
v___x_3210_ = lean_array_push(v___x_3209_, v___x_3205_);
v___x_3211_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3194_, v___x_3195_, v___x_3210_);
if (lean_obj_tag(v___x_3211_) == 0)
{
lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3218_; 
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3218_ == 0)
{
lean_object* v_unused_3219_; 
v_unused_3219_ = lean_ctor_get(v___x_3211_, 0);
lean_dec(v_unused_3219_);
v___x_3213_ = v___x_3211_;
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
else
{
lean_dec(v___x_3211_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3218_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
lean_object* v___x_3216_; 
if (v_isShared_3214_ == 0)
{
lean_ctor_set(v___x_3213_, 0, v_a_3189_);
v___x_3216_ = v___x_3213_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_a_3189_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
else
{
lean_object* v_a_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3227_; 
lean_dec(v_a_3189_);
v_a_3220_ = lean_ctor_get(v___x_3211_, 0);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3211_);
if (v_isSharedCheck_3227_ == 0)
{
v___x_3222_ = v___x_3211_;
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_a_3220_);
lean_dec(v___x_3211_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3227_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v_a_3220_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
}
else
{
lean_object* v_a_3231_; lean_object* v___x_3233_; uint8_t v_isShared_3234_; uint8_t v_isSharedCheck_3238_; 
lean_dec(v_a_3189_);
v_a_3231_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3233_ = v___x_3193_;
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
else
{
lean_inc(v_a_3231_);
lean_dec(v___x_3193_);
v___x_3233_ = lean_box(0);
v_isShared_3234_ = v_isSharedCheck_3238_;
goto v_resetjp_3232_;
}
v_resetjp_3232_:
{
lean_object* v___x_3236_; 
if (v_isShared_3234_ == 0)
{
v___x_3236_ = v___x_3233_;
goto v_reusejp_3235_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v_a_3231_);
v___x_3236_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3235_;
}
v_reusejp_3235_:
{
return v___x_3236_;
}
}
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec(v_a_3189_);
v_a_3239_ = lean_ctor_get(v___x_3190_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3190_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3190_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3190_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
v_a_3247_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3188_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3188_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofFn___boxed(lean_object* v_f_3255_, lean_object* v_a_3256_){
_start:
{
lean_object* v_res_3257_; 
v_res_3257_ = l_Lasm_JS_Bun_WebSocketHandlerDrain_ofFn(v_f_3255_);
return v_res_3257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofSyncFn(lean_object* v_f_3258_){
_start:
{
lean_object* v___f_3260_; lean_object* v___x_3261_; 
v___f_3260_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerOpen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3260_, 0, v_f_3258_);
v___x_3261_ = l_Lasm_JS_Function_ofSyncFn(v___f_3260_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; lean_object* v___x_3263_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref_known(v___x_3261_, 1);
v___x_3263_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3263_) == 0)
{
lean_object* v_a_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; 
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_a_3264_);
lean_dec_ref_known(v___x_3263_, 1);
v___x_3265_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3266_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3264_, v___x_3265_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___y_3274_; uint8_t v___x_3301_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
v___x_3268_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3269_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_3262_);
v___x_3270_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3270_, 0, v_a_3262_);
lean_ctor_set(v___x_3270_, 1, v___x_3269_);
v___x_3271_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3272_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3301_ = lean_uint8_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__7);
if (v___x_3301_ == 0)
{
lean_object* v___x_3302_; 
v___x_3302_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__8);
v___y_3274_ = v___x_3302_;
goto v___jp_3273_;
}
else
{
lean_object* v___x_3303_; 
v___x_3303_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10, &l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__10);
v___y_3274_ = v___x_3303_;
goto v___jp_3273_;
}
v___jp_3273_:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
lean_inc(v___y_3274_);
v___x_3275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3272_);
lean_ctor_set(v___x_3275_, 1, v___y_3274_);
v___x_3276_ = lean_box(0);
v___x_3277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3275_);
lean_ctor_set(v___x_3277_, 1, v___x_3276_);
v___x_3278_ = l_Lasm_JS_obj(v___x_3277_);
v___x_3279_ = lean_unsigned_to_nat(3u);
v___x_3280_ = lean_mk_empty_array_with_capacity(v___x_3279_);
v___x_3281_ = lean_array_push(v___x_3280_, v___x_3270_);
v___x_3282_ = lean_array_push(v___x_3281_, v___x_3271_);
v___x_3283_ = lean_array_push(v___x_3282_, v___x_3278_);
v___x_3284_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3267_, v___x_3268_, v___x_3283_);
if (lean_obj_tag(v___x_3284_) == 0)
{
lean_object* v___x_3286_; uint8_t v_isShared_3287_; uint8_t v_isSharedCheck_3291_; 
v_isSharedCheck_3291_ = !lean_is_exclusive(v___x_3284_);
if (v_isSharedCheck_3291_ == 0)
{
lean_object* v_unused_3292_; 
v_unused_3292_ = lean_ctor_get(v___x_3284_, 0);
lean_dec(v_unused_3292_);
v___x_3286_ = v___x_3284_;
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
else
{
lean_dec(v___x_3284_);
v___x_3286_ = lean_box(0);
v_isShared_3287_ = v_isSharedCheck_3291_;
goto v_resetjp_3285_;
}
v_resetjp_3285_:
{
lean_object* v___x_3289_; 
if (v_isShared_3287_ == 0)
{
lean_ctor_set(v___x_3286_, 0, v_a_3262_);
v___x_3289_ = v___x_3286_;
goto v_reusejp_3288_;
}
else
{
lean_object* v_reuseFailAlloc_3290_; 
v_reuseFailAlloc_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3290_, 0, v_a_3262_);
v___x_3289_ = v_reuseFailAlloc_3290_;
goto v_reusejp_3288_;
}
v_reusejp_3288_:
{
return v___x_3289_;
}
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_dec(v_a_3262_);
v_a_3293_ = lean_ctor_get(v___x_3284_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3284_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3284_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3284_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
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
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
else
{
lean_object* v_a_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3311_; 
lean_dec(v_a_3262_);
v_a_3304_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3306_ = v___x_3266_;
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_a_3304_);
lean_dec(v___x_3266_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v___x_3309_; 
if (v_isShared_3307_ == 0)
{
v___x_3309_ = v___x_3306_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_a_3304_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
else
{
lean_object* v_a_3312_; lean_object* v___x_3314_; uint8_t v_isShared_3315_; uint8_t v_isSharedCheck_3319_; 
lean_dec(v_a_3262_);
v_a_3312_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3314_ = v___x_3263_;
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
else
{
lean_inc(v_a_3312_);
lean_dec(v___x_3263_);
v___x_3314_ = lean_box(0);
v_isShared_3315_ = v_isSharedCheck_3319_;
goto v_resetjp_3313_;
}
v_resetjp_3313_:
{
lean_object* v___x_3317_; 
if (v_isShared_3315_ == 0)
{
v___x_3317_ = v___x_3314_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_a_3312_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
return v___x_3317_;
}
}
}
}
else
{
lean_object* v_a_3320_; lean_object* v___x_3322_; uint8_t v_isShared_3323_; uint8_t v_isSharedCheck_3327_; 
v_a_3320_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3327_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3327_ == 0)
{
v___x_3322_ = v___x_3261_;
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
else
{
lean_inc(v_a_3320_);
lean_dec(v___x_3261_);
v___x_3322_ = lean_box(0);
v_isShared_3323_ = v_isSharedCheck_3327_;
goto v_resetjp_3321_;
}
v_resetjp_3321_:
{
lean_object* v___x_3325_; 
if (v_isShared_3323_ == 0)
{
v___x_3325_ = v___x_3322_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3326_; 
v_reuseFailAlloc_3326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3326_, 0, v_a_3320_);
v___x_3325_ = v_reuseFailAlloc_3326_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
return v___x_3325_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerDrain_ofSyncFn___boxed(lean_object* v_f_3328_, lean_object* v_a_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = l_Lasm_JS_Bun_WebSocketHandlerDrain_ofSyncFn(v_f_3328_);
return v_res_3330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__1(lean_object* v_f_3338_, lean_object* v_a_3339_, double v_a_3340_, lean_object* v___f_3341_, lean_object* v_x_3342_){
_start:
{
if (lean_obj_tag(v_x_3342_) == 0)
{
lean_object* v_a_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3352_; 
lean_dec_ref(v___f_3341_);
lean_dec(v_a_3339_);
lean_dec_ref(v_f_3338_);
v_a_3344_ = lean_ctor_get(v_x_3342_, 0);
v_isSharedCheck_3352_ = !lean_is_exclusive(v_x_3342_);
if (v_isSharedCheck_3352_ == 0)
{
v___x_3346_ = v_x_3342_;
v_isShared_3347_ = v_isSharedCheck_3352_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_a_3344_);
lean_dec(v_x_3342_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3352_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3351_; 
v_reuseFailAlloc_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3351_, 0, v_a_3344_);
v___x_3349_ = v_reuseFailAlloc_3351_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
lean_object* v___x_3350_; 
v___x_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3350_, 0, v___x_3349_);
return v___x_3350_;
}
}
}
else
{
lean_object* v_a_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v_a_3353_ = lean_ctor_get(v_x_3342_, 0);
lean_inc(v_a_3353_);
lean_dec_ref_known(v_x_3342_, 1);
v___x_3354_ = lean_unsigned_to_nat(0u);
v___x_3355_ = 0;
v___x_3356_ = lean_box_float(v_a_3340_);
v___x_3357_ = lean_apply_4(v_f_3338_, v_a_3339_, v___x_3356_, v_a_3353_, lean_box(0));
v___x_3358_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3354_, v___x_3355_, v___x_3357_, v___f_3341_);
return v___x_3358_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__1___boxed(lean_object* v_f_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_, lean_object* v___f_3362_, lean_object* v_x_3363_, lean_object* v___y_3364_){
_start:
{
double v_a_1092__boxed_3365_; lean_object* v_res_3366_; 
v_a_1092__boxed_3365_ = lean_unbox_float(v_a_3361_);
lean_dec_ref(v_a_3361_);
v_res_3366_ = l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__1(v_f_3359_, v_a_3360_, v_a_1092__boxed_3365_, v___f_3362_, v_x_3363_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__0(lean_object* v_f_3367_, lean_object* v_a_3368_, lean_object* v___f_3369_, lean_object* v_args_3370_, lean_object* v_x_3371_){
_start:
{
if (lean_obj_tag(v_x_3371_) == 0)
{
lean_object* v_a_3373_; lean_object* v___x_3375_; uint8_t v_isShared_3376_; uint8_t v_isSharedCheck_3381_; 
lean_dec_ref(v___f_3369_);
lean_dec(v_a_3368_);
lean_dec_ref(v_f_3367_);
v_a_3373_ = lean_ctor_get(v_x_3371_, 0);
v_isSharedCheck_3381_ = !lean_is_exclusive(v_x_3371_);
if (v_isSharedCheck_3381_ == 0)
{
v___x_3375_ = v_x_3371_;
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
else
{
lean_inc(v_a_3373_);
lean_dec(v_x_3371_);
v___x_3375_ = lean_box(0);
v_isShared_3376_ = v_isSharedCheck_3381_;
goto v_resetjp_3374_;
}
v_resetjp_3374_:
{
lean_object* v___x_3378_; 
if (v_isShared_3376_ == 0)
{
v___x_3378_ = v___x_3375_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3380_; 
v_reuseFailAlloc_3380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3380_, 0, v_a_3373_);
v___x_3378_ = v_reuseFailAlloc_3380_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
lean_object* v___x_3379_; 
v___x_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3379_, 0, v___x_3378_);
return v___x_3379_;
}
}
}
else
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3403_; 
v_a_3382_ = lean_ctor_get(v_x_3371_, 0);
v_isSharedCheck_3403_ = !lean_is_exclusive(v_x_3371_);
if (v_isSharedCheck_3403_ == 0)
{
v___x_3384_ = v_x_3371_;
v_isShared_3385_ = v_isSharedCheck_3403_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v_x_3371_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3403_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
lean_object* v___f_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; uint8_t v___x_3389_; lean_object* v_val_3391_; lean_object* v___x_3394_; 
v___f_3386_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__1___boxed), 6, 4);
lean_closure_set(v___f_3386_, 0, v_f_3367_);
lean_closure_set(v___f_3386_, 1, v_a_3368_);
lean_closure_set(v___f_3386_, 2, v_a_3382_);
lean_closure_set(v___f_3386_, 3, v___f_3369_);
v___x_3387_ = lean_unsigned_to_nat(2u);
v___x_3388_ = lean_unsigned_to_nat(0u);
v___x_3389_ = 0;
v___x_3394_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_UdpSocketHandlerData_ofFn_spec__1(v_args_3370_, v___x_3387_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v_a_3395_; lean_object* v___x_3397_; 
v_a_3395_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_a_3395_);
lean_dec_ref_known(v___x_3394_, 1);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v_a_3395_);
v___x_3397_ = v___x_3384_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v_a_3395_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
v_val_3391_ = v___x_3397_;
goto v___jp_3390_;
}
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3401_; 
v_a_3399_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_a_3399_);
lean_dec_ref_known(v___x_3394_, 1);
if (v_isShared_3385_ == 0)
{
lean_ctor_set_tag(v___x_3384_, 0);
lean_ctor_set(v___x_3384_, 0, v_a_3399_);
v___x_3401_ = v___x_3384_;
goto v_reusejp_3400_;
}
else
{
lean_object* v_reuseFailAlloc_3402_; 
v_reuseFailAlloc_3402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3402_, 0, v_a_3399_);
v___x_3401_ = v_reuseFailAlloc_3402_;
goto v_reusejp_3400_;
}
v_reusejp_3400_:
{
v_val_3391_ = v___x_3401_;
goto v___jp_3390_;
}
}
v___jp_3390_:
{
lean_object* v___x_3392_; lean_object* v___x_3393_; 
v___x_3392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3392_, 0, v_val_3391_);
v___x_3393_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3388_, v___x_3389_, v___x_3392_, v___f_3386_);
return v___x_3393_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__0___boxed(lean_object* v_f_3404_, lean_object* v_a_3405_, lean_object* v___f_3406_, lean_object* v_args_3407_, lean_object* v_x_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__0(v_f_3404_, v_a_3405_, v___f_3406_, v_args_3407_, v_x_3408_);
lean_dec_ref(v_args_3407_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__2(lean_object* v_f_3411_, lean_object* v___f_3412_, lean_object* v_args_3413_, lean_object* v_x_3414_){
_start:
{
if (lean_obj_tag(v_x_3414_) == 0)
{
lean_object* v_a_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3424_; 
lean_dec_ref(v_args_3413_);
lean_dec_ref(v___f_3412_);
lean_dec_ref(v_f_3411_);
v_a_3416_ = lean_ctor_get(v_x_3414_, 0);
v_isSharedCheck_3424_ = !lean_is_exclusive(v_x_3414_);
if (v_isSharedCheck_3424_ == 0)
{
v___x_3418_ = v_x_3414_;
v_isShared_3419_ = v_isSharedCheck_3424_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_a_3416_);
lean_dec(v_x_3414_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3424_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___x_3421_; 
if (v_isShared_3419_ == 0)
{
v___x_3421_ = v___x_3418_;
goto v_reusejp_3420_;
}
else
{
lean_object* v_reuseFailAlloc_3423_; 
v_reuseFailAlloc_3423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3423_, 0, v_a_3416_);
v___x_3421_ = v_reuseFailAlloc_3423_;
goto v_reusejp_3420_;
}
v_reusejp_3420_:
{
lean_object* v___x_3422_; 
v___x_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3421_);
return v___x_3422_;
}
}
}
else
{
lean_object* v_a_3425_; lean_object* v___x_3427_; uint8_t v_isShared_3428_; uint8_t v_isSharedCheck_3446_; 
v_a_3425_ = lean_ctor_get(v_x_3414_, 0);
v_isSharedCheck_3446_ = !lean_is_exclusive(v_x_3414_);
if (v_isSharedCheck_3446_ == 0)
{
v___x_3427_ = v_x_3414_;
v_isShared_3428_ = v_isSharedCheck_3446_;
goto v_resetjp_3426_;
}
else
{
lean_inc(v_a_3425_);
lean_dec(v_x_3414_);
v___x_3427_ = lean_box(0);
v_isShared_3428_ = v_isSharedCheck_3446_;
goto v_resetjp_3426_;
}
v_resetjp_3426_:
{
lean_object* v___f_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; uint8_t v___x_3432_; lean_object* v_val_3434_; lean_object* v___x_3437_; 
lean_inc_ref(v_args_3413_);
v___f_3429_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__0___boxed), 6, 4);
lean_closure_set(v___f_3429_, 0, v_f_3411_);
lean_closure_set(v___f_3429_, 1, v_a_3425_);
lean_closure_set(v___f_3429_, 2, v___f_3412_);
lean_closure_set(v___f_3429_, 3, v_args_3413_);
v___x_3430_ = lean_unsigned_to_nat(1u);
v___x_3431_ = lean_unsigned_to_nat(0u);
v___x_3432_ = 0;
v___x_3437_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_TerminalOptionsExit_ofFn_spec__1(v_args_3413_, v___x_3430_);
lean_dec_ref(v_args_3413_);
if (lean_obj_tag(v___x_3437_) == 0)
{
lean_object* v_a_3438_; lean_object* v___x_3440_; 
v_a_3438_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3438_);
lean_dec_ref_known(v___x_3437_, 1);
if (v_isShared_3428_ == 0)
{
lean_ctor_set(v___x_3427_, 0, v_a_3438_);
v___x_3440_ = v___x_3427_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3441_; 
v_reuseFailAlloc_3441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3441_, 0, v_a_3438_);
v___x_3440_ = v_reuseFailAlloc_3441_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
v_val_3434_ = v___x_3440_;
goto v___jp_3433_;
}
}
else
{
lean_object* v_a_3442_; lean_object* v___x_3444_; 
v_a_3442_ = lean_ctor_get(v___x_3437_, 0);
lean_inc(v_a_3442_);
lean_dec_ref_known(v___x_3437_, 1);
if (v_isShared_3428_ == 0)
{
lean_ctor_set_tag(v___x_3427_, 0);
lean_ctor_set(v___x_3427_, 0, v_a_3442_);
v___x_3444_ = v___x_3427_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3445_; 
v_reuseFailAlloc_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3445_, 0, v_a_3442_);
v___x_3444_ = v_reuseFailAlloc_3445_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
v_val_3434_ = v___x_3444_;
goto v___jp_3433_;
}
}
v___jp_3433_:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; 
v___x_3435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3435_, 0, v_val_3434_);
v___x_3436_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3431_, v___x_3432_, v___x_3435_, v___f_3429_);
return v___x_3436_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__2___boxed(lean_object* v_f_3447_, lean_object* v___f_3448_, lean_object* v_args_3449_, lean_object* v_x_3450_, lean_object* v___y_3451_){
_start:
{
lean_object* v_res_3452_; 
v_res_3452_ = l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__2(v_f_3447_, v___f_3448_, v_args_3449_, v_x_3450_);
return v_res_3452_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__3(lean_object* v_f_3453_, lean_object* v___f_3454_, lean_object* v_args_3455_){
_start:
{
lean_object* v___f_3457_; lean_object* v___x_3458_; uint8_t v___x_3459_; lean_object* v_val_3461_; lean_object* v___x_3464_; 
lean_inc_ref(v_args_3455_);
v___f_3457_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_3457_, 0, v_f_3453_);
lean_closure_set(v___f_3457_, 1, v___f_3454_);
lean_closure_set(v___f_3457_, 2, v_args_3455_);
v___x_3458_ = lean_unsigned_to_nat(0u);
v___x_3459_ = 0;
v___x_3464_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_3455_, v___x_3458_);
lean_dec_ref(v_args_3455_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3472_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3472_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3472_ == 0)
{
v___x_3467_ = v___x_3464_;
v_isShared_3468_ = v_isSharedCheck_3472_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_a_3465_);
lean_dec(v___x_3464_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3472_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___x_3470_; 
if (v_isShared_3468_ == 0)
{
lean_ctor_set_tag(v___x_3467_, 1);
v___x_3470_ = v___x_3467_;
goto v_reusejp_3469_;
}
else
{
lean_object* v_reuseFailAlloc_3471_; 
v_reuseFailAlloc_3471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3471_, 0, v_a_3465_);
v___x_3470_ = v_reuseFailAlloc_3471_;
goto v_reusejp_3469_;
}
v_reusejp_3469_:
{
v_val_3461_ = v___x_3470_;
goto v___jp_3460_;
}
}
}
else
{
lean_object* v_a_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3480_; 
v_a_3473_ = lean_ctor_get(v___x_3464_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3464_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3475_ = v___x_3464_;
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_a_3473_);
lean_dec(v___x_3464_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3480_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___x_3478_; 
if (v_isShared_3476_ == 0)
{
lean_ctor_set_tag(v___x_3475_, 0);
v___x_3478_ = v___x_3475_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v_a_3473_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
v_val_3461_ = v___x_3478_;
goto v___jp_3460_;
}
}
}
v___jp_3460_:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; 
v___x_3462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3462_, 0, v_val_3461_);
v___x_3463_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3458_, v___x_3459_, v___x_3462_, v___f_3457_);
return v___x_3463_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__3___boxed(lean_object* v_f_3481_, lean_object* v___f_3482_, lean_object* v_args_3483_, lean_object* v___y_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__3(v_f_3481_, v___f_3482_, v_args_3483_);
return v_res_3485_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0(void){
_start:
{
lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3486_ = lean_unsigned_to_nat(3u);
v___x_3487_ = lean_nat_to_int(v___x_3486_);
return v___x_3487_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__1(void){
_start:
{
lean_object* v___x_3488_; lean_object* v___x_3489_; 
v___x_3488_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0);
v___x_3489_ = lean_nat_abs(v___x_3488_);
return v___x_3489_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2(void){
_start:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; uint8_t v___x_3492_; 
v___x_3490_ = lean_cstr_to_nat("9007199254740991");
v___x_3491_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__1, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__1);
v___x_3492_ = lean_nat_dec_le(v___x_3491_, v___x_3490_);
return v___x_3492_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3(void){
_start:
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
v___x_3493_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0);
v___x_3494_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
return v___x_3494_;
}
}
static double _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__4(void){
_start:
{
lean_object* v___x_3495_; double v___x_3496_; 
v___x_3495_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__0);
v___x_3496_ = l_Float_ofInt(v___x_3495_);
return v___x_3496_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5(void){
_start:
{
double v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = lean_float_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__4, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__4);
v___x_3498_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_3498_, 0, v___x_3497_);
return v___x_3498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn(lean_object* v_f_3499_){
_start:
{
lean_object* v___f_3501_; lean_object* v___f_3502_; lean_object* v___x_3503_; 
v___f_3501_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0));
v___f_3502_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_3502_, 0, v_f_3499_);
lean_closure_set(v___f_3502_, 1, v___f_3501_);
v___x_3503_ = l_Lasm_JS_Function_ofFn(v___f_3502_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v___x_3505_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref_known(v___x_3503_, 1);
v___x_3505_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3505_) == 0)
{
lean_object* v_a_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; 
v_a_3506_ = lean_ctor_get(v___x_3505_, 0);
lean_inc(v_a_3506_);
lean_dec_ref_known(v___x_3505_, 1);
v___x_3507_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3508_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3506_, v___x_3507_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_object* v_a_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___y_3516_; uint8_t v___x_3543_; 
v_a_3509_ = lean_ctor_get(v___x_3508_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v___x_3508_, 1);
v___x_3510_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3511_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_3504_);
v___x_3512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3512_, 0, v_a_3504_);
lean_ctor_set(v___x_3512_, 1, v___x_3511_);
v___x_3513_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3514_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3543_ = lean_uint8_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2);
if (v___x_3543_ == 0)
{
lean_object* v___x_3544_; 
v___x_3544_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3);
v___y_3516_ = v___x_3544_;
goto v___jp_3515_;
}
else
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5);
v___y_3516_ = v___x_3545_;
goto v___jp_3515_;
}
v___jp_3515_:
{
lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
lean_inc(v___y_3516_);
v___x_3517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3514_);
lean_ctor_set(v___x_3517_, 1, v___y_3516_);
v___x_3518_ = lean_box(0);
v___x_3519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3519_, 0, v___x_3517_);
lean_ctor_set(v___x_3519_, 1, v___x_3518_);
v___x_3520_ = l_Lasm_JS_obj(v___x_3519_);
v___x_3521_ = lean_unsigned_to_nat(3u);
v___x_3522_ = lean_mk_empty_array_with_capacity(v___x_3521_);
v___x_3523_ = lean_array_push(v___x_3522_, v___x_3512_);
v___x_3524_ = lean_array_push(v___x_3523_, v___x_3513_);
v___x_3525_ = lean_array_push(v___x_3524_, v___x_3520_);
v___x_3526_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3509_, v___x_3510_, v___x_3525_);
if (lean_obj_tag(v___x_3526_) == 0)
{
lean_object* v___x_3528_; uint8_t v_isShared_3529_; uint8_t v_isSharedCheck_3533_; 
v_isSharedCheck_3533_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3533_ == 0)
{
lean_object* v_unused_3534_; 
v_unused_3534_ = lean_ctor_get(v___x_3526_, 0);
lean_dec(v_unused_3534_);
v___x_3528_ = v___x_3526_;
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
else
{
lean_dec(v___x_3526_);
v___x_3528_ = lean_box(0);
v_isShared_3529_ = v_isSharedCheck_3533_;
goto v_resetjp_3527_;
}
v_resetjp_3527_:
{
lean_object* v___x_3531_; 
if (v_isShared_3529_ == 0)
{
lean_ctor_set(v___x_3528_, 0, v_a_3504_);
v___x_3531_ = v___x_3528_;
goto v_reusejp_3530_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v_a_3504_);
v___x_3531_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3530_;
}
v_reusejp_3530_:
{
return v___x_3531_;
}
}
}
else
{
lean_object* v_a_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3542_; 
lean_dec(v_a_3504_);
v_a_3535_ = lean_ctor_get(v___x_3526_, 0);
v_isSharedCheck_3542_ = !lean_is_exclusive(v___x_3526_);
if (v_isSharedCheck_3542_ == 0)
{
v___x_3537_ = v___x_3526_;
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_a_3535_);
lean_dec(v___x_3526_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3542_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3540_; 
if (v_isShared_3538_ == 0)
{
v___x_3540_ = v___x_3537_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v_a_3535_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
}
else
{
lean_object* v_a_3546_; lean_object* v___x_3548_; uint8_t v_isShared_3549_; uint8_t v_isSharedCheck_3553_; 
lean_dec(v_a_3504_);
v_a_3546_ = lean_ctor_get(v___x_3508_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3508_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3548_ = v___x_3508_;
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
else
{
lean_inc(v_a_3546_);
lean_dec(v___x_3508_);
v___x_3548_ = lean_box(0);
v_isShared_3549_ = v_isSharedCheck_3553_;
goto v_resetjp_3547_;
}
v_resetjp_3547_:
{
lean_object* v___x_3551_; 
if (v_isShared_3549_ == 0)
{
v___x_3551_ = v___x_3548_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v_a_3546_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
}
else
{
lean_object* v_a_3554_; lean_object* v___x_3556_; uint8_t v_isShared_3557_; uint8_t v_isSharedCheck_3561_; 
lean_dec(v_a_3504_);
v_a_3554_ = lean_ctor_get(v___x_3505_, 0);
v_isSharedCheck_3561_ = !lean_is_exclusive(v___x_3505_);
if (v_isSharedCheck_3561_ == 0)
{
v___x_3556_ = v___x_3505_;
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
else
{
lean_inc(v_a_3554_);
lean_dec(v___x_3505_);
v___x_3556_ = lean_box(0);
v_isShared_3557_ = v_isSharedCheck_3561_;
goto v_resetjp_3555_;
}
v_resetjp_3555_:
{
lean_object* v___x_3559_; 
if (v_isShared_3557_ == 0)
{
v___x_3559_ = v___x_3556_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v_a_3554_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
else
{
lean_object* v_a_3562_; lean_object* v___x_3564_; uint8_t v_isShared_3565_; uint8_t v_isSharedCheck_3569_; 
v_a_3562_ = lean_ctor_get(v___x_3503_, 0);
v_isSharedCheck_3569_ = !lean_is_exclusive(v___x_3503_);
if (v_isSharedCheck_3569_ == 0)
{
v___x_3564_ = v___x_3503_;
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
else
{
lean_inc(v_a_3562_);
lean_dec(v___x_3503_);
v___x_3564_ = lean_box(0);
v_isShared_3565_ = v_isSharedCheck_3569_;
goto v_resetjp_3563_;
}
v_resetjp_3563_:
{
lean_object* v___x_3567_; 
if (v_isShared_3565_ == 0)
{
v___x_3567_ = v___x_3564_;
goto v_reusejp_3566_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_a_3562_);
v___x_3567_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3566_;
}
v_reusejp_3566_:
{
return v___x_3567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___boxed(lean_object* v_f_3570_, lean_object* v_a_3571_){
_start:
{
lean_object* v_res_3572_; 
v_res_3572_ = l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn(v_f_3570_);
return v_res_3572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___lam__0(lean_object* v_f_3573_, lean_object* v_args_3574_){
_start:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3576_ = lean_unsigned_to_nat(0u);
v___x_3577_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_3574_, v___x_3576_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
lean_inc(v_a_3578_);
lean_dec_ref_known(v___x_3577_, 1);
v___x_3579_ = lean_unsigned_to_nat(1u);
v___x_3580_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_TerminalOptionsExit_ofFn_spec__1(v_args_3574_, v___x_3579_);
if (lean_obj_tag(v___x_3580_) == 0)
{
lean_object* v_a_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v_a_3581_ = lean_ctor_get(v___x_3580_, 0);
lean_inc(v_a_3581_);
lean_dec_ref_known(v___x_3580_, 1);
v___x_3582_ = lean_unsigned_to_nat(2u);
v___x_3583_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_UdpSocketHandlerData_ofFn_spec__1(v_args_3574_, v___x_3582_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_object* v_a_3584_; lean_object* v___x_3585_; 
v_a_3584_ = lean_ctor_get(v___x_3583_, 0);
lean_inc(v_a_3584_);
lean_dec_ref_known(v___x_3583_, 1);
v___x_3585_ = lean_apply_4(v_f_3573_, v_a_3578_, v_a_3581_, v_a_3584_, lean_box(0));
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3593_; 
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3593_ == 0)
{
lean_object* v_unused_3594_; 
v_unused_3594_ = lean_ctor_get(v___x_3585_, 0);
lean_dec(v_unused_3594_);
v___x_3587_ = v___x_3585_;
v_isShared_3588_ = v_isSharedCheck_3593_;
goto v_resetjp_3586_;
}
else
{
lean_dec(v___x_3585_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3593_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3589_; lean_object* v___x_3591_; 
v___x_3589_ = lean_box(0);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v___x_3589_);
v___x_3591_ = v___x_3587_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3589_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3602_; 
v_a_3595_ = lean_ctor_get(v___x_3585_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3597_ = v___x_3585_;
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3585_);
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
else
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3610_; 
lean_dec(v_a_3581_);
lean_dec(v_a_3578_);
lean_dec_ref(v_f_3573_);
v_a_3603_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3605_ = v___x_3583_;
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3583_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3608_; 
if (v_isShared_3606_ == 0)
{
v___x_3608_ = v___x_3605_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v_a_3603_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
}
else
{
lean_object* v_a_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3618_; 
lean_dec(v_a_3578_);
lean_dec_ref(v_f_3573_);
v_a_3611_ = lean_ctor_get(v___x_3580_, 0);
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3580_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3613_ = v___x_3580_;
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_a_3611_);
lean_dec(v___x_3580_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
lean_object* v___x_3616_; 
if (v_isShared_3614_ == 0)
{
v___x_3616_ = v___x_3613_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v_a_3611_);
v___x_3616_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
return v___x_3616_;
}
}
}
}
else
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3626_; 
lean_dec_ref(v_f_3573_);
v_a_3619_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3621_ = v___x_3577_;
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3577_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3624_; 
if (v_isShared_3622_ == 0)
{
v___x_3624_ = v___x_3621_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3619_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
return v___x_3624_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___lam__0___boxed(lean_object* v_f_3627_, lean_object* v_args_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v_res_3630_; 
v_res_3630_ = l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___lam__0(v_f_3627_, v_args_3628_);
lean_dec_ref(v_args_3628_);
return v_res_3630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn(lean_object* v_f_3631_){
_start:
{
lean_object* v___f_3633_; lean_object* v___x_3634_; 
v___f_3633_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3633_, 0, v_f_3631_);
v___x_3634_ = l_Lasm_JS_Function_ofSyncFn(v___f_3633_);
if (lean_obj_tag(v___x_3634_) == 0)
{
lean_object* v_a_3635_; lean_object* v___x_3636_; 
v_a_3635_ = lean_ctor_get(v___x_3634_, 0);
lean_inc(v_a_3635_);
lean_dec_ref_known(v___x_3634_, 1);
v___x_3636_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3636_) == 0)
{
lean_object* v_a_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; 
v_a_3637_ = lean_ctor_get(v___x_3636_, 0);
lean_inc(v_a_3637_);
lean_dec_ref_known(v___x_3636_, 1);
v___x_3638_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3639_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3637_, v___x_3638_);
if (lean_obj_tag(v___x_3639_) == 0)
{
lean_object* v_a_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___y_3647_; uint8_t v___x_3674_; 
v_a_3640_ = lean_ctor_get(v___x_3639_, 0);
lean_inc(v_a_3640_);
lean_dec_ref_known(v___x_3639_, 1);
v___x_3641_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3642_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_3635_);
v___x_3643_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3643_, 0, v_a_3635_);
lean_ctor_set(v___x_3643_, 1, v___x_3642_);
v___x_3644_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3645_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3674_ = lean_uint8_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__2);
if (v___x_3674_ == 0)
{
lean_object* v___x_3675_; 
v___x_3675_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__3);
v___y_3647_ = v___x_3675_;
goto v___jp_3646_;
}
else
{
lean_object* v___x_3676_; 
v___x_3676_ = lean_obj_once(&l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5, &l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5_once, _init_l_Lasm_JS_Bun_WebSocketHandlerClose_ofFn___closed__5);
v___y_3647_ = v___x_3676_;
goto v___jp_3646_;
}
v___jp_3646_:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
lean_inc(v___y_3647_);
v___x_3648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3648_, 0, v___x_3645_);
lean_ctor_set(v___x_3648_, 1, v___y_3647_);
v___x_3649_ = lean_box(0);
v___x_3650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3648_);
lean_ctor_set(v___x_3650_, 1, v___x_3649_);
v___x_3651_ = l_Lasm_JS_obj(v___x_3650_);
v___x_3652_ = lean_unsigned_to_nat(3u);
v___x_3653_ = lean_mk_empty_array_with_capacity(v___x_3652_);
v___x_3654_ = lean_array_push(v___x_3653_, v___x_3643_);
v___x_3655_ = lean_array_push(v___x_3654_, v___x_3644_);
v___x_3656_ = lean_array_push(v___x_3655_, v___x_3651_);
v___x_3657_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3640_, v___x_3641_, v___x_3656_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3664_; 
v_isSharedCheck_3664_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3664_ == 0)
{
lean_object* v_unused_3665_; 
v_unused_3665_ = lean_ctor_get(v___x_3657_, 0);
lean_dec(v_unused_3665_);
v___x_3659_ = v___x_3657_;
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
else
{
lean_dec(v___x_3657_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3664_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3662_; 
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 0, v_a_3635_);
v___x_3662_ = v___x_3659_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3663_; 
v_reuseFailAlloc_3663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3663_, 0, v_a_3635_);
v___x_3662_ = v_reuseFailAlloc_3663_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
return v___x_3662_;
}
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
lean_dec(v_a_3635_);
v_a_3666_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3657_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3657_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
}
else
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3684_; 
lean_dec(v_a_3635_);
v_a_3677_ = lean_ctor_get(v___x_3639_, 0);
v_isSharedCheck_3684_ = !lean_is_exclusive(v___x_3639_);
if (v_isSharedCheck_3684_ == 0)
{
v___x_3679_ = v___x_3639_;
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3639_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3684_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3682_; 
if (v_isShared_3680_ == 0)
{
v___x_3682_ = v___x_3679_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v_a_3677_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3692_; 
lean_dec(v_a_3635_);
v_a_3685_ = lean_ctor_get(v___x_3636_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3636_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3687_ = v___x_3636_;
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_a_3685_);
lean_dec(v___x_3636_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3692_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v_a_3685_);
v___x_3690_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
return v___x_3690_;
}
}
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
v_a_3693_ = lean_ctor_get(v___x_3634_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3634_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3634_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3634_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn___boxed(lean_object* v_f_3701_, lean_object* v_a_3702_){
_start:
{
lean_object* v_res_3703_; 
v_res_3703_ = l_Lasm_JS_Bun_WebSocketHandlerClose_ofSyncFn(v_f_3701_);
return v_res_3703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__1(lean_object* v_f_3711_, lean_object* v_a_3712_, lean_object* v___f_3713_, lean_object* v_x_3714_){
_start:
{
if (lean_obj_tag(v_x_3714_) == 0)
{
lean_object* v_a_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3724_; 
lean_dec_ref(v___f_3713_);
lean_dec(v_a_3712_);
lean_dec_ref(v_f_3711_);
v_a_3716_ = lean_ctor_get(v_x_3714_, 0);
v_isSharedCheck_3724_ = !lean_is_exclusive(v_x_3714_);
if (v_isSharedCheck_3724_ == 0)
{
v___x_3718_ = v_x_3714_;
v_isShared_3719_ = v_isSharedCheck_3724_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_a_3716_);
lean_dec(v_x_3714_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3724_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v___x_3721_; 
if (v_isShared_3719_ == 0)
{
v___x_3721_ = v___x_3718_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3723_; 
v_reuseFailAlloc_3723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3723_, 0, v_a_3716_);
v___x_3721_ = v_reuseFailAlloc_3723_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3722_; 
v___x_3722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3722_, 0, v___x_3721_);
return v___x_3722_;
}
}
}
else
{
lean_object* v_a_3725_; lean_object* v___x_3726_; uint8_t v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; 
v_a_3725_ = lean_ctor_get(v_x_3714_, 0);
lean_inc(v_a_3725_);
lean_dec_ref_known(v_x_3714_, 1);
v___x_3726_ = lean_unsigned_to_nat(0u);
v___x_3727_ = 0;
v___x_3728_ = lean_apply_3(v_f_3711_, v_a_3712_, v_a_3725_, lean_box(0));
v___x_3729_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3726_, v___x_3727_, v___x_3728_, v___f_3713_);
return v___x_3729_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__1___boxed(lean_object* v_f_3730_, lean_object* v_a_3731_, lean_object* v___f_3732_, lean_object* v_x_3733_, lean_object* v___y_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__1(v_f_3730_, v_a_3731_, v___f_3732_, v_x_3733_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__0(lean_object* v_f_3736_, lean_object* v___f_3737_, lean_object* v_args_3738_, lean_object* v_x_3739_){
_start:
{
if (lean_obj_tag(v_x_3739_) == 0)
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3749_; 
lean_dec_ref(v___f_3737_);
lean_dec_ref(v_f_3736_);
v_a_3741_ = lean_ctor_get(v_x_3739_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v_x_3739_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3743_ = v_x_3739_;
v_isShared_3744_ = v_isSharedCheck_3749_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v_x_3739_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3749_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3746_; 
if (v_isShared_3744_ == 0)
{
v___x_3746_ = v___x_3743_;
goto v_reusejp_3745_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v_a_3741_);
v___x_3746_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3745_;
}
v_reusejp_3745_:
{
lean_object* v___x_3747_; 
v___x_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3747_, 0, v___x_3746_);
return v___x_3747_;
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3771_; 
v_a_3750_ = lean_ctor_get(v_x_3739_, 0);
v_isSharedCheck_3771_ = !lean_is_exclusive(v_x_3739_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3752_ = v_x_3739_;
v_isShared_3753_ = v_isSharedCheck_3771_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v_x_3739_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3771_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___f_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; uint8_t v___x_3757_; lean_object* v_val_3759_; lean_object* v___x_3762_; 
v___f_3754_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3754_, 0, v_f_3736_);
lean_closure_set(v___f_3754_, 1, v_a_3750_);
lean_closure_set(v___f_3754_, 2, v___f_3737_);
v___x_3755_ = lean_unsigned_to_nat(1u);
v___x_3756_ = lean_unsigned_to_nat(0u);
v___x_3757_ = 0;
v___x_3762_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SocketHandlerData_ofFn_spec__0(v_args_3738_, v___x_3755_);
if (lean_obj_tag(v___x_3762_) == 0)
{
lean_object* v_a_3763_; lean_object* v___x_3765_; 
v_a_3763_ = lean_ctor_get(v___x_3762_, 0);
lean_inc(v_a_3763_);
lean_dec_ref_known(v___x_3762_, 1);
if (v_isShared_3753_ == 0)
{
lean_ctor_set(v___x_3752_, 0, v_a_3763_);
v___x_3765_ = v___x_3752_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3766_; 
v_reuseFailAlloc_3766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3766_, 0, v_a_3763_);
v___x_3765_ = v_reuseFailAlloc_3766_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
v_val_3759_ = v___x_3765_;
goto v___jp_3758_;
}
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; 
v_a_3767_ = lean_ctor_get(v___x_3762_, 0);
lean_inc(v_a_3767_);
lean_dec_ref_known(v___x_3762_, 1);
if (v_isShared_3753_ == 0)
{
lean_ctor_set_tag(v___x_3752_, 0);
lean_ctor_set(v___x_3752_, 0, v_a_3767_);
v___x_3769_ = v___x_3752_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v_a_3767_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
v_val_3759_ = v___x_3769_;
goto v___jp_3758_;
}
}
v___jp_3758_:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; 
v___x_3760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3760_, 0, v_val_3759_);
v___x_3761_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3756_, v___x_3757_, v___x_3760_, v___f_3754_);
return v___x_3761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__0___boxed(lean_object* v_f_3772_, lean_object* v___f_3773_, lean_object* v_args_3774_, lean_object* v_x_3775_, lean_object* v___y_3776_){
_start:
{
lean_object* v_res_3777_; 
v_res_3777_ = l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__0(v_f_3772_, v___f_3773_, v_args_3774_, v_x_3775_);
lean_dec_ref(v_args_3774_);
return v_res_3777_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__2(lean_object* v_f_3778_, lean_object* v___f_3779_, lean_object* v_args_3780_){
_start:
{
lean_object* v___f_3782_; lean_object* v___x_3783_; uint8_t v___x_3784_; lean_object* v_val_3786_; lean_object* v___x_3789_; 
lean_inc_ref(v_args_3780_);
v___f_3782_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_3782_, 0, v_f_3778_);
lean_closure_set(v___f_3782_, 1, v___f_3779_);
lean_closure_set(v___f_3782_, 2, v_args_3780_);
v___x_3783_ = lean_unsigned_to_nat(0u);
v___x_3784_ = 0;
v___x_3789_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_3780_, v___x_3783_);
lean_dec_ref(v_args_3780_);
if (lean_obj_tag(v___x_3789_) == 0)
{
lean_object* v_a_3790_; lean_object* v___x_3792_; uint8_t v_isShared_3793_; uint8_t v_isSharedCheck_3797_; 
v_a_3790_ = lean_ctor_get(v___x_3789_, 0);
v_isSharedCheck_3797_ = !lean_is_exclusive(v___x_3789_);
if (v_isSharedCheck_3797_ == 0)
{
v___x_3792_ = v___x_3789_;
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
else
{
lean_inc(v_a_3790_);
lean_dec(v___x_3789_);
v___x_3792_ = lean_box(0);
v_isShared_3793_ = v_isSharedCheck_3797_;
goto v_resetjp_3791_;
}
v_resetjp_3791_:
{
lean_object* v___x_3795_; 
if (v_isShared_3793_ == 0)
{
lean_ctor_set_tag(v___x_3792_, 1);
v___x_3795_ = v___x_3792_;
goto v_reusejp_3794_;
}
else
{
lean_object* v_reuseFailAlloc_3796_; 
v_reuseFailAlloc_3796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3796_, 0, v_a_3790_);
v___x_3795_ = v_reuseFailAlloc_3796_;
goto v_reusejp_3794_;
}
v_reusejp_3794_:
{
v_val_3786_ = v___x_3795_;
goto v___jp_3785_;
}
}
}
else
{
lean_object* v_a_3798_; lean_object* v___x_3800_; uint8_t v_isShared_3801_; uint8_t v_isSharedCheck_3805_; 
v_a_3798_ = lean_ctor_get(v___x_3789_, 0);
v_isSharedCheck_3805_ = !lean_is_exclusive(v___x_3789_);
if (v_isSharedCheck_3805_ == 0)
{
v___x_3800_ = v___x_3789_;
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
else
{
lean_inc(v_a_3798_);
lean_dec(v___x_3789_);
v___x_3800_ = lean_box(0);
v_isShared_3801_ = v_isSharedCheck_3805_;
goto v_resetjp_3799_;
}
v_resetjp_3799_:
{
lean_object* v___x_3803_; 
if (v_isShared_3801_ == 0)
{
lean_ctor_set_tag(v___x_3800_, 0);
v___x_3803_ = v___x_3800_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v_a_3798_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
v_val_3786_ = v___x_3803_;
goto v___jp_3785_;
}
}
}
v___jp_3785_:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; 
v___x_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3787_, 0, v_val_3786_);
v___x_3788_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3783_, v___x_3784_, v___x_3787_, v___f_3782_);
return v___x_3788_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__2___boxed(lean_object* v_f_3806_, lean_object* v___f_3807_, lean_object* v_args_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__2(v_f_3806_, v___f_3807_, v_args_3808_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn(lean_object* v_f_3811_){
_start:
{
lean_object* v___f_3813_; lean_object* v___f_3814_; lean_object* v___x_3815_; 
v___f_3813_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0));
v___f_3814_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_3814_, 0, v_f_3811_);
lean_closure_set(v___f_3814_, 1, v___f_3813_);
v___x_3815_ = l_Lasm_JS_Function_ofFn(v___f_3814_);
if (lean_obj_tag(v___x_3815_) == 0)
{
lean_object* v_a_3816_; lean_object* v___x_3817_; 
v_a_3816_ = lean_ctor_get(v___x_3815_, 0);
lean_inc(v_a_3816_);
lean_dec_ref_known(v___x_3815_, 1);
v___x_3817_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v_a_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v_a_3818_ = lean_ctor_get(v___x_3817_, 0);
lean_inc(v_a_3818_);
lean_dec_ref_known(v___x_3817_, 1);
v___x_3819_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3820_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3818_, v___x_3819_);
if (lean_obj_tag(v___x_3820_) == 0)
{
lean_object* v_a_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; lean_object* v___x_3825_; lean_object* v___x_3826_; lean_object* v___y_3828_; uint8_t v___x_3855_; 
v_a_3821_ = lean_ctor_get(v___x_3820_, 0);
lean_inc(v_a_3821_);
lean_dec_ref_known(v___x_3820_, 1);
v___x_3822_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3823_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_3816_);
v___x_3824_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3824_, 0, v_a_3816_);
lean_ctor_set(v___x_3824_, 1, v___x_3823_);
v___x_3825_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3826_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3855_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_3855_ == 0)
{
lean_object* v___x_3856_; 
v___x_3856_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_3828_ = v___x_3856_;
goto v___jp_3827_;
}
else
{
lean_object* v___x_3857_; 
v___x_3857_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_3828_ = v___x_3857_;
goto v___jp_3827_;
}
v___jp_3827_:
{
lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; 
lean_inc(v___y_3828_);
v___x_3829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3829_, 0, v___x_3826_);
lean_ctor_set(v___x_3829_, 1, v___y_3828_);
v___x_3830_ = lean_box(0);
v___x_3831_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3831_, 0, v___x_3829_);
lean_ctor_set(v___x_3831_, 1, v___x_3830_);
v___x_3832_ = l_Lasm_JS_obj(v___x_3831_);
v___x_3833_ = lean_unsigned_to_nat(3u);
v___x_3834_ = lean_mk_empty_array_with_capacity(v___x_3833_);
v___x_3835_ = lean_array_push(v___x_3834_, v___x_3824_);
v___x_3836_ = lean_array_push(v___x_3835_, v___x_3825_);
v___x_3837_ = lean_array_push(v___x_3836_, v___x_3832_);
v___x_3838_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3821_, v___x_3822_, v___x_3837_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3845_ == 0)
{
lean_object* v_unused_3846_; 
v_unused_3846_ = lean_ctor_get(v___x_3838_, 0);
lean_dec(v_unused_3846_);
v___x_3840_ = v___x_3838_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_dec(v___x_3838_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
lean_ctor_set(v___x_3840_, 0, v_a_3816_);
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3816_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3854_; 
lean_dec(v_a_3816_);
v_a_3847_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3849_ = v___x_3838_;
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3838_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3852_; 
if (v_isShared_3850_ == 0)
{
v___x_3852_ = v___x_3849_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_a_3847_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
}
else
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3865_; 
lean_dec(v_a_3816_);
v_a_3858_ = lean_ctor_get(v___x_3820_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3820_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3860_ = v___x_3820_;
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3820_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
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
return v___x_3863_;
}
}
}
}
else
{
lean_object* v_a_3866_; lean_object* v___x_3868_; uint8_t v_isShared_3869_; uint8_t v_isSharedCheck_3873_; 
lean_dec(v_a_3816_);
v_a_3866_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3873_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3873_ == 0)
{
v___x_3868_ = v___x_3817_;
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
else
{
lean_inc(v_a_3866_);
lean_dec(v___x_3817_);
v___x_3868_ = lean_box(0);
v_isShared_3869_ = v_isSharedCheck_3873_;
goto v_resetjp_3867_;
}
v_resetjp_3867_:
{
lean_object* v___x_3871_; 
if (v_isShared_3869_ == 0)
{
v___x_3871_ = v___x_3868_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3872_; 
v_reuseFailAlloc_3872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3872_, 0, v_a_3866_);
v___x_3871_ = v_reuseFailAlloc_3872_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
return v___x_3871_;
}
}
}
}
else
{
lean_object* v_a_3874_; lean_object* v___x_3876_; uint8_t v_isShared_3877_; uint8_t v_isSharedCheck_3881_; 
v_a_3874_ = lean_ctor_get(v___x_3815_, 0);
v_isSharedCheck_3881_ = !lean_is_exclusive(v___x_3815_);
if (v_isSharedCheck_3881_ == 0)
{
v___x_3876_ = v___x_3815_;
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
else
{
lean_inc(v_a_3874_);
lean_dec(v___x_3815_);
v___x_3876_ = lean_box(0);
v_isShared_3877_ = v_isSharedCheck_3881_;
goto v_resetjp_3875_;
}
v_resetjp_3875_:
{
lean_object* v___x_3879_; 
if (v_isShared_3877_ == 0)
{
v___x_3879_ = v___x_3876_;
goto v_reusejp_3878_;
}
else
{
lean_object* v_reuseFailAlloc_3880_; 
v_reuseFailAlloc_3880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3880_, 0, v_a_3874_);
v___x_3879_ = v_reuseFailAlloc_3880_;
goto v_reusejp_3878_;
}
v_reusejp_3878_:
{
return v___x_3879_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___boxed(lean_object* v_f_3882_, lean_object* v_a_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn(v_f_3882_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___lam__0(lean_object* v_f_3885_, lean_object* v_args_3886_){
_start:
{
lean_object* v___x_3888_; lean_object* v___x_3889_; 
v___x_3888_ = lean_unsigned_to_nat(0u);
v___x_3889_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_3886_, v___x_3888_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v___x_3889_, 1);
v___x_3891_ = lean_unsigned_to_nat(1u);
v___x_3892_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_SocketHandlerData_ofFn_spec__0(v_args_3886_, v___x_3891_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; lean_object* v___x_3894_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
lean_inc(v_a_3893_);
lean_dec_ref_known(v___x_3892_, 1);
v___x_3894_ = lean_apply_3(v_f_3885_, v_a_3890_, v_a_3893_, lean_box(0));
if (lean_obj_tag(v___x_3894_) == 0)
{
lean_object* v___x_3896_; uint8_t v_isShared_3897_; uint8_t v_isSharedCheck_3902_; 
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3894_);
if (v_isSharedCheck_3902_ == 0)
{
lean_object* v_unused_3903_; 
v_unused_3903_ = lean_ctor_get(v___x_3894_, 0);
lean_dec(v_unused_3903_);
v___x_3896_ = v___x_3894_;
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
else
{
lean_dec(v___x_3894_);
v___x_3896_ = lean_box(0);
v_isShared_3897_ = v_isSharedCheck_3902_;
goto v_resetjp_3895_;
}
v_resetjp_3895_:
{
lean_object* v___x_3898_; lean_object* v___x_3900_; 
v___x_3898_ = lean_box(0);
if (v_isShared_3897_ == 0)
{
lean_ctor_set(v___x_3896_, 0, v___x_3898_);
v___x_3900_ = v___x_3896_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3898_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
else
{
lean_object* v_a_3904_; lean_object* v___x_3906_; uint8_t v_isShared_3907_; uint8_t v_isSharedCheck_3911_; 
v_a_3904_ = lean_ctor_get(v___x_3894_, 0);
v_isSharedCheck_3911_ = !lean_is_exclusive(v___x_3894_);
if (v_isSharedCheck_3911_ == 0)
{
v___x_3906_ = v___x_3894_;
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
else
{
lean_inc(v_a_3904_);
lean_dec(v___x_3894_);
v___x_3906_ = lean_box(0);
v_isShared_3907_ = v_isSharedCheck_3911_;
goto v_resetjp_3905_;
}
v_resetjp_3905_:
{
lean_object* v___x_3909_; 
if (v_isShared_3907_ == 0)
{
v___x_3909_ = v___x_3906_;
goto v_reusejp_3908_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_a_3904_);
v___x_3909_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3908_;
}
v_reusejp_3908_:
{
return v___x_3909_;
}
}
}
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
lean_dec(v_a_3890_);
lean_dec_ref(v_f_3885_);
v_a_3912_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3914_ = v___x_3892_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3892_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
else
{
lean_object* v_a_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3927_; 
lean_dec_ref(v_f_3885_);
v_a_3920_ = lean_ctor_get(v___x_3889_, 0);
v_isSharedCheck_3927_ = !lean_is_exclusive(v___x_3889_);
if (v_isSharedCheck_3927_ == 0)
{
v___x_3922_ = v___x_3889_;
v_isShared_3923_ = v_isSharedCheck_3927_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_a_3920_);
lean_dec(v___x_3889_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3927_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v___x_3925_; 
if (v_isShared_3923_ == 0)
{
v___x_3925_ = v___x_3922_;
goto v_reusejp_3924_;
}
else
{
lean_object* v_reuseFailAlloc_3926_; 
v_reuseFailAlloc_3926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3926_, 0, v_a_3920_);
v___x_3925_ = v_reuseFailAlloc_3926_;
goto v_reusejp_3924_;
}
v_reusejp_3924_:
{
return v___x_3925_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___lam__0___boxed(lean_object* v_f_3928_, lean_object* v_args_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___lam__0(v_f_3928_, v_args_3929_);
lean_dec_ref(v_args_3929_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn(lean_object* v_f_3932_){
_start:
{
lean_object* v___f_3934_; lean_object* v___x_3935_; 
v___f_3934_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3934_, 0, v_f_3932_);
v___x_3935_ = l_Lasm_JS_Function_ofSyncFn(v___f_3934_);
if (lean_obj_tag(v___x_3935_) == 0)
{
lean_object* v_a_3936_; lean_object* v___x_3937_; 
v_a_3936_ = lean_ctor_get(v___x_3935_, 0);
lean_inc(v_a_3936_);
lean_dec_ref_known(v___x_3935_, 1);
v___x_3937_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_3937_) == 0)
{
lean_object* v_a_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; 
v_a_3938_ = lean_ctor_get(v___x_3937_, 0);
lean_inc(v_a_3938_);
lean_dec_ref_known(v___x_3937_, 1);
v___x_3939_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_3940_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_3938_, v___x_3939_);
if (lean_obj_tag(v___x_3940_) == 0)
{
lean_object* v_a_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___y_3948_; uint8_t v___x_3975_; 
v_a_3941_ = lean_ctor_get(v___x_3940_, 0);
lean_inc(v_a_3941_);
lean_dec_ref_known(v___x_3940_, 1);
v___x_3942_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_3943_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_3936_);
v___x_3944_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3944_, 0, v_a_3936_);
lean_ctor_set(v___x_3944_, 1, v___x_3943_);
v___x_3945_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_3946_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_3975_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_3975_ == 0)
{
lean_object* v___x_3976_; 
v___x_3976_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_3948_ = v___x_3976_;
goto v___jp_3947_;
}
else
{
lean_object* v___x_3977_; 
v___x_3977_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_3948_ = v___x_3977_;
goto v___jp_3947_;
}
v___jp_3947_:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; 
lean_inc(v___y_3948_);
v___x_3949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3946_);
lean_ctor_set(v___x_3949_, 1, v___y_3948_);
v___x_3950_ = lean_box(0);
v___x_3951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3951_, 0, v___x_3949_);
lean_ctor_set(v___x_3951_, 1, v___x_3950_);
v___x_3952_ = l_Lasm_JS_obj(v___x_3951_);
v___x_3953_ = lean_unsigned_to_nat(3u);
v___x_3954_ = lean_mk_empty_array_with_capacity(v___x_3953_);
v___x_3955_ = lean_array_push(v___x_3954_, v___x_3944_);
v___x_3956_ = lean_array_push(v___x_3955_, v___x_3945_);
v___x_3957_ = lean_array_push(v___x_3956_, v___x_3952_);
v___x_3958_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_3941_, v___x_3942_, v___x_3957_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3965_; 
v_isSharedCheck_3965_ = !lean_is_exclusive(v___x_3958_);
if (v_isSharedCheck_3965_ == 0)
{
lean_object* v_unused_3966_; 
v_unused_3966_ = lean_ctor_get(v___x_3958_, 0);
lean_dec(v_unused_3966_);
v___x_3960_ = v___x_3958_;
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
else
{
lean_dec(v___x_3958_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3965_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
lean_object* v___x_3963_; 
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v_a_3936_);
v___x_3963_ = v___x_3960_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3964_; 
v_reuseFailAlloc_3964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3964_, 0, v_a_3936_);
v___x_3963_ = v_reuseFailAlloc_3964_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
return v___x_3963_;
}
}
}
else
{
lean_object* v_a_3967_; lean_object* v___x_3969_; uint8_t v_isShared_3970_; uint8_t v_isSharedCheck_3974_; 
lean_dec(v_a_3936_);
v_a_3967_ = lean_ctor_get(v___x_3958_, 0);
v_isSharedCheck_3974_ = !lean_is_exclusive(v___x_3958_);
if (v_isSharedCheck_3974_ == 0)
{
v___x_3969_ = v___x_3958_;
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
else
{
lean_inc(v_a_3967_);
lean_dec(v___x_3958_);
v___x_3969_ = lean_box(0);
v_isShared_3970_ = v_isSharedCheck_3974_;
goto v_resetjp_3968_;
}
v_resetjp_3968_:
{
lean_object* v___x_3972_; 
if (v_isShared_3970_ == 0)
{
v___x_3972_ = v___x_3969_;
goto v_reusejp_3971_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_a_3967_);
v___x_3972_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3971_;
}
v_reusejp_3971_:
{
return v___x_3972_;
}
}
}
}
}
else
{
lean_object* v_a_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3985_; 
lean_dec(v_a_3936_);
v_a_3978_ = lean_ctor_get(v___x_3940_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3940_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3980_ = v___x_3940_;
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_a_3978_);
lean_dec(v___x_3940_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3983_; 
if (v_isShared_3981_ == 0)
{
v___x_3983_ = v___x_3980_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3978_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
lean_dec(v_a_3936_);
v_a_3986_ = lean_ctor_get(v___x_3937_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3937_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3937_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3937_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
v_a_3994_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3935_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3935_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___boxed(lean_object* v_f_4002_, lean_object* v_a_4003_){
_start:
{
lean_object* v_res_4004_; 
v_res_4004_ = l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn(v_f_4002_);
return v_res_4004_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofFn(lean_object* v_f_4012_){
_start:
{
lean_object* v___f_4014_; lean_object* v___f_4015_; lean_object* v___x_4016_; 
v___f_4014_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0));
v___f_4015_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerPing_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4015_, 0, v_f_4012_);
lean_closure_set(v___f_4015_, 1, v___f_4014_);
v___x_4016_ = l_Lasm_JS_Function_ofFn(v___f_4015_);
if (lean_obj_tag(v___x_4016_) == 0)
{
lean_object* v_a_4017_; lean_object* v___x_4018_; 
v_a_4017_ = lean_ctor_get(v___x_4016_, 0);
lean_inc(v_a_4017_);
lean_dec_ref_known(v___x_4016_, 1);
v___x_4018_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4018_) == 0)
{
lean_object* v_a_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v_a_4019_ = lean_ctor_get(v___x_4018_, 0);
lean_inc(v_a_4019_);
lean_dec_ref_known(v___x_4018_, 1);
v___x_4020_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_4021_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_4019_, v___x_4020_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___y_4029_; uint8_t v___x_4056_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
lean_dec_ref_known(v___x_4021_, 1);
v___x_4023_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_4024_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_4017_);
v___x_4025_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4025_, 0, v_a_4017_);
lean_ctor_set(v___x_4025_, 1, v___x_4024_);
v___x_4026_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_4027_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_4056_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_4056_ == 0)
{
lean_object* v___x_4057_; 
v___x_4057_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_4029_ = v___x_4057_;
goto v___jp_4028_;
}
else
{
lean_object* v___x_4058_; 
v___x_4058_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_4029_ = v___x_4058_;
goto v___jp_4028_;
}
v___jp_4028_:
{
lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
lean_inc(v___y_4029_);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4027_);
lean_ctor_set(v___x_4030_, 1, v___y_4029_);
v___x_4031_ = lean_box(0);
v___x_4032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4032_, 0, v___x_4030_);
lean_ctor_set(v___x_4032_, 1, v___x_4031_);
v___x_4033_ = l_Lasm_JS_obj(v___x_4032_);
v___x_4034_ = lean_unsigned_to_nat(3u);
v___x_4035_ = lean_mk_empty_array_with_capacity(v___x_4034_);
v___x_4036_ = lean_array_push(v___x_4035_, v___x_4025_);
v___x_4037_ = lean_array_push(v___x_4036_, v___x_4026_);
v___x_4038_ = lean_array_push(v___x_4037_, v___x_4033_);
v___x_4039_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_4022_, v___x_4023_, v___x_4038_);
if (lean_obj_tag(v___x_4039_) == 0)
{
lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4046_; 
v_isSharedCheck_4046_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4046_ == 0)
{
lean_object* v_unused_4047_; 
v_unused_4047_ = lean_ctor_get(v___x_4039_, 0);
lean_dec(v_unused_4047_);
v___x_4041_ = v___x_4039_;
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
else
{
lean_dec(v___x_4039_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4046_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v___x_4044_; 
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v_a_4017_);
v___x_4044_ = v___x_4041_;
goto v_reusejp_4043_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v_a_4017_);
v___x_4044_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4043_;
}
v_reusejp_4043_:
{
return v___x_4044_;
}
}
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4055_; 
lean_dec(v_a_4017_);
v_a_4048_ = lean_ctor_get(v___x_4039_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4039_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4050_ = v___x_4039_;
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_a_4048_);
lean_dec(v___x_4039_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_a_4048_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
}
}
}
else
{
lean_object* v_a_4059_; lean_object* v___x_4061_; uint8_t v_isShared_4062_; uint8_t v_isSharedCheck_4066_; 
lean_dec(v_a_4017_);
v_a_4059_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4061_ = v___x_4021_;
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
else
{
lean_inc(v_a_4059_);
lean_dec(v___x_4021_);
v___x_4061_ = lean_box(0);
v_isShared_4062_ = v_isSharedCheck_4066_;
goto v_resetjp_4060_;
}
v_resetjp_4060_:
{
lean_object* v___x_4064_; 
if (v_isShared_4062_ == 0)
{
v___x_4064_ = v___x_4061_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4065_; 
v_reuseFailAlloc_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4065_, 0, v_a_4059_);
v___x_4064_ = v_reuseFailAlloc_4065_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
return v___x_4064_;
}
}
}
}
else
{
lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4074_; 
lean_dec(v_a_4017_);
v_a_4067_ = lean_ctor_get(v___x_4018_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4069_ = v___x_4018_;
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4018_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4072_; 
if (v_isShared_4070_ == 0)
{
v___x_4072_ = v___x_4069_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4067_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
else
{
lean_object* v_a_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4082_; 
v_a_4075_ = lean_ctor_get(v___x_4016_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_4016_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4077_ = v___x_4016_;
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_a_4075_);
lean_dec(v___x_4016_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4080_; 
if (v_isShared_4078_ == 0)
{
v___x_4080_ = v___x_4077_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_a_4075_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
return v___x_4080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofFn___boxed(lean_object* v_f_4083_, lean_object* v_a_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l_Lasm_JS_Bun_WebSocketHandlerPong_ofFn(v_f_4083_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofSyncFn(lean_object* v_f_4086_){
_start:
{
lean_object* v___f_4088_; lean_object* v___x_4089_; 
v___f_4088_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerPing_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4088_, 0, v_f_4086_);
v___x_4089_ = l_Lasm_JS_Function_ofSyncFn(v___f_4088_);
if (lean_obj_tag(v___x_4089_) == 0)
{
lean_object* v_a_4090_; lean_object* v___x_4091_; 
v_a_4090_ = lean_ctor_get(v___x_4089_, 0);
lean_inc(v_a_4090_);
lean_dec_ref_known(v___x_4089_, 1);
v___x_4091_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
lean_inc(v_a_4092_);
lean_dec_ref_known(v___x_4091_, 1);
v___x_4093_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_4094_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_4092_, v___x_4093_);
if (lean_obj_tag(v___x_4094_) == 0)
{
lean_object* v_a_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___y_4102_; uint8_t v___x_4129_; 
v_a_4095_ = lean_ctor_get(v___x_4094_, 0);
lean_inc(v_a_4095_);
lean_dec_ref_known(v___x_4094_, 1);
v___x_4096_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_4097_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_4090_);
v___x_4098_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4098_, 0, v_a_4090_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
v___x_4099_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_4100_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_4129_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_4129_ == 0)
{
lean_object* v___x_4130_; 
v___x_4130_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_4102_ = v___x_4130_;
goto v___jp_4101_;
}
else
{
lean_object* v___x_4131_; 
v___x_4131_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_4102_ = v___x_4131_;
goto v___jp_4101_;
}
v___jp_4101_:
{
lean_object* v___x_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
lean_inc(v___y_4102_);
v___x_4103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4100_);
lean_ctor_set(v___x_4103_, 1, v___y_4102_);
v___x_4104_ = lean_box(0);
v___x_4105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4105_, 0, v___x_4103_);
lean_ctor_set(v___x_4105_, 1, v___x_4104_);
v___x_4106_ = l_Lasm_JS_obj(v___x_4105_);
v___x_4107_ = lean_unsigned_to_nat(3u);
v___x_4108_ = lean_mk_empty_array_with_capacity(v___x_4107_);
v___x_4109_ = lean_array_push(v___x_4108_, v___x_4098_);
v___x_4110_ = lean_array_push(v___x_4109_, v___x_4099_);
v___x_4111_ = lean_array_push(v___x_4110_, v___x_4106_);
v___x_4112_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_4095_, v___x_4096_, v___x_4111_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v___x_4114_; uint8_t v_isShared_4115_; uint8_t v_isSharedCheck_4119_; 
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4119_ == 0)
{
lean_object* v_unused_4120_; 
v_unused_4120_ = lean_ctor_get(v___x_4112_, 0);
lean_dec(v_unused_4120_);
v___x_4114_ = v___x_4112_;
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
else
{
lean_dec(v___x_4112_);
v___x_4114_ = lean_box(0);
v_isShared_4115_ = v_isSharedCheck_4119_;
goto v_resetjp_4113_;
}
v_resetjp_4113_:
{
lean_object* v___x_4117_; 
if (v_isShared_4115_ == 0)
{
lean_ctor_set(v___x_4114_, 0, v_a_4090_);
v___x_4117_ = v___x_4114_;
goto v_reusejp_4116_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4090_);
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
lean_object* v_a_4121_; lean_object* v___x_4123_; uint8_t v_isShared_4124_; uint8_t v_isSharedCheck_4128_; 
lean_dec(v_a_4090_);
v_a_4121_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4128_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4128_ == 0)
{
v___x_4123_ = v___x_4112_;
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
else
{
lean_inc(v_a_4121_);
lean_dec(v___x_4112_);
v___x_4123_ = lean_box(0);
v_isShared_4124_ = v_isSharedCheck_4128_;
goto v_resetjp_4122_;
}
v_resetjp_4122_:
{
lean_object* v___x_4126_; 
if (v_isShared_4124_ == 0)
{
v___x_4126_ = v___x_4123_;
goto v_reusejp_4125_;
}
else
{
lean_object* v_reuseFailAlloc_4127_; 
v_reuseFailAlloc_4127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4127_, 0, v_a_4121_);
v___x_4126_ = v_reuseFailAlloc_4127_;
goto v_reusejp_4125_;
}
v_reusejp_4125_:
{
return v___x_4126_;
}
}
}
}
}
else
{
lean_object* v_a_4132_; lean_object* v___x_4134_; uint8_t v_isShared_4135_; uint8_t v_isSharedCheck_4139_; 
lean_dec(v_a_4090_);
v_a_4132_ = lean_ctor_get(v___x_4094_, 0);
v_isSharedCheck_4139_ = !lean_is_exclusive(v___x_4094_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4134_ = v___x_4094_;
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
else
{
lean_inc(v_a_4132_);
lean_dec(v___x_4094_);
v___x_4134_ = lean_box(0);
v_isShared_4135_ = v_isSharedCheck_4139_;
goto v_resetjp_4133_;
}
v_resetjp_4133_:
{
lean_object* v___x_4137_; 
if (v_isShared_4135_ == 0)
{
v___x_4137_ = v___x_4134_;
goto v_reusejp_4136_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v_a_4132_);
v___x_4137_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4136_;
}
v_reusejp_4136_:
{
return v___x_4137_;
}
}
}
}
else
{
lean_object* v_a_4140_; lean_object* v___x_4142_; uint8_t v_isShared_4143_; uint8_t v_isSharedCheck_4147_; 
lean_dec(v_a_4090_);
v_a_4140_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4142_ = v___x_4091_;
v_isShared_4143_ = v_isSharedCheck_4147_;
goto v_resetjp_4141_;
}
else
{
lean_inc(v_a_4140_);
lean_dec(v___x_4091_);
v___x_4142_ = lean_box(0);
v_isShared_4143_ = v_isSharedCheck_4147_;
goto v_resetjp_4141_;
}
v_resetjp_4141_:
{
lean_object* v___x_4145_; 
if (v_isShared_4143_ == 0)
{
v___x_4145_ = v___x_4142_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_a_4140_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
}
}
else
{
lean_object* v_a_4148_; lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4155_; 
v_a_4148_ = lean_ctor_get(v___x_4089_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v___x_4089_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4150_ = v___x_4089_;
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
else
{
lean_inc(v_a_4148_);
lean_dec(v___x_4089_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
lean_object* v___x_4153_; 
if (v_isShared_4151_ == 0)
{
v___x_4153_ = v___x_4150_;
goto v_reusejp_4152_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v_a_4148_);
v___x_4153_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4152_;
}
v_reusejp_4152_:
{
return v___x_4153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerPong_ofSyncFn___boxed(lean_object* v_f_4156_, lean_object* v_a_4157_){
_start:
{
lean_object* v_res_4158_; 
v_res_4158_ = l_Lasm_JS_Bun_WebSocketHandlerPong_ofSyncFn(v_f_4156_);
return v_res_4158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__1(lean_object* v_f_4166_, lean_object* v_a_4167_, lean_object* v___f_4168_, lean_object* v_x_4169_){
_start:
{
if (lean_obj_tag(v_x_4169_) == 0)
{
lean_object* v_a_4171_; lean_object* v___x_4173_; uint8_t v_isShared_4174_; uint8_t v_isSharedCheck_4179_; 
lean_dec_ref(v___f_4168_);
lean_dec(v_a_4167_);
lean_dec_ref(v_f_4166_);
v_a_4171_ = lean_ctor_get(v_x_4169_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_x_4169_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4173_ = v_x_4169_;
v_isShared_4174_ = v_isSharedCheck_4179_;
goto v_resetjp_4172_;
}
else
{
lean_inc(v_a_4171_);
lean_dec(v_x_4169_);
v___x_4173_ = lean_box(0);
v_isShared_4174_ = v_isSharedCheck_4179_;
goto v_resetjp_4172_;
}
v_resetjp_4172_:
{
lean_object* v___x_4176_; 
if (v_isShared_4174_ == 0)
{
v___x_4176_ = v___x_4173_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_a_4171_);
v___x_4176_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
lean_object* v___x_4177_; 
v___x_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4177_, 0, v___x_4176_);
return v___x_4177_;
}
}
}
else
{
lean_object* v_a_4180_; lean_object* v___x_4181_; uint8_t v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; 
v_a_4180_ = lean_ctor_get(v_x_4169_, 0);
lean_inc(v_a_4180_);
lean_dec_ref_known(v_x_4169_, 1);
v___x_4181_ = lean_unsigned_to_nat(0u);
v___x_4182_ = 0;
v___x_4183_ = lean_apply_3(v_f_4166_, v_a_4167_, v_a_4180_, lean_box(0));
v___x_4184_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4181_, v___x_4182_, v___x_4183_, v___f_4168_);
return v___x_4184_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__1___boxed(lean_object* v_f_4185_, lean_object* v_a_4186_, lean_object* v___f_4187_, lean_object* v_x_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v_res_4190_; 
v_res_4190_ = l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__1(v_f_4185_, v_a_4186_, v___f_4187_, v_x_4188_);
return v_res_4190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__0(lean_object* v_f_4191_, lean_object* v___f_4192_, lean_object* v_args_4193_, lean_object* v_x_4194_){
_start:
{
if (lean_obj_tag(v_x_4194_) == 0)
{
lean_object* v___x_4196_; 
lean_dec_ref(v___f_4192_);
lean_dec_ref(v_f_4191_);
v___x_4196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4196_, 0, v_x_4194_);
return v___x_4196_;
}
else
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4218_; 
v_a_4197_ = lean_ctor_get(v_x_4194_, 0);
v_isSharedCheck_4218_ = !lean_is_exclusive(v_x_4194_);
if (v_isSharedCheck_4218_ == 0)
{
v___x_4199_ = v_x_4194_;
v_isShared_4200_ = v_isSharedCheck_4218_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v_x_4194_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4218_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v___f_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; uint8_t v___x_4204_; lean_object* v_val_4206_; lean_object* v___x_4209_; 
v___f_4201_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_4201_, 0, v_f_4191_);
lean_closure_set(v___f_4201_, 1, v_a_4197_);
lean_closure_set(v___f_4201_, 2, v___f_4192_);
v___x_4202_ = lean_unsigned_to_nat(1u);
v___x_4203_ = lean_unsigned_to_nat(0u);
v___x_4204_ = 0;
v___x_4209_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_4193_, v___x_4202_);
if (lean_obj_tag(v___x_4209_) == 0)
{
lean_object* v_a_4210_; lean_object* v___x_4212_; 
v_a_4210_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_a_4210_);
lean_dec_ref_known(v___x_4209_, 1);
if (v_isShared_4200_ == 0)
{
lean_ctor_set(v___x_4199_, 0, v_a_4210_);
v___x_4212_ = v___x_4199_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4213_; 
v_reuseFailAlloc_4213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4213_, 0, v_a_4210_);
v___x_4212_ = v_reuseFailAlloc_4213_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
v_val_4206_ = v___x_4212_;
goto v___jp_4205_;
}
}
else
{
lean_object* v_a_4214_; lean_object* v___x_4216_; 
v_a_4214_ = lean_ctor_get(v___x_4209_, 0);
lean_inc(v_a_4214_);
lean_dec_ref_known(v___x_4209_, 1);
if (v_isShared_4200_ == 0)
{
lean_ctor_set_tag(v___x_4199_, 0);
lean_ctor_set(v___x_4199_, 0, v_a_4214_);
v___x_4216_ = v___x_4199_;
goto v_reusejp_4215_;
}
else
{
lean_object* v_reuseFailAlloc_4217_; 
v_reuseFailAlloc_4217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4217_, 0, v_a_4214_);
v___x_4216_ = v_reuseFailAlloc_4217_;
goto v_reusejp_4215_;
}
v_reusejp_4215_:
{
v_val_4206_ = v___x_4216_;
goto v___jp_4205_;
}
}
v___jp_4205_:
{
lean_object* v___x_4207_; lean_object* v___x_4208_; 
v___x_4207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4207_, 0, v_val_4206_);
v___x_4208_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4203_, v___x_4204_, v___x_4207_, v___f_4201_);
return v___x_4208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__0___boxed(lean_object* v_f_4219_, lean_object* v___f_4220_, lean_object* v_args_4221_, lean_object* v_x_4222_, lean_object* v___y_4223_){
_start:
{
lean_object* v_res_4224_; 
v_res_4224_ = l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__0(v_f_4219_, v___f_4220_, v_args_4221_, v_x_4222_);
lean_dec_ref(v_args_4221_);
return v_res_4224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__2(lean_object* v_f_4225_, lean_object* v___f_4226_, lean_object* v_args_4227_){
_start:
{
lean_object* v___f_4229_; lean_object* v___x_4230_; uint8_t v___x_4231_; lean_object* v_val_4233_; lean_object* v___x_4236_; lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4244_; 
lean_inc_ref(v_args_4227_);
v___f_4229_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_4229_, 0, v_f_4225_);
lean_closure_set(v___f_4229_, 1, v___f_4226_);
lean_closure_set(v___f_4229_, 2, v_args_4227_);
v___x_4230_ = lean_unsigned_to_nat(0u);
v___x_4231_ = 0;
v___x_4236_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_4227_, v___x_4230_);
lean_dec_ref(v_args_4227_);
v_a_4237_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4244_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4244_ == 0)
{
v___x_4239_ = v___x_4236_;
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4236_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4244_;
goto v_resetjp_4238_;
}
v___jp_4232_:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4234_, 0, v_val_4233_);
v___x_4235_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_4230_, v___x_4231_, v___x_4234_, v___f_4229_);
return v___x_4235_;
}
v_resetjp_4238_:
{
lean_object* v___x_4242_; 
if (v_isShared_4240_ == 0)
{
lean_ctor_set_tag(v___x_4239_, 1);
v___x_4242_ = v___x_4239_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v_a_4237_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
v_val_4233_ = v___x_4242_;
goto v___jp_4232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__2___boxed(lean_object* v_f_4245_, lean_object* v___f_4246_, lean_object* v_args_4247_, lean_object* v___y_4248_){
_start:
{
lean_object* v_res_4249_; 
v_res_4249_ = l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__2(v_f_4245_, v___f_4246_, v_args_4247_);
return v_res_4249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn(lean_object* v_f_4250_){
_start:
{
lean_object* v___f_4252_; lean_object* v___f_4253_; lean_object* v___x_4254_; 
v___f_4252_ = ((lean_object*)(l_Lasm_JS_Bun_WebSocketHandlerMessage_ofFn___closed__0));
v___f_4253_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4253_, 0, v_f_4250_);
lean_closure_set(v___f_4253_, 1, v___f_4252_);
v___x_4254_ = l_Lasm_JS_Function_ofFn(v___f_4253_);
if (lean_obj_tag(v___x_4254_) == 0)
{
lean_object* v_a_4255_; lean_object* v___x_4256_; 
v_a_4255_ = lean_ctor_get(v___x_4254_, 0);
lean_inc(v_a_4255_);
lean_dec_ref_known(v___x_4254_, 1);
v___x_4256_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4256_) == 0)
{
lean_object* v_a_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v_a_4257_ = lean_ctor_get(v___x_4256_, 0);
lean_inc(v_a_4257_);
lean_dec_ref_known(v___x_4256_, 1);
v___x_4258_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_4259_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_4257_, v___x_4258_);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; lean_object* v___y_4267_; uint8_t v___x_4294_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
lean_inc(v_a_4260_);
lean_dec_ref_known(v___x_4259_, 1);
v___x_4261_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_4262_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_4255_);
v___x_4263_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4263_, 0, v_a_4255_);
lean_ctor_set(v___x_4263_, 1, v___x_4262_);
v___x_4264_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_4265_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_4294_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_4294_ == 0)
{
lean_object* v___x_4295_; 
v___x_4295_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_4267_ = v___x_4295_;
goto v___jp_4266_;
}
else
{
lean_object* v___x_4296_; 
v___x_4296_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_4267_ = v___x_4296_;
goto v___jp_4266_;
}
v___jp_4266_:
{
lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___x_4272_; lean_object* v___x_4273_; lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; 
lean_inc(v___y_4267_);
v___x_4268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4265_);
lean_ctor_set(v___x_4268_, 1, v___y_4267_);
v___x_4269_ = lean_box(0);
v___x_4270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4270_, 0, v___x_4268_);
lean_ctor_set(v___x_4270_, 1, v___x_4269_);
v___x_4271_ = l_Lasm_JS_obj(v___x_4270_);
v___x_4272_ = lean_unsigned_to_nat(3u);
v___x_4273_ = lean_mk_empty_array_with_capacity(v___x_4272_);
v___x_4274_ = lean_array_push(v___x_4273_, v___x_4263_);
v___x_4275_ = lean_array_push(v___x_4274_, v___x_4264_);
v___x_4276_ = lean_array_push(v___x_4275_, v___x_4271_);
v___x_4277_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_4260_, v___x_4261_, v___x_4276_);
if (lean_obj_tag(v___x_4277_) == 0)
{
lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4284_; 
v_isSharedCheck_4284_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4284_ == 0)
{
lean_object* v_unused_4285_; 
v_unused_4285_ = lean_ctor_get(v___x_4277_, 0);
lean_dec(v_unused_4285_);
v___x_4279_ = v___x_4277_;
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
else
{
lean_dec(v___x_4277_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4284_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v___x_4282_; 
if (v_isShared_4280_ == 0)
{
lean_ctor_set(v___x_4279_, 0, v_a_4255_);
v___x_4282_ = v___x_4279_;
goto v_reusejp_4281_;
}
else
{
lean_object* v_reuseFailAlloc_4283_; 
v_reuseFailAlloc_4283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4283_, 0, v_a_4255_);
v___x_4282_ = v_reuseFailAlloc_4283_;
goto v_reusejp_4281_;
}
v_reusejp_4281_:
{
return v___x_4282_;
}
}
}
else
{
lean_object* v_a_4286_; lean_object* v___x_4288_; uint8_t v_isShared_4289_; uint8_t v_isSharedCheck_4293_; 
lean_dec(v_a_4255_);
v_a_4286_ = lean_ctor_get(v___x_4277_, 0);
v_isSharedCheck_4293_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4293_ == 0)
{
v___x_4288_ = v___x_4277_;
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
else
{
lean_inc(v_a_4286_);
lean_dec(v___x_4277_);
v___x_4288_ = lean_box(0);
v_isShared_4289_ = v_isSharedCheck_4293_;
goto v_resetjp_4287_;
}
v_resetjp_4287_:
{
lean_object* v___x_4291_; 
if (v_isShared_4289_ == 0)
{
v___x_4291_ = v___x_4288_;
goto v_reusejp_4290_;
}
else
{
lean_object* v_reuseFailAlloc_4292_; 
v_reuseFailAlloc_4292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4292_, 0, v_a_4286_);
v___x_4291_ = v_reuseFailAlloc_4292_;
goto v_reusejp_4290_;
}
v_reusejp_4290_:
{
return v___x_4291_;
}
}
}
}
}
else
{
lean_object* v_a_4297_; lean_object* v___x_4299_; uint8_t v_isShared_4300_; uint8_t v_isSharedCheck_4304_; 
lean_dec(v_a_4255_);
v_a_4297_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4304_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4304_ == 0)
{
v___x_4299_ = v___x_4259_;
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
else
{
lean_inc(v_a_4297_);
lean_dec(v___x_4259_);
v___x_4299_ = lean_box(0);
v_isShared_4300_ = v_isSharedCheck_4304_;
goto v_resetjp_4298_;
}
v_resetjp_4298_:
{
lean_object* v___x_4302_; 
if (v_isShared_4300_ == 0)
{
v___x_4302_ = v___x_4299_;
goto v_reusejp_4301_;
}
else
{
lean_object* v_reuseFailAlloc_4303_; 
v_reuseFailAlloc_4303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4303_, 0, v_a_4297_);
v___x_4302_ = v_reuseFailAlloc_4303_;
goto v_reusejp_4301_;
}
v_reusejp_4301_:
{
return v___x_4302_;
}
}
}
}
else
{
lean_object* v_a_4305_; lean_object* v___x_4307_; uint8_t v_isShared_4308_; uint8_t v_isSharedCheck_4312_; 
lean_dec(v_a_4255_);
v_a_4305_ = lean_ctor_get(v___x_4256_, 0);
v_isSharedCheck_4312_ = !lean_is_exclusive(v___x_4256_);
if (v_isSharedCheck_4312_ == 0)
{
v___x_4307_ = v___x_4256_;
v_isShared_4308_ = v_isSharedCheck_4312_;
goto v_resetjp_4306_;
}
else
{
lean_inc(v_a_4305_);
lean_dec(v___x_4256_);
v___x_4307_ = lean_box(0);
v_isShared_4308_ = v_isSharedCheck_4312_;
goto v_resetjp_4306_;
}
v_resetjp_4306_:
{
lean_object* v___x_4310_; 
if (v_isShared_4308_ == 0)
{
v___x_4310_ = v___x_4307_;
goto v_reusejp_4309_;
}
else
{
lean_object* v_reuseFailAlloc_4311_; 
v_reuseFailAlloc_4311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4311_, 0, v_a_4305_);
v___x_4310_ = v_reuseFailAlloc_4311_;
goto v_reusejp_4309_;
}
v_reusejp_4309_:
{
return v___x_4310_;
}
}
}
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4320_; 
v_a_4313_ = lean_ctor_get(v___x_4254_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4254_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4315_ = v___x_4254_;
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4254_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4318_; 
if (v_isShared_4316_ == 0)
{
v___x_4318_ = v___x_4315_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v_a_4313_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
return v___x_4318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofFn___boxed(lean_object* v_f_4321_, lean_object* v_a_4322_){
_start:
{
lean_object* v_res_4323_; 
v_res_4323_ = l_Lasm_JS_Bun_WebSocketHandlerError_ofFn(v_f_4321_);
return v_res_4323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___lam__0(lean_object* v_f_4324_, lean_object* v_args_4325_){
_start:
{
lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v_a_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4327_ = lean_unsigned_to_nat(0u);
v___x_4328_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_4325_, v___x_4327_);
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
lean_inc(v_a_4329_);
lean_dec_ref(v___x_4328_);
v___x_4330_ = lean_unsigned_to_nat(1u);
v___x_4331_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0(v_args_4325_, v___x_4330_);
if (lean_obj_tag(v___x_4331_) == 0)
{
lean_object* v_a_4332_; lean_object* v___x_4333_; 
v_a_4332_ = lean_ctor_get(v___x_4331_, 0);
lean_inc(v_a_4332_);
lean_dec_ref_known(v___x_4331_, 1);
v___x_4333_ = lean_apply_3(v_f_4324_, v_a_4329_, v_a_4332_, lean_box(0));
if (lean_obj_tag(v___x_4333_) == 0)
{
lean_object* v___x_4335_; uint8_t v_isShared_4336_; uint8_t v_isSharedCheck_4341_; 
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4333_);
if (v_isSharedCheck_4341_ == 0)
{
lean_object* v_unused_4342_; 
v_unused_4342_ = lean_ctor_get(v___x_4333_, 0);
lean_dec(v_unused_4342_);
v___x_4335_ = v___x_4333_;
v_isShared_4336_ = v_isSharedCheck_4341_;
goto v_resetjp_4334_;
}
else
{
lean_dec(v___x_4333_);
v___x_4335_ = lean_box(0);
v_isShared_4336_ = v_isSharedCheck_4341_;
goto v_resetjp_4334_;
}
v_resetjp_4334_:
{
lean_object* v___x_4337_; lean_object* v___x_4339_; 
v___x_4337_ = lean_box(0);
if (v_isShared_4336_ == 0)
{
lean_ctor_set(v___x_4335_, 0, v___x_4337_);
v___x_4339_ = v___x_4335_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v___x_4337_);
v___x_4339_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
return v___x_4339_;
}
}
}
else
{
lean_object* v_a_4343_; lean_object* v___x_4345_; uint8_t v_isShared_4346_; uint8_t v_isSharedCheck_4350_; 
v_a_4343_ = lean_ctor_get(v___x_4333_, 0);
v_isSharedCheck_4350_ = !lean_is_exclusive(v___x_4333_);
if (v_isSharedCheck_4350_ == 0)
{
v___x_4345_ = v___x_4333_;
v_isShared_4346_ = v_isSharedCheck_4350_;
goto v_resetjp_4344_;
}
else
{
lean_inc(v_a_4343_);
lean_dec(v___x_4333_);
v___x_4345_ = lean_box(0);
v_isShared_4346_ = v_isSharedCheck_4350_;
goto v_resetjp_4344_;
}
v_resetjp_4344_:
{
lean_object* v___x_4348_; 
if (v_isShared_4346_ == 0)
{
v___x_4348_ = v___x_4345_;
goto v_reusejp_4347_;
}
else
{
lean_object* v_reuseFailAlloc_4349_; 
v_reuseFailAlloc_4349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4349_, 0, v_a_4343_);
v___x_4348_ = v_reuseFailAlloc_4349_;
goto v_reusejp_4347_;
}
v_reusejp_4347_:
{
return v___x_4348_;
}
}
}
}
else
{
lean_object* v_a_4351_; lean_object* v___x_4353_; uint8_t v_isShared_4354_; uint8_t v_isSharedCheck_4358_; 
lean_dec(v_a_4329_);
lean_dec_ref(v_f_4324_);
v_a_4351_ = lean_ctor_get(v___x_4331_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v___x_4331_);
if (v_isSharedCheck_4358_ == 0)
{
v___x_4353_ = v___x_4331_;
v_isShared_4354_ = v_isSharedCheck_4358_;
goto v_resetjp_4352_;
}
else
{
lean_inc(v_a_4351_);
lean_dec(v___x_4331_);
v___x_4353_ = lean_box(0);
v_isShared_4354_ = v_isSharedCheck_4358_;
goto v_resetjp_4352_;
}
v_resetjp_4352_:
{
lean_object* v___x_4356_; 
if (v_isShared_4354_ == 0)
{
v___x_4356_ = v___x_4353_;
goto v_reusejp_4355_;
}
else
{
lean_object* v_reuseFailAlloc_4357_; 
v_reuseFailAlloc_4357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4357_, 0, v_a_4351_);
v___x_4356_ = v_reuseFailAlloc_4357_;
goto v_reusejp_4355_;
}
v_reusejp_4355_:
{
return v___x_4356_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___lam__0___boxed(lean_object* v_f_4359_, lean_object* v_args_4360_, lean_object* v___y_4361_){
_start:
{
lean_object* v_res_4362_; 
v_res_4362_ = l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___lam__0(v_f_4359_, v_args_4360_);
lean_dec_ref(v_args_4360_);
return v_res_4362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn(lean_object* v_f_4363_){
_start:
{
lean_object* v___f_4365_; lean_object* v___x_4366_; 
v___f_4365_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_4365_, 0, v_f_4363_);
v___x_4366_ = l_Lasm_JS_Function_ofSyncFn(v___f_4365_);
if (lean_obj_tag(v___x_4366_) == 0)
{
lean_object* v_a_4367_; lean_object* v___x_4368_; 
v_a_4367_ = lean_ctor_get(v___x_4366_, 0);
lean_inc(v_a_4367_);
lean_dec_ref_known(v___x_4366_, 1);
v___x_4368_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_4368_) == 0)
{
lean_object* v_a_4369_; lean_object* v___x_4370_; lean_object* v___x_4371_; 
v_a_4369_ = lean_ctor_get(v___x_4368_, 0);
lean_inc(v_a_4369_);
lean_dec_ref_known(v___x_4368_, 1);
v___x_4370_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__1));
v___x_4371_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_4369_, v___x_4370_);
if (lean_obj_tag(v___x_4371_) == 0)
{
lean_object* v_a_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___y_4379_; uint8_t v___x_4406_; 
v_a_4372_ = lean_ctor_get(v___x_4371_, 0);
lean_inc(v_a_4372_);
lean_dec_ref_known(v___x_4371_, 1);
v___x_4373_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__2));
v___x_4374_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_a_4367_);
v___x_4375_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4375_, 0, v_a_4367_);
lean_ctor_set(v___x_4375_, 1, v___x_4374_);
v___x_4376_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__4));
v___x_4377_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn___closed__5));
v___x_4406_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_4406_ == 0)
{
lean_object* v___x_4407_; 
v___x_4407_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_4379_ = v___x_4407_;
goto v___jp_4378_;
}
else
{
lean_object* v___x_4408_; 
v___x_4408_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_4379_ = v___x_4408_;
goto v___jp_4378_;
}
v___jp_4378_:
{
lean_object* v___x_4380_; lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; lean_object* v___x_4389_; 
lean_inc(v___y_4379_);
v___x_4380_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4380_, 0, v___x_4377_);
lean_ctor_set(v___x_4380_, 1, v___y_4379_);
v___x_4381_ = lean_box(0);
v___x_4382_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4380_);
lean_ctor_set(v___x_4382_, 1, v___x_4381_);
v___x_4383_ = l_Lasm_JS_obj(v___x_4382_);
v___x_4384_ = lean_unsigned_to_nat(3u);
v___x_4385_ = lean_mk_empty_array_with_capacity(v___x_4384_);
v___x_4386_ = lean_array_push(v___x_4385_, v___x_4375_);
v___x_4387_ = lean_array_push(v___x_4386_, v___x_4376_);
v___x_4388_ = lean_array_push(v___x_4387_, v___x_4383_);
v___x_4389_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_4372_, v___x_4373_, v___x_4388_);
if (lean_obj_tag(v___x_4389_) == 0)
{
lean_object* v___x_4391_; uint8_t v_isShared_4392_; uint8_t v_isSharedCheck_4396_; 
v_isSharedCheck_4396_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4396_ == 0)
{
lean_object* v_unused_4397_; 
v_unused_4397_ = lean_ctor_get(v___x_4389_, 0);
lean_dec(v_unused_4397_);
v___x_4391_ = v___x_4389_;
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
else
{
lean_dec(v___x_4389_);
v___x_4391_ = lean_box(0);
v_isShared_4392_ = v_isSharedCheck_4396_;
goto v_resetjp_4390_;
}
v_resetjp_4390_:
{
lean_object* v___x_4394_; 
if (v_isShared_4392_ == 0)
{
lean_ctor_set(v___x_4391_, 0, v_a_4367_);
v___x_4394_ = v___x_4391_;
goto v_reusejp_4393_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v_a_4367_);
v___x_4394_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4393_;
}
v_reusejp_4393_:
{
return v___x_4394_;
}
}
}
else
{
lean_object* v_a_4398_; lean_object* v___x_4400_; uint8_t v_isShared_4401_; uint8_t v_isSharedCheck_4405_; 
lean_dec(v_a_4367_);
v_a_4398_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4405_ == 0)
{
v___x_4400_ = v___x_4389_;
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
else
{
lean_inc(v_a_4398_);
lean_dec(v___x_4389_);
v___x_4400_ = lean_box(0);
v_isShared_4401_ = v_isSharedCheck_4405_;
goto v_resetjp_4399_;
}
v_resetjp_4399_:
{
lean_object* v___x_4403_; 
if (v_isShared_4401_ == 0)
{
v___x_4403_ = v___x_4400_;
goto v_reusejp_4402_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v_a_4398_);
v___x_4403_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4402_;
}
v_reusejp_4402_:
{
return v___x_4403_;
}
}
}
}
}
else
{
lean_object* v_a_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4416_; 
lean_dec(v_a_4367_);
v_a_4409_ = lean_ctor_get(v___x_4371_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v___x_4371_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4411_ = v___x_4371_;
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_a_4409_);
lean_dec(v___x_4371_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4414_; 
if (v_isShared_4412_ == 0)
{
v___x_4414_ = v___x_4411_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4409_);
v___x_4414_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
return v___x_4414_;
}
}
}
}
else
{
lean_object* v_a_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4424_; 
lean_dec(v_a_4367_);
v_a_4417_ = lean_ctor_get(v___x_4368_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4368_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4419_ = v___x_4368_;
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
else
{
lean_inc(v_a_4417_);
lean_dec(v___x_4368_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4420_ == 0)
{
v___x_4422_ = v___x_4419_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4417_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
}
else
{
lean_object* v_a_4425_; lean_object* v___x_4427_; uint8_t v_isShared_4428_; uint8_t v_isSharedCheck_4432_; 
v_a_4425_ = lean_ctor_get(v___x_4366_, 0);
v_isSharedCheck_4432_ = !lean_is_exclusive(v___x_4366_);
if (v_isSharedCheck_4432_ == 0)
{
v___x_4427_ = v___x_4366_;
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
else
{
lean_inc(v_a_4425_);
lean_dec(v___x_4366_);
v___x_4427_ = lean_box(0);
v_isShared_4428_ = v_isSharedCheck_4432_;
goto v_resetjp_4426_;
}
v_resetjp_4426_:
{
lean_object* v___x_4430_; 
if (v_isShared_4428_ == 0)
{
v___x_4430_ = v___x_4427_;
goto v_reusejp_4429_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v_a_4425_);
v___x_4430_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4429_;
}
v_reusejp_4429_:
{
return v___x_4430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn___boxed(lean_object* v_f_4433_, lean_object* v_a_4434_){
_start:
{
lean_object* v_res_4435_; 
v_res_4435_ = l_Lasm_JS_Bun_WebSocketHandlerError_ofSyncFn(v_f_4433_);
return v_res_4435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorIdx(lean_object* v_x_4436_){
_start:
{
if (lean_obj_tag(v_x_4436_) == 0)
{
lean_object* v___x_4437_; 
v___x_4437_ = lean_unsigned_to_nat(0u);
return v___x_4437_;
}
else
{
lean_object* v___x_4438_; 
v___x_4438_ = lean_unsigned_to_nat(1u);
return v___x_4438_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorIdx___boxed(lean_object* v_x_4439_){
_start:
{
lean_object* v_res_4440_; 
v_res_4440_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorIdx(v_x_4439_);
lean_dec_ref(v_x_4439_);
return v_res_4440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(lean_object* v_t_4441_, lean_object* v_k_4442_){
_start:
{
uint8_t v_value_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
v_value_4443_ = lean_ctor_get_uint8(v_t_4441_, 0);
v___x_4444_ = lean_box(v_value_4443_);
v___x_4445_ = lean_apply_1(v_k_4442_, v___x_4444_);
return v___x_4445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg___boxed(lean_object* v_t_4446_, lean_object* v_k_4447_){
_start:
{
lean_object* v_res_4448_; 
v_res_4448_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(v_t_4446_, v_k_4447_);
lean_dec_ref(v_t_4446_);
return v_res_4448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim(lean_object* v_motive_4449_, lean_object* v_ctorIdx_4450_, lean_object* v_t_4451_, lean_object* v_h_4452_, lean_object* v_k_4453_){
_start:
{
lean_object* v___x_4454_; 
v___x_4454_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(v_t_4451_, v_k_4453_);
return v___x_4454_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___boxed(lean_object* v_motive_4455_, lean_object* v_ctorIdx_4456_, lean_object* v_t_4457_, lean_object* v_h_4458_, lean_object* v_k_4459_){
_start:
{
lean_object* v_res_4460_; 
v_res_4460_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim(v_motive_4455_, v_ctorIdx_4456_, v_t_4457_, v_h_4458_, v_k_4459_);
lean_dec_ref(v_t_4457_);
lean_dec(v_ctorIdx_4456_);
return v_res_4460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim___redArg(lean_object* v_t_4461_, lean_object* v_webSocketCompressor_4462_){
_start:
{
lean_object* v___x_4463_; 
v___x_4463_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(v_t_4461_, v_webSocketCompressor_4462_);
return v___x_4463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim___redArg___boxed(lean_object* v_t_4464_, lean_object* v_webSocketCompressor_4465_){
_start:
{
lean_object* v_res_4466_; 
v_res_4466_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim___redArg(v_t_4464_, v_webSocketCompressor_4465_);
lean_dec_ref(v_t_4464_);
return v_res_4466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim(lean_object* v_motive_4467_, lean_object* v_t_4468_, lean_object* v_h_4469_, lean_object* v_webSocketCompressor_4470_){
_start:
{
lean_object* v___x_4471_; 
v___x_4471_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(v_t_4468_, v_webSocketCompressor_4470_);
return v___x_4471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim___boxed(lean_object* v_motive_4472_, lean_object* v_t_4473_, lean_object* v_h_4474_, lean_object* v_webSocketCompressor_4475_){
_start:
{
lean_object* v_res_4476_; 
v_res_4476_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_webSocketCompressor_elim(v_motive_4472_, v_t_4473_, v_h_4474_, v_webSocketCompressor_4475_);
lean_dec_ref(v_t_4473_);
return v_res_4476_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim___redArg(lean_object* v_t_4477_, lean_object* v_boolean_4478_){
_start:
{
lean_object* v___x_4479_; 
v___x_4479_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(v_t_4477_, v_boolean_4478_);
return v___x_4479_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim___redArg___boxed(lean_object* v_t_4480_, lean_object* v_boolean_4481_){
_start:
{
lean_object* v_res_4482_; 
v_res_4482_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim___redArg(v_t_4480_, v_boolean_4481_);
lean_dec_ref(v_t_4480_);
return v_res_4482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim(lean_object* v_motive_4483_, lean_object* v_t_4484_, lean_object* v_h_4485_, lean_object* v_boolean_4486_){
_start:
{
lean_object* v___x_4487_; 
v___x_4487_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_ctorElim___redArg(v_t_4484_, v_boolean_4486_);
return v___x_4487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim___boxed(lean_object* v_motive_4488_, lean_object* v_t_4489_, lean_object* v_h_4490_, lean_object* v_boolean_4491_){
_start:
{
lean_object* v_res_4492_; 
v_res_4492_ = l_Lasm_JS_Bun_WebSocketCompressorOrBoolean_boolean_elim(v_motive_4488_, v_t_4489_, v_h_4490_, v_boolean_4491_);
lean_dec_ref(v_t_4489_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___lam__0(lean_object* v_x_4493_){
_start:
{
if (lean_obj_tag(v_x_4493_) == 0)
{
uint8_t v_value_4494_; 
v_value_4494_ = lean_ctor_get_uint8(v_x_4493_, 0);
lean_dec_ref_known(v_x_4493_, 0);
switch(v_value_4494_)
{
case 0:
{
lean_object* v___x_4495_; 
v___x_4495_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__1));
return v___x_4495_;
}
case 1:
{
lean_object* v___x_4496_; 
v___x_4496_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__3));
return v___x_4496_;
}
case 2:
{
lean_object* v___x_4497_; 
v___x_4497_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__5));
return v___x_4497_;
}
case 3:
{
lean_object* v___x_4498_; 
v___x_4498_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__7));
return v___x_4498_;
}
case 4:
{
lean_object* v___x_4499_; 
v___x_4499_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__9));
return v___x_4499_;
}
case 5:
{
lean_object* v___x_4500_; 
v___x_4500_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__11));
return v___x_4500_;
}
case 6:
{
lean_object* v___x_4501_; 
v___x_4501_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__13));
return v___x_4501_;
}
case 7:
{
lean_object* v___x_4502_; 
v___x_4502_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__15));
return v___x_4502_;
}
case 8:
{
lean_object* v___x_4503_; 
v___x_4503_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__17));
return v___x_4503_;
}
case 9:
{
lean_object* v___x_4504_; 
v___x_4504_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__19));
return v___x_4504_;
}
default: 
{
lean_object* v___x_4505_; 
v___x_4505_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__21));
return v___x_4505_;
}
}
}
else
{
uint8_t v_value_4506_; lean_object* v___x_4508_; uint8_t v_isShared_4509_; uint8_t v_isSharedCheck_4513_; 
v_value_4506_ = lean_ctor_get_uint8(v_x_4493_, 0);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_x_4493_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4508_ = v_x_4493_;
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
else
{
lean_dec(v_x_4493_);
v___x_4508_ = lean_box(0);
v_isShared_4509_ = v_isSharedCheck_4513_;
goto v_resetjp_4507_;
}
v_resetjp_4507_:
{
lean_object* v___x_4511_; 
if (v_isShared_4509_ == 0)
{
lean_ctor_set_tag(v___x_4508_, 2);
v___x_4511_ = v___x_4508_;
goto v_reusejp_4510_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_4512_, 0, v_value_4506_);
v___x_4511_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4510_;
}
v_reusejp_4510_:
{
return v___x_4511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___lam__0(uint8_t v_value_4516_){
_start:
{
lean_object* v___x_4517_; 
v___x_4517_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_4517_, 0, v_value_4516_);
return v___x_4517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___lam__0___boxed(lean_object* v_value_4518_){
_start:
{
uint8_t v_value_boxed_4519_; lean_object* v_res_4520_; 
v_value_boxed_4519_ = lean_unbox(v_value_4518_);
v_res_4520_ = l_Lasm_JS_Bun_instCoeWebSocketCompressorWebSocketCompressorOrBoolean___lam__0(v_value_boxed_4519_);
return v_res_4520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___lam__0(uint8_t v_value_4523_){
_start:
{
lean_object* v___x_4524_; 
v___x_4524_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4524_, 0, v_value_4523_);
return v___x_4524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___lam__0___boxed(lean_object* v_value_4525_){
_start:
{
uint8_t v_value_boxed_4526_; lean_object* v_res_4527_; 
v_value_boxed_4526_ = lean_unbox(v_value_4525_);
v_res_4527_ = l_Lasm_JS_Bun_instCoeBoolWebSocketCompressorOrBoolean___lam__0(v_value_boxed_4526_);
return v_res_4527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0(lean_object* v___f_4532_, lean_object* v_d_4533_){
_start:
{
lean_object* v_compress_4534_; lean_object* v_decompress_4535_; lean_object* v___x_4537_; uint8_t v_isShared_4538_; uint8_t v_isSharedCheck_4552_; 
v_compress_4534_ = lean_ctor_get(v_d_4533_, 0);
v_decompress_4535_ = lean_ctor_get(v_d_4533_, 1);
v_isSharedCheck_4552_ = !lean_is_exclusive(v_d_4533_);
if (v_isSharedCheck_4552_ == 0)
{
v___x_4537_ = v_d_4533_;
v_isShared_4538_ = v_isSharedCheck_4552_;
goto v_resetjp_4536_;
}
else
{
lean_inc(v_decompress_4535_);
lean_inc(v_compress_4534_);
lean_dec(v_d_4533_);
v___x_4537_ = lean_box(0);
v_isShared_4538_ = v_isSharedCheck_4552_;
goto v_resetjp_4536_;
}
v_resetjp_4536_:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4542_; 
v___x_4539_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__0));
lean_inc_ref(v___f_4532_);
v___x_4540_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4532_, v_compress_4534_);
if (v_isShared_4538_ == 0)
{
lean_ctor_set(v___x_4537_, 1, v___x_4540_);
lean_ctor_set(v___x_4537_, 0, v___x_4539_);
v___x_4542_ = v___x_4537_;
goto v_reusejp_4541_;
}
else
{
lean_object* v_reuseFailAlloc_4551_; 
v_reuseFailAlloc_4551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4551_, 0, v___x_4539_);
lean_ctor_set(v_reuseFailAlloc_4551_, 1, v___x_4540_);
v___x_4542_ = v_reuseFailAlloc_4551_;
goto v_reusejp_4541_;
}
v_reusejp_4541_:
{
lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4543_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__1));
v___x_4544_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4532_, v_decompress_4535_);
v___x_4545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4543_);
lean_ctor_set(v___x_4545_, 1, v___x_4544_);
v___x_4546_ = lean_unsigned_to_nat(2u);
v___x_4547_ = lean_mk_empty_array_with_capacity(v___x_4546_);
v___x_4548_ = lean_array_push(v___x_4547_, v___x_4542_);
v___x_4549_ = lean_array_push(v___x_4548_, v___x_4545_);
v___x_4550_ = l_Lasm_JS_Web_Support_fields(v___x_4549_);
lean_dec_ref(v___x_4549_);
return v___x_4550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorIdx(lean_object* v_x_4556_){
_start:
{
if (lean_obj_tag(v_x_4556_) == 0)
{
lean_object* v___x_4557_; 
v___x_4557_ = lean_unsigned_to_nat(0u);
return v___x_4557_;
}
else
{
lean_object* v___x_4558_; 
v___x_4558_ = lean_unsigned_to_nat(1u);
return v___x_4558_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorIdx___boxed(lean_object* v_x_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorIdx(v_x_4559_);
lean_dec_ref(v_x_4559_);
return v_res_4560_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___redArg(lean_object* v_t_4561_, lean_object* v_k_4562_){
_start:
{
if (lean_obj_tag(v_t_4561_) == 0)
{
uint8_t v_value_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; 
v_value_4563_ = lean_ctor_get_uint8(v_t_4561_, 0);
lean_dec_ref_known(v_t_4561_, 0);
v___x_4564_ = lean_box(v_value_4563_);
v___x_4565_ = lean_apply_1(v_k_4562_, v___x_4564_);
return v___x_4565_;
}
else
{
lean_object* v_value_4566_; lean_object* v___x_4567_; 
v_value_4566_ = lean_ctor_get(v_t_4561_, 0);
lean_inc_ref(v_value_4566_);
lean_dec_ref_known(v_t_4561_, 1);
v___x_4567_ = lean_apply_1(v_k_4562_, v_value_4566_);
return v___x_4567_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim(lean_object* v_motive_4568_, lean_object* v_ctorIdx_4569_, lean_object* v_t_4570_, lean_object* v_h_4571_, lean_object* v_k_4572_){
_start:
{
lean_object* v___x_4573_; 
v___x_4573_ = l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___redArg(v_t_4570_, v_k_4572_);
return v___x_4573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___boxed(lean_object* v_motive_4574_, lean_object* v_ctorIdx_4575_, lean_object* v_t_4576_, lean_object* v_h_4577_, lean_object* v_k_4578_){
_start:
{
lean_object* v_res_4579_; 
v_res_4579_ = l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim(v_motive_4574_, v_ctorIdx_4575_, v_t_4576_, v_h_4577_, v_k_4578_);
lean_dec(v_ctorIdx_4575_);
return v_res_4579_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_boolean_elim___redArg(lean_object* v_t_4580_, lean_object* v_boolean_4581_){
_start:
{
lean_object* v___x_4582_; 
v___x_4582_ = l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___redArg(v_t_4580_, v_boolean_4581_);
return v___x_4582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_boolean_elim(lean_object* v_motive_4583_, lean_object* v_t_4584_, lean_object* v_h_4585_, lean_object* v_boolean_4586_){
_start:
{
lean_object* v___x_4587_; 
v___x_4587_ = l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___redArg(v_t_4584_, v_boolean_4586_);
return v___x_4587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_webSocketHandlerPerMessageDeflate_elim___redArg(lean_object* v_t_4588_, lean_object* v_webSocketHandlerPerMessageDeflate_4589_){
_start:
{
lean_object* v___x_4590_; 
v___x_4590_ = l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___redArg(v_t_4588_, v_webSocketHandlerPerMessageDeflate_4589_);
return v___x_4590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_webSocketHandlerPerMessageDeflate_elim(lean_object* v_motive_4591_, lean_object* v_t_4592_, lean_object* v_h_4593_, lean_object* v_webSocketHandlerPerMessageDeflate_4594_){
_start:
{
lean_object* v___x_4595_; 
v___x_4595_ = l_Lasm_JS_Bun_BooleanOrWebSocketHandlerPerMessageDeflate_ctorElim___redArg(v_t_4592_, v_webSocketHandlerPerMessageDeflate_4594_);
return v___x_4595_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSBooleanOrWebSocketHandlerPerMessageDeflate___lam__0(lean_object* v_x_4596_){
_start:
{
if (lean_obj_tag(v_x_4596_) == 0)
{
uint8_t v_value_4597_; lean_object* v___x_4599_; uint8_t v_isShared_4600_; uint8_t v_isSharedCheck_4604_; 
v_value_4597_ = lean_ctor_get_uint8(v_x_4596_, 0);
v_isSharedCheck_4604_ = !lean_is_exclusive(v_x_4596_);
if (v_isSharedCheck_4604_ == 0)
{
v___x_4599_ = v_x_4596_;
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
else
{
lean_dec(v_x_4596_);
v___x_4599_ = lean_box(0);
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
v_resetjp_4598_:
{
lean_object* v___x_4602_; 
if (v_isShared_4600_ == 0)
{
lean_ctor_set_tag(v___x_4599_, 2);
v___x_4602_ = v___x_4599_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_4603_, 0, v_value_4597_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
return v___x_4602_;
}
}
}
else
{
lean_object* v_value_4605_; lean_object* v_compress_4606_; lean_object* v_decompress_4607_; lean_object* v___x_4609_; uint8_t v_isShared_4610_; uint8_t v_isSharedCheck_4625_; 
v_value_4605_ = lean_ctor_get(v_x_4596_, 0);
lean_inc_ref(v_value_4605_);
lean_dec_ref_known(v_x_4596_, 1);
v_compress_4606_ = lean_ctor_get(v_value_4605_, 0);
v_decompress_4607_ = lean_ctor_get(v_value_4605_, 1);
v_isSharedCheck_4625_ = !lean_is_exclusive(v_value_4605_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4609_ = v_value_4605_;
v_isShared_4610_ = v_isSharedCheck_4625_;
goto v_resetjp_4608_;
}
else
{
lean_inc(v_decompress_4607_);
lean_inc(v_compress_4606_);
lean_dec(v_value_4605_);
v___x_4609_ = lean_box(0);
v_isShared_4610_ = v_isSharedCheck_4625_;
goto v_resetjp_4608_;
}
v_resetjp_4608_:
{
lean_object* v___f_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4615_; 
v___f_4611_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressorOrBoolean___closed__0));
v___x_4612_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__0));
v___x_4613_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4611_, v_compress_4606_);
if (v_isShared_4610_ == 0)
{
lean_ctor_set(v___x_4609_, 1, v___x_4613_);
lean_ctor_set(v___x_4609_, 0, v___x_4612_);
v___x_4615_ = v___x_4609_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4624_; 
v_reuseFailAlloc_4624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4624_, 0, v___x_4612_);
lean_ctor_set(v_reuseFailAlloc_4624_, 1, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4624_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v___x_4616_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__1));
v___x_4617_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4611_, v_decompress_4607_);
v___x_4618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4618_, 0, v___x_4616_);
lean_ctor_set(v___x_4618_, 1, v___x_4617_);
v___x_4619_ = lean_unsigned_to_nat(2u);
v___x_4620_ = lean_mk_empty_array_with_capacity(v___x_4619_);
v___x_4621_ = lean_array_push(v___x_4620_, v___x_4615_);
v___x_4622_ = lean_array_push(v___x_4621_, v___x_4618_);
v___x_4623_ = l_Lasm_JS_Web_Support_fields(v___x_4622_);
lean_dec_ref(v___x_4622_);
return v___x_4623_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___lam__0(uint8_t v_value_4628_){
_start:
{
lean_object* v___x_4629_; 
v___x_4629_ = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(v___x_4629_, 0, v_value_4628_);
return v___x_4629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___lam__0___boxed(lean_object* v_value_4630_){
_start:
{
uint8_t v_value_boxed_4631_; lean_object* v_res_4632_; 
v_value_boxed_4631_ = lean_unbox(v_value_4630_);
v_res_4632_ = l_Lasm_JS_Bun_instCoeBoolBooleanOrWebSocketHandlerPerMessageDeflate___lam__0(v_value_boxed_4631_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeWebSocketHandlerPerMessageDeflateBooleanOrWebSocketHandlerPerMessageDeflate___lam__0(lean_object* v_value_4635_){
_start:
{
lean_object* v___x_4636_; 
v___x_4636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4636_, 0, v_value_4635_);
return v___x_4636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0(lean_object* v___f_4654_, lean_object* v___f_4655_, lean_object* v___f_4656_, lean_object* v___f_4657_, lean_object* v___f_4658_, lean_object* v___f_4659_, lean_object* v___f_4660_, lean_object* v___f_4661_, lean_object* v___f_4662_, lean_object* v___f_4663_, lean_object* v___f_4664_, lean_object* v___f_4665_, lean_object* v_d_4666_){
_start:
{
lean_object* v_data_4667_; lean_object* v_message_4668_; lean_object* v_open_4669_; lean_object* v_drain_4670_; lean_object* v_close_4671_; lean_object* v_ping_4672_; lean_object* v_pong_4673_; lean_object* v_error_4674_; lean_object* v_maxPayloadLength_4675_; lean_object* v_backpressureLimit_4676_; lean_object* v_closeOnBackpressureLimit_4677_; lean_object* v_idleTimeout_4678_; lean_object* v_publishToSelf_4679_; lean_object* v_sendPings_4680_; lean_object* v_perMessageDeflate_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; 
v_data_4667_ = lean_ctor_get(v_d_4666_, 0);
lean_inc(v_data_4667_);
v_message_4668_ = lean_ctor_get(v_d_4666_, 1);
lean_inc(v_message_4668_);
v_open_4669_ = lean_ctor_get(v_d_4666_, 2);
lean_inc(v_open_4669_);
v_drain_4670_ = lean_ctor_get(v_d_4666_, 3);
lean_inc(v_drain_4670_);
v_close_4671_ = lean_ctor_get(v_d_4666_, 4);
lean_inc(v_close_4671_);
v_ping_4672_ = lean_ctor_get(v_d_4666_, 5);
lean_inc(v_ping_4672_);
v_pong_4673_ = lean_ctor_get(v_d_4666_, 6);
lean_inc(v_pong_4673_);
v_error_4674_ = lean_ctor_get(v_d_4666_, 7);
lean_inc(v_error_4674_);
v_maxPayloadLength_4675_ = lean_ctor_get(v_d_4666_, 8);
lean_inc(v_maxPayloadLength_4675_);
v_backpressureLimit_4676_ = lean_ctor_get(v_d_4666_, 9);
lean_inc(v_backpressureLimit_4676_);
v_closeOnBackpressureLimit_4677_ = lean_ctor_get(v_d_4666_, 10);
lean_inc(v_closeOnBackpressureLimit_4677_);
v_idleTimeout_4678_ = lean_ctor_get(v_d_4666_, 11);
lean_inc(v_idleTimeout_4678_);
v_publishToSelf_4679_ = lean_ctor_get(v_d_4666_, 12);
lean_inc(v_publishToSelf_4679_);
v_sendPings_4680_ = lean_ctor_get(v_d_4666_, 13);
lean_inc(v_sendPings_4680_);
v_perMessageDeflate_4681_ = lean_ctor_get(v_d_4666_, 14);
lean_inc(v_perMessageDeflate_4681_);
lean_dec_ref(v_d_4666_);
v___x_4682_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0));
v___x_4683_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4654_, v_data_4667_);
v___x_4684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4684_, 0, v___x_4682_);
lean_ctor_set(v___x_4684_, 1, v___x_4683_);
v___x_4685_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__1));
v___x_4686_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4655_, v_message_4668_);
v___x_4687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4687_, 0, v___x_4685_);
lean_ctor_set(v___x_4687_, 1, v___x_4686_);
v___x_4688_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__2));
v___x_4689_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4656_, v_open_4669_);
v___x_4690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4688_);
lean_ctor_set(v___x_4690_, 1, v___x_4689_);
v___x_4691_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__3));
v___x_4692_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4657_, v_drain_4670_);
v___x_4693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4693_, 0, v___x_4691_);
lean_ctor_set(v___x_4693_, 1, v___x_4692_);
v___x_4694_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__4));
v___x_4695_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4658_, v_close_4671_);
v___x_4696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4696_, 0, v___x_4694_);
lean_ctor_set(v___x_4696_, 1, v___x_4695_);
v___x_4697_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__5));
v___x_4698_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4659_, v_ping_4672_);
v___x_4699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4697_);
lean_ctor_set(v___x_4699_, 1, v___x_4698_);
v___x_4700_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__6));
v___x_4701_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4660_, v_pong_4673_);
v___x_4702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4700_);
lean_ctor_set(v___x_4702_, 1, v___x_4701_);
v___x_4703_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7));
v___x_4704_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4661_, v_error_4674_);
v___x_4705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4705_, 0, v___x_4703_);
lean_ctor_set(v___x_4705_, 1, v___x_4704_);
v___x_4706_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__8));
lean_inc_ref(v___f_4662_);
v___x_4707_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4662_, v_maxPayloadLength_4675_);
v___x_4708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4708_, 0, v___x_4706_);
lean_ctor_set(v___x_4708_, 1, v___x_4707_);
v___x_4709_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__9));
v___x_4710_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4662_, v_backpressureLimit_4676_);
v___x_4711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4711_, 0, v___x_4709_);
lean_ctor_set(v___x_4711_, 1, v___x_4710_);
v___x_4712_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__10));
lean_inc_ref_n(v___f_4663_, 2);
v___x_4713_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4663_, v_closeOnBackpressureLimit_4677_);
v___x_4714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4712_);
lean_ctor_set(v___x_4714_, 1, v___x_4713_);
v___x_4715_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11));
v___x_4716_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4664_, v_idleTimeout_4678_);
v___x_4717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4717_, 0, v___x_4715_);
lean_ctor_set(v___x_4717_, 1, v___x_4716_);
v___x_4718_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__12));
v___x_4719_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4663_, v_publishToSelf_4679_);
v___x_4720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4718_);
lean_ctor_set(v___x_4720_, 1, v___x_4719_);
v___x_4721_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__13));
v___x_4722_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4663_, v_sendPings_4680_);
v___x_4723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4721_);
lean_ctor_set(v___x_4723_, 1, v___x_4722_);
v___x_4724_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__14));
v___x_4725_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4665_, v_perMessageDeflate_4681_);
v___x_4726_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4724_);
lean_ctor_set(v___x_4726_, 1, v___x_4725_);
v___x_4727_ = lean_unsigned_to_nat(15u);
v___x_4728_ = lean_mk_empty_array_with_capacity(v___x_4727_);
v___x_4729_ = lean_array_push(v___x_4728_, v___x_4684_);
v___x_4730_ = lean_array_push(v___x_4729_, v___x_4687_);
v___x_4731_ = lean_array_push(v___x_4730_, v___x_4690_);
v___x_4732_ = lean_array_push(v___x_4731_, v___x_4693_);
v___x_4733_ = lean_array_push(v___x_4732_, v___x_4696_);
v___x_4734_ = lean_array_push(v___x_4733_, v___x_4699_);
v___x_4735_ = lean_array_push(v___x_4734_, v___x_4702_);
v___x_4736_ = lean_array_push(v___x_4735_, v___x_4705_);
v___x_4737_ = lean_array_push(v___x_4736_, v___x_4708_);
v___x_4738_ = lean_array_push(v___x_4737_, v___x_4711_);
v___x_4739_ = lean_array_push(v___x_4738_, v___x_4714_);
v___x_4740_ = lean_array_push(v___x_4739_, v___x_4717_);
v___x_4741_ = lean_array_push(v___x_4740_, v___x_4720_);
v___x_4742_ = lean_array_push(v___x_4741_, v___x_4723_);
v___x_4743_ = lean_array_push(v___x_4742_, v___x_4726_);
v___x_4744_ = l_Lasm_JS_Web_Support_fields(v___x_4743_);
lean_dec_ref(v___x_4743_);
return v___x_4744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object* v___f_4770_, lean_object* v___f_4771_, lean_object* v___f_4772_, lean_object* v___f_4773_, lean_object* v___f_4774_, lean_object* v___f_4775_, lean_object* v___f_4776_, lean_object* v___f_4777_, lean_object* v___f_4778_, lean_object* v___x_4779_, lean_object* v_d_4780_){
_start:
{
lean_object* v_hostname_4781_; lean_object* v_port_4782_; lean_object* v_reusePort_4783_; lean_object* v_ipv6Only_4784_; lean_object* v_http3_4785_; lean_object* v_http2_4786_; lean_object* v_http1_4787_; lean_object* v_idleTimeout_4788_; lean_object* v_tls_4789_; lean_object* v_maxRequestBodySize_4790_; lean_object* v_development_4791_; lean_object* v_error_4792_; lean_object* v_id_4793_; lean_object* v_fetch_4794_; lean_object* v_routes_4795_; lean_object* v_websocket_4796_; lean_object* v_unix_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; lean_object* v___x_4836_; lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4855_; lean_object* v___x_4856_; lean_object* v___x_4857_; lean_object* v___x_4858_; lean_object* v___x_4859_; lean_object* v___x_4860_; lean_object* v___x_4861_; lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; lean_object* v___x_4867_; lean_object* v___x_4868_; 
v_hostname_4781_ = lean_ctor_get(v_d_4780_, 0);
lean_inc(v_hostname_4781_);
v_port_4782_ = lean_ctor_get(v_d_4780_, 1);
lean_inc(v_port_4782_);
v_reusePort_4783_ = lean_ctor_get(v_d_4780_, 2);
lean_inc(v_reusePort_4783_);
v_ipv6Only_4784_ = lean_ctor_get(v_d_4780_, 3);
lean_inc(v_ipv6Only_4784_);
v_http3_4785_ = lean_ctor_get(v_d_4780_, 4);
lean_inc(v_http3_4785_);
v_http2_4786_ = lean_ctor_get(v_d_4780_, 5);
lean_inc(v_http2_4786_);
v_http1_4787_ = lean_ctor_get(v_d_4780_, 6);
lean_inc(v_http1_4787_);
v_idleTimeout_4788_ = lean_ctor_get(v_d_4780_, 7);
lean_inc(v_idleTimeout_4788_);
v_tls_4789_ = lean_ctor_get(v_d_4780_, 8);
lean_inc(v_tls_4789_);
v_maxRequestBodySize_4790_ = lean_ctor_get(v_d_4780_, 9);
lean_inc(v_maxRequestBodySize_4790_);
v_development_4791_ = lean_ctor_get(v_d_4780_, 10);
lean_inc(v_development_4791_);
v_error_4792_ = lean_ctor_get(v_d_4780_, 11);
lean_inc(v_error_4792_);
v_id_4793_ = lean_ctor_get(v_d_4780_, 12);
lean_inc(v_id_4793_);
v_fetch_4794_ = lean_ctor_get(v_d_4780_, 13);
lean_inc(v_fetch_4794_);
v_routes_4795_ = lean_ctor_get(v_d_4780_, 14);
lean_inc(v_routes_4795_);
v_websocket_4796_ = lean_ctor_get(v_d_4780_, 15);
lean_inc(v_websocket_4796_);
v_unix_4797_ = lean_ctor_get(v_d_4780_, 16);
lean_inc(v_unix_4797_);
lean_dec_ref(v_d_4780_);
v___x_4798_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
lean_inc_ref_n(v___f_4770_, 2);
v___x_4799_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4770_, v_hostname_4781_);
v___x_4800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4798_);
lean_ctor_set(v___x_4800_, 1, v___x_4799_);
v___x_4801_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_4802_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4771_, v_port_4782_);
v___x_4803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4803_, 0, v___x_4801_);
lean_ctor_set(v___x_4803_, 1, v___x_4802_);
v___x_4804_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
lean_inc_ref_n(v___f_4772_, 4);
v___x_4805_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4772_, v_reusePort_4783_);
v___x_4806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4806_, 0, v___x_4804_);
lean_ctor_set(v___x_4806_, 1, v___x_4805_);
v___x_4807_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_4808_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4772_, v_ipv6Only_4784_);
v___x_4809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4807_);
lean_ctor_set(v___x_4809_, 1, v___x_4808_);
v___x_4810_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_4811_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4772_, v_http3_4785_);
v___x_4812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4812_, 0, v___x_4810_);
lean_ctor_set(v___x_4812_, 1, v___x_4811_);
v___x_4813_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_4814_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4772_, v_http2_4786_);
v___x_4815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4815_, 0, v___x_4813_);
lean_ctor_set(v___x_4815_, 1, v___x_4814_);
v___x_4816_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_4817_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4772_, v_http1_4787_);
v___x_4818_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4818_, 0, v___x_4816_);
lean_ctor_set(v___x_4818_, 1, v___x_4817_);
v___x_4819_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11));
lean_inc_ref(v___f_4773_);
v___x_4820_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4773_, v_idleTimeout_4788_);
v___x_4821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4821_, 0, v___x_4819_);
lean_ctor_set(v___x_4821_, 1, v___x_4820_);
v___x_4822_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_4823_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4774_, v_tls_4789_);
v___x_4824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4824_, 0, v___x_4822_);
lean_ctor_set(v___x_4824_, 1, v___x_4823_);
v___x_4825_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_4826_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4773_, v_maxRequestBodySize_4790_);
v___x_4827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4827_, 0, v___x_4825_);
lean_ctor_set(v___x_4827_, 1, v___x_4826_);
v___x_4828_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__9));
v___x_4829_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4775_, v_development_4791_);
v___x_4830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4830_, 0, v___x_4828_);
lean_ctor_set(v___x_4830_, 1, v___x_4829_);
v___x_4831_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7));
v___x_4832_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4776_, v_error_4792_);
v___x_4833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4833_, 0, v___x_4831_);
lean_ctor_set(v___x_4833_, 1, v___x_4832_);
v___x_4834_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__10));
v___x_4835_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4770_, v_id_4793_);
v___x_4836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4836_, 0, v___x_4834_);
lean_ctor_set(v___x_4836_, 1, v___x_4835_);
v___x_4837_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__11));
v___x_4838_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4777_, v_fetch_4794_);
v___x_4839_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4839_, 0, v___x_4837_);
lean_ctor_set(v___x_4839_, 1, v___x_4838_);
v___x_4840_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__12));
v___x_4841_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4778_, v_routes_4795_);
v___x_4842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4842_, 0, v___x_4840_);
lean_ctor_set(v___x_4842_, 1, v___x_4841_);
v___x_4843_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__13));
v___x_4844_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_4779_, v_websocket_4796_);
v___x_4845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4845_, 0, v___x_4843_);
lean_ctor_set(v___x_4845_, 1, v___x_4844_);
v___x_4846_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__14));
v___x_4847_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_4770_, v_unix_4797_);
v___x_4848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4848_, 0, v___x_4846_);
lean_ctor_set(v___x_4848_, 1, v___x_4847_);
v___x_4849_ = lean_unsigned_to_nat(17u);
v___x_4850_ = lean_mk_empty_array_with_capacity(v___x_4849_);
v___x_4851_ = lean_array_push(v___x_4850_, v___x_4800_);
v___x_4852_ = lean_array_push(v___x_4851_, v___x_4803_);
v___x_4853_ = lean_array_push(v___x_4852_, v___x_4806_);
v___x_4854_ = lean_array_push(v___x_4853_, v___x_4809_);
v___x_4855_ = lean_array_push(v___x_4854_, v___x_4812_);
v___x_4856_ = lean_array_push(v___x_4855_, v___x_4815_);
v___x_4857_ = lean_array_push(v___x_4856_, v___x_4818_);
v___x_4858_ = lean_array_push(v___x_4857_, v___x_4821_);
v___x_4859_ = lean_array_push(v___x_4858_, v___x_4824_);
v___x_4860_ = lean_array_push(v___x_4859_, v___x_4827_);
v___x_4861_ = lean_array_push(v___x_4860_, v___x_4830_);
v___x_4862_ = lean_array_push(v___x_4861_, v___x_4833_);
v___x_4863_ = lean_array_push(v___x_4862_, v___x_4836_);
v___x_4864_ = lean_array_push(v___x_4863_, v___x_4839_);
v___x_4865_ = lean_array_push(v___x_4864_, v___x_4842_);
v___x_4866_ = lean_array_push(v___x_4865_, v___x_4845_);
v___x_4867_ = lean_array_push(v___x_4866_, v___x_4848_);
v___x_4868_ = l_Lasm_JS_Web_Support_fields(v___x_4867_);
lean_dec_ref(v___x_4867_);
return v___x_4868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(lean_object* v_x_4880_){
_start:
{
if (lean_obj_tag(v_x_4880_) == 0)
{
lean_object* v___x_4881_; 
v___x_4881_ = lean_unsigned_to_nat(0u);
return v___x_4881_;
}
else
{
lean_object* v___x_4882_; 
v___x_4882_ = lean_unsigned_to_nat(1u);
return v___x_4882_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___boxed(lean_object* v_x_4883_){
_start:
{
lean_object* v_res_4884_; 
v_res_4884_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(v_x_4883_);
lean_dec_ref(v_x_4883_);
return v_res_4884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(lean_object* v_t_4885_, lean_object* v_k_4886_){
_start:
{
if (lean_obj_tag(v_t_4885_) == 0)
{
lean_object* v_value_4887_; lean_object* v___x_4888_; 
v_value_4887_ = lean_ctor_get(v_t_4885_, 0);
lean_inc(v_value_4887_);
lean_dec_ref_known(v_t_4885_, 1);
v___x_4888_ = lean_apply_1(v_k_4886_, v_value_4887_);
return v___x_4888_;
}
else
{
lean_object* v_value_4889_; lean_object* v___x_4890_; 
v_value_4889_ = lean_ctor_get(v_t_4885_, 0);
lean_inc_ref(v_value_4889_);
lean_dec_ref_known(v_t_4885_, 1);
v___x_4890_ = lean_apply_1(v_k_4886_, v_value_4889_);
return v___x_4890_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(lean_object* v_motive_4891_, lean_object* v_ctorIdx_4892_, lean_object* v_t_4893_, lean_object* v_h_4894_, lean_object* v_k_4895_){
_start:
{
lean_object* v___x_4896_; 
v___x_4896_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_4893_, v_k_4895_);
return v___x_4896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___boxed(lean_object* v_motive_4897_, lean_object* v_ctorIdx_4898_, lean_object* v_t_4899_, lean_object* v_h_4900_, lean_object* v_k_4901_){
_start:
{
lean_object* v_res_4902_; 
v_res_4902_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(v_motive_4897_, v_ctorIdx_4898_, v_t_4899_, v_h_4900_, v_k_4901_);
lean_dec(v_ctorIdx_4898_);
return v_res_4902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim___redArg(lean_object* v_t_4903_, lean_object* v_request_4904_){
_start:
{
lean_object* v___x_4905_; 
v___x_4905_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_4903_, v_request_4904_);
return v___x_4905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim(lean_object* v_motive_4906_, lean_object* v_t_4907_, lean_object* v_h_4908_, lean_object* v_request_4909_){
_start:
{
lean_object* v___x_4910_; 
v___x_4910_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_4907_, v_request_4909_);
return v___x_4910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim___redArg(lean_object* v_t_4911_, lean_object* v_domString_4912_){
_start:
{
lean_object* v___x_4913_; 
v___x_4913_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_4911_, v_domString_4912_);
return v___x_4913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim(lean_object* v_motive_4914_, lean_object* v_t_4915_, lean_object* v_h_4916_, lean_object* v_domString_4917_){
_start:
{
lean_object* v___x_4918_; 
v___x_4918_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_4915_, v_domString_4917_);
return v___x_4918_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0(lean_object* v_x_4919_){
_start:
{
if (lean_obj_tag(v_x_4919_) == 0)
{
lean_object* v_value_4920_; lean_object* v___x_4921_; lean_object* v___x_4922_; 
v_value_4920_ = lean_ctor_get(v_x_4919_, 0);
lean_inc(v_value_4920_);
lean_dec_ref_known(v_x_4919_, 1);
v___x_4921_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_4922_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4922_, 0, v_value_4920_);
lean_ctor_set(v___x_4922_, 1, v___x_4921_);
return v___x_4922_;
}
else
{
lean_object* v_value_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4930_; 
v_value_4923_ = lean_ctor_get(v_x_4919_, 0);
v_isSharedCheck_4930_ = !lean_is_exclusive(v_x_4919_);
if (v_isSharedCheck_4930_ == 0)
{
v___x_4925_ = v_x_4919_;
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_value_4923_);
lean_dec(v_x_4919_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4930_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4928_; 
if (v_isShared_4926_ == 0)
{
lean_ctor_set_tag(v___x_4925_, 4);
v___x_4928_ = v___x_4925_;
goto v_reusejp_4927_;
}
else
{
lean_object* v_reuseFailAlloc_4929_; 
v_reuseFailAlloc_4929_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4929_, 0, v_value_4923_);
v___x_4928_ = v_reuseFailAlloc_4929_;
goto v_reusejp_4927_;
}
v_reusejp_4927_:
{
return v___x_4928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object* v_value_4933_){
_start:
{
lean_object* v___x_4934_; 
v___x_4934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4934_, 0, v_value_4933_);
return v___x_4934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object* v_value_4937_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4938_, 0, v_value_4937_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0(lean_object* v___x_4942_, lean_object* v_d_4943_){
_start:
{
lean_object* v_headers_4944_; lean_object* v_data_4945_; lean_object* v___x_4947_; uint8_t v_isShared_4948_; uint8_t v_isSharedCheck_4961_; 
v_headers_4944_ = lean_ctor_get(v_d_4943_, 0);
v_data_4945_ = lean_ctor_get(v_d_4943_, 1);
v_isSharedCheck_4961_ = !lean_is_exclusive(v_d_4943_);
if (v_isSharedCheck_4961_ == 0)
{
v___x_4947_ = v_d_4943_;
v_isShared_4948_ = v_isSharedCheck_4961_;
goto v_resetjp_4946_;
}
else
{
lean_inc(v_data_4945_);
lean_inc(v_headers_4944_);
lean_dec(v_d_4943_);
v___x_4947_ = lean_box(0);
v_isShared_4948_ = v_isSharedCheck_4961_;
goto v_resetjp_4946_;
}
v_resetjp_4946_:
{
lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4952_; 
v___x_4949_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0___closed__0));
v___x_4950_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_4942_, v_headers_4944_);
if (v_isShared_4948_ == 0)
{
lean_ctor_set(v___x_4947_, 1, v___x_4950_);
lean_ctor_set(v___x_4947_, 0, v___x_4949_);
v___x_4952_ = v___x_4947_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4960_; 
v_reuseFailAlloc_4960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4960_, 0, v___x_4949_);
lean_ctor_set(v_reuseFailAlloc_4960_, 1, v___x_4950_);
v___x_4952_ = v_reuseFailAlloc_4960_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
lean_object* v___x_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; 
v___x_4953_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0));
v___x_4954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4954_, 0, v___x_4953_);
lean_ctor_set(v___x_4954_, 1, v_data_4945_);
v___x_4955_ = lean_unsigned_to_nat(2u);
v___x_4956_ = lean_mk_empty_array_with_capacity(v___x_4955_);
v___x_4957_ = lean_array_push(v___x_4956_, v___x_4952_);
v___x_4958_ = lean_array_push(v___x_4957_, v___x_4954_);
v___x_4959_ = l_Lasm_JS_Web_Support_fields(v___x_4958_);
lean_dec_ref(v___x_4958_);
return v___x_4959_;
}
}
}
}
static lean_object* _init_l_Lasm_JS_Bun_instToJSServerUpgradeOptions___closed__0(void){
_start:
{
lean_object* v___x_4962_; lean_object* v___f_4963_; 
v___x_4962_ = l_Lasm_JS_Web_instToJSHeadersInit;
v___f_4963_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0), 2, 1);
lean_closure_set(v___f_4963_, 0, v___x_4962_);
return v___f_4963_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instToJSServerUpgradeOptions(void){
_start:
{
lean_object* v___f_4964_; 
v___f_4964_ = lean_obj_once(&l_Lasm_JS_Bun_instToJSServerUpgradeOptions___closed__0, &l_Lasm_JS_Bun_instToJSServerUpgradeOptions___closed__0_once, _init_l_Lasm_JS_Bun_instToJSServerUpgradeOptions___closed__0);
return v___f_4964_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorIdx(lean_object* v_x_4965_){
_start:
{
switch(lean_obj_tag(v_x_4965_))
{
case 0:
{
lean_object* v___x_4966_; 
v___x_4966_ = lean_unsigned_to_nat(0u);
return v___x_4966_;
}
case 1:
{
lean_object* v___x_4967_; 
v___x_4967_ = lean_unsigned_to_nat(1u);
return v___x_4967_;
}
case 2:
{
lean_object* v___x_4968_; 
v___x_4968_ = lean_unsigned_to_nat(2u);
return v___x_4968_;
}
default: 
{
lean_object* v___x_4969_; 
v___x_4969_ = lean_unsigned_to_nat(3u);
return v___x_4969_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorIdx___boxed(lean_object* v_x_4970_){
_start:
{
lean_object* v_res_4971_; 
v_res_4971_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorIdx(v_x_4970_);
lean_dec_ref(v_x_4970_);
return v_res_4971_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(lean_object* v_t_4972_, lean_object* v_k_4973_){
_start:
{
if (lean_obj_tag(v_t_4972_) == 3)
{
lean_object* v_value_4974_; lean_object* v___x_4975_; 
v_value_4974_ = lean_ctor_get(v_t_4972_, 0);
lean_inc(v_value_4974_);
lean_dec_ref_known(v_t_4972_, 1);
v___x_4975_ = lean_apply_1(v_k_4973_, v_value_4974_);
return v___x_4975_;
}
else
{
lean_object* v_value_4976_; lean_object* v___x_4977_; 
v_value_4976_ = lean_ctor_get(v_t_4972_, 0);
lean_inc_ref(v_value_4976_);
lean_dec_ref(v_t_4972_);
v___x_4977_ = lean_apply_1(v_k_4973_, v_value_4976_);
return v___x_4977_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim(lean_object* v_motive_4978_, lean_object* v_ctorIdx_4979_, lean_object* v_t_4980_, lean_object* v_h_4981_, lean_object* v_k_4982_){
_start:
{
lean_object* v___x_4983_; 
v___x_4983_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_4980_, v_k_4982_);
return v___x_4983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___boxed(lean_object* v_motive_4984_, lean_object* v_ctorIdx_4985_, lean_object* v_t_4986_, lean_object* v_h_4987_, lean_object* v_k_4988_){
_start:
{
lean_object* v_res_4989_; 
v_res_4989_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim(v_motive_4984_, v_ctorIdx_4985_, v_t_4986_, v_h_4987_, v_k_4988_);
lean_dec(v_ctorIdx_4985_);
return v_res_4989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_domString_elim___redArg(lean_object* v_t_4990_, lean_object* v_domString_4991_){
_start:
{
lean_object* v___x_4992_; 
v___x_4992_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_4990_, v_domString_4991_);
return v___x_4992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_domString_elim(lean_object* v_motive_4993_, lean_object* v_t_4994_, lean_object* v_h_4995_, lean_object* v_domString_4996_){
_start:
{
lean_object* v___x_4997_; 
v___x_4997_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_4994_, v_domString_4996_);
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_uint8Array_elim___redArg(lean_object* v_t_4998_, lean_object* v_uint8Array_4999_){
_start:
{
lean_object* v___x_5000_; 
v___x_5000_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_4998_, v_uint8Array_4999_);
return v___x_5000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_uint8Array_elim(lean_object* v_motive_5001_, lean_object* v_t_5002_, lean_object* v_h_5003_, lean_object* v_uint8Array_5004_){
_start:
{
lean_object* v___x_5005_; 
v___x_5005_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_5002_, v_uint8Array_5004_);
return v___x_5005_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_arrayBuffer_elim___redArg(lean_object* v_t_5006_, lean_object* v_arrayBuffer_5007_){
_start:
{
lean_object* v___x_5008_; 
v___x_5008_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_5006_, v_arrayBuffer_5007_);
return v___x_5008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_arrayBuffer_elim(lean_object* v_motive_5009_, lean_object* v_t_5010_, lean_object* v_h_5011_, lean_object* v_arrayBuffer_5012_){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_5010_, v_arrayBuffer_5012_);
return v___x_5013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_blob_elim___redArg(lean_object* v_t_5014_, lean_object* v_blob_5015_){
_start:
{
lean_object* v___x_5016_; 
v___x_5016_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_5014_, v_blob_5015_);
return v___x_5016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_blob_elim(lean_object* v_motive_5017_, lean_object* v_t_5018_, lean_object* v_h_5019_, lean_object* v_blob_5020_){
_start:
{
lean_object* v___x_5021_; 
v___x_5021_ = l_Lasm_JS_Bun_DOMStringOrUint8ArrayOrArrayBufferOrBlob_ctorElim___redArg(v_t_5018_, v_blob_5020_);
return v___x_5021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0(lean_object* v_x_5022_){
_start:
{
switch(lean_obj_tag(v_x_5022_))
{
case 0:
{
lean_object* v_value_5023_; lean_object* v___x_5025_; uint8_t v_isShared_5026_; uint8_t v_isSharedCheck_5030_; 
v_value_5023_ = lean_ctor_get(v_x_5022_, 0);
v_isSharedCheck_5030_ = !lean_is_exclusive(v_x_5022_);
if (v_isSharedCheck_5030_ == 0)
{
v___x_5025_ = v_x_5022_;
v_isShared_5026_ = v_isSharedCheck_5030_;
goto v_resetjp_5024_;
}
else
{
lean_inc(v_value_5023_);
lean_dec(v_x_5022_);
v___x_5025_ = lean_box(0);
v_isShared_5026_ = v_isSharedCheck_5030_;
goto v_resetjp_5024_;
}
v_resetjp_5024_:
{
lean_object* v___x_5028_; 
if (v_isShared_5026_ == 0)
{
lean_ctor_set_tag(v___x_5025_, 4);
v___x_5028_ = v___x_5025_;
goto v_reusejp_5027_;
}
else
{
lean_object* v_reuseFailAlloc_5029_; 
v_reuseFailAlloc_5029_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5029_, 0, v_value_5023_);
v___x_5028_ = v_reuseFailAlloc_5029_;
goto v_reusejp_5027_;
}
v_reusejp_5027_:
{
return v___x_5028_;
}
}
}
case 3:
{
lean_object* v_value_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; 
v_value_5031_ = lean_ctor_get(v_x_5022_, 0);
lean_inc(v_value_5031_);
lean_dec_ref_known(v_x_5022_, 1);
v___x_5032_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5033_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5033_, 0, v_value_5031_);
lean_ctor_set(v___x_5033_, 1, v___x_5032_);
return v___x_5033_;
}
default: 
{
lean_object* v_value_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5041_; 
v_value_5034_ = lean_ctor_get(v_x_5022_, 0);
v_isSharedCheck_5041_ = !lean_is_exclusive(v_x_5022_);
if (v_isSharedCheck_5041_ == 0)
{
v___x_5036_ = v_x_5022_;
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_value_5034_);
lean_dec(v_x_5022_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5041_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v___x_5039_; 
if (v_isShared_5037_ == 0)
{
lean_ctor_set_tag(v___x_5036_, 6);
v___x_5039_ = v___x_5036_;
goto v_reusejp_5038_;
}
else
{
lean_object* v_reuseFailAlloc_5040_; 
v_reuseFailAlloc_5040_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5040_, 0, v_value_5034_);
v___x_5039_ = v_reuseFailAlloc_5040_;
goto v_reusejp_5038_;
}
v_reusejp_5038_:
{
return v___x_5039_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0(lean_object* v_value_5044_){
_start:
{
lean_object* v___x_5045_; 
v___x_5045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5045_, 0, v_value_5044_);
return v___x_5045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeBlobDOMStringOrUint8ArrayOrArrayBufferOrBlob___lam__0(lean_object* v_value_5048_){
_start:
{
lean_object* v___x_5049_; 
v___x_5049_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5049_, 0, v_value_5048_);
return v___x_5049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscriptions(lean_object* v_self_5053_){
_start:
{
lean_object* v___x_5055_; lean_object* v___x_5056_; 
v___x_5055_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_subscriptions___closed__0));
v___x_5056_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_getGlobal_go___at___00Lasm_JS_Web_Support_getGlobal___at___00Lasm_JS_Bun_argv_spec__0_spec__0_spec__1(v_self_5053_, v___x_5055_);
return v___x_5056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscriptions___boxed(lean_object* v_self_5057_, lean_object* v_a_5058_){
_start:
{
lean_object* v_res_5059_; 
v_res_5059_ = l_Lasm_JS_Bun_ServerWebSocket_subscriptions(v_self_5057_);
return v_res_5059_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_remoteAddress(lean_object* v_self_5061_){
_start:
{
lean_object* v___x_5063_; lean_object* v___x_5064_; 
v___x_5063_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_remoteAddress___closed__0));
v___x_5064_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_5061_, v___x_5063_);
return v___x_5064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_remoteAddress___boxed(lean_object* v_self_5065_, lean_object* v_a_5066_){
_start:
{
lean_object* v_res_5067_; 
v_res_5067_ = l_Lasm_JS_Bun_ServerWebSocket_remoteAddress(v_self_5065_);
return v_res_5067_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_readyState(lean_object* v_self_5069_){
_start:
{
lean_object* v___x_5071_; lean_object* v___x_5072_; 
v___x_5071_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_readyState___closed__0));
v___x_5072_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5069_, v___x_5071_);
return v___x_5072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_readyState___boxed(lean_object* v_self_5073_, lean_object* v_a_5074_){
_start:
{
lean_object* v_res_5075_; 
v_res_5075_ = l_Lasm_JS_Bun_ServerWebSocket_readyState(v_self_5073_);
return v_res_5075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1(lean_object* v_context_5078_, lean_object* v_d_5079_){
_start:
{
lean_object* v___y_5085_; lean_object* v___y_5086_; lean_object* v___y_5091_; lean_object* v_received_5092_; lean_object* v___y_5108_; uint8_t v_a_5136_; 
switch(lean_obj_tag(v_d_5079_))
{
case 1:
{
goto v___jp_5081_;
}
case 0:
{
goto v___jp_5081_;
}
default: 
{
if (lean_obj_tag(v_d_5079_) == 4)
{
lean_object* v_s_5140_; lean_object* v___x_5141_; uint8_t v___x_5142_; 
v_s_5140_ = lean_ctor_get(v_d_5079_, 0);
v___x_5141_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__0));
v___x_5142_ = lean_string_dec_eq(v_s_5140_, v___x_5141_);
if (v___x_5142_ == 0)
{
lean_object* v___x_5143_; uint8_t v___x_5144_; 
v___x_5143_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__2));
v___x_5144_ = lean_string_dec_eq(v_s_5140_, v___x_5143_);
if (v___x_5144_ == 0)
{
lean_object* v___x_5145_; uint8_t v___x_5146_; 
v___x_5145_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__4));
v___x_5146_ = lean_string_dec_eq(v_s_5140_, v___x_5145_);
if (v___x_5146_ == 0)
{
lean_object* v___x_5147_; uint8_t v___x_5148_; 
v___x_5147_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocketBinaryType___lam__0___closed__6));
v___x_5148_ = lean_string_dec_eq(v_s_5140_, v___x_5147_);
if (v___x_5148_ == 0)
{
goto v___jp_5110_;
}
else
{
uint8_t v___x_5149_; 
lean_dec_ref_known(v_d_5079_, 1);
v___x_5149_ = 3;
v_a_5136_ = v___x_5149_;
goto v___jp_5135_;
}
}
else
{
uint8_t v___x_5150_; 
lean_dec_ref_known(v_d_5079_, 1);
v___x_5150_ = 2;
v_a_5136_ = v___x_5150_;
goto v___jp_5135_;
}
}
else
{
uint8_t v___x_5151_; 
lean_dec_ref_known(v_d_5079_, 1);
v___x_5151_ = 1;
v_a_5136_ = v___x_5151_;
goto v___jp_5135_;
}
}
else
{
uint8_t v___x_5152_; 
lean_dec_ref_known(v_d_5079_, 1);
v___x_5152_ = 0;
v_a_5136_ = v___x_5152_;
goto v___jp_5135_;
}
}
else
{
goto v___jp_5110_;
}
}
}
v___jp_5081_:
{
lean_object* v___x_5082_; lean_object* v___x_5083_; 
v___x_5082_ = lean_box(0);
v___x_5083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5082_);
return v___x_5083_;
}
v___jp_5084_:
{
lean_object* v___x_5087_; lean_object* v___x_5088_; lean_object* v___x_5089_; 
v___x_5087_ = lean_string_append(v___y_5085_, v___y_5086_);
v___x_5088_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5088_, 0, v___x_5087_);
v___x_5089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5089_, 0, v___x_5088_);
return v___x_5089_;
}
v___jp_5090_:
{
lean_object* v___x_5093_; lean_object* v___x_5094_; lean_object* v___x_5095_; lean_object* v___x_5096_; lean_object* v___x_5097_; lean_object* v___x_5098_; lean_object* v___x_5099_; lean_object* v___x_5100_; lean_object* v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5103_; uint8_t v___x_5104_; 
v___x_5093_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5094_ = lean_string_append(v___x_5093_, v_context_5078_);
v___x_5095_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5096_ = lean_string_append(v___x_5094_, v___x_5095_);
v___x_5097_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__0));
v___x_5098_ = lean_string_append(v___x_5096_, v___x_5097_);
v___x_5099_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5100_ = lean_string_append(v___x_5098_, v___x_5099_);
v___x_5101_ = lean_string_append(v___x_5100_, v_received_5092_);
lean_dec_ref(v_received_5092_);
v___x_5102_ = lean_string_utf8_byte_size(v___y_5091_);
v___x_5103_ = lean_unsigned_to_nat(0u);
v___x_5104_ = lean_nat_dec_eq(v___x_5102_, v___x_5103_);
if (v___x_5104_ == 0)
{
lean_object* v___x_5105_; 
v___x_5105_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__1));
v___y_5085_ = v___x_5101_;
v___y_5086_ = v___x_5105_;
goto v___jp_5084_;
}
else
{
lean_object* v___x_5106_; 
v___x_5106_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___y_5085_ = v___x_5101_;
v___y_5086_ = v___x_5106_;
goto v___jp_5084_;
}
}
v___jp_5107_:
{
lean_object* v___x_5109_; 
v___x_5109_ = l_Lasm_JS_Data_describe(v_d_5079_);
v___y_5091_ = v___y_5108_;
v_received_5092_ = v___x_5109_;
goto v___jp_5090_;
}
v___jp_5110_:
{
lean_object* v___x_5111_; 
v___x_5111_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0));
if (lean_obj_tag(v_d_5079_) == 9)
{
lean_object* v_value_5112_; lean_object* v_description_5113_; lean_object* v___x_5114_; uint8_t v___x_5115_; 
v_value_5112_ = lean_ctor_get(v_d_5079_, 0);
v_description_5113_ = lean_ctor_get(v_d_5079_, 1);
v___x_5114_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5115_ = lean_string_dec_eq(v_description_5113_, v___x_5114_);
if (v___x_5115_ == 0)
{
v___y_5108_ = v___x_5111_;
goto v___jp_5107_;
}
else
{
lean_object* v___x_5117_; uint8_t v_isShared_5118_; uint8_t v_isSharedCheck_5132_; 
lean_inc(v_value_5112_);
v_isSharedCheck_5132_ = !lean_is_exclusive(v_d_5079_);
if (v_isSharedCheck_5132_ == 0)
{
lean_object* v_unused_5133_; lean_object* v_unused_5134_; 
v_unused_5133_ = lean_ctor_get(v_d_5079_, 1);
lean_dec(v_unused_5133_);
v_unused_5134_ = lean_ctor_get(v_d_5079_, 0);
lean_dec(v_unused_5134_);
v___x_5117_ = v_d_5079_;
v_isShared_5118_ = v_isSharedCheck_5132_;
goto v_resetjp_5116_;
}
else
{
lean_dec(v_d_5079_);
v___x_5117_ = lean_box(0);
v_isShared_5118_ = v_isSharedCheck_5132_;
goto v_resetjp_5116_;
}
v_resetjp_5116_:
{
uint32_t v___x_5119_; uint64_t v___x_5120_; lean_object* v___x_5122_; 
v___x_5119_ = 206;
v___x_5120_ = 0ULL;
lean_inc(v_value_5112_);
if (v_isShared_5118_ == 0)
{
lean_ctor_set(v___x_5117_, 1, v___x_5114_);
v___x_5122_ = v___x_5117_;
goto v_reusejp_5121_;
}
else
{
lean_object* v_reuseFailAlloc_5131_; 
v_reuseFailAlloc_5131_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5131_, 0, v_value_5112_);
lean_ctor_set(v_reuseFailAlloc_5131_, 1, v___x_5114_);
v___x_5122_ = v_reuseFailAlloc_5131_;
goto v_reusejp_5121_;
}
v_reusejp_5121_:
{
uint32_t v___x_5123_; lean_object* v___x_5124_; 
v___x_5123_ = lasm_js_value_handle(v_value_5112_);
lean_dec(v_value_5112_);
v___x_5124_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5119_, v___x_5120_, v___x_5122_, v___x_5123_);
lean_dec_ref(v___x_5122_);
if (lean_obj_tag(v___x_5124_) == 0)
{
lean_object* v_a_5125_; uint8_t v___x_5126_; 
v_a_5125_ = lean_ctor_get(v___x_5124_, 0);
lean_inc(v_a_5125_);
lean_dec_ref_known(v___x_5124_, 1);
v___x_5126_ = lean_string_validate_utf8(v_a_5125_);
if (v___x_5126_ == 0)
{
lean_object* v___x_5127_; lean_object* v___x_5128_; 
lean_dec(v_a_5125_);
v___x_5127_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5128_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5127_);
v___y_5091_ = v___x_5111_;
v_received_5092_ = v___x_5128_;
goto v___jp_5090_;
}
else
{
lean_object* v___x_5129_; 
v___x_5129_ = lean_string_from_utf8_unchecked(v_a_5125_);
v___y_5091_ = v___x_5111_;
v_received_5092_ = v___x_5129_;
goto v___jp_5090_;
}
}
else
{
lean_object* v___x_5130_; 
lean_dec_ref_known(v___x_5124_, 1);
v___x_5130_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v___y_5091_ = v___x_5111_;
v_received_5092_ = v___x_5130_;
goto v___jp_5090_;
}
}
}
}
}
else
{
v___y_5108_ = v___x_5111_;
goto v___jp_5107_;
}
}
v___jp_5135_:
{
lean_object* v___x_5137_; lean_object* v___x_5138_; lean_object* v___x_5139_; 
v___x_5137_ = lean_box(v_a_5136_);
v___x_5138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5138_, 0, v___x_5137_);
v___x_5139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5139_, 0, v___x_5138_);
return v___x_5139_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5153_, lean_object* v_d_5154_, lean_object* v_a_5155_){
_start:
{
lean_object* v_res_5156_; 
v_res_5156_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1(v_context_5153_, v_d_5154_);
lean_dec_ref(v_context_5153_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0(lean_object* v_context_5157_, lean_object* v_bytes_5158_){
_start:
{
lean_object* v___x_5160_; 
v___x_5160_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5158_);
if (lean_obj_tag(v___x_5160_) == 0)
{
lean_object* v_a_5161_; lean_object* v___x_5162_; 
v_a_5161_ = lean_ctor_get(v___x_5160_, 0);
lean_inc(v_a_5161_);
lean_dec_ref_known(v___x_5160_, 1);
v___x_5162_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1(v_context_5157_, v_a_5161_);
return v___x_5162_;
}
else
{
lean_object* v_a_5163_; lean_object* v___x_5165_; uint8_t v_isShared_5166_; uint8_t v_isSharedCheck_5170_; 
v_a_5163_ = lean_ctor_get(v___x_5160_, 0);
v_isSharedCheck_5170_ = !lean_is_exclusive(v___x_5160_);
if (v_isSharedCheck_5170_ == 0)
{
v___x_5165_ = v___x_5160_;
v_isShared_5166_ = v_isSharedCheck_5170_;
goto v_resetjp_5164_;
}
else
{
lean_inc(v_a_5163_);
lean_dec(v___x_5160_);
v___x_5165_ = lean_box(0);
v_isShared_5166_ = v_isSharedCheck_5170_;
goto v_resetjp_5164_;
}
v_resetjp_5164_:
{
lean_object* v___x_5168_; 
if (v_isShared_5166_ == 0)
{
v___x_5168_ = v___x_5165_;
goto v_reusejp_5167_;
}
else
{
lean_object* v_reuseFailAlloc_5169_; 
v_reuseFailAlloc_5169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5169_, 0, v_a_5163_);
v___x_5168_ = v_reuseFailAlloc_5169_;
goto v_reusejp_5167_;
}
v_reusejp_5167_:
{
return v___x_5168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0___boxed(lean_object* v_context_5171_, lean_object* v_bytes_5172_, lean_object* v_a_5173_){
_start:
{
lean_object* v_res_5174_; 
v_res_5174_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0(v_context_5171_, v_bytes_5172_);
lean_dec_ref(v_bytes_5172_);
lean_dec_ref(v_context_5171_);
return v_res_5174_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0(void){
_start:
{
uint8_t v___x_5175_; uint64_t v___x_5176_; 
v___x_5175_ = 0;
v___x_5176_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_5175_);
return v___x_5176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0(lean_object* v_o_5178_, lean_object* v_key_5179_){
_start:
{
lean_object* v_k_5181_; lean_object* v___x_5182_; 
v_k_5181_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5181_, 0, v_key_5179_);
v___x_5182_ = l_Lasm_JS_Wire_encodeIO(v_k_5181_);
if (lean_obj_tag(v___x_5182_) == 0)
{
lean_object* v_a_5183_; uint32_t v___x_5184_; uint32_t v___x_5185_; uint64_t v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; 
v_a_5183_ = lean_ctor_get(v___x_5182_, 0);
lean_inc(v_a_5183_);
lean_dec_ref_known(v___x_5182_, 1);
v___x_5184_ = 203;
v___x_5185_ = lasm_js_value_handle(v_o_5178_);
v___x_5186_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0);
v___x_5187_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5188_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5188_, 0, v_o_5178_);
lean_ctor_set(v___x_5188_, 1, v___x_5187_);
v___x_5189_ = lean_unsigned_to_nat(2u);
v___x_5190_ = lean_mk_empty_array_with_capacity(v___x_5189_);
lean_inc_ref(v_k_5181_);
v___x_5191_ = lean_array_push(v___x_5190_, v_k_5181_);
v___x_5192_ = lean_array_push(v___x_5191_, v___x_5188_);
v___x_5193_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5193_, 0, v___x_5192_);
v___x_5194_ = lasm_js_call(v___x_5184_, v___x_5185_, v___x_5186_, v_a_5183_, v___x_5193_);
lean_dec_ref_known(v___x_5193_, 1);
lean_dec(v_a_5183_);
if (lean_obj_tag(v___x_5194_) == 0)
{
lean_object* v_a_5195_; lean_object* v___x_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v___x_5199_; 
v_a_5195_ = lean_ctor_get(v___x_5194_, 0);
lean_inc(v_a_5195_);
lean_dec_ref_known(v___x_5194_, 1);
v___x_5196_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__1));
v___x_5197_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5181_);
v___x_5198_ = lean_string_append(v___x_5196_, v___x_5197_);
lean_dec_ref(v___x_5197_);
v___x_5199_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0(v___x_5198_, v_a_5195_);
lean_dec(v_a_5195_);
lean_dec_ref(v___x_5198_);
return v___x_5199_;
}
else
{
lean_object* v_a_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5207_; 
lean_dec_ref_known(v_k_5181_, 1);
v_a_5200_ = lean_ctor_get(v___x_5194_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v___x_5194_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5202_ = v___x_5194_;
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_a_5200_);
lean_dec(v___x_5194_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5205_; 
if (v_isShared_5203_ == 0)
{
v___x_5205_ = v___x_5202_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_a_5200_);
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
else
{
lean_object* v_a_5208_; lean_object* v___x_5210_; uint8_t v_isShared_5211_; uint8_t v_isSharedCheck_5215_; 
lean_dec_ref_known(v_k_5181_, 1);
lean_dec(v_o_5178_);
v_a_5208_ = lean_ctor_get(v___x_5182_, 0);
v_isSharedCheck_5215_ = !lean_is_exclusive(v___x_5182_);
if (v_isSharedCheck_5215_ == 0)
{
v___x_5210_ = v___x_5182_;
v_isShared_5211_ = v_isSharedCheck_5215_;
goto v_resetjp_5209_;
}
else
{
lean_inc(v_a_5208_);
lean_dec(v___x_5182_);
v___x_5210_ = lean_box(0);
v_isShared_5211_ = v_isSharedCheck_5215_;
goto v_resetjp_5209_;
}
v_resetjp_5209_:
{
lean_object* v___x_5213_; 
if (v_isShared_5211_ == 0)
{
v___x_5213_ = v___x_5210_;
goto v_reusejp_5212_;
}
else
{
lean_object* v_reuseFailAlloc_5214_; 
v_reuseFailAlloc_5214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5214_, 0, v_a_5208_);
v___x_5213_ = v_reuseFailAlloc_5214_;
goto v_reusejp_5212_;
}
v_reusejp_5212_:
{
return v___x_5213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___boxed(lean_object* v_o_5216_, lean_object* v_key_5217_, lean_object* v_a_5218_){
_start:
{
lean_object* v_res_5219_; 
v_res_5219_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0(v_o_5216_, v_key_5217_);
return v_res_5219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_binaryType(lean_object* v_self_5221_){
_start:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; 
v___x_5223_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_binaryType___closed__0));
v___x_5224_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0(v_self_5221_, v___x_5223_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_binaryType___boxed(lean_object* v_self_5225_, lean_object* v_a_5226_){
_start:
{
lean_object* v_res_5227_; 
v_res_5227_ = l_Lasm_JS_Bun_ServerWebSocket_binaryType(v_self_5225_);
return v_res_5227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_data(lean_object* v_self_5228_){
_start:
{
lean_object* v___x_5230_; lean_object* v___x_5231_; 
v___x_5230_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0));
v___x_5231_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_SocketListener_data_spec__0(v_self_5228_, v___x_5230_);
return v___x_5231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_data___boxed(lean_object* v_self_5232_, lean_object* v_a_5233_){
_start:
{
lean_object* v_res_5234_; 
v_res_5234_ = l_Lasm_JS_Bun_ServerWebSocket_data(v_self_5232_);
return v_res_5234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isPaused(lean_object* v_self_5236_){
_start:
{
lean_object* v___x_5238_; lean_object* v___x_5239_; 
v___x_5238_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_isPaused___closed__0));
v___x_5239_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5236_, v___x_5238_);
return v___x_5239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isPaused___boxed(lean_object* v_self_5240_, lean_object* v_a_5241_){
_start:
{
lean_object* v_res_5242_; 
v_res_5242_ = l_Lasm_JS_Bun_ServerWebSocket_isPaused(v_self_5240_);
return v_res_5242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_send(lean_object* v_self_5244_, lean_object* v_data_5245_, lean_object* v_compress_5246_){
_start:
{
lean_object* v___x_5248_; lean_object* v___y_5250_; 
v___x_5248_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_send___closed__0));
switch(lean_obj_tag(v_data_5245_))
{
case 0:
{
lean_object* v_value_5258_; lean_object* v___x_5260_; uint8_t v_isShared_5261_; uint8_t v_isSharedCheck_5265_; 
v_value_5258_ = lean_ctor_get(v_data_5245_, 0);
v_isSharedCheck_5265_ = !lean_is_exclusive(v_data_5245_);
if (v_isSharedCheck_5265_ == 0)
{
v___x_5260_ = v_data_5245_;
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
else
{
lean_inc(v_value_5258_);
lean_dec(v_data_5245_);
v___x_5260_ = lean_box(0);
v_isShared_5261_ = v_isSharedCheck_5265_;
goto v_resetjp_5259_;
}
v_resetjp_5259_:
{
lean_object* v___x_5263_; 
if (v_isShared_5261_ == 0)
{
lean_ctor_set_tag(v___x_5260_, 4);
v___x_5263_ = v___x_5260_;
goto v_reusejp_5262_;
}
else
{
lean_object* v_reuseFailAlloc_5264_; 
v_reuseFailAlloc_5264_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5264_, 0, v_value_5258_);
v___x_5263_ = v_reuseFailAlloc_5264_;
goto v_reusejp_5262_;
}
v_reusejp_5262_:
{
v___y_5250_ = v___x_5263_;
goto v___jp_5249_;
}
}
}
case 1:
{
lean_object* v_value_5266_; lean_object* v___x_5268_; uint8_t v_isShared_5269_; uint8_t v_isSharedCheck_5273_; 
v_value_5266_ = lean_ctor_get(v_data_5245_, 0);
v_isSharedCheck_5273_ = !lean_is_exclusive(v_data_5245_);
if (v_isSharedCheck_5273_ == 0)
{
v___x_5268_ = v_data_5245_;
v_isShared_5269_ = v_isSharedCheck_5273_;
goto v_resetjp_5267_;
}
else
{
lean_inc(v_value_5266_);
lean_dec(v_data_5245_);
v___x_5268_ = lean_box(0);
v_isShared_5269_ = v_isSharedCheck_5273_;
goto v_resetjp_5267_;
}
v_resetjp_5267_:
{
lean_object* v___x_5271_; 
if (v_isShared_5269_ == 0)
{
lean_ctor_set_tag(v___x_5268_, 6);
v___x_5271_ = v___x_5268_;
goto v_reusejp_5270_;
}
else
{
lean_object* v_reuseFailAlloc_5272_; 
v_reuseFailAlloc_5272_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5272_, 0, v_value_5266_);
v___x_5271_ = v_reuseFailAlloc_5272_;
goto v_reusejp_5270_;
}
v_reusejp_5270_:
{
v___y_5250_ = v___x_5271_;
goto v___jp_5249_;
}
}
}
default: 
{
lean_object* v_value_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; 
v_value_5274_ = lean_ctor_get(v_data_5245_, 0);
lean_inc(v_value_5274_);
lean_dec_ref_known(v_data_5245_, 1);
v___x_5275_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5276_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5276_, 0, v_value_5274_);
lean_ctor_set(v___x_5276_, 1, v___x_5275_);
v___y_5250_ = v___x_5276_;
goto v___jp_5249_;
}
}
v___jp_5249_:
{
lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; 
v___x_5251_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_compress_5246_);
v___x_5252_ = lean_unsigned_to_nat(2u);
v___x_5253_ = lean_mk_empty_array_with_capacity(v___x_5252_);
v___x_5254_ = lean_array_push(v___x_5253_, v___y_5250_);
v___x_5255_ = lean_array_push(v___x_5254_, v___x_5251_);
v___x_5256_ = l_Lasm_JS_Web_Support_args(v___x_5255_);
v___x_5257_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5244_, v___x_5248_, v___x_5256_);
return v___x_5257_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_send___boxed(lean_object* v_self_5277_, lean_object* v_data_5278_, lean_object* v_compress_5279_, lean_object* v_a_5280_){
_start:
{
lean_object* v_res_5281_; 
v_res_5281_ = l_Lasm_JS_Bun_ServerWebSocket_send(v_self_5277_, v_data_5278_, v_compress_5279_);
lean_dec(v_compress_5279_);
return v_res_5281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendText(lean_object* v_self_5283_, lean_object* v_data_5284_, lean_object* v_compress_5285_){
_start:
{
lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; 
v___x_5287_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_sendText___closed__0));
v___x_5288_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5288_, 0, v_data_5284_);
v___x_5289_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_compress_5285_);
v___x_5290_ = lean_unsigned_to_nat(2u);
v___x_5291_ = lean_mk_empty_array_with_capacity(v___x_5290_);
v___x_5292_ = lean_array_push(v___x_5291_, v___x_5288_);
v___x_5293_ = lean_array_push(v___x_5292_, v___x_5289_);
v___x_5294_ = l_Lasm_JS_Web_Support_args(v___x_5293_);
v___x_5295_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5283_, v___x_5287_, v___x_5294_);
return v___x_5295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendText___boxed(lean_object* v_self_5296_, lean_object* v_data_5297_, lean_object* v_compress_5298_, lean_object* v_a_5299_){
_start:
{
lean_object* v_res_5300_; 
v_res_5300_ = l_Lasm_JS_Bun_ServerWebSocket_sendText(v_self_5296_, v_data_5297_, v_compress_5298_);
lean_dec(v_compress_5298_);
return v_res_5300_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendBinary(lean_object* v_self_5302_, lean_object* v_data_5303_, lean_object* v_compress_5304_){
_start:
{
lean_object* v___x_5306_; lean_object* v___y_5308_; 
v___x_5306_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_sendBinary___closed__0));
if (lean_obj_tag(v_data_5303_) == 0)
{
lean_object* v_value_5316_; lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5323_; 
v_value_5316_ = lean_ctor_get(v_data_5303_, 0);
v_isSharedCheck_5323_ = !lean_is_exclusive(v_data_5303_);
if (v_isSharedCheck_5323_ == 0)
{
v___x_5318_ = v_data_5303_;
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
else
{
lean_inc(v_value_5316_);
lean_dec(v_data_5303_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5323_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
lean_ctor_set_tag(v___x_5318_, 6);
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5322_; 
v_reuseFailAlloc_5322_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5322_, 0, v_value_5316_);
v___x_5321_ = v_reuseFailAlloc_5322_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
v___y_5308_ = v___x_5321_;
goto v___jp_5307_;
}
}
}
else
{
lean_object* v_value_5324_; lean_object* v___x_5325_; lean_object* v___x_5326_; 
v_value_5324_ = lean_ctor_get(v_data_5303_, 0);
lean_inc(v_value_5324_);
lean_dec_ref_known(v_data_5303_, 1);
v___x_5325_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5326_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5326_, 0, v_value_5324_);
lean_ctor_set(v___x_5326_, 1, v___x_5325_);
v___y_5308_ = v___x_5326_;
goto v___jp_5307_;
}
v___jp_5307_:
{
lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; 
v___x_5309_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_compress_5304_);
v___x_5310_ = lean_unsigned_to_nat(2u);
v___x_5311_ = lean_mk_empty_array_with_capacity(v___x_5310_);
v___x_5312_ = lean_array_push(v___x_5311_, v___y_5308_);
v___x_5313_ = lean_array_push(v___x_5312_, v___x_5309_);
v___x_5314_ = l_Lasm_JS_Web_Support_args(v___x_5313_);
v___x_5315_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5302_, v___x_5306_, v___x_5314_);
return v___x_5315_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_sendBinary___boxed(lean_object* v_self_5327_, lean_object* v_data_5328_, lean_object* v_compress_5329_, lean_object* v_a_5330_){
_start:
{
lean_object* v_res_5331_; 
v_res_5331_ = l_Lasm_JS_Bun_ServerWebSocket_sendBinary(v_self_5327_, v_data_5328_, v_compress_5329_);
lean_dec(v_compress_5329_);
return v_res_5331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_close(lean_object* v_self_5332_, lean_object* v_code_5333_, lean_object* v_reason_5334_){
_start:
{
lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___x_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; lean_object* v___x_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; 
v___x_5336_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__4));
v___x_5337_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_code_5333_);
v___x_5338_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_reason_5334_);
v___x_5339_ = lean_unsigned_to_nat(2u);
v___x_5340_ = lean_mk_empty_array_with_capacity(v___x_5339_);
v___x_5341_ = lean_array_push(v___x_5340_, v___x_5337_);
v___x_5342_ = lean_array_push(v___x_5341_, v___x_5338_);
v___x_5343_ = l_Lasm_JS_Web_Support_args(v___x_5342_);
v___x_5344_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5332_, v___x_5336_, v___x_5343_);
return v___x_5344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_close___boxed(lean_object* v_self_5345_, lean_object* v_code_5346_, lean_object* v_reason_5347_, lean_object* v_a_5348_){
_start:
{
lean_object* v_res_5349_; 
v_res_5349_ = l_Lasm_JS_Bun_ServerWebSocket_close(v_self_5345_, v_code_5346_, v_reason_5347_);
lean_dec(v_code_5346_);
return v_res_5349_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2(void){
_start:
{
lean_object* v___x_5353_; lean_object* v___x_5354_; 
v___x_5353_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__1));
v___x_5354_ = l_Lasm_JS_Web_Support_args(v___x_5353_);
return v___x_5354_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_terminate(lean_object* v_self_5355_){
_start:
{
lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; 
v___x_5357_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__0));
v___x_5358_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2, &l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once, _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2);
v___x_5359_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5355_, v___x_5357_, v___x_5358_);
return v___x_5359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_terminate___boxed(lean_object* v_self_5360_, lean_object* v_a_5361_){
_start:
{
lean_object* v_res_5362_; 
v_res_5362_ = l_Lasm_JS_Bun_ServerWebSocket_terminate(v_self_5360_);
return v_res_5362_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_ServerWebSocket_ping_spec__0(lean_object* v_x_5363_){
_start:
{
if (lean_obj_tag(v_x_5363_) == 0)
{
lean_object* v___x_5364_; 
v___x_5364_ = lean_box(0);
return v___x_5364_;
}
else
{
lean_object* v_val_5365_; 
v_val_5365_ = lean_ctor_get(v_x_5363_, 0);
lean_inc(v_val_5365_);
lean_dec_ref_known(v_x_5363_, 1);
switch(lean_obj_tag(v_val_5365_))
{
case 0:
{
lean_object* v_value_5366_; lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5373_; 
v_value_5366_ = lean_ctor_get(v_val_5365_, 0);
v_isSharedCheck_5373_ = !lean_is_exclusive(v_val_5365_);
if (v_isSharedCheck_5373_ == 0)
{
v___x_5368_ = v_val_5365_;
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
else
{
lean_inc(v_value_5366_);
lean_dec(v_val_5365_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5373_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5371_; 
if (v_isShared_5369_ == 0)
{
lean_ctor_set_tag(v___x_5368_, 4);
v___x_5371_ = v___x_5368_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5372_; 
v_reuseFailAlloc_5372_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5372_, 0, v_value_5366_);
v___x_5371_ = v_reuseFailAlloc_5372_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
return v___x_5371_;
}
}
}
case 1:
{
lean_object* v_value_5374_; lean_object* v___x_5376_; uint8_t v_isShared_5377_; uint8_t v_isSharedCheck_5381_; 
v_value_5374_ = lean_ctor_get(v_val_5365_, 0);
v_isSharedCheck_5381_ = !lean_is_exclusive(v_val_5365_);
if (v_isSharedCheck_5381_ == 0)
{
v___x_5376_ = v_val_5365_;
v_isShared_5377_ = v_isSharedCheck_5381_;
goto v_resetjp_5375_;
}
else
{
lean_inc(v_value_5374_);
lean_dec(v_val_5365_);
v___x_5376_ = lean_box(0);
v_isShared_5377_ = v_isSharedCheck_5381_;
goto v_resetjp_5375_;
}
v_resetjp_5375_:
{
lean_object* v___x_5379_; 
if (v_isShared_5377_ == 0)
{
lean_ctor_set_tag(v___x_5376_, 6);
v___x_5379_ = v___x_5376_;
goto v_reusejp_5378_;
}
else
{
lean_object* v_reuseFailAlloc_5380_; 
v_reuseFailAlloc_5380_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5380_, 0, v_value_5374_);
v___x_5379_ = v_reuseFailAlloc_5380_;
goto v_reusejp_5378_;
}
v_reusejp_5378_:
{
return v___x_5379_;
}
}
}
default: 
{
lean_object* v_value_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; 
v_value_5382_ = lean_ctor_get(v_val_5365_, 0);
lean_inc(v_value_5382_);
lean_dec_ref_known(v_val_5365_, 1);
v___x_5383_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5384_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5384_, 0, v_value_5382_);
lean_ctor_set(v___x_5384_, 1, v___x_5383_);
return v___x_5384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_ping(lean_object* v_self_5385_, lean_object* v_data_5386_){
_start:
{
lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; 
v___x_5388_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__5));
v___x_5389_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_ServerWebSocket_ping_spec__0(v_data_5386_);
v___x_5390_ = lean_unsigned_to_nat(1u);
v___x_5391_ = lean_mk_empty_array_with_capacity(v___x_5390_);
v___x_5392_ = lean_array_push(v___x_5391_, v___x_5389_);
v___x_5393_ = l_Lasm_JS_Web_Support_args(v___x_5392_);
v___x_5394_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5385_, v___x_5388_, v___x_5393_);
return v___x_5394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_ping___boxed(lean_object* v_self_5395_, lean_object* v_data_5396_, lean_object* v_a_5397_){
_start:
{
lean_object* v_res_5398_; 
v_res_5398_ = l_Lasm_JS_Bun_ServerWebSocket_ping(v_self_5395_, v_data_5396_);
return v_res_5398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pong(lean_object* v_self_5399_, lean_object* v_data_5400_){
_start:
{
lean_object* v___x_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; 
v___x_5402_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__6));
v___x_5403_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_ServerWebSocket_ping_spec__0(v_data_5400_);
v___x_5404_ = lean_unsigned_to_nat(1u);
v___x_5405_ = lean_mk_empty_array_with_capacity(v___x_5404_);
v___x_5406_ = lean_array_push(v___x_5405_, v___x_5403_);
v___x_5407_ = l_Lasm_JS_Web_Support_args(v___x_5406_);
v___x_5408_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5399_, v___x_5402_, v___x_5407_);
return v___x_5408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pong___boxed(lean_object* v_self_5409_, lean_object* v_data_5410_, lean_object* v_a_5411_){
_start:
{
lean_object* v_res_5412_; 
v_res_5412_ = l_Lasm_JS_Bun_ServerWebSocket_pong(v_self_5409_, v_data_5410_);
return v_res_5412_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publish(lean_object* v_self_5414_, lean_object* v_topic_5415_, lean_object* v_data_5416_, lean_object* v_compress_5417_){
_start:
{
lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___y_5422_; 
v___x_5419_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_publish___closed__0));
v___x_5420_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5420_, 0, v_topic_5415_);
switch(lean_obj_tag(v_data_5416_))
{
case 0:
{
lean_object* v_value_5431_; lean_object* v___x_5433_; uint8_t v_isShared_5434_; uint8_t v_isSharedCheck_5438_; 
v_value_5431_ = lean_ctor_get(v_data_5416_, 0);
v_isSharedCheck_5438_ = !lean_is_exclusive(v_data_5416_);
if (v_isSharedCheck_5438_ == 0)
{
v___x_5433_ = v_data_5416_;
v_isShared_5434_ = v_isSharedCheck_5438_;
goto v_resetjp_5432_;
}
else
{
lean_inc(v_value_5431_);
lean_dec(v_data_5416_);
v___x_5433_ = lean_box(0);
v_isShared_5434_ = v_isSharedCheck_5438_;
goto v_resetjp_5432_;
}
v_resetjp_5432_:
{
lean_object* v___x_5436_; 
if (v_isShared_5434_ == 0)
{
lean_ctor_set_tag(v___x_5433_, 4);
v___x_5436_ = v___x_5433_;
goto v_reusejp_5435_;
}
else
{
lean_object* v_reuseFailAlloc_5437_; 
v_reuseFailAlloc_5437_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5437_, 0, v_value_5431_);
v___x_5436_ = v_reuseFailAlloc_5437_;
goto v_reusejp_5435_;
}
v_reusejp_5435_:
{
v___y_5422_ = v___x_5436_;
goto v___jp_5421_;
}
}
}
case 1:
{
lean_object* v_value_5439_; lean_object* v___x_5441_; uint8_t v_isShared_5442_; uint8_t v_isSharedCheck_5446_; 
v_value_5439_ = lean_ctor_get(v_data_5416_, 0);
v_isSharedCheck_5446_ = !lean_is_exclusive(v_data_5416_);
if (v_isSharedCheck_5446_ == 0)
{
v___x_5441_ = v_data_5416_;
v_isShared_5442_ = v_isSharedCheck_5446_;
goto v_resetjp_5440_;
}
else
{
lean_inc(v_value_5439_);
lean_dec(v_data_5416_);
v___x_5441_ = lean_box(0);
v_isShared_5442_ = v_isSharedCheck_5446_;
goto v_resetjp_5440_;
}
v_resetjp_5440_:
{
lean_object* v___x_5444_; 
if (v_isShared_5442_ == 0)
{
lean_ctor_set_tag(v___x_5441_, 6);
v___x_5444_ = v___x_5441_;
goto v_reusejp_5443_;
}
else
{
lean_object* v_reuseFailAlloc_5445_; 
v_reuseFailAlloc_5445_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5445_, 0, v_value_5439_);
v___x_5444_ = v_reuseFailAlloc_5445_;
goto v_reusejp_5443_;
}
v_reusejp_5443_:
{
v___y_5422_ = v___x_5444_;
goto v___jp_5421_;
}
}
}
default: 
{
lean_object* v_value_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; 
v_value_5447_ = lean_ctor_get(v_data_5416_, 0);
lean_inc(v_value_5447_);
lean_dec_ref_known(v_data_5416_, 1);
v___x_5448_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5449_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5449_, 0, v_value_5447_);
lean_ctor_set(v___x_5449_, 1, v___x_5448_);
v___y_5422_ = v___x_5449_;
goto v___jp_5421_;
}
}
v___jp_5421_:
{
lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; 
v___x_5423_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_compress_5417_);
v___x_5424_ = lean_unsigned_to_nat(3u);
v___x_5425_ = lean_mk_empty_array_with_capacity(v___x_5424_);
v___x_5426_ = lean_array_push(v___x_5425_, v___x_5420_);
v___x_5427_ = lean_array_push(v___x_5426_, v___y_5422_);
v___x_5428_ = lean_array_push(v___x_5427_, v___x_5423_);
v___x_5429_ = l_Lasm_JS_Web_Support_args(v___x_5428_);
v___x_5430_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5414_, v___x_5419_, v___x_5429_);
return v___x_5430_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publish___boxed(lean_object* v_self_5450_, lean_object* v_topic_5451_, lean_object* v_data_5452_, lean_object* v_compress_5453_, lean_object* v_a_5454_){
_start:
{
lean_object* v_res_5455_; 
v_res_5455_ = l_Lasm_JS_Bun_ServerWebSocket_publish(v_self_5450_, v_topic_5451_, v_data_5452_, v_compress_5453_);
lean_dec(v_compress_5453_);
return v_res_5455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishText(lean_object* v_self_5457_, lean_object* v_topic_5458_, lean_object* v_data_5459_, lean_object* v_compress_5460_){
_start:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; 
v___x_5462_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_publishText___closed__0));
v___x_5463_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5463_, 0, v_topic_5458_);
v___x_5464_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5464_, 0, v_data_5459_);
v___x_5465_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_compress_5460_);
v___x_5466_ = lean_unsigned_to_nat(3u);
v___x_5467_ = lean_mk_empty_array_with_capacity(v___x_5466_);
v___x_5468_ = lean_array_push(v___x_5467_, v___x_5463_);
v___x_5469_ = lean_array_push(v___x_5468_, v___x_5464_);
v___x_5470_ = lean_array_push(v___x_5469_, v___x_5465_);
v___x_5471_ = l_Lasm_JS_Web_Support_args(v___x_5470_);
v___x_5472_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5457_, v___x_5462_, v___x_5471_);
return v___x_5472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishText___boxed(lean_object* v_self_5473_, lean_object* v_topic_5474_, lean_object* v_data_5475_, lean_object* v_compress_5476_, lean_object* v_a_5477_){
_start:
{
lean_object* v_res_5478_; 
v_res_5478_ = l_Lasm_JS_Bun_ServerWebSocket_publishText(v_self_5473_, v_topic_5474_, v_data_5475_, v_compress_5476_);
lean_dec(v_compress_5476_);
return v_res_5478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishBinary(lean_object* v_self_5480_, lean_object* v_topic_5481_, lean_object* v_data_5482_, lean_object* v_compress_5483_){
_start:
{
lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___y_5488_; 
v___x_5485_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_publishBinary___closed__0));
v___x_5486_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5486_, 0, v_topic_5481_);
if (lean_obj_tag(v_data_5482_) == 0)
{
lean_object* v_value_5497_; lean_object* v___x_5499_; uint8_t v_isShared_5500_; uint8_t v_isSharedCheck_5504_; 
v_value_5497_ = lean_ctor_get(v_data_5482_, 0);
v_isSharedCheck_5504_ = !lean_is_exclusive(v_data_5482_);
if (v_isSharedCheck_5504_ == 0)
{
v___x_5499_ = v_data_5482_;
v_isShared_5500_ = v_isSharedCheck_5504_;
goto v_resetjp_5498_;
}
else
{
lean_inc(v_value_5497_);
lean_dec(v_data_5482_);
v___x_5499_ = lean_box(0);
v_isShared_5500_ = v_isSharedCheck_5504_;
goto v_resetjp_5498_;
}
v_resetjp_5498_:
{
lean_object* v___x_5502_; 
if (v_isShared_5500_ == 0)
{
lean_ctor_set_tag(v___x_5499_, 6);
v___x_5502_ = v___x_5499_;
goto v_reusejp_5501_;
}
else
{
lean_object* v_reuseFailAlloc_5503_; 
v_reuseFailAlloc_5503_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5503_, 0, v_value_5497_);
v___x_5502_ = v_reuseFailAlloc_5503_;
goto v_reusejp_5501_;
}
v_reusejp_5501_:
{
v___y_5488_ = v___x_5502_;
goto v___jp_5487_;
}
}
}
else
{
lean_object* v_value_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; 
v_value_5505_ = lean_ctor_get(v_data_5482_, 0);
lean_inc(v_value_5505_);
lean_dec_ref_known(v_data_5482_, 1);
v___x_5506_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5507_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5507_, 0, v_value_5505_);
lean_ctor_set(v___x_5507_, 1, v___x_5506_);
v___y_5488_ = v___x_5507_;
goto v___jp_5487_;
}
v___jp_5487_:
{
lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5496_; 
v___x_5489_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_compress_5483_);
v___x_5490_ = lean_unsigned_to_nat(3u);
v___x_5491_ = lean_mk_empty_array_with_capacity(v___x_5490_);
v___x_5492_ = lean_array_push(v___x_5491_, v___x_5486_);
v___x_5493_ = lean_array_push(v___x_5492_, v___y_5488_);
v___x_5494_ = lean_array_push(v___x_5493_, v___x_5489_);
v___x_5495_ = l_Lasm_JS_Web_Support_args(v___x_5494_);
v___x_5496_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5480_, v___x_5485_, v___x_5495_);
return v___x_5496_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_publishBinary___boxed(lean_object* v_self_5508_, lean_object* v_topic_5509_, lean_object* v_data_5510_, lean_object* v_compress_5511_, lean_object* v_a_5512_){
_start:
{
lean_object* v_res_5513_; 
v_res_5513_ = l_Lasm_JS_Bun_ServerWebSocket_publishBinary(v_self_5508_, v_topic_5509_, v_data_5510_, v_compress_5511_);
lean_dec(v_compress_5511_);
return v_res_5513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscribe(lean_object* v_self_5515_, lean_object* v_topic_5516_){
_start:
{
lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; 
v___x_5518_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_subscribe___closed__0));
v___x_5519_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5519_, 0, v_topic_5516_);
v___x_5520_ = lean_unsigned_to_nat(1u);
v___x_5521_ = lean_mk_empty_array_with_capacity(v___x_5520_);
v___x_5522_ = lean_array_push(v___x_5521_, v___x_5519_);
v___x_5523_ = l_Lasm_JS_Web_Support_args(v___x_5522_);
v___x_5524_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_5515_, v___x_5518_, v___x_5523_);
return v___x_5524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_subscribe___boxed(lean_object* v_self_5525_, lean_object* v_topic_5526_, lean_object* v_a_5527_){
_start:
{
lean_object* v_res_5528_; 
v_res_5528_ = l_Lasm_JS_Bun_ServerWebSocket_subscribe(v_self_5525_, v_topic_5526_);
return v_res_5528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_unsubscribe(lean_object* v_self_5530_, lean_object* v_topic_5531_){
_start:
{
lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; 
v___x_5533_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_unsubscribe___closed__0));
v___x_5534_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5534_, 0, v_topic_5531_);
v___x_5535_ = lean_unsigned_to_nat(1u);
v___x_5536_ = lean_mk_empty_array_with_capacity(v___x_5535_);
v___x_5537_ = lean_array_push(v___x_5536_, v___x_5534_);
v___x_5538_ = l_Lasm_JS_Web_Support_args(v___x_5537_);
v___x_5539_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_5530_, v___x_5533_, v___x_5538_);
return v___x_5539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_unsubscribe___boxed(lean_object* v_self_5540_, lean_object* v_topic_5541_, lean_object* v_a_5542_){
_start:
{
lean_object* v_res_5543_; 
v_res_5543_ = l_Lasm_JS_Bun_ServerWebSocket_unsubscribe(v_self_5540_, v_topic_5541_);
return v_res_5543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isSubscribed(lean_object* v_self_5545_, lean_object* v_topic_5546_){
_start:
{
lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; 
v___x_5548_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_isSubscribed___closed__0));
v___x_5549_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5549_, 0, v_topic_5546_);
v___x_5550_ = lean_unsigned_to_nat(1u);
v___x_5551_ = lean_mk_empty_array_with_capacity(v___x_5550_);
v___x_5552_ = lean_array_push(v___x_5551_, v___x_5549_);
v___x_5553_ = l_Lasm_JS_Web_Support_args(v___x_5552_);
v___x_5554_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_5545_, v___x_5548_, v___x_5553_);
return v___x_5554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_isSubscribed___boxed(lean_object* v_self_5555_, lean_object* v_topic_5556_, lean_object* v_a_5557_){
_start:
{
lean_object* v_res_5558_; 
v_res_5558_ = l_Lasm_JS_Bun_ServerWebSocket_isSubscribed(v_self_5555_, v_topic_5556_);
return v_res_5558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_cork(lean_object* v_self_5560_, lean_object* v_callback_5561_){
_start:
{
lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; 
v___x_5563_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_cork___closed__0));
v___x_5564_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5565_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5565_, 0, v_callback_5561_);
lean_ctor_set(v___x_5565_, 1, v___x_5564_);
v___x_5566_ = lean_unsigned_to_nat(1u);
v___x_5567_ = lean_mk_empty_array_with_capacity(v___x_5566_);
v___x_5568_ = lean_array_push(v___x_5567_, v___x_5565_);
v___x_5569_ = l_Lasm_JS_Web_Support_args(v___x_5568_);
v___x_5570_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_getCertificate_spec__0(v_self_5560_, v___x_5563_, v___x_5569_);
return v___x_5570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_cork___boxed(lean_object* v_self_5571_, lean_object* v_callback_5572_, lean_object* v_a_5573_){
_start:
{
lean_object* v_res_5574_; 
v_res_5574_ = l_Lasm_JS_Bun_ServerWebSocket_cork(v_self_5571_, v_callback_5572_);
return v_res_5574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount(lean_object* v_self_5576_){
_start:
{
lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; 
v___x_5578_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount___closed__0));
v___x_5579_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2, &l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once, _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2);
v___x_5580_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_5576_, v___x_5578_, v___x_5579_);
return v___x_5580_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount___boxed(lean_object* v_self_5581_, lean_object* v_a_5582_){
_start:
{
lean_object* v_res_5583_; 
v_res_5583_ = l_Lasm_JS_Bun_ServerWebSocket_getBufferedAmount(v_self_5581_);
return v_res_5583_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pause(lean_object* v_self_5585_){
_start:
{
lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; 
v___x_5587_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_pause___closed__0));
v___x_5588_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2, &l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once, _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2);
v___x_5589_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5585_, v___x_5587_, v___x_5588_);
return v___x_5589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_pause___boxed(lean_object* v_self_5590_, lean_object* v_a_5591_){
_start:
{
lean_object* v_res_5592_; 
v_res_5592_ = l_Lasm_JS_Bun_ServerWebSocket_pause(v_self_5590_);
return v_res_5592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_resume(lean_object* v_self_5594_){
_start:
{
lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; 
v___x_5596_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_resume___closed__0));
v___x_5597_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2, &l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once, _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2);
v___x_5598_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_5594_, v___x_5596_, v___x_5597_);
return v___x_5598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerWebSocket_resume___boxed(lean_object* v_self_5599_, lean_object* v_a_5600_){
_start:
{
lean_object* v_res_5601_; 
v_res_5601_ = l_Lasm_JS_Bun_ServerWebSocket_resume(v_self_5599_);
return v_res_5601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests(lean_object* v_self_5603_){
_start:
{
lean_object* v___x_5605_; lean_object* v___x_5606_; 
v___x_5605_ = ((lean_object*)(l_Lasm_JS_Bun_Server_pendingRequests___closed__0));
v___x_5606_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_5603_, v___x_5605_);
return v___x_5606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests___boxed(lean_object* v_self_5607_, lean_object* v_a_5608_){
_start:
{
lean_object* v_res_5609_; 
v_res_5609_ = l_Lasm_JS_Bun_Server_pendingRequests(v_self_5607_);
return v_res_5609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingWebSockets(lean_object* v_self_5611_){
_start:
{
lean_object* v___x_5613_; lean_object* v___x_5614_; 
v___x_5613_ = ((lean_object*)(l_Lasm_JS_Bun_Server_pendingWebSockets___closed__0));
v___x_5614_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_timeStamp_spec__0(v_self_5611_, v___x_5613_);
return v___x_5614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingWebSockets___boxed(lean_object* v_self_5615_, lean_object* v_a_5616_){
_start:
{
lean_object* v_res_5617_; 
v_res_5617_ = l_Lasm_JS_Bun_Server_pendingWebSockets(v_self_5615_);
return v_res_5617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url(lean_object* v_self_5619_){
_start:
{
lean_object* v___x_5621_; lean_object* v___x_5622_; 
v___x_5621_ = ((lean_object*)(l_Lasm_JS_Bun_Server_url___closed__0));
v___x_5622_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_5619_, v___x_5621_);
if (lean_obj_tag(v___x_5622_) == 0)
{
lean_object* v_a_5623_; lean_object* v___x_5625_; uint8_t v_isShared_5626_; uint8_t v_isSharedCheck_5630_; 
v_a_5623_ = lean_ctor_get(v___x_5622_, 0);
v_isSharedCheck_5630_ = !lean_is_exclusive(v___x_5622_);
if (v_isSharedCheck_5630_ == 0)
{
v___x_5625_ = v___x_5622_;
v_isShared_5626_ = v_isSharedCheck_5630_;
goto v_resetjp_5624_;
}
else
{
lean_inc(v_a_5623_);
lean_dec(v___x_5622_);
v___x_5625_ = lean_box(0);
v_isShared_5626_ = v_isSharedCheck_5630_;
goto v_resetjp_5624_;
}
v_resetjp_5624_:
{
lean_object* v___x_5628_; 
if (v_isShared_5626_ == 0)
{
v___x_5628_ = v___x_5625_;
goto v_reusejp_5627_;
}
else
{
lean_object* v_reuseFailAlloc_5629_; 
v_reuseFailAlloc_5629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5629_, 0, v_a_5623_);
v___x_5628_ = v_reuseFailAlloc_5629_;
goto v_reusejp_5627_;
}
v_reusejp_5627_:
{
return v___x_5628_;
}
}
}
else
{
lean_object* v_a_5631_; lean_object* v___x_5633_; uint8_t v_isShared_5634_; uint8_t v_isSharedCheck_5638_; 
v_a_5631_ = lean_ctor_get(v___x_5622_, 0);
v_isSharedCheck_5638_ = !lean_is_exclusive(v___x_5622_);
if (v_isSharedCheck_5638_ == 0)
{
v___x_5633_ = v___x_5622_;
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
else
{
lean_inc(v_a_5631_);
lean_dec(v___x_5622_);
v___x_5633_ = lean_box(0);
v_isShared_5634_ = v_isSharedCheck_5638_;
goto v_resetjp_5632_;
}
v_resetjp_5632_:
{
lean_object* v___x_5636_; 
if (v_isShared_5634_ == 0)
{
v___x_5636_ = v___x_5633_;
goto v_reusejp_5635_;
}
else
{
lean_object* v_reuseFailAlloc_5637_; 
v_reuseFailAlloc_5637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5637_, 0, v_a_5631_);
v___x_5636_ = v_reuseFailAlloc_5637_;
goto v_reusejp_5635_;
}
v_reusejp_5635_:
{
return v___x_5636_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url___boxed(lean_object* v_self_5639_, lean_object* v_a_5640_){
_start:
{
lean_object* v_res_5641_; 
v_res_5641_ = l_Lasm_JS_Bun_Server_url(v_self_5639_);
return v_res_5641_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_5643_; lean_object* v___x_5644_; 
v___x_5643_ = lean_unsigned_to_nat(0u);
v___x_5644_ = lean_nat_to_int(v___x_5643_);
return v___x_5644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(lean_object* v_context_5647_, lean_object* v_d_5648_){
_start:
{
lean_object* v___y_5654_; lean_object* v___y_5655_; lean_object* v___y_5660_; lean_object* v_received_5661_; lean_object* v___y_5680_; lean_object* v_a_5683_; lean_object* v_a_5708_; 
switch(lean_obj_tag(v_d_5648_))
{
case 1:
{
goto v___jp_5650_;
}
case 0:
{
goto v___jp_5650_;
}
default: 
{
switch(lean_obj_tag(v_d_5648_))
{
case 3:
{
double v_n_5715_; lean_object* v___x_5716_; 
v_n_5715_ = lean_ctor_get_float(v_d_5648_, 0);
v___x_5716_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_5715_);
if (lean_obj_tag(v___x_5716_) == 0)
{
lean_object* v___x_5717_; 
v___x_5717_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3));
v_a_5683_ = v___x_5717_;
goto v___jp_5682_;
}
else
{
lean_object* v_val_5718_; 
v_val_5718_ = lean_ctor_get(v___x_5716_, 0);
lean_inc(v_val_5718_);
lean_dec_ref_known(v___x_5716_, 1);
v_a_5708_ = v_val_5718_;
goto v___jp_5707_;
}
}
case 5:
{
lean_object* v_i_5719_; 
v_i_5719_ = lean_ctor_get(v_d_5648_, 0);
lean_inc(v_i_5719_);
v_a_5708_ = v_i_5719_;
goto v___jp_5707_;
}
default: 
{
lean_object* v___x_5720_; 
v___x_5720_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v_a_5683_ = v___x_5720_;
goto v___jp_5682_;
}
}
}
}
v___jp_5650_:
{
lean_object* v___x_5651_; lean_object* v___x_5652_; 
v___x_5651_ = lean_box(0);
v___x_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5652_, 0, v___x_5651_);
return v___x_5652_;
}
v___jp_5653_:
{
lean_object* v___x_5656_; lean_object* v___x_5657_; lean_object* v___x_5658_; 
v___x_5656_ = lean_string_append(v___y_5654_, v___y_5655_);
lean_dec_ref(v___y_5655_);
v___x_5657_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5657_, 0, v___x_5656_);
v___x_5658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5658_, 0, v___x_5657_);
return v___x_5658_;
}
v___jp_5659_:
{
lean_object* v___x_5662_; lean_object* v___x_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; lean_object* v___x_5668_; lean_object* v___x_5669_; lean_object* v___x_5670_; lean_object* v___x_5671_; lean_object* v___x_5672_; uint8_t v___x_5673_; 
v___x_5662_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5663_ = lean_string_append(v___x_5662_, v_context_5647_);
v___x_5664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5665_ = lean_string_append(v___x_5663_, v___x_5664_);
v___x_5666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0));
v___x_5667_ = lean_string_append(v___x_5665_, v___x_5666_);
v___x_5668_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5669_ = lean_string_append(v___x_5667_, v___x_5668_);
v___x_5670_ = lean_string_append(v___x_5669_, v_received_5661_);
lean_dec_ref(v_received_5661_);
v___x_5671_ = lean_string_utf8_byte_size(v___y_5660_);
v___x_5672_ = lean_unsigned_to_nat(0u);
v___x_5673_ = lean_nat_dec_eq(v___x_5671_, v___x_5672_);
if (v___x_5673_ == 0)
{
lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; lean_object* v___x_5677_; 
v___x_5674_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__1));
v___x_5675_ = lean_string_append(v___x_5674_, v___y_5660_);
v___x_5676_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__2));
v___x_5677_ = lean_string_append(v___x_5675_, v___x_5676_);
v___y_5654_ = v___x_5670_;
v___y_5655_ = v___x_5677_;
goto v___jp_5653_;
}
else
{
lean_object* v___x_5678_; 
v___x_5678_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___y_5654_ = v___x_5670_;
v___y_5655_ = v___x_5678_;
goto v___jp_5653_;
}
}
v___jp_5679_:
{
lean_object* v___x_5681_; 
v___x_5681_ = l_Lasm_JS_Data_describe(v_d_5648_);
v___y_5660_ = v___y_5680_;
v_received_5661_ = v___x_5681_;
goto v___jp_5659_;
}
v___jp_5682_:
{
if (lean_obj_tag(v_d_5648_) == 9)
{
lean_object* v_value_5684_; lean_object* v_description_5685_; lean_object* v___x_5686_; uint8_t v___x_5687_; 
v_value_5684_ = lean_ctor_get(v_d_5648_, 0);
v_description_5685_ = lean_ctor_get(v_d_5648_, 1);
v___x_5686_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5687_ = lean_string_dec_eq(v_description_5685_, v___x_5686_);
if (v___x_5687_ == 0)
{
v___y_5680_ = v_a_5683_;
goto v___jp_5679_;
}
else
{
lean_object* v___x_5689_; uint8_t v_isShared_5690_; uint8_t v_isSharedCheck_5704_; 
lean_inc(v_value_5684_);
v_isSharedCheck_5704_ = !lean_is_exclusive(v_d_5648_);
if (v_isSharedCheck_5704_ == 0)
{
lean_object* v_unused_5705_; lean_object* v_unused_5706_; 
v_unused_5705_ = lean_ctor_get(v_d_5648_, 1);
lean_dec(v_unused_5705_);
v_unused_5706_ = lean_ctor_get(v_d_5648_, 0);
lean_dec(v_unused_5706_);
v___x_5689_ = v_d_5648_;
v_isShared_5690_ = v_isSharedCheck_5704_;
goto v_resetjp_5688_;
}
else
{
lean_dec(v_d_5648_);
v___x_5689_ = lean_box(0);
v_isShared_5690_ = v_isSharedCheck_5704_;
goto v_resetjp_5688_;
}
v_resetjp_5688_:
{
uint32_t v___x_5691_; uint64_t v___x_5692_; lean_object* v___x_5694_; 
v___x_5691_ = 206;
v___x_5692_ = 0ULL;
lean_inc(v_value_5684_);
if (v_isShared_5690_ == 0)
{
lean_ctor_set(v___x_5689_, 1, v___x_5686_);
v___x_5694_ = v___x_5689_;
goto v_reusejp_5693_;
}
else
{
lean_object* v_reuseFailAlloc_5703_; 
v_reuseFailAlloc_5703_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5703_, 0, v_value_5684_);
lean_ctor_set(v_reuseFailAlloc_5703_, 1, v___x_5686_);
v___x_5694_ = v_reuseFailAlloc_5703_;
goto v_reusejp_5693_;
}
v_reusejp_5693_:
{
uint32_t v___x_5695_; lean_object* v___x_5696_; 
v___x_5695_ = lasm_js_value_handle(v_value_5684_);
lean_dec(v_value_5684_);
v___x_5696_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5691_, v___x_5692_, v___x_5694_, v___x_5695_);
lean_dec_ref(v___x_5694_);
if (lean_obj_tag(v___x_5696_) == 0)
{
lean_object* v_a_5697_; uint8_t v___x_5698_; 
v_a_5697_ = lean_ctor_get(v___x_5696_, 0);
lean_inc(v_a_5697_);
lean_dec_ref_known(v___x_5696_, 1);
v___x_5698_ = lean_string_validate_utf8(v_a_5697_);
if (v___x_5698_ == 0)
{
lean_object* v___x_5699_; lean_object* v___x_5700_; 
lean_dec(v_a_5697_);
v___x_5699_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5700_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5699_);
v___y_5660_ = v_a_5683_;
v_received_5661_ = v___x_5700_;
goto v___jp_5659_;
}
else
{
lean_object* v___x_5701_; 
v___x_5701_ = lean_string_from_utf8_unchecked(v_a_5697_);
v___y_5660_ = v_a_5683_;
v_received_5661_ = v___x_5701_;
goto v___jp_5659_;
}
}
else
{
lean_object* v___x_5702_; 
lean_dec_ref_known(v___x_5696_, 1);
v___x_5702_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v___y_5660_ = v_a_5683_;
v_received_5661_ = v___x_5702_;
goto v___jp_5659_;
}
}
}
}
}
else
{
v___y_5680_ = v_a_5683_;
goto v___jp_5679_;
}
}
v___jp_5707_:
{
lean_object* v___x_5709_; uint8_t v___x_5710_; 
v___x_5709_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1);
v___x_5710_ = lean_int_dec_le(v___x_5709_, v_a_5708_);
if (v___x_5710_ == 0)
{
lean_object* v___x_5711_; 
lean_dec(v_a_5708_);
v___x_5711_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v_a_5683_ = v___x_5711_;
goto v___jp_5682_;
}
else
{
lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; 
lean_dec(v_d_5648_);
v___x_5712_ = l_Int_toNat(v_a_5708_);
lean_dec(v_a_5708_);
v___x_5713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5713_, 0, v___x_5712_);
v___x_5714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5713_);
return v___x_5714_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5721_, lean_object* v_d_5722_, lean_object* v_a_5723_){
_start:
{
lean_object* v_res_5724_; 
v_res_5724_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_5721_, v_d_5722_);
lean_dec_ref(v_context_5721_);
return v_res_5724_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(lean_object* v_context_5725_, lean_object* v_bytes_5726_){
_start:
{
lean_object* v___x_5728_; 
v___x_5728_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5726_);
if (lean_obj_tag(v___x_5728_) == 0)
{
lean_object* v_a_5729_; lean_object* v___x_5730_; 
v_a_5729_ = lean_ctor_get(v___x_5728_, 0);
lean_inc(v_a_5729_);
lean_dec_ref_known(v___x_5728_, 1);
v___x_5730_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_5725_, v_a_5729_);
return v___x_5730_;
}
else
{
lean_object* v_a_5731_; lean_object* v___x_5733_; uint8_t v_isShared_5734_; uint8_t v_isSharedCheck_5738_; 
v_a_5731_ = lean_ctor_get(v___x_5728_, 0);
v_isSharedCheck_5738_ = !lean_is_exclusive(v___x_5728_);
if (v_isSharedCheck_5738_ == 0)
{
v___x_5733_ = v___x_5728_;
v_isShared_5734_ = v_isSharedCheck_5738_;
goto v_resetjp_5732_;
}
else
{
lean_inc(v_a_5731_);
lean_dec(v___x_5728_);
v___x_5733_ = lean_box(0);
v_isShared_5734_ = v_isSharedCheck_5738_;
goto v_resetjp_5732_;
}
v_resetjp_5732_:
{
lean_object* v___x_5736_; 
if (v_isShared_5734_ == 0)
{
v___x_5736_ = v___x_5733_;
goto v_reusejp_5735_;
}
else
{
lean_object* v_reuseFailAlloc_5737_; 
v_reuseFailAlloc_5737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5737_, 0, v_a_5731_);
v___x_5736_ = v_reuseFailAlloc_5737_;
goto v_reusejp_5735_;
}
v_reusejp_5735_:
{
return v___x_5736_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0___boxed(lean_object* v_context_5739_, lean_object* v_bytes_5740_, lean_object* v_a_5741_){
_start:
{
lean_object* v_res_5742_; 
v_res_5742_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v_context_5739_, v_bytes_5740_);
lean_dec_ref(v_bytes_5740_);
lean_dec_ref(v_context_5739_);
return v_res_5742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(lean_object* v_o_5743_, lean_object* v_key_5744_){
_start:
{
lean_object* v_k_5746_; lean_object* v___x_5747_; 
v_k_5746_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5746_, 0, v_key_5744_);
v___x_5747_ = l_Lasm_JS_Wire_encodeIO(v_k_5746_);
if (lean_obj_tag(v___x_5747_) == 0)
{
lean_object* v_a_5748_; uint32_t v___x_5749_; uint32_t v___x_5750_; uint64_t v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; 
v_a_5748_ = lean_ctor_get(v___x_5747_, 0);
lean_inc(v_a_5748_);
lean_dec_ref_known(v___x_5747_, 1);
v___x_5749_ = 203;
v___x_5750_ = lasm_js_value_handle(v_o_5743_);
v___x_5751_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0);
v___x_5752_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5753_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5753_, 0, v_o_5743_);
lean_ctor_set(v___x_5753_, 1, v___x_5752_);
v___x_5754_ = lean_unsigned_to_nat(2u);
v___x_5755_ = lean_mk_empty_array_with_capacity(v___x_5754_);
lean_inc_ref(v_k_5746_);
v___x_5756_ = lean_array_push(v___x_5755_, v_k_5746_);
v___x_5757_ = lean_array_push(v___x_5756_, v___x_5753_);
v___x_5758_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5758_, 0, v___x_5757_);
v___x_5759_ = lasm_js_call(v___x_5749_, v___x_5750_, v___x_5751_, v_a_5748_, v___x_5758_);
lean_dec_ref_known(v___x_5758_, 1);
lean_dec(v_a_5748_);
if (lean_obj_tag(v___x_5759_) == 0)
{
lean_object* v_a_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; 
v_a_5760_ = lean_ctor_get(v___x_5759_, 0);
lean_inc(v_a_5760_);
lean_dec_ref_known(v___x_5759_, 1);
v___x_5761_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__1));
v___x_5762_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5746_);
v___x_5763_ = lean_string_append(v___x_5761_, v___x_5762_);
lean_dec_ref(v___x_5762_);
v___x_5764_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v___x_5763_, v_a_5760_);
lean_dec(v_a_5760_);
lean_dec_ref(v___x_5763_);
return v___x_5764_;
}
else
{
lean_object* v_a_5765_; lean_object* v___x_5767_; uint8_t v_isShared_5768_; uint8_t v_isSharedCheck_5772_; 
lean_dec_ref_known(v_k_5746_, 1);
v_a_5765_ = lean_ctor_get(v___x_5759_, 0);
v_isSharedCheck_5772_ = !lean_is_exclusive(v___x_5759_);
if (v_isSharedCheck_5772_ == 0)
{
v___x_5767_ = v___x_5759_;
v_isShared_5768_ = v_isSharedCheck_5772_;
goto v_resetjp_5766_;
}
else
{
lean_inc(v_a_5765_);
lean_dec(v___x_5759_);
v___x_5767_ = lean_box(0);
v_isShared_5768_ = v_isSharedCheck_5772_;
goto v_resetjp_5766_;
}
v_resetjp_5766_:
{
lean_object* v___x_5770_; 
if (v_isShared_5768_ == 0)
{
v___x_5770_ = v___x_5767_;
goto v_reusejp_5769_;
}
else
{
lean_object* v_reuseFailAlloc_5771_; 
v_reuseFailAlloc_5771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5771_, 0, v_a_5765_);
v___x_5770_ = v_reuseFailAlloc_5771_;
goto v_reusejp_5769_;
}
v_reusejp_5769_:
{
return v___x_5770_;
}
}
}
}
else
{
lean_object* v_a_5773_; lean_object* v___x_5775_; uint8_t v_isShared_5776_; uint8_t v_isSharedCheck_5780_; 
lean_dec_ref_known(v_k_5746_, 1);
lean_dec(v_o_5743_);
v_a_5773_ = lean_ctor_get(v___x_5747_, 0);
v_isSharedCheck_5780_ = !lean_is_exclusive(v___x_5747_);
if (v_isSharedCheck_5780_ == 0)
{
v___x_5775_ = v___x_5747_;
v_isShared_5776_ = v_isSharedCheck_5780_;
goto v_resetjp_5774_;
}
else
{
lean_inc(v_a_5773_);
lean_dec(v___x_5747_);
v___x_5775_ = lean_box(0);
v_isShared_5776_ = v_isSharedCheck_5780_;
goto v_resetjp_5774_;
}
v_resetjp_5774_:
{
lean_object* v___x_5778_; 
if (v_isShared_5776_ == 0)
{
v___x_5778_ = v___x_5775_;
goto v_reusejp_5777_;
}
else
{
lean_object* v_reuseFailAlloc_5779_; 
v_reuseFailAlloc_5779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5779_, 0, v_a_5773_);
v___x_5778_ = v_reuseFailAlloc_5779_;
goto v_reusejp_5777_;
}
v_reusejp_5777_:
{
return v___x_5778_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___boxed(lean_object* v_o_5781_, lean_object* v_key_5782_, lean_object* v_a_5783_){
_start:
{
lean_object* v_res_5784_; 
v_res_5784_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_o_5781_, v_key_5782_);
return v_res_5784_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port(lean_object* v_self_5785_){
_start:
{
lean_object* v___x_5787_; lean_object* v___x_5788_; 
v___x_5787_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_5788_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_self_5785_, v___x_5787_);
return v___x_5788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port___boxed(lean_object* v_self_5789_, lean_object* v_a_5790_){
_start:
{
lean_object* v_res_5791_; 
v_res_5791_ = l_Lasm_JS_Bun_Server_port(v_self_5789_);
return v_res_5791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname(lean_object* v_self_5792_){
_start:
{
lean_object* v___x_5794_; lean_object* v___x_5795_; 
v___x_5794_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_5795_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_BunFile_name_spec__0(v_self_5792_, v___x_5794_);
return v___x_5795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname___boxed(lean_object* v_self_5796_, lean_object* v_a_5797_){
_start:
{
lean_object* v_res_5798_; 
v_res_5798_ = l_Lasm_JS_Bun_Server_hostname(v_self_5796_);
return v_res_5798_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(lean_object* v_context_5800_, lean_object* v_d_5801_){
_start:
{
lean_object* v___y_5807_; lean_object* v___y_5808_; lean_object* v___y_5813_; lean_object* v_received_5814_; lean_object* v___y_5830_; uint8_t v_a_5858_; 
switch(lean_obj_tag(v_d_5801_))
{
case 1:
{
goto v___jp_5803_;
}
case 0:
{
goto v___jp_5803_;
}
default: 
{
if (lean_obj_tag(v_d_5801_) == 4)
{
lean_object* v_s_5862_; lean_object* v___x_5863_; uint8_t v___x_5864_; 
v_s_5862_ = lean_ctor_get(v_d_5801_, 0);
v___x_5863_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_5864_ = lean_string_dec_eq(v_s_5862_, v___x_5863_);
if (v___x_5864_ == 0)
{
lean_object* v___x_5865_; uint8_t v___x_5866_; 
v___x_5865_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_5866_ = lean_string_dec_eq(v_s_5862_, v___x_5865_);
if (v___x_5866_ == 0)
{
goto v___jp_5832_;
}
else
{
uint8_t v___x_5867_; 
lean_dec_ref_known(v_d_5801_, 1);
v___x_5867_ = 1;
v_a_5858_ = v___x_5867_;
goto v___jp_5857_;
}
}
else
{
uint8_t v___x_5868_; 
lean_dec_ref_known(v_d_5801_, 1);
v___x_5868_ = 0;
v_a_5858_ = v___x_5868_;
goto v___jp_5857_;
}
}
else
{
goto v___jp_5832_;
}
}
}
v___jp_5803_:
{
lean_object* v___x_5804_; lean_object* v___x_5805_; 
v___x_5804_ = lean_box(0);
v___x_5805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5805_, 0, v___x_5804_);
return v___x_5805_;
}
v___jp_5806_:
{
lean_object* v___x_5809_; lean_object* v___x_5810_; lean_object* v___x_5811_; 
v___x_5809_ = lean_string_append(v___y_5807_, v___y_5808_);
v___x_5810_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_5810_, 0, v___x_5809_);
v___x_5811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5811_, 0, v___x_5810_);
return v___x_5811_;
}
v___jp_5812_:
{
lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; lean_object* v___x_5818_; lean_object* v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; lean_object* v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; uint8_t v___x_5826_; 
v___x_5815_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_5816_ = lean_string_append(v___x_5815_, v_context_5800_);
v___x_5817_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_5818_ = lean_string_append(v___x_5816_, v___x_5817_);
v___x_5819_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0));
v___x_5820_ = lean_string_append(v___x_5818_, v___x_5819_);
v___x_5821_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_5822_ = lean_string_append(v___x_5820_, v___x_5821_);
v___x_5823_ = lean_string_append(v___x_5822_, v_received_5814_);
lean_dec_ref(v_received_5814_);
v___x_5824_ = lean_string_utf8_byte_size(v___y_5813_);
v___x_5825_ = lean_unsigned_to_nat(0u);
v___x_5826_ = lean_nat_dec_eq(v___x_5824_, v___x_5825_);
if (v___x_5826_ == 0)
{
lean_object* v___x_5827_; 
v___x_5827_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0_spec__0_spec__1___closed__1));
v___y_5807_ = v___x_5823_;
v___y_5808_ = v___x_5827_;
goto v___jp_5806_;
}
else
{
lean_object* v___x_5828_; 
v___x_5828_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___y_5807_ = v___x_5823_;
v___y_5808_ = v___x_5828_;
goto v___jp_5806_;
}
}
v___jp_5829_:
{
lean_object* v___x_5831_; 
v___x_5831_ = l_Lasm_JS_Data_describe(v_d_5801_);
v___y_5813_ = v___y_5830_;
v_received_5814_ = v___x_5831_;
goto v___jp_5812_;
}
v___jp_5832_:
{
lean_object* v___x_5833_; 
v___x_5833_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerWebSocketBinaryType___lam__0___closed__0));
if (lean_obj_tag(v_d_5801_) == 9)
{
lean_object* v_value_5834_; lean_object* v_description_5835_; lean_object* v___x_5836_; uint8_t v___x_5837_; 
v_value_5834_ = lean_ctor_get(v_d_5801_, 0);
v_description_5835_ = lean_ctor_get(v_d_5801_, 1);
v___x_5836_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5837_ = lean_string_dec_eq(v_description_5835_, v___x_5836_);
if (v___x_5837_ == 0)
{
v___y_5830_ = v___x_5833_;
goto v___jp_5829_;
}
else
{
lean_object* v___x_5839_; uint8_t v_isShared_5840_; uint8_t v_isSharedCheck_5854_; 
lean_inc(v_value_5834_);
v_isSharedCheck_5854_ = !lean_is_exclusive(v_d_5801_);
if (v_isSharedCheck_5854_ == 0)
{
lean_object* v_unused_5855_; lean_object* v_unused_5856_; 
v_unused_5855_ = lean_ctor_get(v_d_5801_, 1);
lean_dec(v_unused_5855_);
v_unused_5856_ = lean_ctor_get(v_d_5801_, 0);
lean_dec(v_unused_5856_);
v___x_5839_ = v_d_5801_;
v_isShared_5840_ = v_isSharedCheck_5854_;
goto v_resetjp_5838_;
}
else
{
lean_dec(v_d_5801_);
v___x_5839_ = lean_box(0);
v_isShared_5840_ = v_isSharedCheck_5854_;
goto v_resetjp_5838_;
}
v_resetjp_5838_:
{
uint32_t v___x_5841_; uint64_t v___x_5842_; lean_object* v___x_5844_; 
v___x_5841_ = 206;
v___x_5842_ = 0ULL;
lean_inc(v_value_5834_);
if (v_isShared_5840_ == 0)
{
lean_ctor_set(v___x_5839_, 1, v___x_5836_);
v___x_5844_ = v___x_5839_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5853_; 
v_reuseFailAlloc_5853_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5853_, 0, v_value_5834_);
lean_ctor_set(v_reuseFailAlloc_5853_, 1, v___x_5836_);
v___x_5844_ = v_reuseFailAlloc_5853_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
uint32_t v___x_5845_; lean_object* v___x_5846_; 
v___x_5845_ = lasm_js_value_handle(v_value_5834_);
lean_dec(v_value_5834_);
v___x_5846_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_5841_, v___x_5842_, v___x_5844_, v___x_5845_);
lean_dec_ref(v___x_5844_);
if (lean_obj_tag(v___x_5846_) == 0)
{
lean_object* v_a_5847_; uint8_t v___x_5848_; 
v_a_5847_ = lean_ctor_get(v___x_5846_, 0);
lean_inc(v_a_5847_);
lean_dec_ref_known(v___x_5846_, 1);
v___x_5848_ = lean_string_validate_utf8(v_a_5847_);
if (v___x_5848_ == 0)
{
lean_object* v___x_5849_; lean_object* v___x_5850_; 
lean_dec(v_a_5847_);
v___x_5849_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_5850_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_5849_);
v___y_5813_ = v___x_5833_;
v_received_5814_ = v___x_5850_;
goto v___jp_5812_;
}
else
{
lean_object* v___x_5851_; 
v___x_5851_ = lean_string_from_utf8_unchecked(v_a_5847_);
v___y_5813_ = v___x_5833_;
v_received_5814_ = v___x_5851_;
goto v___jp_5812_;
}
}
else
{
lean_object* v___x_5852_; 
lean_dec_ref_known(v___x_5846_, 1);
v___x_5852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v___y_5813_ = v___x_5833_;
v_received_5814_ = v___x_5852_;
goto v___jp_5812_;
}
}
}
}
}
else
{
v___y_5830_ = v___x_5833_;
goto v___jp_5829_;
}
}
v___jp_5857_:
{
lean_object* v___x_5859_; lean_object* v___x_5860_; lean_object* v___x_5861_; 
v___x_5859_ = lean_box(v_a_5858_);
v___x_5860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5860_, 0, v___x_5859_);
v___x_5861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5861_, 0, v___x_5860_);
return v___x_5861_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___boxed(lean_object* v_context_5869_, lean_object* v_d_5870_, lean_object* v_a_5871_){
_start:
{
lean_object* v_res_5872_; 
v_res_5872_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_5869_, v_d_5870_);
lean_dec_ref(v_context_5869_);
return v_res_5872_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(lean_object* v_context_5873_, lean_object* v_bytes_5874_){
_start:
{
lean_object* v___x_5876_; 
v___x_5876_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_5874_);
if (lean_obj_tag(v___x_5876_) == 0)
{
lean_object* v_a_5877_; lean_object* v___x_5878_; 
v_a_5877_ = lean_ctor_get(v___x_5876_, 0);
lean_inc(v_a_5877_);
lean_dec_ref_known(v___x_5876_, 1);
v___x_5878_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_5873_, v_a_5877_);
return v___x_5878_;
}
else
{
lean_object* v_a_5879_; lean_object* v___x_5881_; uint8_t v_isShared_5882_; uint8_t v_isSharedCheck_5886_; 
v_a_5879_ = lean_ctor_get(v___x_5876_, 0);
v_isSharedCheck_5886_ = !lean_is_exclusive(v___x_5876_);
if (v_isSharedCheck_5886_ == 0)
{
v___x_5881_ = v___x_5876_;
v_isShared_5882_ = v_isSharedCheck_5886_;
goto v_resetjp_5880_;
}
else
{
lean_inc(v_a_5879_);
lean_dec(v___x_5876_);
v___x_5881_ = lean_box(0);
v_isShared_5882_ = v_isSharedCheck_5886_;
goto v_resetjp_5880_;
}
v_resetjp_5880_:
{
lean_object* v___x_5884_; 
if (v_isShared_5882_ == 0)
{
v___x_5884_ = v___x_5881_;
goto v_reusejp_5883_;
}
else
{
lean_object* v_reuseFailAlloc_5885_; 
v_reuseFailAlloc_5885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5885_, 0, v_a_5879_);
v___x_5884_ = v_reuseFailAlloc_5885_;
goto v_reusejp_5883_;
}
v_reusejp_5883_:
{
return v___x_5884_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0___boxed(lean_object* v_context_5887_, lean_object* v_bytes_5888_, lean_object* v_a_5889_){
_start:
{
lean_object* v_res_5890_; 
v_res_5890_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v_context_5887_, v_bytes_5888_);
lean_dec_ref(v_bytes_5888_);
lean_dec_ref(v_context_5887_);
return v_res_5890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(lean_object* v_o_5891_, lean_object* v_key_5892_){
_start:
{
lean_object* v_k_5894_; lean_object* v___x_5895_; 
v_k_5894_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_5894_, 0, v_key_5892_);
v___x_5895_ = l_Lasm_JS_Wire_encodeIO(v_k_5894_);
if (lean_obj_tag(v___x_5895_) == 0)
{
lean_object* v_a_5896_; uint32_t v___x_5897_; uint32_t v___x_5898_; uint64_t v___x_5899_; lean_object* v___x_5900_; lean_object* v___x_5901_; lean_object* v___x_5902_; lean_object* v___x_5903_; lean_object* v___x_5904_; lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; 
v_a_5896_ = lean_ctor_get(v___x_5895_, 0);
lean_inc(v_a_5896_);
lean_dec_ref_known(v___x_5895_, 1);
v___x_5897_ = 203;
v___x_5898_ = lasm_js_value_handle(v_o_5891_);
v___x_5899_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0);
v___x_5900_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5901_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5901_, 0, v_o_5891_);
lean_ctor_set(v___x_5901_, 1, v___x_5900_);
v___x_5902_ = lean_unsigned_to_nat(2u);
v___x_5903_ = lean_mk_empty_array_with_capacity(v___x_5902_);
lean_inc_ref(v_k_5894_);
v___x_5904_ = lean_array_push(v___x_5903_, v_k_5894_);
v___x_5905_ = lean_array_push(v___x_5904_, v___x_5901_);
v___x_5906_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_5906_, 0, v___x_5905_);
v___x_5907_ = lasm_js_call(v___x_5897_, v___x_5898_, v___x_5899_, v_a_5896_, v___x_5906_);
lean_dec_ref_known(v___x_5906_, 1);
lean_dec(v_a_5896_);
if (lean_obj_tag(v___x_5907_) == 0)
{
lean_object* v_a_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; 
v_a_5908_ = lean_ctor_get(v___x_5907_, 0);
lean_inc(v_a_5908_);
lean_dec_ref_known(v___x_5907_, 1);
v___x_5909_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__1));
v___x_5910_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_5894_);
v___x_5911_ = lean_string_append(v___x_5909_, v___x_5910_);
lean_dec_ref(v___x_5910_);
v___x_5912_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v___x_5911_, v_a_5908_);
lean_dec(v_a_5908_);
lean_dec_ref(v___x_5911_);
return v___x_5912_;
}
else
{
lean_object* v_a_5913_; lean_object* v___x_5915_; uint8_t v_isShared_5916_; uint8_t v_isSharedCheck_5920_; 
lean_dec_ref_known(v_k_5894_, 1);
v_a_5913_ = lean_ctor_get(v___x_5907_, 0);
v_isSharedCheck_5920_ = !lean_is_exclusive(v___x_5907_);
if (v_isSharedCheck_5920_ == 0)
{
v___x_5915_ = v___x_5907_;
v_isShared_5916_ = v_isSharedCheck_5920_;
goto v_resetjp_5914_;
}
else
{
lean_inc(v_a_5913_);
lean_dec(v___x_5907_);
v___x_5915_ = lean_box(0);
v_isShared_5916_ = v_isSharedCheck_5920_;
goto v_resetjp_5914_;
}
v_resetjp_5914_:
{
lean_object* v___x_5918_; 
if (v_isShared_5916_ == 0)
{
v___x_5918_ = v___x_5915_;
goto v_reusejp_5917_;
}
else
{
lean_object* v_reuseFailAlloc_5919_; 
v_reuseFailAlloc_5919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5919_, 0, v_a_5913_);
v___x_5918_ = v_reuseFailAlloc_5919_;
goto v_reusejp_5917_;
}
v_reusejp_5917_:
{
return v___x_5918_;
}
}
}
}
else
{
lean_object* v_a_5921_; lean_object* v___x_5923_; uint8_t v_isShared_5924_; uint8_t v_isSharedCheck_5928_; 
lean_dec_ref_known(v_k_5894_, 1);
lean_dec(v_o_5891_);
v_a_5921_ = lean_ctor_get(v___x_5895_, 0);
v_isSharedCheck_5928_ = !lean_is_exclusive(v___x_5895_);
if (v_isSharedCheck_5928_ == 0)
{
v___x_5923_ = v___x_5895_;
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
else
{
lean_inc(v_a_5921_);
lean_dec(v___x_5895_);
v___x_5923_ = lean_box(0);
v_isShared_5924_ = v_isSharedCheck_5928_;
goto v_resetjp_5922_;
}
v_resetjp_5922_:
{
lean_object* v___x_5926_; 
if (v_isShared_5924_ == 0)
{
v___x_5926_ = v___x_5923_;
goto v_reusejp_5925_;
}
else
{
lean_object* v_reuseFailAlloc_5927_; 
v_reuseFailAlloc_5927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5927_, 0, v_a_5921_);
v___x_5926_ = v_reuseFailAlloc_5927_;
goto v_reusejp_5925_;
}
v_reusejp_5925_:
{
return v___x_5926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0___boxed(lean_object* v_o_5929_, lean_object* v_key_5930_, lean_object* v_a_5931_){
_start:
{
lean_object* v_res_5932_; 
v_res_5932_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_o_5929_, v_key_5930_);
return v_res_5932_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol(lean_object* v_self_5934_){
_start:
{
lean_object* v___x_5936_; lean_object* v___x_5937_; 
v___x_5936_ = ((lean_object*)(l_Lasm_JS_Bun_Server_protocol___closed__0));
v___x_5937_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_self_5934_, v___x_5936_);
return v___x_5937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol___boxed(lean_object* v_self_5938_, lean_object* v_a_5939_){
_start:
{
lean_object* v_res_5940_; 
v_res_5940_ = l_Lasm_JS_Bun_Server_protocol(v_self_5938_);
return v_res_5940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development(lean_object* v_self_5941_){
_start:
{
lean_object* v___x_5943_; lean_object* v___x_5944_; 
v___x_5943_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__9));
v___x_5944_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_5941_, v___x_5943_);
return v___x_5944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development___boxed(lean_object* v_self_5945_, lean_object* v_a_5946_){
_start:
{
lean_object* v_res_5947_; 
v_res_5947_ = l_Lasm_JS_Bun_Server_development(v_self_5945_);
return v_res_5947_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id(lean_object* v_self_5948_){
_start:
{
lean_object* v___x_5950_; lean_object* v___x_5951_; 
v___x_5950_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__10));
v___x_5951_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_5948_, v___x_5950_);
return v___x_5951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id___boxed(lean_object* v_self_5952_, lean_object* v_a_5953_){
_start:
{
lean_object* v_res_5954_; 
v_res_5954_ = l_Lasm_JS_Bun_Server_id(v_self_5952_);
return v_res_5954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop(lean_object* v_self_5956_, lean_object* v_closeActiveConnections_5957_){
_start:
{
lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; lean_object* v___x_5964_; lean_object* v___x_5965_; 
v___x_5959_ = ((lean_object*)(l_Lasm_JS_Bun_Server_stop___closed__0));
v___x_5960_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_closeActiveConnections_5957_);
v___x_5961_ = lean_unsigned_to_nat(1u);
v___x_5962_ = lean_mk_empty_array_with_capacity(v___x_5961_);
v___x_5963_ = lean_array_push(v___x_5962_, v___x_5960_);
v___x_5964_ = l_Lasm_JS_Web_Support_args(v___x_5963_);
v___x_5965_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_5956_, v___x_5959_, v___x_5964_);
return v___x_5965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop___boxed(lean_object* v_self_5966_, lean_object* v_closeActiveConnections_5967_, lean_object* v_a_5968_){
_start:
{
lean_object* v_res_5969_; 
v_res_5969_ = l_Lasm_JS_Bun_Server_stop(v_self_5966_, v_closeActiveConnections_5967_);
lean_dec(v_closeActiveConnections_5967_);
return v_res_5969_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(uint8_t v_await_5970_, uint64_t v_extra_5971_){
_start:
{
uint64_t v___x_5972_; uint64_t v___y_5974_; 
v___x_5972_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0);
if (v_await_5970_ == 0)
{
uint64_t v___x_5977_; 
v___x_5977_ = 0ULL;
v___y_5974_ = v___x_5977_;
goto v___jp_5973_;
}
else
{
uint64_t v___x_5978_; 
v___x_5978_ = 2ULL;
v___y_5974_ = v___x_5978_;
goto v___jp_5973_;
}
v___jp_5973_:
{
uint64_t v___x_5975_; uint64_t v___x_5976_; 
v___x_5975_ = lean_uint64_lor(v___x_5972_, v___y_5974_);
v___x_5976_ = lean_uint64_lor(v___x_5975_, v_extra_5971_);
return v___x_5976_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0___boxed(lean_object* v_await_5979_, lean_object* v_extra_5980_){
_start:
{
uint8_t v_await_boxed_5981_; uint64_t v_extra_boxed_5982_; uint64_t v_res_5983_; lean_object* v_r_5984_; 
v_await_boxed_5981_ = lean_unbox(v_await_5979_);
v_extra_boxed_5982_ = lean_unbox_uint64(v_extra_5980_);
lean_dec_ref(v_extra_5980_);
v_res_5983_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v_await_boxed_5981_, v_extra_boxed_5982_);
v_r_5984_ = lean_box_uint64(v_res_5983_);
return v_r_5984_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0(void){
_start:
{
uint64_t v___x_5985_; uint8_t v___x_5986_; uint64_t v___x_5987_; 
v___x_5985_ = 8ULL;
v___x_5986_ = 0;
v___x_5987_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v___x_5986_, v___x_5985_);
return v___x_5987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(lean_object* v_o_5989_, lean_object* v_name_5990_, lean_object* v_args_5991_){
_start:
{
lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5995_; uint64_t v___x_5996_; lean_object* v___x_5997_; 
v___x_5993_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_5994_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_5994_, 0, v_o_5989_);
lean_ctor_set(v___x_5994_, 1, v___x_5993_);
lean_inc_ref(v_name_5990_);
v___x_5995_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5995_, 0, v_name_5990_);
v___x_5996_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0);
v___x_5997_ = l_Lasm_JS_Value_invokeRaw(v___x_5994_, v___x_5995_, v_args_5991_, v___x_5996_);
if (lean_obj_tag(v___x_5997_) == 0)
{
lean_object* v_a_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; 
v_a_5998_ = lean_ctor_get(v___x_5997_, 0);
lean_inc(v_a_5998_);
lean_dec_ref_known(v___x_5997_, 1);
v___x_5999_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_6000_ = lean_string_append(v___x_5999_, v_name_5990_);
lean_dec_ref(v_name_5990_);
v___x_6001_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_6000_, v_a_5998_);
lean_dec(v_a_5998_);
lean_dec_ref(v___x_6000_);
return v___x_6001_;
}
else
{
lean_object* v_a_6002_; lean_object* v___x_6004_; uint8_t v_isShared_6005_; uint8_t v_isSharedCheck_6009_; 
lean_dec_ref(v_name_5990_);
v_a_6002_ = lean_ctor_get(v___x_5997_, 0);
v_isSharedCheck_6009_ = !lean_is_exclusive(v___x_5997_);
if (v_isSharedCheck_6009_ == 0)
{
v___x_6004_ = v___x_5997_;
v_isShared_6005_ = v_isSharedCheck_6009_;
goto v_resetjp_6003_;
}
else
{
lean_inc(v_a_6002_);
lean_dec(v___x_5997_);
v___x_6004_ = lean_box(0);
v_isShared_6005_ = v_isSharedCheck_6009_;
goto v_resetjp_6003_;
}
v_resetjp_6003_:
{
lean_object* v___x_6007_; 
if (v_isShared_6005_ == 0)
{
v___x_6007_ = v___x_6004_;
goto v_reusejp_6006_;
}
else
{
lean_object* v_reuseFailAlloc_6008_; 
v_reuseFailAlloc_6008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6008_, 0, v_a_6002_);
v___x_6007_ = v_reuseFailAlloc_6008_;
goto v_reusejp_6006_;
}
v_reusejp_6006_:
{
return v___x_6007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___boxed(lean_object* v_o_6010_, lean_object* v_name_6011_, lean_object* v_args_6012_, lean_object* v_a_6013_){
_start:
{
lean_object* v_res_6014_; 
v_res_6014_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_o_6010_, v_name_6011_, v_args_6012_);
return v_res_6014_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections(lean_object* v_self_6016_){
_start:
{
lean_object* v___x_6018_; lean_object* v___x_6019_; lean_object* v___x_6020_; 
v___x_6018_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0));
v___x_6019_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2, &l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once, _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2);
v___x_6020_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_self_6016_, v___x_6018_, v___x_6019_);
return v___x_6020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___boxed(lean_object* v_self_6021_, lean_object* v_a_6022_){
_start:
{
lean_object* v_res_6023_; 
v_res_6023_ = l_Lasm_JS_Bun_Server_closeIdleConnections(v_self_6021_);
return v_res_6023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__3(lean_object* v_x_6024_){
_start:
{
if (lean_obj_tag(v_x_6024_) == 0)
{
lean_object* v___x_6025_; 
v___x_6025_ = lean_box(0);
return v___x_6025_;
}
else
{
lean_object* v_val_6026_; lean_object* v___x_6027_; lean_object* v___x_6028_; 
v_val_6026_ = lean_ctor_get(v_x_6024_, 0);
v___x_6027_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6026_);
v___x_6028_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6028_, 0, v_val_6026_);
lean_ctor_set(v___x_6028_, 1, v___x_6027_);
return v___x_6028_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__3___boxed(lean_object* v_x_6029_){
_start:
{
lean_object* v_res_6030_; 
v_res_6030_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__3(v_x_6029_);
lean_dec(v_x_6029_);
return v_res_6030_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__4(lean_object* v_x_6031_){
_start:
{
if (lean_obj_tag(v_x_6031_) == 0)
{
lean_object* v___x_6032_; 
v___x_6032_ = lean_box(0);
return v___x_6032_;
}
else
{
lean_object* v_val_6033_; lean_object* v___x_6034_; lean_object* v___x_6035_; 
v_val_6033_ = lean_ctor_get(v_x_6031_, 0);
v___x_6034_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6033_);
v___x_6035_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6035_, 0, v_val_6033_);
lean_ctor_set(v___x_6035_, 1, v___x_6034_);
return v___x_6035_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__4___boxed(lean_object* v_x_6036_){
_start:
{
lean_object* v_res_6037_; 
v_res_6037_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__4(v_x_6036_);
lean_dec(v_x_6036_);
return v_res_6037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__5(lean_object* v_x_6038_){
_start:
{
if (lean_obj_tag(v_x_6038_) == 0)
{
lean_object* v___x_6039_; 
v___x_6039_ = lean_box(0);
return v___x_6039_;
}
else
{
lean_object* v___x_6040_; 
v___x_6040_ = lean_obj_once(&l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1, &l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1_once, _init_l_Lasm_JS_Bun_instToJSServeRoutes___lam__0___closed__1);
return v___x_6040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__5___boxed(lean_object* v_x_6041_){
_start:
{
lean_object* v_res_6042_; 
v_res_6042_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__5(v_x_6041_);
lean_dec(v_x_6041_);
return v_res_6042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__10(lean_object* v_x_6043_){
_start:
{
if (lean_obj_tag(v_x_6043_) == 0)
{
lean_object* v___x_6044_; 
v___x_6044_ = lean_box(0);
return v___x_6044_;
}
else
{
lean_object* v_val_6045_; lean_object* v___x_6046_; lean_object* v___x_6047_; 
v_val_6045_ = lean_ctor_get(v_x_6043_, 0);
v___x_6046_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6045_);
v___x_6047_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6047_, 0, v_val_6045_);
lean_ctor_set(v___x_6047_, 1, v___x_6046_);
return v___x_6047_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__10___boxed(lean_object* v_x_6048_){
_start:
{
lean_object* v_res_6049_; 
v_res_6049_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__10(v_x_6048_);
lean_dec(v_x_6048_);
return v_res_6049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__11(lean_object* v_x_6050_){
_start:
{
if (lean_obj_tag(v_x_6050_) == 0)
{
lean_object* v___x_6051_; 
v___x_6051_ = lean_box(0);
return v___x_6051_;
}
else
{
lean_object* v_val_6052_; lean_object* v___x_6053_; lean_object* v___x_6054_; 
v_val_6052_ = lean_ctor_get(v_x_6050_, 0);
v___x_6053_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6052_);
v___x_6054_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6054_, 0, v_val_6052_);
lean_ctor_set(v___x_6054_, 1, v___x_6053_);
return v___x_6054_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__11___boxed(lean_object* v_x_6055_){
_start:
{
lean_object* v_res_6056_; 
v_res_6056_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__11(v_x_6055_);
lean_dec(v_x_6055_);
return v_res_6056_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__9(lean_object* v_x_6057_){
_start:
{
if (lean_obj_tag(v_x_6057_) == 0)
{
lean_object* v___x_6058_; 
v___x_6058_ = lean_box(0);
return v___x_6058_;
}
else
{
lean_object* v_val_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; 
v_val_6059_ = lean_ctor_get(v_x_6057_, 0);
v___x_6060_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6059_);
v___x_6061_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6061_, 0, v_val_6059_);
lean_ctor_set(v___x_6061_, 1, v___x_6060_);
return v___x_6061_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__9___boxed(lean_object* v_x_6062_){
_start:
{
lean_object* v_res_6063_; 
v_res_6063_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__9(v_x_6062_);
lean_dec(v_x_6062_);
return v_res_6063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__14_spec__15(lean_object* v_x_6064_){
_start:
{
if (lean_obj_tag(v_x_6064_) == 0)
{
lean_object* v___x_6065_; 
v___x_6065_ = lean_box(0);
return v___x_6065_;
}
else
{
lean_object* v_val_6066_; 
v_val_6066_ = lean_ctor_get(v_x_6064_, 0);
lean_inc(v_val_6066_);
lean_dec_ref_known(v_x_6064_, 1);
if (lean_obj_tag(v_val_6066_) == 0)
{
uint8_t v_value_6067_; 
v_value_6067_ = lean_ctor_get_uint8(v_val_6066_, 0);
lean_dec_ref_known(v_val_6066_, 0);
switch(v_value_6067_)
{
case 0:
{
lean_object* v___x_6068_; 
v___x_6068_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__1));
return v___x_6068_;
}
case 1:
{
lean_object* v___x_6069_; 
v___x_6069_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__3));
return v___x_6069_;
}
case 2:
{
lean_object* v___x_6070_; 
v___x_6070_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__5));
return v___x_6070_;
}
case 3:
{
lean_object* v___x_6071_; 
v___x_6071_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__7));
return v___x_6071_;
}
case 4:
{
lean_object* v___x_6072_; 
v___x_6072_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__9));
return v___x_6072_;
}
case 5:
{
lean_object* v___x_6073_; 
v___x_6073_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__11));
return v___x_6073_;
}
case 6:
{
lean_object* v___x_6074_; 
v___x_6074_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__13));
return v___x_6074_;
}
case 7:
{
lean_object* v___x_6075_; 
v___x_6075_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__15));
return v___x_6075_;
}
case 8:
{
lean_object* v___x_6076_; 
v___x_6076_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__17));
return v___x_6076_;
}
case 9:
{
lean_object* v___x_6077_; 
v___x_6077_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__19));
return v___x_6077_;
}
default: 
{
lean_object* v___x_6078_; 
v___x_6078_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketCompressor___lam__0___closed__21));
return v___x_6078_;
}
}
}
else
{
uint8_t v_value_6079_; lean_object* v___x_6081_; uint8_t v_isShared_6082_; uint8_t v_isSharedCheck_6086_; 
v_value_6079_ = lean_ctor_get_uint8(v_val_6066_, 0);
v_isSharedCheck_6086_ = !lean_is_exclusive(v_val_6066_);
if (v_isSharedCheck_6086_ == 0)
{
v___x_6081_ = v_val_6066_;
v_isShared_6082_ = v_isSharedCheck_6086_;
goto v_resetjp_6080_;
}
else
{
lean_dec(v_val_6066_);
v___x_6081_ = lean_box(0);
v_isShared_6082_ = v_isSharedCheck_6086_;
goto v_resetjp_6080_;
}
v_resetjp_6080_:
{
lean_object* v___x_6084_; 
if (v_isShared_6082_ == 0)
{
lean_ctor_set_tag(v___x_6081_, 2);
v___x_6084_ = v___x_6081_;
goto v_reusejp_6083_;
}
else
{
lean_object* v_reuseFailAlloc_6085_; 
v_reuseFailAlloc_6085_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_6085_, 0, v_value_6079_);
v___x_6084_ = v_reuseFailAlloc_6085_;
goto v_reusejp_6083_;
}
v_reusejp_6083_:
{
return v___x_6084_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__14(lean_object* v_x_6087_){
_start:
{
if (lean_obj_tag(v_x_6087_) == 0)
{
lean_object* v___x_6088_; 
v___x_6088_ = lean_box(0);
return v___x_6088_;
}
else
{
lean_object* v_val_6089_; 
v_val_6089_ = lean_ctor_get(v_x_6087_, 0);
lean_inc(v_val_6089_);
lean_dec_ref_known(v_x_6087_, 1);
if (lean_obj_tag(v_val_6089_) == 0)
{
uint8_t v_value_6090_; lean_object* v___x_6092_; uint8_t v_isShared_6093_; uint8_t v_isSharedCheck_6097_; 
v_value_6090_ = lean_ctor_get_uint8(v_val_6089_, 0);
v_isSharedCheck_6097_ = !lean_is_exclusive(v_val_6089_);
if (v_isSharedCheck_6097_ == 0)
{
v___x_6092_ = v_val_6089_;
v_isShared_6093_ = v_isSharedCheck_6097_;
goto v_resetjp_6091_;
}
else
{
lean_dec(v_val_6089_);
v___x_6092_ = lean_box(0);
v_isShared_6093_ = v_isSharedCheck_6097_;
goto v_resetjp_6091_;
}
v_resetjp_6091_:
{
lean_object* v___x_6095_; 
if (v_isShared_6093_ == 0)
{
lean_ctor_set_tag(v___x_6092_, 2);
v___x_6095_ = v___x_6092_;
goto v_reusejp_6094_;
}
else
{
lean_object* v_reuseFailAlloc_6096_; 
v_reuseFailAlloc_6096_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_6096_, 0, v_value_6090_);
v___x_6095_ = v_reuseFailAlloc_6096_;
goto v_reusejp_6094_;
}
v_reusejp_6094_:
{
return v___x_6095_;
}
}
}
else
{
lean_object* v_value_6098_; lean_object* v_compress_6099_; lean_object* v_decompress_6100_; lean_object* v___x_6102_; uint8_t v_isShared_6103_; uint8_t v_isSharedCheck_6117_; 
v_value_6098_ = lean_ctor_get(v_val_6089_, 0);
lean_inc_ref(v_value_6098_);
lean_dec_ref_known(v_val_6089_, 1);
v_compress_6099_ = lean_ctor_get(v_value_6098_, 0);
v_decompress_6100_ = lean_ctor_get(v_value_6098_, 1);
v_isSharedCheck_6117_ = !lean_is_exclusive(v_value_6098_);
if (v_isSharedCheck_6117_ == 0)
{
v___x_6102_ = v_value_6098_;
v_isShared_6103_ = v_isSharedCheck_6117_;
goto v_resetjp_6101_;
}
else
{
lean_inc(v_decompress_6100_);
lean_inc(v_compress_6099_);
lean_dec(v_value_6098_);
v___x_6102_ = lean_box(0);
v_isShared_6103_ = v_isSharedCheck_6117_;
goto v_resetjp_6101_;
}
v_resetjp_6101_:
{
lean_object* v___x_6104_; lean_object* v___x_6105_; lean_object* v___x_6107_; 
v___x_6104_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__0));
v___x_6105_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__14_spec__15(v_compress_6099_);
if (v_isShared_6103_ == 0)
{
lean_ctor_set(v___x_6102_, 1, v___x_6105_);
lean_ctor_set(v___x_6102_, 0, v___x_6104_);
v___x_6107_ = v___x_6102_;
goto v_reusejp_6106_;
}
else
{
lean_object* v_reuseFailAlloc_6116_; 
v_reuseFailAlloc_6116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6116_, 0, v___x_6104_);
lean_ctor_set(v_reuseFailAlloc_6116_, 1, v___x_6105_);
v___x_6107_ = v_reuseFailAlloc_6116_;
goto v_reusejp_6106_;
}
v_reusejp_6106_:
{
lean_object* v___x_6108_; lean_object* v___x_6109_; lean_object* v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; lean_object* v___x_6113_; lean_object* v___x_6114_; lean_object* v___x_6115_; 
v___x_6108_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandlerPerMessageDeflate___lam__0___closed__1));
v___x_6109_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__14_spec__15(v_decompress_6100_);
v___x_6110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6110_, 0, v___x_6108_);
lean_ctor_set(v___x_6110_, 1, v___x_6109_);
v___x_6111_ = lean_unsigned_to_nat(2u);
v___x_6112_ = lean_mk_empty_array_with_capacity(v___x_6111_);
v___x_6113_ = lean_array_push(v___x_6112_, v___x_6107_);
v___x_6114_ = lean_array_push(v___x_6113_, v___x_6110_);
v___x_6115_ = l_Lasm_JS_Web_Support_fields(v___x_6114_);
lean_dec_ref(v___x_6114_);
return v___x_6115_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__8(lean_object* v_x_6118_){
_start:
{
if (lean_obj_tag(v_x_6118_) == 0)
{
lean_object* v___x_6119_; 
v___x_6119_ = lean_box(0);
return v___x_6119_;
}
else
{
lean_object* v_val_6120_; lean_object* v___x_6121_; lean_object* v___x_6122_; 
v_val_6120_ = lean_ctor_get(v_x_6118_, 0);
v___x_6121_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6120_);
v___x_6122_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6122_, 0, v_val_6120_);
lean_ctor_set(v___x_6122_, 1, v___x_6121_);
return v___x_6122_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__8___boxed(lean_object* v_x_6123_){
_start:
{
lean_object* v_res_6124_; 
v_res_6124_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__8(v_x_6123_);
lean_dec(v_x_6123_);
return v_res_6124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__7(lean_object* v_x_6125_){
_start:
{
if (lean_obj_tag(v_x_6125_) == 0)
{
lean_object* v___x_6126_; 
v___x_6126_ = lean_box(0);
return v___x_6126_;
}
else
{
lean_object* v_val_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; 
v_val_6127_ = lean_ctor_get(v_x_6125_, 0);
v___x_6128_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6127_);
v___x_6129_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6129_, 0, v_val_6127_);
lean_ctor_set(v___x_6129_, 1, v___x_6128_);
return v___x_6129_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__7___boxed(lean_object* v_x_6130_){
_start:
{
lean_object* v_res_6131_; 
v_res_6131_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__7(v_x_6130_);
lean_dec(v_x_6130_);
return v_res_6131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__12(lean_object* v_x_6132_){
_start:
{
if (lean_obj_tag(v_x_6132_) == 0)
{
lean_object* v___x_6133_; 
v___x_6133_ = lean_box(0);
return v___x_6133_;
}
else
{
lean_object* v_val_6134_; lean_object* v___x_6135_; lean_object* v___x_6136_; 
v_val_6134_ = lean_ctor_get(v_x_6132_, 0);
v___x_6135_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6134_);
v___x_6136_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6136_, 0, v_val_6134_);
lean_ctor_set(v___x_6136_, 1, v___x_6135_);
return v___x_6136_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__12___boxed(lean_object* v_x_6137_){
_start:
{
lean_object* v_res_6138_; 
v_res_6138_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__12(v_x_6137_);
lean_dec(v_x_6137_);
return v_res_6138_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__13(lean_object* v_x_6139_){
_start:
{
if (lean_obj_tag(v_x_6139_) == 0)
{
lean_object* v___x_6140_; 
v___x_6140_ = lean_box(0);
return v___x_6140_;
}
else
{
lean_object* v_val_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; 
v_val_6141_ = lean_ctor_get(v_x_6139_, 0);
v___x_6142_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
lean_inc(v_val_6141_);
v___x_6143_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6143_, 0, v_val_6141_);
lean_ctor_set(v___x_6143_, 1, v___x_6142_);
return v___x_6143_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__13___boxed(lean_object* v_x_6144_){
_start:
{
lean_object* v_res_6145_; 
v_res_6145_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__13(v_x_6144_);
lean_dec(v_x_6144_);
return v_res_6145_;
}
}
static lean_object* _init_l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__1(void){
_start:
{
lean_object* v___x_6149_; lean_object* v___x_6150_; lean_object* v___x_6151_; lean_object* v___x_6152_; 
v___x_6149_ = ((lean_object*)(l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__0));
v___x_6150_ = lean_unsigned_to_nat(15u);
v___x_6151_ = lean_mk_empty_array_with_capacity(v___x_6150_);
v___x_6152_ = lean_array_push(v___x_6151_, v___x_6149_);
return v___x_6152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6(lean_object* v_x_6153_){
_start:
{
if (lean_obj_tag(v_x_6153_) == 0)
{
lean_object* v___x_6154_; 
v___x_6154_ = lean_box(0);
return v___x_6154_;
}
else
{
lean_object* v_val_6155_; lean_object* v_message_6156_; lean_object* v_open_6157_; lean_object* v_drain_6158_; lean_object* v_close_6159_; lean_object* v_ping_6160_; lean_object* v_pong_6161_; lean_object* v_error_6162_; lean_object* v_maxPayloadLength_6163_; lean_object* v_backpressureLimit_6164_; lean_object* v_closeOnBackpressureLimit_6165_; lean_object* v_idleTimeout_6166_; lean_object* v_publishToSelf_6167_; lean_object* v_sendPings_6168_; lean_object* v_perMessageDeflate_6169_; lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; lean_object* v___x_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; lean_object* v___x_6184_; lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; lean_object* v___x_6188_; lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; lean_object* v___x_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; lean_object* v___x_6210_; lean_object* v___x_6211_; lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; lean_object* v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; lean_object* v___x_6223_; lean_object* v___x_6224_; lean_object* v___x_6225_; lean_object* v___x_6226_; lean_object* v___x_6227_; 
v_val_6155_ = lean_ctor_get(v_x_6153_, 0);
lean_inc(v_val_6155_);
lean_dec_ref_known(v_x_6153_, 1);
v_message_6156_ = lean_ctor_get(v_val_6155_, 1);
lean_inc(v_message_6156_);
v_open_6157_ = lean_ctor_get(v_val_6155_, 2);
lean_inc(v_open_6157_);
v_drain_6158_ = lean_ctor_get(v_val_6155_, 3);
lean_inc(v_drain_6158_);
v_close_6159_ = lean_ctor_get(v_val_6155_, 4);
lean_inc(v_close_6159_);
v_ping_6160_ = lean_ctor_get(v_val_6155_, 5);
lean_inc(v_ping_6160_);
v_pong_6161_ = lean_ctor_get(v_val_6155_, 6);
lean_inc(v_pong_6161_);
v_error_6162_ = lean_ctor_get(v_val_6155_, 7);
lean_inc(v_error_6162_);
v_maxPayloadLength_6163_ = lean_ctor_get(v_val_6155_, 8);
lean_inc(v_maxPayloadLength_6163_);
v_backpressureLimit_6164_ = lean_ctor_get(v_val_6155_, 9);
lean_inc(v_backpressureLimit_6164_);
v_closeOnBackpressureLimit_6165_ = lean_ctor_get(v_val_6155_, 10);
lean_inc(v_closeOnBackpressureLimit_6165_);
v_idleTimeout_6166_ = lean_ctor_get(v_val_6155_, 11);
lean_inc(v_idleTimeout_6166_);
v_publishToSelf_6167_ = lean_ctor_get(v_val_6155_, 12);
lean_inc(v_publishToSelf_6167_);
v_sendPings_6168_ = lean_ctor_get(v_val_6155_, 13);
lean_inc(v_sendPings_6168_);
v_perMessageDeflate_6169_ = lean_ctor_get(v_val_6155_, 14);
lean_inc(v_perMessageDeflate_6169_);
lean_dec(v_val_6155_);
v___x_6170_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__1));
v___x_6171_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__7(v_message_6156_);
lean_dec(v_message_6156_);
v___x_6172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6172_, 0, v___x_6170_);
lean_ctor_set(v___x_6172_, 1, v___x_6171_);
v___x_6173_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__2));
v___x_6174_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__8(v_open_6157_);
lean_dec(v_open_6157_);
v___x_6175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6175_, 0, v___x_6173_);
lean_ctor_set(v___x_6175_, 1, v___x_6174_);
v___x_6176_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__3));
v___x_6177_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__9(v_drain_6158_);
lean_dec(v_drain_6158_);
v___x_6178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6178_, 0, v___x_6176_);
lean_ctor_set(v___x_6178_, 1, v___x_6177_);
v___x_6179_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__4));
v___x_6180_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__10(v_close_6159_);
lean_dec(v_close_6159_);
v___x_6181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6181_, 0, v___x_6179_);
lean_ctor_set(v___x_6181_, 1, v___x_6180_);
v___x_6182_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__5));
v___x_6183_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__11(v_ping_6160_);
lean_dec(v_ping_6160_);
v___x_6184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6184_, 0, v___x_6182_);
lean_ctor_set(v___x_6184_, 1, v___x_6183_);
v___x_6185_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__6));
v___x_6186_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__12(v_pong_6161_);
lean_dec(v_pong_6161_);
v___x_6187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6187_, 0, v___x_6185_);
lean_ctor_set(v___x_6187_, 1, v___x_6186_);
v___x_6188_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7));
v___x_6189_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__13(v_error_6162_);
lean_dec(v_error_6162_);
v___x_6190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6190_, 0, v___x_6188_);
lean_ctor_set(v___x_6190_, 1, v___x_6189_);
v___x_6191_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__8));
v___x_6192_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_maxPayloadLength_6163_);
lean_dec(v_maxPayloadLength_6163_);
v___x_6193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6193_, 0, v___x_6191_);
lean_ctor_set(v___x_6193_, 1, v___x_6192_);
v___x_6194_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__9));
v___x_6195_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_backpressureLimit_6164_);
lean_dec(v_backpressureLimit_6164_);
v___x_6196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6196_, 0, v___x_6194_);
lean_ctor_set(v___x_6196_, 1, v___x_6195_);
v___x_6197_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__10));
v___x_6198_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_closeOnBackpressureLimit_6165_);
lean_dec(v_closeOnBackpressureLimit_6165_);
v___x_6199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6199_, 0, v___x_6197_);
lean_ctor_set(v___x_6199_, 1, v___x_6198_);
v___x_6200_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11));
v___x_6201_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_6166_);
v___x_6202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6202_, 0, v___x_6200_);
lean_ctor_set(v___x_6202_, 1, v___x_6201_);
v___x_6203_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__12));
v___x_6204_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_publishToSelf_6167_);
lean_dec(v_publishToSelf_6167_);
v___x_6205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6205_, 0, v___x_6203_);
lean_ctor_set(v___x_6205_, 1, v___x_6204_);
v___x_6206_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__13));
v___x_6207_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_sendPings_6168_);
lean_dec(v_sendPings_6168_);
v___x_6208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6208_, 0, v___x_6206_);
lean_ctor_set(v___x_6208_, 1, v___x_6207_);
v___x_6209_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__14));
v___x_6210_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6_spec__14(v_perMessageDeflate_6169_);
v___x_6211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6211_, 0, v___x_6209_);
lean_ctor_set(v___x_6211_, 1, v___x_6210_);
v___x_6212_ = lean_obj_once(&l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__1, &l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__1_once, _init_l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6___closed__1);
v___x_6213_ = lean_array_push(v___x_6212_, v___x_6172_);
v___x_6214_ = lean_array_push(v___x_6213_, v___x_6175_);
v___x_6215_ = lean_array_push(v___x_6214_, v___x_6178_);
v___x_6216_ = lean_array_push(v___x_6215_, v___x_6181_);
v___x_6217_ = lean_array_push(v___x_6216_, v___x_6184_);
v___x_6218_ = lean_array_push(v___x_6217_, v___x_6187_);
v___x_6219_ = lean_array_push(v___x_6218_, v___x_6190_);
v___x_6220_ = lean_array_push(v___x_6219_, v___x_6193_);
v___x_6221_ = lean_array_push(v___x_6220_, v___x_6196_);
v___x_6222_ = lean_array_push(v___x_6221_, v___x_6199_);
v___x_6223_ = lean_array_push(v___x_6222_, v___x_6202_);
v___x_6224_ = lean_array_push(v___x_6223_, v___x_6205_);
v___x_6225_ = lean_array_push(v___x_6224_, v___x_6208_);
v___x_6226_ = lean_array_push(v___x_6225_, v___x_6211_);
v___x_6227_ = l_Lasm_JS_Web_Support_fields(v___x_6226_);
lean_dec_ref(v___x_6226_);
return v___x_6227_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__2(lean_object* v_x_6228_){
_start:
{
if (lean_obj_tag(v_x_6228_) == 0)
{
lean_object* v___x_6229_; 
v___x_6229_ = lean_box(0);
return v___x_6229_;
}
else
{
lean_object* v_val_6230_; 
v_val_6230_ = lean_ctor_get(v_x_6228_, 0);
lean_inc(v_val_6230_);
lean_dec_ref_known(v_x_6228_, 1);
if (lean_obj_tag(v_val_6230_) == 0)
{
uint8_t v_value_6231_; lean_object* v___x_6233_; uint8_t v_isShared_6234_; uint8_t v_isSharedCheck_6238_; 
v_value_6231_ = lean_ctor_get_uint8(v_val_6230_, 0);
v_isSharedCheck_6238_ = !lean_is_exclusive(v_val_6230_);
if (v_isSharedCheck_6238_ == 0)
{
v___x_6233_ = v_val_6230_;
v_isShared_6234_ = v_isSharedCheck_6238_;
goto v_resetjp_6232_;
}
else
{
lean_dec(v_val_6230_);
v___x_6233_ = lean_box(0);
v_isShared_6234_ = v_isSharedCheck_6238_;
goto v_resetjp_6232_;
}
v_resetjp_6232_:
{
lean_object* v___x_6236_; 
if (v_isShared_6234_ == 0)
{
lean_ctor_set_tag(v___x_6233_, 2);
v___x_6236_ = v___x_6233_;
goto v_reusejp_6235_;
}
else
{
lean_object* v_reuseFailAlloc_6237_; 
v_reuseFailAlloc_6237_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_6237_, 0, v_value_6231_);
v___x_6236_ = v_reuseFailAlloc_6237_;
goto v_reusejp_6235_;
}
v_reusejp_6235_:
{
return v___x_6236_;
}
}
}
else
{
lean_object* v_value_6239_; lean_object* v_hmr_6240_; lean_object* v_console_6241_; lean_object* v_chromeDevToolsAutomaticWorkspaceFolders_6242_; lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6247_; lean_object* v___x_6248_; lean_object* v___x_6249_; lean_object* v___x_6250_; lean_object* v___x_6251_; lean_object* v___x_6252_; lean_object* v___x_6253_; lean_object* v___x_6254_; lean_object* v___x_6255_; lean_object* v___x_6256_; lean_object* v___x_6257_; 
v_value_6239_ = lean_ctor_get(v_val_6230_, 0);
lean_inc_ref(v_value_6239_);
lean_dec_ref_known(v_val_6230_, 1);
v_hmr_6240_ = lean_ctor_get(v_value_6239_, 0);
lean_inc(v_hmr_6240_);
v_console_6241_ = lean_ctor_get(v_value_6239_, 1);
lean_inc(v_console_6241_);
v_chromeDevToolsAutomaticWorkspaceFolders_6242_ = lean_ctor_get(v_value_6239_, 2);
lean_inc(v_chromeDevToolsAutomaticWorkspaceFolders_6242_);
lean_dec_ref(v_value_6239_);
v___x_6243_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__0));
v___x_6244_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_hmr_6240_);
lean_dec(v_hmr_6240_);
v___x_6245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6245_, 0, v___x_6243_);
lean_ctor_set(v___x_6245_, 1, v___x_6244_);
v___x_6246_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__1));
v___x_6247_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_console_6241_);
lean_dec(v_console_6241_);
v___x_6248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6248_, 0, v___x_6246_);
lean_ctor_set(v___x_6248_, 1, v___x_6247_);
v___x_6249_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeDevelopment___lam__0___closed__2));
v___x_6250_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_chromeDevToolsAutomaticWorkspaceFolders_6242_);
lean_dec(v_chromeDevToolsAutomaticWorkspaceFolders_6242_);
v___x_6251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6251_, 0, v___x_6249_);
lean_ctor_set(v___x_6251_, 1, v___x_6250_);
v___x_6252_ = lean_unsigned_to_nat(3u);
v___x_6253_ = lean_mk_empty_array_with_capacity(v___x_6252_);
v___x_6254_ = lean_array_push(v___x_6253_, v___x_6245_);
v___x_6255_ = lean_array_push(v___x_6254_, v___x_6248_);
v___x_6256_ = lean_array_push(v___x_6255_, v___x_6251_);
v___x_6257_ = l_Lasm_JS_Web_Support_fields(v___x_6256_);
lean_dec_ref(v___x_6256_);
return v___x_6257_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(lean_object* v_x_6258_){
_start:
{
if (lean_obj_tag(v_x_6258_) == 0)
{
lean_object* v___x_6259_; 
v___x_6259_ = lean_box(0);
return v___x_6259_;
}
else
{
lean_object* v_val_6260_; 
v_val_6260_ = lean_ctor_get(v_x_6258_, 0);
lean_inc(v_val_6260_);
lean_dec_ref_known(v_x_6258_, 1);
if (lean_obj_tag(v_val_6260_) == 0)
{
lean_object* v_value_6261_; lean_object* v___x_6263_; uint8_t v_isShared_6264_; uint8_t v_isSharedCheck_6268_; 
v_value_6261_ = lean_ctor_get(v_val_6260_, 0);
v_isSharedCheck_6268_ = !lean_is_exclusive(v_val_6260_);
if (v_isSharedCheck_6268_ == 0)
{
v___x_6263_ = v_val_6260_;
v_isShared_6264_ = v_isSharedCheck_6268_;
goto v_resetjp_6262_;
}
else
{
lean_inc(v_value_6261_);
lean_dec(v_val_6260_);
v___x_6263_ = lean_box(0);
v_isShared_6264_ = v_isSharedCheck_6268_;
goto v_resetjp_6262_;
}
v_resetjp_6262_:
{
lean_object* v___x_6266_; 
if (v_isShared_6264_ == 0)
{
lean_ctor_set_tag(v___x_6263_, 4);
v___x_6266_ = v___x_6263_;
goto v_reusejp_6265_;
}
else
{
lean_object* v_reuseFailAlloc_6267_; 
v_reuseFailAlloc_6267_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6267_, 0, v_value_6261_);
v___x_6266_ = v_reuseFailAlloc_6267_;
goto v_reusejp_6265_;
}
v_reusejp_6265_:
{
return v___x_6266_;
}
}
}
else
{
lean_object* v_value_6269_; lean_object* v___x_6271_; uint8_t v_isShared_6272_; uint8_t v_isSharedCheck_6282_; 
v_value_6269_ = lean_ctor_get(v_val_6260_, 0);
v_isSharedCheck_6282_ = !lean_is_exclusive(v_val_6260_);
if (v_isSharedCheck_6282_ == 0)
{
v___x_6271_ = v_val_6260_;
v_isShared_6272_ = v_isSharedCheck_6282_;
goto v_resetjp_6270_;
}
else
{
lean_inc(v_value_6269_);
lean_dec(v_val_6260_);
v___x_6271_ = lean_box(0);
v_isShared_6272_ = v_isSharedCheck_6282_;
goto v_resetjp_6270_;
}
v_resetjp_6270_:
{
lean_object* v___x_6273_; lean_object* v___x_6274_; lean_object* v___x_6275_; uint8_t v___x_6276_; 
v___x_6273_ = lean_nat_to_int(v_value_6269_);
v___x_6274_ = lean_nat_abs(v___x_6273_);
v___x_6275_ = lean_cstr_to_nat("9007199254740991");
v___x_6276_ = lean_nat_dec_le(v___x_6274_, v___x_6275_);
lean_dec(v___x_6274_);
if (v___x_6276_ == 0)
{
lean_object* v___x_6278_; 
if (v_isShared_6272_ == 0)
{
lean_ctor_set_tag(v___x_6271_, 5);
lean_ctor_set(v___x_6271_, 0, v___x_6273_);
v___x_6278_ = v___x_6271_;
goto v_reusejp_6277_;
}
else
{
lean_object* v_reuseFailAlloc_6279_; 
v_reuseFailAlloc_6279_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6279_, 0, v___x_6273_);
v___x_6278_ = v_reuseFailAlloc_6279_;
goto v_reusejp_6277_;
}
v_reusejp_6277_:
{
return v___x_6278_;
}
}
else
{
double v___x_6280_; lean_object* v___x_6281_; 
lean_del_object(v___x_6271_);
v___x_6280_ = l_Float_ofInt(v___x_6273_);
lean_dec(v___x_6273_);
v___x_6281_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_6281_, 0, v___x_6280_);
return v___x_6281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1_spec__1(size_t v_sz_6283_, size_t v_i_6284_, lean_object* v_bs_6285_){
_start:
{
uint8_t v___x_6286_; 
v___x_6286_ = lean_usize_dec_lt(v_i_6284_, v_sz_6283_);
if (v___x_6286_ == 0)
{
return v_bs_6285_;
}
else
{
lean_object* v_v_6287_; lean_object* v_passphrase_6288_; lean_object* v_dhParamsFile_6289_; lean_object* v_serverName_6290_; lean_object* v_servername_6291_; lean_object* v_lowMemoryMode_6292_; lean_object* v_rejectUnauthorized_6293_; lean_object* v_requestCert_6294_; lean_object* v_ca_6295_; lean_object* v_crl_6296_; lean_object* v_cert_6297_; lean_object* v_key_6298_; lean_object* v_secureOptions_6299_; lean_object* v_ALPNProtocols_6300_; lean_object* v_ciphers_6301_; lean_object* v_clientRenegotiationLimit_6302_; lean_object* v_clientRenegotiationWindow_6303_; lean_object* v___x_6304_; lean_object* v_bs_x27_6305_; lean_object* v___x_6306_; lean_object* v___x_6307_; lean_object* v___x_6308_; lean_object* v___x_6309_; lean_object* v___x_6310_; lean_object* v___x_6311_; lean_object* v___x_6312_; lean_object* v___x_6313_; lean_object* v___x_6314_; lean_object* v___x_6315_; lean_object* v___x_6316_; lean_object* v___x_6317_; lean_object* v___x_6318_; lean_object* v___x_6319_; lean_object* v___x_6320_; lean_object* v___x_6321_; lean_object* v___x_6322_; lean_object* v___x_6323_; lean_object* v___x_6324_; lean_object* v___x_6325_; lean_object* v___x_6326_; lean_object* v___x_6327_; lean_object* v___x_6328_; lean_object* v___x_6329_; lean_object* v___x_6330_; lean_object* v___x_6331_; lean_object* v___x_6332_; lean_object* v___x_6333_; lean_object* v___x_6334_; lean_object* v___x_6335_; lean_object* v___x_6336_; lean_object* v___x_6337_; lean_object* v___x_6338_; lean_object* v___x_6339_; lean_object* v___x_6340_; lean_object* v___x_6341_; lean_object* v___x_6342_; lean_object* v___x_6343_; lean_object* v___x_6344_; lean_object* v___x_6345_; lean_object* v___x_6346_; lean_object* v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6350_; lean_object* v___x_6351_; lean_object* v___x_6352_; lean_object* v___x_6353_; lean_object* v___x_6354_; lean_object* v___x_6355_; lean_object* v___x_6356_; lean_object* v___x_6357_; lean_object* v___x_6358_; lean_object* v___x_6359_; lean_object* v___x_6360_; lean_object* v___x_6361_; lean_object* v___x_6362_; lean_object* v___x_6363_; lean_object* v___x_6364_; lean_object* v___x_6365_; lean_object* v___x_6366_; lean_object* v___x_6367_; lean_object* v___x_6368_; lean_object* v___x_6369_; lean_object* v___x_6370_; lean_object* v___x_6371_; lean_object* v___x_6372_; size_t v___x_6373_; size_t v___x_6374_; lean_object* v___x_6375_; 
v_v_6287_ = lean_array_uget_borrowed(v_bs_6285_, v_i_6284_);
v_passphrase_6288_ = lean_ctor_get(v_v_6287_, 0);
lean_inc(v_passphrase_6288_);
v_dhParamsFile_6289_ = lean_ctor_get(v_v_6287_, 1);
lean_inc(v_dhParamsFile_6289_);
v_serverName_6290_ = lean_ctor_get(v_v_6287_, 2);
lean_inc(v_serverName_6290_);
v_servername_6291_ = lean_ctor_get(v_v_6287_, 3);
lean_inc(v_servername_6291_);
v_lowMemoryMode_6292_ = lean_ctor_get(v_v_6287_, 4);
lean_inc(v_lowMemoryMode_6292_);
v_rejectUnauthorized_6293_ = lean_ctor_get(v_v_6287_, 5);
lean_inc(v_rejectUnauthorized_6293_);
v_requestCert_6294_ = lean_ctor_get(v_v_6287_, 6);
lean_inc(v_requestCert_6294_);
v_ca_6295_ = lean_ctor_get(v_v_6287_, 7);
lean_inc(v_ca_6295_);
v_crl_6296_ = lean_ctor_get(v_v_6287_, 8);
lean_inc(v_crl_6296_);
v_cert_6297_ = lean_ctor_get(v_v_6287_, 9);
lean_inc(v_cert_6297_);
v_key_6298_ = lean_ctor_get(v_v_6287_, 10);
lean_inc(v_key_6298_);
v_secureOptions_6299_ = lean_ctor_get(v_v_6287_, 11);
lean_inc(v_secureOptions_6299_);
v_ALPNProtocols_6300_ = lean_ctor_get(v_v_6287_, 12);
lean_inc(v_ALPNProtocols_6300_);
v_ciphers_6301_ = lean_ctor_get(v_v_6287_, 13);
lean_inc(v_ciphers_6301_);
v_clientRenegotiationLimit_6302_ = lean_ctor_get(v_v_6287_, 14);
lean_inc(v_clientRenegotiationLimit_6302_);
v_clientRenegotiationWindow_6303_ = lean_ctor_get(v_v_6287_, 15);
lean_inc(v_clientRenegotiationWindow_6303_);
v___x_6304_ = lean_unsigned_to_nat(0u);
v_bs_x27_6305_ = lean_array_uset(v_bs_6285_, v_i_6284_, v___x_6304_);
v___x_6306_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__0));
v___x_6307_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_passphrase_6288_);
v___x_6308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6308_, 0, v___x_6306_);
lean_ctor_set(v___x_6308_, 1, v___x_6307_);
v___x_6309_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__1));
v___x_6310_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dhParamsFile_6289_);
v___x_6311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6311_, 0, v___x_6309_);
lean_ctor_set(v___x_6311_, 1, v___x_6310_);
v___x_6312_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__2));
v___x_6313_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_serverName_6290_);
v___x_6314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6314_, 0, v___x_6312_);
lean_ctor_set(v___x_6314_, 1, v___x_6313_);
v___x_6315_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__3));
v___x_6316_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_servername_6291_);
v___x_6317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6317_, 0, v___x_6315_);
lean_ctor_set(v___x_6317_, 1, v___x_6316_);
v___x_6318_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__4));
v___x_6319_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_lowMemoryMode_6292_);
lean_dec(v_lowMemoryMode_6292_);
v___x_6320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6320_, 0, v___x_6318_);
lean_ctor_set(v___x_6320_, 1, v___x_6319_);
v___x_6321_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__5));
v___x_6322_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_rejectUnauthorized_6293_);
lean_dec(v_rejectUnauthorized_6293_);
v___x_6323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6323_, 0, v___x_6321_);
lean_ctor_set(v___x_6323_, 1, v___x_6322_);
v___x_6324_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__6));
v___x_6325_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_requestCert_6294_);
lean_dec(v_requestCert_6294_);
v___x_6326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6326_, 0, v___x_6324_);
lean_ctor_set(v___x_6326_, 1, v___x_6325_);
v___x_6327_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__7));
v___x_6328_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_ca_6295_);
v___x_6329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6329_, 0, v___x_6327_);
lean_ctor_set(v___x_6329_, 1, v___x_6328_);
v___x_6330_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__8));
v___x_6331_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_crl_6296_);
v___x_6332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6332_, 0, v___x_6330_);
lean_ctor_set(v___x_6332_, 1, v___x_6331_);
v___x_6333_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__9));
v___x_6334_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_cert_6297_);
v___x_6335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6335_, 0, v___x_6333_);
lean_ctor_set(v___x_6335_, 1, v___x_6334_);
v___x_6336_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__10));
v___x_6337_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_key_6298_);
v___x_6338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6338_, 0, v___x_6336_);
lean_ctor_set(v___x_6338_, 1, v___x_6337_);
v___x_6339_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__11));
v___x_6340_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_secureOptions_6299_);
lean_dec(v_secureOptions_6299_);
v___x_6341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6341_, 0, v___x_6339_);
lean_ctor_set(v___x_6341_, 1, v___x_6340_);
v___x_6342_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__12));
v___x_6343_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_end_spec__0(v_ALPNProtocols_6300_);
v___x_6344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6344_, 0, v___x_6342_);
lean_ctor_set(v___x_6344_, 1, v___x_6343_);
v___x_6345_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__13));
v___x_6346_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_ciphers_6301_);
v___x_6347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6347_, 0, v___x_6345_);
lean_ctor_set(v___x_6347_, 1, v___x_6346_);
v___x_6348_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__14));
v___x_6349_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_clientRenegotiationLimit_6302_);
lean_dec(v_clientRenegotiationLimit_6302_);
v___x_6350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6350_, 0, v___x_6348_);
lean_ctor_set(v___x_6350_, 1, v___x_6349_);
v___x_6351_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__15));
v___x_6352_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_clientRenegotiationWindow_6303_);
lean_dec(v_clientRenegotiationWindow_6303_);
v___x_6353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6353_, 0, v___x_6351_);
lean_ctor_set(v___x_6353_, 1, v___x_6352_);
v___x_6354_ = lean_unsigned_to_nat(16u);
v___x_6355_ = lean_mk_empty_array_with_capacity(v___x_6354_);
v___x_6356_ = lean_array_push(v___x_6355_, v___x_6308_);
v___x_6357_ = lean_array_push(v___x_6356_, v___x_6311_);
v___x_6358_ = lean_array_push(v___x_6357_, v___x_6314_);
v___x_6359_ = lean_array_push(v___x_6358_, v___x_6317_);
v___x_6360_ = lean_array_push(v___x_6359_, v___x_6320_);
v___x_6361_ = lean_array_push(v___x_6360_, v___x_6323_);
v___x_6362_ = lean_array_push(v___x_6361_, v___x_6326_);
v___x_6363_ = lean_array_push(v___x_6362_, v___x_6329_);
v___x_6364_ = lean_array_push(v___x_6363_, v___x_6332_);
v___x_6365_ = lean_array_push(v___x_6364_, v___x_6335_);
v___x_6366_ = lean_array_push(v___x_6365_, v___x_6338_);
v___x_6367_ = lean_array_push(v___x_6366_, v___x_6341_);
v___x_6368_ = lean_array_push(v___x_6367_, v___x_6344_);
v___x_6369_ = lean_array_push(v___x_6368_, v___x_6347_);
v___x_6370_ = lean_array_push(v___x_6369_, v___x_6350_);
v___x_6371_ = lean_array_push(v___x_6370_, v___x_6353_);
v___x_6372_ = l_Lasm_JS_Web_Support_fields(v___x_6371_);
lean_dec_ref(v___x_6371_);
v___x_6373_ = ((size_t)1ULL);
v___x_6374_ = lean_usize_add(v_i_6284_, v___x_6373_);
v___x_6375_ = lean_array_uset(v_bs_x27_6305_, v_i_6284_, v___x_6372_);
v_i_6284_ = v___x_6374_;
v_bs_6285_ = v___x_6375_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1_spec__1___boxed(lean_object* v_sz_6377_, lean_object* v_i_6378_, lean_object* v_bs_6379_){
_start:
{
size_t v_sz_boxed_6380_; size_t v_i_boxed_6381_; lean_object* v_res_6382_; 
v_sz_boxed_6380_ = lean_unbox_usize(v_sz_6377_);
lean_dec(v_sz_6377_);
v_i_boxed_6381_ = lean_unbox_usize(v_i_6378_);
lean_dec(v_i_6378_);
v_res_6382_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1_spec__1(v_sz_boxed_6380_, v_i_boxed_6381_, v_bs_6379_);
return v_res_6382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(lean_object* v_x_6383_){
_start:
{
if (lean_obj_tag(v_x_6383_) == 0)
{
lean_object* v___x_6384_; 
v___x_6384_ = lean_box(0);
return v___x_6384_;
}
else
{
lean_object* v_val_6385_; 
v_val_6385_ = lean_ctor_get(v_x_6383_, 0);
lean_inc(v_val_6385_);
lean_dec_ref_known(v_x_6383_, 1);
if (lean_obj_tag(v_val_6385_) == 0)
{
lean_object* v_value_6386_; lean_object* v_passphrase_6387_; lean_object* v_dhParamsFile_6388_; lean_object* v_serverName_6389_; lean_object* v_servername_6390_; lean_object* v_lowMemoryMode_6391_; lean_object* v_rejectUnauthorized_6392_; lean_object* v_requestCert_6393_; lean_object* v_ca_6394_; lean_object* v_crl_6395_; lean_object* v_cert_6396_; lean_object* v_key_6397_; lean_object* v_secureOptions_6398_; lean_object* v_ALPNProtocols_6399_; lean_object* v_ciphers_6400_; lean_object* v_clientRenegotiationLimit_6401_; lean_object* v_clientRenegotiationWindow_6402_; lean_object* v___x_6403_; lean_object* v___x_6404_; lean_object* v___x_6405_; lean_object* v___x_6406_; lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; lean_object* v___x_6414_; lean_object* v___x_6415_; lean_object* v___x_6416_; lean_object* v___x_6417_; lean_object* v___x_6418_; lean_object* v___x_6419_; lean_object* v___x_6420_; lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; lean_object* v___x_6424_; lean_object* v___x_6425_; lean_object* v___x_6426_; lean_object* v___x_6427_; lean_object* v___x_6428_; lean_object* v___x_6429_; lean_object* v___x_6430_; lean_object* v___x_6431_; lean_object* v___x_6432_; lean_object* v___x_6433_; lean_object* v___x_6434_; lean_object* v___x_6435_; lean_object* v___x_6436_; lean_object* v___x_6437_; lean_object* v___x_6438_; lean_object* v___x_6439_; lean_object* v___x_6440_; lean_object* v___x_6441_; lean_object* v___x_6442_; lean_object* v___x_6443_; lean_object* v___x_6444_; lean_object* v___x_6445_; lean_object* v___x_6446_; lean_object* v___x_6447_; lean_object* v___x_6448_; lean_object* v___x_6449_; lean_object* v___x_6450_; lean_object* v___x_6451_; lean_object* v___x_6452_; lean_object* v___x_6453_; lean_object* v___x_6454_; lean_object* v___x_6455_; lean_object* v___x_6456_; lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v___x_6459_; lean_object* v___x_6460_; lean_object* v___x_6461_; lean_object* v___x_6462_; lean_object* v___x_6463_; lean_object* v___x_6464_; lean_object* v___x_6465_; lean_object* v___x_6466_; lean_object* v___x_6467_; lean_object* v___x_6468_; lean_object* v___x_6469_; 
v_value_6386_ = lean_ctor_get(v_val_6385_, 0);
lean_inc_ref(v_value_6386_);
lean_dec_ref_known(v_val_6385_, 1);
v_passphrase_6387_ = lean_ctor_get(v_value_6386_, 0);
lean_inc(v_passphrase_6387_);
v_dhParamsFile_6388_ = lean_ctor_get(v_value_6386_, 1);
lean_inc(v_dhParamsFile_6388_);
v_serverName_6389_ = lean_ctor_get(v_value_6386_, 2);
lean_inc(v_serverName_6389_);
v_servername_6390_ = lean_ctor_get(v_value_6386_, 3);
lean_inc(v_servername_6390_);
v_lowMemoryMode_6391_ = lean_ctor_get(v_value_6386_, 4);
lean_inc(v_lowMemoryMode_6391_);
v_rejectUnauthorized_6392_ = lean_ctor_get(v_value_6386_, 5);
lean_inc(v_rejectUnauthorized_6392_);
v_requestCert_6393_ = lean_ctor_get(v_value_6386_, 6);
lean_inc(v_requestCert_6393_);
v_ca_6394_ = lean_ctor_get(v_value_6386_, 7);
lean_inc(v_ca_6394_);
v_crl_6395_ = lean_ctor_get(v_value_6386_, 8);
lean_inc(v_crl_6395_);
v_cert_6396_ = lean_ctor_get(v_value_6386_, 9);
lean_inc(v_cert_6396_);
v_key_6397_ = lean_ctor_get(v_value_6386_, 10);
lean_inc(v_key_6397_);
v_secureOptions_6398_ = lean_ctor_get(v_value_6386_, 11);
lean_inc(v_secureOptions_6398_);
v_ALPNProtocols_6399_ = lean_ctor_get(v_value_6386_, 12);
lean_inc(v_ALPNProtocols_6399_);
v_ciphers_6400_ = lean_ctor_get(v_value_6386_, 13);
lean_inc(v_ciphers_6400_);
v_clientRenegotiationLimit_6401_ = lean_ctor_get(v_value_6386_, 14);
lean_inc(v_clientRenegotiationLimit_6401_);
v_clientRenegotiationWindow_6402_ = lean_ctor_get(v_value_6386_, 15);
lean_inc(v_clientRenegotiationWindow_6402_);
lean_dec_ref(v_value_6386_);
v___x_6403_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__0));
v___x_6404_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_passphrase_6387_);
v___x_6405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6405_, 0, v___x_6403_);
lean_ctor_set(v___x_6405_, 1, v___x_6404_);
v___x_6406_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__1));
v___x_6407_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_dhParamsFile_6388_);
v___x_6408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6408_, 0, v___x_6406_);
lean_ctor_set(v___x_6408_, 1, v___x_6407_);
v___x_6409_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__2));
v___x_6410_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_serverName_6389_);
v___x_6411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6411_, 0, v___x_6409_);
lean_ctor_set(v___x_6411_, 1, v___x_6410_);
v___x_6412_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__3));
v___x_6413_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_servername_6390_);
v___x_6414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6414_, 0, v___x_6412_);
lean_ctor_set(v___x_6414_, 1, v___x_6413_);
v___x_6415_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__4));
v___x_6416_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_lowMemoryMode_6391_);
lean_dec(v_lowMemoryMode_6391_);
v___x_6417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6417_, 0, v___x_6415_);
lean_ctor_set(v___x_6417_, 1, v___x_6416_);
v___x_6418_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__5));
v___x_6419_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_rejectUnauthorized_6392_);
lean_dec(v_rejectUnauthorized_6392_);
v___x_6420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6420_, 0, v___x_6418_);
lean_ctor_set(v___x_6420_, 1, v___x_6419_);
v___x_6421_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__6));
v___x_6422_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_requestCert_6393_);
lean_dec(v_requestCert_6393_);
v___x_6423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6423_, 0, v___x_6421_);
lean_ctor_set(v___x_6423_, 1, v___x_6422_);
v___x_6424_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__7));
v___x_6425_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_ca_6394_);
v___x_6426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6426_, 0, v___x_6424_);
lean_ctor_set(v___x_6426_, 1, v___x_6425_);
v___x_6427_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__8));
v___x_6428_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_crl_6395_);
v___x_6429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6429_, 0, v___x_6427_);
lean_ctor_set(v___x_6429_, 1, v___x_6428_);
v___x_6430_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__9));
v___x_6431_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_cert_6396_);
v___x_6432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6432_, 0, v___x_6430_);
lean_ctor_set(v___x_6432_, 1, v___x_6431_);
v___x_6433_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__10));
v___x_6434_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_upgradeTLS_spec__1(v_key_6397_);
v___x_6435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6435_, 0, v___x_6433_);
lean_ctor_set(v___x_6435_, 1, v___x_6434_);
v___x_6436_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__11));
v___x_6437_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_secureOptions_6398_);
lean_dec(v_secureOptions_6398_);
v___x_6438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6438_, 0, v___x_6436_);
lean_ctor_set(v___x_6438_, 1, v___x_6437_);
v___x_6439_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__12));
v___x_6440_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_SocketUnknown_end_spec__0(v_ALPNProtocols_6399_);
v___x_6441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6441_, 0, v___x_6439_);
lean_ctor_set(v___x_6441_, 1, v___x_6440_);
v___x_6442_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__13));
v___x_6443_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_ciphers_6400_);
v___x_6444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6444_, 0, v___x_6442_);
lean_ctor_set(v___x_6444_, 1, v___x_6443_);
v___x_6445_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__14));
v___x_6446_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_clientRenegotiationLimit_6401_);
lean_dec(v_clientRenegotiationLimit_6401_);
v___x_6447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6447_, 0, v___x_6445_);
lean_ctor_set(v___x_6447_, 1, v___x_6446_);
v___x_6448_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSTLSOptionsOrSequenceOfTLSOptions___lam__0___closed__15));
v___x_6449_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStream_new_spec__0_spec__0(v_clientRenegotiationWindow_6402_);
lean_dec(v_clientRenegotiationWindow_6402_);
v___x_6450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6450_, 0, v___x_6448_);
lean_ctor_set(v___x_6450_, 1, v___x_6449_);
v___x_6451_ = lean_unsigned_to_nat(16u);
v___x_6452_ = lean_mk_empty_array_with_capacity(v___x_6451_);
v___x_6453_ = lean_array_push(v___x_6452_, v___x_6405_);
v___x_6454_ = lean_array_push(v___x_6453_, v___x_6408_);
v___x_6455_ = lean_array_push(v___x_6454_, v___x_6411_);
v___x_6456_ = lean_array_push(v___x_6455_, v___x_6414_);
v___x_6457_ = lean_array_push(v___x_6456_, v___x_6417_);
v___x_6458_ = lean_array_push(v___x_6457_, v___x_6420_);
v___x_6459_ = lean_array_push(v___x_6458_, v___x_6423_);
v___x_6460_ = lean_array_push(v___x_6459_, v___x_6426_);
v___x_6461_ = lean_array_push(v___x_6460_, v___x_6429_);
v___x_6462_ = lean_array_push(v___x_6461_, v___x_6432_);
v___x_6463_ = lean_array_push(v___x_6462_, v___x_6435_);
v___x_6464_ = lean_array_push(v___x_6463_, v___x_6438_);
v___x_6465_ = lean_array_push(v___x_6464_, v___x_6441_);
v___x_6466_ = lean_array_push(v___x_6465_, v___x_6444_);
v___x_6467_ = lean_array_push(v___x_6466_, v___x_6447_);
v___x_6468_ = lean_array_push(v___x_6467_, v___x_6450_);
v___x_6469_ = l_Lasm_JS_Web_Support_fields(v___x_6468_);
lean_dec_ref(v___x_6468_);
return v___x_6469_;
}
else
{
lean_object* v_value_6470_; lean_object* v___x_6472_; uint8_t v_isShared_6473_; uint8_t v_isSharedCheck_6480_; 
v_value_6470_ = lean_ctor_get(v_val_6385_, 0);
v_isSharedCheck_6480_ = !lean_is_exclusive(v_val_6385_);
if (v_isSharedCheck_6480_ == 0)
{
v___x_6472_ = v_val_6385_;
v_isShared_6473_ = v_isSharedCheck_6480_;
goto v_resetjp_6471_;
}
else
{
lean_inc(v_value_6470_);
lean_dec(v_val_6385_);
v___x_6472_ = lean_box(0);
v_isShared_6473_ = v_isSharedCheck_6480_;
goto v_resetjp_6471_;
}
v_resetjp_6471_:
{
size_t v_sz_6474_; size_t v___x_6475_; lean_object* v___x_6476_; lean_object* v___x_6478_; 
v_sz_6474_ = lean_array_size(v_value_6470_);
v___x_6475_ = ((size_t)0ULL);
v___x_6476_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1_spec__1(v_sz_6474_, v___x_6475_, v_value_6470_);
if (v_isShared_6473_ == 0)
{
lean_ctor_set_tag(v___x_6472_, 7);
lean_ctor_set(v___x_6472_, 0, v___x_6476_);
v___x_6478_ = v___x_6472_;
goto v_reusejp_6477_;
}
else
{
lean_object* v_reuseFailAlloc_6479_; 
v_reuseFailAlloc_6479_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6479_, 0, v___x_6476_);
v___x_6478_ = v_reuseFailAlloc_6479_;
goto v_reusejp_6477_;
}
v_reusejp_6477_:
{
return v___x_6478_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload(lean_object* v_self_6482_, lean_object* v_options_6483_){
_start:
{
lean_object* v_hostname_6485_; lean_object* v_port_6486_; lean_object* v_reusePort_6487_; lean_object* v_ipv6Only_6488_; lean_object* v_http3_6489_; lean_object* v_http2_6490_; lean_object* v_http1_6491_; lean_object* v_idleTimeout_6492_; lean_object* v_tls_6493_; lean_object* v_maxRequestBodySize_6494_; lean_object* v_development_6495_; lean_object* v_error_6496_; lean_object* v_id_6497_; lean_object* v_fetch_6498_; lean_object* v_routes_6499_; lean_object* v_websocket_6500_; lean_object* v_unix_6501_; lean_object* v___x_6502_; lean_object* v___x_6503_; lean_object* v___x_6504_; lean_object* v___x_6505_; lean_object* v___x_6506_; lean_object* v___x_6507_; lean_object* v___x_6508_; lean_object* v___x_6509_; lean_object* v___x_6510_; lean_object* v___x_6511_; lean_object* v___x_6512_; lean_object* v___x_6513_; lean_object* v___x_6514_; lean_object* v___x_6515_; lean_object* v___x_6516_; lean_object* v___x_6517_; lean_object* v___x_6518_; lean_object* v___x_6519_; lean_object* v___x_6520_; lean_object* v___x_6521_; lean_object* v___x_6522_; lean_object* v___x_6523_; lean_object* v___x_6524_; lean_object* v___x_6525_; lean_object* v___x_6526_; lean_object* v___x_6527_; lean_object* v___x_6528_; lean_object* v___x_6529_; lean_object* v___x_6530_; lean_object* v___x_6531_; lean_object* v___x_6532_; lean_object* v___x_6533_; lean_object* v___x_6534_; lean_object* v___x_6535_; lean_object* v___x_6536_; lean_object* v___x_6537_; lean_object* v___x_6538_; lean_object* v___x_6539_; lean_object* v___x_6540_; lean_object* v___x_6541_; lean_object* v___x_6542_; lean_object* v___x_6543_; lean_object* v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; lean_object* v___x_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; lean_object* v___x_6552_; lean_object* v___x_6553_; lean_object* v___x_6554_; lean_object* v___x_6555_; lean_object* v___x_6556_; lean_object* v___x_6557_; lean_object* v___x_6558_; lean_object* v___x_6559_; lean_object* v___x_6560_; lean_object* v___x_6561_; lean_object* v___x_6562_; lean_object* v___x_6563_; lean_object* v___x_6564_; lean_object* v___x_6565_; lean_object* v___x_6566_; lean_object* v___x_6567_; lean_object* v___x_6568_; lean_object* v___x_6569_; lean_object* v___x_6570_; lean_object* v___x_6571_; lean_object* v___x_6572_; lean_object* v___x_6573_; lean_object* v___x_6574_; lean_object* v___x_6575_; lean_object* v___x_6576_; lean_object* v___x_6577_; lean_object* v___x_6578_; 
v_hostname_6485_ = lean_ctor_get(v_options_6483_, 0);
lean_inc(v_hostname_6485_);
v_port_6486_ = lean_ctor_get(v_options_6483_, 1);
lean_inc(v_port_6486_);
v_reusePort_6487_ = lean_ctor_get(v_options_6483_, 2);
lean_inc(v_reusePort_6487_);
v_ipv6Only_6488_ = lean_ctor_get(v_options_6483_, 3);
lean_inc(v_ipv6Only_6488_);
v_http3_6489_ = lean_ctor_get(v_options_6483_, 4);
lean_inc(v_http3_6489_);
v_http2_6490_ = lean_ctor_get(v_options_6483_, 5);
lean_inc(v_http2_6490_);
v_http1_6491_ = lean_ctor_get(v_options_6483_, 6);
lean_inc(v_http1_6491_);
v_idleTimeout_6492_ = lean_ctor_get(v_options_6483_, 7);
lean_inc(v_idleTimeout_6492_);
v_tls_6493_ = lean_ctor_get(v_options_6483_, 8);
lean_inc(v_tls_6493_);
v_maxRequestBodySize_6494_ = lean_ctor_get(v_options_6483_, 9);
lean_inc(v_maxRequestBodySize_6494_);
v_development_6495_ = lean_ctor_get(v_options_6483_, 10);
lean_inc(v_development_6495_);
v_error_6496_ = lean_ctor_get(v_options_6483_, 11);
lean_inc(v_error_6496_);
v_id_6497_ = lean_ctor_get(v_options_6483_, 12);
lean_inc(v_id_6497_);
v_fetch_6498_ = lean_ctor_get(v_options_6483_, 13);
lean_inc(v_fetch_6498_);
v_routes_6499_ = lean_ctor_get(v_options_6483_, 14);
lean_inc(v_routes_6499_);
v_websocket_6500_ = lean_ctor_get(v_options_6483_, 15);
lean_inc(v_websocket_6500_);
v_unix_6501_ = lean_ctor_get(v_options_6483_, 16);
lean_inc(v_unix_6501_);
lean_dec_ref(v_options_6483_);
v___x_6502_ = ((lean_object*)(l_Lasm_JS_Bun_Server_reload___closed__0));
v___x_6503_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_6504_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_6485_);
v___x_6505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6505_, 0, v___x_6503_);
lean_ctor_set(v___x_6505_, 1, v___x_6504_);
v___x_6506_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_6507_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_port_6486_);
v___x_6508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6508_, 0, v___x_6506_);
lean_ctor_set(v___x_6508_, 1, v___x_6507_);
v___x_6509_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_6510_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_6487_);
lean_dec(v_reusePort_6487_);
v___x_6511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6511_, 0, v___x_6509_);
lean_ctor_set(v___x_6511_, 1, v___x_6510_);
v___x_6512_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_6513_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_6488_);
lean_dec(v_ipv6Only_6488_);
v___x_6514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6514_, 0, v___x_6512_);
lean_ctor_set(v___x_6514_, 1, v___x_6513_);
v___x_6515_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_6516_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_http3_6489_);
lean_dec(v_http3_6489_);
v___x_6517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6517_, 0, v___x_6515_);
lean_ctor_set(v___x_6517_, 1, v___x_6516_);
v___x_6518_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_6519_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_http2_6490_);
lean_dec(v_http2_6490_);
v___x_6520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6520_, 0, v___x_6518_);
lean_ctor_set(v___x_6520_, 1, v___x_6519_);
v___x_6521_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_6522_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_http1_6491_);
lean_dec(v_http1_6491_);
v___x_6523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6523_, 0, v___x_6521_);
lean_ctor_set(v___x_6523_, 1, v___x_6522_);
v___x_6524_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11));
v___x_6525_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_6492_);
v___x_6526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6526_, 0, v___x_6524_);
lean_ctor_set(v___x_6526_, 1, v___x_6525_);
v___x_6527_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_6528_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_tls_6493_);
v___x_6529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6529_, 0, v___x_6527_);
lean_ctor_set(v___x_6529_, 1, v___x_6528_);
v___x_6530_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_6531_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_6494_);
v___x_6532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6532_, 0, v___x_6530_);
lean_ctor_set(v___x_6532_, 1, v___x_6531_);
v___x_6533_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__9));
v___x_6534_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__2(v_development_6495_);
v___x_6535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6535_, 0, v___x_6533_);
lean_ctor_set(v___x_6535_, 1, v___x_6534_);
v___x_6536_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7));
v___x_6537_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__3(v_error_6496_);
lean_dec(v_error_6496_);
v___x_6538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6538_, 0, v___x_6536_);
lean_ctor_set(v___x_6538_, 1, v___x_6537_);
v___x_6539_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__10));
v___x_6540_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_6497_);
v___x_6541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6541_, 0, v___x_6539_);
lean_ctor_set(v___x_6541_, 1, v___x_6540_);
v___x_6542_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__11));
v___x_6543_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__4(v_fetch_6498_);
lean_dec(v_fetch_6498_);
v___x_6544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6544_, 0, v___x_6542_);
lean_ctor_set(v___x_6544_, 1, v___x_6543_);
v___x_6545_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__12));
v___x_6546_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__5(v_routes_6499_);
lean_dec(v_routes_6499_);
v___x_6547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6547_, 0, v___x_6545_);
lean_ctor_set(v___x_6547_, 1, v___x_6546_);
v___x_6548_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__13));
v___x_6549_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6(v_websocket_6500_);
v___x_6550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6550_, 0, v___x_6548_);
lean_ctor_set(v___x_6550_, 1, v___x_6549_);
v___x_6551_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__14));
v___x_6552_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_unix_6501_);
v___x_6553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6553_, 0, v___x_6551_);
lean_ctor_set(v___x_6553_, 1, v___x_6552_);
v___x_6554_ = lean_unsigned_to_nat(17u);
v___x_6555_ = lean_mk_empty_array_with_capacity(v___x_6554_);
v___x_6556_ = lean_array_push(v___x_6555_, v___x_6505_);
v___x_6557_ = lean_array_push(v___x_6556_, v___x_6508_);
v___x_6558_ = lean_array_push(v___x_6557_, v___x_6511_);
v___x_6559_ = lean_array_push(v___x_6558_, v___x_6514_);
v___x_6560_ = lean_array_push(v___x_6559_, v___x_6517_);
v___x_6561_ = lean_array_push(v___x_6560_, v___x_6520_);
v___x_6562_ = lean_array_push(v___x_6561_, v___x_6523_);
v___x_6563_ = lean_array_push(v___x_6562_, v___x_6526_);
v___x_6564_ = lean_array_push(v___x_6563_, v___x_6529_);
v___x_6565_ = lean_array_push(v___x_6564_, v___x_6532_);
v___x_6566_ = lean_array_push(v___x_6565_, v___x_6535_);
v___x_6567_ = lean_array_push(v___x_6566_, v___x_6538_);
v___x_6568_ = lean_array_push(v___x_6567_, v___x_6541_);
v___x_6569_ = lean_array_push(v___x_6568_, v___x_6544_);
v___x_6570_ = lean_array_push(v___x_6569_, v___x_6547_);
v___x_6571_ = lean_array_push(v___x_6570_, v___x_6550_);
v___x_6572_ = lean_array_push(v___x_6571_, v___x_6553_);
v___x_6573_ = l_Lasm_JS_Web_Support_fields(v___x_6572_);
lean_dec_ref(v___x_6572_);
v___x_6574_ = lean_unsigned_to_nat(1u);
v___x_6575_ = lean_mk_empty_array_with_capacity(v___x_6574_);
v___x_6576_ = lean_array_push(v___x_6575_, v___x_6573_);
v___x_6577_ = l_Lasm_JS_Web_Support_args(v___x_6576_);
v___x_6578_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_6482_, v___x_6502_, v___x_6577_);
if (lean_obj_tag(v___x_6578_) == 0)
{
lean_object* v_a_6579_; lean_object* v___x_6581_; uint8_t v_isShared_6582_; uint8_t v_isSharedCheck_6586_; 
v_a_6579_ = lean_ctor_get(v___x_6578_, 0);
v_isSharedCheck_6586_ = !lean_is_exclusive(v___x_6578_);
if (v_isSharedCheck_6586_ == 0)
{
v___x_6581_ = v___x_6578_;
v_isShared_6582_ = v_isSharedCheck_6586_;
goto v_resetjp_6580_;
}
else
{
lean_inc(v_a_6579_);
lean_dec(v___x_6578_);
v___x_6581_ = lean_box(0);
v_isShared_6582_ = v_isSharedCheck_6586_;
goto v_resetjp_6580_;
}
v_resetjp_6580_:
{
lean_object* v___x_6584_; 
if (v_isShared_6582_ == 0)
{
v___x_6584_ = v___x_6581_;
goto v_reusejp_6583_;
}
else
{
lean_object* v_reuseFailAlloc_6585_; 
v_reuseFailAlloc_6585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6585_, 0, v_a_6579_);
v___x_6584_ = v_reuseFailAlloc_6585_;
goto v_reusejp_6583_;
}
v_reusejp_6583_:
{
return v___x_6584_;
}
}
}
else
{
lean_object* v_a_6587_; lean_object* v___x_6589_; uint8_t v_isShared_6590_; uint8_t v_isSharedCheck_6594_; 
v_a_6587_ = lean_ctor_get(v___x_6578_, 0);
v_isSharedCheck_6594_ = !lean_is_exclusive(v___x_6578_);
if (v_isSharedCheck_6594_ == 0)
{
v___x_6589_ = v___x_6578_;
v_isShared_6590_ = v_isSharedCheck_6594_;
goto v_resetjp_6588_;
}
else
{
lean_inc(v_a_6587_);
lean_dec(v___x_6578_);
v___x_6589_ = lean_box(0);
v_isShared_6590_ = v_isSharedCheck_6594_;
goto v_resetjp_6588_;
}
v_resetjp_6588_:
{
lean_object* v___x_6592_; 
if (v_isShared_6590_ == 0)
{
v___x_6592_ = v___x_6589_;
goto v_reusejp_6591_;
}
else
{
lean_object* v_reuseFailAlloc_6593_; 
v_reuseFailAlloc_6593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6593_, 0, v_a_6587_);
v___x_6592_ = v_reuseFailAlloc_6593_;
goto v_reusejp_6591_;
}
v_reusejp_6591_:
{
return v___x_6592_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload___boxed(lean_object* v_self_6595_, lean_object* v_options_6596_, lean_object* v_a_6597_){
_start:
{
lean_object* v_res_6598_; 
v_res_6598_ = l_Lasm_JS_Bun_Server_reload(v_self_6595_, v_options_6596_);
return v_res_6598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0(lean_object* v_x_6599_){
_start:
{
if (lean_obj_tag(v_x_6599_) == 0)
{
lean_object* v_a_6601_; lean_object* v___x_6603_; uint8_t v_isShared_6604_; uint8_t v_isSharedCheck_6609_; 
v_a_6601_ = lean_ctor_get(v_x_6599_, 0);
v_isSharedCheck_6609_ = !lean_is_exclusive(v_x_6599_);
if (v_isSharedCheck_6609_ == 0)
{
v___x_6603_ = v_x_6599_;
v_isShared_6604_ = v_isSharedCheck_6609_;
goto v_resetjp_6602_;
}
else
{
lean_inc(v_a_6601_);
lean_dec(v_x_6599_);
v___x_6603_ = lean_box(0);
v_isShared_6604_ = v_isSharedCheck_6609_;
goto v_resetjp_6602_;
}
v_resetjp_6602_:
{
lean_object* v___x_6606_; 
if (v_isShared_6604_ == 0)
{
v___x_6606_ = v___x_6603_;
goto v_reusejp_6605_;
}
else
{
lean_object* v_reuseFailAlloc_6608_; 
v_reuseFailAlloc_6608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6608_, 0, v_a_6601_);
v___x_6606_ = v_reuseFailAlloc_6608_;
goto v_reusejp_6605_;
}
v_reusejp_6605_:
{
lean_object* v___x_6607_; 
v___x_6607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6607_, 0, v___x_6606_);
return v___x_6607_;
}
}
}
else
{
lean_object* v_a_6610_; lean_object* v___x_6612_; uint8_t v_isShared_6613_; uint8_t v_isSharedCheck_6618_; 
v_a_6610_ = lean_ctor_get(v_x_6599_, 0);
v_isSharedCheck_6618_ = !lean_is_exclusive(v_x_6599_);
if (v_isSharedCheck_6618_ == 0)
{
v___x_6612_ = v_x_6599_;
v_isShared_6613_ = v_isSharedCheck_6618_;
goto v_resetjp_6611_;
}
else
{
lean_inc(v_a_6610_);
lean_dec(v_x_6599_);
v___x_6612_ = lean_box(0);
v_isShared_6613_ = v_isSharedCheck_6618_;
goto v_resetjp_6611_;
}
v_resetjp_6611_:
{
lean_object* v___x_6615_; 
if (v_isShared_6613_ == 0)
{
v___x_6615_ = v___x_6612_;
goto v_reusejp_6614_;
}
else
{
lean_object* v_reuseFailAlloc_6617_; 
v_reuseFailAlloc_6617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6617_, 0, v_a_6610_);
v___x_6615_ = v_reuseFailAlloc_6617_;
goto v_reusejp_6614_;
}
v_reusejp_6614_:
{
lean_object* v___x_6616_; 
v___x_6616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6616_, 0, v___x_6615_);
return v___x_6616_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0___boxed(lean_object* v_x_6619_, lean_object* v___y_6620_){
_start:
{
lean_object* v_res_6621_; 
v_res_6621_ = l_Lasm_JS_Bun_Server_fetch___lam__0(v_x_6619_);
return v_res_6621_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch(lean_object* v_self_6623_, lean_object* v_request_6624_){
_start:
{
lean_object* v___f_6626_; lean_object* v___x_6627_; lean_object* v___y_6629_; 
v___f_6626_ = ((lean_object*)(l_Lasm_JS_Bun_Server_fetch___closed__0));
v___x_6627_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__11));
if (lean_obj_tag(v_request_6624_) == 0)
{
lean_object* v_value_6638_; lean_object* v___x_6639_; lean_object* v___x_6640_; 
v_value_6638_ = lean_ctor_get(v_request_6624_, 0);
lean_inc(v_value_6638_);
lean_dec_ref_known(v_request_6624_, 1);
v___x_6639_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_6640_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6640_, 0, v_value_6638_);
lean_ctor_set(v___x_6640_, 1, v___x_6639_);
v___y_6629_ = v___x_6640_;
goto v___jp_6628_;
}
else
{
lean_object* v_value_6641_; lean_object* v___x_6643_; uint8_t v_isShared_6644_; uint8_t v_isSharedCheck_6648_; 
v_value_6641_ = lean_ctor_get(v_request_6624_, 0);
v_isSharedCheck_6648_ = !lean_is_exclusive(v_request_6624_);
if (v_isSharedCheck_6648_ == 0)
{
v___x_6643_ = v_request_6624_;
v_isShared_6644_ = v_isSharedCheck_6648_;
goto v_resetjp_6642_;
}
else
{
lean_inc(v_value_6641_);
lean_dec(v_request_6624_);
v___x_6643_ = lean_box(0);
v_isShared_6644_ = v_isSharedCheck_6648_;
goto v_resetjp_6642_;
}
v_resetjp_6642_:
{
lean_object* v___x_6646_; 
if (v_isShared_6644_ == 0)
{
lean_ctor_set_tag(v___x_6643_, 4);
v___x_6646_ = v___x_6643_;
goto v_reusejp_6645_;
}
else
{
lean_object* v_reuseFailAlloc_6647_; 
v_reuseFailAlloc_6647_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6647_, 0, v_value_6641_);
v___x_6646_ = v_reuseFailAlloc_6647_;
goto v_reusejp_6645_;
}
v_reusejp_6645_:
{
v___y_6629_ = v___x_6646_;
goto v___jp_6628_;
}
}
}
v___jp_6628_:
{
lean_object* v___x_6630_; lean_object* v___x_6631_; lean_object* v___x_6632_; lean_object* v___x_6633_; lean_object* v___x_6634_; uint8_t v___x_6635_; lean_object* v___x_6636_; lean_object* v___x_6637_; 
v___x_6630_ = lean_unsigned_to_nat(1u);
v___x_6631_ = lean_mk_empty_array_with_capacity(v___x_6630_);
v___x_6632_ = lean_array_push(v___x_6631_, v___y_6629_);
v___x_6633_ = l_Lasm_JS_Web_Support_args(v___x_6632_);
v___x_6634_ = lean_unsigned_to_nat(0u);
v___x_6635_ = 0;
v___x_6636_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_6623_, v___x_6627_, v___x_6633_);
v___x_6637_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_6634_, v___x_6635_, v___x_6636_, v___f_6626_);
return v___x_6637_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___boxed(lean_object* v_self_6649_, lean_object* v_request_6650_, lean_object* v_a_6651_){
_start:
{
lean_object* v_res_6652_; 
v_res_6652_ = l_Lasm_JS_Bun_Server_fetch(v_self_6649_, v_request_6650_);
return v_res_6652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_upgrade_spec__0(lean_object* v_x_6653_){
_start:
{
if (lean_obj_tag(v_x_6653_) == 0)
{
lean_object* v___x_6654_; 
v___x_6654_ = lean_box(0);
return v___x_6654_;
}
else
{
lean_object* v_val_6655_; lean_object* v_headers_6656_; lean_object* v_data_6657_; lean_object* v___x_6659_; uint8_t v_isShared_6660_; uint8_t v_isSharedCheck_6673_; 
v_val_6655_ = lean_ctor_get(v_x_6653_, 0);
lean_inc(v_val_6655_);
lean_dec_ref_known(v_x_6653_, 1);
v_headers_6656_ = lean_ctor_get(v_val_6655_, 0);
v_data_6657_ = lean_ctor_get(v_val_6655_, 1);
v_isSharedCheck_6673_ = !lean_is_exclusive(v_val_6655_);
if (v_isSharedCheck_6673_ == 0)
{
v___x_6659_ = v_val_6655_;
v_isShared_6660_ = v_isSharedCheck_6673_;
goto v_resetjp_6658_;
}
else
{
lean_inc(v_data_6657_);
lean_inc(v_headers_6656_);
lean_dec(v_val_6655_);
v___x_6659_ = lean_box(0);
v_isShared_6660_ = v_isSharedCheck_6673_;
goto v_resetjp_6658_;
}
v_resetjp_6658_:
{
lean_object* v___x_6661_; lean_object* v___x_6662_; lean_object* v___x_6664_; 
v___x_6661_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerUpgradeOptions___lam__0___closed__0));
v___x_6662_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Headers_new_spec__0(v_headers_6656_);
if (v_isShared_6660_ == 0)
{
lean_ctor_set(v___x_6659_, 1, v___x_6662_);
lean_ctor_set(v___x_6659_, 0, v___x_6661_);
v___x_6664_ = v___x_6659_;
goto v_reusejp_6663_;
}
else
{
lean_object* v_reuseFailAlloc_6672_; 
v_reuseFailAlloc_6672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6672_, 0, v___x_6661_);
lean_ctor_set(v_reuseFailAlloc_6672_, 1, v___x_6662_);
v___x_6664_ = v_reuseFailAlloc_6672_;
goto v_reusejp_6663_;
}
v_reusejp_6663_:
{
lean_object* v___x_6665_; lean_object* v___x_6666_; lean_object* v___x_6667_; lean_object* v___x_6668_; lean_object* v___x_6669_; lean_object* v___x_6670_; lean_object* v___x_6671_; 
v___x_6665_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__0));
v___x_6666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6666_, 0, v___x_6665_);
lean_ctor_set(v___x_6666_, 1, v_data_6657_);
v___x_6667_ = lean_unsigned_to_nat(2u);
v___x_6668_ = lean_mk_empty_array_with_capacity(v___x_6667_);
v___x_6669_ = lean_array_push(v___x_6668_, v___x_6664_);
v___x_6670_ = lean_array_push(v___x_6669_, v___x_6666_);
v___x_6671_ = l_Lasm_JS_Web_Support_fields(v___x_6670_);
lean_dec_ref(v___x_6670_);
return v___x_6671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_upgrade(lean_object* v_self_6675_, lean_object* v_request_6676_, lean_object* v_options_6677_){
_start:
{
lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v___x_6681_; lean_object* v___x_6682_; lean_object* v___x_6683_; lean_object* v___x_6684_; lean_object* v___x_6685_; lean_object* v___x_6686_; lean_object* v___x_6687_; lean_object* v___x_6688_; 
v___x_6679_ = ((lean_object*)(l_Lasm_JS_Bun_Server_upgrade___closed__0));
v___x_6680_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_6681_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6681_, 0, v_request_6676_);
lean_ctor_set(v___x_6681_, 1, v___x_6680_);
v___x_6682_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_upgrade_spec__0(v_options_6677_);
v___x_6683_ = lean_unsigned_to_nat(2u);
v___x_6684_ = lean_mk_empty_array_with_capacity(v___x_6683_);
v___x_6685_ = lean_array_push(v___x_6684_, v___x_6681_);
v___x_6686_ = lean_array_push(v___x_6685_, v___x_6682_);
v___x_6687_ = l_Lasm_JS_Web_Support_args(v___x_6686_);
v___x_6688_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0(v_self_6675_, v___x_6679_, v___x_6687_);
return v___x_6688_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_upgrade___boxed(lean_object* v_self_6689_, lean_object* v_request_6690_, lean_object* v_options_6691_, lean_object* v_a_6692_){
_start:
{
lean_object* v_res_6693_; 
v_res_6693_ = l_Lasm_JS_Bun_Server_upgrade(v_self_6689_, v_request_6690_, v_options_6691_);
return v_res_6693_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_publish(lean_object* v_self_6694_, lean_object* v_topic_6695_, lean_object* v_data_6696_, lean_object* v_compress_6697_){
_start:
{
lean_object* v___x_6699_; lean_object* v___x_6700_; lean_object* v___y_6702_; 
v___x_6699_ = ((lean_object*)(l_Lasm_JS_Bun_ServerWebSocket_publish___closed__0));
v___x_6700_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6700_, 0, v_topic_6695_);
switch(lean_obj_tag(v_data_6696_))
{
case 0:
{
lean_object* v_value_6711_; lean_object* v___x_6713_; uint8_t v_isShared_6714_; uint8_t v_isSharedCheck_6718_; 
v_value_6711_ = lean_ctor_get(v_data_6696_, 0);
v_isSharedCheck_6718_ = !lean_is_exclusive(v_data_6696_);
if (v_isSharedCheck_6718_ == 0)
{
v___x_6713_ = v_data_6696_;
v_isShared_6714_ = v_isSharedCheck_6718_;
goto v_resetjp_6712_;
}
else
{
lean_inc(v_value_6711_);
lean_dec(v_data_6696_);
v___x_6713_ = lean_box(0);
v_isShared_6714_ = v_isSharedCheck_6718_;
goto v_resetjp_6712_;
}
v_resetjp_6712_:
{
lean_object* v___x_6716_; 
if (v_isShared_6714_ == 0)
{
lean_ctor_set_tag(v___x_6713_, 4);
v___x_6716_ = v___x_6713_;
goto v_reusejp_6715_;
}
else
{
lean_object* v_reuseFailAlloc_6717_; 
v_reuseFailAlloc_6717_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6717_, 0, v_value_6711_);
v___x_6716_ = v_reuseFailAlloc_6717_;
goto v_reusejp_6715_;
}
v_reusejp_6715_:
{
v___y_6702_ = v___x_6716_;
goto v___jp_6701_;
}
}
}
case 3:
{
lean_object* v_value_6719_; lean_object* v___x_6720_; lean_object* v___x_6721_; 
v_value_6719_ = lean_ctor_get(v_data_6696_, 0);
lean_inc(v_value_6719_);
lean_dec_ref_known(v_data_6696_, 1);
v___x_6720_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_6721_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6721_, 0, v_value_6719_);
lean_ctor_set(v___x_6721_, 1, v___x_6720_);
v___y_6702_ = v___x_6721_;
goto v___jp_6701_;
}
default: 
{
lean_object* v_value_6722_; lean_object* v___x_6724_; uint8_t v_isShared_6725_; uint8_t v_isSharedCheck_6729_; 
v_value_6722_ = lean_ctor_get(v_data_6696_, 0);
v_isSharedCheck_6729_ = !lean_is_exclusive(v_data_6696_);
if (v_isSharedCheck_6729_ == 0)
{
v___x_6724_ = v_data_6696_;
v_isShared_6725_ = v_isSharedCheck_6729_;
goto v_resetjp_6723_;
}
else
{
lean_inc(v_value_6722_);
lean_dec(v_data_6696_);
v___x_6724_ = lean_box(0);
v_isShared_6725_ = v_isSharedCheck_6729_;
goto v_resetjp_6723_;
}
v_resetjp_6723_:
{
lean_object* v___x_6727_; 
if (v_isShared_6725_ == 0)
{
lean_ctor_set_tag(v___x_6724_, 6);
v___x_6727_ = v___x_6724_;
goto v_reusejp_6726_;
}
else
{
lean_object* v_reuseFailAlloc_6728_; 
v_reuseFailAlloc_6728_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6728_, 0, v_value_6722_);
v___x_6727_ = v_reuseFailAlloc_6728_;
goto v_reusejp_6726_;
}
v_reusejp_6726_:
{
v___y_6702_ = v___x_6727_;
goto v___jp_6701_;
}
}
}
}
v___jp_6701_:
{
lean_object* v___x_6703_; lean_object* v___x_6704_; lean_object* v___x_6705_; lean_object* v___x_6706_; lean_object* v___x_6707_; lean_object* v___x_6708_; lean_object* v___x_6709_; lean_object* v___x_6710_; 
v___x_6703_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_compress_6697_);
v___x_6704_ = lean_unsigned_to_nat(3u);
v___x_6705_ = lean_mk_empty_array_with_capacity(v___x_6704_);
v___x_6706_ = lean_array_push(v___x_6705_, v___x_6700_);
v___x_6707_ = lean_array_push(v___x_6706_, v___y_6702_);
v___x_6708_ = lean_array_push(v___x_6707_, v___x_6703_);
v___x_6709_ = l_Lasm_JS_Web_Support_args(v___x_6708_);
v___x_6710_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_6694_, v___x_6699_, v___x_6709_);
return v___x_6710_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_publish___boxed(lean_object* v_self_6730_, lean_object* v_topic_6731_, lean_object* v_data_6732_, lean_object* v_compress_6733_, lean_object* v_a_6734_){
_start:
{
lean_object* v_res_6735_; 
v_res_6735_ = l_Lasm_JS_Bun_Server_publish(v_self_6730_, v_topic_6731_, v_data_6732_, v_compress_6733_);
lean_dec(v_compress_6733_);
return v_res_6735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_subscriberCount(lean_object* v_self_6737_, lean_object* v_topic_6738_){
_start:
{
lean_object* v___x_6740_; lean_object* v___x_6741_; lean_object* v___x_6742_; lean_object* v___x_6743_; lean_object* v___x_6744_; lean_object* v___x_6745_; lean_object* v___x_6746_; 
v___x_6740_ = ((lean_object*)(l_Lasm_JS_Bun_Server_subscriberCount___closed__0));
v___x_6741_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6741_, 0, v_topic_6738_);
v___x_6742_ = lean_unsigned_to_nat(1u);
v___x_6743_ = lean_mk_empty_array_with_capacity(v___x_6742_);
v___x_6744_ = lean_array_push(v___x_6743_, v___x_6741_);
v___x_6745_ = l_Lasm_JS_Web_Support_args(v___x_6744_);
v___x_6746_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_SocketUnknown_write_spec__0(v_self_6737_, v___x_6740_, v___x_6745_);
return v___x_6746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_subscriberCount___boxed(lean_object* v_self_6747_, lean_object* v_topic_6748_, lean_object* v_a_6749_){
_start:
{
lean_object* v_res_6750_; 
v_res_6750_ = l_Lasm_JS_Bun_Server_subscriberCount(v_self_6747_, v_topic_6748_);
return v_res_6750_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(uint8_t v_await_6751_, uint64_t v_extra_6752_){
_start:
{
uint64_t v___x_6753_; uint64_t v___y_6755_; 
v___x_6753_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_ServerWebSocket_binaryType_spec__0___closed__0);
if (v_await_6751_ == 0)
{
uint64_t v___x_6758_; 
v___x_6758_ = 0ULL;
v___y_6755_ = v___x_6758_;
goto v___jp_6754_;
}
else
{
uint64_t v___x_6759_; 
v___x_6759_ = 2ULL;
v___y_6755_ = v___x_6759_;
goto v___jp_6754_;
}
v___jp_6754_:
{
uint64_t v___x_6756_; uint64_t v___x_6757_; 
v___x_6756_ = lean_uint64_lor(v___x_6753_, v___y_6755_);
v___x_6757_ = lean_uint64_lor(v___x_6756_, v_extra_6752_);
return v___x_6757_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0___boxed(lean_object* v_await_6760_, lean_object* v_extra_6761_){
_start:
{
uint8_t v_await_boxed_6762_; uint64_t v_extra_boxed_6763_; uint64_t v_res_6764_; lean_object* v_r_6765_; 
v_await_boxed_6762_ = lean_unbox(v_await_6760_);
v_extra_boxed_6763_ = lean_unbox_uint64(v_extra_6761_);
lean_dec_ref(v_extra_6761_);
v_res_6764_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v_await_boxed_6762_, v_extra_boxed_6763_);
v_r_6765_ = lean_box_uint64(v_res_6764_);
return v_r_6765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(lean_object* v_context_6769_, lean_object* v_d_6770_){
_start:
{
lean_object* v___y_6776_; lean_object* v___y_6777_; lean_object* v___y_6782_; lean_object* v_received_6783_; lean_object* v___y_6802_; lean_object* v_a_6805_; 
switch(lean_obj_tag(v_d_6770_))
{
case 1:
{
goto v___jp_6772_;
}
case 0:
{
goto v___jp_6772_;
}
default: 
{
lean_object* v___x_6829_; lean_object* v___x_6830_; 
v___x_6829_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__1));
lean_inc(v_d_6770_);
v___x_6830_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_MarkdownRenderCallbacksLink_ofFn_spec__0_spec__0_spec__1(v_d_6770_, v___x_6829_);
if (lean_obj_tag(v___x_6830_) == 0)
{
lean_object* v_a_6831_; 
v_a_6831_ = lean_ctor_get(v___x_6830_, 0);
lean_inc(v_a_6831_);
lean_dec_ref_known(v___x_6830_, 1);
v_a_6805_ = v_a_6831_;
goto v___jp_6804_;
}
else
{
lean_object* v_a_6832_; lean_object* v___x_6833_; lean_object* v___x_6834_; 
v_a_6832_ = lean_ctor_get(v___x_6830_, 0);
lean_inc(v_a_6832_);
lean_dec_ref_known(v___x_6830_, 1);
v___x_6833_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
lean_inc(v_d_6770_);
v___x_6834_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Bun_S3File_stat_spec__0_spec__1_spec__2_spec__3(v_d_6770_, v___x_6833_);
if (lean_obj_tag(v___x_6834_) == 0)
{
lean_object* v_a_6835_; 
lean_dec(v_a_6832_);
v_a_6835_ = lean_ctor_get(v___x_6834_, 0);
lean_inc(v_a_6835_);
lean_dec_ref_known(v___x_6834_, 1);
v_a_6805_ = v_a_6835_;
goto v___jp_6804_;
}
else
{
lean_object* v_a_6836_; lean_object* v___x_6838_; uint8_t v_isShared_6839_; uint8_t v_isSharedCheck_6856_; 
v_a_6836_ = lean_ctor_get(v___x_6834_, 0);
v_isSharedCheck_6856_ = !lean_is_exclusive(v___x_6834_);
if (v_isSharedCheck_6856_ == 0)
{
v___x_6838_ = v___x_6834_;
v_isShared_6839_ = v_isSharedCheck_6856_;
goto v_resetjp_6837_;
}
else
{
lean_inc(v_a_6836_);
lean_dec(v___x_6834_);
v___x_6838_ = lean_box(0);
v_isShared_6839_ = v_isSharedCheck_6856_;
goto v_resetjp_6837_;
}
v_resetjp_6837_:
{
lean_object* v___x_6840_; lean_object* v___x_6841_; 
v___x_6840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__2));
lean_inc(v_d_6770_);
v___x_6841_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_UdpBaseUDPSocket_address_spec__0_spec__0_spec__1_spec__2(v_d_6770_, v___x_6840_);
if (lean_obj_tag(v___x_6841_) == 0)
{
lean_object* v_a_6842_; 
lean_del_object(v___x_6838_);
lean_dec(v_a_6836_);
lean_dec(v_a_6832_);
v_a_6842_ = lean_ctor_get(v___x_6841_, 0);
lean_inc(v_a_6842_);
lean_dec_ref_known(v___x_6841_, 1);
v_a_6805_ = v_a_6842_;
goto v___jp_6804_;
}
else
{
lean_object* v_a_6843_; lean_object* v___x_6845_; uint8_t v_isShared_6846_; uint8_t v_isSharedCheck_6855_; 
lean_dec(v_d_6770_);
v_a_6843_ = lean_ctor_get(v___x_6841_, 0);
v_isSharedCheck_6855_ = !lean_is_exclusive(v___x_6841_);
if (v_isSharedCheck_6855_ == 0)
{
v___x_6845_ = v___x_6841_;
v_isShared_6846_ = v_isSharedCheck_6855_;
goto v_resetjp_6844_;
}
else
{
lean_inc(v_a_6843_);
lean_dec(v___x_6841_);
v___x_6845_ = lean_box(0);
v_isShared_6846_ = v_isSharedCheck_6855_;
goto v_resetjp_6844_;
}
v_resetjp_6844_:
{
lean_object* v___x_6847_; uint8_t v___x_6848_; lean_object* v___x_6850_; 
v___x_6847_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_6847_, 0, v_a_6832_);
lean_ctor_set(v___x_6847_, 1, v_a_6836_);
v___x_6848_ = lean_unbox(v_a_6843_);
lean_dec(v_a_6843_);
lean_ctor_set_uint8(v___x_6847_, sizeof(void*)*2, v___x_6848_);
if (v_isShared_6846_ == 0)
{
lean_ctor_set(v___x_6845_, 0, v___x_6847_);
v___x_6850_ = v___x_6845_;
goto v_reusejp_6849_;
}
else
{
lean_object* v_reuseFailAlloc_6854_; 
v_reuseFailAlloc_6854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6854_, 0, v___x_6847_);
v___x_6850_ = v_reuseFailAlloc_6854_;
goto v_reusejp_6849_;
}
v_reusejp_6849_:
{
lean_object* v___x_6852_; 
if (v_isShared_6839_ == 0)
{
lean_ctor_set_tag(v___x_6838_, 0);
lean_ctor_set(v___x_6838_, 0, v___x_6850_);
v___x_6852_ = v___x_6838_;
goto v_reusejp_6851_;
}
else
{
lean_object* v_reuseFailAlloc_6853_; 
v_reuseFailAlloc_6853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6853_, 0, v___x_6850_);
v___x_6852_ = v_reuseFailAlloc_6853_;
goto v_reusejp_6851_;
}
v_reusejp_6851_:
{
return v___x_6852_;
}
}
}
}
}
}
}
}
}
v___jp_6772_:
{
lean_object* v___x_6773_; lean_object* v___x_6774_; 
v___x_6773_ = lean_box(0);
v___x_6774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6774_, 0, v___x_6773_);
return v___x_6774_;
}
v___jp_6775_:
{
lean_object* v___x_6778_; lean_object* v___x_6779_; lean_object* v___x_6780_; 
v___x_6778_ = lean_string_append(v___y_6776_, v___y_6777_);
lean_dec_ref(v___y_6777_);
v___x_6779_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_6779_, 0, v___x_6778_);
v___x_6780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6780_, 0, v___x_6779_);
return v___x_6780_;
}
v___jp_6781_:
{
lean_object* v___x_6784_; lean_object* v___x_6785_; lean_object* v___x_6786_; lean_object* v___x_6787_; lean_object* v___x_6788_; lean_object* v___x_6789_; lean_object* v___x_6790_; lean_object* v___x_6791_; lean_object* v___x_6792_; lean_object* v___x_6793_; lean_object* v___x_6794_; uint8_t v___x_6795_; 
v___x_6784_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__0));
v___x_6785_ = lean_string_append(v___x_6784_, v_context_6769_);
v___x_6786_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__1));
v___x_6787_ = lean_string_append(v___x_6785_, v___x_6786_);
v___x_6788_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0));
v___x_6789_ = lean_string_append(v___x_6787_, v___x_6788_);
v___x_6790_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__2));
v___x_6791_ = lean_string_append(v___x_6789_, v___x_6790_);
v___x_6792_ = lean_string_append(v___x_6791_, v_received_6783_);
lean_dec_ref(v_received_6783_);
v___x_6793_ = lean_string_utf8_byte_size(v___y_6782_);
v___x_6794_ = lean_unsigned_to_nat(0u);
v___x_6795_ = lean_nat_dec_eq(v___x_6793_, v___x_6794_);
if (v___x_6795_ == 0)
{
lean_object* v___x_6796_; lean_object* v___x_6797_; lean_object* v___x_6798_; lean_object* v___x_6799_; 
v___x_6796_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__1));
v___x_6797_ = lean_string_append(v___x_6796_, v___y_6782_);
lean_dec_ref(v___y_6782_);
v___x_6798_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___closed__2));
v___x_6799_ = lean_string_append(v___x_6797_, v___x_6798_);
v___y_6776_ = v___x_6792_;
v___y_6777_ = v___x_6799_;
goto v___jp_6775_;
}
else
{
lean_object* v___x_6800_; 
lean_dec_ref(v___y_6782_);
v___x_6800_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___y_6776_ = v___x_6792_;
v___y_6777_ = v___x_6800_;
goto v___jp_6775_;
}
}
v___jp_6801_:
{
lean_object* v___x_6803_; 
v___x_6803_ = l_Lasm_JS_Data_describe(v_d_6770_);
v___y_6782_ = v___y_6802_;
v_received_6783_ = v___x_6803_;
goto v___jp_6781_;
}
v___jp_6804_:
{
if (lean_obj_tag(v_d_6770_) == 9)
{
lean_object* v_value_6806_; lean_object* v_description_6807_; lean_object* v___x_6808_; uint8_t v___x_6809_; 
v_value_6806_ = lean_ctor_get(v_d_6770_, 0);
v_description_6807_ = lean_ctor_get(v_d_6770_, 1);
v___x_6808_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_6809_ = lean_string_dec_eq(v_description_6807_, v___x_6808_);
if (v___x_6809_ == 0)
{
v___y_6802_ = v_a_6805_;
goto v___jp_6801_;
}
else
{
lean_object* v___x_6811_; uint8_t v_isShared_6812_; uint8_t v_isSharedCheck_6826_; 
lean_inc(v_value_6806_);
v_isSharedCheck_6826_ = !lean_is_exclusive(v_d_6770_);
if (v_isSharedCheck_6826_ == 0)
{
lean_object* v_unused_6827_; lean_object* v_unused_6828_; 
v_unused_6827_ = lean_ctor_get(v_d_6770_, 1);
lean_dec(v_unused_6827_);
v_unused_6828_ = lean_ctor_get(v_d_6770_, 0);
lean_dec(v_unused_6828_);
v___x_6811_ = v_d_6770_;
v_isShared_6812_ = v_isSharedCheck_6826_;
goto v_resetjp_6810_;
}
else
{
lean_dec(v_d_6770_);
v___x_6811_ = lean_box(0);
v_isShared_6812_ = v_isSharedCheck_6826_;
goto v_resetjp_6810_;
}
v_resetjp_6810_:
{
uint32_t v___x_6813_; uint64_t v___x_6814_; lean_object* v___x_6816_; 
v___x_6813_ = 206;
v___x_6814_ = 0ULL;
lean_inc(v_value_6806_);
if (v_isShared_6812_ == 0)
{
lean_ctor_set(v___x_6811_, 1, v___x_6808_);
v___x_6816_ = v___x_6811_;
goto v_reusejp_6815_;
}
else
{
lean_object* v_reuseFailAlloc_6825_; 
v_reuseFailAlloc_6825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6825_, 0, v_value_6806_);
lean_ctor_set(v_reuseFailAlloc_6825_, 1, v___x_6808_);
v___x_6816_ = v_reuseFailAlloc_6825_;
goto v_reusejp_6815_;
}
v_reusejp_6815_:
{
uint32_t v___x_6817_; lean_object* v___x_6818_; 
v___x_6817_ = lasm_js_value_handle(v_value_6806_);
lean_dec(v_value_6806_);
v___x_6818_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_6813_, v___x_6814_, v___x_6816_, v___x_6817_);
lean_dec_ref(v___x_6816_);
if (lean_obj_tag(v___x_6818_) == 0)
{
lean_object* v_a_6819_; uint8_t v___x_6820_; 
v_a_6819_ = lean_ctor_get(v___x_6818_, 0);
lean_inc(v_a_6819_);
lean_dec_ref_known(v___x_6818_, 1);
v___x_6820_ = lean_string_validate_utf8(v_a_6819_);
if (v___x_6820_ == 0)
{
lean_object* v___x_6821_; lean_object* v___x_6822_; 
lean_dec(v_a_6819_);
v___x_6821_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__9);
v___x_6822_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_6821_);
v___y_6782_ = v_a_6805_;
v_received_6783_ = v___x_6822_;
goto v___jp_6781_;
}
else
{
lean_object* v___x_6823_; 
v___x_6823_ = lean_string_from_utf8_unchecked(v_a_6819_);
v___y_6782_ = v_a_6805_;
v_received_6783_ = v___x_6823_;
goto v___jp_6781_;
}
}
else
{
lean_object* v___x_6824_; 
lean_dec_ref_known(v___x_6818_, 1);
v___x_6824_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServerWebSocketCorkCallback_ofFn_spec__0_spec__0___closed__10));
v___y_6782_ = v_a_6805_;
v_received_6783_ = v___x_6824_;
goto v___jp_6781_;
}
}
}
}
}
else
{
v___y_6802_ = v_a_6805_;
goto v___jp_6801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___boxed(lean_object* v_context_6857_, lean_object* v_d_6858_, lean_object* v_a_6859_){
_start:
{
lean_object* v_res_6860_; 
v_res_6860_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_6857_, v_d_6858_);
lean_dec_ref(v_context_6857_);
return v_res_6860_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(lean_object* v_context_6861_, lean_object* v_bytes_6862_){
_start:
{
lean_object* v___x_6864_; 
v___x_6864_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_6862_);
if (lean_obj_tag(v___x_6864_) == 0)
{
lean_object* v_a_6865_; lean_object* v___x_6866_; 
v_a_6865_ = lean_ctor_get(v___x_6864_, 0);
lean_inc(v_a_6865_);
lean_dec_ref_known(v___x_6864_, 1);
v___x_6866_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_6861_, v_a_6865_);
return v___x_6866_;
}
else
{
lean_object* v_a_6867_; lean_object* v___x_6869_; uint8_t v_isShared_6870_; uint8_t v_isSharedCheck_6874_; 
v_a_6867_ = lean_ctor_get(v___x_6864_, 0);
v_isSharedCheck_6874_ = !lean_is_exclusive(v___x_6864_);
if (v_isSharedCheck_6874_ == 0)
{
v___x_6869_ = v___x_6864_;
v_isShared_6870_ = v_isSharedCheck_6874_;
goto v_resetjp_6868_;
}
else
{
lean_inc(v_a_6867_);
lean_dec(v___x_6864_);
v___x_6869_ = lean_box(0);
v_isShared_6870_ = v_isSharedCheck_6874_;
goto v_resetjp_6868_;
}
v_resetjp_6868_:
{
lean_object* v___x_6872_; 
if (v_isShared_6870_ == 0)
{
v___x_6872_ = v___x_6869_;
goto v_reusejp_6871_;
}
else
{
lean_object* v_reuseFailAlloc_6873_; 
v_reuseFailAlloc_6873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6873_, 0, v_a_6867_);
v___x_6872_ = v_reuseFailAlloc_6873_;
goto v_reusejp_6871_;
}
v_reusejp_6871_:
{
return v___x_6872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1___boxed(lean_object* v_context_6875_, lean_object* v_bytes_6876_, lean_object* v_a_6877_){
_start:
{
lean_object* v_res_6878_; 
v_res_6878_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v_context_6875_, v_bytes_6876_);
lean_dec_ref(v_bytes_6876_);
lean_dec_ref(v_context_6875_);
return v_res_6878_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0(void){
_start:
{
uint64_t v___x_6879_; uint8_t v___x_6880_; uint64_t v___x_6881_; 
v___x_6879_ = 8ULL;
v___x_6880_ = 0;
v___x_6881_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v___x_6880_, v___x_6879_);
return v___x_6881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(lean_object* v_o_6882_, lean_object* v_name_6883_, lean_object* v_args_6884_){
_start:
{
lean_object* v___x_6886_; lean_object* v___x_6887_; lean_object* v___x_6888_; uint64_t v___x_6889_; lean_object* v___x_6890_; 
v___x_6886_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_6887_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6887_, 0, v_o_6882_);
lean_ctor_set(v___x_6887_, 1, v___x_6886_);
lean_inc_ref(v_name_6883_);
v___x_6888_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6888_, 0, v_name_6883_);
v___x_6889_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0);
v___x_6890_ = l_Lasm_JS_Value_invokeRaw(v___x_6887_, v___x_6888_, v_args_6884_, v___x_6889_);
if (lean_obj_tag(v___x_6890_) == 0)
{
lean_object* v_a_6891_; lean_object* v___x_6892_; lean_object* v___x_6893_; lean_object* v___x_6894_; 
v_a_6891_ = lean_ctor_get(v___x_6890_, 0);
lean_inc(v_a_6891_);
lean_dec_ref_known(v___x_6890_, 1);
v___x_6892_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_6893_ = lean_string_append(v___x_6892_, v_name_6883_);
lean_dec_ref(v_name_6883_);
v___x_6894_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v___x_6893_, v_a_6891_);
lean_dec(v_a_6891_);
lean_dec_ref(v___x_6893_);
return v___x_6894_;
}
else
{
lean_object* v_a_6895_; lean_object* v___x_6897_; uint8_t v_isShared_6898_; uint8_t v_isSharedCheck_6902_; 
lean_dec_ref(v_name_6883_);
v_a_6895_ = lean_ctor_get(v___x_6890_, 0);
v_isSharedCheck_6902_ = !lean_is_exclusive(v___x_6890_);
if (v_isSharedCheck_6902_ == 0)
{
v___x_6897_ = v___x_6890_;
v_isShared_6898_ = v_isSharedCheck_6902_;
goto v_resetjp_6896_;
}
else
{
lean_inc(v_a_6895_);
lean_dec(v___x_6890_);
v___x_6897_ = lean_box(0);
v_isShared_6898_ = v_isSharedCheck_6902_;
goto v_resetjp_6896_;
}
v_resetjp_6896_:
{
lean_object* v___x_6900_; 
if (v_isShared_6898_ == 0)
{
v___x_6900_ = v___x_6897_;
goto v_reusejp_6899_;
}
else
{
lean_object* v_reuseFailAlloc_6901_; 
v_reuseFailAlloc_6901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6901_, 0, v_a_6895_);
v___x_6900_ = v_reuseFailAlloc_6901_;
goto v_reusejp_6899_;
}
v_reusejp_6899_:
{
return v___x_6900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___boxed(lean_object* v_o_6903_, lean_object* v_name_6904_, lean_object* v_args_6905_, lean_object* v_a_6906_){
_start:
{
lean_object* v_res_6907_; 
v_res_6907_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_o_6903_, v_name_6904_, v_args_6905_);
return v_res_6907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP(lean_object* v_self_6909_, lean_object* v_request_6910_){
_start:
{
lean_object* v___x_6912_; lean_object* v___x_6913_; lean_object* v___x_6914_; lean_object* v___x_6915_; lean_object* v___x_6916_; lean_object* v___x_6917_; lean_object* v___x_6918_; lean_object* v___x_6919_; 
v___x_6912_ = ((lean_object*)(l_Lasm_JS_Bun_Server_requestIP___closed__0));
v___x_6913_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_6914_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6914_, 0, v_request_6910_);
lean_ctor_set(v___x_6914_, 1, v___x_6913_);
v___x_6915_ = lean_unsigned_to_nat(1u);
v___x_6916_ = lean_mk_empty_array_with_capacity(v___x_6915_);
v___x_6917_ = lean_array_push(v___x_6916_, v___x_6914_);
v___x_6918_ = l_Lasm_JS_Web_Support_args(v___x_6917_);
v___x_6919_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_self_6909_, v___x_6912_, v___x_6918_);
return v___x_6919_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP___boxed(lean_object* v_self_6920_, lean_object* v_request_6921_, lean_object* v_a_6922_){
_start:
{
lean_object* v_res_6923_; 
v_res_6923_ = l_Lasm_JS_Bun_Server_requestIP(v_self_6920_, v_request_6921_);
return v_res_6923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout(lean_object* v_self_6925_, lean_object* v_request_6926_, lean_object* v_seconds_6927_){
_start:
{
lean_object* v___x_6929_; lean_object* v___x_6930_; lean_object* v___x_6931_; lean_object* v___y_6933_; lean_object* v___x_6940_; lean_object* v___x_6941_; lean_object* v___x_6942_; uint8_t v___x_6943_; 
v___x_6929_ = ((lean_object*)(l_Lasm_JS_Bun_Server_timeout___closed__0));
v___x_6930_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerWebSocket___lam__0___closed__0));
v___x_6931_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_6931_, 0, v_request_6926_);
lean_ctor_set(v___x_6931_, 1, v___x_6930_);
v___x_6940_ = lean_nat_to_int(v_seconds_6927_);
v___x_6941_ = lean_nat_abs(v___x_6940_);
v___x_6942_ = lean_cstr_to_nat("9007199254740991");
v___x_6943_ = lean_nat_dec_le(v___x_6941_, v___x_6942_);
lean_dec(v___x_6941_);
if (v___x_6943_ == 0)
{
lean_object* v___x_6944_; 
v___x_6944_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_6944_, 0, v___x_6940_);
v___y_6933_ = v___x_6944_;
goto v___jp_6932_;
}
else
{
double v___x_6945_; lean_object* v___x_6946_; 
v___x_6945_ = l_Float_ofInt(v___x_6940_);
lean_dec(v___x_6940_);
v___x_6946_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_6946_, 0, v___x_6945_);
v___y_6933_ = v___x_6946_;
goto v___jp_6932_;
}
v___jp_6932_:
{
lean_object* v___x_6934_; lean_object* v___x_6935_; lean_object* v___x_6936_; lean_object* v___x_6937_; lean_object* v___x_6938_; lean_object* v___x_6939_; 
v___x_6934_ = lean_unsigned_to_nat(2u);
v___x_6935_ = lean_mk_empty_array_with_capacity(v___x_6934_);
v___x_6936_ = lean_array_push(v___x_6935_, v___x_6931_);
v___x_6937_ = lean_array_push(v___x_6936_, v___y_6933_);
v___x_6938_ = l_Lasm_JS_Web_Support_args(v___x_6937_);
v___x_6939_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_6925_, v___x_6929_, v___x_6938_);
return v___x_6939_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout___boxed(lean_object* v_self_6947_, lean_object* v_request_6948_, lean_object* v_seconds_6949_, lean_object* v_a_6950_){
_start:
{
lean_object* v_res_6951_; 
v_res_6951_ = l_Lasm_JS_Bun_Server_timeout(v_self_6947_, v_request_6948_, v_seconds_6949_);
return v_res_6951_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref(lean_object* v_self_6953_){
_start:
{
lean_object* v___x_6955_; lean_object* v___x_6956_; lean_object* v___x_6957_; 
v___x_6955_ = ((lean_object*)(l_Lasm_JS_Bun_Server_ref___closed__0));
v___x_6956_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2, &l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once, _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2);
v___x_6957_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_6953_, v___x_6955_, v___x_6956_);
return v___x_6957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref___boxed(lean_object* v_self_6958_, lean_object* v_a_6959_){
_start:
{
lean_object* v_res_6960_; 
v_res_6960_ = l_Lasm_JS_Bun_Server_ref(v_self_6958_);
return v_res_6960_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref(lean_object* v_self_6962_){
_start:
{
lean_object* v___x_6964_; lean_object* v___x_6965_; lean_object* v___x_6966_; 
v___x_6964_ = ((lean_object*)(l_Lasm_JS_Bun_Server_unref___closed__0));
v___x_6965_ = lean_obj_once(&l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2, &l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2_once, _init_l_Lasm_JS_Bun_ServerWebSocket_terminate___closed__2);
v___x_6966_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_6962_, v___x_6964_, v___x_6965_);
return v___x_6966_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref___boxed(lean_object* v_self_6967_, lean_object* v_a_6968_){
_start:
{
lean_object* v_res_6969_; 
v_res_6969_ = l_Lasm_JS_Bun_Server_unref(v_self_6967_);
return v_res_6969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve(lean_object* v_options_6979_){
_start:
{
lean_object* v_hostname_6981_; lean_object* v_port_6982_; lean_object* v_reusePort_6983_; lean_object* v_ipv6Only_6984_; lean_object* v_http3_6985_; lean_object* v_http2_6986_; lean_object* v_http1_6987_; lean_object* v_idleTimeout_6988_; lean_object* v_tls_6989_; lean_object* v_maxRequestBodySize_6990_; lean_object* v_development_6991_; lean_object* v_error_6992_; lean_object* v_id_6993_; lean_object* v_fetch_6994_; lean_object* v_routes_6995_; lean_object* v_websocket_6996_; lean_object* v_unix_6997_; uint8_t v___x_6998_; lean_object* v___x_6999_; lean_object* v___x_7000_; lean_object* v___x_7001_; lean_object* v___x_7002_; lean_object* v___x_7003_; lean_object* v___x_7004_; lean_object* v___x_7005_; lean_object* v___x_7006_; lean_object* v___x_7007_; lean_object* v___x_7008_; lean_object* v___x_7009_; lean_object* v___x_7010_; lean_object* v___x_7011_; lean_object* v___x_7012_; lean_object* v___x_7013_; lean_object* v___x_7014_; lean_object* v___x_7015_; lean_object* v___x_7016_; lean_object* v___x_7017_; lean_object* v___x_7018_; lean_object* v___x_7019_; lean_object* v___x_7020_; lean_object* v___x_7021_; lean_object* v___x_7022_; lean_object* v___x_7023_; lean_object* v___x_7024_; lean_object* v___x_7025_; lean_object* v___x_7026_; lean_object* v___x_7027_; lean_object* v___x_7028_; lean_object* v___x_7029_; lean_object* v___x_7030_; lean_object* v___x_7031_; lean_object* v___x_7032_; lean_object* v___x_7033_; lean_object* v___x_7034_; lean_object* v___x_7035_; lean_object* v___x_7036_; lean_object* v___x_7037_; lean_object* v___x_7038_; lean_object* v___x_7039_; lean_object* v___x_7040_; lean_object* v___x_7041_; lean_object* v___x_7042_; lean_object* v___x_7043_; lean_object* v___x_7044_; lean_object* v___x_7045_; lean_object* v___x_7046_; lean_object* v___x_7047_; lean_object* v___x_7048_; lean_object* v___x_7049_; lean_object* v___x_7050_; lean_object* v___x_7051_; lean_object* v___x_7052_; lean_object* v___x_7053_; lean_object* v___x_7054_; lean_object* v___x_7055_; lean_object* v___x_7056_; lean_object* v___x_7057_; lean_object* v___x_7058_; lean_object* v___x_7059_; lean_object* v___x_7060_; lean_object* v___x_7061_; lean_object* v___x_7062_; lean_object* v___x_7063_; lean_object* v___x_7064_; lean_object* v___x_7065_; lean_object* v___x_7066_; lean_object* v___x_7067_; lean_object* v___x_7068_; lean_object* v___x_7069_; lean_object* v___x_7070_; lean_object* v___x_7071_; lean_object* v___x_7072_; lean_object* v___x_7073_; lean_object* v___x_7074_; lean_object* v___x_7075_; 
v_hostname_6981_ = lean_ctor_get(v_options_6979_, 0);
lean_inc(v_hostname_6981_);
v_port_6982_ = lean_ctor_get(v_options_6979_, 1);
lean_inc(v_port_6982_);
v_reusePort_6983_ = lean_ctor_get(v_options_6979_, 2);
lean_inc(v_reusePort_6983_);
v_ipv6Only_6984_ = lean_ctor_get(v_options_6979_, 3);
lean_inc(v_ipv6Only_6984_);
v_http3_6985_ = lean_ctor_get(v_options_6979_, 4);
lean_inc(v_http3_6985_);
v_http2_6986_ = lean_ctor_get(v_options_6979_, 5);
lean_inc(v_http2_6986_);
v_http1_6987_ = lean_ctor_get(v_options_6979_, 6);
lean_inc(v_http1_6987_);
v_idleTimeout_6988_ = lean_ctor_get(v_options_6979_, 7);
lean_inc(v_idleTimeout_6988_);
v_tls_6989_ = lean_ctor_get(v_options_6979_, 8);
lean_inc(v_tls_6989_);
v_maxRequestBodySize_6990_ = lean_ctor_get(v_options_6979_, 9);
lean_inc(v_maxRequestBodySize_6990_);
v_development_6991_ = lean_ctor_get(v_options_6979_, 10);
lean_inc(v_development_6991_);
v_error_6992_ = lean_ctor_get(v_options_6979_, 11);
lean_inc(v_error_6992_);
v_id_6993_ = lean_ctor_get(v_options_6979_, 12);
lean_inc(v_id_6993_);
v_fetch_6994_ = lean_ctor_get(v_options_6979_, 13);
lean_inc(v_fetch_6994_);
v_routes_6995_ = lean_ctor_get(v_options_6979_, 14);
lean_inc(v_routes_6995_);
v_websocket_6996_ = lean_ctor_get(v_options_6979_, 15);
lean_inc(v_websocket_6996_);
v_unix_6997_ = lean_ctor_get(v_options_6979_, 16);
lean_inc(v_unix_6997_);
lean_dec_ref(v_options_6979_);
v___x_6998_ = 0;
v___x_6999_ = lean_unsigned_to_nat(1u);
v___x_7000_ = ((lean_object*)(l_Lasm_JS_Bun_serve___closed__3));
v___x_7001_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_7002_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_6981_);
v___x_7003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7003_, 0, v___x_7001_);
lean_ctor_set(v___x_7003_, 1, v___x_7002_);
v___x_7004_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_7005_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_port_6982_);
v___x_7006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7006_, 0, v___x_7004_);
lean_ctor_set(v___x_7006_, 1, v___x_7005_);
v___x_7007_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_7008_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_6983_);
lean_dec(v_reusePort_6983_);
v___x_7009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7009_, 0, v___x_7007_);
lean_ctor_set(v___x_7009_, 1, v___x_7008_);
v___x_7010_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_7011_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_6984_);
lean_dec(v_ipv6Only_6984_);
v___x_7012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7012_, 0, v___x_7010_);
lean_ctor_set(v___x_7012_, 1, v___x_7011_);
v___x_7013_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_7014_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_http3_6985_);
lean_dec(v_http3_6985_);
v___x_7015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7015_, 0, v___x_7013_);
lean_ctor_set(v___x_7015_, 1, v___x_7014_);
v___x_7016_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_7017_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_http2_6986_);
lean_dec(v_http2_6986_);
v___x_7018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7018_, 0, v___x_7016_);
lean_ctor_set(v___x_7018_, 1, v___x_7017_);
v___x_7019_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_7020_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_http1_6987_);
lean_dec(v_http1_6987_);
v___x_7021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7021_, 0, v___x_7019_);
lean_ctor_set(v___x_7021_, 1, v___x_7020_);
v___x_7022_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__11));
v___x_7023_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_6988_);
v___x_7024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7024_, 0, v___x_7022_);
lean_ctor_set(v___x_7024_, 1, v___x_7023_);
v___x_7025_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_7026_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_tls_6989_);
v___x_7027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7027_, 0, v___x_7025_);
lean_ctor_set(v___x_7027_, 1, v___x_7026_);
v___x_7028_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_7029_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_6990_);
v___x_7030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7030_, 0, v___x_7028_);
lean_ctor_set(v___x_7030_, 1, v___x_7029_);
v___x_7031_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__9));
v___x_7032_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__2(v_development_6991_);
v___x_7033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7033_, 0, v___x_7031_);
lean_ctor_set(v___x_7033_, 1, v___x_7032_);
v___x_7034_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSWebSocketHandler___lam__0___closed__7));
v___x_7035_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__3(v_error_6992_);
lean_dec(v_error_6992_);
v___x_7036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7036_, 0, v___x_7034_);
lean_ctor_set(v___x_7036_, 1, v___x_7035_);
v___x_7037_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__10));
v___x_7038_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_6993_);
v___x_7039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7039_, 0, v___x_7037_);
lean_ctor_set(v___x_7039_, 1, v___x_7038_);
v___x_7040_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__11));
v___x_7041_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__4(v_fetch_6994_);
lean_dec(v_fetch_6994_);
v___x_7042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7042_, 0, v___x_7040_);
lean_ctor_set(v___x_7042_, 1, v___x_7041_);
v___x_7043_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__12));
v___x_7044_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__5(v_routes_6995_);
lean_dec(v_routes_6995_);
v___x_7045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7045_, 0, v___x_7043_);
lean_ctor_set(v___x_7045_, 1, v___x_7044_);
v___x_7046_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__13));
v___x_7047_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__6(v_websocket_6996_);
v___x_7048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7048_, 0, v___x_7046_);
lean_ctor_set(v___x_7048_, 1, v___x_7047_);
v___x_7049_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__14));
v___x_7050_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_unix_6997_);
v___x_7051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_7051_, 0, v___x_7049_);
lean_ctor_set(v___x_7051_, 1, v___x_7050_);
v___x_7052_ = lean_unsigned_to_nat(17u);
v___x_7053_ = lean_mk_empty_array_with_capacity(v___x_7052_);
v___x_7054_ = lean_array_push(v___x_7053_, v___x_7003_);
v___x_7055_ = lean_array_push(v___x_7054_, v___x_7006_);
v___x_7056_ = lean_array_push(v___x_7055_, v___x_7009_);
v___x_7057_ = lean_array_push(v___x_7056_, v___x_7012_);
v___x_7058_ = lean_array_push(v___x_7057_, v___x_7015_);
v___x_7059_ = lean_array_push(v___x_7058_, v___x_7018_);
v___x_7060_ = lean_array_push(v___x_7059_, v___x_7021_);
v___x_7061_ = lean_array_push(v___x_7060_, v___x_7024_);
v___x_7062_ = lean_array_push(v___x_7061_, v___x_7027_);
v___x_7063_ = lean_array_push(v___x_7062_, v___x_7030_);
v___x_7064_ = lean_array_push(v___x_7063_, v___x_7033_);
v___x_7065_ = lean_array_push(v___x_7064_, v___x_7036_);
v___x_7066_ = lean_array_push(v___x_7065_, v___x_7039_);
v___x_7067_ = lean_array_push(v___x_7066_, v___x_7042_);
v___x_7068_ = lean_array_push(v___x_7067_, v___x_7045_);
v___x_7069_ = lean_array_push(v___x_7068_, v___x_7048_);
v___x_7070_ = lean_array_push(v___x_7069_, v___x_7051_);
v___x_7071_ = l_Lasm_JS_Web_Support_fields(v___x_7070_);
lean_dec_ref(v___x_7070_);
v___x_7072_ = lean_mk_empty_array_with_capacity(v___x_6999_);
v___x_7073_ = lean_array_push(v___x_7072_, v___x_7071_);
v___x_7074_ = l_Lasm_JS_Web_Support_args(v___x_7073_);
v___x_7075_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_7000_, v___x_7074_, v___x_6998_);
if (lean_obj_tag(v___x_7075_) == 0)
{
lean_object* v_a_7076_; lean_object* v___x_7078_; uint8_t v_isShared_7079_; uint8_t v_isSharedCheck_7083_; 
v_a_7076_ = lean_ctor_get(v___x_7075_, 0);
v_isSharedCheck_7083_ = !lean_is_exclusive(v___x_7075_);
if (v_isSharedCheck_7083_ == 0)
{
v___x_7078_ = v___x_7075_;
v_isShared_7079_ = v_isSharedCheck_7083_;
goto v_resetjp_7077_;
}
else
{
lean_inc(v_a_7076_);
lean_dec(v___x_7075_);
v___x_7078_ = lean_box(0);
v_isShared_7079_ = v_isSharedCheck_7083_;
goto v_resetjp_7077_;
}
v_resetjp_7077_:
{
lean_object* v___x_7081_; 
if (v_isShared_7079_ == 0)
{
v___x_7081_ = v___x_7078_;
goto v_reusejp_7080_;
}
else
{
lean_object* v_reuseFailAlloc_7082_; 
v_reuseFailAlloc_7082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7082_, 0, v_a_7076_);
v___x_7081_ = v_reuseFailAlloc_7082_;
goto v_reusejp_7080_;
}
v_reusejp_7080_:
{
return v___x_7081_;
}
}
}
else
{
lean_object* v_a_7084_; lean_object* v___x_7086_; uint8_t v_isShared_7087_; uint8_t v_isSharedCheck_7091_; 
v_a_7084_ = lean_ctor_get(v___x_7075_, 0);
v_isSharedCheck_7091_ = !lean_is_exclusive(v___x_7075_);
if (v_isSharedCheck_7091_ == 0)
{
v___x_7086_ = v___x_7075_;
v_isShared_7087_ = v_isSharedCheck_7091_;
goto v_resetjp_7085_;
}
else
{
lean_inc(v_a_7084_);
lean_dec(v___x_7075_);
v___x_7086_ = lean_box(0);
v_isShared_7087_ = v_isSharedCheck_7091_;
goto v_resetjp_7085_;
}
v_resetjp_7085_:
{
lean_object* v___x_7089_; 
if (v_isShared_7087_ == 0)
{
v___x_7089_ = v___x_7086_;
goto v_reusejp_7088_;
}
else
{
lean_object* v_reuseFailAlloc_7090_; 
v_reuseFailAlloc_7090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_7090_, 0, v_a_7084_);
v___x_7089_ = v_reuseFailAlloc_7090_;
goto v_reusejp_7088_;
}
v_reusejp_7088_:
{
return v___x_7089_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve___boxed(lean_object* v_options_7092_, lean_object* v_a_7093_){
_start:
{
lean_object* v_res_7094_; 
v_res_7094_ = l_Lasm_JS_Bun_serve(v_options_7092_);
return v_res_7094_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_File(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Bun_Core(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Bun_Serve(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Support(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_File(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Bun_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType_default = _init_l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType_default();
l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType = _init_l_Lasm_JS_Bun_instInhabitedServerWebSocketBinaryType();
l_Lasm_JS_Bun_instInhabitedWebSocketCompressor_default = _init_l_Lasm_JS_Bun_instInhabitedWebSocketCompressor_default();
l_Lasm_JS_Bun_instInhabitedWebSocketCompressor = _init_l_Lasm_JS_Bun_instInhabitedWebSocketCompressor();
l_Lasm_JS_Bun_instInhabitedServerProtocol_default = _init_l_Lasm_JS_Bun_instInhabitedServerProtocol_default();
l_Lasm_JS_Bun_instInhabitedServerProtocol = _init_l_Lasm_JS_Bun_instInhabitedServerProtocol();
l_Lasm_JS_Bun_instToJSServerUpgradeOptions = _init_l_Lasm_JS_Bun_instToJSServerUpgradeOptions();
lean_mark_persistent(l_Lasm_JS_Bun_instToJSServerUpgradeOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
