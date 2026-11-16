// Lean compiler output
// Module: Lasm.JS.Bun.Serve
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Types.Fetch public import Lasm.JS.Web.Types.Url
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
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
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSString;
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Internal_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Internal_fields(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServer___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServer_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServer = (const lean_object*)&l_Lasm_JS_Bun_instToJSServer_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqSocketAddressFamily_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instBEqSocketAddressFamily_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprSocketAddressFamily_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily_value;
static const lean_string_object l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default = (const lean_object*)&l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default_value;
static const lean_string_object l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instInhabitedSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_value;
static const lean_string_object l_Lasm_JS_Bun_SocketAddressFamily_iPv4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "IPv4"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4 = (const lean_object*)&l_Lasm_JS_Bun_SocketAddressFamily_iPv4_value;
static const lean_string_object l_Lasm_JS_Bun_SocketAddressFamily_iPv6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "IPv6"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6 = (const lean_object*)&l_Lasm_JS_Bun_SocketAddressFamily_iPv6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSSocketAddressFamily_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerProtocol_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqServerProtocol_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instBEqServerProtocol_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprServerProtocol_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instReprServerProtocol_value;
static const lean_string_object l_Lasm_JS_Bun_instInhabitedServerProtocol_default_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instInhabitedServerProtocol_default = (const lean_object*)&l_Lasm_JS_Bun_instInhabitedServerProtocol_default_value;
static const lean_string_object l_Lasm_JS_Bun_instInhabitedServerProtocol_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instInhabitedServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instInhabitedServerProtocol_value;
static const lean_string_object l_Lasm_JS_Bun_ServerProtocol_http_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_ServerProtocol_http = (const lean_object*)&l_Lasm_JS_Bun_ServerProtocol_http_value;
static const lean_string_object l_Lasm_JS_Bun_ServerProtocol_https_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_ServerProtocol_https = (const lean_object*)&l_Lasm_JS_Bun_ServerProtocol_https_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSServerProtocol_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServerProtocol = (const lean_object*)&l_Lasm_JS_Bun_instToJSServerProtocol_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol;
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeOptionsError_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptionsError = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptionsError_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsError;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object*, lean_object*);
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
static const lean_closure_object l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort = (const lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort = (const lean_object*)&l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeOptionsFetch_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptionsFetch = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptionsFetch_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsFetch;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions;
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
static const lean_closure_object l_Lasm_JS_Bun_instToJSRequestOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString = (const lean_object*)&l_Lasm_JS_Bun_instToJSRequestOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString = (const lean_object*)&l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instCoeStringRequestOrDOMString_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString = (const lean_object*)&l_Lasm_JS_Bun_instCoeStringRequestOrDOMString_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServer___lam__0(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0(lean_object* v_x_5_){
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed(lean_object* v_x_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lasm_JS_Bun_instFromJSServer___lam__0(v_x_10_);
lean_dec(v_x_10_);
return v_res_11_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSServer(void){
_start:
{
lean_object* v___f_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; 
v___f_12_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed), 1, 0);
v___x_13_ = lean_mk_string_unchecked("Lasm.JS.Bun.Server", 18, 18);
v___x_14_ = 0;
v___x_15_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_15_, 0, v___f_12_);
lean_ctor_set(v___x_15_, 1, v___x_13_);
lean_ctor_set_uint8(v___x_15_, sizeof(void*)*2, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
uint8_t v___x_18_; 
v___x_18_ = lean_string_dec_eq(v_x_16_, v_x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq___boxed(lean_object* v_x_19_, lean_object* v_x_20_){
_start:
{
uint8_t v_res_21_; lean_object* v_r_22_; 
v_res_21_ = l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq(v_x_19_, v_x_20_);
lean_dec_ref(v_x_20_);
lean_dec_ref(v_x_19_);
v_r_22_ = lean_box(v_res_21_);
return v_r_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___redArg(lean_object* v_x_24_){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; uint8_t v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; 
v___x_25_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_26_ = lean_box(0);
v___x_27_ = lean_mk_string_unchecked("val", 3, 3);
v___x_28_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
v___x_29_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_29_, 0, v___x_26_);
lean_ctor_set(v___x_29_, 1, v___x_28_);
v___x_30_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_31_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
v___x_32_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_32_, 0, v___x_29_);
lean_ctor_set(v___x_32_, 1, v___x_31_);
v___x_33_ = lean_unsigned_to_nat(7u);
v___x_34_ = lean_nat_to_int(v___x_33_);
v___x_35_ = l_String_quote(v_x_24_);
v___x_36_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
v___x_37_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_34_);
lean_ctor_set(v___x_37_, 1, v___x_36_);
v___x_38_ = 0;
v___x_39_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_39_, 0, v___x_37_);
lean_ctor_set_uint8(v___x_39_, sizeof(void*)*1, v___x_38_);
v___x_40_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_32_);
lean_ctor_set(v___x_40_, 1, v___x_39_);
v___x_41_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_42_ = lean_string_length(v___x_25_);
v___x_43_ = lean_nat_to_int(v___x_42_);
v___x_44_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_44_, 0, v___x_25_);
v___x_45_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_40_);
v___x_46_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_41_);
v___x_47_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_47_, 0, v___x_45_);
lean_ctor_set(v___x_47_, 1, v___x_46_);
v___x_48_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_48_, 0, v___x_43_);
lean_ctor_set(v___x_48_, 1, v___x_47_);
v___x_49_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_49_, 0, v___x_48_);
lean_ctor_set_uint8(v___x_49_, sizeof(void*)*1, v___x_38_);
return v___x_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(lean_object* v_x_50_, lean_object* v_prec_51_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___redArg(v_x_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___boxed(lean_object* v_x_53_, lean_object* v_prec_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(v_x_53_, v_prec_54_);
lean_dec(v_prec_54_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0(lean_object* v_x_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_62_, 0, v_x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0(lean_object* v_x_64_){
_start:
{
if (lean_obj_tag(v_x_64_) == 4)
{
lean_object* v_s_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
v_s_65_ = lean_ctor_get(v_x_64_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v_x_64_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v_x_64_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_s_65_);
lean_dec(v_x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set_tag(v___x_67_, 1);
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_s_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
else
{
lean_object* v___x_73_; lean_object* v___x_74_; 
lean_dec(v_x_64_);
v___x_73_ = lean_mk_string_unchecked("not a string", 12, 12);
v___x_74_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_74_, 0, v___x_73_);
return v___x_74_;
}
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddressFamily(void){
_start:
{
lean_object* v___f_75_; lean_object* v___x_76_; uint8_t v___x_77_; lean_object* v___x_78_; 
v___f_75_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0), 1, 0);
v___x_76_ = lean_mk_string_unchecked("Lasm.JS.Bun.SocketAddressFamily", 31, 31);
v___x_77_ = 0;
v___x_78_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_78_, 0, v___f_75_);
lean_ctor_set(v___x_78_, 1, v___x_76_);
lean_ctor_set_uint8(v___x_78_, sizeof(void*)*2, v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerProtocol_beq(lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
uint8_t v___x_81_; 
v___x_81_ = lean_string_dec_eq(v_x_79_, v_x_80_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed(lean_object* v_x_82_, lean_object* v_x_83_){
_start:
{
uint8_t v_res_84_; lean_object* v_r_85_; 
v_res_84_ = l_Lasm_JS_Bun_instBEqServerProtocol_beq(v_x_82_, v_x_83_);
lean_dec_ref(v_x_83_);
lean_dec_ref(v_x_82_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___redArg(lean_object* v_x_87_){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; uint8_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; 
v___x_88_ = lean_mk_string_unchecked("{ ", 2, 2);
v___x_89_ = lean_box(0);
v___x_90_ = lean_mk_string_unchecked("val", 3, 3);
v___x_91_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_91_, 0, v___x_90_);
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_89_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_mk_string_unchecked(" := ", 4, 4);
v___x_94_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
v___x_95_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_95_, 0, v___x_92_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
v___x_96_ = lean_unsigned_to_nat(7u);
v___x_97_ = lean_nat_to_int(v___x_96_);
v___x_98_ = l_String_quote(v_x_87_);
v___x_99_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_99_, 0, v___x_98_);
v___x_100_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_100_, 0, v___x_97_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
v___x_101_ = 0;
v___x_102_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_102_, 0, v___x_100_);
lean_ctor_set_uint8(v___x_102_, sizeof(void*)*1, v___x_101_);
v___x_103_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_95_);
lean_ctor_set(v___x_103_, 1, v___x_102_);
v___x_104_ = lean_mk_string_unchecked(" }", 2, 2);
v___x_105_ = lean_string_length(v___x_88_);
v___x_106_ = lean_nat_to_int(v___x_105_);
v___x_107_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_88_);
v___x_108_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_103_);
v___x_109_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_104_);
v___x_110_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set(v___x_110_, 1, v___x_109_);
v___x_111_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_111_, 0, v___x_106_);
lean_ctor_set(v___x_111_, 1, v___x_110_);
v___x_112_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_112_, 0, v___x_111_);
lean_ctor_set_uint8(v___x_112_, sizeof(void*)*1, v___x_101_);
return v___x_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr(lean_object* v_x_113_, lean_object* v_prec_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lasm_JS_Bun_instReprServerProtocol_repr___redArg(v_x_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed(lean_object* v_x_116_, lean_object* v_prec_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lasm_JS_Bun_instReprServerProtocol_repr(v_x_116_, v_prec_117_);
lean_dec(v_prec_117_);
return v_res_118_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSServerProtocol(void){
_start:
{
lean_object* v___f_125_; lean_object* v___x_126_; uint8_t v___x_127_; lean_object* v___x_128_; 
v___f_125_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0), 1, 0);
v___x_126_ = lean_mk_string_unchecked("Lasm.JS.Bun.ServerProtocol", 26, 26);
v___x_127_ = 0;
v___x_128_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_128_, 0, v___f_125_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
lean_ctor_set_uint8(v___x_128_, sizeof(void*)*2, v___x_127_);
return v___x_128_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSServeOptionsError(void){
_start:
{
lean_object* v___f_130_; lean_object* v___x_131_; uint8_t v___x_132_; lean_object* v___x_133_; 
v___f_130_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed), 1, 0);
v___x_131_ = lean_mk_string_unchecked("Lasm.JS.Bun.ServeOptionsError", 29, 29);
v___x_132_ = 0;
v___x_133_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_133_, 0, v___f_130_);
lean_ctor_set(v___x_133_, 1, v___x_131_);
lean_ctor_set_uint8(v___x_133_, sizeof(void*)*2, v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(lean_object* v_x_134_){
_start:
{
if (lean_obj_tag(v_x_134_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_144_; 
v_a_136_ = lean_ctor_get(v_x_134_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v_x_134_);
if (v_isSharedCheck_144_ == 0)
{
v___x_138_ = v_x_134_;
v_isShared_139_ = v_isSharedCheck_144_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v_x_134_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_144_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_143_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_142_; 
v___x_142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
return v___x_142_;
}
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_155_; 
v_a_145_ = lean_ctor_get(v_x_134_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v_x_134_);
if (v_isSharedCheck_155_ == 0)
{
v___x_147_ = v_x_134_;
v_isShared_148_ = v_isSharedCheck_155_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v_x_134_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_155_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_149_ = lean_mk_string_unchecked("", 0, 0);
v___x_150_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_150_, 0, v_a_145_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 0, v___x_150_);
v___x_152_ = v___x_147_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_154_; 
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_154_, 0, v___x_150_);
v___x_152_ = v_reuseFailAlloc_154_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_153_; 
v___x_153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_153_, 0, v___x_152_);
return v___x_153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed(lean_object* v_x_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(v_x_156_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(lean_object* v_f_159_, lean_object* v___f_160_, lean_object* v_x_161_){
_start:
{
if (lean_obj_tag(v_x_161_) == 0)
{
lean_object* v___x_163_; 
lean_dec_ref(v___f_160_);
lean_dec_ref(v_f_159_);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_x_161_);
return v___x_163_;
}
else
{
lean_object* v_a_164_; lean_object* v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v_a_164_ = lean_ctor_get(v_x_161_, 0);
lean_inc(v_a_164_);
lean_dec_ref_known(v_x_161_, 1);
v___x_165_ = lean_unsigned_to_nat(0u);
v___x_166_ = 0;
v___x_167_ = lean_apply_2(v_f_159_, v_a_164_, lean_box(0));
v___x_168_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_165_, v___x_166_, v___x_167_, v___f_160_);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed(lean_object* v_f_169_, lean_object* v___f_170_, lean_object* v_x_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(v_f_169_, v___f_170_, v_x_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(lean_object* v_args_174_, lean_object* v_i_175_){
_start:
{
lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_177_ = lean_array_get_size(v_args_174_);
v___x_178_ = lean_nat_dec_lt(v_i_175_, v___x_177_);
if (v___x_178_ == 0)
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = lean_box(0);
v___x_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
return v___x_180_;
}
else
{
lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_181_ = lean_array_fget_borrowed(v_args_174_, v_i_175_);
lean_inc(v___x_181_);
v___x_182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_182_, 0, v___x_181_);
return v___x_182_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0___boxed(lean_object* v_args_183_, lean_object* v_i_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(v_args_183_, v_i_184_);
lean_dec(v_i_184_);
lean_dec_ref(v_args_183_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(lean_object* v___f_187_, lean_object* v_args_188_){
_start:
{
lean_object* v___x_190_; uint8_t v___x_191_; lean_object* v_val_193_; lean_object* v___x_196_; lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_204_; 
v___x_190_ = lean_unsigned_to_nat(0u);
v___x_191_ = 0;
v___x_196_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(v_args_188_, v___x_190_);
v_a_197_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_204_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_204_ == 0)
{
v___x_199_ = v___x_196_;
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_196_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_204_;
goto v_resetjp_198_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v_val_193_);
v___x_195_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_190_, v___x_191_, v___x_194_, v___f_187_);
return v___x_195_;
}
v_resetjp_198_:
{
lean_object* v___x_202_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 1);
v___x_202_ = v___x_199_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v_a_197_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
v_val_193_ = v___x_202_;
goto v___jp_192_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed(lean_object* v___f_205_, lean_object* v_args_206_, lean_object* v___y_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(v___f_205_, v_args_206_);
lean_dec_ref(v_args_206_);
return v_res_208_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1_spec__2(uint8_t v_await_209_, uint64_t v_extra_210_){
_start:
{
uint8_t v___x_211_; uint64_t v___x_212_; uint64_t v___y_214_; 
v___x_211_ = 1;
v___x_212_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_211_);
if (v_await_209_ == 0)
{
uint64_t v___x_217_; 
v___x_217_ = 0ULL;
v___y_214_ = v___x_217_;
goto v___jp_213_;
}
else
{
uint64_t v___x_218_; 
v___x_218_ = 2ULL;
v___y_214_ = v___x_218_;
goto v___jp_213_;
}
v___jp_213_:
{
uint64_t v___x_215_; uint64_t v___x_216_; 
v___x_215_ = lean_uint64_lor(v___x_212_, v___y_214_);
v___x_216_ = lean_uint64_lor(v___x_215_, v_extra_210_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1_spec__2___boxed(lean_object* v_await_219_, lean_object* v_extra_220_){
_start:
{
uint8_t v_await_boxed_221_; uint64_t v_extra_boxed_222_; uint64_t v_res_223_; lean_object* v_r_224_; 
v_await_boxed_221_ = lean_unbox(v_await_219_);
v_extra_boxed_222_ = lean_unbox_uint64(v_extra_220_);
lean_dec_ref(v_extra_220_);
v_res_223_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1_spec__2(v_await_boxed_221_, v_extra_boxed_222_);
v_r_224_ = lean_box_uint64(v_res_223_);
return v_r_224_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1(lean_object* v_o_225_, lean_object* v_name_226_, lean_object* v_args_227_){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; uint8_t v___x_232_; uint64_t v___x_233_; uint64_t v___x_234_; lean_object* v___x_235_; 
v___x_229_ = lean_mk_string_unchecked("", 0, 0);
v___x_230_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_230_, 0, v_o_225_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
lean_inc_ref(v_name_226_);
v___x_231_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_231_, 0, v_name_226_);
v___x_232_ = 0;
v___x_233_ = 8ULL;
v___x_234_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1_spec__2(v___x_232_, v___x_233_);
v___x_235_ = l_Lasm_JS_Value_invokeRaw(v___x_230_, v___x_231_, v_args_227_, v___x_234_);
if (lean_obj_tag(v___x_235_) == 0)
{
lean_object* v_a_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v_a_236_ = lean_ctor_get(v___x_235_, 0);
lean_inc(v_a_236_);
lean_dec_ref_known(v___x_235_, 1);
v___x_237_ = lean_mk_string_unchecked("method ", 7, 7);
v___x_238_ = lean_string_append(v___x_237_, v_name_226_);
lean_dec_ref(v_name_226_);
v___x_239_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_238_, v_a_236_);
lean_dec(v_a_236_);
lean_dec_ref(v___x_238_);
return v___x_239_;
}
else
{
lean_object* v_a_240_; lean_object* v___x_242_; uint8_t v_isShared_243_; uint8_t v_isSharedCheck_247_; 
lean_dec_ref(v_name_226_);
v_a_240_ = lean_ctor_get(v___x_235_, 0);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_235_);
if (v_isSharedCheck_247_ == 0)
{
v___x_242_ = v___x_235_;
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
else
{
lean_inc(v_a_240_);
lean_dec(v___x_235_);
v___x_242_ = lean_box(0);
v_isShared_243_ = v_isSharedCheck_247_;
goto v_resetjp_241_;
}
v_resetjp_241_:
{
lean_object* v___x_245_; 
if (v_isShared_243_ == 0)
{
v___x_245_ = v___x_242_;
goto v_reusejp_244_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_a_240_);
v___x_245_ = v_reuseFailAlloc_246_;
goto v_reusejp_244_;
}
v_reusejp_244_:
{
return v___x_245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1___boxed(lean_object* v_o_248_, lean_object* v_name_249_, lean_object* v_args_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1(v_o_248_, v_name_249_, v_args_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn(lean_object* v_f_253_){
_start:
{
lean_object* v___f_255_; lean_object* v___f_256_; lean_object* v___f_257_; lean_object* v___x_258_; 
v___f_255_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed), 2, 0);
v___f_256_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_256_, 0, v_f_253_);
lean_closure_set(v___f_256_, 1, v___f_255_);
v___f_257_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_257_, 0, v___f_256_);
v___x_258_ = l_Lasm_JS_Function_ofFn(v___f_257_);
if (lean_obj_tag(v___x_258_) == 0)
{
lean_object* v_a_259_; lean_object* v___x_260_; 
v_a_259_ = lean_ctor_get(v___x_258_, 0);
lean_inc(v_a_259_);
lean_dec_ref_known(v___x_258_, 1);
v___x_260_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v___x_260_, 1);
v___x_262_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_263_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_261_, v___x_262_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___y_272_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; uint8_t v___x_303_; 
v_a_264_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_a_264_);
lean_dec_ref_known(v___x_263_, 1);
v___x_265_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_266_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_259_);
v___x_267_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_267_, 0, v_a_259_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
v___x_268_ = lean_mk_string_unchecked("length", 6, 6);
v___x_269_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
v___x_270_ = lean_mk_string_unchecked("value", 5, 5);
v___x_299_ = lean_unsigned_to_nat(1u);
v___x_300_ = lean_nat_to_int(v___x_299_);
v___x_301_ = lean_nat_abs(v___x_300_);
v___x_302_ = lean_cstr_to_nat("9007199254740991");
v___x_303_ = lean_nat_dec_le(v___x_301_, v___x_302_);
lean_dec(v___x_301_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; 
v___x_304_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_300_);
v___y_272_ = v___x_304_;
goto v___jp_271_;
}
else
{
double v___x_305_; lean_object* v___x_306_; 
v___x_305_ = l_Float_ofInt(v___x_300_);
lean_dec(v___x_300_);
v___x_306_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_306_, 0, v___x_305_);
v___y_272_ = v___x_306_;
goto v___jp_271_;
}
v___jp_271_:
{
lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; 
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___x_270_);
lean_ctor_set(v___x_273_, 1, v___y_272_);
v___x_274_ = lean_box(0);
v___x_275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_273_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = l_Lasm_JS_obj(v___x_275_);
v___x_277_ = lean_unsigned_to_nat(3u);
v___x_278_ = lean_mk_empty_array_with_capacity(v___x_277_);
v___x_279_ = lean_array_push(v___x_278_, v___x_267_);
v___x_280_ = lean_array_push(v___x_279_, v___x_269_);
v___x_281_ = lean_array_push(v___x_280_, v___x_276_);
v___x_282_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1(v_a_264_, v___x_265_, v___x_281_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_289_; 
v_isSharedCheck_289_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_289_ == 0)
{
lean_object* v_unused_290_; 
v_unused_290_ = lean_ctor_get(v___x_282_, 0);
lean_dec(v_unused_290_);
v___x_284_ = v___x_282_;
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
else
{
lean_dec(v___x_282_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_289_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_287_; 
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 0, v_a_259_);
v___x_287_ = v___x_284_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v_a_259_);
v___x_287_ = v_reuseFailAlloc_288_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
return v___x_287_;
}
}
}
else
{
lean_object* v_a_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_298_; 
lean_dec(v_a_259_);
v_a_291_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_298_ == 0)
{
v___x_293_ = v___x_282_;
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_a_291_);
lean_dec(v___x_282_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_298_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_296_; 
if (v_isShared_294_ == 0)
{
v___x_296_ = v___x_293_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_a_291_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
}
}
}
else
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_314_; 
lean_dec(v_a_259_);
v_a_307_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_314_ == 0)
{
v___x_309_ = v___x_263_;
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_263_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_314_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_312_; 
if (v_isShared_310_ == 0)
{
v___x_312_ = v___x_309_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_307_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
}
else
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_dec(v_a_259_);
v_a_315_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_260_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_260_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
v_a_323_ = lean_ctor_get(v___x_258_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_258_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_258_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object* v_f_331_, lean_object* v_a_332_){
_start:
{
lean_object* v_res_333_; 
v_res_333_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn(v_f_331_);
return v_res_333_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___redArg(lean_object* v_d_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_336_, 0, v_d_334_);
return v___x_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___redArg___boxed(lean_object* v_d_337_, lean_object* v_a_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___redArg(v_d_337_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(lean_object* v_context_340_, lean_object* v_d_341_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v_d_341_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0___boxed(lean_object* v_context_344_, lean_object* v_d_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0_spec__0(v_context_344_, v_d_345_);
lean_dec_ref(v_context_344_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object* v_f_348_, lean_object* v_args_349_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v_a_353_; lean_object* v___x_354_; 
v___x_351_ = lean_unsigned_to_nat(0u);
v___x_352_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__0(v_args_349_, v___x_351_);
v_a_353_ = lean_ctor_get(v___x_352_, 0);
lean_inc(v_a_353_);
lean_dec_ref(v___x_352_);
v___x_354_ = lean_apply_2(v_f_348_, v_a_353_, lean_box(0));
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_364_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_364_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_364_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_364_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_359_ = lean_mk_string_unchecked("", 0, 0);
v___x_360_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_360_, 0, v_a_355_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 0, v___x_360_);
v___x_362_ = v___x_357_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
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
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
v_a_365_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_354_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_354_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_a_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object* v_f_373_, lean_object* v_args_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(v_f_373_, v_args_374_);
lean_dec_ref(v_args_374_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object* v_f_377_){
_start:
{
lean_object* v___f_379_; lean_object* v___x_380_; 
v___f_379_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_379_, 0, v_f_377_);
v___x_380_ = l_Lasm_JS_Function_ofSyncFn(v___f_379_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_382_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v___x_380_, 1);
v___x_382_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v_a_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v_a_383_ = lean_ctor_get(v___x_382_, 0);
lean_inc(v_a_383_);
lean_dec_ref_known(v___x_382_, 1);
v___x_384_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_385_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_383_, v___x_384_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___y_394_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_385_, 1);
v___x_387_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_388_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_381_);
v___x_389_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_389_, 0, v_a_381_);
lean_ctor_set(v___x_389_, 1, v___x_388_);
v___x_390_ = lean_mk_string_unchecked("length", 6, 6);
v___x_391_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
v___x_392_ = lean_mk_string_unchecked("value", 5, 5);
v___x_421_ = lean_unsigned_to_nat(1u);
v___x_422_ = lean_nat_to_int(v___x_421_);
v___x_423_ = lean_nat_abs(v___x_422_);
v___x_424_ = lean_cstr_to_nat("9007199254740991");
v___x_425_ = lean_nat_dec_le(v___x_423_, v___x_424_);
lean_dec(v___x_423_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; 
v___x_426_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_422_);
v___y_394_ = v___x_426_;
goto v___jp_393_;
}
else
{
double v___x_427_; lean_object* v___x_428_; 
v___x_427_ = l_Float_ofInt(v___x_422_);
lean_dec(v___x_422_);
v___x_428_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_428_, 0, v___x_427_);
v___y_394_ = v___x_428_;
goto v___jp_393_;
}
v___jp_393_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_392_);
lean_ctor_set(v___x_395_, 1, v___y_394_);
v___x_396_ = lean_box(0);
v___x_397_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = l_Lasm_JS_obj(v___x_397_);
v___x_399_ = lean_unsigned_to_nat(3u);
v___x_400_ = lean_mk_empty_array_with_capacity(v___x_399_);
v___x_401_ = lean_array_push(v___x_400_, v___x_389_);
v___x_402_ = lean_array_push(v___x_401_, v___x_391_);
v___x_403_ = lean_array_push(v___x_402_, v___x_398_);
v___x_404_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1(v_a_386_, v___x_387_, v___x_403_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_411_; 
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_411_ == 0)
{
lean_object* v_unused_412_; 
v_unused_412_ = lean_ctor_get(v___x_404_, 0);
lean_dec(v_unused_412_);
v___x_406_ = v___x_404_;
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
else
{
lean_dec(v___x_404_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_411_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v___x_409_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 0, v_a_381_);
v___x_409_ = v___x_406_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v_a_381_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
else
{
lean_object* v_a_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_420_; 
lean_dec(v_a_381_);
v_a_413_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_420_ == 0)
{
v___x_415_ = v___x_404_;
v_isShared_416_ = v_isSharedCheck_420_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_a_413_);
lean_dec(v___x_404_);
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
v_reuseFailAlloc_419_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec(v_a_381_);
v_a_429_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_385_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_385_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
else
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_444_; 
lean_dec(v_a_381_);
v_a_437_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_444_ == 0)
{
v___x_439_ = v___x_382_;
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_382_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_444_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_a_437_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
return v___x_442_;
}
}
}
}
else
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_452_; 
v_a_445_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_452_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_452_ == 0)
{
v___x_447_ = v___x_380_;
v_isShared_448_ = v_isSharedCheck_452_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_380_);
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
v_reuseFailAlloc_451_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object* v_f_453_, lean_object* v_a_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(v_f_453_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(lean_object* v_x_456_){
_start:
{
if (lean_obj_tag(v_x_456_) == 0)
{
lean_object* v___x_457_; 
v___x_457_ = lean_unsigned_to_nat(0u);
return v___x_457_;
}
else
{
lean_object* v___x_458_; 
v___x_458_ = lean_unsigned_to_nat(1u);
return v___x_458_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___boxed(lean_object* v_x_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(v_x_459_);
lean_dec_ref(v_x_459_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(lean_object* v_t_461_, lean_object* v_k_462_){
_start:
{
if (lean_obj_tag(v_t_461_) == 0)
{
lean_object* v_value_463_; lean_object* v___x_464_; 
v_value_463_ = lean_ctor_get(v_t_461_, 0);
lean_inc_ref(v_value_463_);
lean_dec_ref_known(v_t_461_, 1);
v___x_464_ = lean_apply_1(v_k_462_, v_value_463_);
return v___x_464_;
}
else
{
lean_object* v_value_465_; lean_object* v___x_466_; 
v_value_465_ = lean_ctor_get(v_t_461_, 0);
lean_inc(v_value_465_);
lean_dec_ref_known(v_t_461_, 1);
v___x_466_ = lean_apply_1(v_k_462_, v_value_465_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(lean_object* v_motive_467_, lean_object* v_ctorIdx_468_, lean_object* v_t_469_, lean_object* v_h_470_, lean_object* v_k_471_){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_469_, v_k_471_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___boxed(lean_object* v_motive_473_, lean_object* v_ctorIdx_474_, lean_object* v_t_475_, lean_object* v_h_476_, lean_object* v_k_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(v_motive_473_, v_ctorIdx_474_, v_t_475_, v_h_476_, v_k_477_);
lean_dec(v_ctorIdx_474_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim___redArg(lean_object* v_t_479_, lean_object* v_domString_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_479_, v_domString_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim(lean_object* v_motive_482_, lean_object* v_t_483_, lean_object* v_h_484_, lean_object* v_domString_485_){
_start:
{
lean_object* v___x_486_; 
v___x_486_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_483_, v_domString_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim___redArg(lean_object* v_t_487_, lean_object* v_unsignedShort_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_487_, v_unsignedShort_488_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim(lean_object* v_motive_490_, lean_object* v_t_491_, lean_object* v_h_492_, lean_object* v_unsignedShort_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_491_, v_unsignedShort_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0(lean_object* v_x_495_){
_start:
{
if (lean_obj_tag(v_x_495_) == 0)
{
lean_object* v_value_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
v_value_496_ = lean_ctor_get(v_x_495_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v_x_495_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_value_496_);
lean_dec(v_x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set_tag(v___x_498_, 4);
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_value_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
else
{
lean_object* v_value_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_517_; 
v_value_504_ = lean_ctor_get(v_x_495_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v_x_495_);
if (v_isSharedCheck_517_ == 0)
{
v___x_506_ = v_x_495_;
v_isShared_507_ = v_isSharedCheck_517_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_value_504_);
lean_dec(v_x_495_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_517_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_508_ = lean_nat_to_int(v_value_504_);
v___x_509_ = lean_nat_abs(v___x_508_);
v___x_510_ = lean_cstr_to_nat("9007199254740991");
v___x_511_ = lean_nat_dec_le(v___x_509_, v___x_510_);
lean_dec(v___x_509_);
if (v___x_511_ == 0)
{
lean_object* v___x_513_; 
if (v_isShared_507_ == 0)
{
lean_ctor_set_tag(v___x_506_, 5);
lean_ctor_set(v___x_506_, 0, v___x_508_);
v___x_513_ = v___x_506_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v___x_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
else
{
double v___x_515_; lean_object* v___x_516_; 
lean_del_object(v___x_506_);
v___x_515_ = l_Float_ofInt(v___x_508_);
lean_dec(v___x_508_);
v___x_516_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_516_, 0, v___x_515_);
return v___x_516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object* v_value_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v_value_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object* v_value_522_){
_start:
{
lean_object* v___x_523_; 
v___x_523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_523_, 0, v_value_522_);
return v___x_523_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSServeOptionsFetch(void){
_start:
{
lean_object* v___f_526_; lean_object* v___x_527_; uint8_t v___x_528_; lean_object* v___x_529_; 
v___f_526_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed), 1, 0);
v___x_527_ = lean_mk_string_unchecked("Lasm.JS.Bun.ServeOptionsFetch", 29, 29);
v___x_528_ = 0;
v___x_529_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_529_, 0, v___f_526_);
lean_ctor_set(v___x_529_, 1, v___x_527_);
lean_ctor_set_uint8(v___x_529_, sizeof(void*)*2, v___x_528_);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object* v_f_530_, lean_object* v_a_531_, lean_object* v___f_532_, lean_object* v_x_533_){
_start:
{
if (lean_obj_tag(v_x_533_) == 0)
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_543_; 
lean_dec_ref(v___f_532_);
lean_dec(v_a_531_);
lean_dec_ref(v_f_530_);
v_a_535_ = lean_ctor_get(v_x_533_, 0);
v_isSharedCheck_543_ = !lean_is_exclusive(v_x_533_);
if (v_isSharedCheck_543_ == 0)
{
v___x_537_ = v_x_533_;
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v_x_533_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_543_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_542_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; 
v___x_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
return v___x_541_;
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_545_; uint8_t v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_a_544_ = lean_ctor_get(v_x_533_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v_x_533_, 1);
v___x_545_ = lean_unsigned_to_nat(0u);
v___x_546_ = 0;
v___x_547_ = lean_apply_3(v_f_530_, v_a_531_, v_a_544_, lean_box(0));
v___x_548_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_545_, v___x_546_, v___x_547_, v___f_532_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object* v_f_549_, lean_object* v_a_550_, lean_object* v___f_551_, lean_object* v_x_552_, lean_object* v___y_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(v_f_549_, v_a_550_, v___f_551_, v_x_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object* v_context_555_, lean_object* v_d_556_){
_start:
{
lean_object* v___y_559_; lean_object* v___y_560_; 
if (lean_obj_tag(v_d_556_) == 9)
{
lean_object* v_value_564_; lean_object* v___x_565_; 
v_value_564_ = lean_ctor_get(v_d_556_, 0);
lean_inc(v_value_564_);
lean_dec_ref_known(v_d_556_, 2);
v___x_565_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_565_, 0, v_value_564_);
return v___x_565_;
}
else
{
lean_object* v___x_566_; lean_object* v_received_568_; 
v___x_566_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_556_) == 9)
{
lean_object* v_value_584_; lean_object* v_description_585_; uint8_t v___x_586_; 
v_value_584_ = lean_ctor_get(v_d_556_, 0);
v_description_585_ = lean_ctor_get(v_d_556_, 1);
v___x_586_ = lean_string_dec_eq(v_description_585_, v___x_566_);
if (v___x_586_ == 0)
{
goto v___jp_582_;
}
else
{
uint32_t v___x_587_; uint64_t v___x_588_; lean_object* v___x_589_; uint32_t v___x_590_; lean_object* v___x_591_; 
lean_inc_n(v_value_584_, 2);
lean_dec_ref_known(v_d_556_, 2);
v___x_587_ = 206;
v___x_588_ = 0ULL;
lean_inc_ref(v___x_566_);
v___x_589_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_589_, 0, v_value_584_);
lean_ctor_set(v___x_589_, 1, v___x_566_);
v___x_590_ = lasm_js_value_handle(v_value_584_);
lean_dec(v_value_584_);
v___x_591_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_587_, v___x_588_, v___x_589_, v___x_590_);
lean_dec_ref_known(v___x_589_, 2);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; uint8_t v___x_593_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref_known(v___x_591_, 1);
v___x_593_ = lean_string_validate_utf8(v_a_592_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec(v_a_592_);
v___x_594_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_595_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_596_ = lean_unsigned_to_nat(193u);
v___x_597_ = lean_unsigned_to_nat(46u);
v___x_598_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_599_ = l_mkPanicMessageWithDecl(v___x_594_, v___x_595_, v___x_596_, v___x_597_, v___x_598_);
lean_dec_ref(v___x_598_);
lean_dec_ref(v___x_595_);
lean_dec_ref(v___x_594_);
v___x_600_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_599_);
v_received_568_ = v___x_600_;
goto v___jp_567_;
}
else
{
lean_object* v___x_601_; 
v___x_601_ = lean_string_from_utf8_unchecked(v_a_592_);
v_received_568_ = v___x_601_;
goto v___jp_567_;
}
}
else
{
lean_object* v___x_602_; 
lean_dec_ref_known(v___x_591_, 1);
v___x_602_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_568_ = v___x_602_;
goto v___jp_567_;
}
}
}
else
{
goto v___jp_582_;
}
v___jp_567_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; uint8_t v___x_580_; 
v___x_569_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_570_ = lean_string_append(v___x_569_, v_context_555_);
v___x_571_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_572_ = lean_string_append(v___x_570_, v___x_571_);
lean_dec_ref(v___x_571_);
v___x_573_ = lean_mk_string_unchecked("Lasm.JS.Bun.Server", 18, 18);
v___x_574_ = lean_string_append(v___x_572_, v___x_573_);
lean_dec_ref(v___x_573_);
v___x_575_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_576_ = lean_string_append(v___x_574_, v___x_575_);
lean_dec_ref(v___x_575_);
v___x_577_ = lean_string_append(v___x_576_, v_received_568_);
lean_dec_ref(v_received_568_);
v___x_578_ = lean_string_utf8_byte_size(v___x_566_);
v___x_579_ = lean_unsigned_to_nat(0u);
v___x_580_ = lean_nat_dec_eq(v___x_578_, v___x_579_);
if (v___x_580_ == 0)
{
lean_object* v___x_581_; 
lean_dec_ref(v___x_566_);
v___x_581_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_559_ = v___x_577_;
v___y_560_ = v___x_581_;
goto v___jp_558_;
}
else
{
v___y_559_ = v___x_577_;
v___y_560_ = v___x_566_;
goto v___jp_558_;
}
}
v___jp_582_:
{
lean_object* v___x_583_; 
v___x_583_ = l_Lasm_JS_Data_describe(v_d_556_);
v_received_568_ = v___x_583_;
goto v___jp_567_;
}
}
v___jp_558_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_561_ = lean_string_append(v___y_559_, v___y_560_);
v___x_562_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
v___x_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object* v_context_603_, lean_object* v_d_604_, lean_object* v_a_605_){
_start:
{
lean_object* v_res_606_; 
v_res_606_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v_context_603_, v_d_604_);
lean_dec_ref(v_context_603_);
return v_res_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object* v_args_607_, lean_object* v_i_608_){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_610_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_611_ = lean_unsigned_to_nat(1u);
v___x_612_ = lean_nat_add(v_i_608_, v___x_611_);
v___x_613_ = l_Nat_reprFast(v___x_612_);
v___x_614_ = lean_string_append(v___x_610_, v___x_613_);
lean_dec_ref(v___x_613_);
v___x_615_ = lean_array_get_size(v_args_607_);
v___x_616_ = lean_nat_dec_lt(v_i_608_, v___x_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_box(0);
v___x_618_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_614_, v___x_617_);
lean_dec_ref(v___x_614_);
return v___x_618_;
}
else
{
lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_619_ = lean_array_fget_borrowed(v_args_607_, v_i_608_);
lean_inc(v___x_619_);
v___x_620_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_614_, v___x_619_);
lean_dec_ref(v___x_614_);
return v___x_620_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object* v_args_621_, lean_object* v_i_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_621_, v_i_622_);
lean_dec(v_i_622_);
lean_dec_ref(v_args_621_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object* v_f_625_, lean_object* v___f_626_, lean_object* v_args_627_, lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_638_; 
lean_dec_ref(v___f_626_);
lean_dec_ref(v_f_625_);
v_a_630_ = lean_ctor_get(v_x_628_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v_x_628_);
if (v_isSharedCheck_638_ == 0)
{
v___x_632_ = v_x_628_;
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v_x_628_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_638_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_637_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_636_; 
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
return v___x_636_;
}
}
}
else
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_660_; 
v_a_639_ = lean_ctor_get(v_x_628_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v_x_628_);
if (v_isSharedCheck_660_ == 0)
{
v___x_641_ = v_x_628_;
v_isShared_642_ = v_isSharedCheck_660_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v_x_628_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_660_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___f_643_; lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; lean_object* v_val_648_; lean_object* v___x_651_; 
v___f_643_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_643_, 0, v_f_625_);
lean_closure_set(v___f_643_, 1, v_a_639_);
lean_closure_set(v___f_643_, 2, v___f_626_);
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = 0;
v___x_651_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_627_, v___x_644_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_652_);
lean_dec_ref_known(v___x_651_, 1);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v_a_652_);
v___x_654_ = v___x_641_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_a_652_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
v_val_648_ = v___x_654_;
goto v___jp_647_;
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; 
v_a_656_ = lean_ctor_get(v___x_651_, 0);
lean_inc(v_a_656_);
lean_dec_ref_known(v___x_651_, 1);
if (v_isShared_642_ == 0)
{
lean_ctor_set_tag(v___x_641_, 0);
lean_ctor_set(v___x_641_, 0, v_a_656_);
v___x_658_ = v___x_641_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_659_; 
v_reuseFailAlloc_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_659_, 0, v_a_656_);
v___x_658_ = v_reuseFailAlloc_659_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
v_val_648_ = v___x_658_;
goto v___jp_647_;
}
}
v___jp_647_:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v_val_648_);
v___x_650_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_645_, v___x_646_, v___x_649_, v___f_643_);
return v___x_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object* v_f_661_, lean_object* v___f_662_, lean_object* v_args_663_, lean_object* v_x_664_, lean_object* v___y_665_){
_start:
{
lean_object* v_res_666_; 
v_res_666_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(v_f_661_, v___f_662_, v_args_663_, v_x_664_);
lean_dec_ref(v_args_663_);
return v_res_666_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1_spec__2(lean_object* v_context_667_, lean_object* v_d_668_){
_start:
{
lean_object* v___y_671_; lean_object* v___y_672_; 
if (lean_obj_tag(v_d_668_) == 9)
{
lean_object* v_value_676_; lean_object* v___x_677_; 
v_value_676_ = lean_ctor_get(v_d_668_, 0);
lean_inc(v_value_676_);
lean_dec_ref_known(v_d_668_, 2);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v_value_676_);
return v___x_677_;
}
else
{
lean_object* v___x_678_; lean_object* v_received_680_; 
v___x_678_ = lean_mk_string_unchecked("", 0, 0);
if (lean_obj_tag(v_d_668_) == 9)
{
lean_object* v_value_696_; lean_object* v_description_697_; uint8_t v___x_698_; 
v_value_696_ = lean_ctor_get(v_d_668_, 0);
v_description_697_ = lean_ctor_get(v_d_668_, 1);
v___x_698_ = lean_string_dec_eq(v_description_697_, v___x_678_);
if (v___x_698_ == 0)
{
goto v___jp_694_;
}
else
{
uint32_t v___x_699_; uint64_t v___x_700_; lean_object* v___x_701_; uint32_t v___x_702_; lean_object* v___x_703_; 
lean_inc_n(v_value_696_, 2);
lean_dec_ref_known(v_d_668_, 2);
v___x_699_ = 206;
v___x_700_ = 0ULL;
lean_inc_ref(v___x_678_);
v___x_701_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_701_, 0, v_value_696_);
lean_ctor_set(v___x_701_, 1, v___x_678_);
v___x_702_ = lasm_js_value_handle(v_value_696_);
lean_dec(v_value_696_);
v___x_703_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_699_, v___x_700_, v___x_701_, v___x_702_);
lean_dec_ref_known(v___x_701_, 2);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_a_704_; uint8_t v___x_705_; 
v_a_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_704_);
lean_dec_ref_known(v___x_703_, 1);
v___x_705_ = lean_string_validate_utf8(v_a_704_);
if (v___x_705_ == 0)
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
lean_dec(v_a_704_);
v___x_706_ = lean_mk_string_unchecked("Init.Data.String.Basic", 22, 22);
v___x_707_ = lean_mk_string_unchecked("String.fromUTF8!", 16, 16);
v___x_708_ = lean_unsigned_to_nat(193u);
v___x_709_ = lean_unsigned_to_nat(46u);
v___x_710_ = lean_mk_string_unchecked("invalid UTF-8 string", 20, 20);
v___x_711_ = l_mkPanicMessageWithDecl(v___x_706_, v___x_707_, v___x_708_, v___x_709_, v___x_710_);
lean_dec_ref(v___x_710_);
lean_dec_ref(v___x_707_);
lean_dec_ref(v___x_706_);
v___x_712_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_711_);
v_received_680_ = v___x_712_;
goto v___jp_679_;
}
else
{
lean_object* v___x_713_; 
v___x_713_ = lean_string_from_utf8_unchecked(v_a_704_);
v_received_680_ = v___x_713_;
goto v___jp_679_;
}
}
else
{
lean_object* v___x_714_; 
lean_dec_ref_known(v___x_703_, 1);
v___x_714_ = lean_mk_string_unchecked("a JavaScript value", 18, 18);
v_received_680_ = v___x_714_;
goto v___jp_679_;
}
}
}
else
{
goto v___jp_694_;
}
v___jp_679_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v___x_681_ = lean_mk_string_unchecked("Lasm.JS ", 8, 8);
v___x_682_ = lean_string_append(v___x_681_, v_context_667_);
v___x_683_ = lean_mk_string_unchecked(": expected Lean type ", 21, 21);
v___x_684_ = lean_string_append(v___x_682_, v___x_683_);
lean_dec_ref(v___x_683_);
v___x_685_ = lean_mk_string_unchecked("Lasm.JS.Web.Request", 19, 19);
v___x_686_ = lean_string_append(v___x_684_, v___x_685_);
lean_dec_ref(v___x_685_);
v___x_687_ = lean_mk_string_unchecked(", received JavaScript ", 22, 22);
v___x_688_ = lean_string_append(v___x_686_, v___x_687_);
lean_dec_ref(v___x_687_);
v___x_689_ = lean_string_append(v___x_688_, v_received_680_);
lean_dec_ref(v_received_680_);
v___x_690_ = lean_string_utf8_byte_size(v___x_678_);
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = lean_nat_dec_eq(v___x_690_, v___x_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; 
lean_dec_ref(v___x_678_);
v___x_693_ = lean_mk_string_unchecked(" ()", 3, 3);
v___y_671_ = v___x_689_;
v___y_672_ = v___x_693_;
goto v___jp_670_;
}
else
{
v___y_671_ = v___x_689_;
v___y_672_ = v___x_678_;
goto v___jp_670_;
}
}
v___jp_694_:
{
lean_object* v___x_695_; 
v___x_695_ = l_Lasm_JS_Data_describe(v_d_668_);
v_received_680_ = v___x_695_;
goto v___jp_679_;
}
}
v___jp_670_:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_string_append(v___y_671_, v___y_672_);
v___x_674_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
v___x_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1_spec__2___boxed(lean_object* v_context_715_, lean_object* v_d_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1_spec__2(v_context_715_, v_d_716_);
lean_dec_ref(v_context_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object* v_args_719_, lean_object* v_i_720_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_722_ = lean_mk_string_unchecked("callback argument ", 18, 18);
v___x_723_ = lean_unsigned_to_nat(1u);
v___x_724_ = lean_nat_add(v_i_720_, v___x_723_);
v___x_725_ = l_Nat_reprFast(v___x_724_);
v___x_726_ = lean_string_append(v___x_722_, v___x_725_);
lean_dec_ref(v___x_725_);
v___x_727_ = lean_array_get_size(v_args_719_);
v___x_728_ = lean_nat_dec_lt(v_i_720_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; 
v___x_729_ = lean_box(0);
v___x_730_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1_spec__2(v___x_726_, v___x_729_);
lean_dec_ref(v___x_726_);
return v___x_730_;
}
else
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = lean_array_fget_borrowed(v_args_719_, v_i_720_);
lean_inc(v___x_731_);
v___x_732_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1_spec__2(v___x_726_, v___x_731_);
lean_dec_ref(v___x_726_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object* v_args_733_, lean_object* v_i_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_733_, v_i_734_);
lean_dec(v_i_734_);
lean_dec_ref(v_args_733_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object* v_f_737_, lean_object* v___f_738_, lean_object* v_args_739_){
_start:
{
lean_object* v___f_741_; lean_object* v___x_742_; uint8_t v___x_743_; lean_object* v_val_745_; lean_object* v___x_748_; 
lean_inc_ref(v_args_739_);
v___f_741_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_741_, 0, v_f_737_);
lean_closure_set(v___f_741_, 1, v___f_738_);
lean_closure_set(v___f_741_, 2, v_args_739_);
v___x_742_ = lean_unsigned_to_nat(0u);
v___x_743_ = 0;
v___x_748_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_739_, v___x_742_);
lean_dec_ref(v_args_739_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_748_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_748_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
lean_ctor_set_tag(v___x_751_, 1);
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
v_val_745_ = v___x_754_;
goto v___jp_744_;
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
v_a_757_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_748_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_748_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
lean_ctor_set_tag(v___x_759_, 0);
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
v_val_745_ = v___x_762_;
goto v___jp_744_;
}
}
}
v___jp_744_:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_746_, 0, v_val_745_);
v___x_747_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_742_, v___x_743_, v___x_746_, v___f_741_);
return v___x_747_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object* v_f_765_, lean_object* v___f_766_, lean_object* v_args_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(v_f_765_, v___f_766_, v_args_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object* v_f_770_){
_start:
{
lean_object* v___f_772_; lean_object* v___f_773_; lean_object* v___x_774_; 
v___f_772_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed), 2, 0);
v___f_773_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_773_, 0, v_f_770_);
lean_closure_set(v___f_773_, 1, v___f_772_);
v___x_774_ = l_Lasm_JS_Function_ofFn(v___f_773_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_776_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_774_, 1);
v___x_776_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_776_) == 0)
{
lean_object* v_a_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_a_777_ = lean_ctor_get(v___x_776_, 0);
lean_inc(v_a_777_);
lean_dec_ref_known(v___x_776_, 1);
v___x_778_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_779_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_777_, v___x_778_);
if (lean_obj_tag(v___x_779_) == 0)
{
lean_object* v_a_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___y_788_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; uint8_t v___x_819_; 
v_a_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_a_780_);
lean_dec_ref_known(v___x_779_, 1);
v___x_781_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_782_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_775_);
v___x_783_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_783_, 0, v_a_775_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_mk_string_unchecked("length", 6, 6);
v___x_785_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_785_, 0, v___x_784_);
v___x_786_ = lean_mk_string_unchecked("value", 5, 5);
v___x_815_ = lean_unsigned_to_nat(2u);
v___x_816_ = lean_nat_to_int(v___x_815_);
v___x_817_ = lean_nat_abs(v___x_816_);
v___x_818_ = lean_cstr_to_nat("9007199254740991");
v___x_819_ = lean_nat_dec_le(v___x_817_, v___x_818_);
lean_dec(v___x_817_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; 
v___x_820_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_820_, 0, v___x_816_);
v___y_788_ = v___x_820_;
goto v___jp_787_;
}
else
{
double v___x_821_; lean_object* v___x_822_; 
v___x_821_ = l_Float_ofInt(v___x_816_);
lean_dec(v___x_816_);
v___x_822_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_822_, 0, v___x_821_);
v___y_788_ = v___x_822_;
goto v___jp_787_;
}
v___jp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_789_, 0, v___x_786_);
lean_ctor_set(v___x_789_, 1, v___y_788_);
v___x_790_ = lean_box(0);
v___x_791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_789_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
v___x_792_ = l_Lasm_JS_obj(v___x_791_);
v___x_793_ = lean_unsigned_to_nat(3u);
v___x_794_ = lean_mk_empty_array_with_capacity(v___x_793_);
v___x_795_ = lean_array_push(v___x_794_, v___x_783_);
v___x_796_ = lean_array_push(v___x_795_, v___x_785_);
v___x_797_ = lean_array_push(v___x_796_, v___x_792_);
v___x_798_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1(v_a_780_, v___x_781_, v___x_797_);
if (lean_obj_tag(v___x_798_) == 0)
{
lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_805_ == 0)
{
lean_object* v_unused_806_; 
v_unused_806_ = lean_ctor_get(v___x_798_, 0);
lean_dec(v_unused_806_);
v___x_800_ = v___x_798_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_dec(v___x_798_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v_a_775_);
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_775_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
else
{
lean_object* v_a_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_814_; 
lean_dec(v_a_775_);
v_a_807_ = lean_ctor_get(v___x_798_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v___x_798_);
if (v_isSharedCheck_814_ == 0)
{
v___x_809_ = v___x_798_;
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_a_807_);
lean_dec(v___x_798_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_814_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_812_; 
if (v_isShared_810_ == 0)
{
v___x_812_ = v___x_809_;
goto v_reusejp_811_;
}
else
{
lean_object* v_reuseFailAlloc_813_; 
v_reuseFailAlloc_813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_813_, 0, v_a_807_);
v___x_812_ = v_reuseFailAlloc_813_;
goto v_reusejp_811_;
}
v_reusejp_811_:
{
return v___x_812_;
}
}
}
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_a_775_);
v_a_823_ = lean_ctor_get(v___x_779_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_779_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_779_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_779_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
lean_dec(v_a_775_);
v_a_831_ = lean_ctor_get(v___x_776_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_776_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_776_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_776_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
v_a_839_ = lean_ctor_get(v___x_774_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_774_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_774_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_774_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object* v_f_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(v_f_847_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object* v_f_850_, lean_object* v_args_851_){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_unsigned_to_nat(0u);
v___x_854_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_851_, v___x_853_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_855_);
lean_dec_ref_known(v___x_854_, 1);
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = l_Lasm_JS_Web_Internal_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_851_, v___x_856_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_859_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref_known(v___x_857_, 1);
v___x_859_ = lean_apply_3(v_f_850_, v_a_855_, v_a_858_, lean_box(0));
if (lean_obj_tag(v___x_859_) == 0)
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_869_; 
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_869_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_869_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_869_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_869_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_867_; 
v___x_864_ = lean_mk_string_unchecked("", 0, 0);
v___x_865_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_865_, 0, v_a_860_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 0, v___x_865_);
v___x_867_ = v___x_862_;
goto v_reusejp_866_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v___x_865_);
v___x_867_ = v_reuseFailAlloc_868_;
goto v_reusejp_866_;
}
v_reusejp_866_:
{
return v___x_867_;
}
}
}
else
{
lean_object* v_a_870_; lean_object* v___x_872_; uint8_t v_isShared_873_; uint8_t v_isSharedCheck_877_; 
v_a_870_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_877_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_877_ == 0)
{
v___x_872_ = v___x_859_;
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
else
{
lean_inc(v_a_870_);
lean_dec(v___x_859_);
v___x_872_ = lean_box(0);
v_isShared_873_ = v_isSharedCheck_877_;
goto v_resetjp_871_;
}
v_resetjp_871_:
{
lean_object* v___x_875_; 
if (v_isShared_873_ == 0)
{
v___x_875_ = v___x_872_;
goto v_reusejp_874_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v_a_870_);
v___x_875_ = v_reuseFailAlloc_876_;
goto v_reusejp_874_;
}
v_reusejp_874_:
{
return v___x_875_;
}
}
}
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec(v_a_855_);
lean_dec_ref(v_f_850_);
v_a_878_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_857_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_857_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec_ref(v_f_850_);
v_a_886_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_854_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_854_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object* v_f_894_, lean_object* v_args_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(v_f_894_, v_args_895_);
lean_dec_ref(v_args_895_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object* v_f_898_){
_start:
{
lean_object* v___f_900_; lean_object* v___x_901_; 
v___f_900_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_900_, 0, v_f_898_);
v___x_901_ = l_Lasm_JS_Function_ofSyncFn(v___f_900_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref_known(v___x_901_, 1);
v___x_903_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_903_) == 0)
{
lean_object* v_a_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v_a_904_ = lean_ctor_get(v___x_903_, 0);
lean_inc(v_a_904_);
lean_dec_ref_known(v___x_903_, 1);
v___x_905_ = lean_mk_string_unchecked("Object", 6, 6);
v___x_906_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Internal_viewBytes_spec__0(v_a_904_, v___x_905_);
if (lean_obj_tag(v___x_906_) == 0)
{
lean_object* v_a_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___y_915_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
lean_inc(v_a_907_);
lean_dec_ref_known(v___x_906_, 1);
v___x_908_ = lean_mk_string_unchecked("defineProperty", 14, 14);
v___x_909_ = lean_mk_string_unchecked("", 0, 0);
lean_inc(v_a_902_);
v___x_910_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_910_, 0, v_a_902_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = lean_mk_string_unchecked("length", 6, 6);
v___x_912_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_912_, 0, v___x_911_);
v___x_913_ = lean_mk_string_unchecked("value", 5, 5);
v___x_942_ = lean_unsigned_to_nat(2u);
v___x_943_ = lean_nat_to_int(v___x_942_);
v___x_944_ = lean_nat_abs(v___x_943_);
v___x_945_ = lean_cstr_to_nat("9007199254740991");
v___x_946_ = lean_nat_dec_le(v___x_944_, v___x_945_);
lean_dec(v___x_944_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
v___x_947_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_947_, 0, v___x_943_);
v___y_915_ = v___x_947_;
goto v___jp_914_;
}
else
{
double v___x_948_; lean_object* v___x_949_; 
v___x_948_ = l_Float_ofInt(v___x_943_);
lean_dec(v___x_943_);
v___x_949_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_949_, 0, v___x_948_);
v___y_915_ = v___x_949_;
goto v___jp_914_;
}
v___jp_914_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_913_);
lean_ctor_set(v___x_916_, 1, v___y_915_);
v___x_917_ = lean_box(0);
v___x_918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_918_, 0, v___x_916_);
lean_ctor_set(v___x_918_, 1, v___x_917_);
v___x_919_ = l_Lasm_JS_obj(v___x_918_);
v___x_920_ = lean_unsigned_to_nat(3u);
v___x_921_ = lean_mk_empty_array_with_capacity(v___x_920_);
v___x_922_ = lean_array_push(v___x_921_, v___x_910_);
v___x_923_ = lean_array_push(v___x_922_, v___x_912_);
v___x_924_ = lean_array_push(v___x_923_, v___x_919_);
v___x_925_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_ServeOptionsError_ofFn_spec__1(v_a_907_, v___x_908_, v___x_924_);
if (lean_obj_tag(v___x_925_) == 0)
{
lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_932_ == 0)
{
lean_object* v_unused_933_; 
v_unused_933_ = lean_ctor_get(v___x_925_, 0);
lean_dec(v_unused_933_);
v___x_927_ = v___x_925_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_dec(v___x_925_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
lean_ctor_set(v___x_927_, 0, v_a_902_);
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_902_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
}
}
}
else
{
lean_object* v_a_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
lean_dec(v_a_902_);
v_a_934_ = lean_ctor_get(v___x_925_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v___x_925_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v___x_925_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_a_934_);
lean_dec(v___x_925_);
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
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec(v_a_902_);
v_a_950_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_906_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_906_);
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
else
{
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec(v_a_902_);
v_a_958_ = lean_ctor_get(v___x_903_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_903_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_903_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_903_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
else
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_a_966_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_901_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_901_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object* v_f_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(v_f_974_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object* v___f_977_, lean_object* v___f_978_, lean_object* v___f_979_, lean_object* v___f_980_, lean_object* v___f_981_, lean_object* v_d_982_){
_start:
{
lean_object* v_maxRequestBodySize_983_; lean_object* v_error_984_; lean_object* v_id_985_; lean_object* v_hostname_986_; lean_object* v_port_987_; lean_object* v_reusePort_988_; lean_object* v_ipv6Only_989_; lean_object* v_idleTimeout_990_; lean_object* v_fetch_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_maxRequestBodySize_983_ = lean_ctor_get(v_d_982_, 0);
lean_inc(v_maxRequestBodySize_983_);
v_error_984_ = lean_ctor_get(v_d_982_, 1);
lean_inc(v_error_984_);
v_id_985_ = lean_ctor_get(v_d_982_, 2);
lean_inc(v_id_985_);
v_hostname_986_ = lean_ctor_get(v_d_982_, 3);
lean_inc(v_hostname_986_);
v_port_987_ = lean_ctor_get(v_d_982_, 4);
lean_inc(v_port_987_);
v_reusePort_988_ = lean_ctor_get(v_d_982_, 5);
lean_inc(v_reusePort_988_);
v_ipv6Only_989_ = lean_ctor_get(v_d_982_, 6);
lean_inc(v_ipv6Only_989_);
v_idleTimeout_990_ = lean_ctor_get(v_d_982_, 7);
lean_inc(v_idleTimeout_990_);
v_fetch_991_ = lean_ctor_get(v_d_982_, 8);
lean_inc(v_fetch_991_);
lean_dec_ref(v_d_982_);
v___x_992_ = lean_mk_string_unchecked("maxRequestBodySize", 18, 18);
lean_inc_ref(v___f_977_);
v___x_993_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_977_, v_maxRequestBodySize_983_);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v___x_992_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = lean_mk_string_unchecked("error", 5, 5);
v___x_996_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_978_, v_error_984_);
v___x_997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_997_, 0, v___x_995_);
lean_ctor_set(v___x_997_, 1, v___x_996_);
v___x_998_ = lean_mk_string_unchecked("id", 2, 2);
lean_inc_ref(v___f_979_);
v___x_999_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_979_, v_id_985_);
v___x_1000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1000_, 0, v___x_998_);
lean_ctor_set(v___x_1000_, 1, v___x_999_);
v___x_1001_ = lean_mk_string_unchecked("hostname", 8, 8);
v___x_1002_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_979_, v_hostname_986_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1001_);
lean_ctor_set(v___x_1003_, 1, v___x_1002_);
v___x_1004_ = lean_mk_string_unchecked("port", 4, 4);
v___x_1005_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_980_, v_port_987_);
v___x_1006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1004_);
lean_ctor_set(v___x_1006_, 1, v___x_1005_);
v___x_1007_ = lean_mk_string_unchecked("reusePort", 9, 9);
lean_inc_ref(v___f_981_);
v___x_1008_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_981_, v_reusePort_988_);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1007_);
lean_ctor_set(v___x_1009_, 1, v___x_1008_);
v___x_1010_ = lean_mk_string_unchecked("ipv6Only", 8, 8);
v___x_1011_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_981_, v_ipv6Only_989_);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1010_);
lean_ctor_set(v___x_1012_, 1, v___x_1011_);
v___x_1013_ = lean_mk_string_unchecked("idleTimeout", 11, 11);
v___x_1014_ = l_Lasm_JS_Web_Internal_optional___redArg(v___f_977_, v_idleTimeout_990_);
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___x_1013_);
lean_ctor_set(v___x_1015_, 1, v___x_1014_);
v___x_1016_ = lean_mk_string_unchecked("fetch", 5, 5);
v___x_1017_ = lean_mk_string_unchecked("", 0, 0);
v___x_1018_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1018_, 0, v_fetch_991_);
lean_ctor_set(v___x_1018_, 1, v___x_1017_);
v___x_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1016_);
lean_ctor_set(v___x_1019_, 1, v___x_1018_);
v___x_1020_ = lean_unsigned_to_nat(9u);
v___x_1021_ = lean_mk_empty_array_with_capacity(v___x_1020_);
v___x_1022_ = lean_array_push(v___x_1021_, v___x_994_);
v___x_1023_ = lean_array_push(v___x_1022_, v___x_997_);
v___x_1024_ = lean_array_push(v___x_1023_, v___x_1000_);
v___x_1025_ = lean_array_push(v___x_1024_, v___x_1003_);
v___x_1026_ = lean_array_push(v___x_1025_, v___x_1006_);
v___x_1027_ = lean_array_push(v___x_1026_, v___x_1009_);
v___x_1028_ = lean_array_push(v___x_1027_, v___x_1012_);
v___x_1029_ = lean_array_push(v___x_1028_, v___x_1015_);
v___x_1030_ = lean_array_push(v___x_1029_, v___x_1019_);
v___x_1031_ = l_Lasm_JS_Web_Internal_fields(v___x_1030_);
lean_dec_ref(v___x_1030_);
return v___x_1031_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instToJSServeOptions(void){
_start:
{
lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___f_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; 
v___f_1032_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSNat___lam__0), 1, 0);
v___f_1033_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instToJSServer___lam__0), 1, 0);
v___f_1034_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSString___lam__0), 1, 0);
v___f_1035_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0), 1, 0);
v___f_1036_ = lean_alloc_closure((void*)(l_Lasm_JS_instToJSBool___lam__0___boxed), 1, 0);
v___f_1037_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0), 6, 5);
lean_closure_set(v___f_1037_, 0, v___f_1032_);
lean_closure_set(v___f_1037_, 1, v___f_1033_);
lean_closure_set(v___f_1037_, 2, v___f_1034_);
lean_closure_set(v___f_1037_, 3, v___f_1035_);
lean_closure_set(v___f_1037_, 4, v___f_1036_);
return v___f_1037_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(lean_object* v_x_1038_){
_start:
{
if (lean_obj_tag(v_x_1038_) == 0)
{
lean_object* v___x_1039_; 
v___x_1039_ = lean_unsigned_to_nat(0u);
return v___x_1039_;
}
else
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_unsigned_to_nat(1u);
return v___x_1040_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___boxed(lean_object* v_x_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(v_x_1041_);
lean_dec_ref(v_x_1041_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(lean_object* v_t_1043_, lean_object* v_k_1044_){
_start:
{
if (lean_obj_tag(v_t_1043_) == 0)
{
lean_object* v_value_1045_; lean_object* v___x_1046_; 
v_value_1045_ = lean_ctor_get(v_t_1043_, 0);
lean_inc(v_value_1045_);
lean_dec_ref_known(v_t_1043_, 1);
v___x_1046_ = lean_apply_1(v_k_1044_, v_value_1045_);
return v___x_1046_;
}
else
{
lean_object* v_value_1047_; lean_object* v___x_1048_; 
v_value_1047_ = lean_ctor_get(v_t_1043_, 0);
lean_inc_ref(v_value_1047_);
lean_dec_ref_known(v_t_1043_, 1);
v___x_1048_ = lean_apply_1(v_k_1044_, v_value_1047_);
return v___x_1048_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(lean_object* v_motive_1049_, lean_object* v_ctorIdx_1050_, lean_object* v_t_1051_, lean_object* v_h_1052_, lean_object* v_k_1053_){
_start:
{
lean_object* v___x_1054_; 
v___x_1054_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1051_, v_k_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___boxed(lean_object* v_motive_1055_, lean_object* v_ctorIdx_1056_, lean_object* v_t_1057_, lean_object* v_h_1058_, lean_object* v_k_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(v_motive_1055_, v_ctorIdx_1056_, v_t_1057_, v_h_1058_, v_k_1059_);
lean_dec(v_ctorIdx_1056_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim___redArg(lean_object* v_t_1061_, lean_object* v_request_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1061_, v_request_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim(lean_object* v_motive_1064_, lean_object* v_t_1065_, lean_object* v_h_1066_, lean_object* v_request_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1065_, v_request_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim___redArg(lean_object* v_t_1069_, lean_object* v_domString_1070_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1069_, v_domString_1070_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim(lean_object* v_motive_1072_, lean_object* v_t_1073_, lean_object* v_h_1074_, lean_object* v_domString_1075_){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1073_, v_domString_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0(lean_object* v_x_1077_){
_start:
{
if (lean_obj_tag(v_x_1077_) == 0)
{
lean_object* v_value_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_value_1078_ = lean_ctor_get(v_x_1077_, 0);
lean_inc(v_value_1078_);
lean_dec_ref_known(v_x_1077_, 1);
v___x_1079_ = lean_mk_string_unchecked("", 0, 0);
v___x_1080_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1080_, 0, v_value_1078_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
return v___x_1080_;
}
else
{
lean_object* v_value_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1088_; 
v_value_1081_ = lean_ctor_get(v_x_1077_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_x_1077_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1083_ = v_x_1077_;
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_value_1081_);
lean_dec(v_x_1077_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1088_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___x_1086_; 
if (v_isShared_1084_ == 0)
{
lean_ctor_set_tag(v___x_1083_, 4);
v___x_1086_ = v___x_1083_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_value_1081_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object* v_value_1090_){
_start:
{
lean_object* v___x_1091_; 
v___x_1091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1091_, 0, v_value_1090_);
return v___x_1091_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object* v_value_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1094_, 0, v_value_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(lean_object* v___x_1096_, lean_object* v___x_1097_, lean_object* v___x_1098_, lean_object* v_d_1099_){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = lean_mk_string_unchecked("address", 7, 7);
v___x_1101_ = l_Lasm_JS_readField___redArg(v___x_1096_, v_d_1099_, v___x_1100_);
lean_dec_ref(v___x_1100_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
lean_dec_ref(v___x_1098_);
lean_dec_ref(v___x_1097_);
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; 
v_a_1110_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_a_1110_);
lean_dec_ref_known(v___x_1101_, 1);
v___x_1111_ = lean_mk_string_unchecked("port", 4, 4);
v___x_1112_ = l_Lasm_JS_readField___redArg(v___x_1097_, v_d_1099_, v___x_1111_);
lean_dec_ref(v___x_1111_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_a_1110_);
lean_dec_ref(v___x_1098_);
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1112_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1112_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
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
lean_object* v_a_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v_a_1121_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1121_);
lean_dec_ref_known(v___x_1112_, 1);
v___x_1122_ = lean_mk_string_unchecked("family", 6, 6);
v___x_1123_ = l_Lasm_JS_readField___redArg(v___x_1098_, v_d_1099_, v___x_1122_);
lean_dec_ref(v___x_1122_);
if (lean_obj_tag(v___x_1123_) == 0)
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec(v_a_1121_);
lean_dec(v_a_1110_);
v_a_1124_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1123_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1123_);
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
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1140_; 
v_a_1132_ = lean_ctor_get(v___x_1123_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1123_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1134_ = v___x_1123_;
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1123_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1140_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1136_, 0, v_a_1110_);
lean_ctor_set(v___x_1136_, 1, v_a_1121_);
lean_ctor_set(v___x_1136_, 2, v_a_1132_);
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v___x_1136_);
v___x_1138_ = v___x_1134_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed(lean_object* v___x_1141_, lean_object* v___x_1142_, lean_object* v___x_1143_, lean_object* v_d_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(v___x_1141_, v___x_1142_, v___x_1143_, v_d_1144_);
lean_dec(v_d_1144_);
return v_res_1145_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress(void){
_start:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___f_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; lean_object* v___x_1152_; 
v___x_1146_ = l_Lasm_JS_instFromJSString;
v___x_1147_ = l_Lasm_JS_instFromJSNat;
v___x_1148_ = l_Lasm_JS_Bun_instFromJSSocketAddressFamily;
v___f_1149_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1149_, 0, v___x_1146_);
lean_closure_set(v___f_1149_, 1, v___x_1147_);
lean_closure_set(v___f_1149_, 2, v___x_1148_);
v___x_1150_ = lean_mk_string_unchecked("Lasm.JS.Bun.SocketAddress", 25, 25);
v___x_1151_ = 0;
v___x_1152_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1152_, 0, v___f_1149_);
lean_ctor_set(v___x_1152_, 1, v___x_1150_);
lean_ctor_set_uint8(v___x_1152_, sizeof(void*)*2, v___x_1151_);
return v___x_1152_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Fetch(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Types_Url(uint8_t builtin);
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
res = initialize_Lasm_JS_Web_Types_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Types_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Bun_instFromJSServer = _init_l_Lasm_JS_Bun_instFromJSServer();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSServer);
l_Lasm_JS_Bun_instFromJSSocketAddressFamily = _init_l_Lasm_JS_Bun_instFromJSSocketAddressFamily();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSSocketAddressFamily);
l_Lasm_JS_Bun_instFromJSServerProtocol = _init_l_Lasm_JS_Bun_instFromJSServerProtocol();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSServerProtocol);
l_Lasm_JS_Bun_instFromJSServeOptionsError = _init_l_Lasm_JS_Bun_instFromJSServeOptionsError();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSServeOptionsError);
l_Lasm_JS_Bun_instFromJSServeOptionsFetch = _init_l_Lasm_JS_Bun_instFromJSServeOptionsFetch();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSServeOptionsFetch);
l_Lasm_JS_Bun_instToJSServeOptions = _init_l_Lasm_JS_Bun_instToJSServeOptions();
lean_mark_persistent(l_Lasm_JS_Bun_instToJSServeOptions);
l_Lasm_JS_Bun_instFromJSSocketAddress = _init_l_Lasm_JS_Bun_instFromJSSocketAddress();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSSocketAddress);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
