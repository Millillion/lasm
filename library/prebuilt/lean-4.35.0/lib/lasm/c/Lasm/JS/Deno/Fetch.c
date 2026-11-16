// Lean compiler output
// Module: Lasm.JS.Deno.Fetch
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support
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
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSArray___redArg(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Deno_instToJSHttpClient___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Deno_instToJSHttpClient___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpClient___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSHttpClient___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSHttpClient___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSHttpClient___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSHttpClient___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpClient___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSHttpClient = (const lean_object*)&l_Lasm_JS_Deno_instToJSHttpClient___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSHttpClient___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSHttpClient___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpClient___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSHttpClient___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSHttpClient___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpClient___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSHttpClient___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Deno.HttpClient"};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpClient___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSHttpClient___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpClient___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSHttpClient___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpClient___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSHttpClient = (const lean_object*)&l_Lasm_JS_Deno_instFromJSHttpClient___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqProxyTransport_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqProxyTransport_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqProxyTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqProxyTransport_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqProxyTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqProxyTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqProxyTransport = (const lean_object*)&l_Lasm_JS_Deno_instBEqProxyTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.ProxyTransport.http"};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.ProxyTransport.https"};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Deno.ProxyTransport.socks5"};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Deno.ProxyTransport.tcp"};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Deno.ProxyTransport.unix"};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Deno.ProxyTransport.vsock"};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__11_value;
static lean_once_cell_t l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12;
static lean_once_cell_t l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprProxyTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprProxyTransport_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprProxyTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprProxyTransport = (const lean_object*)&l_Lasm_JS_Deno_instReprProxyTransport___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedProxyTransport_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instInhabitedProxyTransport;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "http"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "https"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "socks5"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "tcp"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__6_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unix"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__8_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__8_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vsock"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__10_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__10_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSProxyTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSProxyTransport = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__4_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__5_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__6_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSProxyTransport___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSProxyTransport___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Deno.ProxyTransport"};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSProxyTransport___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport = (const lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___closed__2_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lasm.JS.Deno.CreateHttpClientOptionsKeyFormat.pem"};
static const lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat_default;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pem"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Lasm.JS.Deno.CreateHttpClientOptionsKeyFormat"};
static const lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat = (const lean_object*)&l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "username"};
static const lean_object* l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "password"};
static const lean_object* l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBasicAuth___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSBasicAuth___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSBasicAuth___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSBasicAuth___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSBasicAuth___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSBasicAuth = (const lean_object*)&l_Lasm_JS_Deno_instToJSBasicAuth___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transport"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "basicAuth"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "path"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cid"};
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSProxy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__0_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSProxy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__1_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSProxy___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__2_value;
static const lean_closure_object l_Lasm_JS_Deno_instToJSProxy___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSProxy___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_instToJSProxyTransport___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSBasicAuth___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__2_value)} };
static const lean_object* l_Lasm_JS_Deno_instToJSProxy___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSProxy = (const lean_object*)&l_Lasm_JS_Deno_instToJSProxy___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBoolean___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instToJSDoubleOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instToJSDoubleOrBoolean___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBoolean = (const lean_object*)&l_Lasm_JS_Deno_instToJSDoubleOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean = (const lean_object*)&l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean = (const lean_object*)&l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caCerts"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "proxy"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "poolMaxIdlePerHost"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "poolIdleTimeout"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "http1"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "http2"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "allowHost"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "localAddress"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "http2MaxHeaderListSize"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__8_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "keyFormat"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__9 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__9_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__10 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__10_value;
static const lean_string_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cert"};
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__11 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__0;
static const lean_closure_object l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Deno_HttpClient_close___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "close"};
static const lean_object* l_Lasm_JS_Deno_HttpClient_close___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_HttpClient_close___closed__0_value;
static const lean_array_object l_Lasm_JS_Deno_HttpClient_close___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Deno_HttpClient_close___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_HttpClient_close___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Deno_HttpClient_close___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Deno_HttpClient_close___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpClient_close(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpClient_close___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__6(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__6___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1(lean_object*);
static const lean_string_object l_Lasm_JS_Deno_createHttpClient___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Deno.createHttpClient"};
static const lean_object* l_Lasm_JS_Deno_createHttpClient___closed__0 = (const lean_object*)&l_Lasm_JS_Deno_createHttpClient___closed__0_value;
static const lean_string_object l_Lasm_JS_Deno_createHttpClient___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Deno_createHttpClient___closed__1 = (const lean_object*)&l_Lasm_JS_Deno_createHttpClient___closed__1_value;
static const lean_string_object l_Lasm_JS_Deno_createHttpClient___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Deno.createHttpClient"};
static const lean_object* l_Lasm_JS_Deno_createHttpClient___closed__2 = (const lean_object*)&l_Lasm_JS_Deno_createHttpClient___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Deno_createHttpClient___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Deno_createHttpClient___closed__0_value),((lean_object*)&l_Lasm_JS_Deno_createHttpClient___closed__1_value),((lean_object*)&l_Lasm_JS_Deno_createHttpClient___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Deno_createHttpClient___closed__3 = (const lean_object*)&l_Lasm_JS_Deno_createHttpClient___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createHttpClient(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createHttpClient___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSHttpClient___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpClient___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSHttpClient___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSHttpClient___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Deno_instFromJSHttpClient___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorIdx(uint8_t v_x_22_){
_start:
{
switch(v_x_22_)
{
case 0:
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(0u);
return v___x_23_;
}
case 1:
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(1u);
return v___x_24_;
}
case 2:
{
lean_object* v___x_25_; 
v___x_25_ = lean_unsigned_to_nat(2u);
return v___x_25_;
}
case 3:
{
lean_object* v___x_26_; 
v___x_26_ = lean_unsigned_to_nat(3u);
return v___x_26_;
}
case 4:
{
lean_object* v___x_27_; 
v___x_27_ = lean_unsigned_to_nat(4u);
return v___x_27_;
}
default: 
{
lean_object* v___x_28_; 
v___x_28_ = lean_unsigned_to_nat(5u);
return v___x_28_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorIdx___boxed(lean_object* v_x_29_){
_start:
{
uint8_t v_x_boxed_30_; lean_object* v_res_31_; 
v_x_boxed_30_ = lean_unbox(v_x_29_);
v_res_31_ = l_Lasm_JS_Deno_ProxyTransport_ctorIdx(v_x_boxed_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim___redArg(lean_object* v_k_32_){
_start:
{
lean_inc(v_k_32_);
return v_k_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim___redArg___boxed(lean_object* v_k_33_){
_start:
{
lean_object* v_res_34_; 
v_res_34_ = l_Lasm_JS_Deno_ProxyTransport_ctorElim___redArg(v_k_33_);
lean_dec(v_k_33_);
return v_res_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim(lean_object* v_motive_35_, lean_object* v_ctorIdx_36_, uint8_t v_t_37_, lean_object* v_h_38_, lean_object* v_k_39_){
_start:
{
lean_inc(v_k_39_);
return v_k_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_ctorElim___boxed(lean_object* v_motive_40_, lean_object* v_ctorIdx_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_k_44_){
_start:
{
uint8_t v_t_boxed_45_; lean_object* v_res_46_; 
v_t_boxed_45_ = lean_unbox(v_t_42_);
v_res_46_ = l_Lasm_JS_Deno_ProxyTransport_ctorElim(v_motive_40_, v_ctorIdx_41_, v_t_boxed_45_, v_h_43_, v_k_44_);
lean_dec(v_k_44_);
lean_dec(v_ctorIdx_41_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim___redArg(lean_object* v_http_47_){
_start:
{
lean_inc(v_http_47_);
return v_http_47_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim___redArg___boxed(lean_object* v_http_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lasm_JS_Deno_ProxyTransport_http_elim___redArg(v_http_48_);
lean_dec(v_http_48_);
return v_res_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim(lean_object* v_motive_50_, uint8_t v_t_51_, lean_object* v_h_52_, lean_object* v_http_53_){
_start:
{
lean_inc(v_http_53_);
return v_http_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_http_elim___boxed(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_http_57_){
_start:
{
uint8_t v_t_boxed_58_; lean_object* v_res_59_; 
v_t_boxed_58_ = lean_unbox(v_t_55_);
v_res_59_ = l_Lasm_JS_Deno_ProxyTransport_http_elim(v_motive_54_, v_t_boxed_58_, v_h_56_, v_http_57_);
lean_dec(v_http_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim___redArg(lean_object* v_https_60_){
_start:
{
lean_inc(v_https_60_);
return v_https_60_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim___redArg___boxed(lean_object* v_https_61_){
_start:
{
lean_object* v_res_62_; 
v_res_62_ = l_Lasm_JS_Deno_ProxyTransport_https_elim___redArg(v_https_61_);
lean_dec(v_https_61_);
return v_res_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim(lean_object* v_motive_63_, uint8_t v_t_64_, lean_object* v_h_65_, lean_object* v_https_66_){
_start:
{
lean_inc(v_https_66_);
return v_https_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_https_elim___boxed(lean_object* v_motive_67_, lean_object* v_t_68_, lean_object* v_h_69_, lean_object* v_https_70_){
_start:
{
uint8_t v_t_boxed_71_; lean_object* v_res_72_; 
v_t_boxed_71_ = lean_unbox(v_t_68_);
v_res_72_ = l_Lasm_JS_Deno_ProxyTransport_https_elim(v_motive_67_, v_t_boxed_71_, v_h_69_, v_https_70_);
lean_dec(v_https_70_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim___redArg(lean_object* v_socks5_73_){
_start:
{
lean_inc(v_socks5_73_);
return v_socks5_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim___redArg___boxed(lean_object* v_socks5_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lasm_JS_Deno_ProxyTransport_socks5_elim___redArg(v_socks5_74_);
lean_dec(v_socks5_74_);
return v_res_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim(lean_object* v_motive_76_, uint8_t v_t_77_, lean_object* v_h_78_, lean_object* v_socks5_79_){
_start:
{
lean_inc(v_socks5_79_);
return v_socks5_79_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_socks5_elim___boxed(lean_object* v_motive_80_, lean_object* v_t_81_, lean_object* v_h_82_, lean_object* v_socks5_83_){
_start:
{
uint8_t v_t_boxed_84_; lean_object* v_res_85_; 
v_t_boxed_84_ = lean_unbox(v_t_81_);
v_res_85_ = l_Lasm_JS_Deno_ProxyTransport_socks5_elim(v_motive_80_, v_t_boxed_84_, v_h_82_, v_socks5_83_);
lean_dec(v_socks5_83_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim___redArg(lean_object* v_tcp_86_){
_start:
{
lean_inc(v_tcp_86_);
return v_tcp_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim___redArg___boxed(lean_object* v_tcp_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lasm_JS_Deno_ProxyTransport_tcp_elim___redArg(v_tcp_87_);
lean_dec(v_tcp_87_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim(lean_object* v_motive_89_, uint8_t v_t_90_, lean_object* v_h_91_, lean_object* v_tcp_92_){
_start:
{
lean_inc(v_tcp_92_);
return v_tcp_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_tcp_elim___boxed(lean_object* v_motive_93_, lean_object* v_t_94_, lean_object* v_h_95_, lean_object* v_tcp_96_){
_start:
{
uint8_t v_t_boxed_97_; lean_object* v_res_98_; 
v_t_boxed_97_ = lean_unbox(v_t_94_);
v_res_98_ = l_Lasm_JS_Deno_ProxyTransport_tcp_elim(v_motive_93_, v_t_boxed_97_, v_h_95_, v_tcp_96_);
lean_dec(v_tcp_96_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim___redArg(lean_object* v_unix_99_){
_start:
{
lean_inc(v_unix_99_);
return v_unix_99_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim___redArg___boxed(lean_object* v_unix_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lasm_JS_Deno_ProxyTransport_unix_elim___redArg(v_unix_100_);
lean_dec(v_unix_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim(lean_object* v_motive_102_, uint8_t v_t_103_, lean_object* v_h_104_, lean_object* v_unix_105_){
_start:
{
lean_inc(v_unix_105_);
return v_unix_105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_unix_elim___boxed(lean_object* v_motive_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_unix_109_){
_start:
{
uint8_t v_t_boxed_110_; lean_object* v_res_111_; 
v_t_boxed_110_ = lean_unbox(v_t_107_);
v_res_111_ = l_Lasm_JS_Deno_ProxyTransport_unix_elim(v_motive_106_, v_t_boxed_110_, v_h_108_, v_unix_109_);
lean_dec(v_unix_109_);
return v_res_111_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim___redArg(lean_object* v_vsock_112_){
_start:
{
lean_inc(v_vsock_112_);
return v_vsock_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim___redArg___boxed(lean_object* v_vsock_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lasm_JS_Deno_ProxyTransport_vsock_elim___redArg(v_vsock_113_);
lean_dec(v_vsock_113_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim(lean_object* v_motive_115_, uint8_t v_t_116_, lean_object* v_h_117_, lean_object* v_vsock_118_){
_start:
{
lean_inc(v_vsock_118_);
return v_vsock_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_ProxyTransport_vsock_elim___boxed(lean_object* v_motive_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_vsock_122_){
_start:
{
uint8_t v_t_boxed_123_; lean_object* v_res_124_; 
v_t_boxed_123_ = lean_unbox(v_t_120_);
v_res_124_ = l_Lasm_JS_Deno_ProxyTransport_vsock_elim(v_motive_119_, v_t_boxed_123_, v_h_121_, v_vsock_122_);
lean_dec(v_vsock_122_);
return v_res_124_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqProxyTransport_beq(uint8_t v_x_125_, uint8_t v_y_126_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_127_ = l_Lasm_JS_Deno_ProxyTransport_ctorIdx(v_x_125_);
v___x_128_ = l_Lasm_JS_Deno_ProxyTransport_ctorIdx(v_y_126_);
v___x_129_ = lean_nat_dec_eq(v___x_127_, v___x_128_);
lean_dec(v___x_128_);
lean_dec(v___x_127_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqProxyTransport_beq___boxed(lean_object* v_x_130_, lean_object* v_y_131_){
_start:
{
uint8_t v_x_21__boxed_132_; uint8_t v_y_22__boxed_133_; uint8_t v_res_134_; lean_object* v_r_135_; 
v_x_21__boxed_132_ = lean_unbox(v_x_130_);
v_y_22__boxed_133_ = lean_unbox(v_y_131_);
v_res_134_ = l_Lasm_JS_Deno_instBEqProxyTransport_beq(v_x_21__boxed_132_, v_y_22__boxed_133_);
v_r_135_ = lean_box(v_res_134_);
return v_r_135_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = lean_unsigned_to_nat(2u);
v___x_157_ = lean_nat_to_int(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13(void){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_unsigned_to_nat(1u);
v___x_159_ = lean_nat_to_int(v___x_158_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr(uint8_t v_x_160_, lean_object* v_prec_161_){
_start:
{
lean_object* v___y_163_; lean_object* v___y_170_; lean_object* v___y_177_; lean_object* v___y_184_; lean_object* v___y_191_; lean_object* v___y_198_; 
switch(v_x_160_)
{
case 0:
{
lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_204_ = lean_unsigned_to_nat(1024u);
v___x_205_ = lean_nat_dec_le(v___x_204_, v_prec_161_);
if (v___x_205_ == 0)
{
lean_object* v___x_206_; 
v___x_206_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12);
v___y_163_ = v___x_206_;
goto v___jp_162_;
}
else
{
lean_object* v___x_207_; 
v___x_207_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13);
v___y_163_ = v___x_207_;
goto v___jp_162_;
}
}
case 1:
{
lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_208_ = lean_unsigned_to_nat(1024u);
v___x_209_ = lean_nat_dec_le(v___x_208_, v_prec_161_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
v___x_210_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12);
v___y_170_ = v___x_210_;
goto v___jp_169_;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13);
v___y_170_ = v___x_211_;
goto v___jp_169_;
}
}
case 2:
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = lean_unsigned_to_nat(1024u);
v___x_213_ = lean_nat_dec_le(v___x_212_, v_prec_161_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; 
v___x_214_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12);
v___y_177_ = v___x_214_;
goto v___jp_176_;
}
else
{
lean_object* v___x_215_; 
v___x_215_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13);
v___y_177_ = v___x_215_;
goto v___jp_176_;
}
}
case 3:
{
lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_216_ = lean_unsigned_to_nat(1024u);
v___x_217_ = lean_nat_dec_le(v___x_216_, v_prec_161_);
if (v___x_217_ == 0)
{
lean_object* v___x_218_; 
v___x_218_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12);
v___y_184_ = v___x_218_;
goto v___jp_183_;
}
else
{
lean_object* v___x_219_; 
v___x_219_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13);
v___y_184_ = v___x_219_;
goto v___jp_183_;
}
}
case 4:
{
lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_220_ = lean_unsigned_to_nat(1024u);
v___x_221_ = lean_nat_dec_le(v___x_220_, v_prec_161_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
v___x_222_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12);
v___y_191_ = v___x_222_;
goto v___jp_190_;
}
else
{
lean_object* v___x_223_; 
v___x_223_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13);
v___y_191_ = v___x_223_;
goto v___jp_190_;
}
}
default: 
{
lean_object* v___x_224_; uint8_t v___x_225_; 
v___x_224_ = lean_unsigned_to_nat(1024u);
v___x_225_ = lean_nat_dec_le(v___x_224_, v_prec_161_);
if (v___x_225_ == 0)
{
lean_object* v___x_226_; 
v___x_226_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12);
v___y_198_ = v___x_226_;
goto v___jp_197_;
}
else
{
lean_object* v___x_227_; 
v___x_227_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13);
v___y_198_ = v___x_227_;
goto v___jp_197_;
}
}
}
v___jp_162_:
{
lean_object* v___x_164_; lean_object* v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_164_ = ((lean_object*)(l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__1));
lean_inc(v___y_163_);
v___x_165_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_165_, 0, v___y_163_);
lean_ctor_set(v___x_165_, 1, v___x_164_);
v___x_166_ = 0;
v___x_167_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_167_, 0, v___x_165_);
lean_ctor_set_uint8(v___x_167_, sizeof(void*)*1, v___x_166_);
v___x_168_ = l_Repr_addAppParen(v___x_167_, v_prec_161_);
return v___x_168_;
}
v___jp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_171_ = ((lean_object*)(l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__3));
lean_inc(v___y_170_);
v___x_172_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_172_, 0, v___y_170_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = 0;
v___x_174_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_174_, 0, v___x_172_);
lean_ctor_set_uint8(v___x_174_, sizeof(void*)*1, v___x_173_);
v___x_175_ = l_Repr_addAppParen(v___x_174_, v_prec_161_);
return v___x_175_;
}
v___jp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; uint8_t v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; 
v___x_178_ = ((lean_object*)(l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__5));
lean_inc(v___y_177_);
v___x_179_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_179_, 0, v___y_177_);
lean_ctor_set(v___x_179_, 1, v___x_178_);
v___x_180_ = 0;
v___x_181_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_181_, 0, v___x_179_);
lean_ctor_set_uint8(v___x_181_, sizeof(void*)*1, v___x_180_);
v___x_182_ = l_Repr_addAppParen(v___x_181_, v_prec_161_);
return v___x_182_;
}
v___jp_183_:
{
lean_object* v___x_185_; lean_object* v___x_186_; uint8_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_185_ = ((lean_object*)(l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__7));
lean_inc(v___y_184_);
v___x_186_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_186_, 0, v___y_184_);
lean_ctor_set(v___x_186_, 1, v___x_185_);
v___x_187_ = 0;
v___x_188_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_188_, 0, v___x_186_);
lean_ctor_set_uint8(v___x_188_, sizeof(void*)*1, v___x_187_);
v___x_189_ = l_Repr_addAppParen(v___x_188_, v_prec_161_);
return v___x_189_;
}
v___jp_190_:
{
lean_object* v___x_192_; lean_object* v___x_193_; uint8_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_192_ = ((lean_object*)(l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__9));
lean_inc(v___y_191_);
v___x_193_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_193_, 0, v___y_191_);
lean_ctor_set(v___x_193_, 1, v___x_192_);
v___x_194_ = 0;
v___x_195_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_195_, 0, v___x_193_);
lean_ctor_set_uint8(v___x_195_, sizeof(void*)*1, v___x_194_);
v___x_196_ = l_Repr_addAppParen(v___x_195_, v_prec_161_);
return v___x_196_;
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_199_ = ((lean_object*)(l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__11));
lean_inc(v___y_198_);
v___x_200_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_200_, 0, v___y_198_);
lean_ctor_set(v___x_200_, 1, v___x_199_);
v___x_201_ = 0;
v___x_202_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_202_, 0, v___x_200_);
lean_ctor_set_uint8(v___x_202_, sizeof(void*)*1, v___x_201_);
v___x_203_ = l_Repr_addAppParen(v___x_202_, v_prec_161_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprProxyTransport_repr___boxed(lean_object* v_x_228_, lean_object* v_prec_229_){
_start:
{
uint8_t v_x_333__boxed_230_; lean_object* v_res_231_; 
v_x_333__boxed_230_ = lean_unbox(v_x_228_);
v_res_231_ = l_Lasm_JS_Deno_instReprProxyTransport_repr(v_x_333__boxed_230_, v_prec_229_);
lean_dec(v_prec_229_);
return v_res_231_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedProxyTransport_default(void){
_start:
{
uint8_t v___x_234_; 
v___x_234_ = 0;
return v___x_234_;
}
}
static uint8_t _init_l_Lasm_JS_Deno_instInhabitedProxyTransport(void){
_start:
{
uint8_t v___x_235_; 
v___x_235_ = 0;
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0(uint8_t v_x_254_){
_start:
{
switch(v_x_254_)
{
case 0:
{
lean_object* v___x_255_; 
v___x_255_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__1));
return v___x_255_;
}
case 1:
{
lean_object* v___x_256_; 
v___x_256_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__3));
return v___x_256_;
}
case 2:
{
lean_object* v___x_257_; 
v___x_257_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__5));
return v___x_257_;
}
case 3:
{
lean_object* v___x_258_; 
v___x_258_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__7));
return v___x_258_;
}
case 4:
{
lean_object* v___x_259_; 
v___x_259_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__9));
return v___x_259_;
}
default: 
{
lean_object* v___x_260_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__11));
return v___x_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___boxed(lean_object* v_x_261_){
_start:
{
uint8_t v_x_108__boxed_262_; lean_object* v_res_263_; 
v_x_108__boxed_262_ = lean_unbox(v_x_261_);
v_res_263_ = l_Lasm_JS_Deno_instToJSProxyTransport___lam__0(v_x_108__boxed_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0(lean_object* v_x_287_){
_start:
{
if (lean_obj_tag(v_x_287_) == 4)
{
lean_object* v_s_290_; lean_object* v___x_291_; uint8_t v___x_292_; 
v_s_290_ = lean_ctor_get(v_x_287_, 0);
v___x_291_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__0));
v___x_292_ = lean_string_dec_eq(v_s_290_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_293_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__2));
v___x_294_ = lean_string_dec_eq(v_s_290_, v___x_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; uint8_t v___x_296_; 
v___x_295_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__4));
v___x_296_ = lean_string_dec_eq(v_s_290_, v___x_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; uint8_t v___x_298_; 
v___x_297_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__6));
v___x_298_ = lean_string_dec_eq(v_s_290_, v___x_297_);
if (v___x_298_ == 0)
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__8));
v___x_300_ = lean_string_dec_eq(v_s_290_, v___x_299_);
if (v___x_300_ == 0)
{
lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_301_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__10));
v___x_302_ = lean_string_dec_eq(v_s_290_, v___x_301_);
if (v___x_302_ == 0)
{
goto v___jp_288_;
}
else
{
lean_object* v___x_303_; 
v___x_303_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__2));
return v___x_303_;
}
}
else
{
lean_object* v___x_304_; 
v___x_304_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__3));
return v___x_304_;
}
}
else
{
lean_object* v___x_305_; 
v___x_305_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__4));
return v___x_305_;
}
}
else
{
lean_object* v___x_306_; 
v___x_306_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__5));
return v___x_306_;
}
}
else
{
lean_object* v___x_307_; 
v___x_307_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__6));
return v___x_307_;
}
}
else
{
lean_object* v___x_308_; 
v___x_308_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__7));
return v___x_308_;
}
}
else
{
goto v___jp_288_;
}
v___jp_288_:
{
lean_object* v___x_289_; 
v___x_289_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___closed__1));
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0___boxed(lean_object* v_x_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lasm_JS_Deno_instFromJSProxyTransport___lam__0(v_x_309_);
lean_dec(v_x_309_);
return v_res_310_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___redArg(){
_start:
{
uint8_t v___x_319_; 
v___x_319_ = 1;
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___redArg___boxed(lean_object* v___dummy_320_){
_start:
{
uint8_t v_res_321_; lean_object* v_r_322_; 
v_res_321_ = l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___redArg();
v_r_322_ = lean_box(v_res_321_);
return v_r_322_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq(lean_object* v_x_323_, lean_object* v_y_324_){
_start:
{
uint8_t v___x_325_; 
v___x_325_ = 1;
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq___boxed(lean_object* v_x_326_, lean_object* v_y_327_){
_start:
{
uint8_t v_res_328_; lean_object* v_r_329_; 
v_res_328_ = l_Lasm_JS_Deno_instBEqCreateHttpClientOptionsKeyFormat_beq(v_x_326_, v_y_327_);
v_r_329_ = lean_box(v_res_328_);
return v_r_329_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg(lean_object* v_prec_335_){
_start:
{
lean_object* v___y_337_; lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = lean_unsigned_to_nat(1024u);
v___x_344_ = lean_nat_dec_le(v___x_343_, v_prec_335_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
v___x_345_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__12);
v___y_337_ = v___x_345_;
goto v___jp_336_;
}
else
{
lean_object* v___x_346_; 
v___x_346_ = lean_obj_once(&l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13, &l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13_once, _init_l_Lasm_JS_Deno_instReprProxyTransport_repr___closed__13);
v___y_337_ = v___x_346_;
goto v___jp_336_;
}
v___jp_336_:
{
lean_object* v___x_338_; lean_object* v___x_339_; uint8_t v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_338_ = ((lean_object*)(l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___closed__1));
lean_inc(v___y_337_);
v___x_339_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_339_, 0, v___y_337_);
lean_ctor_set(v___x_339_, 1, v___x_338_);
v___x_340_ = 0;
v___x_341_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_341_, 0, v___x_339_);
lean_ctor_set_uint8(v___x_341_, sizeof(void*)*1, v___x_340_);
v___x_342_ = l_Repr_addAppParen(v___x_341_, v_prec_335_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg___boxed(lean_object* v_prec_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg(v_prec_347_);
lean_dec(v_prec_347_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr(lean_object* v_x_349_, lean_object* v_prec_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___redArg(v_prec_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr___boxed(lean_object* v_x_352_, lean_object* v_prec_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lasm_JS_Deno_instReprCreateHttpClientOptionsKeyFormat_repr(v_x_352_, v_prec_353_);
lean_dec(v_prec_353_);
return v_res_354_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat_default(void){
_start:
{
lean_object* v___x_357_; 
v___x_357_ = lean_box(0);
return v___x_357_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat(void){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = lean_box(0);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0(lean_object* v_x_362_){
_start:
{
lean_object* v___x_363_; 
v___x_363_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1));
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0(lean_object* v_x_370_){
_start:
{
if (lean_obj_tag(v_x_370_) == 4)
{
lean_object* v_s_373_; lean_object* v___x_374_; uint8_t v___x_375_; 
v_s_373_ = lean_ctor_get(v_x_370_, 0);
v___x_374_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0));
v___x_375_ = lean_string_dec_eq(v_s_373_, v___x_374_);
if (v___x_375_ == 0)
{
goto v___jp_371_;
}
else
{
lean_object* v___x_376_; 
v___x_376_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1));
return v___x_376_;
}
}
else
{
goto v___jp_371_;
}
v___jp_371_:
{
lean_object* v___x_372_; 
v___x_372_ = ((lean_object*)(l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___closed__0));
return v___x_372_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0___boxed(lean_object* v_x_377_){
_start:
{
lean_object* v_res_378_; 
v_res_378_ = l_Lasm_JS_Deno_instFromJSCreateHttpClientOptionsKeyFormat___lam__0(v_x_377_);
lean_dec(v_x_377_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSBasicAuth___lam__0(lean_object* v_d_388_){
_start:
{
lean_object* v_username_389_; lean_object* v_password_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_407_; 
v_username_389_ = lean_ctor_get(v_d_388_, 0);
v_password_390_ = lean_ctor_get(v_d_388_, 1);
v_isSharedCheck_407_ = !lean_is_exclusive(v_d_388_);
if (v_isSharedCheck_407_ == 0)
{
v___x_392_ = v_d_388_;
v_isShared_393_ = v_isSharedCheck_407_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_password_390_);
lean_inc(v_username_389_);
lean_dec(v_d_388_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_407_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_394_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__0));
v___x_395_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_395_, 0, v_username_389_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 1, v___x_395_);
lean_ctor_set(v___x_392_, 0, v___x_394_);
v___x_397_ = v___x_392_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_394_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v___x_395_);
v___x_397_ = v_reuseFailAlloc_406_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___x_398_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__1));
v___x_399_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_399_, 0, v_password_390_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = lean_unsigned_to_nat(2u);
v___x_402_ = lean_mk_empty_array_with_capacity(v___x_401_);
v___x_403_ = lean_array_push(v___x_402_, v___x_397_);
v___x_404_ = lean_array_push(v___x_403_, v___x_400_);
v___x_405_ = l_Lasm_JS_Web_Support_fields(v___x_404_);
lean_dec_ref(v___x_404_);
return v___x_405_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSProxy___lam__0(lean_object* v___f_417_, lean_object* v___f_418_, lean_object* v___f_419_, lean_object* v___f_420_, lean_object* v___f_421_, lean_object* v_d_422_){
_start:
{
lean_object* v_transport_423_; lean_object* v_url_424_; lean_object* v_basicAuth_425_; lean_object* v_hostname_426_; lean_object* v_port_427_; lean_object* v_path_428_; lean_object* v_cid_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v_transport_423_ = lean_ctor_get(v_d_422_, 0);
lean_inc(v_transport_423_);
v_url_424_ = lean_ctor_get(v_d_422_, 1);
lean_inc(v_url_424_);
v_basicAuth_425_ = lean_ctor_get(v_d_422_, 2);
lean_inc(v_basicAuth_425_);
v_hostname_426_ = lean_ctor_get(v_d_422_, 3);
lean_inc(v_hostname_426_);
v_port_427_ = lean_ctor_get(v_d_422_, 4);
lean_inc(v_port_427_);
v_path_428_ = lean_ctor_get(v_d_422_, 5);
lean_inc(v_path_428_);
v_cid_429_ = lean_ctor_get(v_d_422_, 6);
lean_inc(v_cid_429_);
lean_dec_ref(v_d_422_);
v___x_430_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__0));
v___x_431_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_417_, v_transport_423_);
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__1));
lean_inc_ref_n(v___f_418_, 2);
v___x_434_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_418_, v_url_424_);
v___x_435_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_433_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
v___x_436_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__2));
v___x_437_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_419_, v_basicAuth_425_);
v___x_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_436_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
v___x_439_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__3));
v___x_440_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_418_, v_hostname_426_);
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_439_);
lean_ctor_set(v___x_441_, 1, v___x_440_);
v___x_442_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__4));
v___x_443_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_420_, v_port_427_);
v___x_444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_442_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__5));
v___x_446_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_418_, v_path_428_);
v___x_447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_445_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__6));
v___x_449_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_421_, v_cid_429_);
v___x_450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = lean_unsigned_to_nat(7u);
v___x_452_ = lean_mk_empty_array_with_capacity(v___x_451_);
v___x_453_ = lean_array_push(v___x_452_, v___x_432_);
v___x_454_ = lean_array_push(v___x_453_, v___x_435_);
v___x_455_ = lean_array_push(v___x_454_, v___x_438_);
v___x_456_ = lean_array_push(v___x_455_, v___x_441_);
v___x_457_ = lean_array_push(v___x_456_, v___x_444_);
v___x_458_ = lean_array_push(v___x_457_, v___x_447_);
v___x_459_ = lean_array_push(v___x_458_, v___x_450_);
v___x_460_ = l_Lasm_JS_Web_Support_fields(v___x_459_);
lean_dec_ref(v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorIdx(lean_object* v_x_471_){
_start:
{
if (lean_obj_tag(v_x_471_) == 0)
{
lean_object* v___x_472_; 
v___x_472_ = lean_unsigned_to_nat(0u);
return v___x_472_;
}
else
{
lean_object* v___x_473_; 
v___x_473_ = lean_unsigned_to_nat(1u);
return v___x_473_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorIdx___boxed(lean_object* v_x_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorIdx(v_x_474_);
lean_dec_ref(v_x_474_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(lean_object* v_t_476_, lean_object* v_k_477_){
_start:
{
if (lean_obj_tag(v_t_476_) == 0)
{
double v_value_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_value_478_ = lean_ctor_get_float(v_t_476_, 0);
v___x_479_ = lean_box_float(v_value_478_);
v___x_480_ = lean_apply_1(v_k_477_, v___x_479_);
return v___x_480_;
}
else
{
uint8_t v_value_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_value_481_ = lean_ctor_get_uint8(v_t_476_, 0);
v___x_482_ = lean_box(v_value_481_);
v___x_483_ = lean_apply_1(v_k_477_, v___x_482_);
return v___x_483_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg___boxed(lean_object* v_t_484_, lean_object* v_k_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(v_t_484_, v_k_485_);
lean_dec_ref(v_t_484_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim(lean_object* v_motive_487_, lean_object* v_ctorIdx_488_, lean_object* v_t_489_, lean_object* v_h_490_, lean_object* v_k_491_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(v_t_489_, v_k_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___boxed(lean_object* v_motive_493_, lean_object* v_ctorIdx_494_, lean_object* v_t_495_, lean_object* v_h_496_, lean_object* v_k_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim(v_motive_493_, v_ctorIdx_494_, v_t_495_, v_h_496_, v_k_497_);
lean_dec_ref(v_t_495_);
lean_dec(v_ctorIdx_494_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim___redArg(lean_object* v_t_499_, lean_object* v_double_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(v_t_499_, v_double_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim___redArg___boxed(lean_object* v_t_502_, lean_object* v_double_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lasm_JS_Deno_DoubleOrBoolean_double_elim___redArg(v_t_502_, v_double_503_);
lean_dec_ref(v_t_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim(lean_object* v_motive_505_, lean_object* v_t_506_, lean_object* v_h_507_, lean_object* v_double_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(v_t_506_, v_double_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_double_elim___boxed(lean_object* v_motive_510_, lean_object* v_t_511_, lean_object* v_h_512_, lean_object* v_double_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lasm_JS_Deno_DoubleOrBoolean_double_elim(v_motive_510_, v_t_511_, v_h_512_, v_double_513_);
lean_dec_ref(v_t_511_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim___redArg(lean_object* v_t_515_, lean_object* v_boolean_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(v_t_515_, v_boolean_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim___redArg___boxed(lean_object* v_t_518_, lean_object* v_boolean_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim___redArg(v_t_518_, v_boolean_519_);
lean_dec_ref(v_t_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim(lean_object* v_motive_521_, lean_object* v_t_522_, lean_object* v_h_523_, lean_object* v_boolean_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = l_Lasm_JS_Deno_DoubleOrBoolean_ctorElim___redArg(v_t_522_, v_boolean_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim___boxed(lean_object* v_motive_526_, lean_object* v_t_527_, lean_object* v_h_528_, lean_object* v_boolean_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lasm_JS_Deno_DoubleOrBoolean_boolean_elim(v_motive_526_, v_t_527_, v_h_528_, v_boolean_529_);
lean_dec_ref(v_t_527_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSDoubleOrBoolean___lam__0(lean_object* v_x_531_){
_start:
{
if (lean_obj_tag(v_x_531_) == 0)
{
double v_value_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_value_532_ = lean_ctor_get_float(v_x_531_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v_x_531_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v_x_531_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_dec(v_x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 3);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_538_, 0, v_value_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
else
{
uint8_t v_value_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
v_value_540_ = lean_ctor_get_uint8(v_x_531_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v_x_531_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v_x_531_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_dec(v_x_531_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
lean_ctor_set_tag(v___x_542_, 2);
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_546_, 0, v_value_540_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___lam__0(double v_value_550_){
_start:
{
lean_object* v___x_551_; 
v___x_551_ = lean_alloc_ctor(0, 0, 8);
lean_ctor_set_float(v___x_551_, 0, v_value_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___lam__0___boxed(lean_object* v_value_552_){
_start:
{
double v_value_boxed_553_; lean_object* v_res_554_; 
v_value_boxed_553_ = lean_unbox_float(v_value_552_);
lean_dec_ref(v_value_552_);
v_res_554_ = l_Lasm_JS_Deno_instCoeFloatDoubleOrBoolean___lam__0(v_value_boxed_553_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___lam__0(uint8_t v_value_557_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_558_, 0, v_value_557_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___lam__0___boxed(lean_object* v_value_559_){
_start:
{
uint8_t v_value_boxed_560_; lean_object* v_res_561_; 
v_value_boxed_560_ = lean_unbox(v_value_559_);
v_res_561_ = l_Lasm_JS_Deno_instCoeBoolDoubleOrBoolean___lam__0(v_value_boxed_560_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0(lean_object* v___x_576_, lean_object* v___x_577_, lean_object* v___f_578_, lean_object* v___f_579_, lean_object* v___f_580_, lean_object* v___f_581_, lean_object* v___f_582_, lean_object* v_d_583_){
_start:
{
lean_object* v_caCerts_584_; lean_object* v_proxy_585_; lean_object* v_poolMaxIdlePerHost_586_; lean_object* v_poolIdleTimeout_587_; lean_object* v_http1_588_; lean_object* v_http2_589_; lean_object* v_allowHost_590_; lean_object* v_localAddress_591_; lean_object* v_http2MaxHeaderListSize_592_; lean_object* v_keyFormat_593_; lean_object* v_key_594_; lean_object* v_cert_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v_caCerts_584_ = lean_ctor_get(v_d_583_, 0);
lean_inc(v_caCerts_584_);
v_proxy_585_ = lean_ctor_get(v_d_583_, 1);
lean_inc(v_proxy_585_);
v_poolMaxIdlePerHost_586_ = lean_ctor_get(v_d_583_, 2);
lean_inc(v_poolMaxIdlePerHost_586_);
v_poolIdleTimeout_587_ = lean_ctor_get(v_d_583_, 3);
lean_inc(v_poolIdleTimeout_587_);
v_http1_588_ = lean_ctor_get(v_d_583_, 4);
lean_inc(v_http1_588_);
v_http2_589_ = lean_ctor_get(v_d_583_, 5);
lean_inc(v_http2_589_);
v_allowHost_590_ = lean_ctor_get(v_d_583_, 6);
lean_inc(v_allowHost_590_);
v_localAddress_591_ = lean_ctor_get(v_d_583_, 7);
lean_inc(v_localAddress_591_);
v_http2MaxHeaderListSize_592_ = lean_ctor_get(v_d_583_, 8);
lean_inc(v_http2MaxHeaderListSize_592_);
v_keyFormat_593_ = lean_ctor_get(v_d_583_, 9);
lean_inc(v_keyFormat_593_);
v_key_594_ = lean_ctor_get(v_d_583_, 10);
lean_inc(v_key_594_);
v_cert_595_ = lean_ctor_get(v_d_583_, 11);
lean_inc(v_cert_595_);
lean_dec_ref(v_d_583_);
v___x_596_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__0));
v___x_597_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_576_, v_caCerts_584_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
v___x_599_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__1));
v___x_600_ = l_Lasm_JS_Web_Support_optional___redArg(v___x_577_, v_proxy_585_);
v___x_601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__2));
lean_inc_ref(v___f_578_);
v___x_603_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_578_, v_poolMaxIdlePerHost_586_);
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_602_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__3));
v___x_606_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_579_, v_poolIdleTimeout_587_);
v___x_607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_605_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__4));
lean_inc_ref_n(v___f_580_, 2);
v___x_609_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_580_, v_http1_588_);
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_608_);
lean_ctor_set(v___x_610_, 1, v___x_609_);
v___x_611_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__5));
v___x_612_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_580_, v_http2_589_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___x_611_);
lean_ctor_set(v___x_613_, 1, v___x_612_);
v___x_614_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__6));
v___x_615_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_580_, v_allowHost_590_);
v___x_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_614_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__7));
lean_inc_ref_n(v___f_581_, 2);
v___x_618_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_581_, v_localAddress_591_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_617_);
lean_ctor_set(v___x_619_, 1, v___x_618_);
v___x_620_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__8));
v___x_621_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_578_, v_http2MaxHeaderListSize_592_);
v___x_622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__9));
v___x_624_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_582_, v_keyFormat_593_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_623_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__10));
v___x_627_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_581_, v_key_594_);
v___x_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_626_);
lean_ctor_set(v___x_628_, 1, v___x_627_);
v___x_629_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__11));
v___x_630_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_581_, v_cert_595_);
v___x_631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = lean_unsigned_to_nat(12u);
v___x_633_ = lean_mk_empty_array_with_capacity(v___x_632_);
v___x_634_ = lean_array_push(v___x_633_, v___x_598_);
v___x_635_ = lean_array_push(v___x_634_, v___x_601_);
v___x_636_ = lean_array_push(v___x_635_, v___x_604_);
v___x_637_ = lean_array_push(v___x_636_, v___x_607_);
v___x_638_ = lean_array_push(v___x_637_, v___x_610_);
v___x_639_ = lean_array_push(v___x_638_, v___x_613_);
v___x_640_ = lean_array_push(v___x_639_, v___x_616_);
v___x_641_ = lean_array_push(v___x_640_, v___x_619_);
v___x_642_ = lean_array_push(v___x_641_, v___x_622_);
v___x_643_ = lean_array_push(v___x_642_, v___x_625_);
v___x_644_ = lean_array_push(v___x_643_, v___x_628_);
v___x_645_ = lean_array_push(v___x_644_, v___x_631_);
v___x_646_ = l_Lasm_JS_Web_Support_fields(v___x_645_);
lean_dec_ref(v___x_645_);
return v___x_646_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__0(void){
_start:
{
lean_object* v___f_647_; lean_object* v___x_648_; 
v___f_647_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___closed__0));
v___x_648_ = l_Lasm_JS_instToJSArray___redArg(v___f_647_);
return v___x_648_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__2(void){
_start:
{
lean_object* v___f_650_; lean_object* v___f_651_; lean_object* v___f_652_; lean_object* v___f_653_; lean_object* v___f_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___f_657_; 
v___f_650_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___closed__0));
v___f_651_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___closed__0));
v___f_652_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__1));
v___f_653_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSDoubleOrBoolean___closed__0));
v___f_654_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___closed__2));
v___x_655_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy));
v___x_656_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__0, &l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__0_once, _init_l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__0);
v___f_657_ = lean_alloc_closure((void*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0), 8, 7);
lean_closure_set(v___f_657_, 0, v___x_656_);
lean_closure_set(v___f_657_, 1, v___x_655_);
lean_closure_set(v___f_657_, 2, v___f_654_);
lean_closure_set(v___f_657_, 3, v___f_653_);
lean_closure_set(v___f_657_, 4, v___f_652_);
lean_closure_set(v___f_657_, 5, v___f_651_);
lean_closure_set(v___f_657_, 6, v___f_650_);
return v___f_657_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_instToJSCreateHttpClientOptions(void){
_start:
{
lean_object* v___f_658_; 
v___f_658_ = lean_obj_once(&l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__2, &l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__2_once, _init_l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___closed__2);
return v___f_658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___redArg(){
_start:
{
lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_660_ = lean_box(0);
v___x_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_a_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___redArg();
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1(lean_object* v_context_664_, lean_object* v_bytes_665_){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_665_);
if (lean_obj_tag(v___x_667_) == 0)
{
lean_object* v___x_668_; 
lean_dec_ref_known(v___x_667_, 1);
v___x_668_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___redArg();
return v___x_668_;
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
v_a_669_ = lean_ctor_get(v___x_667_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_667_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_667_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1___boxed(lean_object* v_context_677_, lean_object* v_bytes_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1(v_context_677_, v_bytes_678_);
lean_dec_ref(v_bytes_678_);
lean_dec_ref(v_context_677_);
return v_res_680_;
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_681_; uint64_t v___x_682_; 
v___x_681_ = 0;
v___x_682_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_681_);
return v___x_682_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0(uint8_t v_await_683_, uint64_t v_extra_684_){
_start:
{
uint64_t v___x_685_; uint64_t v___y_687_; 
v___x_685_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___closed__0);
if (v_await_683_ == 0)
{
uint64_t v___x_690_; 
v___x_690_ = 0ULL;
v___y_687_ = v___x_690_;
goto v___jp_686_;
}
else
{
uint64_t v___x_691_; 
v___x_691_ = 2ULL;
v___y_687_ = v___x_691_;
goto v___jp_686_;
}
v___jp_686_:
{
uint64_t v___x_688_; uint64_t v___x_689_; 
v___x_688_ = lean_uint64_lor(v___x_685_, v___y_687_);
v___x_689_ = lean_uint64_lor(v___x_688_, v_extra_684_);
return v___x_689_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0___boxed(lean_object* v_await_692_, lean_object* v_extra_693_){
_start:
{
uint8_t v_await_boxed_694_; uint64_t v_extra_boxed_695_; uint64_t v_res_696_; lean_object* v_r_697_; 
v_await_boxed_694_ = lean_unbox(v_await_692_);
v_extra_boxed_695_ = lean_unbox_uint64(v_extra_693_);
lean_dec_ref(v_extra_693_);
v_res_696_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0(v_await_boxed_694_, v_extra_boxed_695_);
v_r_697_ = lean_box_uint64(v_res_696_);
return v_r_697_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__0(void){
_start:
{
uint64_t v___x_698_; uint8_t v___x_699_; uint64_t v___x_700_; 
v___x_698_ = 8ULL;
v___x_699_ = 0;
v___x_700_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__0(v___x_699_, v___x_698_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0(lean_object* v_o_702_, lean_object* v_name_703_, lean_object* v_args_704_){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint64_t v___x_709_; lean_object* v___x_710_; 
v___x_706_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSHttpClient___lam__0___closed__0));
v___x_707_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_707_, 0, v_o_702_);
lean_ctor_set(v___x_707_, 1, v___x_706_);
lean_inc_ref(v_name_703_);
v___x_708_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_708_, 0, v_name_703_);
v___x_709_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__0);
v___x_710_ = l_Lasm_JS_Value_invokeRaw(v___x_707_, v___x_708_, v_args_704_, v___x_709_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
lean_inc(v_a_711_);
lean_dec_ref_known(v___x_710_, 1);
v___x_712_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___closed__1));
v___x_713_ = lean_string_append(v___x_712_, v_name_703_);
lean_dec_ref(v_name_703_);
v___x_714_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1(v___x_713_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v___x_713_);
return v___x_714_;
}
else
{
lean_object* v_a_715_; lean_object* v___x_717_; uint8_t v_isShared_718_; uint8_t v_isSharedCheck_722_; 
lean_dec_ref(v_name_703_);
v_a_715_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_722_ == 0)
{
v___x_717_ = v___x_710_;
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
else
{
lean_inc(v_a_715_);
lean_dec(v___x_710_);
v___x_717_ = lean_box(0);
v_isShared_718_ = v_isSharedCheck_722_;
goto v_resetjp_716_;
}
v_resetjp_716_:
{
lean_object* v___x_720_; 
if (v_isShared_718_ == 0)
{
v___x_720_ = v___x_717_;
goto v_reusejp_719_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_a_715_);
v___x_720_ = v_reuseFailAlloc_721_;
goto v_reusejp_719_;
}
v_reusejp_719_:
{
return v___x_720_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0___boxed(lean_object* v_o_723_, lean_object* v_name_724_, lean_object* v_args_725_, lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0(v_o_723_, v_name_724_, v_args_725_);
return v_res_727_;
}
}
static lean_object* _init_l_Lasm_JS_Deno_HttpClient_close___closed__2(void){
_start:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = ((lean_object*)(l_Lasm_JS_Deno_HttpClient_close___closed__1));
v___x_732_ = l_Lasm_JS_Web_Support_args(v___x_731_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpClient_close(lean_object* v_self_733_){
_start:
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_735_ = ((lean_object*)(l_Lasm_JS_Deno_HttpClient_close___closed__0));
v___x_736_ = lean_obj_once(&l_Lasm_JS_Deno_HttpClient_close___closed__2, &l_Lasm_JS_Deno_HttpClient_close___closed__2_once, _init_l_Lasm_JS_Deno_HttpClient_close___closed__2);
v___x_737_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0(v_self_733_, v___x_735_, v___x_736_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_HttpClient_close___boxed(lean_object* v_self_738_, lean_object* v_a_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lasm_JS_Deno_HttpClient_close(v_self_738_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2(lean_object* v_context_741_, lean_object* v_d_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___redArg();
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2___boxed(lean_object* v_context_745_, lean_object* v_d_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Deno_HttpClient_close_spec__0_spec__1_spec__2(v_context_745_, v_d_746_);
lean_dec(v_d_746_);
lean_dec_ref(v_context_745_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2(lean_object* v_x_749_){
_start:
{
if (lean_obj_tag(v_x_749_) == 0)
{
lean_object* v___x_750_; 
v___x_750_ = lean_box(0);
return v___x_750_;
}
else
{
lean_object* v_val_751_; lean_object* v___x_752_; double v___x_753_; 
v_val_751_ = lean_ctor_get(v_x_749_, 0);
v___x_752_ = lean_alloc_ctor(3, 0, 8);
v___x_753_ = lean_unbox_float(v_val_751_);
lean_ctor_set_float(v___x_752_, 0, v___x_753_);
return v___x_752_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2___boxed(lean_object* v_x_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2(v_x_754_);
lean_dec(v_x_754_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__3(lean_object* v_x_756_){
_start:
{
if (lean_obj_tag(v_x_756_) == 0)
{
lean_object* v___x_757_; 
v___x_757_ = lean_box(0);
return v___x_757_;
}
else
{
lean_object* v_val_758_; 
v_val_758_ = lean_ctor_get(v_x_756_, 0);
lean_inc(v_val_758_);
lean_dec_ref_known(v_x_756_, 1);
if (lean_obj_tag(v_val_758_) == 0)
{
double v_value_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
v_value_759_ = lean_ctor_get_float(v_val_758_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v_val_758_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v_val_758_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_dec(v_val_758_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
lean_ctor_set_tag(v___x_761_, 3);
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_765_, 0, v_value_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
else
{
uint8_t v_value_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
v_value_767_ = lean_ctor_get_uint8(v_val_758_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v_val_758_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v_val_758_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_dec(v_val_758_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
lean_ctor_set_tag(v___x_769_, 2);
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(2, 0, 1);
lean_ctor_set_uint8(v_reuseFailAlloc_773_, 0, v_value_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4(lean_object* v_x_775_){
_start:
{
if (lean_obj_tag(v_x_775_) == 0)
{
lean_object* v___x_776_; 
v___x_776_ = lean_box(0);
return v___x_776_;
}
else
{
lean_object* v_val_777_; lean_object* v___x_778_; uint8_t v___x_779_; 
v_val_777_ = lean_ctor_get(v_x_775_, 0);
v___x_778_ = lean_alloc_ctor(2, 0, 1);
v___x_779_ = lean_unbox(v_val_777_);
lean_ctor_set_uint8(v___x_778_, 0, v___x_779_);
return v___x_778_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4___boxed(lean_object* v_x_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4(v_x_780_);
lean_dec(v_x_780_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(lean_object* v_x_782_){
_start:
{
if (lean_obj_tag(v_x_782_) == 0)
{
lean_object* v___x_783_; 
v___x_783_ = lean_box(0);
return v___x_783_;
}
else
{
lean_object* v_val_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
v_val_784_ = lean_ctor_get(v_x_782_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_x_782_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v_x_782_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_val_784_);
lean_dec(v_x_782_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
lean_ctor_set_tag(v___x_786_, 4);
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_val_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__6(lean_object* v_x_792_){
_start:
{
if (lean_obj_tag(v_x_792_) == 0)
{
lean_object* v___x_793_; 
v___x_793_ = lean_box(0);
return v___x_793_;
}
else
{
lean_object* v___x_794_; 
v___x_794_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptionsKeyFormat___lam__0___closed__1));
return v___x_794_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__6___boxed(lean_object* v_x_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__6(v_x_795_);
lean_dec(v_x_795_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0_spec__0(size_t v_sz_797_, size_t v_i_798_, lean_object* v_bs_799_){
_start:
{
uint8_t v___x_800_; 
v___x_800_ = lean_usize_dec_lt(v_i_798_, v_sz_797_);
if (v___x_800_ == 0)
{
return v_bs_799_;
}
else
{
lean_object* v_v_801_; lean_object* v___x_802_; lean_object* v_bs_x27_803_; lean_object* v___x_804_; size_t v___x_805_; size_t v___x_806_; lean_object* v___x_807_; 
v_v_801_ = lean_array_uget(v_bs_799_, v_i_798_);
v___x_802_ = lean_unsigned_to_nat(0u);
v_bs_x27_803_ = lean_array_uset(v_bs_799_, v_i_798_, v___x_802_);
v___x_804_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_804_, 0, v_v_801_);
v___x_805_ = ((size_t)1ULL);
v___x_806_ = lean_usize_add(v_i_798_, v___x_805_);
v___x_807_ = lean_array_uset(v_bs_x27_803_, v_i_798_, v___x_804_);
v_i_798_ = v___x_806_;
v_bs_799_ = v___x_807_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0_spec__0___boxed(lean_object* v_sz_809_, lean_object* v_i_810_, lean_object* v_bs_811_){
_start:
{
size_t v_sz_boxed_812_; size_t v_i_boxed_813_; lean_object* v_res_814_; 
v_sz_boxed_812_ = lean_unbox_usize(v_sz_809_);
lean_dec(v_sz_809_);
v_i_boxed_813_ = lean_unbox_usize(v_i_810_);
lean_dec(v_i_810_);
v_res_814_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0_spec__0(v_sz_boxed_812_, v_i_boxed_813_, v_bs_811_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0(lean_object* v_x_815_){
_start:
{
if (lean_obj_tag(v_x_815_) == 0)
{
lean_object* v___x_816_; 
v___x_816_ = lean_box(0);
return v___x_816_;
}
else
{
lean_object* v_val_817_; lean_object* v___x_819_; uint8_t v_isShared_820_; uint8_t v_isSharedCheck_827_; 
v_val_817_ = lean_ctor_get(v_x_815_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v_x_815_);
if (v_isSharedCheck_827_ == 0)
{
v___x_819_ = v_x_815_;
v_isShared_820_ = v_isSharedCheck_827_;
goto v_resetjp_818_;
}
else
{
lean_inc(v_val_817_);
lean_dec(v_x_815_);
v___x_819_ = lean_box(0);
v_isShared_820_ = v_isSharedCheck_827_;
goto v_resetjp_818_;
}
v_resetjp_818_:
{
size_t v_sz_821_; size_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_825_; 
v_sz_821_ = lean_array_size(v_val_817_);
v___x_822_ = ((size_t)0ULL);
v___x_823_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0_spec__0(v_sz_821_, v___x_822_, v_val_817_);
if (v_isShared_820_ == 0)
{
lean_ctor_set_tag(v___x_819_, 7);
lean_ctor_set(v___x_819_, 0, v___x_823_);
v___x_825_ = v___x_819_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v___x_823_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__4(lean_object* v_x_828_){
_start:
{
if (lean_obj_tag(v_x_828_) == 0)
{
lean_object* v___x_829_; 
v___x_829_ = lean_box(0);
return v___x_829_;
}
else
{
lean_object* v_val_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_843_; 
v_val_830_ = lean_ctor_get(v_x_828_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v_x_828_);
if (v_isSharedCheck_843_ == 0)
{
v___x_832_ = v_x_828_;
v_isShared_833_ = v_isSharedCheck_843_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_val_830_);
lean_dec(v_x_828_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_843_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_834_ = lean_nat_to_int(v_val_830_);
v___x_835_ = lean_nat_abs(v___x_834_);
v___x_836_ = lean_cstr_to_nat("9007199254740991");
v___x_837_ = lean_nat_dec_le(v___x_835_, v___x_836_);
lean_dec(v___x_835_);
if (v___x_837_ == 0)
{
lean_object* v___x_839_; 
if (v_isShared_833_ == 0)
{
lean_ctor_set_tag(v___x_832_, 5);
lean_ctor_set(v___x_832_, 0, v___x_834_);
v___x_839_ = v___x_832_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_834_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
else
{
double v___x_841_; lean_object* v___x_842_; 
lean_del_object(v___x_832_);
v___x_841_ = l_Float_ofInt(v___x_834_);
lean_dec(v___x_834_);
v___x_842_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_842_, 0, v___x_841_);
return v___x_842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__2(lean_object* v_x_844_){
_start:
{
if (lean_obj_tag(v_x_844_) == 0)
{
lean_object* v___x_845_; 
v___x_845_ = lean_box(0);
return v___x_845_;
}
else
{
lean_object* v_val_846_; uint8_t v___x_847_; 
v_val_846_ = lean_ctor_get(v_x_844_, 0);
v___x_847_ = lean_unbox(v_val_846_);
switch(v___x_847_)
{
case 0:
{
lean_object* v___x_848_; 
v___x_848_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__1));
return v___x_848_;
}
case 1:
{
lean_object* v___x_849_; 
v___x_849_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__3));
return v___x_849_;
}
case 2:
{
lean_object* v___x_850_; 
v___x_850_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__5));
return v___x_850_;
}
case 3:
{
lean_object* v___x_851_; 
v___x_851_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__7));
return v___x_851_;
}
case 4:
{
lean_object* v___x_852_; 
v___x_852_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__9));
return v___x_852_;
}
default: 
{
lean_object* v___x_853_; 
v___x_853_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxyTransport___lam__0___closed__11));
return v___x_853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__2___boxed(lean_object* v_x_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__2(v_x_854_);
lean_dec(v_x_854_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__3(lean_object* v_x_856_){
_start:
{
if (lean_obj_tag(v_x_856_) == 0)
{
lean_object* v___x_857_; 
v___x_857_ = lean_box(0);
return v___x_857_;
}
else
{
lean_object* v_val_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_883_; 
v_val_858_ = lean_ctor_get(v_x_856_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v_x_856_);
if (v_isSharedCheck_883_ == 0)
{
v___x_860_ = v_x_856_;
v_isShared_861_ = v_isSharedCheck_883_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_val_858_);
lean_dec(v_x_856_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_883_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v_username_862_; lean_object* v_password_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_882_; 
v_username_862_ = lean_ctor_get(v_val_858_, 0);
v_password_863_ = lean_ctor_get(v_val_858_, 1);
v_isSharedCheck_882_ = !lean_is_exclusive(v_val_858_);
if (v_isSharedCheck_882_ == 0)
{
v___x_865_ = v_val_858_;
v_isShared_866_ = v_isSharedCheck_882_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_password_863_);
lean_inc(v_username_862_);
lean_dec(v_val_858_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_882_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_867_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__0));
if (v_isShared_861_ == 0)
{
lean_ctor_set_tag(v___x_860_, 4);
lean_ctor_set(v___x_860_, 0, v_username_862_);
v___x_869_ = v___x_860_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_username_862_);
v___x_869_ = v_reuseFailAlloc_881_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
lean_object* v___x_871_; 
if (v_isShared_866_ == 0)
{
lean_ctor_set(v___x_865_, 1, v___x_869_);
lean_ctor_set(v___x_865_, 0, v___x_867_);
v___x_871_ = v___x_865_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_867_);
lean_ctor_set(v_reuseFailAlloc_880_, 1, v___x_869_);
v___x_871_ = v_reuseFailAlloc_880_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_872_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSBasicAuth___lam__0___closed__1));
v___x_873_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_873_, 0, v_password_863_);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_872_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = lean_unsigned_to_nat(2u);
v___x_876_ = lean_mk_empty_array_with_capacity(v___x_875_);
v___x_877_ = lean_array_push(v___x_876_, v___x_871_);
v___x_878_ = lean_array_push(v___x_877_, v___x_874_);
v___x_879_ = l_Lasm_JS_Web_Support_fields(v___x_878_);
lean_dec_ref(v___x_878_);
return v___x_879_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1(lean_object* v_x_884_){
_start:
{
if (lean_obj_tag(v_x_884_) == 0)
{
lean_object* v___x_885_; 
v___x_885_ = lean_box(0);
return v___x_885_;
}
else
{
lean_object* v_val_886_; lean_object* v_transport_887_; lean_object* v_url_888_; lean_object* v_basicAuth_889_; lean_object* v_hostname_890_; lean_object* v_port_891_; lean_object* v_path_892_; lean_object* v_cid_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v_val_886_ = lean_ctor_get(v_x_884_, 0);
lean_inc(v_val_886_);
lean_dec_ref_known(v_x_884_, 1);
v_transport_887_ = lean_ctor_get(v_val_886_, 0);
lean_inc(v_transport_887_);
v_url_888_ = lean_ctor_get(v_val_886_, 1);
lean_inc(v_url_888_);
v_basicAuth_889_ = lean_ctor_get(v_val_886_, 2);
lean_inc(v_basicAuth_889_);
v_hostname_890_ = lean_ctor_get(v_val_886_, 3);
lean_inc(v_hostname_890_);
v_port_891_ = lean_ctor_get(v_val_886_, 4);
lean_inc(v_port_891_);
v_path_892_ = lean_ctor_get(v_val_886_, 5);
lean_inc(v_path_892_);
v_cid_893_ = lean_ctor_get(v_val_886_, 6);
lean_inc(v_cid_893_);
lean_dec(v_val_886_);
v___x_894_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__0));
v___x_895_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__2(v_transport_887_);
lean_dec(v_transport_887_);
v___x_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_896_, 0, v___x_894_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__1));
v___x_898_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(v_url_888_);
v___x_899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_897_);
lean_ctor_set(v___x_899_, 1, v___x_898_);
v___x_900_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__2));
v___x_901_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__3(v_basicAuth_889_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__3));
v___x_904_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(v_hostname_890_);
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_903_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__4));
v___x_907_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1_spec__4(v_port_891_);
v___x_908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_906_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
v___x_909_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__5));
v___x_910_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(v_path_892_);
v___x_911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_911_, 0, v___x_909_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSProxy___lam__0___closed__6));
v___x_913_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2(v_cid_893_);
lean_dec(v_cid_893_);
v___x_914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_unsigned_to_nat(7u);
v___x_916_ = lean_mk_empty_array_with_capacity(v___x_915_);
v___x_917_ = lean_array_push(v___x_916_, v___x_896_);
v___x_918_ = lean_array_push(v___x_917_, v___x_899_);
v___x_919_ = lean_array_push(v___x_918_, v___x_902_);
v___x_920_ = lean_array_push(v___x_919_, v___x_905_);
v___x_921_ = lean_array_push(v___x_920_, v___x_908_);
v___x_922_ = lean_array_push(v___x_921_, v___x_911_);
v___x_923_ = lean_array_push(v___x_922_, v___x_914_);
v___x_924_ = l_Lasm_JS_Web_Support_fields(v___x_923_);
lean_dec_ref(v___x_923_);
return v___x_924_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createHttpClient(lean_object* v_options_934_){
_start:
{
lean_object* v_caCerts_936_; lean_object* v_proxy_937_; lean_object* v_poolMaxIdlePerHost_938_; lean_object* v_poolIdleTimeout_939_; lean_object* v_http1_940_; lean_object* v_http2_941_; lean_object* v_allowHost_942_; lean_object* v_localAddress_943_; lean_object* v_http2MaxHeaderListSize_944_; lean_object* v_keyFormat_945_; lean_object* v_key_946_; lean_object* v_cert_947_; uint8_t v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; 
v_caCerts_936_ = lean_ctor_get(v_options_934_, 0);
lean_inc(v_caCerts_936_);
v_proxy_937_ = lean_ctor_get(v_options_934_, 1);
lean_inc(v_proxy_937_);
v_poolMaxIdlePerHost_938_ = lean_ctor_get(v_options_934_, 2);
lean_inc(v_poolMaxIdlePerHost_938_);
v_poolIdleTimeout_939_ = lean_ctor_get(v_options_934_, 3);
lean_inc(v_poolIdleTimeout_939_);
v_http1_940_ = lean_ctor_get(v_options_934_, 4);
lean_inc(v_http1_940_);
v_http2_941_ = lean_ctor_get(v_options_934_, 5);
lean_inc(v_http2_941_);
v_allowHost_942_ = lean_ctor_get(v_options_934_, 6);
lean_inc(v_allowHost_942_);
v_localAddress_943_ = lean_ctor_get(v_options_934_, 7);
lean_inc(v_localAddress_943_);
v_http2MaxHeaderListSize_944_ = lean_ctor_get(v_options_934_, 8);
lean_inc(v_http2MaxHeaderListSize_944_);
v_keyFormat_945_ = lean_ctor_get(v_options_934_, 9);
lean_inc(v_keyFormat_945_);
v_key_946_ = lean_ctor_get(v_options_934_, 10);
lean_inc(v_key_946_);
v_cert_947_ = lean_ctor_get(v_options_934_, 11);
lean_inc(v_cert_947_);
lean_dec_ref(v_options_934_);
v___x_948_ = 0;
v___x_949_ = lean_unsigned_to_nat(1u);
v___x_950_ = ((lean_object*)(l_Lasm_JS_Deno_createHttpClient___closed__3));
v___x_951_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__0));
v___x_952_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__0(v_caCerts_936_);
v___x_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_953_, 0, v___x_951_);
lean_ctor_set(v___x_953_, 1, v___x_952_);
v___x_954_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__1));
v___x_955_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__1(v_proxy_937_);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v___x_954_);
lean_ctor_set(v___x_956_, 1, v___x_955_);
v___x_957_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__2));
v___x_958_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2(v_poolMaxIdlePerHost_938_);
lean_dec(v_poolMaxIdlePerHost_938_);
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v___x_957_);
lean_ctor_set(v___x_959_, 1, v___x_958_);
v___x_960_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__3));
v___x_961_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__3(v_poolIdleTimeout_939_);
v___x_962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_962_, 0, v___x_960_);
lean_ctor_set(v___x_962_, 1, v___x_961_);
v___x_963_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__4));
v___x_964_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4(v_http1_940_);
lean_dec(v_http1_940_);
v___x_965_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__5));
v___x_967_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4(v_http2_941_);
lean_dec(v_http2_941_);
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set(v___x_968_, 1, v___x_967_);
v___x_969_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__6));
v___x_970_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__4(v_allowHost_942_);
lean_dec(v_allowHost_942_);
v___x_971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_969_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__7));
v___x_973_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(v_localAddress_943_);
v___x_974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_974_, 0, v___x_972_);
lean_ctor_set(v___x_974_, 1, v___x_973_);
v___x_975_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__8));
v___x_976_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__2(v_http2MaxHeaderListSize_944_);
lean_dec(v_http2MaxHeaderListSize_944_);
v___x_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_977_, 0, v___x_975_);
lean_ctor_set(v___x_977_, 1, v___x_976_);
v___x_978_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__9));
v___x_979_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__6(v_keyFormat_945_);
lean_dec(v_keyFormat_945_);
v___x_980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__10));
v___x_982_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(v_key_946_);
v___x_983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = ((lean_object*)(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions___lam__0___closed__11));
v___x_985_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Deno_createHttpClient_spec__5(v_cert_947_);
v___x_986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_984_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
v___x_987_ = lean_unsigned_to_nat(12u);
v___x_988_ = lean_mk_empty_array_with_capacity(v___x_987_);
v___x_989_ = lean_array_push(v___x_988_, v___x_953_);
v___x_990_ = lean_array_push(v___x_989_, v___x_956_);
v___x_991_ = lean_array_push(v___x_990_, v___x_959_);
v___x_992_ = lean_array_push(v___x_991_, v___x_962_);
v___x_993_ = lean_array_push(v___x_992_, v___x_965_);
v___x_994_ = lean_array_push(v___x_993_, v___x_968_);
v___x_995_ = lean_array_push(v___x_994_, v___x_971_);
v___x_996_ = lean_array_push(v___x_995_, v___x_974_);
v___x_997_ = lean_array_push(v___x_996_, v___x_977_);
v___x_998_ = lean_array_push(v___x_997_, v___x_980_);
v___x_999_ = lean_array_push(v___x_998_, v___x_983_);
v___x_1000_ = lean_array_push(v___x_999_, v___x_986_);
v___x_1001_ = l_Lasm_JS_Web_Support_fields(v___x_1000_);
lean_dec_ref(v___x_1000_);
v___x_1002_ = lean_mk_empty_array_with_capacity(v___x_949_);
v___x_1003_ = lean_array_push(v___x_1002_, v___x_1001_);
v___x_1004_ = l_Lasm_JS_Web_Support_args(v___x_1003_);
v___x_1005_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_950_, v___x_1004_, v___x_948_);
if (lean_obj_tag(v___x_1005_) == 0)
{
lean_object* v_a_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1013_; 
v_a_1006_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1013_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_a_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1013_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1011_; 
if (v_isShared_1009_ == 0)
{
v___x_1011_ = v___x_1008_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v_a_1006_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
v_a_1014_ = lean_ctor_get(v___x_1005_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1005_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1005_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Deno_createHttpClient___boxed(lean_object* v_options_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lasm_JS_Deno_createHttpClient(v_options_1022_);
return v_res_1024_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Deno_Fetch(uint8_t builtin) {
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
l_Lasm_JS_Deno_instInhabitedProxyTransport_default = _init_l_Lasm_JS_Deno_instInhabitedProxyTransport_default();
l_Lasm_JS_Deno_instInhabitedProxyTransport = _init_l_Lasm_JS_Deno_instInhabitedProxyTransport();
l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat_default = _init_l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat_default();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat_default);
l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat = _init_l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat();
lean_mark_persistent(l_Lasm_JS_Deno_instInhabitedCreateHttpClientOptionsKeyFormat);
l_Lasm_JS_Deno_instToJSCreateHttpClientOptions = _init_l_Lasm_JS_Deno_instToJSCreateHttpClientOptions();
lean_mark_persistent(l_Lasm_JS_Deno_instToJSCreateHttpClientOptions);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
