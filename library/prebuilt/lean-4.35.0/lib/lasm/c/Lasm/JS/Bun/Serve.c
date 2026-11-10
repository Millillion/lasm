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
lean_object* l_Lasm_JS_global();
lean_object* l_Lasm_JS_obj(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lasm_JS_instFromJSNat;
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
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
static const lean_string_object l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Object"};
static const lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1 = (const lean_object*)&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1_value;
static const lean_string_object l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "defineProperty"};
static const lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2 = (const lean_object*)&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2_value;
static const lean_string_object l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__3 = (const lean_object*)&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__3_value;
static const lean_ctor_object l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__3_value)}};
static const lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4 = (const lean_object*)&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4_value;
static const lean_string_object l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "value"};
static const lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5 = (const lean_object*)&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5_value;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9;
static lean_once_cell_t l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10;
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
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6(void){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___x_382_ = lean_nat_abs(v___x_381_);
return v___x_382_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_383_ = lean_cstr_to_nat("9007199254740991");
v___x_384_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6);
v___x_385_ = lean_nat_dec_le(v___x_384_, v___x_383_);
return v___x_385_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___x_387_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
return v___x_387_;
}
}
static double _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9(void){
_start:
{
lean_object* v___x_388_; double v___x_389_; 
v___x_388_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___x_389_ = l_Float_ofInt(v___x_388_);
return v___x_389_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10(void){
_start:
{
double v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_float_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9);
v___x_391_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn(lean_object* v_f_392_){
_start:
{
lean_object* v___f_394_; lean_object* v___f_395_; lean_object* v___f_396_; lean_object* v___x_397_; 
v___f_394_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_395_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_395_, 0, v_f_392_);
lean_closure_set(v___f_395_, 1, v___f_394_);
v___f_396_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_396_, 0, v___f_395_);
v___x_397_ = l_Lasm_JS_Function_ofFn(v___f_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_399_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_a_398_);
lean_dec_ref_known(v___x_397_, 1);
v___x_399_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref_known(v___x_399_, 1);
v___x_401_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_402_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_400_, v___x_401_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v_a_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___y_410_; uint8_t v___x_437_; 
v_a_403_ = lean_ctor_get(v___x_402_, 0);
lean_inc(v_a_403_);
lean_dec_ref_known(v___x_402_, 1);
v___x_404_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_405_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_398_);
v___x_406_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_406_, 0, v_a_398_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_408_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_437_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7);
if (v___x_437_ == 0)
{
lean_object* v___x_438_; 
v___x_438_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8);
v___y_410_ = v___x_438_;
goto v___jp_409_;
}
else
{
lean_object* v___x_439_; 
v___x_439_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10);
v___y_410_ = v___x_439_;
goto v___jp_409_;
}
v___jp_409_:
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
lean_inc(v___y_410_);
v___x_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_408_);
lean_ctor_set(v___x_411_, 1, v___y_410_);
v___x_412_ = lean_box(0);
v___x_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_411_);
lean_ctor_set(v___x_413_, 1, v___x_412_);
v___x_414_ = l_Lasm_JS_obj(v___x_413_);
v___x_415_ = lean_unsigned_to_nat(3u);
v___x_416_ = lean_mk_empty_array_with_capacity(v___x_415_);
v___x_417_ = lean_array_push(v___x_416_, v___x_406_);
v___x_418_ = lean_array_push(v___x_417_, v___x_407_);
v___x_419_ = lean_array_push(v___x_418_, v___x_414_);
v___x_420_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_403_, v___x_404_, v___x_419_);
if (lean_obj_tag(v___x_420_) == 0)
{
lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_427_ == 0)
{
lean_object* v_unused_428_; 
v_unused_428_ = lean_ctor_get(v___x_420_, 0);
lean_dec(v_unused_428_);
v___x_422_ = v___x_420_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_dec(v___x_420_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 0, v_a_398_);
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_398_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec(v_a_398_);
v_a_429_ = lean_ctor_get(v___x_420_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_420_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_420_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_420_);
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
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
lean_dec(v_a_398_);
v_a_440_ = lean_ctor_get(v___x_402_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_402_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_402_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
else
{
lean_object* v_a_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
lean_dec(v_a_398_);
v_a_448_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v___x_399_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_a_448_);
lean_dec(v___x_399_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_a_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_456_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_397_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_397_);
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
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object* v_f_464_, lean_object* v_a_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn(v_f_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object* v_f_467_, lean_object* v_args_468_){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v_a_472_; lean_object* v___x_473_; 
v___x_470_ = lean_unsigned_to_nat(0u);
v___x_471_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_468_, v___x_470_);
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref(v___x_471_);
v___x_473_ = lean_apply_2(v_f_467_, v_a_472_, lean_box(0));
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_483_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_483_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_483_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_483_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_483_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_481_; 
v___x_478_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_479_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_479_, 0, v_a_474_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v___x_479_);
v___x_481_ = v___x_476_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
else
{
lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_491_; 
v_a_484_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_491_ == 0)
{
v___x_486_ = v___x_473_;
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_473_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_491_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_489_; 
if (v_isShared_487_ == 0)
{
v___x_489_ = v___x_486_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_484_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object* v_f_492_, lean_object* v_args_493_, lean_object* v___y_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(v_f_492_, v_args_493_);
lean_dec_ref(v_args_493_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object* v_f_496_){
_start:
{
lean_object* v___f_498_; lean_object* v___x_499_; 
v___f_498_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_498_, 0, v_f_496_);
v___x_499_ = l_Lasm_JS_Function_ofSyncFn(v___f_498_);
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; lean_object* v___x_501_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_499_, 1);
v___x_501_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
v___x_503_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_504_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_502_, v___x_503_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v_a_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___y_512_; uint8_t v___x_539_; 
v_a_505_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_a_505_);
lean_dec_ref_known(v___x_504_, 1);
v___x_506_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_507_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_500_);
v___x_508_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_508_, 0, v_a_500_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
v___x_509_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_510_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_539_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; 
v___x_540_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8);
v___y_512_ = v___x_540_;
goto v___jp_511_;
}
else
{
lean_object* v___x_541_; 
v___x_541_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10);
v___y_512_ = v___x_541_;
goto v___jp_511_;
}
v___jp_511_:
{
lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
lean_inc(v___y_512_);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_510_);
lean_ctor_set(v___x_513_, 1, v___y_512_);
v___x_514_ = lean_box(0);
v___x_515_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_513_);
lean_ctor_set(v___x_515_, 1, v___x_514_);
v___x_516_ = l_Lasm_JS_obj(v___x_515_);
v___x_517_ = lean_unsigned_to_nat(3u);
v___x_518_ = lean_mk_empty_array_with_capacity(v___x_517_);
v___x_519_ = lean_array_push(v___x_518_, v___x_508_);
v___x_520_ = lean_array_push(v___x_519_, v___x_509_);
v___x_521_ = lean_array_push(v___x_520_, v___x_516_);
v___x_522_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_505_, v___x_506_, v___x_521_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v___x_522_, 0);
lean_dec(v_unused_530_);
v___x_524_ = v___x_522_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_dec(v___x_522_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v_a_500_);
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_500_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
else
{
lean_object* v_a_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_538_; 
lean_dec(v_a_500_);
v_a_531_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_538_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_538_ == 0)
{
v___x_533_ = v___x_522_;
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_a_531_);
lean_dec(v___x_522_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_538_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_536_; 
if (v_isShared_534_ == 0)
{
v___x_536_ = v___x_533_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v_a_531_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec(v_a_500_);
v_a_542_ = lean_ctor_get(v___x_504_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_504_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_504_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_504_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec(v_a_500_);
v_a_550_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_501_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_501_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
lean_object* v___x_555_; 
if (v_isShared_553_ == 0)
{
v___x_555_ = v___x_552_;
goto v_reusejp_554_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_a_550_);
v___x_555_ = v_reuseFailAlloc_556_;
goto v_reusejp_554_;
}
v_reusejp_554_:
{
return v___x_555_;
}
}
}
}
else
{
lean_object* v_a_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_565_; 
v_a_558_ = lean_ctor_get(v___x_499_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_499_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_499_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_499_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v___x_563_; 
if (v_isShared_561_ == 0)
{
v___x_563_ = v___x_560_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_558_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object* v_f_566_, lean_object* v_a_567_){
_start:
{
lean_object* v_res_568_; 
v_res_568_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(v_f_566_);
return v_res_568_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(lean_object* v_x_569_){
_start:
{
if (lean_obj_tag(v_x_569_) == 0)
{
lean_object* v___x_570_; 
v___x_570_ = lean_unsigned_to_nat(0u);
return v___x_570_;
}
else
{
lean_object* v___x_571_; 
v___x_571_ = lean_unsigned_to_nat(1u);
return v___x_571_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___boxed(lean_object* v_x_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(v_x_572_);
lean_dec_ref(v_x_572_);
return v_res_573_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(lean_object* v_t_574_, lean_object* v_k_575_){
_start:
{
if (lean_obj_tag(v_t_574_) == 0)
{
lean_object* v_value_576_; lean_object* v___x_577_; 
v_value_576_ = lean_ctor_get(v_t_574_, 0);
lean_inc_ref(v_value_576_);
lean_dec_ref_known(v_t_574_, 1);
v___x_577_ = lean_apply_1(v_k_575_, v_value_576_);
return v___x_577_;
}
else
{
lean_object* v_value_578_; lean_object* v___x_579_; 
v_value_578_ = lean_ctor_get(v_t_574_, 0);
lean_inc(v_value_578_);
lean_dec_ref_known(v_t_574_, 1);
v___x_579_ = lean_apply_1(v_k_575_, v_value_578_);
return v___x_579_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(lean_object* v_motive_580_, lean_object* v_ctorIdx_581_, lean_object* v_t_582_, lean_object* v_h_583_, lean_object* v_k_584_){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_582_, v_k_584_);
return v___x_585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___boxed(lean_object* v_motive_586_, lean_object* v_ctorIdx_587_, lean_object* v_t_588_, lean_object* v_h_589_, lean_object* v_k_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(v_motive_586_, v_ctorIdx_587_, v_t_588_, v_h_589_, v_k_590_);
lean_dec(v_ctorIdx_587_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim___redArg(lean_object* v_t_592_, lean_object* v_domString_593_){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_592_, v_domString_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim(lean_object* v_motive_595_, lean_object* v_t_596_, lean_object* v_h_597_, lean_object* v_domString_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_596_, v_domString_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim___redArg(lean_object* v_t_600_, lean_object* v_unsignedShort_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_600_, v_unsignedShort_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim(lean_object* v_motive_603_, lean_object* v_t_604_, lean_object* v_h_605_, lean_object* v_unsignedShort_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_604_, v_unsignedShort_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0(lean_object* v_x_608_){
_start:
{
if (lean_obj_tag(v_x_608_) == 0)
{
lean_object* v_value_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_616_; 
v_value_609_ = lean_ctor_get(v_x_608_, 0);
v_isSharedCheck_616_ = !lean_is_exclusive(v_x_608_);
if (v_isSharedCheck_616_ == 0)
{
v___x_611_ = v_x_608_;
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_value_609_);
lean_dec(v_x_608_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_616_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_614_; 
if (v_isShared_612_ == 0)
{
lean_ctor_set_tag(v___x_611_, 4);
v___x_614_ = v___x_611_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v_value_609_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
else
{
lean_object* v_value_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_630_; 
v_value_617_ = lean_ctor_get(v_x_608_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v_x_608_);
if (v_isSharedCheck_630_ == 0)
{
v___x_619_ = v_x_608_;
v_isShared_620_ = v_isSharedCheck_630_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_value_617_);
lean_dec(v_x_608_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_630_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_621_ = lean_nat_to_int(v_value_617_);
v___x_622_ = lean_nat_abs(v___x_621_);
v___x_623_ = lean_cstr_to_nat("9007199254740991");
v___x_624_ = lean_nat_dec_le(v___x_622_, v___x_623_);
lean_dec(v___x_622_);
if (v___x_624_ == 0)
{
lean_object* v___x_626_; 
if (v_isShared_620_ == 0)
{
lean_ctor_set_tag(v___x_619_, 5);
lean_ctor_set(v___x_619_, 0, v___x_621_);
v___x_626_ = v___x_619_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
else
{
double v___x_628_; lean_object* v___x_629_; 
lean_del_object(v___x_619_);
v___x_628_ = l_Float_ofInt(v___x_621_);
lean_dec(v___x_621_);
v___x_629_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_629_, 0, v___x_628_);
return v___x_629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object* v_value_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_634_, 0, v_value_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object* v_value_637_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_638_, 0, v_value_637_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object* v_f_648_, lean_object* v_a_649_, lean_object* v___f_650_, lean_object* v_x_651_){
_start:
{
if (lean_obj_tag(v_x_651_) == 0)
{
lean_object* v_a_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_661_; 
lean_dec_ref(v___f_650_);
lean_dec(v_a_649_);
lean_dec_ref(v_f_648_);
v_a_653_ = lean_ctor_get(v_x_651_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v_x_651_);
if (v_isSharedCheck_661_ == 0)
{
v___x_655_ = v_x_651_;
v_isShared_656_ = v_isSharedCheck_661_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_a_653_);
lean_dec(v_x_651_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_661_;
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
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_653_);
v___x_658_ = v_reuseFailAlloc_660_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v___x_659_; 
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
return v___x_659_;
}
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_663_; uint8_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
v_a_662_ = lean_ctor_get(v_x_651_, 0);
lean_inc(v_a_662_);
lean_dec_ref_known(v_x_651_, 1);
v___x_663_ = lean_unsigned_to_nat(0u);
v___x_664_ = 0;
v___x_665_ = lean_apply_3(v_f_648_, v_a_649_, v_a_662_, lean_box(0));
v___x_666_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_663_, v___x_664_, v___x_665_, v___f_650_);
return v___x_666_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object* v_f_667_, lean_object* v_a_668_, lean_object* v___f_669_, lean_object* v_x_670_, lean_object* v___y_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(v_f_667_, v_a_668_, v___f_669_, v_x_670_);
return v_res_672_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_676_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_677_ = lean_string_utf8_byte_size(v___x_676_);
return v___x_677_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3);
v___x_680_ = lean_nat_dec_eq(v___x_679_, v___x_678_);
return v___x_680_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__8));
v___x_686_ = lean_unsigned_to_nat(46u);
v___x_687_ = lean_unsigned_to_nat(193u);
v___x_688_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7));
v___x_689_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6));
v___x_690_ = l_mkPanicMessageWithDecl(v___x_689_, v___x_688_, v___x_687_, v___x_686_, v___x_685_);
return v___x_690_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object* v_context_692_, lean_object* v_d_693_){
_start:
{
lean_object* v___y_696_; lean_object* v___y_697_; 
if (lean_obj_tag(v_d_693_) == 9)
{
lean_object* v_value_701_; lean_object* v___x_702_; 
v_value_701_ = lean_ctor_get(v_d_693_, 0);
lean_inc(v_value_701_);
lean_dec_ref_known(v_d_693_, 2);
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v_value_701_);
return v___x_702_;
}
else
{
lean_object* v___x_703_; lean_object* v_received_705_; 
v___x_703_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
if (lean_obj_tag(v_d_693_) == 9)
{
lean_object* v_value_719_; lean_object* v_description_720_; uint8_t v___x_721_; 
v_value_719_ = lean_ctor_get(v_d_693_, 0);
v_description_720_ = lean_ctor_get(v_d_693_, 1);
v___x_721_ = lean_string_dec_eq(v_description_720_, v___x_703_);
if (v___x_721_ == 0)
{
goto v___jp_717_;
}
else
{
uint32_t v___x_722_; uint64_t v___x_723_; lean_object* v___x_724_; uint32_t v___x_725_; lean_object* v___x_726_; 
lean_inc_n(v_value_719_, 2);
lean_dec_ref_known(v_d_693_, 2);
v___x_722_ = 206;
v___x_723_ = 0ULL;
v___x_724_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_724_, 0, v_value_719_);
lean_ctor_set(v___x_724_, 1, v___x_703_);
v___x_725_ = lasm_js_value_handle(v_value_719_);
lean_dec(v_value_719_);
v___x_726_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_722_, v___x_723_, v___x_724_, v___x_725_);
lean_dec_ref_known(v___x_724_, 2);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_object* v_a_727_; uint8_t v___x_728_; 
v_a_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_a_727_);
lean_dec_ref_known(v___x_726_, 1);
v___x_728_ = lean_string_validate_utf8(v_a_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; 
lean_dec(v_a_727_);
v___x_729_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_730_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_729_);
v_received_705_ = v___x_730_;
goto v___jp_704_;
}
else
{
lean_object* v___x_731_; 
v___x_731_ = lean_string_from_utf8_unchecked(v_a_727_);
v_received_705_ = v___x_731_;
goto v___jp_704_;
}
}
else
{
lean_object* v___x_732_; 
lean_dec_ref_known(v___x_726_, 1);
v___x_732_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v_received_705_ = v___x_732_;
goto v___jp_704_;
}
}
}
else
{
goto v___jp_717_;
}
v___jp_704_:
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_706_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_707_ = lean_string_append(v___x_706_, v_context_692_);
v___x_708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_709_ = lean_string_append(v___x_707_, v___x_708_);
v___x_710_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServer___closed__1));
v___x_711_ = lean_string_append(v___x_709_, v___x_710_);
v___x_712_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_713_ = lean_string_append(v___x_711_, v___x_712_);
v___x_714_ = lean_string_append(v___x_713_, v_received_705_);
lean_dec_ref(v_received_705_);
v___x_715_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5));
v___y_696_ = v___x_714_;
v___y_697_ = v___x_716_;
goto v___jp_695_;
}
else
{
v___y_696_ = v___x_714_;
v___y_697_ = v___x_703_;
goto v___jp_695_;
}
}
v___jp_717_:
{
lean_object* v___x_718_; 
v___x_718_ = l_Lasm_JS_Data_describe(v_d_693_);
v_received_705_ = v___x_718_;
goto v___jp_704_;
}
}
v___jp_695_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_698_ = lean_string_append(v___y_696_, v___y_697_);
v___x_699_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
return v___x_700_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object* v_context_733_, lean_object* v_d_734_, lean_object* v_a_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v_context_733_, v_d_734_);
lean_dec_ref(v_context_733_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object* v_args_738_, lean_object* v_i_739_){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_741_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_742_ = lean_unsigned_to_nat(1u);
v___x_743_ = lean_nat_add(v_i_739_, v___x_742_);
v___x_744_ = l_Nat_reprFast(v___x_743_);
v___x_745_ = lean_string_append(v___x_741_, v___x_744_);
lean_dec_ref(v___x_744_);
v___x_746_ = lean_array_get_size(v_args_738_);
v___x_747_ = lean_nat_dec_lt(v_i_739_, v___x_746_);
if (v___x_747_ == 0)
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = lean_box(0);
v___x_749_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_745_, v___x_748_);
lean_dec_ref(v___x_745_);
return v___x_749_;
}
else
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = lean_array_fget_borrowed(v_args_738_, v_i_739_);
lean_inc(v___x_750_);
v___x_751_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_745_, v___x_750_);
lean_dec_ref(v___x_745_);
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object* v_args_752_, lean_object* v_i_753_, lean_object* v_a_754_){
_start:
{
lean_object* v_res_755_; 
v_res_755_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_752_, v_i_753_);
lean_dec(v_i_753_);
lean_dec_ref(v_args_752_);
return v_res_755_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object* v_f_756_, lean_object* v___f_757_, lean_object* v_args_758_, lean_object* v_x_759_){
_start:
{
if (lean_obj_tag(v_x_759_) == 0)
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_769_; 
lean_dec_ref(v___f_757_);
lean_dec_ref(v_f_756_);
v_a_761_ = lean_ctor_get(v_x_759_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v_x_759_);
if (v_isSharedCheck_769_ == 0)
{
v___x_763_ = v_x_759_;
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v_x_759_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_769_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_768_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
lean_object* v___x_767_; 
v___x_767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_767_, 0, v___x_766_);
return v___x_767_;
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_791_; 
v_a_770_ = lean_ctor_get(v_x_759_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v_x_759_);
if (v_isSharedCheck_791_ == 0)
{
v___x_772_ = v_x_759_;
v_isShared_773_ = v_isSharedCheck_791_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v_x_759_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_791_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___f_774_; lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; lean_object* v_val_779_; lean_object* v___x_782_; 
v___f_774_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_774_, 0, v_f_756_);
lean_closure_set(v___f_774_, 1, v_a_770_);
lean_closure_set(v___f_774_, 2, v___f_757_);
v___x_775_ = lean_unsigned_to_nat(1u);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = 0;
v___x_782_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_758_, v___x_775_);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_785_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v_a_783_);
v___x_785_ = v___x_772_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_783_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
v_val_779_ = v___x_785_;
goto v___jp_778_;
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; 
v_a_787_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_787_);
lean_dec_ref_known(v___x_782_, 1);
if (v_isShared_773_ == 0)
{
lean_ctor_set_tag(v___x_772_, 0);
lean_ctor_set(v___x_772_, 0, v_a_787_);
v___x_789_ = v___x_772_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_787_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
v_val_779_ = v___x_789_;
goto v___jp_778_;
}
}
v___jp_778_:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_780_, 0, v_val_779_);
v___x_781_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_776_, v___x_777_, v___x_780_, v___f_774_);
return v___x_781_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object* v_f_792_, lean_object* v___f_793_, lean_object* v_args_794_, lean_object* v_x_795_, lean_object* v___y_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(v_f_792_, v___f_793_, v_args_794_, v_x_795_);
lean_dec_ref(v_args_794_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object* v_args_798_, lean_object* v_i_799_){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_801_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_802_ = lean_unsigned_to_nat(1u);
v___x_803_ = lean_nat_add(v_i_799_, v___x_802_);
v___x_804_ = l_Nat_reprFast(v___x_803_);
v___x_805_ = lean_string_append(v___x_801_, v___x_804_);
lean_dec_ref(v___x_804_);
v___x_806_ = lean_array_get_size(v_args_798_);
v___x_807_ = lean_nat_dec_lt(v_i_799_, v___x_806_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; lean_object* v___x_809_; 
v___x_808_ = lean_box(0);
v___x_809_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_805_, v___x_808_);
lean_dec_ref(v___x_805_);
return v___x_809_;
}
else
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = lean_array_fget_borrowed(v_args_798_, v_i_799_);
lean_inc(v___x_810_);
v___x_811_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_805_, v___x_810_);
lean_dec_ref(v___x_805_);
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object* v_args_812_, lean_object* v_i_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_812_, v_i_813_);
lean_dec(v_i_813_);
lean_dec_ref(v_args_812_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object* v_f_816_, lean_object* v___f_817_, lean_object* v_args_818_){
_start:
{
lean_object* v___f_820_; lean_object* v___x_821_; uint8_t v___x_822_; lean_object* v_val_824_; lean_object* v___x_827_; 
lean_inc_ref(v_args_818_);
v___f_820_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_820_, 0, v_f_816_);
lean_closure_set(v___f_820_, 1, v___f_817_);
lean_closure_set(v___f_820_, 2, v_args_818_);
v___x_821_ = lean_unsigned_to_nat(0u);
v___x_822_ = 0;
v___x_827_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_818_, v___x_821_);
lean_dec_ref(v_args_818_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_827_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_827_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set_tag(v___x_830_, 1);
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
v_val_824_ = v___x_833_;
goto v___jp_823_;
}
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
v_a_836_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_827_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_827_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
lean_ctor_set_tag(v___x_838_, 0);
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
v_val_824_ = v___x_841_;
goto v___jp_823_;
}
}
}
v___jp_823_:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_825_, 0, v_val_824_);
v___x_826_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_821_, v___x_822_, v___x_825_, v___f_820_);
return v___x_826_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object* v_f_844_, lean_object* v___f_845_, lean_object* v_args_846_, lean_object* v___y_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(v_f_844_, v___f_845_, v_args_846_);
return v_res_848_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0(void){
_start:
{
lean_object* v___x_849_; lean_object* v___x_850_; 
v___x_849_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_850_ = lean_nat_abs(v___x_849_);
return v___x_850_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
v___x_851_ = lean_cstr_to_nat("9007199254740991");
v___x_852_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0);
v___x_853_ = lean_nat_dec_le(v___x_852_, v___x_851_);
return v___x_853_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2(void){
_start:
{
lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_854_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_855_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
return v___x_855_;
}
}
static double _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3(void){
_start:
{
lean_object* v___x_856_; double v___x_857_; 
v___x_856_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_857_ = l_Float_ofInt(v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4(void){
_start:
{
double v___x_858_; lean_object* v___x_859_; 
v___x_858_ = lean_float_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3);
v___x_859_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_859_, 0, v___x_858_);
return v___x_859_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object* v_f_860_){
_start:
{
lean_object* v___f_862_; lean_object* v___f_863_; lean_object* v___x_864_; 
v___f_862_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_863_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_863_, 0, v_f_860_);
lean_closure_set(v___f_863_, 1, v___f_862_);
v___x_864_ = l_Lasm_JS_Function_ofFn(v___f_863_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_866_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
v___x_866_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
v___x_868_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_869_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_867_, v___x_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___y_877_; uint8_t v___x_904_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v___x_871_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_872_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_865_);
v___x_873_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_873_, 0, v_a_865_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_875_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_904_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; 
v___x_905_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_877_ = v___x_905_;
goto v___jp_876_;
}
else
{
lean_object* v___x_906_; 
v___x_906_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_877_ = v___x_906_;
goto v___jp_876_;
}
v___jp_876_:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; 
lean_inc(v___y_877_);
v___x_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_878_, 0, v___x_875_);
lean_ctor_set(v___x_878_, 1, v___y_877_);
v___x_879_ = lean_box(0);
v___x_880_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_880_, 0, v___x_878_);
lean_ctor_set(v___x_880_, 1, v___x_879_);
v___x_881_ = l_Lasm_JS_obj(v___x_880_);
v___x_882_ = lean_unsigned_to_nat(3u);
v___x_883_ = lean_mk_empty_array_with_capacity(v___x_882_);
v___x_884_ = lean_array_push(v___x_883_, v___x_873_);
v___x_885_ = lean_array_push(v___x_884_, v___x_874_);
v___x_886_ = lean_array_push(v___x_885_, v___x_881_);
v___x_887_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_870_, v___x_871_, v___x_886_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_894_ == 0)
{
lean_object* v_unused_895_; 
v_unused_895_ = lean_ctor_get(v___x_887_, 0);
lean_dec(v_unused_895_);
v___x_889_ = v___x_887_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_dec(v___x_887_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
lean_ctor_set(v___x_889_, 0, v_a_865_);
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_865_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec(v_a_865_);
v_a_896_ = lean_ctor_get(v___x_887_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_887_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_887_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_887_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec(v_a_865_);
v_a_907_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_869_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_869_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec(v_a_865_);
v_a_915_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_866_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_866_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
else
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
v_a_923_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_930_ == 0)
{
v___x_925_ = v___x_864_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_864_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_923_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object* v_f_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(v_f_931_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object* v_f_934_, lean_object* v_args_935_){
_start:
{
lean_object* v___x_937_; lean_object* v___x_938_; 
v___x_937_ = lean_unsigned_to_nat(0u);
v___x_938_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_935_, v___x_937_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_939_);
lean_dec_ref_known(v___x_938_, 1);
v___x_940_ = lean_unsigned_to_nat(1u);
v___x_941_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_935_, v___x_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_943_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v___x_941_, 1);
v___x_943_ = lean_apply_3(v_f_934_, v_a_939_, v_a_942_, lean_box(0));
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_953_; 
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_953_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_953_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_953_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_948_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_949_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_949_, 0, v_a_944_);
lean_ctor_set(v___x_949_, 1, v___x_948_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_949_);
v___x_951_ = v___x_946_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_949_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_954_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_943_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_943_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec(v_a_939_);
lean_dec_ref(v_f_934_);
v_a_962_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_941_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_941_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
}
}
else
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
lean_dec_ref(v_f_934_);
v_a_970_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_938_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_938_);
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
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object* v_f_978_, lean_object* v_args_979_, lean_object* v___y_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(v_f_978_, v_args_979_);
lean_dec_ref(v_args_979_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object* v_f_982_){
_start:
{
lean_object* v___f_984_; lean_object* v___x_985_; 
v___f_984_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_984_, 0, v_f_982_);
v___x_985_ = l_Lasm_JS_Function_ofSyncFn(v___f_984_);
if (lean_obj_tag(v___x_985_) == 0)
{
lean_object* v_a_986_; lean_object* v___x_987_; 
v_a_986_ = lean_ctor_get(v___x_985_, 0);
lean_inc(v_a_986_);
lean_dec_ref_known(v___x_985_, 1);
v___x_987_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_987_) == 0)
{
lean_object* v_a_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
v_a_988_ = lean_ctor_get(v___x_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref_known(v___x_987_, 1);
v___x_989_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_990_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_988_, v___x_989_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___y_998_; uint8_t v___x_1025_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
lean_inc(v_a_991_);
lean_dec_ref_known(v___x_990_, 1);
v___x_992_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_993_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_986_);
v___x_994_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_994_, 0, v_a_986_);
lean_ctor_set(v___x_994_, 1, v___x_993_);
v___x_995_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_996_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_1025_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_1025_ == 0)
{
lean_object* v___x_1026_; 
v___x_1026_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_998_ = v___x_1026_;
goto v___jp_997_;
}
else
{
lean_object* v___x_1027_; 
v___x_1027_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_998_ = v___x_1027_;
goto v___jp_997_;
}
v___jp_997_:
{
lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_inc(v___y_998_);
v___x_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_999_, 0, v___x_996_);
lean_ctor_set(v___x_999_, 1, v___y_998_);
v___x_1000_ = lean_box(0);
v___x_1001_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1001_, 0, v___x_999_);
lean_ctor_set(v___x_1001_, 1, v___x_1000_);
v___x_1002_ = l_Lasm_JS_obj(v___x_1001_);
v___x_1003_ = lean_unsigned_to_nat(3u);
v___x_1004_ = lean_mk_empty_array_with_capacity(v___x_1003_);
v___x_1005_ = lean_array_push(v___x_1004_, v___x_994_);
v___x_1006_ = lean_array_push(v___x_1005_, v___x_995_);
v___x_1007_ = lean_array_push(v___x_1006_, v___x_1002_);
v___x_1008_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_991_, v___x_992_, v___x_1007_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1015_ == 0)
{
lean_object* v_unused_1016_; 
v_unused_1016_ = lean_ctor_get(v___x_1008_, 0);
lean_dec(v_unused_1016_);
v___x_1010_ = v___x_1008_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_dec(v___x_1008_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
lean_ctor_set(v___x_1010_, 0, v_a_986_);
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_986_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec(v_a_986_);
v_a_1017_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1008_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1008_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
else
{
lean_object* v_a_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1035_; 
lean_dec(v_a_986_);
v_a_1028_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1035_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1035_ == 0)
{
v___x_1030_ = v___x_990_;
v_isShared_1031_ = v_isSharedCheck_1035_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_a_1028_);
lean_dec(v___x_990_);
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
lean_dec(v_a_986_);
v_a_1036_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_987_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_987_);
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
else
{
lean_object* v_a_1044_; lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1051_; 
v_a_1044_ = lean_ctor_get(v___x_985_, 0);
v_isSharedCheck_1051_ = !lean_is_exclusive(v___x_985_);
if (v_isSharedCheck_1051_ == 0)
{
v___x_1046_ = v___x_985_;
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
else
{
lean_inc(v_a_1044_);
lean_dec(v___x_985_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1051_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1049_; 
if (v_isShared_1047_ == 0)
{
v___x_1049_ = v___x_1046_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v_a_1044_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object* v_f_1052_, lean_object* v_a_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(v_f_1052_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object* v___f_1064_, lean_object* v___f_1065_, lean_object* v___f_1066_, lean_object* v___f_1067_, lean_object* v___f_1068_, lean_object* v_d_1069_){
_start:
{
lean_object* v_maxRequestBodySize_1070_; lean_object* v_error_1071_; lean_object* v_id_1072_; lean_object* v_hostname_1073_; lean_object* v_port_1074_; lean_object* v_reusePort_1075_; lean_object* v_ipv6Only_1076_; lean_object* v_idleTimeout_1077_; lean_object* v_fetch_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v_maxRequestBodySize_1070_ = lean_ctor_get(v_d_1069_, 0);
lean_inc(v_maxRequestBodySize_1070_);
v_error_1071_ = lean_ctor_get(v_d_1069_, 1);
lean_inc(v_error_1071_);
v_id_1072_ = lean_ctor_get(v_d_1069_, 2);
lean_inc(v_id_1072_);
v_hostname_1073_ = lean_ctor_get(v_d_1069_, 3);
lean_inc(v_hostname_1073_);
v_port_1074_ = lean_ctor_get(v_d_1069_, 4);
lean_inc(v_port_1074_);
v_reusePort_1075_ = lean_ctor_get(v_d_1069_, 5);
lean_inc(v_reusePort_1075_);
v_ipv6Only_1076_ = lean_ctor_get(v_d_1069_, 6);
lean_inc(v_ipv6Only_1076_);
v_idleTimeout_1077_ = lean_ctor_get(v_d_1069_, 7);
lean_inc(v_idleTimeout_1077_);
v_fetch_1078_ = lean_ctor_get(v_d_1069_, 8);
lean_inc(v_fetch_1078_);
lean_dec_ref(v_d_1069_);
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
lean_inc_ref(v___f_1064_);
v___x_1080_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1064_, v_maxRequestBodySize_1070_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_1083_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1065_, v_error_1071_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
lean_inc_ref(v___f_1066_);
v___x_1086_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1066_, v_id_1072_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1089_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1066_, v_hostname_1073_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1092_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1067_, v_port_1074_);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
lean_inc_ref(v___f_1068_);
v___x_1095_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1068_, v_reusePort_1075_);
v___x_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_1098_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1068_, v_ipv6Only_1076_);
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_1101_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1064_, v_idleTimeout_1077_);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1105_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1105_, 0, v_fetch_1078_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1103_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_unsigned_to_nat(9u);
v___x_1108_ = lean_mk_empty_array_with_capacity(v___x_1107_);
v___x_1109_ = lean_array_push(v___x_1108_, v___x_1081_);
v___x_1110_ = lean_array_push(v___x_1109_, v___x_1084_);
v___x_1111_ = lean_array_push(v___x_1110_, v___x_1087_);
v___x_1112_ = lean_array_push(v___x_1111_, v___x_1090_);
v___x_1113_ = lean_array_push(v___x_1112_, v___x_1093_);
v___x_1114_ = lean_array_push(v___x_1113_, v___x_1096_);
v___x_1115_ = lean_array_push(v___x_1114_, v___x_1099_);
v___x_1116_ = lean_array_push(v___x_1115_, v___x_1102_);
v___x_1117_ = lean_array_push(v___x_1116_, v___x_1106_);
v___x_1118_ = l_Lasm_JS_Web_Support_fields(v___x_1117_);
lean_dec_ref(v___x_1117_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(lean_object* v_x_1129_){
_start:
{
if (lean_obj_tag(v_x_1129_) == 0)
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_unsigned_to_nat(0u);
return v___x_1130_;
}
else
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_unsigned_to_nat(1u);
return v___x_1131_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___boxed(lean_object* v_x_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(v_x_1132_);
lean_dec_ref(v_x_1132_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(lean_object* v_t_1134_, lean_object* v_k_1135_){
_start:
{
if (lean_obj_tag(v_t_1134_) == 0)
{
lean_object* v_value_1136_; lean_object* v___x_1137_; 
v_value_1136_ = lean_ctor_get(v_t_1134_, 0);
lean_inc(v_value_1136_);
lean_dec_ref_known(v_t_1134_, 1);
v___x_1137_ = lean_apply_1(v_k_1135_, v_value_1136_);
return v___x_1137_;
}
else
{
lean_object* v_value_1138_; lean_object* v___x_1139_; 
v_value_1138_ = lean_ctor_get(v_t_1134_, 0);
lean_inc_ref(v_value_1138_);
lean_dec_ref_known(v_t_1134_, 1);
v___x_1139_ = lean_apply_1(v_k_1135_, v_value_1138_);
return v___x_1139_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(lean_object* v_motive_1140_, lean_object* v_ctorIdx_1141_, lean_object* v_t_1142_, lean_object* v_h_1143_, lean_object* v_k_1144_){
_start:
{
lean_object* v___x_1145_; 
v___x_1145_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1142_, v_k_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___boxed(lean_object* v_motive_1146_, lean_object* v_ctorIdx_1147_, lean_object* v_t_1148_, lean_object* v_h_1149_, lean_object* v_k_1150_){
_start:
{
lean_object* v_res_1151_; 
v_res_1151_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(v_motive_1146_, v_ctorIdx_1147_, v_t_1148_, v_h_1149_, v_k_1150_);
lean_dec(v_ctorIdx_1147_);
return v_res_1151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim___redArg(lean_object* v_t_1152_, lean_object* v_request_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1152_, v_request_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim(lean_object* v_motive_1155_, lean_object* v_t_1156_, lean_object* v_h_1157_, lean_object* v_request_1158_){
_start:
{
lean_object* v___x_1159_; 
v___x_1159_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1156_, v_request_1158_);
return v___x_1159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim___redArg(lean_object* v_t_1160_, lean_object* v_domString_1161_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1160_, v_domString_1161_);
return v___x_1162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim(lean_object* v_motive_1163_, lean_object* v_t_1164_, lean_object* v_h_1165_, lean_object* v_domString_1166_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1164_, v_domString_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0(lean_object* v_x_1168_){
_start:
{
if (lean_obj_tag(v_x_1168_) == 0)
{
lean_object* v_value_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v_value_1169_ = lean_ctor_get(v_x_1168_, 0);
lean_inc(v_value_1169_);
lean_dec_ref_known(v_x_1168_, 1);
v___x_1170_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1171_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1171_, 0, v_value_1169_);
lean_ctor_set(v___x_1171_, 1, v___x_1170_);
return v___x_1171_;
}
else
{
lean_object* v_value_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
v_value_1172_ = lean_ctor_get(v_x_1168_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_x_1168_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v_x_1168_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_value_1172_);
lean_dec(v_x_1168_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
lean_ctor_set_tag(v___x_1174_, 4);
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_value_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object* v_value_1182_){
_start:
{
lean_object* v___x_1183_; 
v___x_1183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1183_, 0, v_value_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object* v_value_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_value_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(lean_object* v___x_1192_, lean_object* v___x_1193_, lean_object* v___x_1194_, lean_object* v_d_1195_){
_start:
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
v___x_1197_ = l_Lasm_JS_readField___redArg(v___x_1192_, v_d_1195_, v___x_1196_);
if (lean_obj_tag(v___x_1197_) == 0)
{
lean_object* v_a_1198_; lean_object* v___x_1200_; uint8_t v_isShared_1201_; uint8_t v_isSharedCheck_1205_; 
lean_dec_ref(v___x_1194_);
lean_dec_ref(v___x_1193_);
v_a_1198_ = lean_ctor_get(v___x_1197_, 0);
v_isSharedCheck_1205_ = !lean_is_exclusive(v___x_1197_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1200_ = v___x_1197_;
v_isShared_1201_ = v_isSharedCheck_1205_;
goto v_resetjp_1199_;
}
else
{
lean_inc(v_a_1198_);
lean_dec(v___x_1197_);
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
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v_a_1206_ = lean_ctor_get(v___x_1197_, 0);
lean_inc(v_a_1206_);
lean_dec_ref_known(v___x_1197_, 1);
v___x_1207_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1208_ = l_Lasm_JS_readField___redArg(v___x_1193_, v_d_1195_, v___x_1207_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec(v_a_1206_);
lean_dec_ref(v___x_1194_);
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1208_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1208_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v___x_1214_; 
if (v_isShared_1212_ == 0)
{
v___x_1214_ = v___x_1211_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v_a_1209_);
v___x_1214_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
return v___x_1214_;
}
}
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v_a_1217_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1217_);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1218_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
v___x_1219_ = l_Lasm_JS_readField___redArg(v___x_1194_, v_d_1195_, v___x_1218_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_a_1217_);
lean_dec(v_a_1206_);
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1219_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1237_; 
v_a_1228_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1230_ = v___x_1219_;
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1219_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1237_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1232_; uint8_t v___x_1233_; lean_object* v___x_1235_; 
v___x_1232_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1232_, 0, v_a_1206_);
lean_ctor_set(v___x_1232_, 1, v_a_1217_);
v___x_1233_ = lean_unbox(v_a_1228_);
lean_dec(v_a_1228_);
lean_ctor_set_uint8(v___x_1232_, sizeof(void*)*2, v___x_1233_);
if (v_isShared_1231_ == 0)
{
lean_ctor_set(v___x_1230_, 0, v___x_1232_);
v___x_1235_ = v___x_1230_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1232_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed(lean_object* v___x_1238_, lean_object* v___x_1239_, lean_object* v___x_1240_, lean_object* v_d_1241_){
_start:
{
lean_object* v_res_1242_; 
v_res_1242_ = l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(v___x_1238_, v___x_1239_, v___x_1240_, v_d_1241_);
lean_dec(v_d_1241_);
return v_res_1242_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___f_1246_; 
v___x_1243_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily));
v___x_1244_ = l_Lasm_JS_instFromJSNat;
v___x_1245_ = l_Lasm_JS_instFromJSString;
v___f_1246_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1246_, 0, v___x_1245_);
lean_closure_set(v___f_1246_, 1, v___x_1244_);
lean_closure_set(v___f_1246_, 2, v___x_1243_);
return v___f_1246_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2(void){
_start:
{
uint8_t v___x_1248_; lean_object* v___x_1249_; lean_object* v___f_1250_; lean_object* v___x_1251_; 
v___x_1248_ = 0;
v___x_1249_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___closed__1));
v___f_1250_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0);
v___x_1251_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1251_, 0, v___f_1250_);
lean_ctor_set(v___x_1251_, 1, v___x_1249_);
lean_ctor_set_uint8(v___x_1251_, sizeof(void*)*2, v___x_1248_);
return v___x_1251_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress(void){
_start:
{
lean_object* v___x_1252_; 
v___x_1252_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2);
return v___x_1252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests(lean_object* v_self_1254_){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = ((lean_object*)(l_Lasm_JS_Bun_Server_pendingRequests___closed__0));
v___x_1257_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1254_, v___x_1256_);
return v___x_1257_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests___boxed(lean_object* v_self_1258_, lean_object* v_a_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Lasm_JS_Bun_Server_pendingRequests(v_self_1258_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url(lean_object* v_self_1262_){
_start:
{
lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1264_ = ((lean_object*)(l_Lasm_JS_Bun_Server_url___closed__0));
v___x_1265_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1262_, v___x_1264_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
else
{
lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1281_; 
v_a_1274_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1276_ = v___x_1265_;
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v___x_1265_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_a_1274_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url___boxed(lean_object* v_self_1282_, lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lasm_JS_Bun_Server_url(v_self_1282_);
return v_res_1284_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = lean_unsigned_to_nat(0u);
v___x_1289_ = lean_nat_to_int(v___x_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(lean_object* v_context_1292_, lean_object* v_d_1293_){
_start:
{
lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1305_; lean_object* v_received_1306_; lean_object* v___y_1325_; lean_object* v_a_1328_; lean_object* v_a_1353_; 
switch(lean_obj_tag(v_d_1293_))
{
case 1:
{
goto v___jp_1295_;
}
case 0:
{
goto v___jp_1295_;
}
default: 
{
switch(lean_obj_tag(v_d_1293_))
{
case 3:
{
double v_n_1360_; lean_object* v___x_1361_; 
v_n_1360_ = lean_ctor_get_float(v_d_1293_, 0);
v___x_1361_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1360_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v___x_1362_; 
v___x_1362_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1328_ = v___x_1362_;
goto v___jp_1327_;
}
else
{
lean_object* v_val_1363_; 
v_val_1363_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_val_1363_);
lean_dec_ref_known(v___x_1361_, 1);
v_a_1353_ = v_val_1363_;
goto v___jp_1352_;
}
}
case 5:
{
lean_object* v_i_1364_; 
v_i_1364_ = lean_ctor_get(v_d_1293_, 0);
lean_inc(v_i_1364_);
v_a_1353_ = v_i_1364_;
goto v___jp_1352_;
}
default: 
{
lean_object* v___x_1365_; 
v___x_1365_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1328_ = v___x_1365_;
goto v___jp_1327_;
}
}
}
}
v___jp_1295_:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1296_ = lean_box(0);
v___x_1297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1296_);
return v___x_1297_;
}
v___jp_1298_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1301_ = lean_string_append(v___y_1299_, v___y_1300_);
lean_dec_ref(v___y_1300_);
v___x_1302_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
v___x_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
return v___x_1303_;
}
v___jp_1304_:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v___x_1307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1308_ = lean_string_append(v___x_1307_, v_context_1292_);
v___x_1309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1310_ = lean_string_append(v___x_1308_, v___x_1309_);
v___x_1311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0));
v___x_1312_ = lean_string_append(v___x_1310_, v___x_1311_);
v___x_1313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1314_ = lean_string_append(v___x_1312_, v___x_1313_);
v___x_1315_ = lean_string_append(v___x_1314_, v_received_1306_);
lean_dec_ref(v_received_1306_);
v___x_1316_ = lean_string_utf8_byte_size(v___y_1305_);
v___x_1317_ = lean_unsigned_to_nat(0u);
v___x_1318_ = lean_nat_dec_eq(v___x_1316_, v___x_1317_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1319_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1320_ = lean_string_append(v___x_1319_, v___y_1305_);
v___x_1321_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1322_ = lean_string_append(v___x_1320_, v___x_1321_);
v___y_1299_ = v___x_1315_;
v___y_1300_ = v___x_1322_;
goto v___jp_1298_;
}
else
{
lean_object* v___x_1323_; 
v___x_1323_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1299_ = v___x_1315_;
v___y_1300_ = v___x_1323_;
goto v___jp_1298_;
}
}
v___jp_1324_:
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Lasm_JS_Data_describe(v_d_1293_);
v___y_1305_ = v___y_1325_;
v_received_1306_ = v___x_1326_;
goto v___jp_1304_;
}
v___jp_1327_:
{
if (lean_obj_tag(v_d_1293_) == 9)
{
lean_object* v_value_1329_; lean_object* v_description_1330_; lean_object* v___x_1331_; uint8_t v___x_1332_; 
v_value_1329_ = lean_ctor_get(v_d_1293_, 0);
v_description_1330_ = lean_ctor_get(v_d_1293_, 1);
v___x_1331_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1332_ = lean_string_dec_eq(v_description_1330_, v___x_1331_);
if (v___x_1332_ == 0)
{
v___y_1325_ = v_a_1328_;
goto v___jp_1324_;
}
else
{
lean_object* v___x_1334_; uint8_t v_isShared_1335_; uint8_t v_isSharedCheck_1349_; 
lean_inc(v_value_1329_);
v_isSharedCheck_1349_ = !lean_is_exclusive(v_d_1293_);
if (v_isSharedCheck_1349_ == 0)
{
lean_object* v_unused_1350_; lean_object* v_unused_1351_; 
v_unused_1350_ = lean_ctor_get(v_d_1293_, 1);
lean_dec(v_unused_1350_);
v_unused_1351_ = lean_ctor_get(v_d_1293_, 0);
lean_dec(v_unused_1351_);
v___x_1334_ = v_d_1293_;
v_isShared_1335_ = v_isSharedCheck_1349_;
goto v_resetjp_1333_;
}
else
{
lean_dec(v_d_1293_);
v___x_1334_ = lean_box(0);
v_isShared_1335_ = v_isSharedCheck_1349_;
goto v_resetjp_1333_;
}
v_resetjp_1333_:
{
uint32_t v___x_1336_; uint64_t v___x_1337_; lean_object* v___x_1339_; 
v___x_1336_ = 206;
v___x_1337_ = 0ULL;
lean_inc(v_value_1329_);
if (v_isShared_1335_ == 0)
{
lean_ctor_set(v___x_1334_, 1, v___x_1331_);
v___x_1339_ = v___x_1334_;
goto v_reusejp_1338_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_value_1329_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v___x_1331_);
v___x_1339_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1338_;
}
v_reusejp_1338_:
{
uint32_t v___x_1340_; lean_object* v___x_1341_; 
v___x_1340_ = lasm_js_value_handle(v_value_1329_);
lean_dec(v_value_1329_);
v___x_1341_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1336_, v___x_1337_, v___x_1339_, v___x_1340_);
lean_dec_ref(v___x_1339_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v_a_1342_; uint8_t v___x_1343_; 
v_a_1342_ = lean_ctor_get(v___x_1341_, 0);
lean_inc(v_a_1342_);
lean_dec_ref_known(v___x_1341_, 1);
v___x_1343_ = lean_string_validate_utf8(v_a_1342_);
if (v___x_1343_ == 0)
{
lean_object* v___x_1344_; lean_object* v___x_1345_; 
lean_dec(v_a_1342_);
v___x_1344_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_1345_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1344_);
v___y_1305_ = v_a_1328_;
v_received_1306_ = v___x_1345_;
goto v___jp_1304_;
}
else
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_string_from_utf8_unchecked(v_a_1342_);
v___y_1305_ = v_a_1328_;
v_received_1306_ = v___x_1346_;
goto v___jp_1304_;
}
}
else
{
lean_object* v___x_1347_; 
lean_dec_ref_known(v___x_1341_, 1);
v___x_1347_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_1305_ = v_a_1328_;
v_received_1306_ = v___x_1347_;
goto v___jp_1304_;
}
}
}
}
}
else
{
v___y_1325_ = v_a_1328_;
goto v___jp_1324_;
}
}
v___jp_1352_:
{
lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1354_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1355_ = lean_int_dec_le(v___x_1354_, v_a_1353_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_dec(v_a_1353_);
v___x_1356_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1328_ = v___x_1356_;
goto v___jp_1327_;
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_dec(v_d_1293_);
v___x_1357_ = l_Int_toNat(v_a_1353_);
lean_dec(v_a_1353_);
v___x_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
v___x_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
return v___x_1359_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1366_, lean_object* v_d_1367_, lean_object* v_a_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1366_, v_d_1367_);
lean_dec_ref(v_context_1366_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(lean_object* v_context_1370_, lean_object* v_bytes_1371_){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1371_);
if (lean_obj_tag(v___x_1373_) == 0)
{
lean_object* v_a_1374_; lean_object* v___x_1375_; 
v_a_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc(v_a_1374_);
lean_dec_ref_known(v___x_1373_, 1);
v___x_1375_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1370_, v_a_1374_);
return v___x_1375_;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
v_a_1376_ = lean_ctor_get(v___x_1373_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1373_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1373_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0___boxed(lean_object* v_context_1384_, lean_object* v_bytes_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v_context_1384_, v_bytes_1385_);
lean_dec_ref(v_bytes_1385_);
lean_dec_ref(v_context_1384_);
return v_res_1387_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1388_; uint64_t v___x_1389_; 
v___x_1388_ = 0;
v___x_1389_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1388_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(lean_object* v_o_1391_, lean_object* v_key_1392_){
_start:
{
lean_object* v_k_1394_; lean_object* v___x_1395_; 
v_k_1394_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1394_, 0, v_key_1392_);
v___x_1395_ = l_Lasm_JS_Wire_encodeIO(v_k_1394_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v_a_1396_; uint32_t v___x_1397_; uint32_t v___x_1398_; uint64_t v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_a_1396_ = lean_ctor_get(v___x_1395_, 0);
lean_inc(v_a_1396_);
lean_dec_ref_known(v___x_1395_, 1);
v___x_1397_ = 203;
v___x_1398_ = lasm_js_value_handle(v_o_1391_);
v___x_1399_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1400_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1401_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1401_, 0, v_o_1391_);
lean_ctor_set(v___x_1401_, 1, v___x_1400_);
v___x_1402_ = lean_unsigned_to_nat(2u);
v___x_1403_ = lean_mk_empty_array_with_capacity(v___x_1402_);
lean_inc_ref(v_k_1394_);
v___x_1404_ = lean_array_push(v___x_1403_, v_k_1394_);
v___x_1405_ = lean_array_push(v___x_1404_, v___x_1401_);
v___x_1406_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
v___x_1407_ = lasm_js_call(v___x_1397_, v___x_1398_, v___x_1399_, v_a_1396_, v___x_1406_);
lean_dec_ref_known(v___x_1406_, 1);
lean_dec(v_a_1396_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
lean_dec_ref_known(v___x_1407_, 1);
v___x_1409_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1410_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1394_);
v___x_1411_ = lean_string_append(v___x_1409_, v___x_1410_);
lean_dec_ref(v___x_1410_);
v___x_1412_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v___x_1411_, v_a_1408_);
lean_dec(v_a_1408_);
lean_dec_ref(v___x_1411_);
return v___x_1412_;
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_dec_ref_known(v_k_1394_, 1);
v_a_1413_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1407_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1407_);
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
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec_ref_known(v_k_1394_, 1);
lean_dec(v_o_1391_);
v_a_1421_ = lean_ctor_get(v___x_1395_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1395_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1395_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1395_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___boxed(lean_object* v_o_1429_, lean_object* v_key_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_o_1429_, v_key_1430_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port(lean_object* v_self_1433_){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1435_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1436_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_self_1433_, v___x_1435_);
return v___x_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port___boxed(lean_object* v_self_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l_Lasm_JS_Bun_Server_port(v_self_1437_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(lean_object* v_o_1440_, lean_object* v_key_1441_){
_start:
{
lean_object* v_k_1443_; lean_object* v___x_1444_; 
v_k_1443_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1443_, 0, v_key_1441_);
v___x_1444_ = l_Lasm_JS_Wire_encodeIO(v_k_1443_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; uint32_t v___x_1446_; uint32_t v___x_1447_; uint64_t v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v___x_1446_ = 203;
v___x_1447_ = lasm_js_value_handle(v_o_1440_);
v___x_1448_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1449_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1450_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1450_, 0, v_o_1440_);
lean_ctor_set(v___x_1450_, 1, v___x_1449_);
v___x_1451_ = lean_unsigned_to_nat(2u);
v___x_1452_ = lean_mk_empty_array_with_capacity(v___x_1451_);
lean_inc_ref(v_k_1443_);
v___x_1453_ = lean_array_push(v___x_1452_, v_k_1443_);
v___x_1454_ = lean_array_push(v___x_1453_, v___x_1450_);
v___x_1455_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1455_, 0, v___x_1454_);
v___x_1456_ = lasm_js_call(v___x_1446_, v___x_1447_, v___x_1448_, v_a_1445_, v___x_1455_);
lean_dec_ref_known(v___x_1455_, 1);
lean_dec(v_a_1445_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1456_, 1);
v___x_1458_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1459_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1443_);
v___x_1460_ = lean_string_append(v___x_1458_, v___x_1459_);
lean_dec_ref(v___x_1459_);
v___x_1461_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1460_, v_a_1457_);
lean_dec(v_a_1457_);
lean_dec_ref(v___x_1460_);
return v___x_1461_;
}
else
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1469_; 
lean_dec_ref_known(v_k_1443_, 1);
v_a_1462_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1469_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1469_ == 0)
{
v___x_1464_ = v___x_1456_;
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1456_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1469_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1467_; 
if (v_isShared_1465_ == 0)
{
v___x_1467_ = v___x_1464_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_a_1462_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec_ref_known(v_k_1443_, 1);
lean_dec(v_o_1440_);
v_a_1470_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1444_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1444_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0___boxed(lean_object* v_o_1478_, lean_object* v_key_1479_, lean_object* v_a_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_o_1478_, v_key_1479_);
return v_res_1481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname(lean_object* v_self_1482_){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
v___x_1484_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1485_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_self_1482_, v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname___boxed(lean_object* v_self_1486_, lean_object* v_a_1487_){
_start:
{
lean_object* v_res_1488_; 
v_res_1488_ = l_Lasm_JS_Bun_Server_hostname(v_self_1486_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(lean_object* v_context_1491_, lean_object* v_d_1492_){
_start:
{
lean_object* v___y_1498_; lean_object* v___y_1499_; lean_object* v___y_1504_; lean_object* v_received_1505_; lean_object* v___y_1521_; uint8_t v_a_1549_; 
switch(lean_obj_tag(v_d_1492_))
{
case 1:
{
goto v___jp_1494_;
}
case 0:
{
goto v___jp_1494_;
}
default: 
{
if (lean_obj_tag(v_d_1492_) == 4)
{
lean_object* v_s_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; 
v_s_1553_ = lean_ctor_get(v_d_1492_, 0);
v___x_1554_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_1555_ = lean_string_dec_eq(v_s_1553_, v___x_1554_);
if (v___x_1555_ == 0)
{
lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1556_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_1557_ = lean_string_dec_eq(v_s_1553_, v___x_1556_);
if (v___x_1557_ == 0)
{
goto v___jp_1523_;
}
else
{
uint8_t v___x_1558_; 
lean_dec_ref_known(v_d_1492_, 1);
v___x_1558_ = 1;
v_a_1549_ = v___x_1558_;
goto v___jp_1548_;
}
}
else
{
uint8_t v___x_1559_; 
lean_dec_ref_known(v_d_1492_, 1);
v___x_1559_ = 0;
v_a_1549_ = v___x_1559_;
goto v___jp_1548_;
}
}
else
{
goto v___jp_1523_;
}
}
}
v___jp_1494_:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
v___x_1495_ = lean_box(0);
v___x_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1495_);
return v___x_1496_;
}
v___jp_1497_:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1500_ = lean_string_append(v___y_1498_, v___y_1499_);
v___x_1501_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
v___x_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1501_);
return v___x_1502_;
}
v___jp_1503_:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1506_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1507_ = lean_string_append(v___x_1506_, v_context_1491_);
v___x_1508_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1509_ = lean_string_append(v___x_1507_, v___x_1508_);
v___x_1510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0));
v___x_1511_ = lean_string_append(v___x_1509_, v___x_1510_);
v___x_1512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1513_ = lean_string_append(v___x_1511_, v___x_1512_);
v___x_1514_ = lean_string_append(v___x_1513_, v_received_1505_);
lean_dec_ref(v_received_1505_);
v___x_1515_ = lean_string_utf8_byte_size(v___y_1504_);
v___x_1516_ = lean_unsigned_to_nat(0u);
v___x_1517_ = lean_nat_dec_eq(v___x_1515_, v___x_1516_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1518_; 
v___x_1518_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___y_1498_ = v___x_1514_;
v___y_1499_ = v___x_1518_;
goto v___jp_1497_;
}
else
{
lean_object* v___x_1519_; 
v___x_1519_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1498_ = v___x_1514_;
v___y_1499_ = v___x_1519_;
goto v___jp_1497_;
}
}
v___jp_1520_:
{
lean_object* v___x_1522_; 
v___x_1522_ = l_Lasm_JS_Data_describe(v_d_1492_);
v___y_1504_ = v___y_1521_;
v_received_1505_ = v___x_1522_;
goto v___jp_1503_;
}
v___jp_1523_:
{
lean_object* v___x_1524_; 
v___x_1524_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0));
if (lean_obj_tag(v_d_1492_) == 9)
{
lean_object* v_value_1525_; lean_object* v_description_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; 
v_value_1525_ = lean_ctor_get(v_d_1492_, 0);
v_description_1526_ = lean_ctor_get(v_d_1492_, 1);
v___x_1527_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1528_ = lean_string_dec_eq(v_description_1526_, v___x_1527_);
if (v___x_1528_ == 0)
{
v___y_1521_ = v___x_1524_;
goto v___jp_1520_;
}
else
{
lean_object* v___x_1530_; uint8_t v_isShared_1531_; uint8_t v_isSharedCheck_1545_; 
lean_inc(v_value_1525_);
v_isSharedCheck_1545_ = !lean_is_exclusive(v_d_1492_);
if (v_isSharedCheck_1545_ == 0)
{
lean_object* v_unused_1546_; lean_object* v_unused_1547_; 
v_unused_1546_ = lean_ctor_get(v_d_1492_, 1);
lean_dec(v_unused_1546_);
v_unused_1547_ = lean_ctor_get(v_d_1492_, 0);
lean_dec(v_unused_1547_);
v___x_1530_ = v_d_1492_;
v_isShared_1531_ = v_isSharedCheck_1545_;
goto v_resetjp_1529_;
}
else
{
lean_dec(v_d_1492_);
v___x_1530_ = lean_box(0);
v_isShared_1531_ = v_isSharedCheck_1545_;
goto v_resetjp_1529_;
}
v_resetjp_1529_:
{
uint32_t v___x_1532_; uint64_t v___x_1533_; lean_object* v___x_1535_; 
v___x_1532_ = 206;
v___x_1533_ = 0ULL;
lean_inc(v_value_1525_);
if (v_isShared_1531_ == 0)
{
lean_ctor_set(v___x_1530_, 1, v___x_1527_);
v___x_1535_ = v___x_1530_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_value_1525_);
lean_ctor_set(v_reuseFailAlloc_1544_, 1, v___x_1527_);
v___x_1535_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
uint32_t v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lasm_js_value_handle(v_value_1525_);
lean_dec(v_value_1525_);
v___x_1537_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1532_, v___x_1533_, v___x_1535_, v___x_1536_);
lean_dec_ref(v___x_1535_);
if (lean_obj_tag(v___x_1537_) == 0)
{
lean_object* v_a_1538_; uint8_t v___x_1539_; 
v_a_1538_ = lean_ctor_get(v___x_1537_, 0);
lean_inc(v_a_1538_);
lean_dec_ref_known(v___x_1537_, 1);
v___x_1539_ = lean_string_validate_utf8(v_a_1538_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec(v_a_1538_);
v___x_1540_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_1541_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1540_);
v___y_1504_ = v___x_1524_;
v_received_1505_ = v___x_1541_;
goto v___jp_1503_;
}
else
{
lean_object* v___x_1542_; 
v___x_1542_ = lean_string_from_utf8_unchecked(v_a_1538_);
v___y_1504_ = v___x_1524_;
v_received_1505_ = v___x_1542_;
goto v___jp_1503_;
}
}
else
{
lean_object* v___x_1543_; 
lean_dec_ref_known(v___x_1537_, 1);
v___x_1543_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_1504_ = v___x_1524_;
v_received_1505_ = v___x_1543_;
goto v___jp_1503_;
}
}
}
}
}
else
{
v___y_1521_ = v___x_1524_;
goto v___jp_1520_;
}
}
v___jp_1548_:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
v___x_1550_ = lean_box(v_a_1549_);
v___x_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
v___x_1552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
return v___x_1552_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1560_, lean_object* v_d_1561_, lean_object* v_a_1562_){
_start:
{
lean_object* v_res_1563_; 
v_res_1563_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1560_, v_d_1561_);
lean_dec_ref(v_context_1560_);
return v_res_1563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(lean_object* v_context_1564_, lean_object* v_bytes_1565_){
_start:
{
lean_object* v___x_1567_; 
v___x_1567_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1565_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_object* v_a_1568_; lean_object* v___x_1569_; 
v_a_1568_ = lean_ctor_get(v___x_1567_, 0);
lean_inc(v_a_1568_);
lean_dec_ref_known(v___x_1567_, 1);
v___x_1569_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1564_, v_a_1568_);
return v___x_1569_;
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
v_a_1570_ = lean_ctor_get(v___x_1567_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1567_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1567_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1567_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0___boxed(lean_object* v_context_1578_, lean_object* v_bytes_1579_, lean_object* v_a_1580_){
_start:
{
lean_object* v_res_1581_; 
v_res_1581_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v_context_1578_, v_bytes_1579_);
lean_dec_ref(v_bytes_1579_);
lean_dec_ref(v_context_1578_);
return v_res_1581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(lean_object* v_o_1582_, lean_object* v_key_1583_){
_start:
{
lean_object* v_k_1585_; lean_object* v___x_1586_; 
v_k_1585_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1585_, 0, v_key_1583_);
v___x_1586_ = l_Lasm_JS_Wire_encodeIO(v_k_1585_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; uint32_t v___x_1588_; uint32_t v___x_1589_; uint64_t v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1586_, 1);
v___x_1588_ = 203;
v___x_1589_ = lasm_js_value_handle(v_o_1582_);
v___x_1590_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1591_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1592_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1592_, 0, v_o_1582_);
lean_ctor_set(v___x_1592_, 1, v___x_1591_);
v___x_1593_ = lean_unsigned_to_nat(2u);
v___x_1594_ = lean_mk_empty_array_with_capacity(v___x_1593_);
lean_inc_ref(v_k_1585_);
v___x_1595_ = lean_array_push(v___x_1594_, v_k_1585_);
v___x_1596_ = lean_array_push(v___x_1595_, v___x_1592_);
v___x_1597_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
v___x_1598_ = lasm_js_call(v___x_1588_, v___x_1589_, v___x_1590_, v_a_1587_, v___x_1597_);
lean_dec_ref_known(v___x_1597_, 1);
lean_dec(v_a_1587_);
if (lean_obj_tag(v___x_1598_) == 0)
{
lean_object* v_a_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; 
v_a_1599_ = lean_ctor_get(v___x_1598_, 0);
lean_inc(v_a_1599_);
lean_dec_ref_known(v___x_1598_, 1);
v___x_1600_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1601_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1585_);
v___x_1602_ = lean_string_append(v___x_1600_, v___x_1601_);
lean_dec_ref(v___x_1601_);
v___x_1603_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v___x_1602_, v_a_1599_);
lean_dec(v_a_1599_);
lean_dec_ref(v___x_1602_);
return v___x_1603_;
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
lean_dec_ref_known(v_k_1585_, 1);
v_a_1604_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1598_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1598_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
}
else
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
lean_dec_ref_known(v_k_1585_, 1);
lean_dec(v_o_1582_);
v_a_1612_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1586_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1586_);
v___x_1614_ = lean_box(0);
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
v_resetjp_1613_:
{
lean_object* v___x_1617_; 
if (v_isShared_1615_ == 0)
{
v___x_1617_ = v___x_1614_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1618_; 
v_reuseFailAlloc_1618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1618_, 0, v_a_1612_);
v___x_1617_ = v_reuseFailAlloc_1618_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
return v___x_1617_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0___boxed(lean_object* v_o_1620_, lean_object* v_key_1621_, lean_object* v_a_1622_){
_start:
{
lean_object* v_res_1623_; 
v_res_1623_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_o_1620_, v_key_1621_);
return v_res_1623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol(lean_object* v_self_1625_){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1627_ = ((lean_object*)(l_Lasm_JS_Bun_Server_protocol___closed__0));
v___x_1628_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_self_1625_, v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol___boxed(lean_object* v_self_1629_, lean_object* v_a_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lasm_JS_Bun_Server_protocol(v_self_1629_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development(lean_object* v_self_1633_){
_start:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = ((lean_object*)(l_Lasm_JS_Bun_Server_development___closed__0));
v___x_1636_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1633_, v___x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development___boxed(lean_object* v_self_1637_, lean_object* v_a_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l_Lasm_JS_Bun_Server_development(v_self_1637_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id(lean_object* v_self_1640_){
_start:
{
lean_object* v___x_1642_; lean_object* v___x_1643_; 
v___x_1642_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1643_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1640_, v___x_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id___boxed(lean_object* v_self_1644_, lean_object* v_a_1645_){
_start:
{
lean_object* v_res_1646_; 
v_res_1646_ = l_Lasm_JS_Bun_Server_id(v_self_1644_);
return v_res_1646_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop(lean_object* v_self_1648_, lean_object* v_closeActiveConnections_1649_){
_start:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
v___x_1651_ = ((lean_object*)(l_Lasm_JS_Bun_Server_stop___closed__0));
v___x_1652_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_closeActiveConnections_1649_);
v___x_1653_ = lean_unsigned_to_nat(1u);
v___x_1654_ = lean_mk_empty_array_with_capacity(v___x_1653_);
v___x_1655_ = lean_array_push(v___x_1654_, v___x_1652_);
v___x_1656_ = l_Lasm_JS_Web_Support_args(v___x_1655_);
v___x_1657_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1648_, v___x_1651_, v___x_1656_);
return v___x_1657_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop___boxed(lean_object* v_self_1658_, lean_object* v_closeActiveConnections_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v_res_1661_; 
v_res_1661_ = l_Lasm_JS_Bun_Server_stop(v_self_1658_, v_closeActiveConnections_1659_);
lean_dec(v_closeActiveConnections_1659_);
return v_res_1661_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(uint8_t v_await_1662_, uint64_t v_extra_1663_){
_start:
{
uint64_t v___x_1664_; uint64_t v___y_1666_; 
v___x_1664_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1662_ == 0)
{
uint64_t v___x_1669_; 
v___x_1669_ = 0ULL;
v___y_1666_ = v___x_1669_;
goto v___jp_1665_;
}
else
{
uint64_t v___x_1670_; 
v___x_1670_ = 2ULL;
v___y_1666_ = v___x_1670_;
goto v___jp_1665_;
}
v___jp_1665_:
{
uint64_t v___x_1667_; uint64_t v___x_1668_; 
v___x_1667_ = lean_uint64_lor(v___x_1664_, v___y_1666_);
v___x_1668_ = lean_uint64_lor(v___x_1667_, v_extra_1663_);
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0___boxed(lean_object* v_await_1671_, lean_object* v_extra_1672_){
_start:
{
uint8_t v_await_boxed_1673_; uint64_t v_extra_boxed_1674_; uint64_t v_res_1675_; lean_object* v_r_1676_; 
v_await_boxed_1673_ = lean_unbox(v_await_1671_);
v_extra_boxed_1674_ = lean_unbox_uint64(v_extra_1672_);
lean_dec_ref(v_extra_1672_);
v_res_1675_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v_await_boxed_1673_, v_extra_boxed_1674_);
v_r_1676_ = lean_box_uint64(v_res_1675_);
return v_r_1676_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1677_; uint8_t v___x_1678_; uint64_t v___x_1679_; 
v___x_1677_ = 8ULL;
v___x_1678_ = 0;
v___x_1679_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v___x_1678_, v___x_1677_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(lean_object* v_o_1681_, lean_object* v_name_1682_, lean_object* v_args_1683_){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; uint64_t v___x_1688_; lean_object* v___x_1689_; 
v___x_1685_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1686_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1686_, 0, v_o_1681_);
lean_ctor_set(v___x_1686_, 1, v___x_1685_);
lean_inc_ref(v_name_1682_);
v___x_1687_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1687_, 0, v_name_1682_);
v___x_1688_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0);
v___x_1689_ = l_Lasm_JS_Value_invokeRaw(v___x_1686_, v___x_1687_, v_args_1683_, v___x_1688_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1689_, 1);
v___x_1691_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_1692_ = lean_string_append(v___x_1691_, v_name_1682_);
lean_dec_ref(v_name_1682_);
v___x_1693_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_1692_, v_a_1690_);
lean_dec(v_a_1690_);
lean_dec_ref(v___x_1692_);
return v___x_1693_;
}
else
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
lean_dec_ref(v_name_1682_);
v_a_1694_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1689_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1689_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
return v___x_1699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___boxed(lean_object* v_o_1702_, lean_object* v_name_1703_, lean_object* v_args_1704_, lean_object* v_a_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_o_1702_, v_name_1703_, v_args_1704_);
return v_res_1706_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2(void){
_start:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1710_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__1));
v___x_1711_ = l_Lasm_JS_Web_Support_args(v___x_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections(lean_object* v_self_1712_){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; 
v___x_1714_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0));
v___x_1715_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_1716_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_self_1712_, v___x_1714_, v___x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___boxed(lean_object* v_self_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lasm_JS_Bun_Server_closeIdleConnections(v_self_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(lean_object* v_x_1720_){
_start:
{
if (lean_obj_tag(v_x_1720_) == 0)
{
lean_object* v___x_1721_; 
v___x_1721_ = lean_box(0);
return v___x_1721_;
}
else
{
lean_object* v_val_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v_val_1722_ = lean_ctor_get(v_x_1720_, 0);
v___x_1723_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_val_1722_);
v___x_1724_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1724_, 0, v_val_1722_);
lean_ctor_set(v___x_1724_, 1, v___x_1723_);
return v___x_1724_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0___boxed(lean_object* v_x_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_x_1725_);
lean_dec(v_x_1725_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(lean_object* v_x_1727_){
_start:
{
if (lean_obj_tag(v_x_1727_) == 0)
{
lean_object* v___x_1728_; 
v___x_1728_ = lean_box(0);
return v___x_1728_;
}
else
{
lean_object* v_val_1729_; 
v_val_1729_ = lean_ctor_get(v_x_1727_, 0);
lean_inc(v_val_1729_);
lean_dec_ref_known(v_x_1727_, 1);
if (lean_obj_tag(v_val_1729_) == 0)
{
lean_object* v_value_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
v_value_1730_ = lean_ctor_get(v_val_1729_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_val_1729_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1732_ = v_val_1729_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_value_1730_);
lean_dec(v_val_1729_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
lean_ctor_set_tag(v___x_1732_, 4);
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_value_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
else
{
lean_object* v_value_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1751_; 
v_value_1738_ = lean_ctor_get(v_val_1729_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v_val_1729_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1740_ = v_val_1729_;
v_isShared_1741_ = v_isSharedCheck_1751_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_value_1738_);
lean_dec(v_val_1729_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1751_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; uint8_t v___x_1745_; 
v___x_1742_ = lean_nat_to_int(v_value_1738_);
v___x_1743_ = lean_nat_abs(v___x_1742_);
v___x_1744_ = lean_cstr_to_nat("9007199254740991");
v___x_1745_ = lean_nat_dec_le(v___x_1743_, v___x_1744_);
lean_dec(v___x_1743_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1747_; 
if (v_isShared_1741_ == 0)
{
lean_ctor_set_tag(v___x_1740_, 5);
lean_ctor_set(v___x_1740_, 0, v___x_1742_);
v___x_1747_ = v___x_1740_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1742_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
else
{
double v___x_1749_; lean_object* v___x_1750_; 
lean_del_object(v___x_1740_);
v___x_1749_ = l_Float_ofInt(v___x_1742_);
lean_dec(v___x_1742_);
v___x_1750_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1750_, 0, v___x_1749_);
return v___x_1750_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload(lean_object* v_self_1753_, lean_object* v_options_1754_){
_start:
{
lean_object* v_maxRequestBodySize_1756_; lean_object* v_error_1757_; lean_object* v_id_1758_; lean_object* v_hostname_1759_; lean_object* v_port_1760_; lean_object* v_reusePort_1761_; lean_object* v_ipv6Only_1762_; lean_object* v_idleTimeout_1763_; lean_object* v_fetch_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v_maxRequestBodySize_1756_ = lean_ctor_get(v_options_1754_, 0);
lean_inc(v_maxRequestBodySize_1756_);
v_error_1757_ = lean_ctor_get(v_options_1754_, 1);
lean_inc(v_error_1757_);
v_id_1758_ = lean_ctor_get(v_options_1754_, 2);
lean_inc(v_id_1758_);
v_hostname_1759_ = lean_ctor_get(v_options_1754_, 3);
lean_inc(v_hostname_1759_);
v_port_1760_ = lean_ctor_get(v_options_1754_, 4);
lean_inc(v_port_1760_);
v_reusePort_1761_ = lean_ctor_get(v_options_1754_, 5);
lean_inc(v_reusePort_1761_);
v_ipv6Only_1762_ = lean_ctor_get(v_options_1754_, 6);
lean_inc(v_ipv6Only_1762_);
v_idleTimeout_1763_ = lean_ctor_get(v_options_1754_, 7);
lean_inc(v_idleTimeout_1763_);
v_fetch_1764_ = lean_ctor_get(v_options_1754_, 8);
lean_inc(v_fetch_1764_);
lean_dec_ref(v_options_1754_);
v___x_1765_ = ((lean_object*)(l_Lasm_JS_Bun_Server_reload___closed__0));
v___x_1766_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_1767_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_1756_);
v___x_1768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
lean_ctor_set(v___x_1768_, 1, v___x_1767_);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_1770_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_1757_);
lean_dec(v_error_1757_);
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1769_);
lean_ctor_set(v___x_1771_, 1, v___x_1770_);
v___x_1772_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_1758_);
v___x_1774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1774_, 0, v___x_1772_);
lean_ctor_set(v___x_1774_, 1, v___x_1773_);
v___x_1775_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1776_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1759_);
v___x_1777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1775_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
v___x_1778_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1779_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_1760_);
v___x_1780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_1782_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1761_);
lean_dec(v_reusePort_1761_);
v___x_1783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1781_);
lean_ctor_set(v___x_1783_, 1, v___x_1782_);
v___x_1784_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_1785_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_1762_);
lean_dec(v_ipv6Only_1762_);
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1784_);
lean_ctor_set(v___x_1786_, 1, v___x_1785_);
v___x_1787_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_1788_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_1763_);
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1787_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_1791_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1792_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1792_, 0, v_fetch_1764_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1790_);
lean_ctor_set(v___x_1793_, 1, v___x_1792_);
v___x_1794_ = lean_unsigned_to_nat(9u);
v___x_1795_ = lean_mk_empty_array_with_capacity(v___x_1794_);
v___x_1796_ = lean_array_push(v___x_1795_, v___x_1768_);
v___x_1797_ = lean_array_push(v___x_1796_, v___x_1771_);
v___x_1798_ = lean_array_push(v___x_1797_, v___x_1774_);
v___x_1799_ = lean_array_push(v___x_1798_, v___x_1777_);
v___x_1800_ = lean_array_push(v___x_1799_, v___x_1780_);
v___x_1801_ = lean_array_push(v___x_1800_, v___x_1783_);
v___x_1802_ = lean_array_push(v___x_1801_, v___x_1786_);
v___x_1803_ = lean_array_push(v___x_1802_, v___x_1789_);
v___x_1804_ = lean_array_push(v___x_1803_, v___x_1793_);
v___x_1805_ = l_Lasm_JS_Web_Support_fields(v___x_1804_);
lean_dec_ref(v___x_1804_);
v___x_1806_ = lean_unsigned_to_nat(1u);
v___x_1807_ = lean_mk_empty_array_with_capacity(v___x_1806_);
v___x_1808_ = lean_array_push(v___x_1807_, v___x_1805_);
v___x_1809_ = l_Lasm_JS_Web_Support_args(v___x_1808_);
v___x_1810_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1753_, v___x_1765_, v___x_1809_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v___x_1810_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
else
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1826_; 
v_a_1819_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1821_ = v___x_1810_;
v_isShared_1822_ = v_isSharedCheck_1826_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1810_);
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
v_reuseFailAlloc_1825_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload___boxed(lean_object* v_self_1827_, lean_object* v_options_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lasm_JS_Bun_Server_reload(v_self_1827_, v_options_1828_);
return v_res_1830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0(lean_object* v_x_1831_){
_start:
{
if (lean_obj_tag(v_x_1831_) == 0)
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1841_; 
v_a_1833_ = lean_ctor_get(v_x_1831_, 0);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_x_1831_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1835_ = v_x_1831_;
v_isShared_1836_ = v_isSharedCheck_1841_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v_x_1831_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1841_;
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
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
lean_object* v___x_1839_; 
v___x_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
return v___x_1839_;
}
}
}
else
{
lean_object* v_a_1842_; lean_object* v___x_1844_; uint8_t v_isShared_1845_; uint8_t v_isSharedCheck_1850_; 
v_a_1842_ = lean_ctor_get(v_x_1831_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v_x_1831_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1844_ = v_x_1831_;
v_isShared_1845_ = v_isSharedCheck_1850_;
goto v_resetjp_1843_;
}
else
{
lean_inc(v_a_1842_);
lean_dec(v_x_1831_);
v___x_1844_ = lean_box(0);
v_isShared_1845_ = v_isSharedCheck_1850_;
goto v_resetjp_1843_;
}
v_resetjp_1843_:
{
lean_object* v___x_1847_; 
if (v_isShared_1845_ == 0)
{
v___x_1847_ = v___x_1844_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1842_);
v___x_1847_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
lean_object* v___x_1848_; 
v___x_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1847_);
return v___x_1848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0___boxed(lean_object* v_x_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lasm_JS_Bun_Server_fetch___lam__0(v_x_1851_);
return v_res_1853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch(lean_object* v_self_1855_, lean_object* v_request_1856_){
_start:
{
lean_object* v___f_1858_; lean_object* v___x_1859_; lean_object* v___y_1861_; 
v___f_1858_ = ((lean_object*)(l_Lasm_JS_Bun_Server_fetch___closed__0));
v___x_1859_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
if (lean_obj_tag(v_request_1856_) == 0)
{
lean_object* v_value_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v_value_1870_ = lean_ctor_get(v_request_1856_, 0);
lean_inc(v_value_1870_);
lean_dec_ref_known(v_request_1856_, 1);
v___x_1871_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1872_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1872_, 0, v_value_1870_);
lean_ctor_set(v___x_1872_, 1, v___x_1871_);
v___y_1861_ = v___x_1872_;
goto v___jp_1860_;
}
else
{
lean_object* v_value_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
v_value_1873_ = lean_ctor_get(v_request_1856_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v_request_1856_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v_request_1856_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_value_1873_);
lean_dec(v_request_1856_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
lean_ctor_set_tag(v___x_1875_, 4);
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_value_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
v___y_1861_ = v___x_1878_;
goto v___jp_1860_;
}
}
}
v___jp_1860_:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; uint8_t v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1862_ = lean_unsigned_to_nat(1u);
v___x_1863_ = lean_mk_empty_array_with_capacity(v___x_1862_);
v___x_1864_ = lean_array_push(v___x_1863_, v___y_1861_);
v___x_1865_ = l_Lasm_JS_Web_Support_args(v___x_1864_);
v___x_1866_ = lean_unsigned_to_nat(0u);
v___x_1867_ = 0;
v___x_1868_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1855_, v___x_1859_, v___x_1865_);
v___x_1869_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1866_, v___x_1867_, v___x_1868_, v___f_1858_);
return v___x_1869_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___boxed(lean_object* v_self_1881_, lean_object* v_request_1882_, lean_object* v_a_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lasm_JS_Bun_Server_fetch(v_self_1881_, v_request_1882_);
return v_res_1884_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(uint8_t v_await_1885_, uint64_t v_extra_1886_){
_start:
{
uint64_t v___x_1887_; uint64_t v___y_1889_; 
v___x_1887_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1885_ == 0)
{
uint64_t v___x_1892_; 
v___x_1892_ = 0ULL;
v___y_1889_ = v___x_1892_;
goto v___jp_1888_;
}
else
{
uint64_t v___x_1893_; 
v___x_1893_ = 2ULL;
v___y_1889_ = v___x_1893_;
goto v___jp_1888_;
}
v___jp_1888_:
{
uint64_t v___x_1890_; uint64_t v___x_1891_; 
v___x_1890_ = lean_uint64_lor(v___x_1887_, v___y_1889_);
v___x_1891_ = lean_uint64_lor(v___x_1890_, v_extra_1886_);
return v___x_1891_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0___boxed(lean_object* v_await_1894_, lean_object* v_extra_1895_){
_start:
{
uint8_t v_await_boxed_1896_; uint64_t v_extra_boxed_1897_; uint64_t v_res_1898_; lean_object* v_r_1899_; 
v_await_boxed_1896_ = lean_unbox(v_await_1894_);
v_extra_boxed_1897_ = lean_unbox_uint64(v_extra_1895_);
lean_dec_ref(v_extra_1895_);
v_res_1898_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v_await_boxed_1896_, v_extra_boxed_1897_);
v_r_1899_ = lean_box_uint64(v_res_1898_);
return v_r_1899_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1903_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0));
v___x_1904_ = lean_string_utf8_byte_size(v___x_1903_);
return v___x_1904_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4(void){
_start:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; uint8_t v___x_1907_; 
v___x_1905_ = lean_unsigned_to_nat(0u);
v___x_1906_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3);
v___x_1907_ = lean_nat_dec_eq(v___x_1906_, v___x_1905_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(lean_object* v_d_1911_, lean_object* v_key_1912_){
_start:
{
if (lean_obj_tag(v_d_1911_) == 8)
{
lean_object* v___x_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1944_; 
v___x_1913_ = l_Lasm_JS_Data_field(v_d_1911_, v_key_1912_);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_d_1911_);
if (v_isSharedCheck_1944_ == 0)
{
lean_object* v_unused_1945_; 
v_unused_1945_ = lean_ctor_get(v_d_1911_, 0);
lean_dec(v_unused_1945_);
v___x_1915_ = v_d_1911_;
v_isShared_1916_ = v_isSharedCheck_1944_;
goto v_resetjp_1914_;
}
else
{
lean_dec(v_d_1911_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1944_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
if (lean_obj_tag(v___x_1913_) == 4)
{
lean_object* v_s_1937_; lean_object* v___x_1938_; uint8_t v___x_1939_; 
v_s_1937_ = lean_ctor_get(v___x_1913_, 0);
lean_inc_ref(v_s_1937_);
v___x_1938_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0));
v___x_1939_ = lean_string_dec_eq(v_s_1937_, v___x_1938_);
if (v___x_1939_ == 0)
{
lean_object* v___x_1940_; uint8_t v___x_1941_; 
v___x_1940_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2));
v___x_1941_ = lean_string_dec_eq(v_s_1937_, v___x_1940_);
lean_dec_ref(v_s_1937_);
if (v___x_1941_ == 0)
{
goto v___jp_1917_;
}
else
{
lean_object* v___x_1942_; 
lean_dec_ref_known(v___x_1913_, 1);
lean_del_object(v___x_1915_);
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2));
return v___x_1942_;
}
}
else
{
lean_object* v___x_1943_; 
lean_dec_ref(v_s_1937_);
lean_dec_ref_known(v___x_1913_, 1);
lean_del_object(v___x_1915_);
v___x_1943_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3));
return v___x_1943_;
}
}
else
{
goto v___jp_1917_;
}
v___jp_1917_:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; uint8_t v___x_1928_; 
v___x_1918_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1919_ = lean_string_append(v___x_1918_, v_key_1912_);
v___x_1920_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1921_ = lean_string_append(v___x_1919_, v___x_1920_);
v___x_1922_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1));
v___x_1923_ = lean_string_append(v___x_1921_, v___x_1922_);
v___x_1924_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1925_ = lean_string_append(v___x_1923_, v___x_1924_);
v___x_1926_ = l_Lasm_JS_Data_describe(v___x_1913_);
v___x_1927_ = lean_string_append(v___x_1925_, v___x_1926_);
lean_dec_ref(v___x_1926_);
v___x_1928_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4);
if (v___x_1928_ == 0)
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1932_; 
v___x_1929_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___x_1930_ = lean_string_append(v___x_1927_, v___x_1929_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set_tag(v___x_1915_, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1930_);
v___x_1932_ = v___x_1915_;
goto v_reusejp_1931_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v___x_1930_);
v___x_1932_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1931_;
}
v_reusejp_1931_:
{
return v___x_1932_;
}
}
else
{
lean_object* v___x_1935_; 
if (v_isShared_1916_ == 0)
{
lean_ctor_set_tag(v___x_1915_, 0);
lean_ctor_set(v___x_1915_, 0, v___x_1927_);
v___x_1935_ = v___x_1915_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1927_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
else
{
lean_object* v___x_1946_; 
lean_dec(v_d_1911_);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__6));
return v___x_1946_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_d_1947_, lean_object* v_key_1948_){
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_1947_, v_key_1948_);
lean_dec_ref(v_key_1948_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_1953_, lean_object* v_key_1954_){
_start:
{
if (lean_obj_tag(v_d_1953_) == 8)
{
lean_object* v___x_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1998_; 
v___x_1955_ = l_Lasm_JS_Data_field(v_d_1953_, v_key_1954_);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_d_1953_);
if (v_isSharedCheck_1998_ == 0)
{
lean_object* v_unused_1999_; 
v_unused_1999_ = lean_ctor_get(v_d_1953_, 0);
lean_dec(v_unused_1999_);
v___x_1957_ = v_d_1953_;
v_isShared_1958_ = v_isSharedCheck_1998_;
goto v_resetjp_1956_;
}
else
{
lean_dec(v_d_1953_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1998_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v_a_1960_; lean_object* v_a_1986_; 
switch(lean_obj_tag(v___x_1955_))
{
case 3:
{
double v_n_1992_; lean_object* v___x_1993_; 
v_n_1992_ = lean_ctor_get_float(v___x_1955_, 0);
v___x_1993_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1992_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v___x_1994_; 
v___x_1994_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1960_ = v___x_1994_;
goto v___jp_1959_;
}
else
{
lean_object* v_val_1995_; 
v_val_1995_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_val_1995_);
lean_dec_ref_known(v___x_1993_, 1);
v_a_1986_ = v_val_1995_;
goto v___jp_1985_;
}
}
case 5:
{
lean_object* v_i_1996_; 
v_i_1996_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_i_1996_);
v_a_1986_ = v_i_1996_;
goto v___jp_1985_;
}
default: 
{
lean_object* v___x_1997_; 
v___x_1997_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1960_ = v___x_1997_;
goto v___jp_1959_;
}
}
v___jp_1959_:
{
lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1961_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1962_ = lean_string_append(v___x_1961_, v_key_1954_);
v___x_1963_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1964_ = lean_string_append(v___x_1962_, v___x_1963_);
v___x_1965_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0));
v___x_1966_ = lean_string_append(v___x_1964_, v___x_1965_);
v___x_1967_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1968_ = lean_string_append(v___x_1966_, v___x_1967_);
v___x_1969_ = l_Lasm_JS_Data_describe(v___x_1955_);
v___x_1970_ = lean_string_append(v___x_1968_, v___x_1969_);
lean_dec_ref(v___x_1969_);
v___x_1971_ = lean_string_utf8_byte_size(v_a_1960_);
v___x_1972_ = lean_unsigned_to_nat(0u);
v___x_1973_ = lean_nat_dec_eq(v___x_1971_, v___x_1972_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1980_; 
v___x_1974_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1975_ = lean_string_append(v___x_1974_, v_a_1960_);
v___x_1976_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1977_ = lean_string_append(v___x_1975_, v___x_1976_);
v___x_1978_ = lean_string_append(v___x_1970_, v___x_1977_);
lean_dec_ref(v___x_1977_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1978_);
v___x_1980_ = v___x_1957_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v___x_1978_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
else
{
lean_object* v___x_1983_; 
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 0);
lean_ctor_set(v___x_1957_, 0, v___x_1970_);
v___x_1983_ = v___x_1957_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v___x_1970_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
v___jp_1985_:
{
lean_object* v___x_1987_; uint8_t v___x_1988_; 
v___x_1987_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1988_ = lean_int_dec_le(v___x_1987_, v_a_1986_);
if (v___x_1988_ == 0)
{
lean_object* v___x_1989_; 
lean_dec(v_a_1986_);
v___x_1989_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1960_ = v___x_1989_;
goto v___jp_1959_;
}
else
{
lean_object* v___x_1990_; lean_object* v___x_1991_; 
lean_del_object(v___x_1957_);
lean_dec(v___x_1955_);
v___x_1990_ = l_Int_toNat(v_a_1986_);
lean_dec(v_a_1986_);
v___x_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1991_, 0, v___x_1990_);
return v___x_1991_;
}
}
}
}
else
{
lean_object* v___x_2000_; 
lean_dec(v_d_1953_);
v___x_2000_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1));
return v___x_2000_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_2001_, lean_object* v_key_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_2001_, v_key_2002_);
lean_dec_ref(v_key_2002_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2007_, lean_object* v_key_2008_){
_start:
{
if (lean_obj_tag(v_d_2007_) == 8)
{
lean_object* v___x_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2040_; 
v___x_2009_ = l_Lasm_JS_Data_field(v_d_2007_, v_key_2008_);
v_isSharedCheck_2040_ = !lean_is_exclusive(v_d_2007_);
if (v_isSharedCheck_2040_ == 0)
{
lean_object* v_unused_2041_; 
v_unused_2041_ = lean_ctor_get(v_d_2007_, 0);
lean_dec(v_unused_2041_);
v___x_2011_ = v_d_2007_;
v_isShared_2012_ = v_isSharedCheck_2040_;
goto v_resetjp_2010_;
}
else
{
lean_dec(v_d_2007_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2040_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
if (lean_obj_tag(v___x_2009_) == 4)
{
lean_object* v_s_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
lean_del_object(v___x_2011_);
v_s_2013_ = lean_ctor_get(v___x_2009_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2009_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2015_ = v___x_2009_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_s_2013_);
lean_dec(v___x_2009_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 1);
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_s_2013_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
else
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; uint8_t v___x_2031_; 
v___x_2021_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_2022_ = lean_string_append(v___x_2021_, v_key_2008_);
v___x_2023_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_2024_ = lean_string_append(v___x_2022_, v___x_2023_);
v___x_2025_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2026_ = lean_string_append(v___x_2024_, v___x_2025_);
v___x_2027_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_2028_ = lean_string_append(v___x_2026_, v___x_2027_);
v___x_2029_ = l_Lasm_JS_Data_describe(v___x_2009_);
v___x_2030_ = lean_string_append(v___x_2028_, v___x_2029_);
lean_dec_ref(v___x_2029_);
v___x_2031_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4);
if (v___x_2031_ == 0)
{
lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2035_; 
v___x_2032_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5));
v___x_2033_ = lean_string_append(v___x_2030_, v___x_2032_);
if (v_isShared_2012_ == 0)
{
lean_ctor_set_tag(v___x_2011_, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2033_);
v___x_2035_ = v___x_2011_;
goto v_reusejp_2034_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2033_);
v___x_2035_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2034_;
}
v_reusejp_2034_:
{
return v___x_2035_;
}
}
else
{
lean_object* v___x_2038_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set_tag(v___x_2011_, 0);
lean_ctor_set(v___x_2011_, 0, v___x_2030_);
v___x_2038_ = v___x_2011_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v___x_2030_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
}
else
{
lean_object* v___x_2042_; 
lean_dec(v_d_2007_);
v___x_2042_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_2042_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2043_, lean_object* v_key_2044_){
_start:
{
lean_object* v_res_2045_; 
v_res_2045_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_2043_, v_key_2044_);
lean_dec_ref(v_key_2044_);
return v_res_2045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(lean_object* v_context_2047_, lean_object* v_d_2048_){
_start:
{
lean_object* v___y_2054_; lean_object* v___y_2055_; lean_object* v___y_2060_; lean_object* v_received_2061_; lean_object* v___y_2080_; lean_object* v_a_2083_; 
switch(lean_obj_tag(v_d_2048_))
{
case 1:
{
goto v___jp_2050_;
}
case 0:
{
goto v___jp_2050_;
}
default: 
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
lean_inc(v_d_2048_);
v___x_2108_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_2048_, v___x_2107_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
v_a_2083_ = v_a_2109_;
goto v___jp_2082_;
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; 
v_a_2110_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2110_);
lean_dec_ref_known(v___x_2108_, 1);
v___x_2111_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
lean_inc(v_d_2048_);
v___x_2112_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_2048_, v___x_2111_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; 
lean_dec(v_a_2110_);
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v_a_2083_ = v_a_2113_;
goto v___jp_2082_;
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2134_; 
v_a_2114_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2134_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2134_ == 0)
{
v___x_2116_ = v___x_2112_;
v_isShared_2117_ = v_isSharedCheck_2134_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2112_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2134_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2118_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
lean_inc(v_d_2048_);
v___x_2119_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_2048_, v___x_2118_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_object* v_a_2120_; 
lean_del_object(v___x_2116_);
lean_dec(v_a_2114_);
lean_dec(v_a_2110_);
v_a_2120_ = lean_ctor_get(v___x_2119_, 0);
lean_inc(v_a_2120_);
lean_dec_ref_known(v___x_2119_, 1);
v_a_2083_ = v_a_2120_;
goto v___jp_2082_;
}
else
{
lean_object* v_a_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2133_; 
lean_dec(v_d_2048_);
v_a_2121_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2123_ = v___x_2119_;
v_isShared_2124_ = v_isSharedCheck_2133_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_a_2121_);
lean_dec(v___x_2119_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2133_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; uint8_t v___x_2126_; lean_object* v___x_2128_; 
v___x_2125_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2125_, 0, v_a_2110_);
lean_ctor_set(v___x_2125_, 1, v_a_2114_);
v___x_2126_ = lean_unbox(v_a_2121_);
lean_dec(v_a_2121_);
lean_ctor_set_uint8(v___x_2125_, sizeof(void*)*2, v___x_2126_);
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 0, v___x_2125_);
v___x_2128_ = v___x_2123_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v___x_2125_);
v___x_2128_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
lean_object* v___x_2130_; 
if (v_isShared_2117_ == 0)
{
lean_ctor_set_tag(v___x_2116_, 0);
lean_ctor_set(v___x_2116_, 0, v___x_2128_);
v___x_2130_ = v___x_2116_;
goto v_reusejp_2129_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2128_);
v___x_2130_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2129_;
}
v_reusejp_2129_:
{
return v___x_2130_;
}
}
}
}
}
}
}
}
}
v___jp_2050_:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lean_box(0);
v___x_2052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
return v___x_2052_;
}
v___jp_2053_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; 
v___x_2056_ = lean_string_append(v___y_2054_, v___y_2055_);
lean_dec_ref(v___y_2055_);
v___x_2057_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2057_, 0, v___x_2056_);
v___x_2058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2058_, 0, v___x_2057_);
return v___x_2058_;
}
v___jp_2059_:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; uint8_t v___x_2073_; 
v___x_2062_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_2063_ = lean_string_append(v___x_2062_, v_context_2047_);
v___x_2064_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_2065_ = lean_string_append(v___x_2063_, v___x_2064_);
v___x_2066_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0));
v___x_2067_ = lean_string_append(v___x_2065_, v___x_2066_);
v___x_2068_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_2069_ = lean_string_append(v___x_2067_, v___x_2068_);
v___x_2070_ = lean_string_append(v___x_2069_, v_received_2061_);
lean_dec_ref(v_received_2061_);
v___x_2071_ = lean_string_utf8_byte_size(v___y_2060_);
v___x_2072_ = lean_unsigned_to_nat(0u);
v___x_2073_ = lean_nat_dec_eq(v___x_2071_, v___x_2072_);
if (v___x_2073_ == 0)
{
lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2074_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_2075_ = lean_string_append(v___x_2074_, v___y_2060_);
lean_dec_ref(v___y_2060_);
v___x_2076_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_2077_ = lean_string_append(v___x_2075_, v___x_2076_);
v___y_2054_ = v___x_2070_;
v___y_2055_ = v___x_2077_;
goto v___jp_2053_;
}
else
{
lean_object* v___x_2078_; 
lean_dec_ref(v___y_2060_);
v___x_2078_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_2054_ = v___x_2070_;
v___y_2055_ = v___x_2078_;
goto v___jp_2053_;
}
}
v___jp_2079_:
{
lean_object* v___x_2081_; 
v___x_2081_ = l_Lasm_JS_Data_describe(v_d_2048_);
v___y_2060_ = v___y_2080_;
v_received_2061_ = v___x_2081_;
goto v___jp_2059_;
}
v___jp_2082_:
{
if (lean_obj_tag(v_d_2048_) == 9)
{
lean_object* v_value_2084_; lean_object* v_description_2085_; lean_object* v___x_2086_; uint8_t v___x_2087_; 
v_value_2084_ = lean_ctor_get(v_d_2048_, 0);
v_description_2085_ = lean_ctor_get(v_d_2048_, 1);
v___x_2086_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2087_ = lean_string_dec_eq(v_description_2085_, v___x_2086_);
if (v___x_2087_ == 0)
{
v___y_2080_ = v_a_2083_;
goto v___jp_2079_;
}
else
{
lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2104_; 
lean_inc(v_value_2084_);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_d_2048_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; lean_object* v_unused_2106_; 
v_unused_2105_ = lean_ctor_get(v_d_2048_, 1);
lean_dec(v_unused_2105_);
v_unused_2106_ = lean_ctor_get(v_d_2048_, 0);
lean_dec(v_unused_2106_);
v___x_2089_ = v_d_2048_;
v_isShared_2090_ = v_isSharedCheck_2104_;
goto v_resetjp_2088_;
}
else
{
lean_dec(v_d_2048_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2104_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
uint32_t v___x_2091_; uint64_t v___x_2092_; lean_object* v___x_2094_; 
v___x_2091_ = 206;
v___x_2092_ = 0ULL;
lean_inc(v_value_2084_);
if (v_isShared_2090_ == 0)
{
lean_ctor_set(v___x_2089_, 1, v___x_2086_);
v___x_2094_ = v___x_2089_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v_value_2084_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v___x_2086_);
v___x_2094_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
uint32_t v___x_2095_; lean_object* v___x_2096_; 
v___x_2095_ = lasm_js_value_handle(v_value_2084_);
lean_dec(v_value_2084_);
v___x_2096_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2091_, v___x_2092_, v___x_2094_, v___x_2095_);
lean_dec_ref(v___x_2094_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; uint8_t v___x_2098_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
v___x_2098_ = lean_string_validate_utf8(v_a_2097_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
lean_dec(v_a_2097_);
v___x_2099_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_2100_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2099_);
v___y_2060_ = v_a_2083_;
v_received_2061_ = v___x_2100_;
goto v___jp_2059_;
}
else
{
lean_object* v___x_2101_; 
v___x_2101_ = lean_string_from_utf8_unchecked(v_a_2097_);
v___y_2060_ = v_a_2083_;
v_received_2061_ = v___x_2101_;
goto v___jp_2059_;
}
}
else
{
lean_object* v___x_2102_; 
lean_dec_ref_known(v___x_2096_, 1);
v___x_2102_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_2060_ = v_a_2083_;
v_received_2061_ = v___x_2102_;
goto v___jp_2059_;
}
}
}
}
}
else
{
v___y_2080_ = v_a_2083_;
goto v___jp_2079_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2135_, lean_object* v_d_2136_, lean_object* v_a_2137_){
_start:
{
lean_object* v_res_2138_; 
v_res_2138_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_2135_, v_d_2136_);
lean_dec_ref(v_context_2135_);
return v_res_2138_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(lean_object* v_context_2139_, lean_object* v_bytes_2140_){
_start:
{
lean_object* v___x_2142_; 
v___x_2142_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2140_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_object* v_a_2143_; lean_object* v___x_2144_; 
v_a_2143_ = lean_ctor_get(v___x_2142_, 0);
lean_inc(v_a_2143_);
lean_dec_ref_known(v___x_2142_, 1);
v___x_2144_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_2139_, v_a_2143_);
return v___x_2144_;
}
else
{
lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2152_; 
v_a_2145_ = lean_ctor_get(v___x_2142_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2147_ = v___x_2142_;
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2142_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2152_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2150_; 
if (v_isShared_2148_ == 0)
{
v___x_2150_ = v___x_2147_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_a_2145_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1___boxed(lean_object* v_context_2153_, lean_object* v_bytes_2154_, lean_object* v_a_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v_context_2153_, v_bytes_2154_);
lean_dec_ref(v_bytes_2154_);
lean_dec_ref(v_context_2153_);
return v_res_2156_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2157_; uint8_t v___x_2158_; uint64_t v___x_2159_; 
v___x_2157_ = 8ULL;
v___x_2158_ = 0;
v___x_2159_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v___x_2158_, v___x_2157_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(lean_object* v_o_2160_, lean_object* v_name_2161_, lean_object* v_args_2162_){
_start:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; uint64_t v___x_2167_; lean_object* v___x_2168_; 
v___x_2164_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2165_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2165_, 0, v_o_2160_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
lean_inc_ref(v_name_2161_);
v___x_2166_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2166_, 0, v_name_2161_);
v___x_2167_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0);
v___x_2168_ = l_Lasm_JS_Value_invokeRaw(v___x_2165_, v___x_2166_, v_args_2162_, v___x_2167_);
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
lean_inc(v_a_2169_);
lean_dec_ref_known(v___x_2168_, 1);
v___x_2170_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_2171_ = lean_string_append(v___x_2170_, v_name_2161_);
lean_dec_ref(v_name_2161_);
v___x_2172_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v___x_2171_, v_a_2169_);
lean_dec(v_a_2169_);
lean_dec_ref(v___x_2171_);
return v___x_2172_;
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec_ref(v_name_2161_);
v_a_2173_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2168_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2168_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
v___x_2178_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
return v___x_2178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___boxed(lean_object* v_o_2181_, lean_object* v_name_2182_, lean_object* v_args_2183_, lean_object* v_a_2184_){
_start:
{
lean_object* v_res_2185_; 
v_res_2185_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_o_2181_, v_name_2182_, v_args_2183_);
return v_res_2185_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP(lean_object* v_self_2187_, lean_object* v_request_2188_){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2190_ = ((lean_object*)(l_Lasm_JS_Bun_Server_requestIP___closed__0));
v___x_2191_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2192_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2192_, 0, v_request_2188_);
lean_ctor_set(v___x_2192_, 1, v___x_2191_);
v___x_2193_ = lean_unsigned_to_nat(1u);
v___x_2194_ = lean_mk_empty_array_with_capacity(v___x_2193_);
v___x_2195_ = lean_array_push(v___x_2194_, v___x_2192_);
v___x_2196_ = l_Lasm_JS_Web_Support_args(v___x_2195_);
v___x_2197_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_self_2187_, v___x_2190_, v___x_2196_);
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP___boxed(lean_object* v_self_2198_, lean_object* v_request_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lasm_JS_Bun_Server_requestIP(v_self_2198_, v_request_2199_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout(lean_object* v_self_2203_, lean_object* v_request_2204_, lean_object* v_seconds_2205_){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___y_2211_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; 
v___x_2207_ = ((lean_object*)(l_Lasm_JS_Bun_Server_timeout___closed__0));
v___x_2208_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2209_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2209_, 0, v_request_2204_);
lean_ctor_set(v___x_2209_, 1, v___x_2208_);
v___x_2218_ = lean_nat_to_int(v_seconds_2205_);
v___x_2219_ = lean_nat_abs(v___x_2218_);
v___x_2220_ = lean_cstr_to_nat("9007199254740991");
v___x_2221_ = lean_nat_dec_le(v___x_2219_, v___x_2220_);
lean_dec(v___x_2219_);
if (v___x_2221_ == 0)
{
lean_object* v___x_2222_; 
v___x_2222_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2218_);
v___y_2211_ = v___x_2222_;
goto v___jp_2210_;
}
else
{
double v___x_2223_; lean_object* v___x_2224_; 
v___x_2223_ = l_Float_ofInt(v___x_2218_);
lean_dec(v___x_2218_);
v___x_2224_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2224_, 0, v___x_2223_);
v___y_2211_ = v___x_2224_;
goto v___jp_2210_;
}
v___jp_2210_:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2212_ = lean_unsigned_to_nat(2u);
v___x_2213_ = lean_mk_empty_array_with_capacity(v___x_2212_);
v___x_2214_ = lean_array_push(v___x_2213_, v___x_2209_);
v___x_2215_ = lean_array_push(v___x_2214_, v___y_2211_);
v___x_2216_ = l_Lasm_JS_Web_Support_args(v___x_2215_);
v___x_2217_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2203_, v___x_2207_, v___x_2216_);
return v___x_2217_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout___boxed(lean_object* v_self_2225_, lean_object* v_request_2226_, lean_object* v_seconds_2227_, lean_object* v_a_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lasm_JS_Bun_Server_timeout(v_self_2225_, v_request_2226_, v_seconds_2227_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref(lean_object* v_self_2231_){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2233_ = ((lean_object*)(l_Lasm_JS_Bun_Server_ref___closed__0));
v___x_2234_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2235_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2231_, v___x_2233_, v___x_2234_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref___boxed(lean_object* v_self_2236_, lean_object* v_a_2237_){
_start:
{
lean_object* v_res_2238_; 
v_res_2238_ = l_Lasm_JS_Bun_Server_ref(v_self_2236_);
return v_res_2238_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref(lean_object* v_self_2240_){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2242_ = ((lean_object*)(l_Lasm_JS_Bun_Server_unref___closed__0));
v___x_2243_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2244_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2240_, v___x_2242_, v___x_2243_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref___boxed(lean_object* v_self_2245_, lean_object* v_a_2246_){
_start:
{
lean_object* v_res_2247_; 
v_res_2247_ = l_Lasm_JS_Bun_Server_unref(v_self_2245_);
return v_res_2247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve(lean_object* v_options_2257_){
_start:
{
lean_object* v_maxRequestBodySize_2259_; lean_object* v_error_2260_; lean_object* v_id_2261_; lean_object* v_hostname_2262_; lean_object* v_port_2263_; lean_object* v_reusePort_2264_; lean_object* v_ipv6Only_2265_; lean_object* v_idleTimeout_2266_; lean_object* v_fetch_2267_; uint8_t v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; 
v_maxRequestBodySize_2259_ = lean_ctor_get(v_options_2257_, 0);
lean_inc(v_maxRequestBodySize_2259_);
v_error_2260_ = lean_ctor_get(v_options_2257_, 1);
lean_inc(v_error_2260_);
v_id_2261_ = lean_ctor_get(v_options_2257_, 2);
lean_inc(v_id_2261_);
v_hostname_2262_ = lean_ctor_get(v_options_2257_, 3);
lean_inc(v_hostname_2262_);
v_port_2263_ = lean_ctor_get(v_options_2257_, 4);
lean_inc(v_port_2263_);
v_reusePort_2264_ = lean_ctor_get(v_options_2257_, 5);
lean_inc(v_reusePort_2264_);
v_ipv6Only_2265_ = lean_ctor_get(v_options_2257_, 6);
lean_inc(v_ipv6Only_2265_);
v_idleTimeout_2266_ = lean_ctor_get(v_options_2257_, 7);
lean_inc(v_idleTimeout_2266_);
v_fetch_2267_ = lean_ctor_get(v_options_2257_, 8);
lean_inc(v_fetch_2267_);
lean_dec_ref(v_options_2257_);
v___x_2268_ = 0;
v___x_2269_ = lean_unsigned_to_nat(1u);
v___x_2270_ = ((lean_object*)(l_Lasm_JS_Bun_serve___closed__3));
v___x_2271_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_2272_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_2259_);
v___x_2273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2271_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_2275_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_2260_);
lean_dec(v_error_2260_);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2274_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_2278_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_2261_);
v___x_2279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2279_, 0, v___x_2277_);
lean_ctor_set(v___x_2279_, 1, v___x_2278_);
v___x_2280_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_2281_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2262_);
v___x_2282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2282_, 0, v___x_2280_);
lean_ctor_set(v___x_2282_, 1, v___x_2281_);
v___x_2283_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_2284_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_2263_);
v___x_2285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2285_, 0, v___x_2283_);
lean_ctor_set(v___x_2285_, 1, v___x_2284_);
v___x_2286_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_2287_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2264_);
lean_dec(v_reusePort_2264_);
v___x_2288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2288_, 0, v___x_2286_);
lean_ctor_set(v___x_2288_, 1, v___x_2287_);
v___x_2289_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_2290_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_2265_);
lean_dec(v_ipv6Only_2265_);
v___x_2291_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2291_, 0, v___x_2289_);
lean_ctor_set(v___x_2291_, 1, v___x_2290_);
v___x_2292_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_2293_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_2266_);
v___x_2294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2294_, 0, v___x_2292_);
lean_ctor_set(v___x_2294_, 1, v___x_2293_);
v___x_2295_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_2296_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2297_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2297_, 0, v_fetch_2267_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
v___x_2298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2295_);
lean_ctor_set(v___x_2298_, 1, v___x_2297_);
v___x_2299_ = lean_unsigned_to_nat(9u);
v___x_2300_ = lean_mk_empty_array_with_capacity(v___x_2299_);
v___x_2301_ = lean_array_push(v___x_2300_, v___x_2273_);
v___x_2302_ = lean_array_push(v___x_2301_, v___x_2276_);
v___x_2303_ = lean_array_push(v___x_2302_, v___x_2279_);
v___x_2304_ = lean_array_push(v___x_2303_, v___x_2282_);
v___x_2305_ = lean_array_push(v___x_2304_, v___x_2285_);
v___x_2306_ = lean_array_push(v___x_2305_, v___x_2288_);
v___x_2307_ = lean_array_push(v___x_2306_, v___x_2291_);
v___x_2308_ = lean_array_push(v___x_2307_, v___x_2294_);
v___x_2309_ = lean_array_push(v___x_2308_, v___x_2298_);
v___x_2310_ = l_Lasm_JS_Web_Support_fields(v___x_2309_);
lean_dec_ref(v___x_2309_);
v___x_2311_ = lean_mk_empty_array_with_capacity(v___x_2269_);
v___x_2312_ = lean_array_push(v___x_2311_, v___x_2310_);
v___x_2313_ = l_Lasm_JS_Web_Support_args(v___x_2312_);
v___x_2314_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2270_, v___x_2313_, v___x_2268_);
if (lean_obj_tag(v___x_2314_) == 0)
{
lean_object* v_a_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2322_; 
v_a_2315_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2322_ == 0)
{
v___x_2317_ = v___x_2314_;
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_a_2315_);
lean_dec(v___x_2314_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2322_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v___x_2320_; 
if (v_isShared_2318_ == 0)
{
v___x_2320_ = v___x_2317_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2315_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
}
else
{
lean_object* v_a_2323_; lean_object* v___x_2325_; uint8_t v_isShared_2326_; uint8_t v_isSharedCheck_2330_; 
v_a_2323_ = lean_ctor_get(v___x_2314_, 0);
v_isSharedCheck_2330_ = !lean_is_exclusive(v___x_2314_);
if (v_isSharedCheck_2330_ == 0)
{
v___x_2325_ = v___x_2314_;
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
else
{
lean_inc(v_a_2323_);
lean_dec(v___x_2314_);
v___x_2325_ = lean_box(0);
v_isShared_2326_ = v_isSharedCheck_2330_;
goto v_resetjp_2324_;
}
v_resetjp_2324_:
{
lean_object* v___x_2328_; 
if (v_isShared_2326_ == 0)
{
v___x_2328_ = v___x_2325_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_a_2323_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve___boxed(lean_object* v_options_2331_, lean_object* v_a_2332_){
_start:
{
lean_object* v_res_2333_; 
v_res_2333_ = l_Lasm_JS_Bun_serve(v_options_2331_);
return v_res_2333_;
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
