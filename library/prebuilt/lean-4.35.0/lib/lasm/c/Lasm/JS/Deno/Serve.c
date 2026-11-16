// Lean compiler output
// Module: Lasm.JS.Deno.Serve
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Dom public import Lasm.JS.Web.Types.Fetch
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
lean_object* l_Lasm_JS_Web_instToJSAbortController___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeHandlerInfo_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandlerInfo_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo;
static const lean_closure_object l_Lasm_JS_Deno_instToJSHttpServer_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSHttpServer = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpServer_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpServer;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqNetAddrTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instBEqNetAddrTransport_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprNetAddrTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instReprNetAddrTransport_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedNetAddrTransport_default_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedNetAddrTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedNetAddrTransport_value;
static const lean_string_object l_Lasm_JS_Deno_NetAddrTransport_tcp_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tcp"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_NetAddrTransport_tcp = (const lean_object*)&l_Lasm_JS_Deno_NetAddrTransport_tcp_value;
static const lean_string_object l_Lasm_JS_Deno_NetAddrTransport_udp_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "udp"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_NetAddrTransport_udp = (const lean_object*)&l_Lasm_JS_Deno_NetAddrTransport_udp_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSNetAddrTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSNetAddrTransport_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_default_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedServeTcpOptionsTransport_value;
static const lean_string_object l_Lasm_JS_Deno_ServeTcpOptionsTransport_tcp_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tcp"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_ServeTcpOptionsTransport_tcp = (const lean_object*)&l_Lasm_JS_Deno_ServeTcpOptionsTransport_tcp_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeTcpOptionsTransport_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_default_value;
static const lean_string_object l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instInhabitedTlsCertifiedKeyPemKeyFormat_value;
static const lean_string_object l_Lasm_JS_Deno_TlsCertifiedKeyPemKeyFormat_pem_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pem"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_TlsCertifiedKeyPemKeyFormat_pem = (const lean_object*)&l_Lasm_JS_Deno_TlsCertifiedKeyPemKeyFormat_pem_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instToJSTlsCertifiedKeyPemKeyFormat_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr;
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeHandler_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeHandler = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeHandler_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandler;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2_spec__4(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeOptionsOnError_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnError = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeOptionsOnError_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnError;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSServeOptionsOnListen_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSServeOptionsOnListen = (const lean_object*)&l_Lasm_JS_Deno_instToJSServeOptionsOnListen_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeOptionsOnListen;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Deno.ServeHandlerInfo", 29, 29);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSHttpServer(void){
_start:
{
lean_object* v___f_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; 
v___f_17_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed), 1, 0);
v___x_18_ = lean_mk_string_unchecked("Lasm.JS.Deno.HttpServer", 23, 23);
v___x_19_ = 0;
v___x_20_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_20_, 0, v___f_17_);
lean_ctor_set(v___x_20_, 1, v___x_18_);
lean_ctor_set_uint8(v___x_20_, sizeof(void*)*2, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(lean_object* v_x_21_, lean_object* v_x_22_){
_start:
{
uint8_t v___x_23_; 
v___x_23_ = lean_string_dec_eq(v_x_21_, v_x_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqNetAddrTransport_beq___boxed(lean_object* v_x_24_, lean_object* v_x_25_){
_start:
{
uint8_t v_res_26_; lean_object* v_r_27_; 
v_res_26_ = l_Lasm_JS_Deno_instBEqNetAddrTransport_beq(v_x_24_, v_x_25_);
lean_dec_ref(v_x_25_);
lean_dec_ref(v_x_24_);
v_r_27_ = lean_box(v_res_26_);
return v_r_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___redArg(lean_object* v_x_29_){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; uint8_t v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_30_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_31_ = lean_box(0);
v___x_32_ = lean_mk_string_unchecked("val", 3, 3);
v___x_33_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
v___x_34_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_34_, 0, v___x_31_);
lean_ctor_set(v___x_34_, 1, v___x_33_);
v___x_35_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_36_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
v___x_37_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_34_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = lean_unsigned_to_nat(7u);
v___x_39_ = lean_nat_to_int(v___x_38_);
v___x_40_ = l_String_quote(v_x_29_);
v___x_41_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
v___x_42_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_42_, 0, v___x_39_);
lean_ctor_set(v___x_42_, 1, v___x_41_);
v___x_43_ = 0;
v___x_44_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_44_, 0, v___x_42_);
lean_ctor_set_uint8(v___x_44_, sizeof(void*)*1, v___x_43_);
v___x_45_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_37_);
lean_ctor_set(v___x_45_, 1, v___x_44_);
v___x_46_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_47_ = lean_string_length(v___x_30_);
v___x_48_ = lean_nat_to_int(v___x_47_);
v___x_49_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_49_, 0, v___x_30_);
v___x_50_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_50_, 0, v___x_49_);
lean_ctor_set(v___x_50_, 1, v___x_45_);
v___x_51_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_51_, 0, v___x_46_);
v___x_52_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_50_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
v___x_53_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_48_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_54_, 0, v___x_53_);
lean_ctor_set_uint8(v___x_54_, sizeof(void*)*1, v___x_43_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr(lean_object* v_x_55_, lean_object* v_prec_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lasm_JS_Deno_instReprNetAddrTransport_repr___redArg(v_x_55_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprNetAddrTransport_repr___boxed(lean_object* v_x_58_, lean_object* v_prec_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lasm_JS_Deno_instReprNetAddrTransport_repr(v_x_58_, v_prec_59_);
lean_dec(v_prec_59_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0(lean_object* v_x_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_67_, 0, v_x_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0(lean_object* v_x_69_){
_start:
{
if (lean_obj_tag(v_x_69_) == 4)
{
lean_object* v_s_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_77_; 
v_s_70_ = lean_ctor_get(v_x_69_, 0);
v_isSharedCheck_77_ = !lean_is_exclusive(v_x_69_);
if (v_isSharedCheck_77_ == 0)
{
v___x_72_ = v_x_69_;
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_s_70_);
lean_dec(v_x_69_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_77_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_75_; 
if (v_isShared_73_ == 0)
{
lean_ctor_set_tag(v___x_72_, 1);
v___x_75_ = v___x_72_;
goto v_reusejp_74_;
}
else
{
lean_object* v_reuseFailAlloc_76_; 
v_reuseFailAlloc_76_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_76_, 0, v_s_70_);
v___x_75_ = v_reuseFailAlloc_76_;
goto v_reusejp_74_;
}
v_reusejp_74_:
{
return v___x_75_;
}
}
}
else
{
lean_object* v___x_78_; lean_object* v___x_79_; 
lean_dec(v_x_69_);
v___x_78_ = lean_mk_string_unchecked("not a string", 12, 12);
v___x_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddrTransport(void){
_start:
{
lean_object* v___f_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; 
v___f_80_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0), 1, 0);
v___x_81_ = lean_mk_string_unchecked("Lasm.JS.Deno.NetAddrTransport", 29, 29);
v___x_82_ = 0;
v___x_83_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_83_, 0, v___f_80_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
lean_ctor_set_uint8(v___x_83_, sizeof(void*)*2, v___x_82_);
return v___x_83_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(lean_object* v_x_84_, lean_object* v_x_85_){
_start:
{
uint8_t v___x_86_; 
v___x_86_ = lean_string_dec_eq(v_x_84_, v_x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq___boxed(lean_object* v_x_87_, lean_object* v_x_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Lasm_JS_Deno_instBEqServeTcpOptionsTransport_beq(v_x_87_, v_x_88_);
lean_dec_ref(v_x_88_);
lean_dec_ref(v_x_87_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(lean_object* v_x_92_){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; uint8_t v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_93_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_94_ = lean_box(0);
v___x_95_ = lean_mk_string_unchecked("val", 3, 3);
v___x_96_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
v___x_97_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_94_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_99_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
v___x_100_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_97_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = lean_unsigned_to_nat(7u);
v___x_102_ = lean_nat_to_int(v___x_101_);
v___x_103_ = l_String_quote(v_x_92_);
v___x_104_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
v___x_105_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_105_, 0, v___x_102_);
lean_ctor_set(v___x_105_, 1, v___x_104_);
v___x_106_ = 0;
v___x_107_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_107_, 0, v___x_105_);
lean_ctor_set_uint8(v___x_107_, sizeof(void*)*1, v___x_106_);
v___x_108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_100_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_110_ = lean_string_length(v___x_93_);
v___x_111_ = lean_nat_to_int(v___x_110_);
v___x_112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_112_, 0, v___x_93_);
v___x_113_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v___x_108_);
v___x_114_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_114_, 0, v___x_109_);
v___x_115_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
v___x_116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_116_, 0, v___x_111_);
lean_ctor_set(v___x_116_, 1, v___x_115_);
v___x_117_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_117_, 0, v___x_116_);
lean_ctor_set_uint8(v___x_117_, sizeof(void*)*1, v___x_106_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(lean_object* v_x_118_, lean_object* v_prec_119_){
_start:
{
lean_object* v___x_120_; 
v___x_120_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___redArg(v_x_118_);
return v___x_120_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr___boxed(lean_object* v_x_121_, lean_object* v_prec_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lasm_JS_Deno_instReprServeTcpOptionsTransport_repr(v_x_121_, v_prec_122_);
lean_dec(v_prec_122_);
return v_res_123_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport(void){
_start:
{
lean_object* v___f_129_; lean_object* v___x_130_; uint8_t v___x_131_; lean_object* v___x_132_; 
v___f_129_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0), 1, 0);
v___x_130_ = lean_mk_string_unchecked("Lasm.JS.Deno.ServeTcpOptionsTransport", 37, 37);
v___x_131_ = 0;
v___x_132_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_132_, 0, v___f_129_);
lean_ctor_set(v___x_132_, 1, v___x_130_);
lean_ctor_set_uint8(v___x_132_, sizeof(void*)*2, v___x_131_);
return v___x_132_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(lean_object* v_x_133_, lean_object* v_x_134_){
_start:
{
uint8_t v___x_135_; 
v___x_135_ = lean_string_dec_eq(v_x_133_, v_x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq___boxed(lean_object* v_x_136_, lean_object* v_x_137_){
_start:
{
uint8_t v_res_138_; lean_object* v_r_139_; 
v_res_138_ = l_Lasm_JS_Deno_instBEqTlsCertifiedKeyPemKeyFormat_beq(v_x_136_, v_x_137_);
lean_dec_ref(v_x_137_);
lean_dec_ref(v_x_136_);
v_r_139_ = lean_box(v_res_138_);
return v_r_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(lean_object* v_x_141_){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_142_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_143_ = lean_box(0);
v___x_144_ = lean_mk_string_unchecked("val", 3, 3);
v___x_145_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_145_, 0, v___x_144_);
v___x_146_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_143_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_148_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_148_, 0, v___x_147_);
v___x_149_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_149_, 0, v___x_146_);
lean_ctor_set(v___x_149_, 1, v___x_148_);
v___x_150_ = lean_unsigned_to_nat(7u);
v___x_151_ = lean_nat_to_int(v___x_150_);
v___x_152_ = l_String_quote(v_x_141_);
v___x_153_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
v___x_154_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_151_);
lean_ctor_set(v___x_154_, 1, v___x_153_);
v___x_155_ = 0;
v___x_156_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_156_, 0, v___x_154_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*1, v___x_155_);
v___x_157_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_149_);
lean_ctor_set(v___x_157_, 1, v___x_156_);
v___x_158_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_159_ = lean_string_length(v___x_142_);
v___x_160_ = lean_nat_to_int(v___x_159_);
v___x_161_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_142_);
v___x_162_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_157_);
v___x_163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_158_);
v___x_164_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set(v___x_164_, 1, v___x_163_);
v___x_165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_165_, 0, v___x_160_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_166_, 0, v___x_165_);
lean_ctor_set_uint8(v___x_166_, sizeof(void*)*1, v___x_155_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(lean_object* v_x_167_, lean_object* v_prec_168_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___redArg(v_x_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr___boxed(lean_object* v_x_170_, lean_object* v_prec_171_){
_start:
{
lean_object* v_res_172_; 
v_res_172_ = l_Lasm_JS_Deno_instReprTlsCertifiedKeyPemKeyFormat_repr(v_x_170_, v_prec_171_);
lean_dec(v_prec_171_);
return v_res_172_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat(void){
_start:
{
lean_object* v___f_178_; lean_object* v___x_179_; uint8_t v___x_180_; lean_object* v___x_181_; 
v___f_178_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSNetAddrTransport___lam__0), 1, 0);
v___x_179_ = lean_mk_string_unchecked("Lasm.JS.Deno.TlsCertifiedKeyPemKeyFormat", 40, 40);
v___x_180_ = 0;
v___x_181_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_181_, 0, v___f_178_);
lean_ctor_set(v___x_181_, 1, v___x_179_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*2, v___x_180_);
return v___x_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(lean_object* v___x_182_, lean_object* v___x_183_, lean_object* v___x_184_, lean_object* v_d_185_){
_start:
{
lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_186_ = lean_mk_string_unchecked("transport", 9, 9);
v___x_187_ = l_Lasm_JS_readField___redArg(v___x_182_, v_d_185_, v___x_186_);
lean_dec_ref(v___x_186_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
lean_dec_ref(v___x_184_);
lean_dec_ref(v___x_183_);
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_197_; lean_object* v___x_198_; 
v_a_196_ = lean_ctor_get(v___x_187_, 0);
lean_inc(v_a_196_);
lean_dec_ref_known(v___x_187_, 1);
v___x_197_ = lean_mk_string_unchecked("hostname", 8, 8);
v___x_198_ = l_Lasm_JS_readField___redArg(v___x_183_, v_d_185_, v___x_197_);
lean_dec_ref(v___x_197_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_a_196_);
lean_dec_ref(v___x_184_);
v_a_199_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_198_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_198_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v_a_207_ = lean_ctor_get(v___x_198_, 0);
lean_inc(v_a_207_);
lean_dec_ref_known(v___x_198_, 1);
v___x_208_ = lean_mk_string_unchecked("port", 4, 4);
v___x_209_ = l_Lasm_JS_readField___redArg(v___x_184_, v_d_185_, v___x_208_);
lean_dec_ref(v___x_208_);
if (lean_obj_tag(v___x_209_) == 0)
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
lean_dec(v_a_207_);
lean_dec(v_a_196_);
v_a_210_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_209_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_209_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
else
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
v_a_218_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_226_ == 0)
{
v___x_220_ = v___x_209_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_209_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_224_; 
v___x_222_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_222_, 0, v_a_196_);
lean_ctor_set(v___x_222_, 1, v_a_207_);
lean_ctor_set(v___x_222_, 2, v_a_218_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_222_);
v___x_224_ = v___x_220_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed(lean_object* v___x_227_, lean_object* v___x_228_, lean_object* v___x_229_, lean_object* v_d_230_){
_start:
{
lean_object* v_res_231_; 
v_res_231_ = l_Lasm_JS_Deno_instFromJSNetAddr___lam__0(v___x_227_, v___x_228_, v___x_229_, v_d_230_);
lean_dec(v_d_230_);
return v_res_231_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSNetAddr(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___f_235_; lean_object* v___x_236_; uint8_t v___x_237_; lean_object* v___x_238_; 
v___x_232_ = l_Lasm_JS_Deno_instFromJSNetAddrTransport;
v___x_233_ = l_Lasm_JS_instFromJSString;
v___x_234_ = l_Lasm_JS_instFromJSNat;
v___f_235_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSNetAddr___lam__0___boxed), 4, 3);
lean_closure_set(v___f_235_, 0, v___x_232_);
lean_closure_set(v___f_235_, 1, v___x_233_);
lean_closure_set(v___f_235_, 2, v___x_234_);
v___x_236_ = lean_mk_string_unchecked("Lasm.JS.Deno.NetAddr", 20, 20);
v___x_237_ = 0;
v___x_238_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_238_, 0, v___f_235_);
lean_ctor_set(v___x_238_, 1, v___x_236_);
lean_ctor_set_uint8(v___x_238_, sizeof(void*)*2, v___x_237_);
return v___x_238_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeHandler(void){
_start:
{
lean_object* v___f_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; 
v___f_240_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed), 1, 0);
v___x_241_ = lean_mk_string_unchecked("Lasm.JS.Deno.ServeHandler", 25, 25);
v___x_242_ = 0;
v___x_243_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_243_, 0, v___f_240_);
lean_ctor_set(v___x_243_, 1, v___x_241_);
lean_ctor_set_uint8(v___x_243_, sizeof(void*)*2, v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_254_; 
v_a_246_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_254_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_254_ == 0)
{
v___x_248_ = v_x_244_;
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_a_246_);
lean_dec(v_x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_254_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_251_; 
if (v_isShared_249_ == 0)
{
v___x_251_ = v___x_248_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_246_);
v___x_251_ = v_reuseFailAlloc_253_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; 
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
return v___x_252_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_265_; 
v_a_255_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_265_ == 0)
{
v___x_257_ = v_x_244_;
v_isShared_258_ = v_isSharedCheck_265_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v_x_244_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_265_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v___x_259_ = lean_mk_string_unchecked("", 0, 0);
v___x_260_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_260_, 0, v_a_255_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
if (v_isShared_258_ == 0)
{
lean_ctor_set(v___x_257_, 0, v___x_260_);
v___x_262_ = v___x_257_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_264_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_263_; 
v___x_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_263_, 0, v___x_262_);
return v___x_263_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed(lean_object* v_x_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0(v_x_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(lean_object* v_f_269_, lean_object* v_a_270_, lean_object* v___f_271_, lean_object* v_x_272_){
_start:
{
if (lean_obj_tag(v_x_272_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_282_; 
lean_dec_ref(v___f_271_);
lean_dec(v_a_270_);
lean_dec_ref(v_f_269_);
v_a_274_ = lean_ctor_get(v_x_272_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v_x_272_);
if (v_isSharedCheck_282_ == 0)
{
v___x_276_ = v_x_272_;
v_isShared_277_ = v_isSharedCheck_282_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v_x_272_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_282_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_281_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_280_; 
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
}
else
{
lean_object* v_a_283_; lean_object* v___x_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v_a_283_ = lean_ctor_get(v_x_272_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v_x_272_, 1);
v___x_284_ = lean_unsigned_to_nat(0u);
v___x_285_ = 0;
v___x_286_ = lean_apply_3(v_f_269_, v_a_270_, v_a_283_, lean_box(0));
v___x_287_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_284_, v___x_285_, v___x_286_, v___f_271_);
return v___x_287_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed(lean_object* v_f_288_, lean_object* v_a_289_, lean_object* v___f_290_, lean_object* v_x_291_, lean_object* v___y_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1(v_f_288_, v_a_289_, v___f_290_, v_x_291_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(lean_object* v_context_294_, lean_object* v_d_295_){
_start:
{
lean_object* v___y_298_; lean_object* v___y_299_; 
if (lean_obj_tag(v_d_295_) == 9)
{
lean_object* v_value_303_; lean_object* v___x_304_; 
v_value_303_ = lean_ctor_get(v_d_295_, 0);
lean_inc(v_value_303_);
lean_dec_ref_known(v_d_295_, 2);
v___x_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_304_, 0, v_value_303_);
return v___x_304_;
}
else
{
lean_object* v___x_305_; lean_object* v_received_307_; 
v___x_305_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_295_) == 9)
{
lean_object* v_value_323_; lean_object* v_description_324_; uint8_t v___x_325_; 
v_value_323_ = lean_ctor_get(v_d_295_, 0);
v_description_324_ = lean_ctor_get(v_d_295_, 1);
v___x_325_ = lean_string_dec_eq(v_description_324_, v___x_305_);
if (v___x_325_ == 0)
{
goto v___jp_321_;
}
else
{
uint32_t v___x_326_; uint64_t v___x_327_; lean_object* v___x_328_; uint32_t v___x_329_; lean_object* v___x_330_; 
lean_inc_n(v_value_323_, 2);
lean_dec_ref_known(v_d_295_, 2);
v___x_326_ = 206;
v___x_327_ = 0ULL;
lean_inc_ref(v___x_305_);
v___x_328_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_328_, 0, v_value_323_);
lean_ctor_set(v___x_328_, 1, v___x_305_);
v___x_329_ = lasm_js_value_handle(v_value_323_);
lean_dec(v_value_323_);
v___x_330_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_326_, v___x_327_, v___x_328_, v___x_329_);
lean_dec_ref_known(v___x_328_, 2);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; uint8_t v___x_332_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_331_);
lean_dec_ref_known(v___x_330_, 1);
v___x_332_ = lean_string_validate_utf8(v_a_331_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
lean_dec(v_a_331_);
v___x_333_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_334_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_335_ = lean_unsigned_to_nat(193u);
v___x_336_ = lean_unsigned_to_nat(46u);
v___x_337_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_338_ = l_mkPanicMessageWithDecl(v___x_333_, v___x_334_, v___x_335_, v___x_336_, v___x_337_);
lean_dec_ref(v___x_337_);
lean_dec_ref(v___x_334_);
lean_dec_ref(v___x_333_);
v___x_339_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_338_);
v_received_307_ = v___x_339_;
goto v___jp_306_;
}
else
{
lean_object* v___x_340_; 
v___x_340_ = lean_string_from_utf8_unchecked(v_a_331_);
v_received_307_ = v___x_340_;
goto v___jp_306_;
}
}
else
{
lean_object* v___x_341_; 
lean_dec_ref_known(v___x_330_, 1);
v___x_341_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_307_ = v___x_341_;
goto v___jp_306_;
}
}
}
else
{
goto v___jp_321_;
}
v___jp_306_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; uint8_t v___x_319_; 
v___x_308_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_309_ = lean_string_append(v___x_308_, v_context_294_);
v___x_310_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_311_ = lean_string_append(v___x_309_, v___x_310_);
lean_dec_ref(v___x_310_);
v___x_312_ = lean_mk_string_unchecked("Lasm.JS.Deno.ServeHandlerInfo", 29, 29);
v___x_313_ = lean_string_append(v___x_311_, v___x_312_);
lean_dec_ref(v___x_312_);
v___x_314_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_315_ = lean_string_append(v___x_313_, v___x_314_);
lean_dec_ref(v___x_314_);
v___x_316_ = lean_string_append(v___x_315_, v_received_307_);
lean_dec_ref(v_received_307_);
v___x_317_ = lean_string_utf8_byte_size(v___x_305_);
v___x_318_ = lean_unsigned_to_nat(0u);
v___x_319_ = lean_nat_dec_eq(v___x_317_, v___x_318_);
if (v___x_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v___x_305_);
v___x_320_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_298_ = v___x_316_;
v___y_299_ = v___x_320_;
goto v___jp_297_;
}
else
{
v___y_298_ = v___x_316_;
v___y_299_ = v___x_305_;
goto v___jp_297_;
}
}
v___jp_321_:
{
lean_object* v___x_322_; 
v___x_322_ = l_Lasm_JS_Data_describe(v_d_295_);
v_received_307_ = v___x_322_;
goto v___jp_306_;
}
}
v___jp_297_:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_300_ = lean_string_append(v___y_298_, v___y_299_);
v___x_301_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
v___x_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_302_, 0, v___x_301_);
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0___boxed(lean_object* v_context_342_, lean_object* v_d_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v_context_342_, v_d_343_);
lean_dec_ref(v_context_342_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(lean_object* v_args_346_, lean_object* v_i_347_){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_349_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_350_ = lean_unsigned_to_nat(1u);
v___x_351_ = lean_nat_add(v_i_347_, v___x_350_);
v___x_352_ = l_Nat_reprFast(v___x_351_);
v___x_353_ = lean_string_append(v___x_349_, v___x_352_);
lean_dec_ref(v___x_352_);
v___x_354_ = lean_array_get_size(v_args_346_);
v___x_355_ = lean_nat_dec_lt(v_i_347_, v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_box(0);
v___x_357_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_353_, v___x_356_);
lean_dec_ref(v___x_353_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_array_fget_borrowed(v_args_346_, v_i_347_);
lean_inc(v___x_358_);
v___x_359_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0_spec__0(v___x_353_, v___x_358_);
lean_dec_ref(v___x_353_);
return v___x_359_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0___boxed(lean_object* v_args_360_, lean_object* v_i_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_360_, v_i_361_);
lean_dec(v_i_361_);
lean_dec_ref(v_args_360_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(lean_object* v_f_364_, lean_object* v___f_365_, lean_object* v_args_366_, lean_object* v_x_367_){
_start:
{
if (lean_obj_tag(v_x_367_) == 0)
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_377_; 
lean_dec_ref(v___f_365_);
lean_dec_ref(v_f_364_);
v_a_369_ = lean_ctor_get(v_x_367_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v_x_367_);
if (v_isSharedCheck_377_ == 0)
{
v___x_371_ = v_x_367_;
v_isShared_372_ = v_isSharedCheck_377_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v_x_367_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_377_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_a_369_);
v___x_374_ = v_reuseFailAlloc_376_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
lean_object* v___x_375_; 
v___x_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_375_, 0, v___x_374_);
return v___x_375_;
}
}
}
else
{
lean_object* v_a_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_399_; 
v_a_378_ = lean_ctor_get(v_x_367_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v_x_367_);
if (v_isSharedCheck_399_ == 0)
{
v___x_380_ = v_x_367_;
v_isShared_381_ = v_isSharedCheck_399_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_a_378_);
lean_dec(v_x_367_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_399_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___f_382_; lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; lean_object* v_val_387_; lean_object* v___x_390_; 
v___f_382_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_382_, 0, v_f_364_);
lean_closure_set(v___f_382_, 1, v_a_378_);
lean_closure_set(v___f_382_, 2, v___f_365_);
v___x_383_ = lean_unsigned_to_nat(1u);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = 0;
v___x_390_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_366_, v___x_383_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_393_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_a_391_);
lean_dec_ref_known(v___x_390_, 1);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 0, v_a_391_);
v___x_393_ = v___x_380_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
v_val_387_ = v___x_393_;
goto v___jp_386_;
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; 
v_a_395_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_a_395_);
lean_dec_ref_known(v___x_390_, 1);
if (v_isShared_381_ == 0)
{
lean_ctor_set_tag(v___x_380_, 0);
lean_ctor_set(v___x_380_, 0, v_a_395_);
v___x_397_ = v___x_380_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v_a_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
v_val_387_ = v___x_397_;
goto v___jp_386_;
}
}
v___jp_386_:
{
lean_object* v___x_388_; lean_object* v___x_389_; 
v___x_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_388_, 0, v_val_387_);
v___x_389_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_384_, v___x_385_, v___x_388_, v___f_382_);
return v___x_389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed(lean_object* v_f_400_, lean_object* v___f_401_, lean_object* v_args_402_, lean_object* v_x_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2(v_f_400_, v___f_401_, v_args_402_, v_x_403_);
lean_dec_ref(v_args_402_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1_spec__2(lean_object* v_context_406_, lean_object* v_d_407_){
_start:
{
lean_object* v___y_410_; lean_object* v___y_411_; 
if (lean_obj_tag(v_d_407_) == 9)
{
lean_object* v_value_415_; lean_object* v___x_416_; 
v_value_415_ = lean_ctor_get(v_d_407_, 0);
lean_inc(v_value_415_);
lean_dec_ref_known(v_d_407_, 2);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v_value_415_);
return v___x_416_;
}
else
{
lean_object* v___x_417_; lean_object* v_received_419_; 
v___x_417_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_407_) == 9)
{
lean_object* v_value_435_; lean_object* v_description_436_; uint8_t v___x_437_; 
v_value_435_ = lean_ctor_get(v_d_407_, 0);
v_description_436_ = lean_ctor_get(v_d_407_, 1);
v___x_437_ = lean_string_dec_eq(v_description_436_, v___x_417_);
if (v___x_437_ == 0)
{
goto v___jp_433_;
}
else
{
uint32_t v___x_438_; uint64_t v___x_439_; lean_object* v___x_440_; uint32_t v___x_441_; lean_object* v___x_442_; 
lean_inc_n(v_value_435_, 2);
lean_dec_ref_known(v_d_407_, 2);
v___x_438_ = 206;
v___x_439_ = 0ULL;
lean_inc_ref(v___x_417_);
v___x_440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_440_, 0, v_value_435_);
lean_ctor_set(v___x_440_, 1, v___x_417_);
v___x_441_ = lasm_js_value_handle(v_value_435_);
lean_dec(v_value_435_);
v___x_442_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_438_, v___x_439_, v___x_440_, v___x_441_);
lean_dec_ref_known(v___x_440_, 2);
if (lean_obj_tag(v___x_442_) == 0)
{
lean_object* v_a_443_; uint8_t v___x_444_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
lean_inc(v_a_443_);
lean_dec_ref_known(v___x_442_, 1);
v___x_444_ = lean_string_validate_utf8(v_a_443_);
if (v___x_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec(v_a_443_);
v___x_445_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_446_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_447_ = lean_unsigned_to_nat(193u);
v___x_448_ = lean_unsigned_to_nat(46u);
v___x_449_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_450_ = l_mkPanicMessageWithDecl(v___x_445_, v___x_446_, v___x_447_, v___x_448_, v___x_449_);
lean_dec_ref(v___x_449_);
lean_dec_ref(v___x_446_);
lean_dec_ref(v___x_445_);
v___x_451_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_450_);
v_received_419_ = v___x_451_;
goto v___jp_418_;
}
else
{
lean_object* v___x_452_; 
v___x_452_ = lean_string_from_utf8_unchecked(v_a_443_);
v_received_419_ = v___x_452_;
goto v___jp_418_;
}
}
else
{
lean_object* v___x_453_; 
lean_dec_ref_known(v___x_442_, 1);
v___x_453_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_419_ = v___x_453_;
goto v___jp_418_;
}
}
}
else
{
goto v___jp_433_;
}
v___jp_418_:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_420_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_421_ = lean_string_append(v___x_420_, v_context_406_);
v___x_422_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_423_ = lean_string_append(v___x_421_, v___x_422_);
lean_dec_ref(v___x_422_);
v___x_424_ = lean_mk_string_unchecked("Lasm.JS.Web.Request", 19, 19);
v___x_425_ = lean_string_append(v___x_423_, v___x_424_);
lean_dec_ref(v___x_424_);
v___x_426_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_427_ = lean_string_append(v___x_425_, v___x_426_);
lean_dec_ref(v___x_426_);
v___x_428_ = lean_string_append(v___x_427_, v_received_419_);
lean_dec_ref(v_received_419_);
v___x_429_ = lean_string_utf8_byte_size(v___x_417_);
v___x_430_ = lean_unsigned_to_nat(0u);
v___x_431_ = lean_nat_dec_eq(v___x_429_, v___x_430_);
if (v___x_431_ == 0)
{
lean_object* v___x_432_; 
lean_dec_ref(v___x_417_);
v___x_432_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_410_ = v___x_428_;
v___y_411_ = v___x_432_;
goto v___jp_409_;
}
else
{
v___y_410_ = v___x_428_;
v___y_411_ = v___x_417_;
goto v___jp_409_;
}
}
v___jp_433_:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lasm_JS_Data_describe(v_d_407_);
v_received_419_ = v___x_434_;
goto v___jp_418_;
}
}
v___jp_409_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_412_ = lean_string_append(v___y_410_, v___y_411_);
v___x_413_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
v___x_414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1_spec__2___boxed(lean_object* v_context_454_, lean_object* v_d_455_, lean_object* v_a_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1_spec__2(v_context_454_, v_d_455_);
lean_dec_ref(v_context_454_);
return v_res_457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(lean_object* v_args_458_, lean_object* v_i_459_){
_start:
{
lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_461_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_462_ = lean_unsigned_to_nat(1u);
v___x_463_ = lean_nat_add(v_i_459_, v___x_462_);
v___x_464_ = l_Nat_reprFast(v___x_463_);
v___x_465_ = lean_string_append(v___x_461_, v___x_464_);
lean_dec_ref(v___x_464_);
v___x_466_ = lean_array_get_size(v_args_458_);
v___x_467_ = lean_nat_dec_lt(v_i_459_, v___x_466_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_box(0);
v___x_469_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1_spec__2(v___x_465_, v___x_468_);
lean_dec_ref(v___x_465_);
return v___x_469_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lean_array_fget_borrowed(v_args_458_, v_i_459_);
lean_inc(v___x_470_);
v___x_471_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1_spec__2(v___x_465_, v___x_470_);
lean_dec_ref(v___x_465_);
return v___x_471_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1___boxed(lean_object* v_args_472_, lean_object* v_i_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_472_, v_i_473_);
lean_dec(v_i_473_);
lean_dec_ref(v_args_472_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(lean_object* v_f_476_, lean_object* v___f_477_, lean_object* v_args_478_){
_start:
{
lean_object* v___f_480_; lean_object* v___x_481_; uint8_t v___x_482_; lean_object* v_val_484_; lean_object* v___x_487_; 
lean_inc_ref(v_args_478_);
v___f_480_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__2___boxed), 5, 3);
lean_closure_set(v___f_480_, 0, v_f_476_);
lean_closure_set(v___f_480_, 1, v___f_477_);
lean_closure_set(v___f_480_, 2, v_args_478_);
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = 0;
v___x_487_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_478_, v___x_481_);
lean_dec_ref(v_args_478_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_487_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_487_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
lean_ctor_set_tag(v___x_490_, 1);
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_val_484_ = v___x_493_;
goto v___jp_483_;
}
}
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
v_a_496_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_487_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_487_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set_tag(v___x_498_, 0);
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
v_val_484_ = v___x_501_;
goto v___jp_483_;
}
}
}
v___jp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v_val_484_);
v___x_486_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_481_, v___x_482_, v___x_485_, v___f_480_);
return v___x_486_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed(lean_object* v_f_504_, lean_object* v___f_505_, lean_object* v_args_506_, lean_object* v___y_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3(v_f_504_, v___f_505_, v_args_506_);
return v_res_508_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2_spec__4(uint8_t v_await_509_, uint64_t v_extra_510_){
_start:
{
uint8_t v___x_511_; uint64_t v___x_512_; uint64_t v___y_514_; 
v___x_511_ = 1;
v___x_512_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_511_);
if (v_await_509_ == 0)
{
uint64_t v___x_517_; 
v___x_517_ = 0ULL;
v___y_514_ = v___x_517_;
goto v___jp_513_;
}
else
{
uint64_t v___x_518_; 
v___x_518_ = 2ULL;
v___y_514_ = v___x_518_;
goto v___jp_513_;
}
v___jp_513_:
{
uint64_t v___x_515_; uint64_t v___x_516_; 
v___x_515_ = lean_uint64_lor(v___x_512_, v___y_514_);
v___x_516_ = lean_uint64_lor(v___x_515_, v_extra_510_);
return v___x_516_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2_spec__4___boxed(lean_object* v_await_519_, lean_object* v_extra_520_){
_start:
{
uint8_t v_await_boxed_521_; uint64_t v_extra_boxed_522_; uint64_t v_res_523_; lean_object* v_r_524_; 
v_await_boxed_521_ = lean_unbox(v_await_519_);
v_extra_boxed_522_ = lean_unbox_uint64(v_extra_520_);
lean_dec_ref(v_extra_520_);
v_res_523_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2_spec__4(v_await_boxed_521_, v_extra_boxed_522_);
v_r_524_ = lean_box_uint64(v_res_523_);
return v_r_524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(lean_object* v_o_525_, lean_object* v_name_526_, lean_object* v_args_527_){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; uint64_t v___x_533_; uint64_t v___x_534_; lean_object* v___x_535_; 
v___x_529_ = lean_mk_string_unchecked("", 0, 0);
v___x_530_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_530_, 0, v_o_525_);
lean_ctor_set(v___x_530_, 1, v___x_529_);
lean_inc_ref(v_name_526_);
v___x_531_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_531_, 0, v_name_526_);
v___x_532_ = 0;
v___x_533_ = 8ULL;
v___x_534_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2_spec__4(v___x_532_, v___x_533_);
v___x_535_ = l_Lasm_JS_Value_invokeRaw(v___x_530_, v___x_531_, v_args_527_, v___x_534_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_538_ = lean_string_append(v___x_537_, v_name_526_);
lean_dec_ref(v_name_526_);
v___x_539_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_538_, v_a_536_);
lean_dec(v_a_536_);
lean_dec_ref(v___x_538_);
return v___x_539_;
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec_ref(v_name_526_);
v_a_540_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_535_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_535_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2___boxed(lean_object* v_o_548_, lean_object* v_name_549_, lean_object* v_args_550_, lean_object* v_a_551_){
_start:
{
lean_object* v_res_552_; 
v_res_552_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(v_o_548_, v_name_549_, v_args_550_);
return v_res_552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn(lean_object* v_f_553_){
_start:
{
lean_object* v___f_555_; lean_object* v___f_556_; lean_object* v___x_557_; 
v___f_555_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed), 2, 0);
v___f_556_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__3___boxed), 4, 2);
lean_closure_set(v___f_556_, 0, v_f_553_);
lean_closure_set(v___f_556_, 1, v___f_555_);
v___x_557_ = l_Lasm_JS_Function_ofFn(v___f_556_);
if (lean_obj_tag(v___x_557_) == 0)
{
lean_object* v_a_558_; lean_object* v___x_559_; 
v_a_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_a_558_);
lean_dec_ref_known(v___x_557_, 1);
v___x_559_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_a_560_);
lean_dec_ref_known(v___x_559_, 1);
v___x_561_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_562_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_560_, v___x_561_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___y_571_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___x_562_, 1);
v___x_564_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_565_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_558_);
v___x_566_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_566_, 0, v_a_558_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
v___x_567_ = lean_mk_string_unchecked("length", 6, 6);
v___x_568_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
v___x_569_ = lean_mk_string_unchecked("value", 5, 5);
v___x_598_ = lean_unsigned_to_nat(2u);
v___x_599_ = lean_nat_to_int(v___x_598_);
v___x_600_ = lean_nat_abs(v___x_599_);
v___x_601_ = lean_cstr_to_nat("9007199254740991");
v___x_602_ = lean_nat_dec_le(v___x_600_, v___x_601_);
lean_dec(v___x_600_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; 
v___x_603_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_603_, 0, v___x_599_);
v___y_571_ = v___x_603_;
goto v___jp_570_;
}
else
{
double v___x_604_; lean_object* v___x_605_; 
v___x_604_ = l_Float_ofInt(v___x_599_);
lean_dec(v___x_599_);
v___x_605_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_605_, 0, v___x_604_);
v___y_571_ = v___x_605_;
goto v___jp_570_;
}
v___jp_570_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_569_);
lean_ctor_set(v___x_572_, 1, v___y_571_);
v___x_573_ = lean_box(0);
v___x_574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_574_, 0, v___x_572_);
lean_ctor_set(v___x_574_, 1, v___x_573_);
v___x_575_ = l_Lasm_JS_obj(v___x_574_);
v___x_576_ = lean_unsigned_to_nat(3u);
v___x_577_ = lean_mk_empty_array_with_capacity(v___x_576_);
v___x_578_ = lean_array_push(v___x_577_, v___x_566_);
v___x_579_ = lean_array_push(v___x_578_, v___x_568_);
v___x_580_ = lean_array_push(v___x_579_, v___x_575_);
v___x_581_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(v_a_563_, v___x_564_, v___x_580_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; 
v_unused_589_ = lean_ctor_get(v___x_581_, 0);
lean_dec(v_unused_589_);
v___x_583_ = v___x_581_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_dec(v___x_581_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v_a_558_);
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_558_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec(v_a_558_);
v_a_590_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_581_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_581_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_595_; 
if (v_isShared_593_ == 0)
{
v___x_595_ = v___x_592_;
goto v_reusejp_594_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_a_590_);
v___x_595_ = v_reuseFailAlloc_596_;
goto v_reusejp_594_;
}
v_reusejp_594_:
{
return v___x_595_;
}
}
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_dec(v_a_558_);
v_a_606_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_562_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_562_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_dec(v_a_558_);
v_a_614_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_559_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_559_);
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
else
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
v_a_622_ = lean_ctor_get(v___x_557_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v___x_557_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_557_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_622_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofFn___boxed(lean_object* v_f_630_, lean_object* v_a_631_){
_start:
{
lean_object* v_res_632_; 
v_res_632_ = l_Lasm_JS_Deno_ServeHandler_ofFn(v_f_630_);
return v_res_632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(lean_object* v_f_633_, lean_object* v_args_634_){
_start:
{
lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__1(v_args_634_, v___x_636_);
if (lean_obj_tag(v___x_637_) == 0)
{
lean_object* v_a_638_; lean_object* v___x_639_; lean_object* v___x_640_; 
v_a_638_ = lean_ctor_get(v___x_637_, 0);
lean_inc(v_a_638_);
lean_dec_ref_known(v___x_637_, 1);
v___x_639_ = lean_unsigned_to_nat(1u);
v___x_640_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__0(v_args_634_, v___x_639_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; lean_object* v___x_642_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref_known(v___x_640_, 1);
v___x_642_ = lean_apply_3(v_f_633_, v_a_638_, v_a_641_, lean_box(0));
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_652_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_652_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_652_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_650_; 
v___x_647_ = lean_mk_string_unchecked("", 0, 0);
v___x_648_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_648_, 0, v_a_643_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v___x_648_);
v___x_650_ = v___x_645_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v___x_648_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_660_; 
v_a_653_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_660_ == 0)
{
v___x_655_ = v___x_642_;
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v___x_642_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_660_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_658_; 
if (v_isShared_656_ == 0)
{
v___x_658_ = v___x_655_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
return v___x_658_;
}
}
}
}
else
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_668_; 
lean_dec(v_a_638_);
lean_dec_ref(v_f_633_);
v_a_661_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_668_ == 0)
{
v___x_663_ = v___x_640_;
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_640_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
if (v_isShared_664_ == 0)
{
v___x_666_ = v___x_663_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_661_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec_ref(v_f_633_);
v_a_669_ = lean_ctor_get(v___x_637_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_637_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_637_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_637_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed(lean_object* v_f_677_, lean_object* v_args_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0(v_f_677_, v_args_678_);
lean_dec_ref(v_args_678_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn(lean_object* v_f_681_){
_start:
{
lean_object* v___f_683_; lean_object* v___x_684_; 
v___f_683_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_683_, 0, v_f_681_);
v___x_684_ = l_Lasm_JS_Function_ofSyncFn(v___f_683_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_686_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
lean_inc(v_a_685_);
lean_dec_ref_known(v___x_684_, 1);
v___x_686_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_689_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_687_, v___x_688_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v_a_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___y_698_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; uint8_t v___x_729_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___x_689_, 1);
v___x_691_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_692_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_685_);
v___x_693_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_693_, 0, v_a_685_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = lean_mk_string_unchecked("length", 6, 6);
v___x_695_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_695_, 0, v___x_694_);
v___x_696_ = lean_mk_string_unchecked("value", 5, 5);
v___x_725_ = lean_unsigned_to_nat(2u);
v___x_726_ = lean_nat_to_int(v___x_725_);
v___x_727_ = lean_nat_abs(v___x_726_);
v___x_728_ = lean_cstr_to_nat("9007199254740991");
v___x_729_ = lean_nat_dec_le(v___x_727_, v___x_728_);
lean_dec(v___x_727_);
if (v___x_729_ == 0)
{
lean_object* v___x_730_; 
v___x_730_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_730_, 0, v___x_726_);
v___y_698_ = v___x_730_;
goto v___jp_697_;
}
else
{
double v___x_731_; lean_object* v___x_732_; 
v___x_731_ = l_Float_ofInt(v___x_726_);
lean_dec(v___x_726_);
v___x_732_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_732_, 0, v___x_731_);
v___y_698_ = v___x_732_;
goto v___jp_697_;
}
v___jp_697_:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_696_);
lean_ctor_set(v___x_699_, 1, v___y_698_);
v___x_700_ = lean_box(0);
v___x_701_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_701_, 0, v___x_699_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = l_Lasm_JS_obj(v___x_701_);
v___x_703_ = lean_unsigned_to_nat(3u);
v___x_704_ = lean_mk_empty_array_with_capacity(v___x_703_);
v___x_705_ = lean_array_push(v___x_704_, v___x_693_);
v___x_706_ = lean_array_push(v___x_705_, v___x_695_);
v___x_707_ = lean_array_push(v___x_706_, v___x_702_);
v___x_708_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(v_a_690_, v___x_691_, v___x_707_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_715_ == 0)
{
lean_object* v_unused_716_; 
v_unused_716_ = lean_ctor_get(v___x_708_, 0);
lean_dec(v_unused_716_);
v___x_710_ = v___x_708_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_dec(v___x_708_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 0, v_a_685_);
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_685_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec(v_a_685_);
v_a_717_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v___x_708_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_708_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
}
}
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec(v_a_685_);
v_a_733_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_689_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_689_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
lean_dec(v_a_685_);
v_a_741_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_686_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_686_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
v_a_749_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_684_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_684_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeHandler_ofSyncFn___boxed(lean_object* v_f_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lasm_JS_Deno_ServeHandler_ofSyncFn(v_f_757_);
return v_res_759_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeOptionsOnError(void){
_start:
{
lean_object* v___f_761_; lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v___x_764_; 
v___f_761_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed), 1, 0);
v___x_762_ = lean_mk_string_unchecked("Lasm.JS.Deno.ServeOptionsOnError", 32, 32);
v___x_763_ = 0;
v___x_764_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_764_, 0, v___f_761_);
lean_ctor_set(v___x_764_, 1, v___x_762_);
lean_ctor_set_uint8(v___x_764_, sizeof(void*)*2, v___x_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(lean_object* v_f_765_, lean_object* v___f_766_, lean_object* v_x_767_){
_start:
{
if (lean_obj_tag(v_x_767_) == 0)
{
lean_object* v___x_769_; 
lean_dec_ref(v___f_766_);
lean_dec_ref(v_f_765_);
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v_x_767_);
return v___x_769_;
}
else
{
lean_object* v_a_770_; lean_object* v___x_771_; uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v_a_770_ = lean_ctor_get(v_x_767_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v_x_767_, 1);
v___x_771_ = lean_unsigned_to_nat(0u);
v___x_772_ = 0;
v___x_773_ = lean_apply_2(v_f_765_, v_a_770_, lean_box(0));
v___x_774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_771_, v___x_772_, v___x_773_, v___f_766_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed(lean_object* v_f_775_, lean_object* v___f_776_, lean_object* v_x_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1(v_f_775_, v___f_776_, v_x_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0(lean_object* v_args_780_, lean_object* v_i_781_){
_start:
{
lean_object* v___x_783_; uint8_t v___x_784_; 
v___x_783_ = lean_array_get_size(v_args_780_);
v___x_784_ = lean_nat_dec_lt(v_i_781_, v___x_783_);
if (v___x_784_ == 0)
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = lean_box(0);
v___x_786_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_786_, 0, v___x_785_);
return v___x_786_;
}
else
{
lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_787_ = lean_array_fget_borrowed(v_args_780_, v_i_781_);
lean_inc(v___x_787_);
v___x_788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_788_, 0, v___x_787_);
return v___x_788_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0___boxed(lean_object* v_args_789_, lean_object* v_i_790_, lean_object* v_a_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0(v_args_789_, v_i_790_);
lean_dec(v_i_790_);
lean_dec_ref(v_args_789_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(lean_object* v___f_793_, lean_object* v_args_794_){
_start:
{
lean_object* v___x_796_; uint8_t v___x_797_; lean_object* v_val_799_; lean_object* v___x_802_; lean_object* v_a_803_; lean_object* v___x_805_; uint8_t v_isShared_806_; uint8_t v_isSharedCheck_810_; 
v___x_796_ = lean_unsigned_to_nat(0u);
v___x_797_ = 0;
v___x_802_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0(v_args_794_, v___x_796_);
v_a_803_ = lean_ctor_get(v___x_802_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_802_);
if (v_isSharedCheck_810_ == 0)
{
v___x_805_ = v___x_802_;
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
else
{
lean_inc(v_a_803_);
lean_dec(v___x_802_);
v___x_805_ = lean_box(0);
v_isShared_806_ = v_isSharedCheck_810_;
goto v_resetjp_804_;
}
v___jp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v_val_799_);
v___x_801_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_796_, v___x_797_, v___x_800_, v___f_793_);
return v___x_801_;
}
v_resetjp_804_:
{
lean_object* v___x_808_; 
if (v_isShared_806_ == 0)
{
lean_ctor_set_tag(v___x_805_, 1);
v___x_808_ = v___x_805_;
goto v_reusejp_807_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_a_803_);
v___x_808_ = v_reuseFailAlloc_809_;
goto v_reusejp_807_;
}
v_reusejp_807_:
{
v_val_799_ = v___x_808_;
goto v___jp_798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed(lean_object* v___f_811_, lean_object* v_args_812_, lean_object* v___y_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0(v___f_811_, v_args_812_);
lean_dec_ref(v_args_812_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(lean_object* v_f_815_){
_start:
{
lean_object* v___f_817_; lean_object* v___f_818_; lean_object* v___f_819_; lean_object* v___x_820_; 
v___f_817_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeHandler_ofFn___lam__0___boxed), 2, 0);
v___f_818_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_818_, 0, v_f_815_);
lean_closure_set(v___f_818_, 1, v___f_817_);
v___f_819_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_819_, 0, v___f_818_);
v___x_820_ = l_Lasm_JS_Function_ofFn(v___f_819_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_822_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
lean_inc(v_a_821_);
lean_dec_ref_known(v___x_820_, 1);
v___x_822_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_822_) == 0)
{
lean_object* v_a_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v_a_823_ = lean_ctor_get(v___x_822_, 0);
lean_inc(v_a_823_);
lean_dec_ref_known(v___x_822_, 1);
v___x_824_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_825_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_823_, v___x_824_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___y_834_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; uint8_t v___x_865_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_825_, 1);
v___x_827_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_828_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_821_);
v___x_829_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_829_, 0, v_a_821_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
v___x_830_ = lean_mk_string_unchecked("length", 6, 6);
v___x_831_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
v___x_832_ = lean_mk_string_unchecked("value", 5, 5);
v___x_861_ = lean_unsigned_to_nat(1u);
v___x_862_ = lean_nat_to_int(v___x_861_);
v___x_863_ = lean_nat_abs(v___x_862_);
v___x_864_ = lean_cstr_to_nat("9007199254740991");
v___x_865_ = lean_nat_dec_le(v___x_863_, v___x_864_);
lean_dec(v___x_863_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; 
v___x_866_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_866_, 0, v___x_862_);
v___y_834_ = v___x_866_;
goto v___jp_833_;
}
else
{
double v___x_867_; lean_object* v___x_868_; 
v___x_867_ = l_Float_ofInt(v___x_862_);
lean_dec(v___x_862_);
v___x_868_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_868_, 0, v___x_867_);
v___y_834_ = v___x_868_;
goto v___jp_833_;
}
v___jp_833_:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v___x_832_);
lean_ctor_set(v___x_835_, 1, v___y_834_);
v___x_836_ = lean_box(0);
v___x_837_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_837_, 0, v___x_835_);
lean_ctor_set(v___x_837_, 1, v___x_836_);
v___x_838_ = l_Lasm_JS_obj(v___x_837_);
v___x_839_ = lean_unsigned_to_nat(3u);
v___x_840_ = lean_mk_empty_array_with_capacity(v___x_839_);
v___x_841_ = lean_array_push(v___x_840_, v___x_829_);
v___x_842_ = lean_array_push(v___x_841_, v___x_831_);
v___x_843_ = lean_array_push(v___x_842_, v___x_838_);
v___x_844_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(v_a_826_, v___x_827_, v___x_843_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_851_ == 0)
{
lean_object* v_unused_852_; 
v_unused_852_ = lean_ctor_get(v___x_844_, 0);
lean_dec(v_unused_852_);
v___x_846_ = v___x_844_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_dec(v___x_844_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 0, v_a_821_);
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_821_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
else
{
lean_object* v_a_853_; lean_object* v___x_855_; uint8_t v_isShared_856_; uint8_t v_isSharedCheck_860_; 
lean_dec(v_a_821_);
v_a_853_ = lean_ctor_get(v___x_844_, 0);
v_isSharedCheck_860_ = !lean_is_exclusive(v___x_844_);
if (v_isSharedCheck_860_ == 0)
{
v___x_855_ = v___x_844_;
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
else
{
lean_inc(v_a_853_);
lean_dec(v___x_844_);
v___x_855_ = lean_box(0);
v_isShared_856_ = v_isSharedCheck_860_;
goto v_resetjp_854_;
}
v_resetjp_854_:
{
lean_object* v___x_858_; 
if (v_isShared_856_ == 0)
{
v___x_858_ = v___x_855_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_a_853_);
v___x_858_ = v_reuseFailAlloc_859_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
return v___x_858_;
}
}
}
}
}
else
{
lean_object* v_a_869_; lean_object* v___x_871_; uint8_t v_isShared_872_; uint8_t v_isSharedCheck_876_; 
lean_dec(v_a_821_);
v_a_869_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_876_ == 0)
{
v___x_871_ = v___x_825_;
v_isShared_872_ = v_isSharedCheck_876_;
goto v_resetjp_870_;
}
else
{
lean_inc(v_a_869_);
lean_dec(v___x_825_);
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
else
{
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec(v_a_821_);
v_a_877_ = lean_ctor_get(v___x_822_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_822_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_822_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_822_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
else
{
lean_object* v_a_885_; lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
v_a_885_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_892_ == 0)
{
v___x_887_ = v___x_820_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_inc(v_a_885_);
lean_dec(v___x_820_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v_a_885_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofFn___boxed(lean_object* v_f_893_, lean_object* v_a_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofFn(v_f_893_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0___redArg(lean_object* v_d_896_){
_start:
{
lean_object* v___x_898_; 
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v_d_896_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0___redArg___boxed(lean_object* v_d_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0___redArg(v_d_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0(lean_object* v_context_902_, lean_object* v_d_903_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v_d_903_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0___boxed(lean_object* v_context_906_, lean_object* v_d_907_, lean_object* v_a_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0_spec__0(v_context_906_, v_d_907_);
lean_dec_ref(v_context_906_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(lean_object* v_f_910_, lean_object* v_args_911_){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v_a_915_; lean_object* v___x_916_; 
v___x_913_ = lean_unsigned_to_nat(0u);
v___x_914_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnError_ofFn_spec__0(v_args_911_, v___x_913_);
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref(v___x_914_);
v___x_916_ = lean_apply_2(v_f_910_, v_a_915_, lean_box(0));
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_926_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_926_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_926_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_926_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
v___x_921_ = lean_mk_string_unchecked("", 0, 0);
v___x_922_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_922_, 0, v_a_917_);
lean_ctor_set(v___x_922_, 1, v___x_921_);
if (v_isShared_920_ == 0)
{
lean_ctor_set(v___x_919_, 0, v___x_922_);
v___x_924_ = v___x_919_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
}
else
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_934_; 
v_a_927_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_934_ == 0)
{
v___x_929_ = v___x_916_;
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v___x_916_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_934_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v_a_927_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed(lean_object* v_f_935_, lean_object* v_args_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0(v_f_935_, v_args_936_);
lean_dec_ref(v_args_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(lean_object* v_f_939_){
_start:
{
lean_object* v___f_941_; lean_object* v___x_942_; 
v___f_941_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_941_, 0, v_f_939_);
v___x_942_ = l_Lasm_JS_Function_ofSyncFn(v___f_941_);
if (lean_obj_tag(v___x_942_) == 0)
{
lean_object* v_a_943_; lean_object* v___x_944_; 
v_a_943_ = lean_ctor_get(v___x_942_, 0);
lean_inc(v_a_943_);
lean_dec_ref_known(v___x_942_, 1);
v___x_944_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v___x_946_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_947_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_945_, v___x_946_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___y_956_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; uint8_t v___x_987_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref_known(v___x_947_, 1);
v___x_949_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_950_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_943_);
v___x_951_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_951_, 0, v_a_943_);
lean_ctor_set(v___x_951_, 1, v___x_950_);
v___x_952_ = lean_mk_string_unchecked("length", 6, 6);
v___x_953_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_953_, 0, v___x_952_);
v___x_954_ = lean_mk_string_unchecked("value", 5, 5);
v___x_983_ = lean_unsigned_to_nat(1u);
v___x_984_ = lean_nat_to_int(v___x_983_);
v___x_985_ = lean_nat_abs(v___x_984_);
v___x_986_ = lean_cstr_to_nat("9007199254740991");
v___x_987_ = lean_nat_dec_le(v___x_985_, v___x_986_);
lean_dec(v___x_985_);
if (v___x_987_ == 0)
{
lean_object* v___x_988_; 
v___x_988_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_988_, 0, v___x_984_);
v___y_956_ = v___x_988_;
goto v___jp_955_;
}
else
{
double v___x_989_; lean_object* v___x_990_; 
v___x_989_ = l_Float_ofInt(v___x_984_);
lean_dec(v___x_984_);
v___x_990_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_990_, 0, v___x_989_);
v___y_956_ = v___x_990_;
goto v___jp_955_;
}
v___jp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_957_, 0, v___x_954_);
lean_ctor_set(v___x_957_, 1, v___y_956_);
v___x_958_ = lean_box(0);
v___x_959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = l_Lasm_JS_obj(v___x_959_);
v___x_961_ = lean_unsigned_to_nat(3u);
v___x_962_ = lean_mk_empty_array_with_capacity(v___x_961_);
v___x_963_ = lean_array_push(v___x_962_, v___x_951_);
v___x_964_ = lean_array_push(v___x_963_, v___x_953_);
v___x_965_ = lean_array_push(v___x_964_, v___x_960_);
v___x_966_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(v_a_948_, v___x_949_, v___x_965_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_973_ == 0)
{
lean_object* v_unused_974_; 
v_unused_974_ = lean_ctor_get(v___x_966_, 0);
lean_dec(v_unused_974_);
v___x_968_ = v___x_966_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_dec(v___x_966_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
lean_ctor_set(v___x_968_, 0, v_a_943_);
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_943_);
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
lean_dec(v_a_943_);
v_a_975_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_966_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_966_);
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
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec(v_a_943_);
v_a_991_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_947_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_947_);
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
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec(v_a_943_);
v_a_999_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_944_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_944_);
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
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_942_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_942_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_942_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_942_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn___boxed(lean_object* v_f_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lasm_JS_Deno_ServeOptionsOnError_ofSyncFn(v_f_1015_);
return v_res_1017_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instFromJSServeOptionsOnListen(void){
_start:
{
lean_object* v___f_1019_; lean_object* v___x_1020_; uint8_t v___x_1021_; lean_object* v___x_1022_; 
v___f_1019_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instFromJSServeHandlerInfo___lam__0___boxed), 1, 0);
v___x_1020_ = lean_mk_string_unchecked("Lasm.JS.Deno.ServeOptionsOnListen", 33, 33);
v___x_1021_ = 0;
v___x_1022_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1022_, 0, v___f_1019_);
lean_ctor_set(v___x_1022_, 1, v___x_1020_);
lean_ctor_set_uint8(v___x_1022_, sizeof(void*)*2, v___x_1021_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(lean_object* v_x_1023_){
_start:
{
if (lean_obj_tag(v_x_1023_) == 0)
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1033_; 
v_a_1025_ = lean_ctor_get(v_x_1023_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v_x_1023_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1027_ = v_x_1023_;
v_isShared_1028_ = v_isSharedCheck_1033_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v_x_1023_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1033_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
return v___x_1031_;
}
}
}
else
{
lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1042_; 
v_isSharedCheck_1042_ = !lean_is_exclusive(v_x_1023_);
if (v_isSharedCheck_1042_ == 0)
{
lean_object* v_unused_1043_; 
v_unused_1043_ = lean_ctor_get(v_x_1023_, 0);
lean_dec(v_unused_1043_);
v___x_1035_ = v_x_1023_;
v_isShared_1036_ = v_isSharedCheck_1042_;
goto v_resetjp_1034_;
}
else
{
lean_dec(v_x_1023_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1042_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1037_; lean_object* v___x_1039_; 
v___x_1037_ = lean_box(0);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 0, v___x_1037_);
v___x_1039_ = v___x_1035_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v___x_1037_);
v___x_1039_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
return v___x_1040_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed(lean_object* v_x_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0(v_x_1044_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(lean_object* v_f_1047_, lean_object* v___f_1048_, lean_object* v_x_1049_){
_start:
{
if (lean_obj_tag(v_x_1049_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1059_; 
lean_dec_ref(v___f_1048_);
lean_dec_ref(v_f_1047_);
v_a_1051_ = lean_ctor_get(v_x_1049_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v_x_1049_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1053_ = v_x_1049_;
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v_x_1049_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1059_;
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
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; 
v___x_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1056_);
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1060_; lean_object* v___x_1061_; uint8_t v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
v_a_1060_ = lean_ctor_get(v_x_1049_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v_x_1049_, 1);
v___x_1061_ = lean_unsigned_to_nat(0u);
v___x_1062_ = 0;
v___x_1063_ = lean_apply_2(v_f_1047_, v_a_1060_, lean_box(0));
v___x_1064_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1061_, v___x_1062_, v___x_1063_, v___f_1048_);
return v___x_1064_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed(lean_object* v_f_1065_, lean_object* v___f_1066_, lean_object* v_x_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1(v_f_1065_, v___f_1066_, v_x_1067_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(lean_object* v_d_1070_, lean_object* v_key_1071_){
_start:
{
if (lean_obj_tag(v_d_1070_) == 8)
{
lean_object* v___x_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1116_; 
v___x_1072_ = l_Lasm_JS_Data_field(v_d_1070_, v_key_1071_);
v_isSharedCheck_1116_ = !lean_is_exclusive(v_d_1070_);
if (v_isSharedCheck_1116_ == 0)
{
lean_object* v_unused_1117_; 
v_unused_1117_ = lean_ctor_get(v_d_1070_, 0);
lean_dec(v_unused_1117_);
v___x_1074_ = v_d_1070_;
v_isShared_1075_ = v_isSharedCheck_1116_;
goto v_resetjp_1073_;
}
else
{
lean_dec(v_d_1070_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1116_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v_a_1077_; lean_object* v_a_1103_; 
switch(lean_obj_tag(v___x_1072_))
{
case 3:
{
double v_n_1110_; lean_object* v___x_1111_; 
v_n_1110_ = lean_ctor_get_float(v___x_1072_, 0);
v___x_1111_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1110_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_mk_string_unchecked("not an integer", 14, 14);
v_a_1077_ = v___x_1112_;
goto v___jp_1076_;
}
else
{
lean_object* v_val_1113_; 
v_val_1113_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_val_1113_);
lean_dec_ref_known(v___x_1111_, 1);
v_a_1103_ = v_val_1113_;
goto v___jp_1102_;
}
}
case 5:
{
lean_object* v_i_1114_; 
v_i_1114_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_i_1114_);
v_a_1103_ = v_i_1114_;
goto v___jp_1102_;
}
default: 
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_mk_string_unchecked("", 0, 0);
v_a_1077_ = v___x_1115_;
goto v___jp_1076_;
}
}
v___jp_1076_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v___x_1078_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_1079_ = lean_string_append(v___x_1078_, v_key_1071_);
v___x_1080_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_1081_ = lean_string_append(v___x_1079_, v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = lean_mk_string_unchecked("Nat", 3, 3);
v___x_1083_ = lean_string_append(v___x_1081_, v___x_1082_);
lean_dec_ref(v___x_1082_);
v___x_1084_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_1085_ = lean_string_append(v___x_1083_, v___x_1084_);
lean_dec_ref(v___x_1084_);
v___x_1086_ = l_Lasm_JS_Data_describe(v___x_1072_);
v___x_1087_ = lean_string_append(v___x_1085_, v___x_1086_);
lean_dec_ref(v___x_1086_);
v___x_1088_ = lean_string_utf8_byte_size(v_a_1077_);
v___x_1089_ = lean_unsigned_to_nat(0u);
v___x_1090_ = lean_nat_dec_eq(v___x_1088_, v___x_1089_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1097_; 
v___x_1091_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_1092_ = lean_string_append(v___x_1091_, v_a_1077_);
v___x_1093_ = lean_mk_string_unchecked(")", 1, 1);
v___x_1094_ = lean_string_append(v___x_1092_, v___x_1093_);
lean_dec_ref(v___x_1093_);
v___x_1095_ = lean_string_append(v___x_1087_, v___x_1094_);
lean_dec_ref(v___x_1094_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set_tag(v___x_1074_, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1095_);
v___x_1097_ = v___x_1074_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
else
{
lean_object* v___x_1100_; 
if (v_isShared_1075_ == 0)
{
lean_ctor_set_tag(v___x_1074_, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1087_);
v___x_1100_ = v___x_1074_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1087_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
v___jp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; uint8_t v___x_1106_; 
v___x_1104_ = lean_unsigned_to_nat(0u);
v___x_1105_ = lean_nat_to_int(v___x_1104_);
v___x_1106_ = lean_int_dec_le(v___x_1105_, v_a_1103_);
lean_dec(v___x_1105_);
if (v___x_1106_ == 0)
{
lean_object* v___x_1107_; 
lean_dec(v_a_1103_);
v___x_1107_ = lean_mk_string_unchecked("negative", 8, 8);
v_a_1077_ = v___x_1107_;
goto v___jp_1076_;
}
else
{
lean_object* v___x_1108_; lean_object* v___x_1109_; 
lean_del_object(v___x_1074_);
lean_dec(v___x_1072_);
v___x_1108_ = l_Int_toNat(v_a_1103_);
lean_dec(v_a_1103_);
v___x_1109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1108_);
return v___x_1109_;
}
}
}
}
else
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
lean_dec(v_d_1070_);
v___x_1118_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
return v___x_1119_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3___boxed(lean_object* v_d_1120_, lean_object* v_key_1121_){
_start:
{
lean_object* v_res_1122_; 
v_res_1122_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1120_, v_key_1121_);
lean_dec_ref(v_key_1121_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(lean_object* v_d_1123_, lean_object* v_key_1124_){
_start:
{
if (lean_obj_tag(v_d_1123_) == 8)
{
lean_object* v___x_1125_; lean_object* v___x_1127_; uint8_t v_isShared_1128_; uint8_t v_isSharedCheck_1159_; 
v___x_1125_ = l_Lasm_JS_Data_field(v_d_1123_, v_key_1124_);
v_isSharedCheck_1159_ = !lean_is_exclusive(v_d_1123_);
if (v_isSharedCheck_1159_ == 0)
{
lean_object* v_unused_1160_; 
v_unused_1160_ = lean_ctor_get(v_d_1123_, 0);
lean_dec(v_unused_1160_);
v___x_1127_ = v_d_1123_;
v_isShared_1128_ = v_isSharedCheck_1159_;
goto v_resetjp_1126_;
}
else
{
lean_dec(v_d_1123_);
v___x_1127_ = lean_box(0);
v_isShared_1128_ = v_isSharedCheck_1159_;
goto v_resetjp_1126_;
}
v_resetjp_1126_:
{
if (lean_obj_tag(v___x_1125_) == 4)
{
lean_object* v_s_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_del_object(v___x_1127_);
v_s_1129_ = lean_ctor_get(v___x_1125_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1125_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1125_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_s_1129_);
lean_dec(v___x_1125_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set_tag(v___x_1131_, 1);
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_s_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
}
else
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; uint8_t v___x_1150_; 
v___x_1137_ = lean_mk_string_unchecked("not a string", 12, 12);
v___x_1138_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_1139_ = lean_string_append(v___x_1138_, v_key_1124_);
v___x_1140_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_1141_ = lean_string_append(v___x_1139_, v___x_1140_);
lean_dec_ref(v___x_1140_);
v___x_1142_ = lean_mk_string_unchecked("Lasm.JS.Deno.NetAddrTransport", 29, 29);
v___x_1143_ = lean_string_append(v___x_1141_, v___x_1142_);
lean_dec_ref(v___x_1142_);
v___x_1144_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_1145_ = lean_string_append(v___x_1143_, v___x_1144_);
lean_dec_ref(v___x_1144_);
v___x_1146_ = l_Lasm_JS_Data_describe(v___x_1125_);
v___x_1147_ = lean_string_append(v___x_1145_, v___x_1146_);
lean_dec_ref(v___x_1146_);
v___x_1148_ = lean_string_utf8_byte_size(v___x_1137_);
lean_dec_ref(v___x_1137_);
v___x_1149_ = lean_unsigned_to_nat(0u);
v___x_1150_ = lean_nat_dec_eq(v___x_1148_, v___x_1149_);
if (v___x_1150_ == 0)
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1154_; 
v___x_1151_ = lean_mk_string_unchecked(" (not a string)", 15, 15);
v___x_1152_ = lean_string_append(v___x_1147_, v___x_1151_);
lean_dec_ref(v___x_1151_);
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1152_);
v___x_1154_ = v___x_1127_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v___x_1152_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
else
{
lean_object* v___x_1157_; 
if (v_isShared_1128_ == 0)
{
lean_ctor_set_tag(v___x_1127_, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1147_);
v___x_1157_ = v___x_1127_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v___x_1147_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
}
else
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
lean_dec(v_d_1123_);
v___x_1161_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_1162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1161_);
return v___x_1162_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1163_, lean_object* v_key_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1163_, v_key_1164_);
lean_dec_ref(v_key_1164_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(lean_object* v_d_1166_, lean_object* v_key_1167_){
_start:
{
if (lean_obj_tag(v_d_1166_) == 8)
{
lean_object* v___x_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1202_; 
v___x_1168_ = l_Lasm_JS_Data_field(v_d_1166_, v_key_1167_);
v_isSharedCheck_1202_ = !lean_is_exclusive(v_d_1166_);
if (v_isSharedCheck_1202_ == 0)
{
lean_object* v_unused_1203_; 
v_unused_1203_ = lean_ctor_get(v_d_1166_, 0);
lean_dec(v_unused_1203_);
v___x_1170_ = v_d_1166_;
v_isShared_1171_ = v_isSharedCheck_1202_;
goto v_resetjp_1169_;
}
else
{
lean_dec(v_d_1166_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1202_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
if (lean_obj_tag(v___x_1168_) == 4)
{
lean_object* v_s_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_del_object(v___x_1170_);
v_s_1172_ = lean_ctor_get(v___x_1168_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1168_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1168_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_s_1172_);
lean_dec(v___x_1168_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
lean_ctor_set_tag(v___x_1174_, 1);
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_s_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; 
v___x_1180_ = lean_mk_string_unchecked("", 0, 0);
v___x_1181_ = lean_mk_string_unchecked("field ", 6, 6);
v___x_1182_ = lean_string_append(v___x_1181_, v_key_1167_);
v___x_1183_ = lean_mk_string_unchecked(": expected ", 11, 11);
v___x_1184_ = lean_string_append(v___x_1182_, v___x_1183_);
lean_dec_ref(v___x_1183_);
v___x_1185_ = lean_mk_string_unchecked("String", 6, 6);
v___x_1186_ = lean_string_append(v___x_1184_, v___x_1185_);
lean_dec_ref(v___x_1185_);
v___x_1187_ = lean_mk_string_unchecked(", received ", 11, 11);
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1187_);
v___x_1189_ = l_Lasm_JS_Data_describe(v___x_1168_);
v___x_1190_ = lean_string_append(v___x_1188_, v___x_1189_);
lean_dec_ref(v___x_1189_);
v___x_1191_ = lean_string_utf8_byte_size(v___x_1180_);
lean_dec_ref(v___x_1180_);
v___x_1192_ = lean_unsigned_to_nat(0u);
v___x_1193_ = lean_nat_dec_eq(v___x_1191_, v___x_1192_);
if (v___x_1193_ == 0)
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1194_ = lean_mk_string_unchecked(" ()", 3, 3);
v___x_1195_ = lean_string_append(v___x_1190_, v___x_1194_);
lean_dec_ref(v___x_1194_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set_tag(v___x_1170_, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1195_);
v___x_1197_ = v___x_1170_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
else
{
lean_object* v___x_1200_; 
if (v_isShared_1171_ == 0)
{
lean_ctor_set_tag(v___x_1170_, 0);
lean_ctor_set(v___x_1170_, 0, v___x_1190_);
v___x_1200_ = v___x_1170_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v___x_1190_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
else
{
lean_object* v___x_1204_; lean_object* v___x_1205_; 
lean_dec(v_d_1166_);
v___x_1204_ = lean_mk_string_unchecked("expected an object", 18, 18);
v___x_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
return v___x_1205_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1206_, lean_object* v_key_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1206_, v_key_1207_);
lean_dec_ref(v_key_1207_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(lean_object* v_context_1209_, lean_object* v_d_1210_){
_start:
{
lean_object* v___y_1213_; lean_object* v___y_1214_; lean_object* v___y_1219_; lean_object* v_received_1220_; lean_object* v___y_1239_; lean_object* v_a_1242_; lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = lean_mk_string_unchecked("transport", 9, 9);
lean_inc(v_d_1210_);
v___x_1272_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__1(v_d_1210_, v___x_1271_);
lean_dec_ref(v___x_1271_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1273_);
lean_dec_ref_known(v___x_1272_, 1);
v_a_1242_ = v_a_1273_;
goto v___jp_1241_;
}
else
{
lean_object* v_a_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v_a_1274_ = lean_ctor_get(v___x_1272_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1272_, 1);
v___x_1275_ = lean_mk_string_unchecked("hostname", 8, 8);
lean_inc(v_d_1210_);
v___x_1276_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__2(v_d_1210_, v___x_1275_);
lean_dec_ref(v___x_1275_);
if (lean_obj_tag(v___x_1276_) == 0)
{
lean_object* v_a_1277_; 
lean_dec(v_a_1274_);
v_a_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v_a_1242_ = v_a_1277_;
goto v___jp_1241_;
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
v_a_1278_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_a_1278_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1279_ = lean_mk_string_unchecked("port", 4, 4);
lean_inc(v_d_1210_);
v___x_1280_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0_spec__3(v_d_1210_, v___x_1279_);
lean_dec_ref(v___x_1279_);
if (lean_obj_tag(v___x_1280_) == 0)
{
lean_object* v_a_1281_; 
lean_dec(v_a_1278_);
lean_dec(v_a_1274_);
v_a_1281_ = lean_ctor_get(v___x_1280_, 0);
lean_inc(v_a_1281_);
lean_dec_ref_known(v___x_1280_, 1);
v_a_1242_ = v_a_1281_;
goto v___jp_1241_;
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1290_; 
lean_dec(v_d_1210_);
v_a_1282_ = lean_ctor_get(v___x_1280_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1280_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1284_ = v___x_1280_;
v_isShared_1285_ = v_isSharedCheck_1290_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1280_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1290_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1286_; lean_object* v___x_1288_; 
v___x_1286_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1286_, 0, v_a_1274_);
lean_ctor_set(v___x_1286_, 1, v_a_1278_);
lean_ctor_set(v___x_1286_, 2, v_a_1282_);
if (v_isShared_1285_ == 0)
{
lean_ctor_set_tag(v___x_1284_, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1286_);
v___x_1288_ = v___x_1284_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1286_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
v___jp_1212_:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1215_ = lean_string_append(v___y_1213_, v___y_1214_);
lean_dec_ref(v___y_1214_);
v___x_1216_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1216_, 0, v___x_1215_);
v___x_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1217_, 0, v___x_1216_);
return v___x_1217_;
}
v___jp_1218_:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; uint8_t v___x_1232_; 
v___x_1221_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_1222_ = lean_string_append(v___x_1221_, v_context_1209_);
v___x_1223_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_1224_ = lean_string_append(v___x_1222_, v___x_1223_);
lean_dec_ref(v___x_1223_);
v___x_1225_ = lean_mk_string_unchecked("Lasm.JS.Deno.NetAddr", 20, 20);
v___x_1226_ = lean_string_append(v___x_1224_, v___x_1225_);
lean_dec_ref(v___x_1225_);
v___x_1227_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_1228_ = lean_string_append(v___x_1226_, v___x_1227_);
lean_dec_ref(v___x_1227_);
v___x_1229_ = lean_string_append(v___x_1228_, v_received_1220_);
lean_dec_ref(v_received_1220_);
v___x_1230_ = lean_string_utf8_byte_size(v___y_1219_);
v___x_1231_ = lean_unsigned_to_nat(0u);
v___x_1232_ = lean_nat_dec_eq(v___x_1230_, v___x_1231_);
if (v___x_1232_ == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
v___x_1233_ = lean_mk_string_unchecked(" (", 2, 2);
v___x_1234_ = lean_string_append(v___x_1233_, v___y_1219_);
lean_dec_ref(v___y_1219_);
v___x_1235_ = lean_mk_string_unchecked(")", 1, 1);
v___x_1236_ = lean_string_append(v___x_1234_, v___x_1235_);
lean_dec_ref(v___x_1235_);
v___y_1213_ = v___x_1229_;
v___y_1214_ = v___x_1236_;
goto v___jp_1212_;
}
else
{
lean_object* v___x_1237_; 
lean_dec_ref(v___y_1219_);
v___x_1237_ = lean_mk_string_unchecked("", 0, 0);
v___y_1213_ = v___x_1229_;
v___y_1214_ = v___x_1237_;
goto v___jp_1212_;
}
}
v___jp_1238_:
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Lasm_JS_Data_describe(v_d_1210_);
v___y_1219_ = v___y_1239_;
v_received_1220_ = v___x_1240_;
goto v___jp_1218_;
}
v___jp_1241_:
{
if (lean_obj_tag(v_d_1210_) == 9)
{
lean_object* v_value_1243_; lean_object* v_description_1244_; lean_object* v___x_1245_; uint8_t v___x_1246_; 
v_value_1243_ = lean_ctor_get(v_d_1210_, 0);
v_description_1244_ = lean_ctor_get(v_d_1210_, 1);
v___x_1245_ = lean_mk_string_unchecked("", 0, 0);
v___x_1246_ = lean_string_dec_eq(v_description_1244_, v___x_1245_);
if (v___x_1246_ == 0)
{
lean_dec_ref(v___x_1245_);
v___y_1239_ = v_a_1242_;
goto v___jp_1238_;
}
else
{
lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1268_; 
lean_inc(v_value_1243_);
v_isSharedCheck_1268_ = !lean_is_exclusive(v_d_1210_);
if (v_isSharedCheck_1268_ == 0)
{
lean_object* v_unused_1269_; lean_object* v_unused_1270_; 
v_unused_1269_ = lean_ctor_get(v_d_1210_, 1);
lean_dec(v_unused_1269_);
v_unused_1270_ = lean_ctor_get(v_d_1210_, 0);
lean_dec(v_unused_1270_);
v___x_1248_ = v_d_1210_;
v_isShared_1249_ = v_isSharedCheck_1268_;
goto v_resetjp_1247_;
}
else
{
lean_dec(v_d_1210_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1268_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
uint32_t v___x_1250_; uint64_t v___x_1251_; lean_object* v___x_1253_; 
v___x_1250_ = 206;
v___x_1251_ = 0ULL;
lean_inc(v_value_1243_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 1, v___x_1245_);
v___x_1253_ = v___x_1248_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_value_1243_);
lean_ctor_set(v_reuseFailAlloc_1267_, 1, v___x_1245_);
v___x_1253_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
uint32_t v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = lasm_js_value_handle(v_value_1243_);
lean_dec(v_value_1243_);
v___x_1255_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1250_, v___x_1251_, v___x_1253_, v___x_1254_);
lean_dec_ref(v___x_1253_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; uint8_t v___x_1257_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
lean_inc(v_a_1256_);
lean_dec_ref_known(v___x_1255_, 1);
v___x_1257_ = lean_string_validate_utf8(v_a_1256_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
lean_dec(v_a_1256_);
v___x_1258_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_1259_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_1260_ = lean_unsigned_to_nat(193u);
v___x_1261_ = lean_unsigned_to_nat(46u);
v___x_1262_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_1263_ = l_mkPanicMessageWithDecl(v___x_1258_, v___x_1259_, v___x_1260_, v___x_1261_, v___x_1262_);
lean_dec_ref(v___x_1262_);
lean_dec_ref(v___x_1259_);
lean_dec_ref(v___x_1258_);
v___x_1264_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1263_);
v___y_1219_ = v_a_1242_;
v_received_1220_ = v___x_1264_;
goto v___jp_1218_;
}
else
{
lean_object* v___x_1265_; 
v___x_1265_ = lean_string_from_utf8_unchecked(v_a_1256_);
v___y_1219_ = v_a_1242_;
v_received_1220_ = v___x_1265_;
goto v___jp_1218_;
}
}
else
{
lean_object* v___x_1266_; 
lean_dec_ref_known(v___x_1255_, 1);
v___x_1266_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v___y_1219_ = v_a_1242_;
v_received_1220_ = v___x_1266_;
goto v___jp_1218_;
}
}
}
}
}
else
{
v___y_1239_ = v_a_1242_;
goto v___jp_1238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0___boxed(lean_object* v_context_1291_, lean_object* v_d_1292_, lean_object* v_a_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v_context_1291_, v_d_1292_);
lean_dec_ref(v_context_1291_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(lean_object* v_args_1295_, lean_object* v_i_1296_){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; uint8_t v___x_1304_; 
v___x_1298_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_1299_ = lean_unsigned_to_nat(1u);
v___x_1300_ = lean_nat_add(v_i_1296_, v___x_1299_);
v___x_1301_ = l_Nat_reprFast(v___x_1300_);
v___x_1302_ = lean_string_append(v___x_1298_, v___x_1301_);
lean_dec_ref(v___x_1301_);
v___x_1303_ = lean_array_get_size(v_args_1295_);
v___x_1304_ = lean_nat_dec_lt(v_i_1296_, v___x_1303_);
if (v___x_1304_ == 0)
{
lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1305_ = lean_box(0);
v___x_1306_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1302_, v___x_1305_);
lean_dec_ref(v___x_1302_);
return v___x_1306_;
}
else
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = lean_array_fget_borrowed(v_args_1295_, v_i_1296_);
lean_inc(v___x_1307_);
v___x_1308_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0_spec__0(v___x_1302_, v___x_1307_);
lean_dec_ref(v___x_1302_);
return v___x_1308_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0___boxed(lean_object* v_args_1309_, lean_object* v_i_1310_, lean_object* v_a_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1309_, v_i_1310_);
lean_dec(v_i_1310_);
lean_dec_ref(v_args_1309_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(lean_object* v___f_1313_, lean_object* v_args_1314_){
_start:
{
lean_object* v___x_1316_; uint8_t v___x_1317_; lean_object* v_val_1319_; lean_object* v___x_1322_; 
v___x_1316_ = lean_unsigned_to_nat(0u);
v___x_1317_ = 0;
v___x_1322_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1314_, v___x_1316_);
if (lean_obj_tag(v___x_1322_) == 0)
{
lean_object* v_a_1323_; lean_object* v___x_1325_; uint8_t v_isShared_1326_; uint8_t v_isSharedCheck_1330_; 
v_a_1323_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1325_ = v___x_1322_;
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
else
{
lean_inc(v_a_1323_);
lean_dec(v___x_1322_);
v___x_1325_ = lean_box(0);
v_isShared_1326_ = v_isSharedCheck_1330_;
goto v_resetjp_1324_;
}
v_resetjp_1324_:
{
lean_object* v___x_1328_; 
if (v_isShared_1326_ == 0)
{
lean_ctor_set_tag(v___x_1325_, 1);
v___x_1328_ = v___x_1325_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v_a_1323_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
v_val_1319_ = v___x_1328_;
goto v___jp_1318_;
}
}
}
else
{
lean_object* v_a_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1338_; 
v_a_1331_ = lean_ctor_get(v___x_1322_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1333_ = v___x_1322_;
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_a_1331_);
lean_dec(v___x_1322_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1338_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v___x_1336_; 
if (v_isShared_1334_ == 0)
{
lean_ctor_set_tag(v___x_1333_, 0);
v___x_1336_ = v___x_1333_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v_a_1331_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
v_val_1319_ = v___x_1336_;
goto v___jp_1318_;
}
}
}
v___jp_1318_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1320_, 0, v_val_1319_);
v___x_1321_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1316_, v___x_1317_, v___x_1320_, v___f_1313_);
return v___x_1321_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed(lean_object* v___f_1339_, lean_object* v_args_1340_, lean_object* v___y_1341_){
_start:
{
lean_object* v_res_1342_; 
v_res_1342_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2(v___f_1339_, v_args_1340_);
lean_dec_ref(v_args_1340_);
return v_res_1342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(lean_object* v_f_1343_){
_start:
{
lean_object* v___f_1345_; lean_object* v___f_1346_; lean_object* v___f_1347_; lean_object* v___x_1348_; 
v___f_1345_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__0___boxed), 2, 0);
v___f_1346_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1346_, 0, v_f_1343_);
lean_closure_set(v___f_1346_, 1, v___f_1345_);
v___f_1347_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1347_, 0, v___f_1346_);
v___x_1348_ = l_Lasm_JS_Function_ofFn(v___f_1347_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; lean_object* v___x_1350_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v___x_1350_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_a_1351_);
lean_dec_ref_known(v___x_1350_, 1);
v___x_1352_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1353_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1351_, v___x_1352_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___y_1362_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; uint8_t v___x_1393_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v___x_1353_, 1);
v___x_1355_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1356_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1349_);
v___x_1357_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1357_, 0, v_a_1349_);
lean_ctor_set(v___x_1357_, 1, v___x_1356_);
v___x_1358_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1359_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
v___x_1360_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1389_ = lean_unsigned_to_nat(1u);
v___x_1390_ = lean_nat_to_int(v___x_1389_);
v___x_1391_ = lean_nat_abs(v___x_1390_);
v___x_1392_ = lean_cstr_to_nat("9007199254740991");
v___x_1393_ = lean_nat_dec_le(v___x_1391_, v___x_1392_);
lean_dec(v___x_1391_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; 
v___x_1394_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1394_, 0, v___x_1390_);
v___y_1362_ = v___x_1394_;
goto v___jp_1361_;
}
else
{
double v___x_1395_; lean_object* v___x_1396_; 
v___x_1395_ = l_Float_ofInt(v___x_1390_);
lean_dec(v___x_1390_);
v___x_1396_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1396_, 0, v___x_1395_);
v___y_1362_ = v___x_1396_;
goto v___jp_1361_;
}
v___jp_1361_:
{
lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1360_);
lean_ctor_set(v___x_1363_, 1, v___y_1362_);
v___x_1364_ = lean_box(0);
v___x_1365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1365_, 0, v___x_1363_);
lean_ctor_set(v___x_1365_, 1, v___x_1364_);
v___x_1366_ = l_Lasm_JS_obj(v___x_1365_);
v___x_1367_ = lean_unsigned_to_nat(3u);
v___x_1368_ = lean_mk_empty_array_with_capacity(v___x_1367_);
v___x_1369_ = lean_array_push(v___x_1368_, v___x_1357_);
v___x_1370_ = lean_array_push(v___x_1369_, v___x_1359_);
v___x_1371_ = lean_array_push(v___x_1370_, v___x_1366_);
v___x_1372_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(v_a_1354_, v___x_1355_, v___x_1371_);
if (lean_obj_tag(v___x_1372_) == 0)
{
lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1379_; 
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1379_ == 0)
{
lean_object* v_unused_1380_; 
v_unused_1380_ = lean_ctor_get(v___x_1372_, 0);
lean_dec(v_unused_1380_);
v___x_1374_ = v___x_1372_;
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
else
{
lean_dec(v___x_1372_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1379_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v___x_1377_; 
if (v_isShared_1375_ == 0)
{
lean_ctor_set(v___x_1374_, 0, v_a_1349_);
v___x_1377_ = v___x_1374_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v_a_1349_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec(v_a_1349_);
v_a_1381_ = lean_ctor_get(v___x_1372_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1372_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1372_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1372_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
lean_dec(v_a_1349_);
v_a_1397_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1353_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1353_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1412_; 
lean_dec(v_a_1349_);
v_a_1405_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1412_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1407_ = v___x_1350_;
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1350_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1412_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1410_; 
if (v_isShared_1408_ == 0)
{
v___x_1410_ = v___x_1407_;
goto v_reusejp_1409_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_a_1405_);
v___x_1410_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1409_;
}
v_reusejp_1409_:
{
return v___x_1410_;
}
}
}
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
v_a_1413_ = lean_ctor_get(v___x_1348_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1348_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1348_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1348_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn___boxed(lean_object* v_f_1421_, lean_object* v_a_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofFn(v_f_1421_);
return v_res_1423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(lean_object* v_f_1424_, lean_object* v_args_1425_){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = lean_unsigned_to_nat(0u);
v___x_1428_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Deno_ServeOptionsOnListen_ofFn_spec__0(v_args_1425_, v___x_1427_);
if (lean_obj_tag(v___x_1428_) == 0)
{
lean_object* v_a_1429_; lean_object* v___x_1430_; 
v_a_1429_ = lean_ctor_get(v___x_1428_, 0);
lean_inc(v_a_1429_);
lean_dec_ref_known(v___x_1428_, 1);
v___x_1430_ = lean_apply_2(v_f_1424_, v_a_1429_, lean_box(0));
if (lean_obj_tag(v___x_1430_) == 0)
{
lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1438_; 
v_isSharedCheck_1438_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1438_ == 0)
{
lean_object* v_unused_1439_; 
v_unused_1439_ = lean_ctor_get(v___x_1430_, 0);
lean_dec(v_unused_1439_);
v___x_1432_ = v___x_1430_;
v_isShared_1433_ = v_isSharedCheck_1438_;
goto v_resetjp_1431_;
}
else
{
lean_dec(v___x_1430_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1438_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1434_; lean_object* v___x_1436_; 
v___x_1434_ = lean_box(0);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v___x_1434_);
v___x_1436_ = v___x_1432_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1434_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
v_a_1440_ = lean_ctor_get(v___x_1430_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1430_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1430_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1430_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec_ref(v_f_1424_);
v_a_1448_ = lean_ctor_get(v___x_1428_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1428_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1428_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1428_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed(lean_object* v_f_1456_, lean_object* v_args_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0(v_f_1456_, v_args_1457_);
lean_dec_ref(v_args_1457_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(lean_object* v_f_1460_){
_start:
{
lean_object* v___f_1462_; lean_object* v___x_1463_; 
v___f_1462_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1462_, 0, v_f_1460_);
v___x_1463_ = l_Lasm_JS_Function_ofSyncFn(v___f_1462_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; lean_object* v___x_1465_; 
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v___x_1465_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; 
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1466_);
lean_dec_ref_known(v___x_1465_, 1);
v___x_1467_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_1468_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_1466_, v___x_1467_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___y_1477_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
lean_inc(v_a_1469_);
lean_dec_ref_known(v___x_1468_, 1);
v___x_1470_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_1471_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_1464_);
v___x_1472_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1472_, 0, v_a_1464_);
lean_ctor_set(v___x_1472_, 1, v___x_1471_);
v___x_1473_ = lean_mk_string_unchecked("length", 6, 6);
v___x_1474_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1474_, 0, v___x_1473_);
v___x_1475_ = lean_mk_string_unchecked("value", 5, 5);
v___x_1504_ = lean_unsigned_to_nat(1u);
v___x_1505_ = lean_nat_to_int(v___x_1504_);
v___x_1506_ = lean_nat_abs(v___x_1505_);
v___x_1507_ = lean_cstr_to_nat("9007199254740991");
v___x_1508_ = lean_nat_dec_le(v___x_1506_, v___x_1507_);
lean_dec(v___x_1506_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1505_);
v___y_1477_ = v___x_1509_;
goto v___jp_1476_;
}
else
{
double v___x_1510_; lean_object* v___x_1511_; 
v___x_1510_ = l_Float_ofInt(v___x_1505_);
lean_dec(v___x_1505_);
v___x_1511_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1511_, 0, v___x_1510_);
v___y_1477_ = v___x_1511_;
goto v___jp_1476_;
}
v___jp_1476_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v___x_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1475_);
lean_ctor_set(v___x_1478_, 1, v___y_1477_);
v___x_1479_ = lean_box(0);
v___x_1480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1480_, 0, v___x_1478_);
lean_ctor_set(v___x_1480_, 1, v___x_1479_);
v___x_1481_ = l_Lasm_JS_obj(v___x_1480_);
v___x_1482_ = lean_unsigned_to_nat(3u);
v___x_1483_ = lean_mk_empty_array_with_capacity(v___x_1482_);
v___x_1484_ = lean_array_push(v___x_1483_, v___x_1472_);
v___x_1485_ = lean_array_push(v___x_1484_, v___x_1474_);
v___x_1486_ = lean_array_push(v___x_1485_, v___x_1481_);
v___x_1487_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_ServeHandler_ofFn_spec__2(v_a_1469_, v___x_1470_, v___x_1486_);
if (lean_obj_tag(v___x_1487_) == 0)
{
lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1494_ == 0)
{
lean_object* v_unused_1495_; 
v_unused_1495_ = lean_ctor_get(v___x_1487_, 0);
lean_dec(v_unused_1495_);
v___x_1489_ = v___x_1487_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_dec(v___x_1487_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 0, v_a_1464_);
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1464_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
else
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1503_; 
lean_dec(v_a_1464_);
v_a_1496_ = lean_ctor_get(v___x_1487_, 0);
v_isSharedCheck_1503_ = !lean_is_exclusive(v___x_1487_);
if (v_isSharedCheck_1503_ == 0)
{
v___x_1498_ = v___x_1487_;
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1487_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1503_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
lean_object* v___x_1501_; 
if (v_isShared_1499_ == 0)
{
v___x_1501_ = v___x_1498_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_a_1496_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
return v___x_1501_;
}
}
}
}
}
else
{
lean_object* v_a_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1519_; 
lean_dec(v_a_1464_);
v_a_1512_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1519_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1519_ == 0)
{
v___x_1514_ = v___x_1468_;
v_isShared_1515_ = v_isSharedCheck_1519_;
goto v_resetjp_1513_;
}
else
{
lean_inc(v_a_1512_);
lean_dec(v___x_1468_);
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
else
{
lean_object* v_a_1520_; lean_object* v___x_1522_; uint8_t v_isShared_1523_; uint8_t v_isSharedCheck_1527_; 
lean_dec(v_a_1464_);
v_a_1520_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1527_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1527_ == 0)
{
v___x_1522_ = v___x_1465_;
v_isShared_1523_ = v_isSharedCheck_1527_;
goto v_resetjp_1521_;
}
else
{
lean_inc(v_a_1520_);
lean_dec(v___x_1465_);
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
else
{
lean_object* v_a_1528_; lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1535_; 
v_a_1528_ = lean_ctor_get(v___x_1463_, 0);
v_isSharedCheck_1535_ = !lean_is_exclusive(v___x_1463_);
if (v_isSharedCheck_1535_ == 0)
{
v___x_1530_ = v___x_1463_;
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
else
{
lean_inc(v_a_1528_);
lean_dec(v___x_1463_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1535_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
lean_object* v___x_1533_; 
if (v_isShared_1531_ == 0)
{
v___x_1533_ = v___x_1530_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1534_; 
v_reuseFailAlloc_1534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1534_, 0, v_a_1528_);
v___x_1533_ = v_reuseFailAlloc_1534_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
return v___x_1533_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn___boxed(lean_object* v_f_1536_, lean_object* v_a_1537_){
_start:
{
lean_object* v_res_1538_; 
v_res_1538_ = l_Lasm_JS_Deno_ServeOptionsOnListen_ofSyncFn(v_f_1536_);
return v_res_1538_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0(lean_object* v___f_1539_, lean_object* v___f_1540_, lean_object* v___f_1541_, lean_object* v___f_1542_, lean_object* v___f_1543_, lean_object* v___f_1544_, lean_object* v___f_1545_, lean_object* v_d_1546_){
_start:
{
lean_object* v_signal_1547_; lean_object* v_onError_1548_; lean_object* v_onListen_1549_; lean_object* v_automaticCompression_1550_; lean_object* v_transport_1551_; lean_object* v_port_1552_; lean_object* v_hostname_1553_; lean_object* v_reusePort_1554_; lean_object* v_tcpBacklog_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; 
v_signal_1547_ = lean_ctor_get(v_d_1546_, 0);
lean_inc(v_signal_1547_);
v_onError_1548_ = lean_ctor_get(v_d_1546_, 1);
lean_inc(v_onError_1548_);
v_onListen_1549_ = lean_ctor_get(v_d_1546_, 2);
lean_inc(v_onListen_1549_);
v_automaticCompression_1550_ = lean_ctor_get(v_d_1546_, 3);
lean_inc(v_automaticCompression_1550_);
v_transport_1551_ = lean_ctor_get(v_d_1546_, 4);
lean_inc(v_transport_1551_);
v_port_1552_ = lean_ctor_get(v_d_1546_, 5);
lean_inc(v_port_1552_);
v_hostname_1553_ = lean_ctor_get(v_d_1546_, 6);
lean_inc(v_hostname_1553_);
v_reusePort_1554_ = lean_ctor_get(v_d_1546_, 7);
lean_inc(v_reusePort_1554_);
v_tcpBacklog_1555_ = lean_ctor_get(v_d_1546_, 8);
lean_inc(v_tcpBacklog_1555_);
lean_dec_ref(v_d_1546_);
v___x_1556_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1557_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1539_, v_signal_1547_);
v___x_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1556_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = lean_mk_string_unchecked("onError", 7, 7);
v___x_1560_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1540_, v_onError_1548_);
v___x_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1559_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = lean_mk_string_unchecked("onListen", 8, 8);
v___x_1563_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1541_, v_onListen_1549_);
v___x_1564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1562_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
v___x_1565_ = lean_mk_string_unchecked("automaticCompression", 20, 20);
lean_inc_ref(v___f_1542_);
v___x_1566_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1542_, v_automaticCompression_1550_);
v___x_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1567_, 0, v___x_1565_);
lean_ctor_set(v___x_1567_, 1, v___x_1566_);
v___x_1568_ = lean_mk_string_unchecked("transport", 9, 9);
v___x_1569_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1543_, v_transport_1551_);
v___x_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1568_);
lean_ctor_set(v___x_1570_, 1, v___x_1569_);
v___x_1571_ = lean_mk_string_unchecked("port", 4, 4);
lean_inc_ref(v___f_1544_);
v___x_1572_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1544_, v_port_1552_);
v___x_1573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1573_, 0, v___x_1571_);
lean_ctor_set(v___x_1573_, 1, v___x_1572_);
v___x_1574_ = lean_mk_string_unchecked("hostname", 8, 8);
v___x_1575_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1545_, v_hostname_1553_);
v___x_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1574_);
lean_ctor_set(v___x_1576_, 1, v___x_1575_);
v___x_1577_ = lean_mk_string_unchecked("reusePort", 9, 9);
v___x_1578_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1542_, v_reusePort_1554_);
v___x_1579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1577_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
v___x_1580_ = lean_mk_string_unchecked("tcpBacklog", 10, 10);
v___x_1581_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1544_, v_tcpBacklog_1555_);
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___x_1580_);
lean_ctor_set(v___x_1582_, 1, v___x_1581_);
v___x_1583_ = lean_unsigned_to_nat(9u);
v___x_1584_ = lean_mk_empty_array_with_capacity(v___x_1583_);
v___x_1585_ = lean_array_push(v___x_1584_, v___x_1558_);
v___x_1586_ = lean_array_push(v___x_1585_, v___x_1561_);
v___x_1587_ = lean_array_push(v___x_1586_, v___x_1564_);
v___x_1588_ = lean_array_push(v___x_1587_, v___x_1567_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1570_);
v___x_1590_ = lean_array_push(v___x_1589_, v___x_1573_);
v___x_1591_ = lean_array_push(v___x_1590_, v___x_1576_);
v___x_1592_ = lean_array_push(v___x_1591_, v___x_1579_);
v___x_1593_ = lean_array_push(v___x_1592_, v___x_1582_);
v___x_1594_ = l_Lasm_JS_Web_Internal_fields(v___x_1593_);
lean_dec_ref(v___x_1593_);
return v___x_1594_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSServeTcpOptions(void){
_start:
{
lean_object* v___f_1595_; lean_object* v___f_1596_; lean_object* v___f_1597_; lean_object* v___f_1598_; lean_object* v___f_1599_; lean_object* v___f_1600_; lean_object* v___f_1601_; 
v___f_1595_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1596_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0), 1, 0);
v___f_1597_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1598_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0), 1, 0);
v___f_1599_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1600_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
lean_inc_ref(v___f_1596_);
v___f_1601_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSServeTcpOptions___lam__0), 8, 7);
lean_closure_set(v___f_1601_, 0, v___f_1595_);
lean_closure_set(v___f_1601_, 1, v___f_1596_);
lean_closure_set(v___f_1601_, 2, v___f_1596_);
lean_closure_set(v___f_1601_, 3, v___f_1597_);
lean_closure_set(v___f_1601_, 4, v___f_1598_);
lean_closure_set(v___f_1601_, 5, v___f_1599_);
lean_closure_set(v___f_1601_, 6, v___f_1600_);
return v___f_1601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0(lean_object* v___f_1602_, lean_object* v___f_1603_, lean_object* v___f_1604_, lean_object* v___f_1605_, lean_object* v___f_1606_, lean_object* v___f_1607_, lean_object* v___f_1608_, lean_object* v___f_1609_, lean_object* v_d_1610_){
_start:
{
lean_object* v_signal_1611_; lean_object* v_onError_1612_; lean_object* v_onListen_1613_; lean_object* v_automaticCompression_1614_; lean_object* v_transport_1615_; lean_object* v_port_1616_; lean_object* v_hostname_1617_; lean_object* v_reusePort_1618_; lean_object* v_tcpBacklog_1619_; lean_object* v_keyFormat_1620_; lean_object* v_key_1621_; lean_object* v_cert_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_signal_1611_ = lean_ctor_get(v_d_1610_, 0);
lean_inc(v_signal_1611_);
v_onError_1612_ = lean_ctor_get(v_d_1610_, 1);
lean_inc(v_onError_1612_);
v_onListen_1613_ = lean_ctor_get(v_d_1610_, 2);
lean_inc(v_onListen_1613_);
v_automaticCompression_1614_ = lean_ctor_get(v_d_1610_, 3);
lean_inc(v_automaticCompression_1614_);
v_transport_1615_ = lean_ctor_get(v_d_1610_, 4);
lean_inc(v_transport_1615_);
v_port_1616_ = lean_ctor_get(v_d_1610_, 5);
lean_inc(v_port_1616_);
v_hostname_1617_ = lean_ctor_get(v_d_1610_, 6);
lean_inc(v_hostname_1617_);
v_reusePort_1618_ = lean_ctor_get(v_d_1610_, 7);
lean_inc(v_reusePort_1618_);
v_tcpBacklog_1619_ = lean_ctor_get(v_d_1610_, 8);
lean_inc(v_tcpBacklog_1619_);
v_keyFormat_1620_ = lean_ctor_get(v_d_1610_, 9);
lean_inc(v_keyFormat_1620_);
v_key_1621_ = lean_ctor_get(v_d_1610_, 10);
lean_inc_ref(v_key_1621_);
v_cert_1622_ = lean_ctor_get(v_d_1610_, 11);
lean_inc_ref(v_cert_1622_);
lean_dec_ref(v_d_1610_);
v___x_1623_ = lean_mk_string_unchecked("signal", 6, 6);
v___x_1624_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1602_, v_signal_1611_);
v___x_1625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1623_);
lean_ctor_set(v___x_1625_, 1, v___x_1624_);
v___x_1626_ = lean_mk_string_unchecked("onError", 7, 7);
v___x_1627_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1603_, v_onError_1612_);
v___x_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___x_1626_);
lean_ctor_set(v___x_1628_, 1, v___x_1627_);
v___x_1629_ = lean_mk_string_unchecked("onListen", 8, 8);
v___x_1630_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1604_, v_onListen_1613_);
v___x_1631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1629_);
lean_ctor_set(v___x_1631_, 1, v___x_1630_);
v___x_1632_ = lean_mk_string_unchecked("automaticCompression", 20, 20);
lean_inc_ref(v___f_1605_);
v___x_1633_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1605_, v_automaticCompression_1614_);
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1632_);
lean_ctor_set(v___x_1634_, 1, v___x_1633_);
v___x_1635_ = lean_mk_string_unchecked("transport", 9, 9);
v___x_1636_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1606_, v_transport_1615_);
v___x_1637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1637_, 0, v___x_1635_);
lean_ctor_set(v___x_1637_, 1, v___x_1636_);
v___x_1638_ = lean_mk_string_unchecked("port", 4, 4);
lean_inc_ref(v___f_1607_);
v___x_1639_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1607_, v_port_1616_);
v___x_1640_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1638_);
lean_ctor_set(v___x_1640_, 1, v___x_1639_);
v___x_1641_ = lean_mk_string_unchecked("hostname", 8, 8);
v___x_1642_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1608_, v_hostname_1617_);
v___x_1643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1643_, 0, v___x_1641_);
lean_ctor_set(v___x_1643_, 1, v___x_1642_);
v___x_1644_ = lean_mk_string_unchecked("reusePort", 9, 9);
v___x_1645_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1605_, v_reusePort_1618_);
v___x_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1646_, 0, v___x_1644_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
v___x_1647_ = lean_mk_string_unchecked("tcpBacklog", 10, 10);
v___x_1648_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1607_, v_tcpBacklog_1619_);
v___x_1649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1647_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
v___x_1650_ = lean_mk_string_unchecked("keyFormat", 9, 9);
v___x_1651_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_1609_, v_keyFormat_1620_);
v___x_1652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = lean_mk_string_unchecked("key", 3, 3);
v___x_1654_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1654_, 0, v_key_1621_);
v___x_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1653_);
lean_ctor_set(v___x_1655_, 1, v___x_1654_);
v___x_1656_ = lean_mk_string_unchecked("cert", 4, 4);
v___x_1657_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1657_, 0, v_cert_1622_);
v___x_1658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1656_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = lean_unsigned_to_nat(12u);
v___x_1660_ = lean_mk_empty_array_with_capacity(v___x_1659_);
v___x_1661_ = lean_array_push(v___x_1660_, v___x_1625_);
v___x_1662_ = lean_array_push(v___x_1661_, v___x_1628_);
v___x_1663_ = lean_array_push(v___x_1662_, v___x_1631_);
v___x_1664_ = lean_array_push(v___x_1663_, v___x_1634_);
v___x_1665_ = lean_array_push(v___x_1664_, v___x_1637_);
v___x_1666_ = lean_array_push(v___x_1665_, v___x_1640_);
v___x_1667_ = lean_array_push(v___x_1666_, v___x_1643_);
v___x_1668_ = lean_array_push(v___x_1667_, v___x_1646_);
v___x_1669_ = lean_array_push(v___x_1668_, v___x_1649_);
v___x_1670_ = lean_array_push(v___x_1669_, v___x_1652_);
v___x_1671_ = lean_array_push(v___x_1670_, v___x_1655_);
v___x_1672_ = lean_array_push(v___x_1671_, v___x_1658_);
v___x_1673_ = l_Lasm_JS_Web_Internal_fields(v___x_1672_);
lean_dec_ref(v___x_1672_);
return v___x_1673_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSServeTcpTlsOptions(void){
_start:
{
lean_object* v___f_1674_; lean_object* v___f_1675_; lean_object* v___f_1676_; lean_object* v___f_1677_; lean_object* v___f_1678_; lean_object* v___f_1679_; lean_object* v___f_1680_; 
v___f_1674_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_instToJSAbortController___lam__0), 1, 0);
v___f_1675_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSServeHandlerInfo___lam__0), 1, 0);
v___f_1676_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1677_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSNetAddrTransport___lam__0), 1, 0);
v___f_1678_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1679_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
lean_inc_ref(v___f_1677_);
lean_inc_ref(v___f_1675_);
v___f_1680_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions___lam__0), 9, 8);
lean_closure_set(v___f_1680_, 0, v___f_1674_);
lean_closure_set(v___f_1680_, 1, v___f_1675_);
lean_closure_set(v___f_1680_, 2, v___f_1675_);
lean_closure_set(v___f_1680_, 3, v___f_1676_);
lean_closure_set(v___f_1680_, 4, v___f_1677_);
lean_closure_set(v___f_1680_, 5, v___f_1678_);
lean_closure_set(v___f_1680_, 6, v___f_1679_);
lean_closure_set(v___f_1680_, 7, v___f_1677_);
return v___f_1680_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Dom(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Fetch(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno_Serve(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Types_Dom(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Deno_instFromJSServeHandlerInfo = _init_l_Lasm_JS_Deno_instFromJSServeHandlerInfo();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSServeHandlerInfo);
l_Lasm_JS_Deno_instFromJSHttpServer = _init_l_Lasm_JS_Deno_instFromJSHttpServer();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSHttpServer);
l_Lasm_JS_Deno_instFromJSNetAddrTransport = _init_l_Lasm_JS_Deno_instFromJSNetAddrTransport();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSNetAddrTransport);
l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport = _init_l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSServeTcpOptionsTransport);
l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat = _init_l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSTlsCertifiedKeyPemKeyFormat);
l_Lasm_JS_Deno_instFromJSNetAddr = _init_l_Lasm_JS_Deno_instFromJSNetAddr();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSNetAddr);
l_Lasm_JS_Deno_instFromJSServeHandler = _init_l_Lasm_JS_Deno_instFromJSServeHandler();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSServeHandler);
l_Lasm_JS_Deno_instFromJSServeOptionsOnError = _init_l_Lasm_JS_Deno_instFromJSServeOptionsOnError();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSServeOptionsOnError);
l_Lasm_JS_Deno_instFromJSServeOptionsOnListen = _init_l_Lasm_JS_Deno_instFromJSServeOptionsOnListen();
lean_mark_persistent(l_Lasm_JS_Deno_instFromJSServeOptionsOnListen);
l_Lasm_JS_Deno_instToJSServeTcpOptions = _init_l_Lasm_JS_Deno_instToJSServeTcpOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSServeTcpOptions);
l_Lasm_JS_Deno_instToJSServeTcpTlsOptions = _init_l_Lasm_JS_Deno_instToJSServeTcpTlsOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSServeTcpTlsOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
