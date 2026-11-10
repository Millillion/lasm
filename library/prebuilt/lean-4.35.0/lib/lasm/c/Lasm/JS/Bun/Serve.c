// Lean compiler output
// Module: Lasm.JS.Bun.Serve
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Url public import Lasm.JS.Web.Fetch
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSNat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_instToJSBool___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_instToJSString___lam__0(lean_object*);
lean_object* l_Lasm_JS_instToJSNat___lam__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
static const lean_string_object l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServer___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServer___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServer___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServer___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServer = (const lean_object*)&l_Lasm_JS_Bun_instToJSServer___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServer___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSServer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSServer___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.JS.Bun.Server"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServer___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServer___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServer = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instBEqSocketAddressFamily___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instBEqSocketAddressFamily___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instBEqSocketAddressFamily___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Bun.SocketAddressFamily.iPv4"};
static const lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Bun.SocketAddressFamily.iPv6"};
static const lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4;
static lean_once_cell_t l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instReprSocketAddressFamily___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instReprSocketAddressFamily___closed__0_value;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default;
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instInhabitedSocketAddressFamily;
static const lean_string_object l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "IPv4"};
static const lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "IPv6"};
static const lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSSocketAddressFamily___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instToJSSocketAddressFamily___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "not a value of the enumeration"};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Bun.SocketAddressFamily"};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__2_value;
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
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0_value)}};
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
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptionsError = (const lean_object*)&l_Lasm_JS_Bun_instToJSServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Bun.ServeOptionsError"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsError = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsError___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptionsFetch = (const lean_object*)&l_Lasm_JS_Bun_instToJSServer___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Bun.ServeOptionsFetch"};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instFromJSServer___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instFromJSServeOptionsFetch = (const lean_object*)&l_Lasm_JS_Bun_instFromJSServeOptionsFetch___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "callback argument "};
static const lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "maxRequestBodySize"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "id"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hostname"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "reusePort"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ipv6Only"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "idleTimeout"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7_value;
static const lean_string_object l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeOptions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSNat___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__0_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeOptions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__1_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeOptions___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSBool___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__2_value;
static const lean_closure_object l_Lasm_JS_Bun_instToJSServeOptions___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Bun_instToJSServeOptions___lam__0, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServer___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__1_value),((lean_object*)&l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___closed__0_value),((lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__2_value)} };
static const lean_object* l_Lasm_JS_Bun_instToJSServeOptions___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Bun_instToJSServeOptions = (const lean_object*)&l_Lasm_JS_Bun_instToJSServeOptions___closed__3_value;
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
static const lean_string_object l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "address"};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "family"};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0;
static const lean_string_object l_Lasm_JS_Bun_instFromJSSocketAddress___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Bun.SocketAddress"};
static const lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress;
static const lean_string_object l_Lasm_JS_Bun_Server_pendingRequests___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "pendingRequests"};
static const lean_object* l_Lasm_JS_Bun_Server_pendingRequests___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_pendingRequests___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Bun_Server_url___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_JS_Bun_Server_url___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_url___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Option (Nat)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Option (Lasm.JS.Bun.ServerProtocol)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " (not a value of the enumeration)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1_value;
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
static const lean_string_object l_Lasm_JS_Bun_Server_development___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "development"};
static const lean_object* l_Lasm_JS_Bun_Server_development___closed__0 = (const lean_object*)&l_Lasm_JS_Bun_Server_development___closed__0_value;
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
static const lean_array_object l_Lasm_JS_Bun_Server_closeIdleConnections___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0___boxed(lean_object*);
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
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__5_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__6 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__6_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__5_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Option (Lasm.JS.Bun.SocketAddress)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServer___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServer___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServer___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Bun_instFromJSServer___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx(uint8_t v_x_22_){
_start:
{
if (v_x_22_ == 0)
{
lean_object* v___x_23_; 
v___x_23_ = lean_unsigned_to_nat(0u);
return v___x_23_;
}
else
{
lean_object* v___x_24_; 
v___x_24_ = lean_unsigned_to_nat(1u);
return v___x_24_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx___boxed(lean_object* v_x_25_){
_start:
{
uint8_t v_x_boxed_26_; lean_object* v_res_27_; 
v_x_boxed_26_ = lean_unbox(v_x_25_);
v_res_27_ = l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx(v_x_boxed_26_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim___redArg(lean_object* v_k_28_){
_start:
{
lean_inc(v_k_28_);
return v_k_28_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim___redArg___boxed(lean_object* v_k_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lasm_JS_Bun_SocketAddressFamily_ctorElim___redArg(v_k_29_);
lean_dec(v_k_29_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim(lean_object* v_motive_31_, lean_object* v_ctorIdx_32_, uint8_t v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_inc(v_k_35_);
return v_k_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorElim___boxed(lean_object* v_motive_36_, lean_object* v_ctorIdx_37_, lean_object* v_t_38_, lean_object* v_h_39_, lean_object* v_k_40_){
_start:
{
uint8_t v_t_boxed_41_; lean_object* v_res_42_; 
v_t_boxed_41_ = lean_unbox(v_t_38_);
v_res_42_ = l_Lasm_JS_Bun_SocketAddressFamily_ctorElim(v_motive_36_, v_ctorIdx_37_, v_t_boxed_41_, v_h_39_, v_k_40_);
lean_dec(v_k_40_);
lean_dec(v_ctorIdx_37_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim___redArg(lean_object* v_iPv4_43_){
_start:
{
lean_inc(v_iPv4_43_);
return v_iPv4_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim___redArg___boxed(lean_object* v_iPv4_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim___redArg(v_iPv4_44_);
lean_dec(v_iPv4_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim(lean_object* v_motive_46_, uint8_t v_t_47_, lean_object* v_h_48_, lean_object* v_iPv4_49_){
_start:
{
lean_inc(v_iPv4_49_);
return v_iPv4_49_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim___boxed(lean_object* v_motive_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_iPv4_53_){
_start:
{
uint8_t v_t_boxed_54_; lean_object* v_res_55_; 
v_t_boxed_54_ = lean_unbox(v_t_51_);
v_res_55_ = l_Lasm_JS_Bun_SocketAddressFamily_iPv4_elim(v_motive_50_, v_t_boxed_54_, v_h_52_, v_iPv4_53_);
lean_dec(v_iPv4_53_);
return v_res_55_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim___redArg(lean_object* v_iPv6_56_){
_start:
{
lean_inc(v_iPv6_56_);
return v_iPv6_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim___redArg___boxed(lean_object* v_iPv6_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim___redArg(v_iPv6_57_);
lean_dec(v_iPv6_57_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim(lean_object* v_motive_59_, uint8_t v_t_60_, lean_object* v_h_61_, lean_object* v_iPv6_62_){
_start:
{
lean_inc(v_iPv6_62_);
return v_iPv6_62_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim___boxed(lean_object* v_motive_63_, lean_object* v_t_64_, lean_object* v_h_65_, lean_object* v_iPv6_66_){
_start:
{
uint8_t v_t_boxed_67_; lean_object* v_res_68_; 
v_t_boxed_67_ = lean_unbox(v_t_64_);
v_res_68_ = l_Lasm_JS_Bun_SocketAddressFamily_iPv6_elim(v_motive_63_, v_t_boxed_67_, v_h_65_, v_iPv6_66_);
lean_dec(v_iPv6_66_);
return v_res_68_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq(uint8_t v_x_69_, uint8_t v_y_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; uint8_t v___x_73_; 
v___x_71_ = l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx(v_x_69_);
v___x_72_ = l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx(v_y_70_);
v___x_73_ = lean_nat_dec_eq(v___x_71_, v___x_72_);
lean_dec(v___x_72_);
lean_dec(v___x_71_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq___boxed(lean_object* v_x_74_, lean_object* v_y_75_){
_start:
{
uint8_t v_x_21__boxed_76_; uint8_t v_y_22__boxed_77_; uint8_t v_res_78_; lean_object* v_r_79_; 
v_x_21__boxed_76_ = lean_unbox(v_x_74_);
v_y_22__boxed_77_ = lean_unbox(v_y_75_);
v_res_78_ = l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq(v_x_21__boxed_76_, v_y_22__boxed_77_);
v_r_79_ = lean_box(v_res_78_);
return v_r_79_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_unsigned_to_nat(2u);
v___x_89_ = lean_nat_to_int(v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(1u);
v___x_91_ = lean_nat_to_int(v___x_90_);
return v___x_91_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(uint8_t v_x_92_, lean_object* v_prec_93_){
_start:
{
lean_object* v___y_95_; lean_object* v___y_102_; 
if (v_x_92_ == 0)
{
lean_object* v___x_108_; uint8_t v___x_109_; 
v___x_108_ = lean_unsigned_to_nat(1024u);
v___x_109_ = lean_nat_dec_le(v___x_108_, v_prec_93_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
v___x_110_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_95_ = v___x_110_;
goto v___jp_94_;
}
else
{
lean_object* v___x_111_; 
v___x_111_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_95_ = v___x_111_;
goto v___jp_94_;
}
}
else
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_93_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_102_ = v___x_114_;
goto v___jp_101_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_102_ = v___x_115_;
goto v___jp_101_;
}
}
v___jp_94_:
{
lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_96_ = ((lean_object*)(l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__1));
lean_inc(v___y_95_);
v___x_97_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_97_, 0, v___y_95_);
lean_ctor_set(v___x_97_, 1, v___x_96_);
v___x_98_ = 0;
v___x_99_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_99_, 0, v___x_97_);
lean_ctor_set_uint8(v___x_99_, sizeof(void*)*1, v___x_98_);
v___x_100_ = l_Repr_addAppParen(v___x_99_, v_prec_93_);
return v___x_100_;
}
v___jp_101_:
{
lean_object* v___x_103_; lean_object* v___x_104_; uint8_t v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_103_ = ((lean_object*)(l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__3));
lean_inc(v___y_102_);
v___x_104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_104_, 0, v___y_102_);
lean_ctor_set(v___x_104_, 1, v___x_103_);
v___x_105_ = 0;
v___x_106_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_106_, 0, v___x_104_);
lean_ctor_set_uint8(v___x_106_, sizeof(void*)*1, v___x_105_);
v___x_107_ = l_Repr_addAppParen(v___x_106_, v_prec_93_);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___boxed(lean_object* v_x_116_, lean_object* v_prec_117_){
_start:
{
uint8_t v_x_117__boxed_118_; lean_object* v_res_119_; 
v_x_117__boxed_118_ = lean_unbox(v_x_116_);
v_res_119_ = l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(v_x_117__boxed_118_, v_prec_117_);
lean_dec(v_prec_117_);
return v_res_119_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default(void){
_start:
{
uint8_t v___x_122_; 
v___x_122_ = 0;
return v___x_122_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedSocketAddressFamily(void){
_start:
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0(uint8_t v_x_130_){
_start:
{
if (v_x_130_ == 0)
{
lean_object* v___x_131_; 
v___x_131_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__1));
return v___x_131_;
}
else
{
lean_object* v___x_132_; 
v___x_132_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__3));
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___boxed(lean_object* v_x_133_){
_start:
{
uint8_t v_x_40__boxed_134_; lean_object* v_res_135_; 
v_x_40__boxed_134_ = lean_unbox(v_x_133_);
v_res_135_ = l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0(v_x_40__boxed_134_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0(lean_object* v_x_147_){
_start:
{
if (lean_obj_tag(v_x_147_) == 4)
{
lean_object* v_s_150_; lean_object* v___x_151_; uint8_t v___x_152_; 
v_s_150_ = lean_ctor_get(v_x_147_, 0);
v___x_151_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0));
v___x_152_ = lean_string_dec_eq(v_s_150_, v___x_151_);
if (v___x_152_ == 0)
{
lean_object* v___x_153_; uint8_t v___x_154_; 
v___x_153_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2));
v___x_154_ = lean_string_dec_eq(v_s_150_, v___x_153_);
if (v___x_154_ == 0)
{
goto v___jp_148_;
}
else
{
lean_object* v___x_155_; 
v___x_155_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2));
return v___x_155_;
}
}
else
{
lean_object* v___x_156_; 
v___x_156_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3));
return v___x_156_;
}
}
else
{
goto v___jp_148_;
}
v___jp_148_:
{
lean_object* v___x_149_; 
v___x_149_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__1));
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___boxed(lean_object* v_x_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0(v_x_157_);
lean_dec(v_x_157_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx(uint8_t v_x_166_){
_start:
{
if (v_x_166_ == 0)
{
lean_object* v___x_167_; 
v___x_167_ = lean_unsigned_to_nat(0u);
return v___x_167_;
}
else
{
lean_object* v___x_168_; 
v___x_168_ = lean_unsigned_to_nat(1u);
return v___x_168_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx___boxed(lean_object* v_x_169_){
_start:
{
uint8_t v_x_boxed_170_; lean_object* v_res_171_; 
v_x_boxed_170_ = lean_unbox(v_x_169_);
v_res_171_ = l_Lasm_JS_Bun_ServerProtocol_ctorIdx(v_x_boxed_170_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg(lean_object* v_k_172_){
_start:
{
lean_inc(v_k_172_);
return v_k_172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg___boxed(lean_object* v_k_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg(v_k_173_);
lean_dec(v_k_173_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim(lean_object* v_motive_175_, lean_object* v_ctorIdx_176_, uint8_t v_t_177_, lean_object* v_h_178_, lean_object* v_k_179_){
_start:
{
lean_inc(v_k_179_);
return v_k_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___boxed(lean_object* v_motive_180_, lean_object* v_ctorIdx_181_, lean_object* v_t_182_, lean_object* v_h_183_, lean_object* v_k_184_){
_start:
{
uint8_t v_t_boxed_185_; lean_object* v_res_186_; 
v_t_boxed_185_ = lean_unbox(v_t_182_);
v_res_186_ = l_Lasm_JS_Bun_ServerProtocol_ctorElim(v_motive_180_, v_ctorIdx_181_, v_t_boxed_185_, v_h_183_, v_k_184_);
lean_dec(v_k_184_);
lean_dec(v_ctorIdx_181_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg(lean_object* v_http_187_){
_start:
{
lean_inc(v_http_187_);
return v_http_187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg___boxed(lean_object* v_http_188_){
_start:
{
lean_object* v_res_189_; 
v_res_189_ = l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg(v_http_188_);
lean_dec(v_http_188_);
return v_res_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim(lean_object* v_motive_190_, uint8_t v_t_191_, lean_object* v_h_192_, lean_object* v_http_193_){
_start:
{
lean_inc(v_http_193_);
return v_http_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___boxed(lean_object* v_motive_194_, lean_object* v_t_195_, lean_object* v_h_196_, lean_object* v_http_197_){
_start:
{
uint8_t v_t_boxed_198_; lean_object* v_res_199_; 
v_t_boxed_198_ = lean_unbox(v_t_195_);
v_res_199_ = l_Lasm_JS_Bun_ServerProtocol_http_elim(v_motive_194_, v_t_boxed_198_, v_h_196_, v_http_197_);
lean_dec(v_http_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg(lean_object* v_https_200_){
_start:
{
lean_inc(v_https_200_);
return v_https_200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg___boxed(lean_object* v_https_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg(v_https_201_);
lean_dec(v_https_201_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim(lean_object* v_motive_203_, uint8_t v_t_204_, lean_object* v_h_205_, lean_object* v_https_206_){
_start:
{
lean_inc(v_https_206_);
return v_https_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___boxed(lean_object* v_motive_207_, lean_object* v_t_208_, lean_object* v_h_209_, lean_object* v_https_210_){
_start:
{
uint8_t v_t_boxed_211_; lean_object* v_res_212_; 
v_t_boxed_211_ = lean_unbox(v_t_208_);
v_res_212_ = l_Lasm_JS_Bun_ServerProtocol_https_elim(v_motive_207_, v_t_boxed_211_, v_h_209_, v_https_210_);
lean_dec(v_https_210_);
return v_res_212_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerProtocol_beq(uint8_t v_x_213_, uint8_t v_y_214_){
_start:
{
lean_object* v___x_215_; lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_215_ = l_Lasm_JS_Bun_ServerProtocol_ctorIdx(v_x_213_);
v___x_216_ = l_Lasm_JS_Bun_ServerProtocol_ctorIdx(v_y_214_);
v___x_217_ = lean_nat_dec_eq(v___x_215_, v___x_216_);
lean_dec(v___x_216_);
lean_dec(v___x_215_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed(lean_object* v_x_218_, lean_object* v_y_219_){
_start:
{
uint8_t v_x_21__boxed_220_; uint8_t v_y_22__boxed_221_; uint8_t v_res_222_; lean_object* v_r_223_; 
v_x_21__boxed_220_ = lean_unbox(v_x_218_);
v_y_22__boxed_221_ = lean_unbox(v_y_219_);
v_res_222_ = l_Lasm_JS_Bun_instBEqServerProtocol_beq(v_x_21__boxed_220_, v_y_22__boxed_221_);
v_r_223_ = lean_box(v_res_222_);
return v_r_223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr(uint8_t v_x_232_, lean_object* v_prec_233_){
_start:
{
lean_object* v___y_235_; lean_object* v___y_242_; 
if (v_x_232_ == 0)
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_unsigned_to_nat(1024u);
v___x_249_ = lean_nat_dec_le(v___x_248_, v_prec_233_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; 
v___x_250_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_235_ = v___x_250_;
goto v___jp_234_;
}
else
{
lean_object* v___x_251_; 
v___x_251_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_235_ = v___x_251_;
goto v___jp_234_;
}
}
else
{
lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_252_ = lean_unsigned_to_nat(1024u);
v___x_253_ = lean_nat_dec_le(v___x_252_, v_prec_233_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
v___x_254_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_242_ = v___x_254_;
goto v___jp_241_;
}
else
{
lean_object* v___x_255_; 
v___x_255_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_242_ = v___x_255_;
goto v___jp_241_;
}
}
v___jp_234_:
{
lean_object* v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_236_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__1));
lean_inc(v___y_235_);
v___x_237_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_237_, 0, v___y_235_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = 0;
v___x_239_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_239_, 0, v___x_237_);
lean_ctor_set_uint8(v___x_239_, sizeof(void*)*1, v___x_238_);
v___x_240_ = l_Repr_addAppParen(v___x_239_, v_prec_233_);
return v___x_240_;
}
v___jp_241_:
{
lean_object* v___x_243_; lean_object* v___x_244_; uint8_t v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_243_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__3));
lean_inc(v___y_242_);
v___x_244_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_244_, 0, v___y_242_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = 0;
v___x_246_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_246_, 0, v___x_244_);
lean_ctor_set_uint8(v___x_246_, sizeof(void*)*1, v___x_245_);
v___x_247_ = l_Repr_addAppParen(v___x_246_, v_prec_233_);
return v___x_247_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed(lean_object* v_x_256_, lean_object* v_prec_257_){
_start:
{
uint8_t v_x_113__boxed_258_; lean_object* v_res_259_; 
v_x_113__boxed_258_ = lean_unbox(v_x_256_);
v_res_259_ = l_Lasm_JS_Bun_instReprServerProtocol_repr(v_x_113__boxed_258_, v_prec_257_);
lean_dec(v_prec_257_);
return v_res_259_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerProtocol_default(void){
_start:
{
uint8_t v___x_262_; 
v___x_262_ = 0;
return v___x_262_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerProtocol(void){
_start:
{
uint8_t v___x_263_; 
v___x_263_ = 0;
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0(uint8_t v_x_270_){
_start:
{
if (v_x_270_ == 0)
{
lean_object* v___x_271_; 
v___x_271_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__1));
return v___x_271_;
}
else
{
lean_object* v___x_272_; 
v___x_272_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__3));
return v___x_272_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___boxed(lean_object* v_x_273_){
_start:
{
uint8_t v_x_40__boxed_274_; lean_object* v_res_275_; 
v_x_40__boxed_274_ = lean_unbox(v_x_273_);
v_res_275_ = l_Lasm_JS_Bun_instToJSServerProtocol___lam__0(v_x_40__boxed_274_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0(lean_object* v_x_286_){
_start:
{
if (lean_obj_tag(v_x_286_) == 4)
{
lean_object* v_s_289_; lean_object* v___x_290_; uint8_t v___x_291_; 
v_s_289_ = lean_ctor_get(v_x_286_, 0);
v___x_290_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_291_ = lean_string_dec_eq(v_s_289_, v___x_290_);
if (v___x_291_ == 0)
{
lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_292_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_293_ = lean_string_dec_eq(v_s_289_, v___x_292_);
if (v___x_293_ == 0)
{
goto v___jp_287_;
}
else
{
lean_object* v___x_294_; 
v___x_294_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__1));
return v___x_294_;
}
}
else
{
lean_object* v___x_295_; 
v___x_295_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__2));
return v___x_295_;
}
}
else
{
goto v___jp_287_;
}
v___jp_287_:
{
lean_object* v___x_288_; 
v___x_288_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__0));
return v___x_288_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___boxed(lean_object* v_x_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0(v_x_296_);
lean_dec(v_x_296_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(lean_object* v_x_312_){
_start:
{
if (lean_obj_tag(v_x_312_) == 0)
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_322_; 
v_a_314_ = lean_ctor_get(v_x_312_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_x_312_);
if (v_isSharedCheck_322_ == 0)
{
v___x_316_ = v_x_312_;
v_isShared_317_ = v_isSharedCheck_322_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v_x_312_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_322_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_321_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
lean_object* v___x_320_; 
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_333_; 
v_a_323_ = lean_ctor_get(v_x_312_, 0);
v_isSharedCheck_333_ = !lean_is_exclusive(v_x_312_);
if (v_isSharedCheck_333_ == 0)
{
v___x_325_ = v_x_312_;
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v_x_312_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_333_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_330_; 
v___x_327_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_328_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_328_, 0, v_a_323_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v___x_328_);
v___x_330_ = v___x_325_;
goto v_reusejp_329_;
}
else
{
lean_object* v_reuseFailAlloc_332_; 
v_reuseFailAlloc_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_332_, 0, v___x_328_);
v___x_330_ = v_reuseFailAlloc_332_;
goto v_reusejp_329_;
}
v_reusejp_329_:
{
lean_object* v___x_331_; 
v___x_331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
return v___x_331_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed(lean_object* v_x_334_, lean_object* v___y_335_){
_start:
{
lean_object* v_res_336_; 
v_res_336_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(v_x_334_);
return v_res_336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(lean_object* v_f_337_, lean_object* v___f_338_, lean_object* v_x_339_){
_start:
{
if (lean_obj_tag(v_x_339_) == 0)
{
lean_object* v___x_341_; 
lean_dec_ref(v___f_338_);
lean_dec_ref(v_f_337_);
v___x_341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_341_, 0, v_x_339_);
return v___x_341_;
}
else
{
lean_object* v_a_342_; lean_object* v___x_343_; uint8_t v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_a_342_ = lean_ctor_get(v_x_339_, 0);
lean_inc(v_a_342_);
lean_dec_ref_known(v_x_339_, 1);
v___x_343_ = lean_unsigned_to_nat(0u);
v___x_344_ = 0;
v___x_345_ = lean_apply_2(v_f_337_, v_a_342_, lean_box(0));
v___x_346_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_343_, v___x_344_, v___x_345_, v___f_338_);
return v___x_346_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed(lean_object* v_f_347_, lean_object* v___f_348_, lean_object* v_x_349_, lean_object* v___y_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(v_f_347_, v___f_348_, v_x_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(lean_object* v___f_352_, lean_object* v_args_353_){
_start:
{
lean_object* v___x_355_; uint8_t v___x_356_; lean_object* v_val_358_; lean_object* v___x_361_; lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
v___x_355_ = lean_unsigned_to_nat(0u);
v___x_356_ = 0;
v___x_361_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_353_, v___x_355_);
v_a_362_ = lean_ctor_get(v___x_361_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_361_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_361_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_361_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v___jp_357_:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v_val_358_);
v___x_360_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_355_, v___x_356_, v___x_359_, v___f_352_);
return v___x_360_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
lean_ctor_set_tag(v___x_364_, 1);
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
v_val_358_ = v___x_367_;
goto v___jp_357_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed(lean_object* v___f_370_, lean_object* v_args_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(v___f_370_, v_args_371_);
lean_dec_ref(v_args_371_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn(lean_object* v_f_375_){
_start:
{
lean_object* v___f_377_; lean_object* v___f_378_; lean_object* v___f_379_; lean_object* v___x_380_; 
v___f_377_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_378_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_378_, 0, v_f_375_);
lean_closure_set(v___f_378_, 1, v___f_377_);
v___f_379_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_379_, 0, v___f_378_);
v___x_380_ = l_Lasm_JS_Function_ofFn(v___f_379_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_388_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_388_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_388_ == 0)
{
v___x_383_ = v___x_380_;
v_isShared_384_ = v_isSharedCheck_388_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_a_381_);
lean_dec(v___x_380_);
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
v_reuseFailAlloc_387_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
v_a_389_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_380_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_a_389_);
lean_dec(v___x_380_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object* v_f_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn(v_f_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object* v_f_400_, lean_object* v_args_401_){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v_a_405_; lean_object* v___x_406_; 
v___x_403_ = lean_unsigned_to_nat(0u);
v___x_404_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_401_, v___x_403_);
v_a_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_a_405_);
lean_dec_ref(v___x_404_);
v___x_406_ = lean_apply_2(v_f_400_, v_a_405_, lean_box(0));
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_416_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_416_ == 0)
{
v___x_409_ = v___x_406_;
v_isShared_410_ = v_isSharedCheck_416_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_406_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_416_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_414_; 
v___x_411_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_412_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_412_, 0, v_a_407_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
if (v_isShared_410_ == 0)
{
lean_ctor_set(v___x_409_, 0, v___x_412_);
v___x_414_ = v___x_409_;
goto v_reusejp_413_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_412_);
v___x_414_ = v_reuseFailAlloc_415_;
goto v_reusejp_413_;
}
v_reusejp_413_:
{
return v___x_414_;
}
}
}
else
{
lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
v_a_417_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_406_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_dec(v___x_406_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object* v_f_425_, lean_object* v_args_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(v_f_425_, v_args_426_);
lean_dec_ref(v_args_426_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object* v_f_429_){
_start:
{
lean_object* v___f_431_; lean_object* v___x_432_; 
v___f_431_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_431_, 0, v_f_429_);
v___x_432_ = l_Lasm_JS_Function_ofSyncFn(v___f_431_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_432_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_432_);
v___x_435_ = lean_box(0);
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
v_resetjp_434_:
{
lean_object* v___x_438_; 
if (v_isShared_436_ == 0)
{
v___x_438_ = v___x_435_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_a_433_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
v_a_441_ = lean_ctor_get(v___x_432_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_432_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_432_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_432_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_446_; 
if (v_isShared_444_ == 0)
{
v___x_446_ = v___x_443_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v_a_441_);
v___x_446_ = v_reuseFailAlloc_447_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
return v___x_446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object* v_f_449_, lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(v_f_449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(lean_object* v_x_452_){
_start:
{
if (lean_obj_tag(v_x_452_) == 0)
{
lean_object* v___x_453_; 
v___x_453_ = lean_unsigned_to_nat(0u);
return v___x_453_;
}
else
{
lean_object* v___x_454_; 
v___x_454_ = lean_unsigned_to_nat(1u);
return v___x_454_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___boxed(lean_object* v_x_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(v_x_455_);
lean_dec_ref(v_x_455_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(lean_object* v_t_457_, lean_object* v_k_458_){
_start:
{
if (lean_obj_tag(v_t_457_) == 0)
{
lean_object* v_value_459_; lean_object* v___x_460_; 
v_value_459_ = lean_ctor_get(v_t_457_, 0);
lean_inc_ref(v_value_459_);
lean_dec_ref_known(v_t_457_, 1);
v___x_460_ = lean_apply_1(v_k_458_, v_value_459_);
return v___x_460_;
}
else
{
lean_object* v_value_461_; lean_object* v___x_462_; 
v_value_461_ = lean_ctor_get(v_t_457_, 0);
lean_inc(v_value_461_);
lean_dec_ref_known(v_t_457_, 1);
v___x_462_ = lean_apply_1(v_k_458_, v_value_461_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(lean_object* v_motive_463_, lean_object* v_ctorIdx_464_, lean_object* v_t_465_, lean_object* v_h_466_, lean_object* v_k_467_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_465_, v_k_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___boxed(lean_object* v_motive_469_, lean_object* v_ctorIdx_470_, lean_object* v_t_471_, lean_object* v_h_472_, lean_object* v_k_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(v_motive_469_, v_ctorIdx_470_, v_t_471_, v_h_472_, v_k_473_);
lean_dec(v_ctorIdx_470_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim___redArg(lean_object* v_t_475_, lean_object* v_domString_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_475_, v_domString_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim(lean_object* v_motive_478_, lean_object* v_t_479_, lean_object* v_h_480_, lean_object* v_domString_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_479_, v_domString_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim___redArg(lean_object* v_t_483_, lean_object* v_unsignedShort_484_){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_483_, v_unsignedShort_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim(lean_object* v_motive_486_, lean_object* v_t_487_, lean_object* v_h_488_, lean_object* v_unsignedShort_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_487_, v_unsignedShort_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0(lean_object* v_x_491_){
_start:
{
if (lean_obj_tag(v_x_491_) == 0)
{
lean_object* v_value_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
v_value_492_ = lean_ctor_get(v_x_491_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v_x_491_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_value_492_);
lean_dec(v_x_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
lean_ctor_set_tag(v___x_494_, 4);
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_value_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
else
{
lean_object* v_value_500_; lean_object* v___x_502_; uint8_t v_isShared_503_; uint8_t v_isSharedCheck_513_; 
v_value_500_ = lean_ctor_get(v_x_491_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v_x_491_);
if (v_isSharedCheck_513_ == 0)
{
v___x_502_ = v_x_491_;
v_isShared_503_ = v_isSharedCheck_513_;
goto v_resetjp_501_;
}
else
{
lean_inc(v_value_500_);
lean_dec(v_x_491_);
v___x_502_ = lean_box(0);
v_isShared_503_ = v_isSharedCheck_513_;
goto v_resetjp_501_;
}
v_resetjp_501_:
{
lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_504_ = lean_nat_to_int(v_value_500_);
v___x_505_ = lean_nat_abs(v___x_504_);
v___x_506_ = lean_cstr_to_nat("9007199254740991");
v___x_507_ = lean_nat_dec_le(v___x_505_, v___x_506_);
lean_dec(v___x_505_);
if (v___x_507_ == 0)
{
lean_object* v___x_509_; 
if (v_isShared_503_ == 0)
{
lean_ctor_set_tag(v___x_502_, 5);
lean_ctor_set(v___x_502_, 0, v___x_504_);
v___x_509_ = v___x_502_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
else
{
double v___x_511_; lean_object* v___x_512_; 
lean_del_object(v___x_502_);
v___x_511_ = l_Float_ofInt(v___x_504_);
lean_dec(v___x_504_);
v___x_512_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_512_, 0, v___x_511_);
return v___x_512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object* v_value_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v_value_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object* v_value_520_){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_521_, 0, v_value_520_);
return v___x_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object* v_f_531_, lean_object* v_a_532_, lean_object* v___f_533_, lean_object* v_x_534_){
_start:
{
if (lean_obj_tag(v_x_534_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_544_; 
lean_dec_ref(v___f_533_);
lean_dec(v_a_532_);
lean_dec_ref(v_f_531_);
v_a_536_ = lean_ctor_get(v_x_534_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v_x_534_);
if (v_isSharedCheck_544_ == 0)
{
v___x_538_ = v_x_534_;
v_isShared_539_ = v_isSharedCheck_544_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_a_536_);
lean_dec(v_x_534_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_544_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_536_);
v___x_541_ = v_reuseFailAlloc_543_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v___x_542_; 
v___x_542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_542_, 0, v___x_541_);
return v___x_542_;
}
}
}
else
{
lean_object* v_a_545_; lean_object* v___x_546_; uint8_t v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_a_545_ = lean_ctor_get(v_x_534_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v_x_534_, 1);
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = 0;
v___x_548_ = lean_apply_3(v_f_531_, v_a_532_, v_a_545_, lean_box(0));
v___x_549_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_546_, v___x_547_, v___x_548_, v___f_533_);
return v___x_549_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object* v_f_550_, lean_object* v_a_551_, lean_object* v___f_552_, lean_object* v_x_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(v_f_550_, v_a_551_, v___f_552_, v_x_553_);
return v_res_555_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_560_ = lean_string_utf8_byte_size(v___x_559_);
return v___x_560_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_561_ = lean_unsigned_to_nat(0u);
v___x_562_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3);
v___x_563_ = lean_nat_dec_eq(v___x_562_, v___x_561_);
return v___x_563_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_568_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__8));
v___x_569_ = lean_unsigned_to_nat(46u);
v___x_570_ = lean_unsigned_to_nat(193u);
v___x_571_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7));
v___x_572_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6));
v___x_573_ = l_mkPanicMessageWithDecl(v___x_572_, v___x_571_, v___x_570_, v___x_569_, v___x_568_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object* v_context_575_, lean_object* v_d_576_){
_start:
{
lean_object* v___y_579_; lean_object* v___y_580_; 
if (lean_obj_tag(v_d_576_) == 9)
{
lean_object* v_value_584_; lean_object* v___x_585_; 
v_value_584_ = lean_ctor_get(v_d_576_, 0);
lean_inc(v_value_584_);
lean_dec_ref_known(v_d_576_, 2);
v___x_585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_585_, 0, v_value_584_);
return v___x_585_;
}
else
{
lean_object* v___x_586_; lean_object* v_received_588_; 
v___x_586_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
if (lean_obj_tag(v_d_576_) == 9)
{
lean_object* v_value_602_; lean_object* v_description_603_; uint8_t v___x_604_; 
v_value_602_ = lean_ctor_get(v_d_576_, 0);
v_description_603_ = lean_ctor_get(v_d_576_, 1);
v___x_604_ = lean_string_dec_eq(v_description_603_, v___x_586_);
if (v___x_604_ == 0)
{
goto v___jp_600_;
}
else
{
uint32_t v___x_605_; uint64_t v___x_606_; lean_object* v___x_607_; uint32_t v___x_608_; lean_object* v___x_609_; 
lean_inc_n(v_value_602_, 2);
lean_dec_ref_known(v_d_576_, 2);
v___x_605_ = 206;
v___x_606_ = 0ULL;
v___x_607_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_607_, 0, v_value_602_);
lean_ctor_set(v___x_607_, 1, v___x_586_);
v___x_608_ = lasm_js_value_handle(v_value_602_);
lean_dec(v_value_602_);
v___x_609_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_605_, v___x_606_, v___x_607_, v___x_608_);
lean_dec_ref_known(v___x_607_, 2);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; uint8_t v___x_611_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_610_);
lean_dec_ref_known(v___x_609_, 1);
v___x_611_ = lean_string_validate_utf8(v_a_610_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; 
lean_dec(v_a_610_);
v___x_612_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_613_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_612_);
v_received_588_ = v___x_613_;
goto v___jp_587_;
}
else
{
lean_object* v___x_614_; 
v___x_614_ = lean_string_from_utf8_unchecked(v_a_610_);
v_received_588_ = v___x_614_;
goto v___jp_587_;
}
}
else
{
lean_object* v___x_615_; 
lean_dec_ref_known(v___x_609_, 1);
v___x_615_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v_received_588_ = v___x_615_;
goto v___jp_587_;
}
}
}
else
{
goto v___jp_600_;
}
v___jp_587_:
{
lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; uint8_t v___x_598_; 
v___x_589_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_590_ = lean_string_append(v___x_589_, v_context_575_);
v___x_591_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_592_ = lean_string_append(v___x_590_, v___x_591_);
v___x_593_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServer___closed__1));
v___x_594_ = lean_string_append(v___x_592_, v___x_593_);
v___x_595_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_596_ = lean_string_append(v___x_594_, v___x_595_);
v___x_597_ = lean_string_append(v___x_596_, v_received_588_);
lean_dec_ref(v_received_588_);
v___x_598_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; 
v___x_599_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5));
v___y_579_ = v___x_597_;
v___y_580_ = v___x_599_;
goto v___jp_578_;
}
else
{
v___y_579_ = v___x_597_;
v___y_580_ = v___x_586_;
goto v___jp_578_;
}
}
v___jp_600_:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lasm_JS_Data_describe(v_d_576_);
v_received_588_ = v___x_601_;
goto v___jp_587_;
}
}
v___jp_578_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_581_ = lean_string_append(v___y_579_, v___y_580_);
v___x_582_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
v___x_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object* v_context_616_, lean_object* v_d_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v_context_616_, v_d_617_);
lean_dec_ref(v_context_616_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object* v_args_621_, lean_object* v_i_622_){
_start:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; uint8_t v___x_630_; 
v___x_624_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_625_ = lean_unsigned_to_nat(1u);
v___x_626_ = lean_nat_add(v_i_622_, v___x_625_);
v___x_627_ = l_Nat_reprFast(v___x_626_);
v___x_628_ = lean_string_append(v___x_624_, v___x_627_);
lean_dec_ref(v___x_627_);
v___x_629_ = lean_array_get_size(v_args_621_);
v___x_630_ = lean_nat_dec_lt(v_i_622_, v___x_629_);
if (v___x_630_ == 0)
{
lean_object* v___x_631_; lean_object* v___x_632_; 
v___x_631_ = lean_box(0);
v___x_632_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_628_, v___x_631_);
lean_dec_ref(v___x_628_);
return v___x_632_;
}
else
{
lean_object* v___x_633_; lean_object* v___x_634_; 
v___x_633_ = lean_array_fget_borrowed(v_args_621_, v_i_622_);
lean_inc(v___x_633_);
v___x_634_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_628_, v___x_633_);
lean_dec_ref(v___x_628_);
return v___x_634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object* v_args_635_, lean_object* v_i_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_635_, v_i_636_);
lean_dec(v_i_636_);
lean_dec_ref(v_args_635_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object* v_f_639_, lean_object* v___f_640_, lean_object* v_args_641_, lean_object* v_x_642_){
_start:
{
if (lean_obj_tag(v_x_642_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_646_; uint8_t v_isShared_647_; uint8_t v_isSharedCheck_652_; 
lean_dec_ref(v___f_640_);
lean_dec_ref(v_f_639_);
v_a_644_ = lean_ctor_get(v_x_642_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v_x_642_);
if (v_isSharedCheck_652_ == 0)
{
v___x_646_ = v_x_642_;
v_isShared_647_ = v_isSharedCheck_652_;
goto v_resetjp_645_;
}
else
{
lean_inc(v_a_644_);
lean_dec(v_x_642_);
v___x_646_ = lean_box(0);
v_isShared_647_ = v_isSharedCheck_652_;
goto v_resetjp_645_;
}
v_resetjp_645_:
{
lean_object* v___x_649_; 
if (v_isShared_647_ == 0)
{
v___x_649_ = v___x_646_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_644_);
v___x_649_ = v_reuseFailAlloc_651_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_650_; 
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
return v___x_650_;
}
}
}
else
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_674_; 
v_a_653_ = lean_ctor_get(v_x_642_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v_x_642_);
if (v_isSharedCheck_674_ == 0)
{
v___x_655_ = v_x_642_;
v_isShared_656_ = v_isSharedCheck_674_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v_x_642_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_674_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___f_657_; lean_object* v___x_658_; lean_object* v___x_659_; uint8_t v___x_660_; lean_object* v_val_662_; lean_object* v___x_665_; 
v___f_657_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_657_, 0, v_f_639_);
lean_closure_set(v___f_657_, 1, v_a_653_);
lean_closure_set(v___f_657_, 2, v___f_640_);
v___x_658_ = lean_unsigned_to_nat(1u);
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_660_ = 0;
v___x_665_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_641_, v___x_658_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_666_);
lean_dec_ref_known(v___x_665_, 1);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 0, v_a_666_);
v___x_668_ = v___x_655_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_666_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
v_val_662_ = v___x_668_;
goto v___jp_661_;
}
}
else
{
lean_object* v_a_670_; lean_object* v___x_672_; 
v_a_670_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_670_);
lean_dec_ref_known(v___x_665_, 1);
if (v_isShared_656_ == 0)
{
lean_ctor_set_tag(v___x_655_, 0);
lean_ctor_set(v___x_655_, 0, v_a_670_);
v___x_672_ = v___x_655_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v_a_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
v_val_662_ = v___x_672_;
goto v___jp_661_;
}
}
v___jp_661_:
{
lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_663_, 0, v_val_662_);
v___x_664_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_659_, v___x_660_, v___x_663_, v___f_657_);
return v___x_664_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object* v_f_675_, lean_object* v___f_676_, lean_object* v_args_677_, lean_object* v_x_678_, lean_object* v___y_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(v_f_675_, v___f_676_, v_args_677_, v_x_678_);
lean_dec_ref(v_args_677_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object* v_args_681_, lean_object* v_i_682_){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; uint8_t v___x_690_; 
v___x_684_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_685_ = lean_unsigned_to_nat(1u);
v___x_686_ = lean_nat_add(v_i_682_, v___x_685_);
v___x_687_ = l_Nat_reprFast(v___x_686_);
v___x_688_ = lean_string_append(v___x_684_, v___x_687_);
lean_dec_ref(v___x_687_);
v___x_689_ = lean_array_get_size(v_args_681_);
v___x_690_ = lean_nat_dec_lt(v_i_682_, v___x_689_);
if (v___x_690_ == 0)
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_box(0);
v___x_692_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_688_, v___x_691_);
lean_dec_ref(v___x_688_);
return v___x_692_;
}
else
{
lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lean_array_fget_borrowed(v_args_681_, v_i_682_);
lean_inc(v___x_693_);
v___x_694_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_688_, v___x_693_);
lean_dec_ref(v___x_688_);
return v___x_694_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object* v_args_695_, lean_object* v_i_696_, lean_object* v_a_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_695_, v_i_696_);
lean_dec(v_i_696_);
lean_dec_ref(v_args_695_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object* v_f_699_, lean_object* v___f_700_, lean_object* v_args_701_){
_start:
{
lean_object* v___f_703_; lean_object* v___x_704_; uint8_t v___x_705_; lean_object* v_val_707_; lean_object* v___x_710_; 
lean_inc_ref(v_args_701_);
v___f_703_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_703_, 0, v_f_699_);
lean_closure_set(v___f_703_, 1, v___f_700_);
lean_closure_set(v___f_703_, 2, v_args_701_);
v___x_704_ = lean_unsigned_to_nat(0u);
v___x_705_ = 0;
v___x_710_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_701_, v___x_704_);
lean_dec_ref(v_args_701_);
if (lean_obj_tag(v___x_710_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
v_a_711_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_710_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_710_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
lean_ctor_set_tag(v___x_713_, 1);
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
v_val_707_ = v___x_716_;
goto v___jp_706_;
}
}
}
else
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
v_a_719_ = lean_ctor_get(v___x_710_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_710_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_710_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_710_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
lean_ctor_set_tag(v___x_721_, 0);
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
v_val_707_ = v___x_724_;
goto v___jp_706_;
}
}
}
v___jp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v_val_707_);
v___x_709_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_704_, v___x_705_, v___x_708_, v___f_703_);
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object* v_f_727_, lean_object* v___f_728_, lean_object* v_args_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(v_f_727_, v___f_728_, v_args_729_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object* v_f_732_){
_start:
{
lean_object* v___f_734_; lean_object* v___f_735_; lean_object* v___x_736_; 
v___f_734_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_735_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_735_, 0, v_f_732_);
lean_closure_set(v___f_735_, 1, v___f_734_);
v___x_736_ = l_Lasm_JS_Function_ofFn(v___f_735_);
if (lean_obj_tag(v___x_736_) == 0)
{
lean_object* v_a_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_744_; 
v_a_737_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_744_ == 0)
{
v___x_739_ = v___x_736_;
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_a_737_);
lean_dec(v___x_736_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_744_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
lean_object* v___x_742_; 
if (v_isShared_740_ == 0)
{
v___x_742_ = v___x_739_;
goto v_reusejp_741_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v_a_737_);
v___x_742_ = v_reuseFailAlloc_743_;
goto v_reusejp_741_;
}
v_reusejp_741_:
{
return v___x_742_;
}
}
}
else
{
lean_object* v_a_745_; lean_object* v___x_747_; uint8_t v_isShared_748_; uint8_t v_isSharedCheck_752_; 
v_a_745_ = lean_ctor_get(v___x_736_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_752_ == 0)
{
v___x_747_ = v___x_736_;
v_isShared_748_ = v_isSharedCheck_752_;
goto v_resetjp_746_;
}
else
{
lean_inc(v_a_745_);
lean_dec(v___x_736_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object* v_f_753_, lean_object* v_a_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(v_f_753_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object* v_f_756_, lean_object* v_args_757_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_unsigned_to_nat(0u);
v___x_760_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_757_, v___x_759_);
if (lean_obj_tag(v___x_760_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v_a_761_ = lean_ctor_get(v___x_760_, 0);
lean_inc(v_a_761_);
lean_dec_ref_known(v___x_760_, 1);
v___x_762_ = lean_unsigned_to_nat(1u);
v___x_763_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_757_, v___x_762_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_765_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v___x_763_, 1);
v___x_765_ = lean_apply_3(v_f_756_, v_a_761_, v_a_764_, lean_box(0));
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_768_; uint8_t v_isShared_769_; uint8_t v_isSharedCheck_775_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_775_ == 0)
{
v___x_768_ = v___x_765_;
v_isShared_769_ = v_isSharedCheck_775_;
goto v_resetjp_767_;
}
else
{
lean_inc(v_a_766_);
lean_dec(v___x_765_);
v___x_768_ = lean_box(0);
v_isShared_769_ = v_isSharedCheck_775_;
goto v_resetjp_767_;
}
v_resetjp_767_:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_773_; 
v___x_770_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_771_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_771_, 0, v_a_766_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
if (v_isShared_769_ == 0)
{
lean_ctor_set(v___x_768_, 0, v___x_771_);
v___x_773_ = v___x_768_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v___x_771_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
v_a_776_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_765_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_765_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec(v_a_761_);
lean_dec_ref(v_f_756_);
v_a_784_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_763_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_763_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
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
else
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
lean_dec_ref(v_f_756_);
v_a_792_ = lean_ctor_get(v___x_760_, 0);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_760_);
if (v_isSharedCheck_799_ == 0)
{
v___x_794_ = v___x_760_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_760_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_792_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object* v_f_800_, lean_object* v_args_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(v_f_800_, v_args_801_);
lean_dec_ref(v_args_801_);
return v_res_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object* v_f_804_){
_start:
{
lean_object* v___f_806_; lean_object* v___x_807_; 
v___f_806_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_806_, 0, v_f_804_);
v___x_807_ = l_Lasm_JS_Function_ofSyncFn(v___f_806_);
if (lean_obj_tag(v___x_807_) == 0)
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
v_a_808_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_807_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_807_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
else
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
v_a_816_ = lean_ctor_get(v___x_807_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_807_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_807_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
lean_object* v___x_821_; 
if (v_isShared_819_ == 0)
{
v___x_821_ = v___x_818_;
goto v_reusejp_820_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v_a_816_);
v___x_821_ = v_reuseFailAlloc_822_;
goto v_reusejp_820_;
}
v_reusejp_820_:
{
return v___x_821_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object* v_f_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(v_f_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object* v___f_836_, lean_object* v___f_837_, lean_object* v___f_838_, lean_object* v___f_839_, lean_object* v___f_840_, lean_object* v_d_841_){
_start:
{
lean_object* v_maxRequestBodySize_842_; lean_object* v_error_843_; lean_object* v_id_844_; lean_object* v_hostname_845_; lean_object* v_port_846_; lean_object* v_reusePort_847_; lean_object* v_ipv6Only_848_; lean_object* v_idleTimeout_849_; lean_object* v_fetch_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v_maxRequestBodySize_842_ = lean_ctor_get(v_d_841_, 0);
lean_inc(v_maxRequestBodySize_842_);
v_error_843_ = lean_ctor_get(v_d_841_, 1);
lean_inc(v_error_843_);
v_id_844_ = lean_ctor_get(v_d_841_, 2);
lean_inc(v_id_844_);
v_hostname_845_ = lean_ctor_get(v_d_841_, 3);
lean_inc(v_hostname_845_);
v_port_846_ = lean_ctor_get(v_d_841_, 4);
lean_inc(v_port_846_);
v_reusePort_847_ = lean_ctor_get(v_d_841_, 5);
lean_inc(v_reusePort_847_);
v_ipv6Only_848_ = lean_ctor_get(v_d_841_, 6);
lean_inc(v_ipv6Only_848_);
v_idleTimeout_849_ = lean_ctor_get(v_d_841_, 7);
lean_inc(v_idleTimeout_849_);
v_fetch_850_ = lean_ctor_get(v_d_841_, 8);
lean_inc(v_fetch_850_);
lean_dec_ref(v_d_841_);
v___x_851_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
lean_inc_ref(v___f_836_);
v___x_852_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_836_, v_maxRequestBodySize_842_);
v___x_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_853_, 0, v___x_851_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_855_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_837_, v_error_843_);
v___x_856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
lean_inc_ref(v___f_838_);
v___x_858_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_838_, v_id_844_);
v___x_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_857_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
v___x_860_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_861_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_838_, v_hostname_845_);
v___x_862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_862_, 0, v___x_860_);
lean_ctor_set(v___x_862_, 1, v___x_861_);
v___x_863_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_864_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_839_, v_port_846_);
v___x_865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_865_, 0, v___x_863_);
lean_ctor_set(v___x_865_, 1, v___x_864_);
v___x_866_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
lean_inc_ref(v___f_840_);
v___x_867_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_840_, v_reusePort_847_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_866_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
v___x_869_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_870_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_840_, v_ipv6Only_848_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_869_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_873_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_836_, v_idleTimeout_849_);
v___x_874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_874_, 0, v___x_872_);
lean_ctor_set(v___x_874_, 1, v___x_873_);
v___x_875_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_876_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_877_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_877_, 0, v_fetch_850_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_875_);
lean_ctor_set(v___x_878_, 1, v___x_877_);
v___x_879_ = lean_unsigned_to_nat(9u);
v___x_880_ = lean_mk_empty_array_with_capacity(v___x_879_);
v___x_881_ = lean_array_push(v___x_880_, v___x_853_);
v___x_882_ = lean_array_push(v___x_881_, v___x_856_);
v___x_883_ = lean_array_push(v___x_882_, v___x_859_);
v___x_884_ = lean_array_push(v___x_883_, v___x_862_);
v___x_885_ = lean_array_push(v___x_884_, v___x_865_);
v___x_886_ = lean_array_push(v___x_885_, v___x_868_);
v___x_887_ = lean_array_push(v___x_886_, v___x_871_);
v___x_888_ = lean_array_push(v___x_887_, v___x_874_);
v___x_889_ = lean_array_push(v___x_888_, v___x_878_);
v___x_890_ = l_Lasm_JS_Web_Support_fields(v___x_889_);
lean_dec_ref(v___x_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(lean_object* v_x_901_){
_start:
{
if (lean_obj_tag(v_x_901_) == 0)
{
lean_object* v___x_902_; 
v___x_902_ = lean_unsigned_to_nat(0u);
return v___x_902_;
}
else
{
lean_object* v___x_903_; 
v___x_903_ = lean_unsigned_to_nat(1u);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___boxed(lean_object* v_x_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(v_x_904_);
lean_dec_ref(v_x_904_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(lean_object* v_t_906_, lean_object* v_k_907_){
_start:
{
if (lean_obj_tag(v_t_906_) == 0)
{
lean_object* v_value_908_; lean_object* v___x_909_; 
v_value_908_ = lean_ctor_get(v_t_906_, 0);
lean_inc(v_value_908_);
lean_dec_ref_known(v_t_906_, 1);
v___x_909_ = lean_apply_1(v_k_907_, v_value_908_);
return v___x_909_;
}
else
{
lean_object* v_value_910_; lean_object* v___x_911_; 
v_value_910_ = lean_ctor_get(v_t_906_, 0);
lean_inc_ref(v_value_910_);
lean_dec_ref_known(v_t_906_, 1);
v___x_911_ = lean_apply_1(v_k_907_, v_value_910_);
return v___x_911_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(lean_object* v_motive_912_, lean_object* v_ctorIdx_913_, lean_object* v_t_914_, lean_object* v_h_915_, lean_object* v_k_916_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_914_, v_k_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___boxed(lean_object* v_motive_918_, lean_object* v_ctorIdx_919_, lean_object* v_t_920_, lean_object* v_h_921_, lean_object* v_k_922_){
_start:
{
lean_object* v_res_923_; 
v_res_923_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(v_motive_918_, v_ctorIdx_919_, v_t_920_, v_h_921_, v_k_922_);
lean_dec(v_ctorIdx_919_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim___redArg(lean_object* v_t_924_, lean_object* v_request_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_924_, v_request_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim(lean_object* v_motive_927_, lean_object* v_t_928_, lean_object* v_h_929_, lean_object* v_request_930_){
_start:
{
lean_object* v___x_931_; 
v___x_931_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_928_, v_request_930_);
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim___redArg(lean_object* v_t_932_, lean_object* v_domString_933_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_932_, v_domString_933_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim(lean_object* v_motive_935_, lean_object* v_t_936_, lean_object* v_h_937_, lean_object* v_domString_938_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_936_, v_domString_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0(lean_object* v_x_940_){
_start:
{
if (lean_obj_tag(v_x_940_) == 0)
{
lean_object* v_value_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_value_941_ = lean_ctor_get(v_x_940_, 0);
lean_inc(v_value_941_);
lean_dec_ref_known(v_x_940_, 1);
v___x_942_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_943_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_943_, 0, v_value_941_);
lean_ctor_set(v___x_943_, 1, v___x_942_);
return v___x_943_;
}
else
{
lean_object* v_value_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_value_944_ = lean_ctor_get(v_x_940_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v_x_940_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v_x_940_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_value_944_);
lean_dec(v_x_940_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set_tag(v___x_946_, 4);
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_value_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object* v_value_954_){
_start:
{
lean_object* v___x_955_; 
v___x_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_955_, 0, v_value_954_);
return v___x_955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object* v_value_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_959_, 0, v_value_958_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(lean_object* v___x_964_, lean_object* v___x_965_, lean_object* v___x_966_, lean_object* v_d_967_){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
v___x_969_ = l_Lasm_JS_readField___redArg(v___x_964_, v_d_967_, v___x_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec_ref(v___x_966_);
lean_dec_ref(v___x_965_);
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
return v___x_975_;
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
v_a_978_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_978_);
lean_dec_ref_known(v___x_969_, 1);
v___x_979_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_980_ = l_Lasm_JS_readField___redArg(v___x_965_, v_d_967_, v___x_979_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v_a_978_);
lean_dec_ref(v___x_966_);
v_a_981_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_980_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_980_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v_a_989_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_989_);
lean_dec_ref_known(v___x_980_, 1);
v___x_990_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
v___x_991_ = l_Lasm_JS_readField___redArg(v___x_966_, v_d_967_, v___x_990_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
lean_dec(v_a_989_);
lean_dec(v_a_978_);
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1009_; 
v_a_1000_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1002_ = v___x_991_;
v_isShared_1003_ = v_isSharedCheck_1009_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_991_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1009_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1004_; uint8_t v___x_1005_; lean_object* v___x_1007_; 
v___x_1004_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1004_, 0, v_a_978_);
lean_ctor_set(v___x_1004_, 1, v_a_989_);
v___x_1005_ = lean_unbox(v_a_1000_);
lean_dec(v_a_1000_);
lean_ctor_set_uint8(v___x_1004_, sizeof(void*)*2, v___x_1005_);
if (v_isShared_1003_ == 0)
{
lean_ctor_set(v___x_1002_, 0, v___x_1004_);
v___x_1007_ = v___x_1002_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v___x_1004_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed(lean_object* v___x_1010_, lean_object* v___x_1011_, lean_object* v___x_1012_, lean_object* v_d_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(v___x_1010_, v___x_1011_, v___x_1012_, v_d_1013_);
lean_dec(v_d_1013_);
return v_res_1014_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0(void){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___f_1018_; 
v___x_1015_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily));
v___x_1016_ = l_Lasm_JS_instFromJSNat;
v___x_1017_ = l_Lasm_JS_instFromJSString;
v___f_1018_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1018_, 0, v___x_1017_);
lean_closure_set(v___f_1018_, 1, v___x_1016_);
lean_closure_set(v___f_1018_, 2, v___x_1015_);
return v___f_1018_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2(void){
_start:
{
uint8_t v___x_1020_; lean_object* v___x_1021_; lean_object* v___f_1022_; lean_object* v___x_1023_; 
v___x_1020_ = 0;
v___x_1021_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___closed__1));
v___f_1022_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0);
v___x_1023_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1023_, 0, v___f_1022_);
lean_ctor_set(v___x_1023_, 1, v___x_1021_);
lean_ctor_set_uint8(v___x_1023_, sizeof(void*)*2, v___x_1020_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress(void){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests(lean_object* v_self_1026_){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Bun_Server_pendingRequests___closed__0));
v___x_1029_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1026_, v___x_1028_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests___boxed(lean_object* v_self_1030_, lean_object* v_a_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lasm_JS_Bun_Server_pendingRequests(v_self_1030_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url(lean_object* v_self_1034_){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l_Lasm_JS_Bun_Server_url___closed__0));
v___x_1037_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1034_, v___x_1036_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1045_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1040_ = v___x_1037_;
v_isShared_1041_ = v_isSharedCheck_1045_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1037_);
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
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
v_a_1046_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1037_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1037_);
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url___boxed(lean_object* v_self_1054_, lean_object* v_a_1055_){
_start:
{
lean_object* v_res_1056_; 
v_res_1056_ = l_Lasm_JS_Bun_Server_url(v_self_1054_);
return v_res_1056_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_unsigned_to_nat(0u);
v___x_1061_ = lean_nat_to_int(v___x_1060_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(lean_object* v_context_1064_, lean_object* v_d_1065_){
_start:
{
lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1077_; lean_object* v_received_1078_; lean_object* v___y_1097_; lean_object* v_a_1100_; lean_object* v_a_1125_; 
switch(lean_obj_tag(v_d_1065_))
{
case 1:
{
goto v___jp_1067_;
}
case 0:
{
goto v___jp_1067_;
}
default: 
{
switch(lean_obj_tag(v_d_1065_))
{
case 3:
{
double v_n_1132_; lean_object* v___x_1133_; 
v_n_1132_ = lean_ctor_get_float(v_d_1065_, 0);
v___x_1133_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1132_);
if (lean_obj_tag(v___x_1133_) == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1100_ = v___x_1134_;
goto v___jp_1099_;
}
else
{
lean_object* v_val_1135_; 
v_val_1135_ = lean_ctor_get(v___x_1133_, 0);
lean_inc(v_val_1135_);
lean_dec_ref_known(v___x_1133_, 1);
v_a_1125_ = v_val_1135_;
goto v___jp_1124_;
}
}
case 5:
{
lean_object* v_i_1136_; 
v_i_1136_ = lean_ctor_get(v_d_1065_, 0);
lean_inc(v_i_1136_);
v_a_1125_ = v_i_1136_;
goto v___jp_1124_;
}
default: 
{
lean_object* v___x_1137_; 
v___x_1137_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1100_ = v___x_1137_;
goto v___jp_1099_;
}
}
}
}
v___jp_1067_:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_box(0);
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
return v___x_1069_;
}
v___jp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = lean_string_append(v___y_1071_, v___y_1072_);
lean_dec_ref(v___y_1072_);
v___x_1074_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
v___x_1075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
return v___x_1075_;
}
v___jp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v___x_1079_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1080_ = lean_string_append(v___x_1079_, v_context_1064_);
v___x_1081_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1082_ = lean_string_append(v___x_1080_, v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0));
v___x_1084_ = lean_string_append(v___x_1082_, v___x_1083_);
v___x_1085_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1086_ = lean_string_append(v___x_1084_, v___x_1085_);
v___x_1087_ = lean_string_append(v___x_1086_, v_received_1078_);
lean_dec_ref(v_received_1078_);
v___x_1088_ = lean_string_utf8_byte_size(v___y_1077_);
v___x_1089_ = lean_unsigned_to_nat(0u);
v___x_1090_ = lean_nat_dec_eq(v___x_1088_, v___x_1089_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1091_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1092_ = lean_string_append(v___x_1091_, v___y_1077_);
v___x_1093_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1094_ = lean_string_append(v___x_1092_, v___x_1093_);
v___y_1071_ = v___x_1087_;
v___y_1072_ = v___x_1094_;
goto v___jp_1070_;
}
else
{
lean_object* v___x_1095_; 
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1071_ = v___x_1087_;
v___y_1072_ = v___x_1095_;
goto v___jp_1070_;
}
}
v___jp_1096_:
{
lean_object* v___x_1098_; 
v___x_1098_ = l_Lasm_JS_Data_describe(v_d_1065_);
v___y_1077_ = v___y_1097_;
v_received_1078_ = v___x_1098_;
goto v___jp_1076_;
}
v___jp_1099_:
{
if (lean_obj_tag(v_d_1065_) == 9)
{
lean_object* v_value_1101_; lean_object* v_description_1102_; lean_object* v___x_1103_; uint8_t v___x_1104_; 
v_value_1101_ = lean_ctor_get(v_d_1065_, 0);
v_description_1102_ = lean_ctor_get(v_d_1065_, 1);
v___x_1103_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1104_ = lean_string_dec_eq(v_description_1102_, v___x_1103_);
if (v___x_1104_ == 0)
{
v___y_1097_ = v_a_1100_;
goto v___jp_1096_;
}
else
{
lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1121_; 
lean_inc(v_value_1101_);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_d_1065_);
if (v_isSharedCheck_1121_ == 0)
{
lean_object* v_unused_1122_; lean_object* v_unused_1123_; 
v_unused_1122_ = lean_ctor_get(v_d_1065_, 1);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_d_1065_, 0);
lean_dec(v_unused_1123_);
v___x_1106_ = v_d_1065_;
v_isShared_1107_ = v_isSharedCheck_1121_;
goto v_resetjp_1105_;
}
else
{
lean_dec(v_d_1065_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1121_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
uint32_t v___x_1108_; uint64_t v___x_1109_; lean_object* v___x_1111_; 
v___x_1108_ = 206;
v___x_1109_ = 0ULL;
lean_inc(v_value_1101_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 1, v___x_1103_);
v___x_1111_ = v___x_1106_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_value_1101_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1103_);
v___x_1111_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
uint32_t v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = lasm_js_value_handle(v_value_1101_);
lean_dec(v_value_1101_);
v___x_1113_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1108_, v___x_1109_, v___x_1111_, v___x_1112_);
lean_dec_ref(v___x_1111_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; uint8_t v___x_1115_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref_known(v___x_1113_, 1);
v___x_1115_ = lean_string_validate_utf8(v_a_1114_);
if (v___x_1115_ == 0)
{
lean_object* v___x_1116_; lean_object* v___x_1117_; 
lean_dec(v_a_1114_);
v___x_1116_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_1117_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1116_);
v___y_1077_ = v_a_1100_;
v_received_1078_ = v___x_1117_;
goto v___jp_1076_;
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_string_from_utf8_unchecked(v_a_1114_);
v___y_1077_ = v_a_1100_;
v_received_1078_ = v___x_1118_;
goto v___jp_1076_;
}
}
else
{
lean_object* v___x_1119_; 
lean_dec_ref_known(v___x_1113_, 1);
v___x_1119_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_1077_ = v_a_1100_;
v_received_1078_ = v___x_1119_;
goto v___jp_1076_;
}
}
}
}
}
else
{
v___y_1097_ = v_a_1100_;
goto v___jp_1096_;
}
}
v___jp_1124_:
{
lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1126_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1127_ = lean_int_dec_le(v___x_1126_, v_a_1125_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; 
lean_dec(v_a_1125_);
v___x_1128_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1100_ = v___x_1128_;
goto v___jp_1099_;
}
else
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; 
lean_dec(v_d_1065_);
v___x_1129_ = l_Int_toNat(v_a_1125_);
lean_dec(v_a_1125_);
v___x_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1129_);
v___x_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
return v___x_1131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1138_, lean_object* v_d_1139_, lean_object* v_a_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1138_, v_d_1139_);
lean_dec_ref(v_context_1138_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(lean_object* v_context_1142_, lean_object* v_bytes_1143_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1143_);
if (lean_obj_tag(v___x_1145_) == 0)
{
lean_object* v_a_1146_; lean_object* v___x_1147_; 
v_a_1146_ = lean_ctor_get(v___x_1145_, 0);
lean_inc(v_a_1146_);
lean_dec_ref_known(v___x_1145_, 1);
v___x_1147_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1142_, v_a_1146_);
return v___x_1147_;
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
v_a_1148_ = lean_ctor_get(v___x_1145_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1145_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1145_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1145_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0___boxed(lean_object* v_context_1156_, lean_object* v_bytes_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v_context_1156_, v_bytes_1157_);
lean_dec_ref(v_bytes_1157_);
lean_dec_ref(v_context_1156_);
return v_res_1159_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1160_; uint64_t v___x_1161_; 
v___x_1160_ = 0;
v___x_1161_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(lean_object* v_o_1163_, lean_object* v_key_1164_){
_start:
{
lean_object* v_k_1166_; lean_object* v___x_1167_; 
v_k_1166_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1166_, 0, v_key_1164_);
v___x_1167_ = l_Lasm_JS_Wire_encodeIO(v_k_1166_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; uint32_t v___x_1169_; uint32_t v___x_1170_; uint64_t v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_a_1168_);
lean_dec_ref_known(v___x_1167_, 1);
v___x_1169_ = 203;
v___x_1170_ = lasm_js_value_handle(v_o_1163_);
v___x_1171_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1172_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1173_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1173_, 0, v_o_1163_);
lean_ctor_set(v___x_1173_, 1, v___x_1172_);
v___x_1174_ = lean_unsigned_to_nat(2u);
v___x_1175_ = lean_mk_empty_array_with_capacity(v___x_1174_);
lean_inc_ref(v_k_1166_);
v___x_1176_ = lean_array_push(v___x_1175_, v_k_1166_);
v___x_1177_ = lean_array_push(v___x_1176_, v___x_1173_);
v___x_1178_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
v___x_1179_ = lasm_js_call(v___x_1169_, v___x_1170_, v___x_1171_, v_a_1168_, v___x_1178_);
lean_dec_ref_known(v___x_1178_, 1);
lean_dec(v_a_1168_);
if (lean_obj_tag(v___x_1179_) == 0)
{
lean_object* v_a_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v_a_1180_ = lean_ctor_get(v___x_1179_, 0);
lean_inc(v_a_1180_);
lean_dec_ref_known(v___x_1179_, 1);
v___x_1181_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1182_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1166_);
v___x_1183_ = lean_string_append(v___x_1181_, v___x_1182_);
lean_dec_ref(v___x_1182_);
v___x_1184_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v___x_1183_, v_a_1180_);
lean_dec(v_a_1180_);
lean_dec_ref(v___x_1183_);
return v___x_1184_;
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec_ref_known(v_k_1166_, 1);
v_a_1185_ = lean_ctor_get(v___x_1179_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1179_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1179_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1179_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v_a_1185_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_object* v_a_1193_; lean_object* v___x_1195_; uint8_t v_isShared_1196_; uint8_t v_isSharedCheck_1200_; 
lean_dec_ref_known(v_k_1166_, 1);
lean_dec(v_o_1163_);
v_a_1193_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_1195_ = v___x_1167_;
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
else
{
lean_inc(v_a_1193_);
lean_dec(v___x_1167_);
v___x_1195_ = lean_box(0);
v_isShared_1196_ = v_isSharedCheck_1200_;
goto v_resetjp_1194_;
}
v_resetjp_1194_:
{
lean_object* v___x_1198_; 
if (v_isShared_1196_ == 0)
{
v___x_1198_ = v___x_1195_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_a_1193_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___boxed(lean_object* v_o_1201_, lean_object* v_key_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v_res_1204_; 
v_res_1204_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_o_1201_, v_key_1202_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port(lean_object* v_self_1205_){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1208_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_self_1205_, v___x_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port___boxed(lean_object* v_self_1209_, lean_object* v_a_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_Lasm_JS_Bun_Server_port(v_self_1209_);
return v_res_1211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(lean_object* v_o_1212_, lean_object* v_key_1213_){
_start:
{
lean_object* v_k_1215_; lean_object* v___x_1216_; 
v_k_1215_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1215_, 0, v_key_1213_);
v___x_1216_ = l_Lasm_JS_Wire_encodeIO(v_k_1215_);
if (lean_obj_tag(v___x_1216_) == 0)
{
lean_object* v_a_1217_; uint32_t v___x_1218_; uint32_t v___x_1219_; uint64_t v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v_a_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1216_, 1);
v___x_1218_ = 203;
v___x_1219_ = lasm_js_value_handle(v_o_1212_);
v___x_1220_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1221_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1222_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1222_, 0, v_o_1212_);
lean_ctor_set(v___x_1222_, 1, v___x_1221_);
v___x_1223_ = lean_unsigned_to_nat(2u);
v___x_1224_ = lean_mk_empty_array_with_capacity(v___x_1223_);
lean_inc_ref(v_k_1215_);
v___x_1225_ = lean_array_push(v___x_1224_, v_k_1215_);
v___x_1226_ = lean_array_push(v___x_1225_, v___x_1222_);
v___x_1227_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
v___x_1228_ = lasm_js_call(v___x_1218_, v___x_1219_, v___x_1220_, v_a_1217_, v___x_1227_);
lean_dec_ref_known(v___x_1227_, 1);
lean_dec(v_a_1217_);
if (lean_obj_tag(v___x_1228_) == 0)
{
lean_object* v_a_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_a_1229_);
lean_dec_ref_known(v___x_1228_, 1);
v___x_1230_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1231_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1215_);
v___x_1232_ = lean_string_append(v___x_1230_, v___x_1231_);
lean_dec_ref(v___x_1231_);
v___x_1233_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1232_, v_a_1229_);
lean_dec(v_a_1229_);
lean_dec_ref(v___x_1232_);
return v___x_1233_;
}
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec_ref_known(v_k_1215_, 1);
v_a_1234_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1228_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1228_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
lean_dec_ref_known(v_k_1215_, 1);
lean_dec(v_o_1212_);
v_a_1242_ = lean_ctor_get(v___x_1216_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1216_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1216_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0___boxed(lean_object* v_o_1250_, lean_object* v_key_1251_, lean_object* v_a_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_o_1250_, v_key_1251_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname(lean_object* v_self_1254_){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1257_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_self_1254_, v___x_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname___boxed(lean_object* v_self_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Lasm_JS_Bun_Server_hostname(v_self_1258_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(lean_object* v_context_1263_, lean_object* v_d_1264_){
_start:
{
lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1276_; lean_object* v_received_1277_; lean_object* v___y_1293_; uint8_t v_a_1321_; 
switch(lean_obj_tag(v_d_1264_))
{
case 1:
{
goto v___jp_1266_;
}
case 0:
{
goto v___jp_1266_;
}
default: 
{
if (lean_obj_tag(v_d_1264_) == 4)
{
lean_object* v_s_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; 
v_s_1325_ = lean_ctor_get(v_d_1264_, 0);
v___x_1326_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_1327_ = lean_string_dec_eq(v_s_1325_, v___x_1326_);
if (v___x_1327_ == 0)
{
lean_object* v___x_1328_; uint8_t v___x_1329_; 
v___x_1328_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_1329_ = lean_string_dec_eq(v_s_1325_, v___x_1328_);
if (v___x_1329_ == 0)
{
goto v___jp_1295_;
}
else
{
uint8_t v___x_1330_; 
lean_dec_ref_known(v_d_1264_, 1);
v___x_1330_ = 1;
v_a_1321_ = v___x_1330_;
goto v___jp_1320_;
}
}
else
{
uint8_t v___x_1331_; 
lean_dec_ref_known(v_d_1264_, 1);
v___x_1331_ = 0;
v_a_1321_ = v___x_1331_;
goto v___jp_1320_;
}
}
else
{
goto v___jp_1295_;
}
}
}
v___jp_1266_:
{
lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1267_ = lean_box(0);
v___x_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1268_, 0, v___x_1267_);
return v___x_1268_;
}
v___jp_1269_:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1272_ = lean_string_append(v___y_1270_, v___y_1271_);
v___x_1273_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
v___x_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1273_);
return v___x_1274_;
}
v___jp_1275_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; uint8_t v___x_1289_; 
v___x_1278_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1279_ = lean_string_append(v___x_1278_, v_context_1263_);
v___x_1280_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1281_ = lean_string_append(v___x_1279_, v___x_1280_);
v___x_1282_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0));
v___x_1283_ = lean_string_append(v___x_1281_, v___x_1282_);
v___x_1284_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1285_ = lean_string_append(v___x_1283_, v___x_1284_);
v___x_1286_ = lean_string_append(v___x_1285_, v_received_1277_);
lean_dec_ref(v_received_1277_);
v___x_1287_ = lean_string_utf8_byte_size(v___y_1276_);
v___x_1288_ = lean_unsigned_to_nat(0u);
v___x_1289_ = lean_nat_dec_eq(v___x_1287_, v___x_1288_);
if (v___x_1289_ == 0)
{
lean_object* v___x_1290_; 
v___x_1290_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___y_1270_ = v___x_1286_;
v___y_1271_ = v___x_1290_;
goto v___jp_1269_;
}
else
{
lean_object* v___x_1291_; 
v___x_1291_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1270_ = v___x_1286_;
v___y_1271_ = v___x_1291_;
goto v___jp_1269_;
}
}
v___jp_1292_:
{
lean_object* v___x_1294_; 
v___x_1294_ = l_Lasm_JS_Data_describe(v_d_1264_);
v___y_1276_ = v___y_1293_;
v_received_1277_ = v___x_1294_;
goto v___jp_1275_;
}
v___jp_1295_:
{
lean_object* v___x_1296_; 
v___x_1296_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0));
if (lean_obj_tag(v_d_1264_) == 9)
{
lean_object* v_value_1297_; lean_object* v_description_1298_; lean_object* v___x_1299_; uint8_t v___x_1300_; 
v_value_1297_ = lean_ctor_get(v_d_1264_, 0);
v_description_1298_ = lean_ctor_get(v_d_1264_, 1);
v___x_1299_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1300_ = lean_string_dec_eq(v_description_1298_, v___x_1299_);
if (v___x_1300_ == 0)
{
v___y_1293_ = v___x_1296_;
goto v___jp_1292_;
}
else
{
lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1317_; 
lean_inc(v_value_1297_);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_d_1264_);
if (v_isSharedCheck_1317_ == 0)
{
lean_object* v_unused_1318_; lean_object* v_unused_1319_; 
v_unused_1318_ = lean_ctor_get(v_d_1264_, 1);
lean_dec(v_unused_1318_);
v_unused_1319_ = lean_ctor_get(v_d_1264_, 0);
lean_dec(v_unused_1319_);
v___x_1302_ = v_d_1264_;
v_isShared_1303_ = v_isSharedCheck_1317_;
goto v_resetjp_1301_;
}
else
{
lean_dec(v_d_1264_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1317_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
uint32_t v___x_1304_; uint64_t v___x_1305_; lean_object* v___x_1307_; 
v___x_1304_ = 206;
v___x_1305_ = 0ULL;
lean_inc(v_value_1297_);
if (v_isShared_1303_ == 0)
{
lean_ctor_set(v___x_1302_, 1, v___x_1299_);
v___x_1307_ = v___x_1302_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_value_1297_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v___x_1299_);
v___x_1307_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
uint32_t v___x_1308_; lean_object* v___x_1309_; 
v___x_1308_ = lasm_js_value_handle(v_value_1297_);
lean_dec(v_value_1297_);
v___x_1309_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1304_, v___x_1305_, v___x_1307_, v___x_1308_);
lean_dec_ref(v___x_1307_);
if (lean_obj_tag(v___x_1309_) == 0)
{
lean_object* v_a_1310_; uint8_t v___x_1311_; 
v_a_1310_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_a_1310_);
lean_dec_ref_known(v___x_1309_, 1);
v___x_1311_ = lean_string_validate_utf8(v_a_1310_);
if (v___x_1311_ == 0)
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
lean_dec(v_a_1310_);
v___x_1312_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_1313_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1312_);
v___y_1276_ = v___x_1296_;
v_received_1277_ = v___x_1313_;
goto v___jp_1275_;
}
else
{
lean_object* v___x_1314_; 
v___x_1314_ = lean_string_from_utf8_unchecked(v_a_1310_);
v___y_1276_ = v___x_1296_;
v_received_1277_ = v___x_1314_;
goto v___jp_1275_;
}
}
else
{
lean_object* v___x_1315_; 
lean_dec_ref_known(v___x_1309_, 1);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_1276_ = v___x_1296_;
v_received_1277_ = v___x_1315_;
goto v___jp_1275_;
}
}
}
}
}
else
{
v___y_1293_ = v___x_1296_;
goto v___jp_1292_;
}
}
v___jp_1320_:
{
lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1322_ = lean_box(v_a_1321_);
v___x_1323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1323_, 0, v___x_1322_);
v___x_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
return v___x_1324_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1332_, lean_object* v_d_1333_, lean_object* v_a_1334_){
_start:
{
lean_object* v_res_1335_; 
v_res_1335_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1332_, v_d_1333_);
lean_dec_ref(v_context_1332_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(lean_object* v_context_1336_, lean_object* v_bytes_1337_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1337_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1341_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
lean_inc(v_a_1340_);
lean_dec_ref_known(v___x_1339_, 1);
v___x_1341_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1336_, v_a_1340_);
return v___x_1341_;
}
else
{
lean_object* v_a_1342_; lean_object* v___x_1344_; uint8_t v_isShared_1345_; uint8_t v_isSharedCheck_1349_; 
v_a_1342_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1344_ = v___x_1339_;
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
else
{
lean_inc(v_a_1342_);
lean_dec(v___x_1339_);
v___x_1344_ = lean_box(0);
v_isShared_1345_ = v_isSharedCheck_1349_;
goto v_resetjp_1343_;
}
v_resetjp_1343_:
{
lean_object* v___x_1347_; 
if (v_isShared_1345_ == 0)
{
v___x_1347_ = v___x_1344_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_a_1342_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0___boxed(lean_object* v_context_1350_, lean_object* v_bytes_1351_, lean_object* v_a_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v_context_1350_, v_bytes_1351_);
lean_dec_ref(v_bytes_1351_);
lean_dec_ref(v_context_1350_);
return v_res_1353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(lean_object* v_o_1354_, lean_object* v_key_1355_){
_start:
{
lean_object* v_k_1357_; lean_object* v___x_1358_; 
v_k_1357_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1357_, 0, v_key_1355_);
v___x_1358_ = l_Lasm_JS_Wire_encodeIO(v_k_1357_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v_a_1359_; uint32_t v___x_1360_; uint32_t v___x_1361_; uint64_t v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v_a_1359_ = lean_ctor_get(v___x_1358_, 0);
lean_inc(v_a_1359_);
lean_dec_ref_known(v___x_1358_, 1);
v___x_1360_ = 203;
v___x_1361_ = lasm_js_value_handle(v_o_1354_);
v___x_1362_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1363_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1364_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1364_, 0, v_o_1354_);
lean_ctor_set(v___x_1364_, 1, v___x_1363_);
v___x_1365_ = lean_unsigned_to_nat(2u);
v___x_1366_ = lean_mk_empty_array_with_capacity(v___x_1365_);
lean_inc_ref(v_k_1357_);
v___x_1367_ = lean_array_push(v___x_1366_, v_k_1357_);
v___x_1368_ = lean_array_push(v___x_1367_, v___x_1364_);
v___x_1369_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1369_, 0, v___x_1368_);
v___x_1370_ = lasm_js_call(v___x_1360_, v___x_1361_, v___x_1362_, v_a_1359_, v___x_1369_);
lean_dec_ref_known(v___x_1369_, 1);
lean_dec(v_a_1359_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref_known(v___x_1370_, 1);
v___x_1372_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1373_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1357_);
v___x_1374_ = lean_string_append(v___x_1372_, v___x_1373_);
lean_dec_ref(v___x_1373_);
v___x_1375_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v___x_1374_, v_a_1371_);
lean_dec(v_a_1371_);
lean_dec_ref(v___x_1374_);
return v___x_1375_;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
lean_dec_ref_known(v_k_1357_, 1);
v_a_1376_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1370_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1370_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_dec_ref_known(v_k_1357_, 1);
lean_dec(v_o_1354_);
v_a_1384_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1358_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1358_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0___boxed(lean_object* v_o_1392_, lean_object* v_key_1393_, lean_object* v_a_1394_){
_start:
{
lean_object* v_res_1395_; 
v_res_1395_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_o_1392_, v_key_1393_);
return v_res_1395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol(lean_object* v_self_1397_){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Bun_Server_protocol___closed__0));
v___x_1400_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_self_1397_, v___x_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol___boxed(lean_object* v_self_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v_res_1403_; 
v_res_1403_ = l_Lasm_JS_Bun_Server_protocol(v_self_1401_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development(lean_object* v_self_1405_){
_start:
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
v___x_1407_ = ((lean_object*)(l_Lasm_JS_Bun_Server_development___closed__0));
v___x_1408_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1405_, v___x_1407_);
return v___x_1408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development___boxed(lean_object* v_self_1409_, lean_object* v_a_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lasm_JS_Bun_Server_development(v_self_1409_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id(lean_object* v_self_1412_){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1415_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1412_, v___x_1414_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id___boxed(lean_object* v_self_1416_, lean_object* v_a_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = l_Lasm_JS_Bun_Server_id(v_self_1416_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop(lean_object* v_self_1420_, lean_object* v_closeActiveConnections_1421_){
_start:
{
lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1423_ = ((lean_object*)(l_Lasm_JS_Bun_Server_stop___closed__0));
v___x_1424_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_closeActiveConnections_1421_);
v___x_1425_ = lean_unsigned_to_nat(1u);
v___x_1426_ = lean_mk_empty_array_with_capacity(v___x_1425_);
v___x_1427_ = lean_array_push(v___x_1426_, v___x_1424_);
v___x_1428_ = l_Lasm_JS_Web_Support_args(v___x_1427_);
v___x_1429_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1420_, v___x_1423_, v___x_1428_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop___boxed(lean_object* v_self_1430_, lean_object* v_closeActiveConnections_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lasm_JS_Bun_Server_stop(v_self_1430_, v_closeActiveConnections_1431_);
lean_dec(v_closeActiveConnections_1431_);
return v_res_1433_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(uint8_t v_await_1434_, uint64_t v_extra_1435_){
_start:
{
uint64_t v___x_1436_; uint64_t v___y_1438_; 
v___x_1436_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1434_ == 0)
{
uint64_t v___x_1441_; 
v___x_1441_ = 0ULL;
v___y_1438_ = v___x_1441_;
goto v___jp_1437_;
}
else
{
uint64_t v___x_1442_; 
v___x_1442_ = 2ULL;
v___y_1438_ = v___x_1442_;
goto v___jp_1437_;
}
v___jp_1437_:
{
uint64_t v___x_1439_; uint64_t v___x_1440_; 
v___x_1439_ = lean_uint64_lor(v___x_1436_, v___y_1438_);
v___x_1440_ = lean_uint64_lor(v___x_1439_, v_extra_1435_);
return v___x_1440_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0___boxed(lean_object* v_await_1443_, lean_object* v_extra_1444_){
_start:
{
uint8_t v_await_boxed_1445_; uint64_t v_extra_boxed_1446_; uint64_t v_res_1447_; lean_object* v_r_1448_; 
v_await_boxed_1445_ = lean_unbox(v_await_1443_);
v_extra_boxed_1446_ = lean_unbox_uint64(v_extra_1444_);
lean_dec_ref(v_extra_1444_);
v_res_1447_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v_await_boxed_1445_, v_extra_boxed_1446_);
v_r_1448_ = lean_box_uint64(v_res_1447_);
return v_r_1448_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1449_; uint8_t v___x_1450_; uint64_t v___x_1451_; 
v___x_1449_ = 8ULL;
v___x_1450_ = 0;
v___x_1451_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v___x_1450_, v___x_1449_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(lean_object* v_o_1453_, lean_object* v_name_1454_, lean_object* v_args_1455_){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; uint64_t v___x_1460_; lean_object* v___x_1461_; 
v___x_1457_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1458_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1458_, 0, v_o_1453_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
lean_inc_ref(v_name_1454_);
v___x_1459_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1459_, 0, v_name_1454_);
v___x_1460_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0);
v___x_1461_ = l_Lasm_JS_Value_invokeRaw(v___x_1458_, v___x_1459_, v_args_1455_, v___x_1460_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1461_, 1);
v___x_1463_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_1464_ = lean_string_append(v___x_1463_, v_name_1454_);
lean_dec_ref(v_name_1454_);
v___x_1465_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_1464_, v_a_1462_);
lean_dec(v_a_1462_);
lean_dec_ref(v___x_1464_);
return v___x_1465_;
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref(v_name_1454_);
v_a_1466_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1461_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1461_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1471_; 
if (v_isShared_1469_ == 0)
{
v___x_1471_ = v___x_1468_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v_a_1466_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___boxed(lean_object* v_o_1474_, lean_object* v_name_1475_, lean_object* v_args_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_o_1474_, v_name_1475_, v_args_1476_);
return v_res_1478_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2(void){
_start:
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__1));
v___x_1483_ = l_Lasm_JS_Web_Support_args(v___x_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections(lean_object* v_self_1484_){
_start:
{
lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1486_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0));
v___x_1487_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_1488_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_self_1484_, v___x_1486_, v___x_1487_);
return v___x_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___boxed(lean_object* v_self_1489_, lean_object* v_a_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l_Lasm_JS_Bun_Server_closeIdleConnections(v_self_1489_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(lean_object* v_x_1492_){
_start:
{
if (lean_obj_tag(v_x_1492_) == 0)
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_box(0);
return v___x_1493_;
}
else
{
lean_object* v_val_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v_val_1494_ = lean_ctor_get(v_x_1492_, 0);
v___x_1495_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_val_1494_);
v___x_1496_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1496_, 0, v_val_1494_);
lean_ctor_set(v___x_1496_, 1, v___x_1495_);
return v___x_1496_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0___boxed(lean_object* v_x_1497_){
_start:
{
lean_object* v_res_1498_; 
v_res_1498_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_x_1497_);
lean_dec(v_x_1497_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(lean_object* v_x_1499_){
_start:
{
if (lean_obj_tag(v_x_1499_) == 0)
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_box(0);
return v___x_1500_;
}
else
{
lean_object* v_val_1501_; 
v_val_1501_ = lean_ctor_get(v_x_1499_, 0);
lean_inc(v_val_1501_);
lean_dec_ref_known(v_x_1499_, 1);
if (lean_obj_tag(v_val_1501_) == 0)
{
lean_object* v_value_1502_; lean_object* v___x_1504_; uint8_t v_isShared_1505_; uint8_t v_isSharedCheck_1509_; 
v_value_1502_ = lean_ctor_get(v_val_1501_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v_val_1501_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1504_ = v_val_1501_;
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
else
{
lean_inc(v_value_1502_);
lean_dec(v_val_1501_);
v___x_1504_ = lean_box(0);
v_isShared_1505_ = v_isSharedCheck_1509_;
goto v_resetjp_1503_;
}
v_resetjp_1503_:
{
lean_object* v___x_1507_; 
if (v_isShared_1505_ == 0)
{
lean_ctor_set_tag(v___x_1504_, 4);
v___x_1507_ = v___x_1504_;
goto v_reusejp_1506_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v_value_1502_);
v___x_1507_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1506_;
}
v_reusejp_1506_:
{
return v___x_1507_;
}
}
}
else
{
lean_object* v_value_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1523_; 
v_value_1510_ = lean_ctor_get(v_val_1501_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_val_1501_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1512_ = v_val_1501_;
v_isShared_1513_ = v_isSharedCheck_1523_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_value_1510_);
lean_dec(v_val_1501_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1523_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1514_ = lean_nat_to_int(v_value_1510_);
v___x_1515_ = lean_nat_abs(v___x_1514_);
v___x_1516_ = lean_cstr_to_nat("9007199254740991");
v___x_1517_ = lean_nat_dec_le(v___x_1515_, v___x_1516_);
lean_dec(v___x_1515_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1519_; 
if (v_isShared_1513_ == 0)
{
lean_ctor_set_tag(v___x_1512_, 5);
lean_ctor_set(v___x_1512_, 0, v___x_1514_);
v___x_1519_ = v___x_1512_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1514_);
v___x_1519_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1518_;
}
v_reusejp_1518_:
{
return v___x_1519_;
}
}
else
{
double v___x_1521_; lean_object* v___x_1522_; 
lean_del_object(v___x_1512_);
v___x_1521_ = l_Float_ofInt(v___x_1514_);
lean_dec(v___x_1514_);
v___x_1522_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1522_, 0, v___x_1521_);
return v___x_1522_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload(lean_object* v_self_1525_, lean_object* v_options_1526_){
_start:
{
lean_object* v_maxRequestBodySize_1528_; lean_object* v_error_1529_; lean_object* v_id_1530_; lean_object* v_hostname_1531_; lean_object* v_port_1532_; lean_object* v_reusePort_1533_; lean_object* v_ipv6Only_1534_; lean_object* v_idleTimeout_1535_; lean_object* v_fetch_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v_maxRequestBodySize_1528_ = lean_ctor_get(v_options_1526_, 0);
lean_inc(v_maxRequestBodySize_1528_);
v_error_1529_ = lean_ctor_get(v_options_1526_, 1);
lean_inc(v_error_1529_);
v_id_1530_ = lean_ctor_get(v_options_1526_, 2);
lean_inc(v_id_1530_);
v_hostname_1531_ = lean_ctor_get(v_options_1526_, 3);
lean_inc(v_hostname_1531_);
v_port_1532_ = lean_ctor_get(v_options_1526_, 4);
lean_inc(v_port_1532_);
v_reusePort_1533_ = lean_ctor_get(v_options_1526_, 5);
lean_inc(v_reusePort_1533_);
v_ipv6Only_1534_ = lean_ctor_get(v_options_1526_, 6);
lean_inc(v_ipv6Only_1534_);
v_idleTimeout_1535_ = lean_ctor_get(v_options_1526_, 7);
lean_inc(v_idleTimeout_1535_);
v_fetch_1536_ = lean_ctor_get(v_options_1526_, 8);
lean_inc(v_fetch_1536_);
lean_dec_ref(v_options_1526_);
v___x_1537_ = ((lean_object*)(l_Lasm_JS_Bun_Server_reload___closed__0));
v___x_1538_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_1539_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_1528_);
v___x_1540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1538_);
lean_ctor_set(v___x_1540_, 1, v___x_1539_);
v___x_1541_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_1542_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_1529_);
lean_dec(v_error_1529_);
v___x_1543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1541_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
v___x_1544_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1545_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_1530_);
v___x_1546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1544_);
lean_ctor_set(v___x_1546_, 1, v___x_1545_);
v___x_1547_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1548_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1531_);
v___x_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1551_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_1532_);
v___x_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1550_);
lean_ctor_set(v___x_1552_, 1, v___x_1551_);
v___x_1553_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_1554_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1533_);
lean_dec(v_reusePort_1533_);
v___x_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1553_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_1557_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_1534_);
lean_dec(v_ipv6Only_1534_);
v___x_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1556_);
lean_ctor_set(v___x_1558_, 1, v___x_1557_);
v___x_1559_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_1560_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_1535_);
v___x_1561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1559_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
v___x_1562_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_1563_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1564_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1564_, 0, v_fetch_1536_);
lean_ctor_set(v___x_1564_, 1, v___x_1563_);
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1562_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
v___x_1566_ = lean_unsigned_to_nat(9u);
v___x_1567_ = lean_mk_empty_array_with_capacity(v___x_1566_);
v___x_1568_ = lean_array_push(v___x_1567_, v___x_1540_);
v___x_1569_ = lean_array_push(v___x_1568_, v___x_1543_);
v___x_1570_ = lean_array_push(v___x_1569_, v___x_1546_);
v___x_1571_ = lean_array_push(v___x_1570_, v___x_1549_);
v___x_1572_ = lean_array_push(v___x_1571_, v___x_1552_);
v___x_1573_ = lean_array_push(v___x_1572_, v___x_1555_);
v___x_1574_ = lean_array_push(v___x_1573_, v___x_1558_);
v___x_1575_ = lean_array_push(v___x_1574_, v___x_1561_);
v___x_1576_ = lean_array_push(v___x_1575_, v___x_1565_);
v___x_1577_ = l_Lasm_JS_Web_Support_fields(v___x_1576_);
lean_dec_ref(v___x_1576_);
v___x_1578_ = lean_unsigned_to_nat(1u);
v___x_1579_ = lean_mk_empty_array_with_capacity(v___x_1578_);
v___x_1580_ = lean_array_push(v___x_1579_, v___x_1577_);
v___x_1581_ = l_Lasm_JS_Web_Support_args(v___x_1580_);
v___x_1582_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1525_, v___x_1537_, v___x_1581_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1582_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1582_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
else
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
v_a_1591_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1582_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1582_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload___boxed(lean_object* v_self_1599_, lean_object* v_options_1600_, lean_object* v_a_1601_){
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_Lasm_JS_Bun_Server_reload(v_self_1599_, v_options_1600_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0(lean_object* v_x_1603_){
_start:
{
if (lean_obj_tag(v_x_1603_) == 0)
{
lean_object* v_a_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1613_; 
v_a_1605_ = lean_ctor_get(v_x_1603_, 0);
v_isSharedCheck_1613_ = !lean_is_exclusive(v_x_1603_);
if (v_isSharedCheck_1613_ == 0)
{
v___x_1607_ = v_x_1603_;
v_isShared_1608_ = v_isSharedCheck_1613_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v_x_1603_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1613_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1610_; 
if (v_isShared_1608_ == 0)
{
v___x_1610_ = v___x_1607_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1612_; 
v_reuseFailAlloc_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1612_, 0, v_a_1605_);
v___x_1610_ = v_reuseFailAlloc_1612_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
lean_object* v___x_1611_; 
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
return v___x_1611_;
}
}
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1622_; 
v_a_1614_ = lean_ctor_get(v_x_1603_, 0);
v_isSharedCheck_1622_ = !lean_is_exclusive(v_x_1603_);
if (v_isSharedCheck_1622_ == 0)
{
v___x_1616_ = v_x_1603_;
v_isShared_1617_ = v_isSharedCheck_1622_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v_x_1603_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1622_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
lean_object* v___x_1620_; 
v___x_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
return v___x_1620_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0___boxed(lean_object* v_x_1623_, lean_object* v___y_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lasm_JS_Bun_Server_fetch___lam__0(v_x_1623_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch(lean_object* v_self_1627_, lean_object* v_request_1628_){
_start:
{
lean_object* v___f_1630_; lean_object* v___x_1631_; lean_object* v___y_1633_; 
v___f_1630_ = ((lean_object*)(l_Lasm_JS_Bun_Server_fetch___closed__0));
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
if (lean_obj_tag(v_request_1628_) == 0)
{
lean_object* v_value_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v_value_1642_ = lean_ctor_get(v_request_1628_, 0);
lean_inc(v_value_1642_);
lean_dec_ref_known(v_request_1628_, 1);
v___x_1643_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1644_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1644_, 0, v_value_1642_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___y_1633_ = v___x_1644_;
goto v___jp_1632_;
}
else
{
lean_object* v_value_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
v_value_1645_ = lean_ctor_get(v_request_1628_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v_request_1628_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v_request_1628_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_value_1645_);
lean_dec(v_request_1628_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
lean_ctor_set_tag(v___x_1647_, 4);
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_value_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
v___y_1633_ = v___x_1650_;
goto v___jp_1632_;
}
}
}
v___jp_1632_:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1634_ = lean_unsigned_to_nat(1u);
v___x_1635_ = lean_mk_empty_array_with_capacity(v___x_1634_);
v___x_1636_ = lean_array_push(v___x_1635_, v___y_1633_);
v___x_1637_ = l_Lasm_JS_Web_Support_args(v___x_1636_);
v___x_1638_ = lean_unsigned_to_nat(0u);
v___x_1639_ = 0;
v___x_1640_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1627_, v___x_1631_, v___x_1637_);
v___x_1641_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1638_, v___x_1639_, v___x_1640_, v___f_1630_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___boxed(lean_object* v_self_1653_, lean_object* v_request_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Lasm_JS_Bun_Server_fetch(v_self_1653_, v_request_1654_);
return v_res_1656_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(uint8_t v_await_1657_, uint64_t v_extra_1658_){
_start:
{
uint64_t v___x_1659_; uint64_t v___y_1661_; 
v___x_1659_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1657_ == 0)
{
uint64_t v___x_1664_; 
v___x_1664_ = 0ULL;
v___y_1661_ = v___x_1664_;
goto v___jp_1660_;
}
else
{
uint64_t v___x_1665_; 
v___x_1665_ = 2ULL;
v___y_1661_ = v___x_1665_;
goto v___jp_1660_;
}
v___jp_1660_:
{
uint64_t v___x_1662_; uint64_t v___x_1663_; 
v___x_1662_ = lean_uint64_lor(v___x_1659_, v___y_1661_);
v___x_1663_ = lean_uint64_lor(v___x_1662_, v_extra_1658_);
return v___x_1663_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0___boxed(lean_object* v_await_1666_, lean_object* v_extra_1667_){
_start:
{
uint8_t v_await_boxed_1668_; uint64_t v_extra_boxed_1669_; uint64_t v_res_1670_; lean_object* v_r_1671_; 
v_await_boxed_1668_ = lean_unbox(v_await_1666_);
v_extra_boxed_1669_ = lean_unbox_uint64(v_extra_1667_);
lean_dec_ref(v_extra_1667_);
v_res_1670_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v_await_boxed_1668_, v_extra_boxed_1669_);
v_r_1671_ = lean_box_uint64(v_res_1670_);
return v_r_1671_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1675_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0));
v___x_1676_ = lean_string_utf8_byte_size(v___x_1675_);
return v___x_1676_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4(void){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; uint8_t v___x_1679_; 
v___x_1677_ = lean_unsigned_to_nat(0u);
v___x_1678_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3);
v___x_1679_ = lean_nat_dec_eq(v___x_1678_, v___x_1677_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(lean_object* v_d_1683_, lean_object* v_key_1684_){
_start:
{
if (lean_obj_tag(v_d_1683_) == 8)
{
lean_object* v___x_1685_; lean_object* v___x_1687_; uint8_t v_isShared_1688_; uint8_t v_isSharedCheck_1716_; 
v___x_1685_ = l_Lasm_JS_Data_field(v_d_1683_, v_key_1684_);
v_isSharedCheck_1716_ = !lean_is_exclusive(v_d_1683_);
if (v_isSharedCheck_1716_ == 0)
{
lean_object* v_unused_1717_; 
v_unused_1717_ = lean_ctor_get(v_d_1683_, 0);
lean_dec(v_unused_1717_);
v___x_1687_ = v_d_1683_;
v_isShared_1688_ = v_isSharedCheck_1716_;
goto v_resetjp_1686_;
}
else
{
lean_dec(v_d_1683_);
v___x_1687_ = lean_box(0);
v_isShared_1688_ = v_isSharedCheck_1716_;
goto v_resetjp_1686_;
}
v_resetjp_1686_:
{
if (lean_obj_tag(v___x_1685_) == 4)
{
lean_object* v_s_1709_; lean_object* v___x_1710_; uint8_t v___x_1711_; 
v_s_1709_ = lean_ctor_get(v___x_1685_, 0);
lean_inc_ref(v_s_1709_);
v___x_1710_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0));
v___x_1711_ = lean_string_dec_eq(v_s_1709_, v___x_1710_);
if (v___x_1711_ == 0)
{
lean_object* v___x_1712_; uint8_t v___x_1713_; 
v___x_1712_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2));
v___x_1713_ = lean_string_dec_eq(v_s_1709_, v___x_1712_);
lean_dec_ref(v_s_1709_);
if (v___x_1713_ == 0)
{
goto v___jp_1689_;
}
else
{
lean_object* v___x_1714_; 
lean_dec_ref_known(v___x_1685_, 1);
lean_del_object(v___x_1687_);
v___x_1714_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2));
return v___x_1714_;
}
}
else
{
lean_object* v___x_1715_; 
lean_dec_ref(v_s_1709_);
lean_dec_ref_known(v___x_1685_, 1);
lean_del_object(v___x_1687_);
v___x_1715_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3));
return v___x_1715_;
}
}
else
{
goto v___jp_1689_;
}
v___jp_1689_:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; uint8_t v___x_1700_; 
v___x_1690_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1691_ = lean_string_append(v___x_1690_, v_key_1684_);
v___x_1692_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1693_ = lean_string_append(v___x_1691_, v___x_1692_);
v___x_1694_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1));
v___x_1695_ = lean_string_append(v___x_1693_, v___x_1694_);
v___x_1696_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1697_ = lean_string_append(v___x_1695_, v___x_1696_);
v___x_1698_ = l_Lasm_JS_Data_describe(v___x_1685_);
v___x_1699_ = lean_string_append(v___x_1697_, v___x_1698_);
lean_dec_ref(v___x_1698_);
v___x_1700_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4);
if (v___x_1700_ == 0)
{
lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1704_; 
v___x_1701_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___x_1702_ = lean_string_append(v___x_1699_, v___x_1701_);
if (v_isShared_1688_ == 0)
{
lean_ctor_set_tag(v___x_1687_, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1702_);
v___x_1704_ = v___x_1687_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v___x_1702_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
else
{
lean_object* v___x_1707_; 
if (v_isShared_1688_ == 0)
{
lean_ctor_set_tag(v___x_1687_, 0);
lean_ctor_set(v___x_1687_, 0, v___x_1699_);
v___x_1707_ = v___x_1687_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1699_);
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
}
else
{
lean_object* v___x_1718_; 
lean_dec(v_d_1683_);
v___x_1718_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__6));
return v___x_1718_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_d_1719_, lean_object* v_key_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_1719_, v_key_1720_);
lean_dec_ref(v_key_1720_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_1725_, lean_object* v_key_1726_){
_start:
{
if (lean_obj_tag(v_d_1725_) == 8)
{
lean_object* v___x_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1770_; 
v___x_1727_ = l_Lasm_JS_Data_field(v_d_1725_, v_key_1726_);
v_isSharedCheck_1770_ = !lean_is_exclusive(v_d_1725_);
if (v_isSharedCheck_1770_ == 0)
{
lean_object* v_unused_1771_; 
v_unused_1771_ = lean_ctor_get(v_d_1725_, 0);
lean_dec(v_unused_1771_);
v___x_1729_ = v_d_1725_;
v_isShared_1730_ = v_isSharedCheck_1770_;
goto v_resetjp_1728_;
}
else
{
lean_dec(v_d_1725_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1770_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v_a_1732_; lean_object* v_a_1758_; 
switch(lean_obj_tag(v___x_1727_))
{
case 3:
{
double v_n_1764_; lean_object* v___x_1765_; 
v_n_1764_ = lean_ctor_get_float(v___x_1727_, 0);
v___x_1765_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1764_);
if (lean_obj_tag(v___x_1765_) == 0)
{
lean_object* v___x_1766_; 
v___x_1766_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1732_ = v___x_1766_;
goto v___jp_1731_;
}
else
{
lean_object* v_val_1767_; 
v_val_1767_ = lean_ctor_get(v___x_1765_, 0);
lean_inc(v_val_1767_);
lean_dec_ref_known(v___x_1765_, 1);
v_a_1758_ = v_val_1767_;
goto v___jp_1757_;
}
}
case 5:
{
lean_object* v_i_1768_; 
v_i_1768_ = lean_ctor_get(v___x_1727_, 0);
lean_inc(v_i_1768_);
v_a_1758_ = v_i_1768_;
goto v___jp_1757_;
}
default: 
{
lean_object* v___x_1769_; 
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1732_ = v___x_1769_;
goto v___jp_1731_;
}
}
v___jp_1731_:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1733_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1734_ = lean_string_append(v___x_1733_, v_key_1726_);
v___x_1735_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1736_ = lean_string_append(v___x_1734_, v___x_1735_);
v___x_1737_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0));
v___x_1738_ = lean_string_append(v___x_1736_, v___x_1737_);
v___x_1739_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1740_ = lean_string_append(v___x_1738_, v___x_1739_);
v___x_1741_ = l_Lasm_JS_Data_describe(v___x_1727_);
v___x_1742_ = lean_string_append(v___x_1740_, v___x_1741_);
lean_dec_ref(v___x_1741_);
v___x_1743_ = lean_string_utf8_byte_size(v_a_1732_);
v___x_1744_ = lean_unsigned_to_nat(0u);
v___x_1745_ = lean_nat_dec_eq(v___x_1743_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1746_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1747_ = lean_string_append(v___x_1746_, v_a_1732_);
v___x_1748_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1749_ = lean_string_append(v___x_1747_, v___x_1748_);
v___x_1750_ = lean_string_append(v___x_1742_, v___x_1749_);
lean_dec_ref(v___x_1749_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set_tag(v___x_1729_, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1750_);
v___x_1752_ = v___x_1729_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
else
{
lean_object* v___x_1755_; 
if (v_isShared_1730_ == 0)
{
lean_ctor_set_tag(v___x_1729_, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1742_);
v___x_1755_ = v___x_1729_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v___x_1742_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
v___jp_1757_:
{
lean_object* v___x_1759_; uint8_t v___x_1760_; 
v___x_1759_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1760_ = lean_int_dec_le(v___x_1759_, v_a_1758_);
if (v___x_1760_ == 0)
{
lean_object* v___x_1761_; 
lean_dec(v_a_1758_);
v___x_1761_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1732_ = v___x_1761_;
goto v___jp_1731_;
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1763_; 
lean_del_object(v___x_1729_);
lean_dec(v___x_1727_);
v___x_1762_ = l_Int_toNat(v_a_1758_);
lean_dec(v_a_1758_);
v___x_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1762_);
return v___x_1763_;
}
}
}
}
else
{
lean_object* v___x_1772_; 
lean_dec(v_d_1725_);
v___x_1772_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1));
return v___x_1772_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_1773_, lean_object* v_key_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_1773_, v_key_1774_);
lean_dec_ref(v_key_1774_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_1779_, lean_object* v_key_1780_){
_start:
{
if (lean_obj_tag(v_d_1779_) == 8)
{
lean_object* v___x_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1812_; 
v___x_1781_ = l_Lasm_JS_Data_field(v_d_1779_, v_key_1780_);
v_isSharedCheck_1812_ = !lean_is_exclusive(v_d_1779_);
if (v_isSharedCheck_1812_ == 0)
{
lean_object* v_unused_1813_; 
v_unused_1813_ = lean_ctor_get(v_d_1779_, 0);
lean_dec(v_unused_1813_);
v___x_1783_ = v_d_1779_;
v_isShared_1784_ = v_isSharedCheck_1812_;
goto v_resetjp_1782_;
}
else
{
lean_dec(v_d_1779_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1812_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
if (lean_obj_tag(v___x_1781_) == 4)
{
lean_object* v_s_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_del_object(v___x_1783_);
v_s_1785_ = lean_ctor_get(v___x_1781_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1781_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1781_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_s_1785_);
lean_dec(v___x_1781_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
lean_ctor_set_tag(v___x_1787_, 1);
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_s_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; uint8_t v___x_1803_; 
v___x_1793_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1794_ = lean_string_append(v___x_1793_, v_key_1780_);
v___x_1795_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1796_ = lean_string_append(v___x_1794_, v___x_1795_);
v___x_1797_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1798_ = lean_string_append(v___x_1796_, v___x_1797_);
v___x_1799_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1800_ = lean_string_append(v___x_1798_, v___x_1799_);
v___x_1801_ = l_Lasm_JS_Data_describe(v___x_1781_);
v___x_1802_ = lean_string_append(v___x_1800_, v___x_1801_);
lean_dec_ref(v___x_1801_);
v___x_1803_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4);
if (v___x_1803_ == 0)
{
lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1807_; 
v___x_1804_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5));
v___x_1805_ = lean_string_append(v___x_1802_, v___x_1804_);
if (v_isShared_1784_ == 0)
{
lean_ctor_set_tag(v___x_1783_, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1805_);
v___x_1807_ = v___x_1783_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v___x_1805_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
else
{
lean_object* v___x_1810_; 
if (v_isShared_1784_ == 0)
{
lean_ctor_set_tag(v___x_1783_, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1802_);
v___x_1810_ = v___x_1783_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1811_; 
v_reuseFailAlloc_1811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1811_, 0, v___x_1802_);
v___x_1810_ = v_reuseFailAlloc_1811_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
return v___x_1810_;
}
}
}
}
}
else
{
lean_object* v___x_1814_; 
lean_dec(v_d_1779_);
v___x_1814_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_1814_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_1815_, lean_object* v_key_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_1815_, v_key_1816_);
lean_dec_ref(v_key_1816_);
return v_res_1817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(lean_object* v_context_1819_, lean_object* v_d_1820_){
_start:
{
lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v___y_1832_; lean_object* v_received_1833_; lean_object* v___y_1852_; lean_object* v_a_1855_; 
switch(lean_obj_tag(v_d_1820_))
{
case 1:
{
goto v___jp_1822_;
}
case 0:
{
goto v___jp_1822_;
}
default: 
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
lean_inc(v_d_1820_);
v___x_1880_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_1820_, v___x_1879_);
if (lean_obj_tag(v___x_1880_) == 0)
{
lean_object* v_a_1881_; 
v_a_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1881_);
lean_dec_ref_known(v___x_1880_, 1);
v_a_1855_ = v_a_1881_;
goto v___jp_1854_;
}
else
{
lean_object* v_a_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v_a_1882_ = lean_ctor_get(v___x_1880_, 0);
lean_inc(v_a_1882_);
lean_dec_ref_known(v___x_1880_, 1);
v___x_1883_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
lean_inc(v_d_1820_);
v___x_1884_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_1820_, v___x_1883_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; 
lean_dec(v_a_1882_);
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1885_);
lean_dec_ref_known(v___x_1884_, 1);
v_a_1855_ = v_a_1885_;
goto v___jp_1854_;
}
else
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1906_; 
v_a_1886_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1888_ = v___x_1884_;
v_isShared_1889_ = v_isSharedCheck_1906_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1884_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1906_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1890_; lean_object* v___x_1891_; 
v___x_1890_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
lean_inc(v_d_1820_);
v___x_1891_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_1820_, v___x_1890_);
if (lean_obj_tag(v___x_1891_) == 0)
{
lean_object* v_a_1892_; 
lean_del_object(v___x_1888_);
lean_dec(v_a_1886_);
lean_dec(v_a_1882_);
v_a_1892_ = lean_ctor_get(v___x_1891_, 0);
lean_inc(v_a_1892_);
lean_dec_ref_known(v___x_1891_, 1);
v_a_1855_ = v_a_1892_;
goto v___jp_1854_;
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1905_; 
lean_dec(v_d_1820_);
v_a_1893_ = lean_ctor_get(v___x_1891_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1891_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1895_ = v___x_1891_;
v_isShared_1896_ = v_isSharedCheck_1905_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1891_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1905_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1897_; uint8_t v___x_1898_; lean_object* v___x_1900_; 
v___x_1897_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1897_, 0, v_a_1882_);
lean_ctor_set(v___x_1897_, 1, v_a_1886_);
v___x_1898_ = lean_unbox(v_a_1893_);
lean_dec(v_a_1893_);
lean_ctor_set_uint8(v___x_1897_, sizeof(void*)*2, v___x_1898_);
if (v_isShared_1896_ == 0)
{
lean_ctor_set(v___x_1895_, 0, v___x_1897_);
v___x_1900_ = v___x_1895_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1897_);
v___x_1900_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1902_; 
if (v_isShared_1889_ == 0)
{
lean_ctor_set_tag(v___x_1888_, 0);
lean_ctor_set(v___x_1888_, 0, v___x_1900_);
v___x_1902_ = v___x_1888_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
}
}
}
}
v___jp_1822_:
{
lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1823_ = lean_box(0);
v___x_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1823_);
return v___x_1824_;
}
v___jp_1825_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; 
v___x_1828_ = lean_string_append(v___y_1826_, v___y_1827_);
lean_dec_ref(v___y_1827_);
v___x_1829_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
v___x_1830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
return v___x_1830_;
}
v___jp_1831_:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; uint8_t v___x_1845_; 
v___x_1834_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1835_ = lean_string_append(v___x_1834_, v_context_1819_);
v___x_1836_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1837_ = lean_string_append(v___x_1835_, v___x_1836_);
v___x_1838_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0));
v___x_1839_ = lean_string_append(v___x_1837_, v___x_1838_);
v___x_1840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1841_ = lean_string_append(v___x_1839_, v___x_1840_);
v___x_1842_ = lean_string_append(v___x_1841_, v_received_1833_);
lean_dec_ref(v_received_1833_);
v___x_1843_ = lean_string_utf8_byte_size(v___y_1832_);
v___x_1844_ = lean_unsigned_to_nat(0u);
v___x_1845_ = lean_nat_dec_eq(v___x_1843_, v___x_1844_);
if (v___x_1845_ == 0)
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1846_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1847_ = lean_string_append(v___x_1846_, v___y_1832_);
lean_dec_ref(v___y_1832_);
v___x_1848_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1849_ = lean_string_append(v___x_1847_, v___x_1848_);
v___y_1826_ = v___x_1842_;
v___y_1827_ = v___x_1849_;
goto v___jp_1825_;
}
else
{
lean_object* v___x_1850_; 
lean_dec_ref(v___y_1832_);
v___x_1850_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1826_ = v___x_1842_;
v___y_1827_ = v___x_1850_;
goto v___jp_1825_;
}
}
v___jp_1851_:
{
lean_object* v___x_1853_; 
v___x_1853_ = l_Lasm_JS_Data_describe(v_d_1820_);
v___y_1832_ = v___y_1852_;
v_received_1833_ = v___x_1853_;
goto v___jp_1831_;
}
v___jp_1854_:
{
if (lean_obj_tag(v_d_1820_) == 9)
{
lean_object* v_value_1856_; lean_object* v_description_1857_; lean_object* v___x_1858_; uint8_t v___x_1859_; 
v_value_1856_ = lean_ctor_get(v_d_1820_, 0);
v_description_1857_ = lean_ctor_get(v_d_1820_, 1);
v___x_1858_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1859_ = lean_string_dec_eq(v_description_1857_, v___x_1858_);
if (v___x_1859_ == 0)
{
v___y_1852_ = v_a_1855_;
goto v___jp_1851_;
}
else
{
lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1876_; 
lean_inc(v_value_1856_);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_d_1820_);
if (v_isSharedCheck_1876_ == 0)
{
lean_object* v_unused_1877_; lean_object* v_unused_1878_; 
v_unused_1877_ = lean_ctor_get(v_d_1820_, 1);
lean_dec(v_unused_1877_);
v_unused_1878_ = lean_ctor_get(v_d_1820_, 0);
lean_dec(v_unused_1878_);
v___x_1861_ = v_d_1820_;
v_isShared_1862_ = v_isSharedCheck_1876_;
goto v_resetjp_1860_;
}
else
{
lean_dec(v_d_1820_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1876_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
uint32_t v___x_1863_; uint64_t v___x_1864_; lean_object* v___x_1866_; 
v___x_1863_ = 206;
v___x_1864_ = 0ULL;
lean_inc(v_value_1856_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 1, v___x_1858_);
v___x_1866_ = v___x_1861_;
goto v_reusejp_1865_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_value_1856_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v___x_1858_);
v___x_1866_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1865_;
}
v_reusejp_1865_:
{
uint32_t v___x_1867_; lean_object* v___x_1868_; 
v___x_1867_ = lasm_js_value_handle(v_value_1856_);
lean_dec(v_value_1856_);
v___x_1868_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1863_, v___x_1864_, v___x_1866_, v___x_1867_);
lean_dec_ref(v___x_1866_);
if (lean_obj_tag(v___x_1868_) == 0)
{
lean_object* v_a_1869_; uint8_t v___x_1870_; 
v_a_1869_ = lean_ctor_get(v___x_1868_, 0);
lean_inc(v_a_1869_);
lean_dec_ref_known(v___x_1868_, 1);
v___x_1870_ = lean_string_validate_utf8(v_a_1869_);
if (v___x_1870_ == 0)
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
lean_dec(v_a_1869_);
v___x_1871_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_1872_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1871_);
v___y_1832_ = v_a_1855_;
v_received_1833_ = v___x_1872_;
goto v___jp_1831_;
}
else
{
lean_object* v___x_1873_; 
v___x_1873_ = lean_string_from_utf8_unchecked(v_a_1869_);
v___y_1832_ = v_a_1855_;
v_received_1833_ = v___x_1873_;
goto v___jp_1831_;
}
}
else
{
lean_object* v___x_1874_; 
lean_dec_ref_known(v___x_1868_, 1);
v___x_1874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_1832_ = v_a_1855_;
v_received_1833_ = v___x_1874_;
goto v___jp_1831_;
}
}
}
}
}
else
{
v___y_1852_ = v_a_1855_;
goto v___jp_1851_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1907_, lean_object* v_d_1908_, lean_object* v_a_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_1907_, v_d_1908_);
lean_dec_ref(v_context_1907_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(lean_object* v_context_1911_, lean_object* v_bytes_1912_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1912_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_object* v_a_1915_; lean_object* v___x_1916_; 
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
lean_inc(v_a_1915_);
lean_dec_ref_known(v___x_1914_, 1);
v___x_1916_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_1911_, v_a_1915_);
return v___x_1916_;
}
else
{
lean_object* v_a_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1924_; 
v_a_1917_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1924_ == 0)
{
v___x_1919_ = v___x_1914_;
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_a_1917_);
lean_dec(v___x_1914_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1924_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1922_; 
if (v_isShared_1920_ == 0)
{
v___x_1922_ = v___x_1919_;
goto v_reusejp_1921_;
}
else
{
lean_object* v_reuseFailAlloc_1923_; 
v_reuseFailAlloc_1923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1923_, 0, v_a_1917_);
v___x_1922_ = v_reuseFailAlloc_1923_;
goto v_reusejp_1921_;
}
v_reusejp_1921_:
{
return v___x_1922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1___boxed(lean_object* v_context_1925_, lean_object* v_bytes_1926_, lean_object* v_a_1927_){
_start:
{
lean_object* v_res_1928_; 
v_res_1928_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v_context_1925_, v_bytes_1926_);
lean_dec_ref(v_bytes_1926_);
lean_dec_ref(v_context_1925_);
return v_res_1928_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1929_; uint8_t v___x_1930_; uint64_t v___x_1931_; 
v___x_1929_ = 8ULL;
v___x_1930_ = 0;
v___x_1931_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v___x_1930_, v___x_1929_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(lean_object* v_o_1932_, lean_object* v_name_1933_, lean_object* v_args_1934_){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; uint64_t v___x_1939_; lean_object* v___x_1940_; 
v___x_1936_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1937_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1937_, 0, v_o_1932_);
lean_ctor_set(v___x_1937_, 1, v___x_1936_);
lean_inc_ref(v_name_1933_);
v___x_1938_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1938_, 0, v_name_1933_);
v___x_1939_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0);
v___x_1940_ = l_Lasm_JS_Value_invokeRaw(v___x_1937_, v___x_1938_, v_args_1934_, v___x_1939_);
if (lean_obj_tag(v___x_1940_) == 0)
{
lean_object* v_a_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v_a_1941_ = lean_ctor_get(v___x_1940_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1940_, 1);
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_1943_ = lean_string_append(v___x_1942_, v_name_1933_);
lean_dec_ref(v_name_1933_);
v___x_1944_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v___x_1943_, v_a_1941_);
lean_dec(v_a_1941_);
lean_dec_ref(v___x_1943_);
return v___x_1944_;
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
lean_dec_ref(v_name_1933_);
v_a_1945_ = lean_ctor_get(v___x_1940_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___x_1940_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___x_1940_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___boxed(lean_object* v_o_1953_, lean_object* v_name_1954_, lean_object* v_args_1955_, lean_object* v_a_1956_){
_start:
{
lean_object* v_res_1957_; 
v_res_1957_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_o_1953_, v_name_1954_, v_args_1955_);
return v_res_1957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP(lean_object* v_self_1959_, lean_object* v_request_1960_){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1962_ = ((lean_object*)(l_Lasm_JS_Bun_Server_requestIP___closed__0));
v___x_1963_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1964_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1964_, 0, v_request_1960_);
lean_ctor_set(v___x_1964_, 1, v___x_1963_);
v___x_1965_ = lean_unsigned_to_nat(1u);
v___x_1966_ = lean_mk_empty_array_with_capacity(v___x_1965_);
v___x_1967_ = lean_array_push(v___x_1966_, v___x_1964_);
v___x_1968_ = l_Lasm_JS_Web_Support_args(v___x_1967_);
v___x_1969_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_self_1959_, v___x_1962_, v___x_1968_);
return v___x_1969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP___boxed(lean_object* v_self_1970_, lean_object* v_request_1971_, lean_object* v_a_1972_){
_start:
{
lean_object* v_res_1973_; 
v_res_1973_ = l_Lasm_JS_Bun_Server_requestIP(v_self_1970_, v_request_1971_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout(lean_object* v_self_1975_, lean_object* v_request_1976_, lean_object* v_seconds_1977_){
_start:
{
lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___y_1983_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; uint8_t v___x_1993_; 
v___x_1979_ = ((lean_object*)(l_Lasm_JS_Bun_Server_timeout___closed__0));
v___x_1980_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1981_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1981_, 0, v_request_1976_);
lean_ctor_set(v___x_1981_, 1, v___x_1980_);
v___x_1990_ = lean_nat_to_int(v_seconds_1977_);
v___x_1991_ = lean_nat_abs(v___x_1990_);
v___x_1992_ = lean_cstr_to_nat("9007199254740991");
v___x_1993_ = lean_nat_dec_le(v___x_1991_, v___x_1992_);
lean_dec(v___x_1991_);
if (v___x_1993_ == 0)
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1990_);
v___y_1983_ = v___x_1994_;
goto v___jp_1982_;
}
else
{
double v___x_1995_; lean_object* v___x_1996_; 
v___x_1995_ = l_Float_ofInt(v___x_1990_);
lean_dec(v___x_1990_);
v___x_1996_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1996_, 0, v___x_1995_);
v___y_1983_ = v___x_1996_;
goto v___jp_1982_;
}
v___jp_1982_:
{
lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1984_ = lean_unsigned_to_nat(2u);
v___x_1985_ = lean_mk_empty_array_with_capacity(v___x_1984_);
v___x_1986_ = lean_array_push(v___x_1985_, v___x_1981_);
v___x_1987_ = lean_array_push(v___x_1986_, v___y_1983_);
v___x_1988_ = l_Lasm_JS_Web_Support_args(v___x_1987_);
v___x_1989_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_1975_, v___x_1979_, v___x_1988_);
return v___x_1989_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout___boxed(lean_object* v_self_1997_, lean_object* v_request_1998_, lean_object* v_seconds_1999_, lean_object* v_a_2000_){
_start:
{
lean_object* v_res_2001_; 
v_res_2001_ = l_Lasm_JS_Bun_Server_timeout(v_self_1997_, v_request_1998_, v_seconds_1999_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref(lean_object* v_self_2003_){
_start:
{
lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2005_ = ((lean_object*)(l_Lasm_JS_Bun_Server_ref___closed__0));
v___x_2006_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2007_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2003_, v___x_2005_, v___x_2006_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref___boxed(lean_object* v_self_2008_, lean_object* v_a_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_Lasm_JS_Bun_Server_ref(v_self_2008_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref(lean_object* v_self_2012_){
_start:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; 
v___x_2014_ = ((lean_object*)(l_Lasm_JS_Bun_Server_unref___closed__0));
v___x_2015_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2016_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2012_, v___x_2014_, v___x_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref___boxed(lean_object* v_self_2017_, lean_object* v_a_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_Lasm_JS_Bun_Server_unref(v_self_2017_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve(lean_object* v_options_2029_){
_start:
{
lean_object* v_maxRequestBodySize_2031_; lean_object* v_error_2032_; lean_object* v_id_2033_; lean_object* v_hostname_2034_; lean_object* v_port_2035_; lean_object* v_reusePort_2036_; lean_object* v_ipv6Only_2037_; lean_object* v_idleTimeout_2038_; lean_object* v_fetch_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v_maxRequestBodySize_2031_ = lean_ctor_get(v_options_2029_, 0);
lean_inc(v_maxRequestBodySize_2031_);
v_error_2032_ = lean_ctor_get(v_options_2029_, 1);
lean_inc(v_error_2032_);
v_id_2033_ = lean_ctor_get(v_options_2029_, 2);
lean_inc(v_id_2033_);
v_hostname_2034_ = lean_ctor_get(v_options_2029_, 3);
lean_inc(v_hostname_2034_);
v_port_2035_ = lean_ctor_get(v_options_2029_, 4);
lean_inc(v_port_2035_);
v_reusePort_2036_ = lean_ctor_get(v_options_2029_, 5);
lean_inc(v_reusePort_2036_);
v_ipv6Only_2037_ = lean_ctor_get(v_options_2029_, 6);
lean_inc(v_ipv6Only_2037_);
v_idleTimeout_2038_ = lean_ctor_get(v_options_2029_, 7);
lean_inc(v_idleTimeout_2038_);
v_fetch_2039_ = lean_ctor_get(v_options_2029_, 8);
lean_inc(v_fetch_2039_);
lean_dec_ref(v_options_2029_);
v___x_2040_ = 0;
v___x_2041_ = lean_unsigned_to_nat(1u);
v___x_2042_ = ((lean_object*)(l_Lasm_JS_Bun_serve___closed__3));
v___x_2043_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_2044_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_2031_);
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v___x_2043_);
lean_ctor_set(v___x_2045_, 1, v___x_2044_);
v___x_2046_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_2047_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_2032_);
lean_dec(v_error_2032_);
v___x_2048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2046_);
lean_ctor_set(v___x_2048_, 1, v___x_2047_);
v___x_2049_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_2050_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_2033_);
v___x_2051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2051_, 0, v___x_2049_);
lean_ctor_set(v___x_2051_, 1, v___x_2050_);
v___x_2052_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_2053_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2034_);
v___x_2054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2054_, 0, v___x_2052_);
lean_ctor_set(v___x_2054_, 1, v___x_2053_);
v___x_2055_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_2056_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_2035_);
v___x_2057_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2055_);
lean_ctor_set(v___x_2057_, 1, v___x_2056_);
v___x_2058_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_2059_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2036_);
lean_dec(v_reusePort_2036_);
v___x_2060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2058_);
lean_ctor_set(v___x_2060_, 1, v___x_2059_);
v___x_2061_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_2062_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_2037_);
lean_dec(v_ipv6Only_2037_);
v___x_2063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2063_, 0, v___x_2061_);
lean_ctor_set(v___x_2063_, 1, v___x_2062_);
v___x_2064_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_2065_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_2038_);
v___x_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2064_);
lean_ctor_set(v___x_2066_, 1, v___x_2065_);
v___x_2067_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_2068_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2069_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2069_, 0, v_fetch_2039_);
lean_ctor_set(v___x_2069_, 1, v___x_2068_);
v___x_2070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2070_, 0, v___x_2067_);
lean_ctor_set(v___x_2070_, 1, v___x_2069_);
v___x_2071_ = lean_unsigned_to_nat(9u);
v___x_2072_ = lean_mk_empty_array_with_capacity(v___x_2071_);
v___x_2073_ = lean_array_push(v___x_2072_, v___x_2045_);
v___x_2074_ = lean_array_push(v___x_2073_, v___x_2048_);
v___x_2075_ = lean_array_push(v___x_2074_, v___x_2051_);
v___x_2076_ = lean_array_push(v___x_2075_, v___x_2054_);
v___x_2077_ = lean_array_push(v___x_2076_, v___x_2057_);
v___x_2078_ = lean_array_push(v___x_2077_, v___x_2060_);
v___x_2079_ = lean_array_push(v___x_2078_, v___x_2063_);
v___x_2080_ = lean_array_push(v___x_2079_, v___x_2066_);
v___x_2081_ = lean_array_push(v___x_2080_, v___x_2070_);
v___x_2082_ = l_Lasm_JS_Web_Support_fields(v___x_2081_);
lean_dec_ref(v___x_2081_);
v___x_2083_ = lean_mk_empty_array_with_capacity(v___x_2041_);
v___x_2084_ = lean_array_push(v___x_2083_, v___x_2082_);
v___x_2085_ = l_Lasm_JS_Web_Support_args(v___x_2084_);
v___x_2086_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2042_, v___x_2085_, v___x_2040_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve___boxed(lean_object* v_options_2103_, lean_object* v_a_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l_Lasm_JS_Bun_serve(v_options_2103_);
return v_res_2105_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Url(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Fetch(uint8_t builtin);
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
res = initialize_Lasm_JS_Web_Url(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Web_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default = _init_l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default();
l_Lasm_JS_Bun_instInhabitedSocketAddressFamily = _init_l_Lasm_JS_Bun_instInhabitedSocketAddressFamily();
l_Lasm_JS_Bun_instInhabitedServerProtocol_default = _init_l_Lasm_JS_Bun_instInhabitedServerProtocol_default();
l_Lasm_JS_Bun_instInhabitedServerProtocol = _init_l_Lasm_JS_Bun_instInhabitedServerProtocol();
l_Lasm_JS_Bun_instFromJSSocketAddress = _init_l_Lasm_JS_Bun_instFromJSSocketAddress();
lean_mark_persistent(l_Lasm_JS_Bun_instFromJSSocketAddress);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
