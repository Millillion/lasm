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
lean_object* lean_obj_tag_nat(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx___impl(uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___impl___boxed(lean_object*);
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
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_value)}};
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx___impl(uint8_t v_x_22_){
_start:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_23_ = lean_box(v_x_22_);
v___x_24_ = lean_obj_tag_nat(v___x_23_);
lean_dec(v___x_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx___impl___boxed(lean_object* v_x_25_){
_start:
{
uint8_t v_x_4__boxed_26_; lean_object* v_res_27_; 
v_x_4__boxed_26_ = lean_unbox(v_x_25_);
v_res_27_ = l_Lasm_JS_Bun_SocketAddressFamily_ctorIdx___impl(v_x_4__boxed_26_);
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
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; 
v___x_71_ = lean_box(v_x_69_);
v___x_72_ = lean_obj_tag_nat(v___x_71_);
lean_dec(v___x_71_);
v___x_73_ = lean_box(v_y_70_);
v___x_74_ = lean_obj_tag_nat(v___x_73_);
lean_dec(v___x_73_);
v___x_75_ = lean_nat_dec_eq(v___x_72_, v___x_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq___boxed(lean_object* v_x_76_, lean_object* v_y_77_){
_start:
{
uint8_t v_x_24__boxed_78_; uint8_t v_y_25__boxed_79_; uint8_t v_res_80_; lean_object* v_r_81_; 
v_x_24__boxed_78_ = lean_unbox(v_x_76_);
v_y_25__boxed_79_ = lean_unbox(v_y_77_);
v_res_80_ = l_Lasm_JS_Bun_instBEqSocketAddressFamily_beq(v_x_24__boxed_78_, v_y_25__boxed_79_);
v_r_81_ = lean_box(v_res_80_);
return v_r_81_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; 
v___x_90_ = lean_unsigned_to_nat(2u);
v___x_91_ = lean_nat_to_int(v___x_90_);
return v___x_91_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_unsigned_to_nat(1u);
v___x_93_ = lean_nat_to_int(v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(uint8_t v_x_94_, lean_object* v_prec_95_){
_start:
{
lean_object* v___y_97_; lean_object* v___y_104_; 
if (v_x_94_ == 0)
{
lean_object* v___x_110_; uint8_t v___x_111_; 
v___x_110_ = lean_unsigned_to_nat(1024u);
v___x_111_ = lean_nat_dec_le(v___x_110_, v_prec_95_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; 
v___x_112_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_97_ = v___x_112_;
goto v___jp_96_;
}
else
{
lean_object* v___x_113_; 
v___x_113_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_97_ = v___x_113_;
goto v___jp_96_;
}
}
else
{
lean_object* v___x_114_; uint8_t v___x_115_; 
v___x_114_ = lean_unsigned_to_nat(1024u);
v___x_115_ = lean_nat_dec_le(v___x_114_, v_prec_95_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; 
v___x_116_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_104_ = v___x_116_;
goto v___jp_103_;
}
else
{
lean_object* v___x_117_; 
v___x_117_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_104_ = v___x_117_;
goto v___jp_103_;
}
}
v___jp_96_:
{
lean_object* v___x_98_; lean_object* v___x_99_; uint8_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_98_ = ((lean_object*)(l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__1));
lean_inc(v___y_97_);
v___x_99_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_99_, 0, v___y_97_);
lean_ctor_set(v___x_99_, 1, v___x_98_);
v___x_100_ = 0;
v___x_101_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_101_, 0, v___x_99_);
lean_ctor_set_uint8(v___x_101_, sizeof(void*)*1, v___x_100_);
v___x_102_ = l_Repr_addAppParen(v___x_101_, v_prec_95_);
return v___x_102_;
}
v___jp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_105_ = ((lean_object*)(l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__3));
lean_inc(v___y_104_);
v___x_106_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_106_, 0, v___y_104_);
lean_ctor_set(v___x_106_, 1, v___x_105_);
v___x_107_ = 0;
v___x_108_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1, v___x_107_);
v___x_109_ = l_Repr_addAppParen(v___x_108_, v_prec_95_);
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___boxed(lean_object* v_x_118_, lean_object* v_prec_119_){
_start:
{
uint8_t v_x_117__boxed_120_; lean_object* v_res_121_; 
v_x_117__boxed_120_ = lean_unbox(v_x_118_);
v_res_121_ = l_Lasm_JS_Bun_instReprSocketAddressFamily_repr(v_x_117__boxed_120_, v_prec_119_);
lean_dec(v_prec_119_);
return v_res_121_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedSocketAddressFamily_default(void){
_start:
{
uint8_t v___x_124_; 
v___x_124_ = 0;
return v___x_124_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedSocketAddressFamily(void){
_start:
{
uint8_t v___x_125_; 
v___x_125_ = 0;
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0(uint8_t v_x_132_){
_start:
{
if (v_x_132_ == 0)
{
lean_object* v___x_133_; 
v___x_133_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__1));
return v___x_133_;
}
else
{
lean_object* v___x_134_; 
v___x_134_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__3));
return v___x_134_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___boxed(lean_object* v_x_135_){
_start:
{
uint8_t v_x_40__boxed_136_; lean_object* v_res_137_; 
v_x_40__boxed_136_ = lean_unbox(v_x_135_);
v_res_137_ = l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0(v_x_40__boxed_136_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0(lean_object* v_x_149_){
_start:
{
if (lean_obj_tag(v_x_149_) == 4)
{
lean_object* v_s_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v_s_152_ = lean_ctor_get(v_x_149_, 0);
v___x_153_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0));
v___x_154_ = lean_string_dec_eq(v_s_152_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; uint8_t v___x_156_; 
v___x_155_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2));
v___x_156_ = lean_string_dec_eq(v_s_152_, v___x_155_);
if (v___x_156_ == 0)
{
goto v___jp_150_;
}
else
{
lean_object* v___x_157_; 
v___x_157_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2));
return v___x_157_;
}
}
else
{
lean_object* v___x_158_; 
v___x_158_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3));
return v___x_158_;
}
}
else
{
goto v___jp_150_;
}
v___jp_150_:
{
lean_object* v___x_151_; 
v___x_151_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__1));
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___boxed(lean_object* v_x_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0(v_x_159_);
lean_dec(v_x_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx___impl(uint8_t v_x_168_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_box(v_x_168_);
v___x_170_ = lean_obj_tag_nat(v___x_169_);
lean_dec(v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorIdx___impl___boxed(lean_object* v_x_171_){
_start:
{
uint8_t v_x_4__boxed_172_; lean_object* v_res_173_; 
v_x_4__boxed_172_ = lean_unbox(v_x_171_);
v_res_173_ = l_Lasm_JS_Bun_ServerProtocol_ctorIdx___impl(v_x_4__boxed_172_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg(lean_object* v_k_174_){
_start:
{
lean_inc(v_k_174_);
return v_k_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg___boxed(lean_object* v_k_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lasm_JS_Bun_ServerProtocol_ctorElim___redArg(v_k_175_);
lean_dec(v_k_175_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim(lean_object* v_motive_177_, lean_object* v_ctorIdx_178_, uint8_t v_t_179_, lean_object* v_h_180_, lean_object* v_k_181_){
_start:
{
lean_inc(v_k_181_);
return v_k_181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_ctorElim___boxed(lean_object* v_motive_182_, lean_object* v_ctorIdx_183_, lean_object* v_t_184_, lean_object* v_h_185_, lean_object* v_k_186_){
_start:
{
uint8_t v_t_boxed_187_; lean_object* v_res_188_; 
v_t_boxed_187_ = lean_unbox(v_t_184_);
v_res_188_ = l_Lasm_JS_Bun_ServerProtocol_ctorElim(v_motive_182_, v_ctorIdx_183_, v_t_boxed_187_, v_h_185_, v_k_186_);
lean_dec(v_k_186_);
lean_dec(v_ctorIdx_183_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg(lean_object* v_http_189_){
_start:
{
lean_inc(v_http_189_);
return v_http_189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg___boxed(lean_object* v_http_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lasm_JS_Bun_ServerProtocol_http_elim___redArg(v_http_190_);
lean_dec(v_http_190_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim(lean_object* v_motive_192_, uint8_t v_t_193_, lean_object* v_h_194_, lean_object* v_http_195_){
_start:
{
lean_inc(v_http_195_);
return v_http_195_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_http_elim___boxed(lean_object* v_motive_196_, lean_object* v_t_197_, lean_object* v_h_198_, lean_object* v_http_199_){
_start:
{
uint8_t v_t_boxed_200_; lean_object* v_res_201_; 
v_t_boxed_200_ = lean_unbox(v_t_197_);
v_res_201_ = l_Lasm_JS_Bun_ServerProtocol_http_elim(v_motive_196_, v_t_boxed_200_, v_h_198_, v_http_199_);
lean_dec(v_http_199_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg(lean_object* v_https_202_){
_start:
{
lean_inc(v_https_202_);
return v_https_202_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg___boxed(lean_object* v_https_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lasm_JS_Bun_ServerProtocol_https_elim___redArg(v_https_203_);
lean_dec(v_https_203_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim(lean_object* v_motive_205_, uint8_t v_t_206_, lean_object* v_h_207_, lean_object* v_https_208_){
_start:
{
lean_inc(v_https_208_);
return v_https_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServerProtocol_https_elim___boxed(lean_object* v_motive_209_, lean_object* v_t_210_, lean_object* v_h_211_, lean_object* v_https_212_){
_start:
{
uint8_t v_t_boxed_213_; lean_object* v_res_214_; 
v_t_boxed_213_ = lean_unbox(v_t_210_);
v_res_214_ = l_Lasm_JS_Bun_ServerProtocol_https_elim(v_motive_209_, v_t_boxed_213_, v_h_211_, v_https_212_);
lean_dec(v_https_212_);
return v_res_214_;
}
}
LEAN_EXPORT uint8_t l_Lasm_JS_Bun_instBEqServerProtocol_beq(uint8_t v_x_215_, uint8_t v_y_216_){
_start:
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; uint8_t v___x_221_; 
v___x_217_ = lean_box(v_x_215_);
v___x_218_ = lean_obj_tag_nat(v___x_217_);
lean_dec(v___x_217_);
v___x_219_ = lean_box(v_y_216_);
v___x_220_ = lean_obj_tag_nat(v___x_219_);
lean_dec(v___x_219_);
v___x_221_ = lean_nat_dec_eq(v___x_218_, v___x_220_);
return v___x_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instBEqServerProtocol_beq___boxed(lean_object* v_x_222_, lean_object* v_y_223_){
_start:
{
uint8_t v_x_24__boxed_224_; uint8_t v_y_25__boxed_225_; uint8_t v_res_226_; lean_object* v_r_227_; 
v_x_24__boxed_224_ = lean_unbox(v_x_222_);
v_y_25__boxed_225_ = lean_unbox(v_y_223_);
v_res_226_ = l_Lasm_JS_Bun_instBEqServerProtocol_beq(v_x_24__boxed_224_, v_y_25__boxed_225_);
v_r_227_ = lean_box(v_res_226_);
return v_r_227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr(uint8_t v_x_236_, lean_object* v_prec_237_){
_start:
{
lean_object* v___y_239_; lean_object* v___y_246_; 
if (v_x_236_ == 0)
{
lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_252_ = lean_unsigned_to_nat(1024u);
v___x_253_ = lean_nat_dec_le(v___x_252_, v_prec_237_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; 
v___x_254_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_239_ = v___x_254_;
goto v___jp_238_;
}
else
{
lean_object* v___x_255_; 
v___x_255_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_239_ = v___x_255_;
goto v___jp_238_;
}
}
else
{
lean_object* v___x_256_; uint8_t v___x_257_; 
v___x_256_ = lean_unsigned_to_nat(1024u);
v___x_257_ = lean_nat_dec_le(v___x_256_, v_prec_237_);
if (v___x_257_ == 0)
{
lean_object* v___x_258_; 
v___x_258_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___y_246_ = v___x_258_;
goto v___jp_245_;
}
else
{
lean_object* v___x_259_; 
v___x_259_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___y_246_ = v___x_259_;
goto v___jp_245_;
}
}
v___jp_238_:
{
lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_240_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__1));
lean_inc(v___y_239_);
v___x_241_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_241_, 0, v___y_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = 0;
v___x_243_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set_uint8(v___x_243_, sizeof(void*)*1, v___x_242_);
v___x_244_ = l_Repr_addAppParen(v___x_243_, v_prec_237_);
return v___x_244_;
}
v___jp_245_:
{
lean_object* v___x_247_; lean_object* v___x_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_247_ = ((lean_object*)(l_Lasm_JS_Bun_instReprServerProtocol_repr___closed__3));
lean_inc(v___y_246_);
v___x_248_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_248_, 0, v___y_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = 0;
v___x_250_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set_uint8(v___x_250_, sizeof(void*)*1, v___x_249_);
v___x_251_ = l_Repr_addAppParen(v___x_250_, v_prec_237_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instReprServerProtocol_repr___boxed(lean_object* v_x_260_, lean_object* v_prec_261_){
_start:
{
uint8_t v_x_113__boxed_262_; lean_object* v_res_263_; 
v_x_113__boxed_262_ = lean_unbox(v_x_260_);
v_res_263_ = l_Lasm_JS_Bun_instReprServerProtocol_repr(v_x_113__boxed_262_, v_prec_261_);
lean_dec(v_prec_261_);
return v_res_263_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerProtocol_default(void){
_start:
{
uint8_t v___x_266_; 
v___x_266_ = 0;
return v___x_266_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_instInhabitedServerProtocol(void){
_start:
{
uint8_t v___x_267_; 
v___x_267_ = 0;
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0(uint8_t v_x_274_){
_start:
{
if (v_x_274_ == 0)
{
lean_object* v___x_275_; 
v___x_275_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__1));
return v___x_275_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__3));
return v___x_276_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___boxed(lean_object* v_x_277_){
_start:
{
uint8_t v_x_40__boxed_278_; lean_object* v_res_279_; 
v_x_40__boxed_278_ = lean_unbox(v_x_277_);
v_res_279_ = l_Lasm_JS_Bun_instToJSServerProtocol___lam__0(v_x_40__boxed_278_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0(lean_object* v_x_290_){
_start:
{
if (lean_obj_tag(v_x_290_) == 4)
{
lean_object* v_s_293_; lean_object* v___x_294_; uint8_t v___x_295_; 
v_s_293_ = lean_ctor_get(v_x_290_, 0);
v___x_294_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_295_ = lean_string_dec_eq(v_s_293_, v___x_294_);
if (v___x_295_ == 0)
{
lean_object* v___x_296_; uint8_t v___x_297_; 
v___x_296_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_297_ = lean_string_dec_eq(v_s_293_, v___x_296_);
if (v___x_297_ == 0)
{
goto v___jp_291_;
}
else
{
lean_object* v___x_298_; 
v___x_298_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__1));
return v___x_298_;
}
}
else
{
lean_object* v___x_299_; 
v___x_299_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__2));
return v___x_299_;
}
}
else
{
goto v___jp_291_;
}
v___jp_291_:
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___closed__0));
return v___x_292_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0___boxed(lean_object* v_x_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lasm_JS_Bun_instFromJSServerProtocol___lam__0(v_x_300_);
lean_dec(v_x_300_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(lean_object* v_x_316_){
_start:
{
if (lean_obj_tag(v_x_316_) == 0)
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_326_; 
v_a_318_ = lean_ctor_get(v_x_316_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v_x_316_);
if (v_isSharedCheck_326_ == 0)
{
v___x_320_ = v_x_316_;
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v_x_316_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_326_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_325_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; 
v___x_324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_324_, 0, v___x_323_);
return v___x_324_;
}
}
}
else
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_337_; 
v_a_327_ = lean_ctor_get(v_x_316_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v_x_316_);
if (v_isSharedCheck_337_ == 0)
{
v___x_329_ = v_x_316_;
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v_x_316_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_337_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_331_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_332_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_332_, 0, v_a_327_);
lean_ctor_set(v___x_332_, 1, v___x_331_);
if (v_isShared_330_ == 0)
{
lean_ctor_set(v___x_329_, 0, v___x_332_);
v___x_334_ = v___x_329_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_332_);
v___x_334_ = v_reuseFailAlloc_336_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
return v___x_335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0___boxed(lean_object* v_x_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__0(v_x_338_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(lean_object* v_f_341_, lean_object* v___f_342_, lean_object* v_x_343_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v___x_345_; 
lean_dec_ref(v___f_342_);
lean_dec_ref(v_f_341_);
v___x_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_345_, 0, v_x_343_);
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_347_; uint8_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_a_346_ = lean_ctor_get(v_x_343_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v_x_343_, 1);
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = 0;
v___x_349_ = lean_apply_2(v_f_341_, v_a_346_, lean_box(0));
v___x_350_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_347_, v___x_348_, v___x_349_, v___f_342_);
return v___x_350_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed(lean_object* v_f_351_, lean_object* v___f_352_, lean_object* v_x_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1(v_f_351_, v___f_352_, v_x_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(lean_object* v___f_356_, lean_object* v_args_357_){
_start:
{
lean_object* v___x_359_; uint8_t v___x_360_; lean_object* v_val_362_; lean_object* v___x_365_; lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_373_; 
v___x_359_ = lean_unsigned_to_nat(0u);
v___x_360_ = 0;
v___x_365_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_357_, v___x_359_);
v_a_366_ = lean_ctor_get(v___x_365_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_373_ == 0)
{
v___x_368_ = v___x_365_;
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v___x_365_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_373_;
goto v_resetjp_367_;
}
v___jp_361_:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v_val_362_);
v___x_364_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_359_, v___x_360_, v___x_363_, v___f_356_);
return v___x_364_;
}
v_resetjp_367_:
{
lean_object* v___x_371_; 
if (v_isShared_369_ == 0)
{
lean_ctor_set_tag(v___x_368_, 1);
v___x_371_ = v___x_368_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_a_366_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
v_val_362_ = v___x_371_;
goto v___jp_361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed(lean_object* v___f_374_, lean_object* v_args_375_, lean_object* v___y_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2(v___f_374_, v_args_375_);
lean_dec_ref(v_args_375_);
return v_res_377_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___x_386_ = lean_nat_abs(v___x_385_);
return v___x_386_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7(void){
_start:
{
lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_387_ = lean_cstr_to_nat("9007199254740991");
v___x_388_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__6);
v___x_389_ = lean_nat_dec_le(v___x_388_, v___x_387_);
return v___x_389_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_390_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___x_391_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
return v___x_391_;
}
}
static double _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9(void){
_start:
{
lean_object* v___x_392_; double v___x_393_; 
v___x_392_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__5);
v___x_393_ = l_Float_ofInt(v___x_392_);
return v___x_393_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10(void){
_start:
{
double v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_float_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__9);
v___x_395_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_395_, 0, v___x_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn(lean_object* v_f_396_){
_start:
{
lean_object* v___f_398_; lean_object* v___f_399_; lean_object* v___f_400_; lean_object* v___x_401_; 
v___f_398_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_399_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_399_, 0, v_f_396_);
lean_closure_set(v___f_399_, 1, v___f_398_);
v___f_400_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_400_, 0, v___f_399_);
v___x_401_ = l_Lasm_JS_Function_ofFn(v___f_400_);
if (lean_obj_tag(v___x_401_) == 0)
{
lean_object* v_a_402_; lean_object* v___x_403_; 
v_a_402_ = lean_ctor_get(v___x_401_, 0);
lean_inc(v_a_402_);
lean_dec_ref_known(v___x_401_, 1);
v___x_403_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v___x_405_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_406_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_404_, v___x_405_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___y_414_; uint8_t v___x_441_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref_known(v___x_406_, 1);
v___x_408_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_409_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_402_);
v___x_410_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_410_, 0, v_a_402_);
lean_ctor_set(v___x_410_, 1, v___x_409_);
v___x_411_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_412_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_441_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7);
if (v___x_441_ == 0)
{
lean_object* v___x_442_; 
v___x_442_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8);
v___y_414_ = v___x_442_;
goto v___jp_413_;
}
else
{
lean_object* v___x_443_; 
v___x_443_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10);
v___y_414_ = v___x_443_;
goto v___jp_413_;
}
v___jp_413_:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
lean_inc(v___y_414_);
v___x_415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_415_, 0, v___x_412_);
lean_ctor_set(v___x_415_, 1, v___y_414_);
v___x_416_ = lean_box(0);
v___x_417_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_415_);
lean_ctor_set(v___x_417_, 1, v___x_416_);
v___x_418_ = l_Lasm_JS_obj(v___x_417_);
v___x_419_ = lean_unsigned_to_nat(3u);
v___x_420_ = lean_mk_empty_array_with_capacity(v___x_419_);
v___x_421_ = lean_array_push(v___x_420_, v___x_410_);
v___x_422_ = lean_array_push(v___x_421_, v___x_411_);
v___x_423_ = lean_array_push(v___x_422_, v___x_418_);
v___x_424_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_407_, v___x_408_, v___x_423_);
if (lean_obj_tag(v___x_424_) == 0)
{
lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_431_; 
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_431_ == 0)
{
lean_object* v_unused_432_; 
v_unused_432_ = lean_ctor_get(v___x_424_, 0);
lean_dec(v_unused_432_);
v___x_426_ = v___x_424_;
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
else
{
lean_dec(v___x_424_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_431_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v___x_429_; 
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 0, v_a_402_);
v___x_429_ = v___x_426_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_a_402_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
else
{
lean_object* v_a_433_; lean_object* v___x_435_; uint8_t v_isShared_436_; uint8_t v_isSharedCheck_440_; 
lean_dec(v_a_402_);
v_a_433_ = lean_ctor_get(v___x_424_, 0);
v_isSharedCheck_440_ = !lean_is_exclusive(v___x_424_);
if (v_isSharedCheck_440_ == 0)
{
v___x_435_ = v___x_424_;
v_isShared_436_ = v_isSharedCheck_440_;
goto v_resetjp_434_;
}
else
{
lean_inc(v_a_433_);
lean_dec(v___x_424_);
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
v_reuseFailAlloc_439_ = lean_alloc_ctor(1, 1, 0);
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
}
}
else
{
lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
lean_dec(v_a_402_);
v_a_444_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_406_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_406_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
}
else
{
lean_object* v_a_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_459_; 
lean_dec(v_a_402_);
v_a_452_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_459_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_459_ == 0)
{
v___x_454_ = v___x_403_;
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_a_452_);
lean_dec(v___x_403_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_459_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_457_; 
if (v_isShared_455_ == 0)
{
v___x_457_ = v___x_454_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_a_452_);
v___x_457_ = v_reuseFailAlloc_458_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
return v___x_457_;
}
}
}
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v_a_460_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_401_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_401_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object* v_f_468_, lean_object* v_a_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn(v_f_468_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object* v_f_471_, lean_object* v_args_472_){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v_a_476_; lean_object* v___x_477_; 
v___x_474_ = lean_unsigned_to_nat(0u);
v___x_475_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_472_, v___x_474_);
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
lean_dec_ref(v___x_475_);
v___x_477_ = lean_apply_2(v_f_471_, v_a_476_, lean_box(0));
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v_a_478_; lean_object* v___x_480_; uint8_t v_isShared_481_; uint8_t v_isSharedCheck_487_; 
v_a_478_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_487_ == 0)
{
v___x_480_ = v___x_477_;
v_isShared_481_ = v_isSharedCheck_487_;
goto v_resetjp_479_;
}
else
{
lean_inc(v_a_478_);
lean_dec(v___x_477_);
v___x_480_ = lean_box(0);
v_isShared_481_ = v_isSharedCheck_487_;
goto v_resetjp_479_;
}
v_resetjp_479_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_482_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_483_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_483_, 0, v_a_478_);
lean_ctor_set(v___x_483_, 1, v___x_482_);
if (v_isShared_481_ == 0)
{
lean_ctor_set(v___x_480_, 0, v___x_483_);
v___x_485_ = v___x_480_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
v_a_488_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_477_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_477_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
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
return v___x_493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object* v_f_496_, lean_object* v_args_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(v_f_496_, v_args_497_);
lean_dec_ref(v_args_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object* v_f_500_){
_start:
{
lean_object* v___f_502_; lean_object* v___x_503_; 
v___f_502_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_502_, 0, v_f_500_);
v___x_503_ = l_Lasm_JS_Function_ofSyncFn(v___f_502_);
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_505_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 1);
v___x_505_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_505_) == 0)
{
lean_object* v_a_506_; lean_object* v___x_507_; lean_object* v___x_508_; 
v_a_506_ = lean_ctor_get(v___x_505_, 0);
lean_inc(v_a_506_);
lean_dec_ref_known(v___x_505_, 1);
v___x_507_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_508_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_506_, v___x_507_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___y_516_; uint8_t v___x_543_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref_known(v___x_508_, 1);
v___x_510_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_511_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_504_);
v___x_512_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_512_, 0, v_a_504_);
lean_ctor_set(v___x_512_, 1, v___x_511_);
v___x_513_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_514_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_543_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; 
v___x_544_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8);
v___y_516_ = v___x_544_;
goto v___jp_515_;
}
else
{
lean_object* v___x_545_; 
v___x_545_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10);
v___y_516_ = v___x_545_;
goto v___jp_515_;
}
v___jp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
lean_inc(v___y_516_);
v___x_517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_514_);
lean_ctor_set(v___x_517_, 1, v___y_516_);
v___x_518_ = lean_box(0);
v___x_519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = l_Lasm_JS_obj(v___x_519_);
v___x_521_ = lean_unsigned_to_nat(3u);
v___x_522_ = lean_mk_empty_array_with_capacity(v___x_521_);
v___x_523_ = lean_array_push(v___x_522_, v___x_512_);
v___x_524_ = lean_array_push(v___x_523_, v___x_513_);
v___x_525_ = lean_array_push(v___x_524_, v___x_520_);
v___x_526_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_509_, v___x_510_, v___x_525_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_533_; 
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; 
v_unused_534_ = lean_ctor_get(v___x_526_, 0);
lean_dec(v_unused_534_);
v___x_528_ = v___x_526_;
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
else
{
lean_dec(v___x_526_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_533_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v___x_531_; 
if (v_isShared_529_ == 0)
{
lean_ctor_set(v___x_528_, 0, v_a_504_);
v___x_531_ = v___x_528_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_a_504_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec(v_a_504_);
v_a_535_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_526_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_526_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
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
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_dec(v_a_504_);
v_a_546_ = lean_ctor_get(v___x_508_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_508_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_508_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_508_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___x_551_; 
if (v_isShared_549_ == 0)
{
v___x_551_ = v___x_548_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v_a_546_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
}
else
{
lean_object* v_a_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_561_; 
lean_dec(v_a_504_);
v_a_554_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_561_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_561_ == 0)
{
v___x_556_ = v___x_505_;
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_a_554_);
lean_dec(v___x_505_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_561_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_559_; 
if (v_isShared_557_ == 0)
{
v___x_559_ = v___x_556_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_554_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
return v___x_559_;
}
}
}
}
else
{
lean_object* v_a_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_569_; 
v_a_562_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_569_ == 0)
{
v___x_564_ = v___x_503_;
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_a_562_);
lean_dec(v___x_503_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_569_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v___x_567_; 
if (v_isShared_565_ == 0)
{
v___x_567_ = v___x_564_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_a_562_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object* v_f_570_, lean_object* v_a_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(v_f_570_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___impl(lean_object* v_x_573_){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = lean_obj_tag_nat(v_x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___impl___boxed(lean_object* v_x_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___impl(v_x_575_);
lean_dec_ref(v_x_575_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(lean_object* v_t_577_, lean_object* v_k_578_){
_start:
{
if (lean_obj_tag(v_t_577_) == 0)
{
lean_object* v_value_579_; lean_object* v___x_580_; 
v_value_579_ = lean_ctor_get(v_t_577_, 0);
lean_inc_ref(v_value_579_);
lean_dec_ref_known(v_t_577_, 1);
v___x_580_ = lean_apply_1(v_k_578_, v_value_579_);
return v___x_580_;
}
else
{
lean_object* v_value_581_; lean_object* v___x_582_; 
v_value_581_ = lean_ctor_get(v_t_577_, 0);
lean_inc(v_value_581_);
lean_dec_ref_known(v_t_577_, 1);
v___x_582_ = lean_apply_1(v_k_578_, v_value_581_);
return v___x_582_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(lean_object* v_motive_583_, lean_object* v_ctorIdx_584_, lean_object* v_t_585_, lean_object* v_h_586_, lean_object* v_k_587_){
_start:
{
lean_object* v___x_588_; 
v___x_588_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_585_, v_k_587_);
return v___x_588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___boxed(lean_object* v_motive_589_, lean_object* v_ctorIdx_590_, lean_object* v_t_591_, lean_object* v_h_592_, lean_object* v_k_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(v_motive_589_, v_ctorIdx_590_, v_t_591_, v_h_592_, v_k_593_);
lean_dec(v_ctorIdx_590_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim___redArg(lean_object* v_t_595_, lean_object* v_domString_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_595_, v_domString_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim(lean_object* v_motive_598_, lean_object* v_t_599_, lean_object* v_h_600_, lean_object* v_domString_601_){
_start:
{
lean_object* v___x_602_; 
v___x_602_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_599_, v_domString_601_);
return v___x_602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim___redArg(lean_object* v_t_603_, lean_object* v_unsignedShort_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_603_, v_unsignedShort_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim(lean_object* v_motive_606_, lean_object* v_t_607_, lean_object* v_h_608_, lean_object* v_unsignedShort_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_607_, v_unsignedShort_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0(lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
lean_object* v_value_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_value_612_ = lean_ctor_get(v_x_611_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v_x_611_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_value_612_);
lean_dec(v_x_611_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
lean_ctor_set_tag(v___x_614_, 4);
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_value_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
else
{
lean_object* v_value_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_633_; 
v_value_620_ = lean_ctor_get(v_x_611_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_633_ == 0)
{
v___x_622_ = v_x_611_;
v_isShared_623_ = v_isSharedCheck_633_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_value_620_);
lean_dec(v_x_611_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_633_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_624_ = lean_nat_to_int(v_value_620_);
v___x_625_ = lean_nat_abs(v___x_624_);
v___x_626_ = lean_cstr_to_nat("9007199254740991");
v___x_627_ = lean_nat_dec_le(v___x_625_, v___x_626_);
lean_dec(v___x_625_);
if (v___x_627_ == 0)
{
lean_object* v___x_629_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set_tag(v___x_622_, 5);
lean_ctor_set(v___x_622_, 0, v___x_624_);
v___x_629_ = v___x_622_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v___x_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
else
{
double v___x_631_; lean_object* v___x_632_; 
lean_del_object(v___x_622_);
v___x_631_ = l_Float_ofInt(v___x_624_);
lean_dec(v___x_624_);
v___x_632_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_632_, 0, v___x_631_);
return v___x_632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object* v_value_636_){
_start:
{
lean_object* v___x_637_; 
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v_value_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object* v_value_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v_value_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object* v_f_651_, lean_object* v_a_652_, lean_object* v___f_653_, lean_object* v_x_654_){
_start:
{
if (lean_obj_tag(v_x_654_) == 0)
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_664_; 
lean_dec_ref(v___f_653_);
lean_dec(v_a_652_);
lean_dec_ref(v_f_651_);
v_a_656_ = lean_ctor_get(v_x_654_, 0);
v_isSharedCheck_664_ = !lean_is_exclusive(v_x_654_);
if (v_isSharedCheck_664_ == 0)
{
v___x_658_ = v_x_654_;
v_isShared_659_ = v_isSharedCheck_664_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v_x_654_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_664_;
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
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_663_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
lean_object* v___x_662_; 
v___x_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_662_, 0, v___x_661_);
return v___x_662_;
}
}
}
else
{
lean_object* v_a_665_; lean_object* v___x_666_; uint8_t v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v_a_665_ = lean_ctor_get(v_x_654_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v_x_654_, 1);
v___x_666_ = lean_unsigned_to_nat(0u);
v___x_667_ = 0;
v___x_668_ = lean_apply_3(v_f_651_, v_a_652_, v_a_665_, lean_box(0));
v___x_669_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_666_, v___x_667_, v___x_668_, v___f_653_);
return v___x_669_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object* v_f_670_, lean_object* v_a_671_, lean_object* v___f_672_, lean_object* v_x_673_, lean_object* v___y_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(v_f_670_, v_a_671_, v___f_672_, v_x_673_);
return v_res_675_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; 
v___x_682_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5));
v___x_683_ = lean_unsigned_to_nat(46u);
v___x_684_ = lean_unsigned_to_nat(193u);
v___x_685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4));
v___x_686_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3));
v___x_687_ = l_mkPanicMessageWithDecl(v___x_686_, v___x_685_, v___x_684_, v___x_683_, v___x_682_);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object* v_context_689_, lean_object* v_d_690_){
_start:
{
lean_object* v_received_693_; 
if (lean_obj_tag(v_d_690_) == 9)
{
lean_object* v_value_707_; lean_object* v___x_708_; 
v_value_707_ = lean_ctor_get(v_d_690_, 0);
lean_inc(v_value_707_);
lean_dec_ref_known(v_d_690_, 2);
v___x_708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_708_, 0, v_value_707_);
return v___x_708_;
}
else
{
if (lean_obj_tag(v_d_690_) == 9)
{
lean_object* v_value_709_; lean_object* v_description_710_; lean_object* v___x_711_; uint8_t v___x_712_; 
v_value_709_ = lean_ctor_get(v_d_690_, 0);
v_description_710_ = lean_ctor_get(v_d_690_, 1);
v___x_711_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_712_ = lean_string_dec_eq(v_description_710_, v___x_711_);
if (v___x_712_ == 0)
{
goto v___jp_705_;
}
else
{
uint32_t v___x_713_; uint64_t v___x_714_; lean_object* v___x_715_; uint32_t v___x_716_; lean_object* v___x_717_; 
lean_inc_n(v_value_709_, 2);
lean_dec_ref_known(v_d_690_, 2);
v___x_713_ = 206;
v___x_714_ = 0ULL;
v___x_715_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_715_, 0, v_value_709_);
lean_ctor_set(v___x_715_, 1, v___x_711_);
v___x_716_ = lasm_js_value_handle(v_value_709_);
lean_dec(v_value_709_);
v___x_717_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_713_, v___x_714_, v___x_715_, v___x_716_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v_a_718_; uint8_t v___x_719_; 
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
lean_dec_ref_known(v___x_717_, 1);
v___x_719_ = lean_string_validate_utf8(v_a_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
lean_dec(v_a_718_);
v___x_720_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6);
v___x_721_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_720_);
v_received_693_ = v___x_721_;
goto v___jp_692_;
}
else
{
lean_object* v___x_722_; 
v___x_722_ = lean_string_from_utf8_unchecked(v_a_718_);
v_received_693_ = v___x_722_;
goto v___jp_692_;
}
}
else
{
lean_object* v___x_723_; 
lean_dec_ref_known(v___x_717_, 1);
v___x_723_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7));
v_received_693_ = v___x_723_;
goto v___jp_692_;
}
}
}
else
{
goto v___jp_705_;
}
}
v___jp_692_:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_694_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_695_ = lean_string_append(v___x_694_, v_context_689_);
v___x_696_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_697_ = lean_string_append(v___x_695_, v___x_696_);
v___x_698_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServer___closed__1));
v___x_699_ = lean_string_append(v___x_697_, v___x_698_);
v___x_700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_701_ = lean_string_append(v___x_699_, v___x_700_);
v___x_702_ = lean_string_append(v___x_701_, v_received_693_);
lean_dec_ref(v_received_693_);
v___x_703_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
v___x_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
return v___x_704_;
}
v___jp_705_:
{
lean_object* v___x_706_; 
v___x_706_ = l_Lasm_JS_Data_describe(v_d_690_);
v_received_693_ = v___x_706_;
goto v___jp_692_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object* v_context_724_, lean_object* v_d_725_, lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v_context_724_, v_d_725_);
lean_dec_ref(v_context_724_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object* v_args_729_, lean_object* v_i_730_){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_732_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_733_ = lean_unsigned_to_nat(1u);
v___x_734_ = lean_nat_add(v_i_730_, v___x_733_);
v___x_735_ = l_Nat_reprFast(v___x_734_);
v___x_736_ = lean_string_append(v___x_732_, v___x_735_);
lean_dec_ref(v___x_735_);
v___x_737_ = lean_array_get_size(v_args_729_);
v___x_738_ = lean_nat_dec_lt(v_i_730_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; 
v___x_739_ = lean_box(0);
v___x_740_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_736_, v___x_739_);
lean_dec_ref(v___x_736_);
return v___x_740_;
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = lean_array_fget_borrowed(v_args_729_, v_i_730_);
lean_inc(v___x_741_);
v___x_742_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_736_, v___x_741_);
lean_dec_ref(v___x_736_);
return v___x_742_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object* v_args_743_, lean_object* v_i_744_, lean_object* v_a_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_743_, v_i_744_);
lean_dec(v_i_744_);
lean_dec_ref(v_args_743_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object* v_f_747_, lean_object* v___f_748_, lean_object* v_args_749_, lean_object* v_x_750_){
_start:
{
if (lean_obj_tag(v_x_750_) == 0)
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_760_; 
lean_dec_ref(v___f_748_);
lean_dec_ref(v_f_747_);
v_a_752_ = lean_ctor_get(v_x_750_, 0);
v_isSharedCheck_760_ = !lean_is_exclusive(v_x_750_);
if (v_isSharedCheck_760_ == 0)
{
v___x_754_ = v_x_750_;
v_isShared_755_ = v_isSharedCheck_760_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v_x_750_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_760_;
goto v_resetjp_753_;
}
v_resetjp_753_:
{
lean_object* v___x_757_; 
if (v_isShared_755_ == 0)
{
v___x_757_ = v___x_754_;
goto v_reusejp_756_;
}
else
{
lean_object* v_reuseFailAlloc_759_; 
v_reuseFailAlloc_759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_759_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_759_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
lean_object* v___x_758_; 
v___x_758_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_782_; 
v_a_761_ = lean_ctor_get(v_x_750_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v_x_750_);
if (v_isSharedCheck_782_ == 0)
{
v___x_763_ = v_x_750_;
v_isShared_764_ = v_isSharedCheck_782_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v_x_750_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_782_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___f_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v_val_770_; lean_object* v___x_773_; 
v___f_765_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_765_, 0, v_f_747_);
lean_closure_set(v___f_765_, 1, v_a_761_);
lean_closure_set(v___f_765_, 2, v___f_748_);
v___x_766_ = lean_unsigned_to_nat(1u);
v___x_767_ = lean_unsigned_to_nat(0u);
v___x_768_ = 0;
v___x_773_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_749_, v___x_766_);
if (lean_obj_tag(v___x_773_) == 0)
{
lean_object* v_a_774_; lean_object* v___x_776_; 
v_a_774_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_774_);
lean_dec_ref_known(v___x_773_, 1);
if (v_isShared_764_ == 0)
{
lean_ctor_set(v___x_763_, 0, v_a_774_);
v___x_776_ = v___x_763_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_774_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
v_val_770_ = v___x_776_;
goto v___jp_769_;
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; 
v_a_778_ = lean_ctor_get(v___x_773_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_773_, 1);
if (v_isShared_764_ == 0)
{
lean_ctor_set_tag(v___x_763_, 0);
lean_ctor_set(v___x_763_, 0, v_a_778_);
v___x_780_ = v___x_763_;
goto v_reusejp_779_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v_a_778_);
v___x_780_ = v_reuseFailAlloc_781_;
goto v_reusejp_779_;
}
v_reusejp_779_:
{
v_val_770_ = v___x_780_;
goto v___jp_769_;
}
}
v___jp_769_:
{
lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v_val_770_);
v___x_772_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_767_, v___x_768_, v___x_771_, v___f_765_);
return v___x_772_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object* v_f_783_, lean_object* v___f_784_, lean_object* v_args_785_, lean_object* v_x_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(v_f_783_, v___f_784_, v_args_785_, v_x_786_);
lean_dec_ref(v_args_785_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object* v_args_789_, lean_object* v_i_790_){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_792_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_793_ = lean_unsigned_to_nat(1u);
v___x_794_ = lean_nat_add(v_i_790_, v___x_793_);
v___x_795_ = l_Nat_reprFast(v___x_794_);
v___x_796_ = lean_string_append(v___x_792_, v___x_795_);
lean_dec_ref(v___x_795_);
v___x_797_ = lean_array_get_size(v_args_789_);
v___x_798_ = lean_nat_dec_lt(v_i_790_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_799_ = lean_box(0);
v___x_800_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_796_, v___x_799_);
lean_dec_ref(v___x_796_);
return v___x_800_;
}
else
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_array_fget_borrowed(v_args_789_, v_i_790_);
lean_inc(v___x_801_);
v___x_802_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_796_, v___x_801_);
lean_dec_ref(v___x_796_);
return v___x_802_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object* v_args_803_, lean_object* v_i_804_, lean_object* v_a_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_803_, v_i_804_);
lean_dec(v_i_804_);
lean_dec_ref(v_args_803_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object* v_f_807_, lean_object* v___f_808_, lean_object* v_args_809_){
_start:
{
lean_object* v___f_811_; lean_object* v___x_812_; uint8_t v___x_813_; lean_object* v_val_815_; lean_object* v___x_818_; 
lean_inc_ref(v_args_809_);
v___f_811_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_811_, 0, v_f_807_);
lean_closure_set(v___f_811_, 1, v___f_808_);
lean_closure_set(v___f_811_, 2, v_args_809_);
v___x_812_ = lean_unsigned_to_nat(0u);
v___x_813_ = 0;
v___x_818_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_809_, v___x_812_);
lean_dec_ref(v_args_809_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
v_a_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 1);
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
v_val_815_ = v___x_824_;
goto v___jp_814_;
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
v_a_827_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_818_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_818_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 0);
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
v_val_815_ = v___x_832_;
goto v___jp_814_;
}
}
}
v___jp_814_:
{
lean_object* v___x_816_; lean_object* v___x_817_; 
v___x_816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_816_, 0, v_val_815_);
v___x_817_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_812_, v___x_813_, v___x_816_, v___f_811_);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object* v_f_835_, lean_object* v___f_836_, lean_object* v_args_837_, lean_object* v___y_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(v_f_835_, v___f_836_, v_args_837_);
return v_res_839_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_841_ = lean_nat_abs(v___x_840_);
return v___x_841_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_842_ = lean_cstr_to_nat("9007199254740991");
v___x_843_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0);
v___x_844_ = lean_nat_dec_le(v___x_843_, v___x_842_);
return v___x_844_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_846_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_846_, 0, v___x_845_);
return v___x_846_;
}
}
static double _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3(void){
_start:
{
lean_object* v___x_847_; double v___x_848_; 
v___x_847_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_848_ = l_Float_ofInt(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4(void){
_start:
{
double v___x_849_; lean_object* v___x_850_; 
v___x_849_ = lean_float_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3);
v___x_850_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object* v_f_851_){
_start:
{
lean_object* v___f_853_; lean_object* v___f_854_; lean_object* v___x_855_; 
v___f_853_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_854_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_854_, 0, v_f_851_);
lean_closure_set(v___f_854_, 1, v___f_853_);
v___x_855_ = l_Lasm_JS_Function_ofFn(v___f_854_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_857_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
v___x_857_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref_known(v___x_857_, 1);
v___x_859_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_860_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_858_, v___x_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___y_868_; uint8_t v___x_895_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v___x_862_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_863_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_856_);
v___x_864_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_864_, 0, v_a_856_);
lean_ctor_set(v___x_864_, 1, v___x_863_);
v___x_865_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_866_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_895_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
v___x_896_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_868_ = v___x_896_;
goto v___jp_867_;
}
else
{
lean_object* v___x_897_; 
v___x_897_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_868_ = v___x_897_;
goto v___jp_867_;
}
v___jp_867_:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; 
lean_inc(v___y_868_);
v___x_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_869_, 0, v___x_866_);
lean_ctor_set(v___x_869_, 1, v___y_868_);
v___x_870_ = lean_box(0);
v___x_871_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_869_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = l_Lasm_JS_obj(v___x_871_);
v___x_873_ = lean_unsigned_to_nat(3u);
v___x_874_ = lean_mk_empty_array_with_capacity(v___x_873_);
v___x_875_ = lean_array_push(v___x_874_, v___x_864_);
v___x_876_ = lean_array_push(v___x_875_, v___x_865_);
v___x_877_ = lean_array_push(v___x_876_, v___x_872_);
v___x_878_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_861_, v___x_862_, v___x_877_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_885_ == 0)
{
lean_object* v_unused_886_; 
v_unused_886_ = lean_ctor_get(v___x_878_, 0);
lean_dec(v_unused_886_);
v___x_880_ = v___x_878_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_dec(v___x_878_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v_a_856_);
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_856_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
lean_dec(v_a_856_);
v_a_887_ = lean_ctor_get(v___x_878_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_878_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_878_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_878_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_887_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec(v_a_856_);
v_a_898_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_860_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_860_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
else
{
lean_object* v_a_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_913_; 
lean_dec(v_a_856_);
v_a_906_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_913_ == 0)
{
v___x_908_ = v___x_857_;
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_a_906_);
lean_dec(v___x_857_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_913_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
lean_object* v___x_911_; 
if (v_isShared_909_ == 0)
{
v___x_911_ = v___x_908_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v_a_906_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
else
{
lean_object* v_a_914_; lean_object* v___x_916_; uint8_t v_isShared_917_; uint8_t v_isSharedCheck_921_; 
v_a_914_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_921_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_921_ == 0)
{
v___x_916_ = v___x_855_;
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
else
{
lean_inc(v_a_914_);
lean_dec(v___x_855_);
v___x_916_ = lean_box(0);
v_isShared_917_ = v_isSharedCheck_921_;
goto v_resetjp_915_;
}
v_resetjp_915_:
{
lean_object* v___x_919_; 
if (v_isShared_917_ == 0)
{
v___x_919_ = v___x_916_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_914_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object* v_f_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(v_f_922_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object* v_f_925_, lean_object* v_args_926_){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_unsigned_to_nat(0u);
v___x_929_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_926_, v___x_928_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v_a_930_; lean_object* v___x_931_; lean_object* v___x_932_; 
v_a_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_a_930_);
lean_dec_ref_known(v___x_929_, 1);
v___x_931_ = lean_unsigned_to_nat(1u);
v___x_932_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_926_, v___x_931_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v___x_934_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_932_, 1);
v___x_934_ = lean_apply_3(v_f_925_, v_a_930_, v_a_933_, lean_box(0));
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_944_; 
v_a_935_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_944_ == 0)
{
v___x_937_ = v___x_934_;
v_isShared_938_ = v_isSharedCheck_944_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_934_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_944_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_939_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_940_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_940_, 0, v_a_935_);
lean_ctor_set(v___x_940_, 1, v___x_939_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 0, v___x_940_);
v___x_942_ = v___x_937_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v___x_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; uint8_t v_isShared_948_; uint8_t v_isSharedCheck_952_; 
v_a_945_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_952_ == 0)
{
v___x_947_ = v___x_934_;
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
else
{
lean_inc(v_a_945_);
lean_dec(v___x_934_);
v___x_947_ = lean_box(0);
v_isShared_948_ = v_isSharedCheck_952_;
goto v_resetjp_946_;
}
v_resetjp_946_:
{
lean_object* v___x_950_; 
if (v_isShared_948_ == 0)
{
v___x_950_ = v___x_947_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_945_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
else
{
lean_object* v_a_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_960_; 
lean_dec(v_a_930_);
lean_dec_ref(v_f_925_);
v_a_953_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_960_ == 0)
{
v___x_955_ = v___x_932_;
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_a_953_);
lean_dec(v___x_932_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_960_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v___x_958_; 
if (v_isShared_956_ == 0)
{
v___x_958_ = v___x_955_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_953_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec_ref(v_f_925_);
v_a_961_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_929_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_929_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object* v_f_969_, lean_object* v_args_970_, lean_object* v___y_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(v_f_969_, v_args_970_);
lean_dec_ref(v_args_970_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object* v_f_973_){
_start:
{
lean_object* v___f_975_; lean_object* v___x_976_; 
v___f_975_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_975_, 0, v_f_973_);
v___x_976_ = l_Lasm_JS_Function_ofSyncFn(v___f_975_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_978_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref_known(v___x_976_, 1);
v___x_978_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_981_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_979_, v___x_980_);
if (lean_obj_tag(v___x_981_) == 0)
{
lean_object* v_a_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___y_989_; uint8_t v___x_1016_; 
v_a_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc(v_a_982_);
lean_dec_ref_known(v___x_981_, 1);
v___x_983_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_984_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_977_);
v___x_985_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_985_, 0, v_a_977_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_987_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_1016_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_989_ = v___x_1017_;
goto v___jp_988_;
}
else
{
lean_object* v___x_1018_; 
v___x_1018_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_989_ = v___x_1018_;
goto v___jp_988_;
}
v___jp_988_:
{
lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
lean_inc(v___y_989_);
v___x_990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_990_, 0, v___x_987_);
lean_ctor_set(v___x_990_, 1, v___y_989_);
v___x_991_ = lean_box(0);
v___x_992_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_992_, 0, v___x_990_);
lean_ctor_set(v___x_992_, 1, v___x_991_);
v___x_993_ = l_Lasm_JS_obj(v___x_992_);
v___x_994_ = lean_unsigned_to_nat(3u);
v___x_995_ = lean_mk_empty_array_with_capacity(v___x_994_);
v___x_996_ = lean_array_push(v___x_995_, v___x_985_);
v___x_997_ = lean_array_push(v___x_996_, v___x_986_);
v___x_998_ = lean_array_push(v___x_997_, v___x_993_);
v___x_999_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_982_, v___x_983_, v___x_998_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1006_ == 0)
{
lean_object* v_unused_1007_; 
v_unused_1007_ = lean_ctor_get(v___x_999_, 0);
lean_dec(v_unused_1007_);
v___x_1001_ = v___x_999_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_dec(v___x_999_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v_a_977_);
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_977_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_dec(v_a_977_);
v_a_1008_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_999_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_999_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
else
{
lean_object* v_a_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1026_; 
lean_dec(v_a_977_);
v_a_1019_ = lean_ctor_get(v___x_981_, 0);
v_isSharedCheck_1026_ = !lean_is_exclusive(v___x_981_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1021_ = v___x_981_;
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_a_1019_);
lean_dec(v___x_981_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1026_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1024_; 
if (v_isShared_1022_ == 0)
{
v___x_1024_ = v___x_1021_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_a_1019_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
else
{
lean_object* v_a_1027_; lean_object* v___x_1029_; uint8_t v_isShared_1030_; uint8_t v_isSharedCheck_1034_; 
lean_dec(v_a_977_);
v_a_1027_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1034_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1034_ == 0)
{
v___x_1029_ = v___x_978_;
v_isShared_1030_ = v_isSharedCheck_1034_;
goto v_resetjp_1028_;
}
else
{
lean_inc(v_a_1027_);
lean_dec(v___x_978_);
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
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
v_a_1035_ = lean_ctor_get(v___x_976_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_976_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_976_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object* v_f_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(v_f_1043_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object* v___f_1055_, lean_object* v___f_1056_, lean_object* v___f_1057_, lean_object* v___f_1058_, lean_object* v___f_1059_, lean_object* v_d_1060_){
_start:
{
lean_object* v_maxRequestBodySize_1061_; lean_object* v_error_1062_; lean_object* v_id_1063_; lean_object* v_hostname_1064_; lean_object* v_port_1065_; lean_object* v_reusePort_1066_; lean_object* v_ipv6Only_1067_; lean_object* v_idleTimeout_1068_; lean_object* v_fetch_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v_maxRequestBodySize_1061_ = lean_ctor_get(v_d_1060_, 0);
lean_inc(v_maxRequestBodySize_1061_);
v_error_1062_ = lean_ctor_get(v_d_1060_, 1);
lean_inc(v_error_1062_);
v_id_1063_ = lean_ctor_get(v_d_1060_, 2);
lean_inc(v_id_1063_);
v_hostname_1064_ = lean_ctor_get(v_d_1060_, 3);
lean_inc(v_hostname_1064_);
v_port_1065_ = lean_ctor_get(v_d_1060_, 4);
lean_inc(v_port_1065_);
v_reusePort_1066_ = lean_ctor_get(v_d_1060_, 5);
lean_inc(v_reusePort_1066_);
v_ipv6Only_1067_ = lean_ctor_get(v_d_1060_, 6);
lean_inc(v_ipv6Only_1067_);
v_idleTimeout_1068_ = lean_ctor_get(v_d_1060_, 7);
lean_inc(v_idleTimeout_1068_);
v_fetch_1069_ = lean_ctor_get(v_d_1060_, 8);
lean_inc(v_fetch_1069_);
lean_dec_ref(v_d_1060_);
v___x_1070_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
lean_inc_ref(v___f_1055_);
v___x_1071_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1055_, v_maxRequestBodySize_1061_);
v___x_1072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___x_1071_);
v___x_1073_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_1074_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1056_, v_error_1062_);
v___x_1075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1073_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
lean_inc_ref(v___f_1057_);
v___x_1077_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1057_, v_id_1063_);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1076_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1080_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1057_, v_hostname_1064_);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1079_);
lean_ctor_set(v___x_1081_, 1, v___x_1080_);
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1083_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1058_, v_port_1065_);
v___x_1084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
lean_inc_ref(v___f_1059_);
v___x_1086_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_reusePort_1066_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_1089_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1059_, v_ipv6Only_1067_);
v___x_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1088_);
lean_ctor_set(v___x_1090_, 1, v___x_1089_);
v___x_1091_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_1092_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1055_, v_idleTimeout_1068_);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1091_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1096_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1096_, 0, v_fetch_1069_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1094_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = lean_unsigned_to_nat(9u);
v___x_1099_ = lean_mk_empty_array_with_capacity(v___x_1098_);
v___x_1100_ = lean_array_push(v___x_1099_, v___x_1072_);
v___x_1101_ = lean_array_push(v___x_1100_, v___x_1075_);
v___x_1102_ = lean_array_push(v___x_1101_, v___x_1078_);
v___x_1103_ = lean_array_push(v___x_1102_, v___x_1081_);
v___x_1104_ = lean_array_push(v___x_1103_, v___x_1084_);
v___x_1105_ = lean_array_push(v___x_1104_, v___x_1087_);
v___x_1106_ = lean_array_push(v___x_1105_, v___x_1090_);
v___x_1107_ = lean_array_push(v___x_1106_, v___x_1093_);
v___x_1108_ = lean_array_push(v___x_1107_, v___x_1097_);
v___x_1109_ = l_Lasm_JS_Web_Support_fields(v___x_1108_);
lean_dec_ref(v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___impl(lean_object* v_x_1120_){
_start:
{
lean_object* v___x_1121_; 
v___x_1121_ = lean_obj_tag_nat(v_x_1120_);
return v___x_1121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___impl___boxed(lean_object* v_x_1122_){
_start:
{
lean_object* v_res_1123_; 
v_res_1123_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___impl(v_x_1122_);
lean_dec_ref(v_x_1122_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(lean_object* v_t_1124_, lean_object* v_k_1125_){
_start:
{
if (lean_obj_tag(v_t_1124_) == 0)
{
lean_object* v_value_1126_; lean_object* v___x_1127_; 
v_value_1126_ = lean_ctor_get(v_t_1124_, 0);
lean_inc(v_value_1126_);
lean_dec_ref_known(v_t_1124_, 1);
v___x_1127_ = lean_apply_1(v_k_1125_, v_value_1126_);
return v___x_1127_;
}
else
{
lean_object* v_value_1128_; lean_object* v___x_1129_; 
v_value_1128_ = lean_ctor_get(v_t_1124_, 0);
lean_inc_ref(v_value_1128_);
lean_dec_ref_known(v_t_1124_, 1);
v___x_1129_ = lean_apply_1(v_k_1125_, v_value_1128_);
return v___x_1129_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(lean_object* v_motive_1130_, lean_object* v_ctorIdx_1131_, lean_object* v_t_1132_, lean_object* v_h_1133_, lean_object* v_k_1134_){
_start:
{
lean_object* v___x_1135_; 
v___x_1135_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1132_, v_k_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___boxed(lean_object* v_motive_1136_, lean_object* v_ctorIdx_1137_, lean_object* v_t_1138_, lean_object* v_h_1139_, lean_object* v_k_1140_){
_start:
{
lean_object* v_res_1141_; 
v_res_1141_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(v_motive_1136_, v_ctorIdx_1137_, v_t_1138_, v_h_1139_, v_k_1140_);
lean_dec(v_ctorIdx_1137_);
return v_res_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim___redArg(lean_object* v_t_1142_, lean_object* v_request_1143_){
_start:
{
lean_object* v___x_1144_; 
v___x_1144_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1142_, v_request_1143_);
return v___x_1144_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim(lean_object* v_motive_1145_, lean_object* v_t_1146_, lean_object* v_h_1147_, lean_object* v_request_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1146_, v_request_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim___redArg(lean_object* v_t_1150_, lean_object* v_domString_1151_){
_start:
{
lean_object* v___x_1152_; 
v___x_1152_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1150_, v_domString_1151_);
return v___x_1152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim(lean_object* v_motive_1153_, lean_object* v_t_1154_, lean_object* v_h_1155_, lean_object* v_domString_1156_){
_start:
{
lean_object* v___x_1157_; 
v___x_1157_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1154_, v_domString_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0(lean_object* v_x_1158_){
_start:
{
if (lean_obj_tag(v_x_1158_) == 0)
{
lean_object* v_value_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_value_1159_ = lean_ctor_get(v_x_1158_, 0);
lean_inc(v_value_1159_);
lean_dec_ref_known(v_x_1158_, 1);
v___x_1160_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1161_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1161_, 0, v_value_1159_);
lean_ctor_set(v___x_1161_, 1, v___x_1160_);
return v___x_1161_;
}
else
{
lean_object* v_value_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
v_value_1162_ = lean_ctor_get(v_x_1158_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_x_1158_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v_x_1158_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_value_1162_);
lean_dec(v_x_1158_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
lean_ctor_set_tag(v___x_1164_, 4);
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_value_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object* v_value_1172_){
_start:
{
lean_object* v___x_1173_; 
v___x_1173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1173_, 0, v_value_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object* v_value_1176_){
_start:
{
lean_object* v___x_1177_; 
v___x_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1177_, 0, v_value_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(lean_object* v___x_1182_, lean_object* v___x_1183_, lean_object* v___x_1184_, lean_object* v_d_1185_){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
v___x_1186_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
v___x_1187_ = l_Lasm_JS_readField___redArg(v___x_1182_, v_d_1185_, v___x_1186_);
if (lean_obj_tag(v___x_1187_) == 0)
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec_ref(v___x_1184_);
lean_dec_ref(v___x_1183_);
v_a_1188_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1187_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1187_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_a_1196_ = lean_ctor_get(v___x_1187_, 0);
lean_inc(v_a_1196_);
lean_dec_ref_known(v___x_1187_, 1);
v___x_1197_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1198_ = l_Lasm_JS_readField___redArg(v___x_1183_, v_d_1185_, v___x_1197_);
if (lean_obj_tag(v___x_1198_) == 0)
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
lean_dec(v_a_1196_);
lean_dec_ref(v___x_1184_);
v_a_1199_ = lean_ctor_get(v___x_1198_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1198_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1198_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1198_);
v___x_1201_ = lean_box(0);
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
v_resetjp_1200_:
{
lean_object* v___x_1204_; 
if (v_isShared_1202_ == 0)
{
v___x_1204_ = v___x_1201_;
goto v_reusejp_1203_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v_a_1199_);
v___x_1204_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1203_;
}
v_reusejp_1203_:
{
return v___x_1204_;
}
}
}
else
{
lean_object* v_a_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_a_1207_ = lean_ctor_get(v___x_1198_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1198_, 1);
v___x_1208_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
v___x_1209_ = l_Lasm_JS_readField___redArg(v___x_1184_, v_d_1185_, v___x_1208_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec(v_a_1207_);
lean_dec(v_a_1196_);
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1209_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1209_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1227_; 
v_a_1218_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1220_ = v___x_1209_;
v_isShared_1221_ = v_isSharedCheck_1227_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1209_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1227_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1222_; uint8_t v___x_1223_; lean_object* v___x_1225_; 
v___x_1222_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1222_, 0, v_a_1196_);
lean_ctor_set(v___x_1222_, 1, v_a_1207_);
v___x_1223_ = lean_unbox(v_a_1218_);
lean_dec(v_a_1218_);
lean_ctor_set_uint8(v___x_1222_, sizeof(void*)*2, v___x_1223_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 0, v___x_1222_);
v___x_1225_ = v___x_1220_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1222_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed(lean_object* v___x_1228_, lean_object* v___x_1229_, lean_object* v___x_1230_, lean_object* v_d_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(v___x_1228_, v___x_1229_, v___x_1230_, v_d_1231_);
lean_dec(v_d_1231_);
return v_res_1232_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0(void){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___f_1236_; 
v___x_1233_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily));
v___x_1234_ = l_Lasm_JS_instFromJSNat;
v___x_1235_ = l_Lasm_JS_instFromJSString;
v___f_1236_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1236_, 0, v___x_1235_);
lean_closure_set(v___f_1236_, 1, v___x_1234_);
lean_closure_set(v___f_1236_, 2, v___x_1233_);
return v___f_1236_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2(void){
_start:
{
uint8_t v___x_1238_; lean_object* v___x_1239_; lean_object* v___f_1240_; lean_object* v___x_1241_; 
v___x_1238_ = 0;
v___x_1239_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___closed__1));
v___f_1240_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0);
v___x_1241_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1241_, 0, v___f_1240_);
lean_ctor_set(v___x_1241_, 1, v___x_1239_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*2, v___x_1238_);
return v___x_1241_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress(void){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests(lean_object* v_self_1244_){
_start:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = ((lean_object*)(l_Lasm_JS_Bun_Server_pendingRequests___closed__0));
v___x_1247_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1244_, v___x_1246_);
return v___x_1247_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests___boxed(lean_object* v_self_1248_, lean_object* v_a_1249_){
_start:
{
lean_object* v_res_1250_; 
v_res_1250_ = l_Lasm_JS_Bun_Server_pendingRequests(v_self_1248_);
return v_res_1250_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url(lean_object* v_self_1252_){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = ((lean_object*)(l_Lasm_JS_Bun_Server_url___closed__0));
v___x_1255_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1252_, v___x_1254_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
v_a_1256_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1255_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1255_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
else
{
lean_object* v_a_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1271_; 
v_a_1264_ = lean_ctor_get(v___x_1255_, 0);
v_isSharedCheck_1271_ = !lean_is_exclusive(v___x_1255_);
if (v_isSharedCheck_1271_ == 0)
{
v___x_1266_ = v___x_1255_;
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_a_1264_);
lean_dec(v___x_1255_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1271_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1269_; 
if (v_isShared_1267_ == 0)
{
v___x_1269_ = v___x_1266_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v_a_1264_);
v___x_1269_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
return v___x_1269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url___boxed(lean_object* v_self_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lasm_JS_Bun_Server_url(v_self_1272_);
return v_res_1274_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = lean_unsigned_to_nat(0u);
v___x_1279_ = lean_nat_to_int(v___x_1278_);
return v___x_1279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(lean_object* v_context_1282_, lean_object* v_d_1283_){
_start:
{
lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1295_; lean_object* v_received_1296_; lean_object* v___y_1315_; lean_object* v_a_1318_; lean_object* v_a_1343_; 
switch(lean_obj_tag(v_d_1283_))
{
case 1:
{
goto v___jp_1285_;
}
case 0:
{
goto v___jp_1285_;
}
default: 
{
switch(lean_obj_tag(v_d_1283_))
{
case 3:
{
double v_n_1350_; lean_object* v___x_1351_; 
v_n_1350_ = lean_ctor_get_float(v_d_1283_, 0);
v___x_1351_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1350_);
if (lean_obj_tag(v___x_1351_) == 0)
{
lean_object* v___x_1352_; 
v___x_1352_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1318_ = v___x_1352_;
goto v___jp_1317_;
}
else
{
lean_object* v_val_1353_; 
v_val_1353_ = lean_ctor_get(v___x_1351_, 0);
lean_inc(v_val_1353_);
lean_dec_ref_known(v___x_1351_, 1);
v_a_1343_ = v_val_1353_;
goto v___jp_1342_;
}
}
case 5:
{
lean_object* v_i_1354_; 
v_i_1354_ = lean_ctor_get(v_d_1283_, 0);
lean_inc(v_i_1354_);
v_a_1343_ = v_i_1354_;
goto v___jp_1342_;
}
default: 
{
lean_object* v___x_1355_; 
v___x_1355_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1318_ = v___x_1355_;
goto v___jp_1317_;
}
}
}
}
v___jp_1285_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = lean_box(0);
v___x_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
return v___x_1287_;
}
v___jp_1288_:
{
lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = lean_string_append(v___y_1289_, v___y_1290_);
lean_dec_ref(v___y_1290_);
v___x_1292_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1291_);
v___x_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
return v___x_1293_;
}
v___jp_1294_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
v___x_1297_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1298_ = lean_string_append(v___x_1297_, v_context_1282_);
v___x_1299_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1300_ = lean_string_append(v___x_1298_, v___x_1299_);
v___x_1301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0));
v___x_1302_ = lean_string_append(v___x_1300_, v___x_1301_);
v___x_1303_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1304_ = lean_string_append(v___x_1302_, v___x_1303_);
v___x_1305_ = lean_string_append(v___x_1304_, v_received_1296_);
lean_dec_ref(v_received_1296_);
v___x_1306_ = lean_string_utf8_byte_size(v___y_1295_);
v___x_1307_ = lean_unsigned_to_nat(0u);
v___x_1308_ = lean_nat_dec_eq(v___x_1306_, v___x_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1310_ = lean_string_append(v___x_1309_, v___y_1295_);
v___x_1311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1312_ = lean_string_append(v___x_1310_, v___x_1311_);
v___y_1289_ = v___x_1305_;
v___y_1290_ = v___x_1312_;
goto v___jp_1288_;
}
else
{
lean_object* v___x_1313_; 
v___x_1313_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1289_ = v___x_1305_;
v___y_1290_ = v___x_1313_;
goto v___jp_1288_;
}
}
v___jp_1314_:
{
lean_object* v___x_1316_; 
v___x_1316_ = l_Lasm_JS_Data_describe(v_d_1283_);
v___y_1295_ = v___y_1315_;
v_received_1296_ = v___x_1316_;
goto v___jp_1294_;
}
v___jp_1317_:
{
if (lean_obj_tag(v_d_1283_) == 9)
{
lean_object* v_value_1319_; lean_object* v_description_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; 
v_value_1319_ = lean_ctor_get(v_d_1283_, 0);
v_description_1320_ = lean_ctor_get(v_d_1283_, 1);
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1322_ = lean_string_dec_eq(v_description_1320_, v___x_1321_);
if (v___x_1322_ == 0)
{
v___y_1315_ = v_a_1318_;
goto v___jp_1314_;
}
else
{
lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1339_; 
lean_inc(v_value_1319_);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_d_1283_);
if (v_isSharedCheck_1339_ == 0)
{
lean_object* v_unused_1340_; lean_object* v_unused_1341_; 
v_unused_1340_ = lean_ctor_get(v_d_1283_, 1);
lean_dec(v_unused_1340_);
v_unused_1341_ = lean_ctor_get(v_d_1283_, 0);
lean_dec(v_unused_1341_);
v___x_1324_ = v_d_1283_;
v_isShared_1325_ = v_isSharedCheck_1339_;
goto v_resetjp_1323_;
}
else
{
lean_dec(v_d_1283_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1339_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
uint32_t v___x_1326_; uint64_t v___x_1327_; lean_object* v___x_1329_; 
v___x_1326_ = 206;
v___x_1327_ = 0ULL;
lean_inc(v_value_1319_);
if (v_isShared_1325_ == 0)
{
lean_ctor_set(v___x_1324_, 1, v___x_1321_);
v___x_1329_ = v___x_1324_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v_value_1319_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v___x_1321_);
v___x_1329_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
uint32_t v___x_1330_; lean_object* v___x_1331_; 
v___x_1330_ = lasm_js_value_handle(v_value_1319_);
lean_dec(v_value_1319_);
v___x_1331_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1326_, v___x_1327_, v___x_1329_, v___x_1330_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; uint8_t v___x_1333_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1331_, 1);
v___x_1333_ = lean_string_validate_utf8(v_a_1332_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_dec(v_a_1332_);
v___x_1334_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6);
v___x_1335_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1334_);
v___y_1295_ = v_a_1318_;
v_received_1296_ = v___x_1335_;
goto v___jp_1294_;
}
else
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_string_from_utf8_unchecked(v_a_1332_);
v___y_1295_ = v_a_1318_;
v_received_1296_ = v___x_1336_;
goto v___jp_1294_;
}
}
else
{
lean_object* v___x_1337_; 
lean_dec_ref_known(v___x_1331_, 1);
v___x_1337_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7));
v___y_1295_ = v_a_1318_;
v_received_1296_ = v___x_1337_;
goto v___jp_1294_;
}
}
}
}
}
else
{
v___y_1315_ = v_a_1318_;
goto v___jp_1314_;
}
}
v___jp_1342_:
{
lean_object* v___x_1344_; uint8_t v___x_1345_; 
v___x_1344_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1345_ = lean_int_dec_le(v___x_1344_, v_a_1343_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; 
lean_dec(v_a_1343_);
v___x_1346_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1318_ = v___x_1346_;
goto v___jp_1317_;
}
else
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec(v_d_1283_);
v___x_1347_ = l_Int_toNat(v_a_1343_);
lean_dec(v_a_1343_);
v___x_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
v___x_1349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1349_, 0, v___x_1348_);
return v___x_1349_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1356_, lean_object* v_d_1357_, lean_object* v_a_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1356_, v_d_1357_);
lean_dec_ref(v_context_1356_);
return v_res_1359_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(lean_object* v_context_1360_, lean_object* v_bytes_1361_){
_start:
{
lean_object* v___x_1363_; 
v___x_1363_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1361_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; lean_object* v___x_1365_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1363_, 1);
v___x_1365_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1360_, v_a_1364_);
return v___x_1365_;
}
else
{
lean_object* v_a_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
v_a_1366_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1373_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v___x_1363_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_a_1366_);
lean_dec(v___x_1363_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_a_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
return v___x_1371_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0___boxed(lean_object* v_context_1374_, lean_object* v_bytes_1375_, lean_object* v_a_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v_context_1374_, v_bytes_1375_);
lean_dec_ref(v_bytes_1375_);
lean_dec_ref(v_context_1374_);
return v_res_1377_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1378_; uint64_t v___x_1379_; 
v___x_1378_ = 0;
v___x_1379_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(lean_object* v_o_1381_, lean_object* v_key_1382_){
_start:
{
lean_object* v_k_1384_; lean_object* v___x_1385_; 
v_k_1384_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1384_, 0, v_key_1382_);
lean_inc_ref(v_k_1384_);
v___x_1385_ = l_Lasm_JS_Wire_encodeIO(v_k_1384_);
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; uint32_t v___x_1387_; uint32_t v___x_1388_; uint64_t v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1386_);
lean_dec_ref_known(v___x_1385_, 1);
v___x_1387_ = 203;
v___x_1388_ = lasm_js_value_handle(v_o_1381_);
v___x_1389_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1390_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1391_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1391_, 0, v_o_1381_);
lean_ctor_set(v___x_1391_, 1, v___x_1390_);
v___x_1392_ = lean_unsigned_to_nat(2u);
v___x_1393_ = lean_mk_empty_array_with_capacity(v___x_1392_);
lean_inc_ref(v_k_1384_);
v___x_1394_ = lean_array_push(v___x_1393_, v_k_1384_);
v___x_1395_ = lean_array_push(v___x_1394_, v___x_1391_);
v___x_1396_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1396_, 0, v___x_1395_);
v___x_1397_ = lasm_js_call(v___x_1387_, v___x_1388_, v___x_1389_, v_a_1386_, v___x_1396_);
lean_dec_ref_known(v___x_1396_, 1);
lean_dec(v_a_1386_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
lean_inc(v_a_1398_);
lean_dec_ref_known(v___x_1397_, 1);
v___x_1399_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1400_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1384_);
v___x_1401_ = lean_string_append(v___x_1399_, v___x_1400_);
lean_dec_ref(v___x_1400_);
v___x_1402_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v___x_1401_, v_a_1398_);
lean_dec(v_a_1398_);
lean_dec_ref(v___x_1401_);
return v___x_1402_;
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec_ref_known(v_k_1384_, 1);
v_a_1403_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___x_1397_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___x_1397_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_a_1403_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
}
else
{
lean_object* v_a_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1418_; 
lean_dec_ref_known(v_k_1384_, 1);
lean_dec(v_o_1381_);
v_a_1411_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1418_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1418_ == 0)
{
v___x_1413_ = v___x_1385_;
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_a_1411_);
lean_dec(v___x_1385_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1418_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1416_; 
if (v_isShared_1414_ == 0)
{
v___x_1416_ = v___x_1413_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1411_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___boxed(lean_object* v_o_1419_, lean_object* v_key_1420_, lean_object* v_a_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_o_1419_, v_key_1420_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port(lean_object* v_self_1423_){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1425_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1426_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_self_1423_, v___x_1425_);
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port___boxed(lean_object* v_self_1427_, lean_object* v_a_1428_){
_start:
{
lean_object* v_res_1429_; 
v_res_1429_ = l_Lasm_JS_Bun_Server_port(v_self_1427_);
return v_res_1429_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(lean_object* v_o_1430_, lean_object* v_key_1431_){
_start:
{
lean_object* v_k_1433_; lean_object* v___x_1434_; 
v_k_1433_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1433_, 0, v_key_1431_);
lean_inc_ref(v_k_1433_);
v___x_1434_ = l_Lasm_JS_Wire_encodeIO(v_k_1433_);
if (lean_obj_tag(v___x_1434_) == 0)
{
lean_object* v_a_1435_; uint32_t v___x_1436_; uint32_t v___x_1437_; uint64_t v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v_a_1435_ = lean_ctor_get(v___x_1434_, 0);
lean_inc(v_a_1435_);
lean_dec_ref_known(v___x_1434_, 1);
v___x_1436_ = 203;
v___x_1437_ = lasm_js_value_handle(v_o_1430_);
v___x_1438_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1439_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1440_, 0, v_o_1430_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
v___x_1441_ = lean_unsigned_to_nat(2u);
v___x_1442_ = lean_mk_empty_array_with_capacity(v___x_1441_);
lean_inc_ref(v_k_1433_);
v___x_1443_ = lean_array_push(v___x_1442_, v_k_1433_);
v___x_1444_ = lean_array_push(v___x_1443_, v___x_1440_);
v___x_1445_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1444_);
v___x_1446_ = lasm_js_call(v___x_1436_, v___x_1437_, v___x_1438_, v_a_1435_, v___x_1445_);
lean_dec_ref_known(v___x_1445_, 1);
lean_dec(v_a_1435_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1449_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1433_);
v___x_1450_ = lean_string_append(v___x_1448_, v___x_1449_);
lean_dec_ref(v___x_1449_);
v___x_1451_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1450_, v_a_1447_);
lean_dec(v_a_1447_);
lean_dec_ref(v___x_1450_);
return v___x_1451_;
}
else
{
lean_object* v_a_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1459_; 
lean_dec_ref_known(v_k_1433_, 1);
v_a_1452_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1454_ = v___x_1446_;
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_a_1452_);
lean_dec(v___x_1446_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1459_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1457_; 
if (v_isShared_1455_ == 0)
{
v___x_1457_ = v___x_1454_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1458_; 
v_reuseFailAlloc_1458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1458_, 0, v_a_1452_);
v___x_1457_ = v_reuseFailAlloc_1458_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
return v___x_1457_;
}
}
}
}
else
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
lean_dec_ref_known(v_k_1433_, 1);
lean_dec(v_o_1430_);
v_a_1460_ = lean_ctor_get(v___x_1434_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1434_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1434_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1434_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0___boxed(lean_object* v_o_1468_, lean_object* v_key_1469_, lean_object* v_a_1470_){
_start:
{
lean_object* v_res_1471_; 
v_res_1471_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_o_1468_, v_key_1469_);
return v_res_1471_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname(lean_object* v_self_1472_){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1475_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_self_1472_, v___x_1474_);
return v___x_1475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname___boxed(lean_object* v_self_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l_Lasm_JS_Bun_Server_hostname(v_self_1476_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(lean_object* v_context_1481_, lean_object* v_d_1482_){
_start:
{
lean_object* v_received_1488_; uint8_t v_a_1529_; 
switch(lean_obj_tag(v_d_1482_))
{
case 1:
{
goto v___jp_1484_;
}
case 0:
{
goto v___jp_1484_;
}
default: 
{
if (lean_obj_tag(v_d_1482_) == 4)
{
lean_object* v_s_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; 
v_s_1533_ = lean_ctor_get(v_d_1482_, 0);
v___x_1534_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_1535_ = lean_string_dec_eq(v_s_1533_, v___x_1534_);
if (v___x_1535_ == 0)
{
lean_object* v___x_1536_; uint8_t v___x_1537_; 
v___x_1536_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_1537_ = lean_string_dec_eq(v_s_1533_, v___x_1536_);
if (v___x_1537_ == 0)
{
goto v___jp_1504_;
}
else
{
uint8_t v___x_1538_; 
lean_dec_ref_known(v_d_1482_, 1);
v___x_1538_ = 1;
v_a_1529_ = v___x_1538_;
goto v___jp_1528_;
}
}
else
{
uint8_t v___x_1539_; 
lean_dec_ref_known(v_d_1482_, 1);
v___x_1539_ = 0;
v_a_1529_ = v___x_1539_;
goto v___jp_1528_;
}
}
else
{
goto v___jp_1504_;
}
}
}
v___jp_1484_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; 
v___x_1485_ = lean_box(0);
v___x_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1485_);
return v___x_1486_;
}
v___jp_1487_:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; 
v___x_1489_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1490_ = lean_string_append(v___x_1489_, v_context_1481_);
v___x_1491_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1492_ = lean_string_append(v___x_1490_, v___x_1491_);
v___x_1493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0));
v___x_1494_ = lean_string_append(v___x_1492_, v___x_1493_);
v___x_1495_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1496_ = lean_string_append(v___x_1494_, v___x_1495_);
v___x_1497_ = lean_string_append(v___x_1496_, v_received_1488_);
lean_dec_ref(v_received_1488_);
v___x_1498_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___x_1499_ = lean_string_append(v___x_1497_, v___x_1498_);
v___x_1500_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v___x_1500_);
return v___x_1501_;
}
v___jp_1502_:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Lasm_JS_Data_describe(v_d_1482_);
v_received_1488_ = v___x_1503_;
goto v___jp_1487_;
}
v___jp_1504_:
{
if (lean_obj_tag(v_d_1482_) == 9)
{
lean_object* v_value_1505_; lean_object* v_description_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
v_value_1505_ = lean_ctor_get(v_d_1482_, 0);
v_description_1506_ = lean_ctor_get(v_d_1482_, 1);
v___x_1507_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1508_ = lean_string_dec_eq(v_description_1506_, v___x_1507_);
if (v___x_1508_ == 0)
{
goto v___jp_1502_;
}
else
{
lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1525_; 
lean_inc(v_value_1505_);
v_isSharedCheck_1525_ = !lean_is_exclusive(v_d_1482_);
if (v_isSharedCheck_1525_ == 0)
{
lean_object* v_unused_1526_; lean_object* v_unused_1527_; 
v_unused_1526_ = lean_ctor_get(v_d_1482_, 1);
lean_dec(v_unused_1526_);
v_unused_1527_ = lean_ctor_get(v_d_1482_, 0);
lean_dec(v_unused_1527_);
v___x_1510_ = v_d_1482_;
v_isShared_1511_ = v_isSharedCheck_1525_;
goto v_resetjp_1509_;
}
else
{
lean_dec(v_d_1482_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1525_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
uint32_t v___x_1512_; uint64_t v___x_1513_; lean_object* v___x_1515_; 
v___x_1512_ = 206;
v___x_1513_ = 0ULL;
lean_inc(v_value_1505_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 1, v___x_1507_);
v___x_1515_ = v___x_1510_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1524_; 
v_reuseFailAlloc_1524_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1524_, 0, v_value_1505_);
lean_ctor_set(v_reuseFailAlloc_1524_, 1, v___x_1507_);
v___x_1515_ = v_reuseFailAlloc_1524_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
uint32_t v___x_1516_; lean_object* v___x_1517_; 
v___x_1516_ = lasm_js_value_handle(v_value_1505_);
lean_dec(v_value_1505_);
v___x_1517_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1512_, v___x_1513_, v___x_1515_, v___x_1516_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; uint8_t v___x_1519_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___x_1519_ = lean_string_validate_utf8(v_a_1518_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
lean_dec(v_a_1518_);
v___x_1520_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6);
v___x_1521_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1520_);
v_received_1488_ = v___x_1521_;
goto v___jp_1487_;
}
else
{
lean_object* v___x_1522_; 
v___x_1522_ = lean_string_from_utf8_unchecked(v_a_1518_);
v_received_1488_ = v___x_1522_;
goto v___jp_1487_;
}
}
else
{
lean_object* v___x_1523_; 
lean_dec_ref_known(v___x_1517_, 1);
v___x_1523_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7));
v_received_1488_ = v___x_1523_;
goto v___jp_1487_;
}
}
}
}
}
else
{
goto v___jp_1502_;
}
}
v___jp_1528_:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = lean_box(v_a_1529_);
v___x_1531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1530_);
v___x_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1531_);
return v___x_1532_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1540_, lean_object* v_d_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v_res_1543_; 
v_res_1543_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1540_, v_d_1541_);
lean_dec_ref(v_context_1540_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(lean_object* v_context_1544_, lean_object* v_bytes_1545_){
_start:
{
lean_object* v___x_1547_; 
v___x_1547_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1545_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1549_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1547_, 1);
v___x_1549_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1544_, v_a_1548_);
return v___x_1549_;
}
else
{
lean_object* v_a_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1557_; 
v_a_1550_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1557_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1557_ == 0)
{
v___x_1552_ = v___x_1547_;
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_a_1550_);
lean_dec(v___x_1547_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1557_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___x_1555_; 
if (v_isShared_1553_ == 0)
{
v___x_1555_ = v___x_1552_;
goto v_reusejp_1554_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v_a_1550_);
v___x_1555_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1554_;
}
v_reusejp_1554_:
{
return v___x_1555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0___boxed(lean_object* v_context_1558_, lean_object* v_bytes_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v_context_1558_, v_bytes_1559_);
lean_dec_ref(v_bytes_1559_);
lean_dec_ref(v_context_1558_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(lean_object* v_o_1562_, lean_object* v_key_1563_){
_start:
{
lean_object* v_k_1565_; lean_object* v___x_1566_; 
v_k_1565_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1565_, 0, v_key_1563_);
lean_inc_ref(v_k_1565_);
v___x_1566_ = l_Lasm_JS_Wire_encodeIO(v_k_1565_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; uint32_t v___x_1568_; uint32_t v___x_1569_; uint64_t v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref_known(v___x_1566_, 1);
v___x_1568_ = 203;
v___x_1569_ = lasm_js_value_handle(v_o_1562_);
v___x_1570_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1571_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1572_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1572_, 0, v_o_1562_);
lean_ctor_set(v___x_1572_, 1, v___x_1571_);
v___x_1573_ = lean_unsigned_to_nat(2u);
v___x_1574_ = lean_mk_empty_array_with_capacity(v___x_1573_);
lean_inc_ref(v_k_1565_);
v___x_1575_ = lean_array_push(v___x_1574_, v_k_1565_);
v___x_1576_ = lean_array_push(v___x_1575_, v___x_1572_);
v___x_1577_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1577_, 0, v___x_1576_);
v___x_1578_ = lasm_js_call(v___x_1568_, v___x_1569_, v___x_1570_, v_a_1567_, v___x_1577_);
lean_dec_ref_known(v___x_1577_, 1);
lean_dec(v_a_1567_);
if (lean_obj_tag(v___x_1578_) == 0)
{
lean_object* v_a_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v_a_1579_ = lean_ctor_get(v___x_1578_, 0);
lean_inc(v_a_1579_);
lean_dec_ref_known(v___x_1578_, 1);
v___x_1580_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1581_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1565_);
v___x_1582_ = lean_string_append(v___x_1580_, v___x_1581_);
lean_dec_ref(v___x_1581_);
v___x_1583_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v___x_1582_, v_a_1579_);
lean_dec(v_a_1579_);
lean_dec_ref(v___x_1582_);
return v___x_1583_;
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1586_; uint8_t v_isShared_1587_; uint8_t v_isSharedCheck_1591_; 
lean_dec_ref_known(v_k_1565_, 1);
v_a_1584_ = lean_ctor_get(v___x_1578_, 0);
v_isSharedCheck_1591_ = !lean_is_exclusive(v___x_1578_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1586_ = v___x_1578_;
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
else
{
lean_inc(v_a_1584_);
lean_dec(v___x_1578_);
v___x_1586_ = lean_box(0);
v_isShared_1587_ = v_isSharedCheck_1591_;
goto v_resetjp_1585_;
}
v_resetjp_1585_:
{
lean_object* v___x_1589_; 
if (v_isShared_1587_ == 0)
{
v___x_1589_ = v___x_1586_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v_a_1584_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
}
}
else
{
lean_object* v_a_1592_; lean_object* v___x_1594_; uint8_t v_isShared_1595_; uint8_t v_isSharedCheck_1599_; 
lean_dec_ref_known(v_k_1565_, 1);
lean_dec(v_o_1562_);
v_a_1592_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1599_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1599_ == 0)
{
v___x_1594_ = v___x_1566_;
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
else
{
lean_inc(v_a_1592_);
lean_dec(v___x_1566_);
v___x_1594_ = lean_box(0);
v_isShared_1595_ = v_isSharedCheck_1599_;
goto v_resetjp_1593_;
}
v_resetjp_1593_:
{
lean_object* v___x_1597_; 
if (v_isShared_1595_ == 0)
{
v___x_1597_ = v___x_1594_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v_a_1592_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0___boxed(lean_object* v_o_1600_, lean_object* v_key_1601_, lean_object* v_a_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_o_1600_, v_key_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol(lean_object* v_self_1605_){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = ((lean_object*)(l_Lasm_JS_Bun_Server_protocol___closed__0));
v___x_1608_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_self_1605_, v___x_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol___boxed(lean_object* v_self_1609_, lean_object* v_a_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l_Lasm_JS_Bun_Server_protocol(v_self_1609_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development(lean_object* v_self_1613_){
_start:
{
lean_object* v___x_1615_; lean_object* v___x_1616_; 
v___x_1615_ = ((lean_object*)(l_Lasm_JS_Bun_Server_development___closed__0));
v___x_1616_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1613_, v___x_1615_);
return v___x_1616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development___boxed(lean_object* v_self_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lasm_JS_Bun_Server_development(v_self_1617_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id(lean_object* v_self_1620_){
_start:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1623_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1620_, v___x_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id___boxed(lean_object* v_self_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_Lasm_JS_Bun_Server_id(v_self_1624_);
return v_res_1626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop(lean_object* v_self_1628_, lean_object* v_closeActiveConnections_1629_){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Bun_Server_stop___closed__0));
v___x_1632_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_closeActiveConnections_1629_);
v___x_1633_ = lean_unsigned_to_nat(1u);
v___x_1634_ = lean_mk_empty_array_with_capacity(v___x_1633_);
v___x_1635_ = lean_array_push(v___x_1634_, v___x_1632_);
v___x_1636_ = l_Lasm_JS_Web_Support_args(v___x_1635_);
v___x_1637_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1628_, v___x_1631_, v___x_1636_);
return v___x_1637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop___boxed(lean_object* v_self_1638_, lean_object* v_closeActiveConnections_1639_, lean_object* v_a_1640_){
_start:
{
lean_object* v_res_1641_; 
v_res_1641_ = l_Lasm_JS_Bun_Server_stop(v_self_1638_, v_closeActiveConnections_1639_);
lean_dec(v_closeActiveConnections_1639_);
return v_res_1641_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(uint8_t v_await_1642_, uint64_t v_extra_1643_){
_start:
{
uint64_t v___x_1644_; uint64_t v___y_1646_; 
v___x_1644_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1642_ == 0)
{
uint64_t v___x_1649_; 
v___x_1649_ = 0ULL;
v___y_1646_ = v___x_1649_;
goto v___jp_1645_;
}
else
{
uint64_t v___x_1650_; 
v___x_1650_ = 2ULL;
v___y_1646_ = v___x_1650_;
goto v___jp_1645_;
}
v___jp_1645_:
{
uint64_t v___x_1647_; uint64_t v___x_1648_; 
v___x_1647_ = lean_uint64_lor(v___x_1644_, v___y_1646_);
v___x_1648_ = lean_uint64_lor(v___x_1647_, v_extra_1643_);
return v___x_1648_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0___boxed(lean_object* v_await_1651_, lean_object* v_extra_1652_){
_start:
{
uint8_t v_await_boxed_1653_; uint64_t v_extra_boxed_1654_; uint64_t v_res_1655_; lean_object* v_r_1656_; 
v_await_boxed_1653_ = lean_unbox(v_await_1651_);
v_extra_boxed_1654_ = lean_unbox_uint64(v_extra_1652_);
lean_dec_ref(v_extra_1652_);
v_res_1655_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v_await_boxed_1653_, v_extra_boxed_1654_);
v_r_1656_ = lean_box_uint64(v_res_1655_);
return v_r_1656_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1657_; uint8_t v___x_1658_; uint64_t v___x_1659_; 
v___x_1657_ = 8ULL;
v___x_1658_ = 0;
v___x_1659_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v___x_1658_, v___x_1657_);
return v___x_1659_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(lean_object* v_o_1661_, lean_object* v_name_1662_, lean_object* v_args_1663_){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; uint64_t v___x_1668_; lean_object* v___x_1669_; 
v___x_1665_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1666_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1666_, 0, v_o_1661_);
lean_ctor_set(v___x_1666_, 1, v___x_1665_);
lean_inc_ref(v_name_1662_);
v___x_1667_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1667_, 0, v_name_1662_);
v___x_1668_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0);
v___x_1669_ = l_Lasm_JS_Value_invokeRaw(v___x_1666_, v___x_1667_, v_args_1663_, v___x_1668_);
if (lean_obj_tag(v___x_1669_) == 0)
{
lean_object* v_a_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_a_1670_ = lean_ctor_get(v___x_1669_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v___x_1669_, 1);
v___x_1671_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_1672_ = lean_string_append(v___x_1671_, v_name_1662_);
lean_dec_ref(v_name_1662_);
v___x_1673_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_1672_, v_a_1670_);
lean_dec(v_a_1670_);
lean_dec_ref(v___x_1672_);
return v___x_1673_;
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1681_; 
lean_dec_ref(v_name_1662_);
v_a_1674_ = lean_ctor_get(v___x_1669_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1669_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1676_ = v___x_1669_;
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1669_);
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
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___boxed(lean_object* v_o_1682_, lean_object* v_name_1683_, lean_object* v_args_1684_, lean_object* v_a_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_o_1682_, v_name_1683_, v_args_1684_);
return v_res_1686_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__1));
v___x_1691_ = l_Lasm_JS_Web_Support_args(v___x_1690_);
return v___x_1691_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections(lean_object* v_self_1692_){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0));
v___x_1695_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_1696_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_self_1692_, v___x_1694_, v___x_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___boxed(lean_object* v_self_1697_, lean_object* v_a_1698_){
_start:
{
lean_object* v_res_1699_; 
v_res_1699_ = l_Lasm_JS_Bun_Server_closeIdleConnections(v_self_1697_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(lean_object* v_x_1700_){
_start:
{
if (lean_obj_tag(v_x_1700_) == 0)
{
lean_object* v___x_1701_; 
v___x_1701_ = lean_box(0);
return v___x_1701_;
}
else
{
lean_object* v_val_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
v_val_1702_ = lean_ctor_get(v_x_1700_, 0);
v___x_1703_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_val_1702_);
v___x_1704_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1704_, 0, v_val_1702_);
lean_ctor_set(v___x_1704_, 1, v___x_1703_);
return v___x_1704_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0___boxed(lean_object* v_x_1705_){
_start:
{
lean_object* v_res_1706_; 
v_res_1706_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_x_1705_);
lean_dec(v_x_1705_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(lean_object* v_x_1707_){
_start:
{
if (lean_obj_tag(v_x_1707_) == 0)
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_box(0);
return v___x_1708_;
}
else
{
lean_object* v_val_1709_; 
v_val_1709_ = lean_ctor_get(v_x_1707_, 0);
lean_inc(v_val_1709_);
lean_dec_ref_known(v_x_1707_, 1);
if (lean_obj_tag(v_val_1709_) == 0)
{
lean_object* v_value_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1717_; 
v_value_1710_ = lean_ctor_get(v_val_1709_, 0);
v_isSharedCheck_1717_ = !lean_is_exclusive(v_val_1709_);
if (v_isSharedCheck_1717_ == 0)
{
v___x_1712_ = v_val_1709_;
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_value_1710_);
lean_dec(v_val_1709_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1717_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1715_; 
if (v_isShared_1713_ == 0)
{
lean_ctor_set_tag(v___x_1712_, 4);
v___x_1715_ = v___x_1712_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v_value_1710_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
else
{
lean_object* v_value_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1731_; 
v_value_1718_ = lean_ctor_get(v_val_1709_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_val_1709_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1720_ = v_val_1709_;
v_isShared_1721_ = v_isSharedCheck_1731_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_value_1718_);
lean_dec(v_val_1709_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1731_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; uint8_t v___x_1725_; 
v___x_1722_ = lean_nat_to_int(v_value_1718_);
v___x_1723_ = lean_nat_abs(v___x_1722_);
v___x_1724_ = lean_cstr_to_nat("9007199254740991");
v___x_1725_ = lean_nat_dec_le(v___x_1723_, v___x_1724_);
lean_dec(v___x_1723_);
if (v___x_1725_ == 0)
{
lean_object* v___x_1727_; 
if (v_isShared_1721_ == 0)
{
lean_ctor_set_tag(v___x_1720_, 5);
lean_ctor_set(v___x_1720_, 0, v___x_1722_);
v___x_1727_ = v___x_1720_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1722_);
v___x_1727_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
return v___x_1727_;
}
}
else
{
double v___x_1729_; lean_object* v___x_1730_; 
lean_del_object(v___x_1720_);
v___x_1729_ = l_Float_ofInt(v___x_1722_);
lean_dec(v___x_1722_);
v___x_1730_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1730_, 0, v___x_1729_);
return v___x_1730_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload(lean_object* v_self_1733_, lean_object* v_options_1734_){
_start:
{
lean_object* v_maxRequestBodySize_1736_; lean_object* v_error_1737_; lean_object* v_id_1738_; lean_object* v_hostname_1739_; lean_object* v_port_1740_; lean_object* v_reusePort_1741_; lean_object* v_ipv6Only_1742_; lean_object* v_idleTimeout_1743_; lean_object* v_fetch_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; 
v_maxRequestBodySize_1736_ = lean_ctor_get(v_options_1734_, 0);
lean_inc(v_maxRequestBodySize_1736_);
v_error_1737_ = lean_ctor_get(v_options_1734_, 1);
lean_inc(v_error_1737_);
v_id_1738_ = lean_ctor_get(v_options_1734_, 2);
lean_inc(v_id_1738_);
v_hostname_1739_ = lean_ctor_get(v_options_1734_, 3);
lean_inc(v_hostname_1739_);
v_port_1740_ = lean_ctor_get(v_options_1734_, 4);
lean_inc(v_port_1740_);
v_reusePort_1741_ = lean_ctor_get(v_options_1734_, 5);
lean_inc(v_reusePort_1741_);
v_ipv6Only_1742_ = lean_ctor_get(v_options_1734_, 6);
lean_inc(v_ipv6Only_1742_);
v_idleTimeout_1743_ = lean_ctor_get(v_options_1734_, 7);
lean_inc(v_idleTimeout_1743_);
v_fetch_1744_ = lean_ctor_get(v_options_1734_, 8);
lean_inc(v_fetch_1744_);
lean_dec_ref(v_options_1734_);
v___x_1745_ = ((lean_object*)(l_Lasm_JS_Bun_Server_reload___closed__0));
v___x_1746_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_1747_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_1736_);
v___x_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1746_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_1750_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_1737_);
lean_dec(v_error_1737_);
v___x_1751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1749_);
lean_ctor_set(v___x_1751_, 1, v___x_1750_);
v___x_1752_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1753_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_1738_);
v___x_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1754_, 0, v___x_1752_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1756_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1739_);
v___x_1757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1755_);
lean_ctor_set(v___x_1757_, 1, v___x_1756_);
v___x_1758_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1759_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_1740_);
v___x_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1760_, 0, v___x_1758_);
lean_ctor_set(v___x_1760_, 1, v___x_1759_);
v___x_1761_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_1762_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1741_);
lean_dec(v_reusePort_1741_);
v___x_1763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1763_, 0, v___x_1761_);
lean_ctor_set(v___x_1763_, 1, v___x_1762_);
v___x_1764_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_1765_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_1742_);
lean_dec(v_ipv6Only_1742_);
v___x_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1764_);
lean_ctor_set(v___x_1766_, 1, v___x_1765_);
v___x_1767_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_1768_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_1743_);
v___x_1769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1767_);
lean_ctor_set(v___x_1769_, 1, v___x_1768_);
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_1771_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1772_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1772_, 0, v_fetch_1744_);
lean_ctor_set(v___x_1772_, 1, v___x_1771_);
v___x_1773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1770_);
lean_ctor_set(v___x_1773_, 1, v___x_1772_);
v___x_1774_ = lean_unsigned_to_nat(9u);
v___x_1775_ = lean_mk_empty_array_with_capacity(v___x_1774_);
v___x_1776_ = lean_array_push(v___x_1775_, v___x_1748_);
v___x_1777_ = lean_array_push(v___x_1776_, v___x_1751_);
v___x_1778_ = lean_array_push(v___x_1777_, v___x_1754_);
v___x_1779_ = lean_array_push(v___x_1778_, v___x_1757_);
v___x_1780_ = lean_array_push(v___x_1779_, v___x_1760_);
v___x_1781_ = lean_array_push(v___x_1780_, v___x_1763_);
v___x_1782_ = lean_array_push(v___x_1781_, v___x_1766_);
v___x_1783_ = lean_array_push(v___x_1782_, v___x_1769_);
v___x_1784_ = lean_array_push(v___x_1783_, v___x_1773_);
v___x_1785_ = l_Lasm_JS_Web_Support_fields(v___x_1784_);
lean_dec_ref(v___x_1784_);
v___x_1786_ = lean_unsigned_to_nat(1u);
v___x_1787_ = lean_mk_empty_array_with_capacity(v___x_1786_);
v___x_1788_ = lean_array_push(v___x_1787_, v___x_1785_);
v___x_1789_ = l_Lasm_JS_Web_Support_args(v___x_1788_);
v___x_1790_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1733_, v___x_1745_, v___x_1789_);
if (lean_obj_tag(v___x_1790_) == 0)
{
lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1798_; 
v_a_1791_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1798_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1798_ == 0)
{
v___x_1793_ = v___x_1790_;
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v___x_1790_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1798_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1796_; 
if (v_isShared_1794_ == 0)
{
v___x_1796_ = v___x_1793_;
goto v_reusejp_1795_;
}
else
{
lean_object* v_reuseFailAlloc_1797_; 
v_reuseFailAlloc_1797_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1797_, 0, v_a_1791_);
v___x_1796_ = v_reuseFailAlloc_1797_;
goto v_reusejp_1795_;
}
v_reusejp_1795_:
{
return v___x_1796_;
}
}
}
else
{
lean_object* v_a_1799_; lean_object* v___x_1801_; uint8_t v_isShared_1802_; uint8_t v_isSharedCheck_1806_; 
v_a_1799_ = lean_ctor_get(v___x_1790_, 0);
v_isSharedCheck_1806_ = !lean_is_exclusive(v___x_1790_);
if (v_isSharedCheck_1806_ == 0)
{
v___x_1801_ = v___x_1790_;
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
else
{
lean_inc(v_a_1799_);
lean_dec(v___x_1790_);
v___x_1801_ = lean_box(0);
v_isShared_1802_ = v_isSharedCheck_1806_;
goto v_resetjp_1800_;
}
v_resetjp_1800_:
{
lean_object* v___x_1804_; 
if (v_isShared_1802_ == 0)
{
v___x_1804_ = v___x_1801_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v_a_1799_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload___boxed(lean_object* v_self_1807_, lean_object* v_options_1808_, lean_object* v_a_1809_){
_start:
{
lean_object* v_res_1810_; 
v_res_1810_ = l_Lasm_JS_Bun_Server_reload(v_self_1807_, v_options_1808_);
return v_res_1810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0(lean_object* v_x_1811_){
_start:
{
if (lean_obj_tag(v_x_1811_) == 0)
{
lean_object* v_a_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1821_; 
v_a_1813_ = lean_ctor_get(v_x_1811_, 0);
v_isSharedCheck_1821_ = !lean_is_exclusive(v_x_1811_);
if (v_isSharedCheck_1821_ == 0)
{
v___x_1815_ = v_x_1811_;
v_isShared_1816_ = v_isSharedCheck_1821_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_a_1813_);
lean_dec(v_x_1811_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1821_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
lean_object* v___x_1818_; 
if (v_isShared_1816_ == 0)
{
v___x_1818_ = v___x_1815_;
goto v_reusejp_1817_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_a_1813_);
v___x_1818_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1817_;
}
v_reusejp_1817_:
{
lean_object* v___x_1819_; 
v___x_1819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
return v___x_1819_;
}
}
}
else
{
lean_object* v_a_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1830_; 
v_a_1822_ = lean_ctor_get(v_x_1811_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v_x_1811_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1824_ = v_x_1811_;
v_isShared_1825_ = v_isSharedCheck_1830_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_a_1822_);
lean_dec(v_x_1811_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1830_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v___x_1827_; 
if (v_isShared_1825_ == 0)
{
v___x_1827_ = v___x_1824_;
goto v_reusejp_1826_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v_a_1822_);
v___x_1827_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1826_;
}
v_reusejp_1826_:
{
lean_object* v___x_1828_; 
v___x_1828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
return v___x_1828_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0___boxed(lean_object* v_x_1831_, lean_object* v___y_1832_){
_start:
{
lean_object* v_res_1833_; 
v_res_1833_ = l_Lasm_JS_Bun_Server_fetch___lam__0(v_x_1831_);
return v_res_1833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch(lean_object* v_self_1835_, lean_object* v_request_1836_){
_start:
{
lean_object* v___f_1838_; lean_object* v___x_1839_; lean_object* v___y_1841_; 
v___f_1838_ = ((lean_object*)(l_Lasm_JS_Bun_Server_fetch___closed__0));
v___x_1839_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
if (lean_obj_tag(v_request_1836_) == 0)
{
lean_object* v_value_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v_value_1850_ = lean_ctor_get(v_request_1836_, 0);
lean_inc(v_value_1850_);
lean_dec_ref_known(v_request_1836_, 1);
v___x_1851_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1852_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1852_, 0, v_value_1850_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
v___y_1841_ = v___x_1852_;
goto v___jp_1840_;
}
else
{
lean_object* v_value_1853_; lean_object* v___x_1855_; uint8_t v_isShared_1856_; uint8_t v_isSharedCheck_1860_; 
v_value_1853_ = lean_ctor_get(v_request_1836_, 0);
v_isSharedCheck_1860_ = !lean_is_exclusive(v_request_1836_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1855_ = v_request_1836_;
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
else
{
lean_inc(v_value_1853_);
lean_dec(v_request_1836_);
v___x_1855_ = lean_box(0);
v_isShared_1856_ = v_isSharedCheck_1860_;
goto v_resetjp_1854_;
}
v_resetjp_1854_:
{
lean_object* v___x_1858_; 
if (v_isShared_1856_ == 0)
{
lean_ctor_set_tag(v___x_1855_, 4);
v___x_1858_ = v___x_1855_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v_value_1853_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
v___y_1841_ = v___x_1858_;
goto v___jp_1840_;
}
}
}
v___jp_1840_:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; uint8_t v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1842_ = lean_unsigned_to_nat(1u);
v___x_1843_ = lean_mk_empty_array_with_capacity(v___x_1842_);
v___x_1844_ = lean_array_push(v___x_1843_, v___y_1841_);
v___x_1845_ = l_Lasm_JS_Web_Support_args(v___x_1844_);
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = 0;
v___x_1848_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1835_, v___x_1839_, v___x_1845_);
v___x_1849_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1846_, v___x_1847_, v___x_1848_, v___f_1838_);
return v___x_1849_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___boxed(lean_object* v_self_1861_, lean_object* v_request_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = l_Lasm_JS_Bun_Server_fetch(v_self_1861_, v_request_1862_);
return v_res_1864_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(uint8_t v_await_1865_, uint64_t v_extra_1866_){
_start:
{
uint64_t v___x_1867_; uint64_t v___y_1869_; 
v___x_1867_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1865_ == 0)
{
uint64_t v___x_1872_; 
v___x_1872_ = 0ULL;
v___y_1869_ = v___x_1872_;
goto v___jp_1868_;
}
else
{
uint64_t v___x_1873_; 
v___x_1873_ = 2ULL;
v___y_1869_ = v___x_1873_;
goto v___jp_1868_;
}
v___jp_1868_:
{
uint64_t v___x_1870_; uint64_t v___x_1871_; 
v___x_1870_ = lean_uint64_lor(v___x_1867_, v___y_1869_);
v___x_1871_ = lean_uint64_lor(v___x_1870_, v_extra_1866_);
return v___x_1871_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0___boxed(lean_object* v_await_1874_, lean_object* v_extra_1875_){
_start:
{
uint8_t v_await_boxed_1876_; uint64_t v_extra_boxed_1877_; uint64_t v_res_1878_; lean_object* v_r_1879_; 
v_await_boxed_1876_ = lean_unbox(v_await_1874_);
v_extra_boxed_1877_ = lean_unbox_uint64(v_extra_1875_);
lean_dec_ref(v_extra_1875_);
v_res_1878_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v_await_boxed_1876_, v_extra_boxed_1877_);
v_r_1879_ = lean_box_uint64(v_res_1878_);
return v_r_1879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(lean_object* v_d_1886_, lean_object* v_key_1887_){
_start:
{
if (lean_obj_tag(v_d_1886_) == 8)
{
lean_object* v___x_1888_; lean_object* v___x_1890_; uint8_t v_isShared_1891_; uint8_t v_isSharedCheck_1915_; 
v___x_1888_ = l_Lasm_JS_Data_field(v_d_1886_, v_key_1887_);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_d_1886_);
if (v_isSharedCheck_1915_ == 0)
{
lean_object* v_unused_1916_; 
v_unused_1916_ = lean_ctor_get(v_d_1886_, 0);
lean_dec(v_unused_1916_);
v___x_1890_ = v_d_1886_;
v_isShared_1891_ = v_isSharedCheck_1915_;
goto v_resetjp_1889_;
}
else
{
lean_dec(v_d_1886_);
v___x_1890_ = lean_box(0);
v_isShared_1891_ = v_isSharedCheck_1915_;
goto v_resetjp_1889_;
}
v_resetjp_1889_:
{
if (lean_obj_tag(v___x_1888_) == 4)
{
lean_object* v_s_1908_; lean_object* v___x_1909_; uint8_t v___x_1910_; 
v_s_1908_ = lean_ctor_get(v___x_1888_, 0);
v___x_1909_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0));
v___x_1910_ = lean_string_dec_eq(v_s_1908_, v___x_1909_);
if (v___x_1910_ == 0)
{
lean_object* v___x_1911_; uint8_t v___x_1912_; 
v___x_1911_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2));
v___x_1912_ = lean_string_dec_eq(v_s_1908_, v___x_1911_);
if (v___x_1912_ == 0)
{
goto v___jp_1892_;
}
else
{
lean_object* v___x_1913_; 
lean_dec_ref_known(v___x_1888_, 1);
lean_del_object(v___x_1890_);
v___x_1913_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2));
return v___x_1913_;
}
}
else
{
lean_object* v___x_1914_; 
lean_dec_ref_known(v___x_1888_, 1);
lean_del_object(v___x_1890_);
v___x_1914_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3));
return v___x_1914_;
}
}
else
{
goto v___jp_1892_;
}
v___jp_1892_:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1906_; 
v___x_1893_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1894_ = lean_string_append(v___x_1893_, v_key_1887_);
v___x_1895_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1896_ = lean_string_append(v___x_1894_, v___x_1895_);
v___x_1897_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1));
v___x_1898_ = lean_string_append(v___x_1896_, v___x_1897_);
v___x_1899_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1900_ = lean_string_append(v___x_1898_, v___x_1899_);
v___x_1901_ = l_Lasm_JS_Data_describe(v___x_1888_);
v___x_1902_ = lean_string_append(v___x_1900_, v___x_1901_);
lean_dec_ref(v___x_1901_);
v___x_1903_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___x_1904_ = lean_string_append(v___x_1902_, v___x_1903_);
if (v_isShared_1891_ == 0)
{
lean_ctor_set_tag(v___x_1890_, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1904_);
v___x_1906_ = v___x_1890_;
goto v_reusejp_1905_;
}
else
{
lean_object* v_reuseFailAlloc_1907_; 
v_reuseFailAlloc_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1907_, 0, v___x_1904_);
v___x_1906_ = v_reuseFailAlloc_1907_;
goto v_reusejp_1905_;
}
v_reusejp_1905_:
{
return v___x_1906_;
}
}
}
}
else
{
lean_object* v___x_1917_; 
lean_dec(v_d_1886_);
v___x_1917_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4));
return v___x_1917_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_d_1918_, lean_object* v_key_1919_){
_start:
{
lean_object* v_res_1920_; 
v_res_1920_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_1918_, v_key_1919_);
lean_dec_ref(v_key_1919_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_1924_, lean_object* v_key_1925_){
_start:
{
if (lean_obj_tag(v_d_1924_) == 8)
{
lean_object* v___x_1926_; lean_object* v___x_1928_; uint8_t v_isShared_1929_; uint8_t v_isSharedCheck_1969_; 
v___x_1926_ = l_Lasm_JS_Data_field(v_d_1924_, v_key_1925_);
v_isSharedCheck_1969_ = !lean_is_exclusive(v_d_1924_);
if (v_isSharedCheck_1969_ == 0)
{
lean_object* v_unused_1970_; 
v_unused_1970_ = lean_ctor_get(v_d_1924_, 0);
lean_dec(v_unused_1970_);
v___x_1928_ = v_d_1924_;
v_isShared_1929_ = v_isSharedCheck_1969_;
goto v_resetjp_1927_;
}
else
{
lean_dec(v_d_1924_);
v___x_1928_ = lean_box(0);
v_isShared_1929_ = v_isSharedCheck_1969_;
goto v_resetjp_1927_;
}
v_resetjp_1927_:
{
lean_object* v_a_1931_; lean_object* v_a_1957_; 
switch(lean_obj_tag(v___x_1926_))
{
case 3:
{
double v_n_1963_; lean_object* v___x_1964_; 
v_n_1963_ = lean_ctor_get_float(v___x_1926_, 0);
v___x_1964_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1963_);
if (lean_obj_tag(v___x_1964_) == 0)
{
lean_object* v___x_1965_; 
v___x_1965_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1931_ = v___x_1965_;
goto v___jp_1930_;
}
else
{
lean_object* v_val_1966_; 
v_val_1966_ = lean_ctor_get(v___x_1964_, 0);
lean_inc(v_val_1966_);
lean_dec_ref_known(v___x_1964_, 1);
v_a_1957_ = v_val_1966_;
goto v___jp_1956_;
}
}
case 5:
{
lean_object* v_i_1967_; 
v_i_1967_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_i_1967_);
v_a_1957_ = v_i_1967_;
goto v___jp_1956_;
}
default: 
{
lean_object* v___x_1968_; 
v___x_1968_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1931_ = v___x_1968_;
goto v___jp_1930_;
}
}
v___jp_1930_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; uint8_t v___x_1944_; 
v___x_1932_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1933_ = lean_string_append(v___x_1932_, v_key_1925_);
v___x_1934_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1935_ = lean_string_append(v___x_1933_, v___x_1934_);
v___x_1936_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0));
v___x_1937_ = lean_string_append(v___x_1935_, v___x_1936_);
v___x_1938_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1939_ = lean_string_append(v___x_1937_, v___x_1938_);
v___x_1940_ = l_Lasm_JS_Data_describe(v___x_1926_);
v___x_1941_ = lean_string_append(v___x_1939_, v___x_1940_);
lean_dec_ref(v___x_1940_);
v___x_1942_ = lean_string_utf8_byte_size(v_a_1931_);
v___x_1943_ = lean_unsigned_to_nat(0u);
v___x_1944_ = lean_nat_dec_eq(v___x_1942_, v___x_1943_);
if (v___x_1944_ == 0)
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1951_; 
v___x_1945_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1946_ = lean_string_append(v___x_1945_, v_a_1931_);
v___x_1947_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1948_ = lean_string_append(v___x_1946_, v___x_1947_);
v___x_1949_ = lean_string_append(v___x_1941_, v___x_1948_);
lean_dec_ref(v___x_1948_);
if (v_isShared_1929_ == 0)
{
lean_ctor_set_tag(v___x_1928_, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1949_);
v___x_1951_ = v___x_1928_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v___x_1949_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
else
{
lean_object* v___x_1954_; 
if (v_isShared_1929_ == 0)
{
lean_ctor_set_tag(v___x_1928_, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1941_);
v___x_1954_ = v___x_1928_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v___x_1941_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
v___jp_1956_:
{
lean_object* v___x_1958_; uint8_t v___x_1959_; 
v___x_1958_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1959_ = lean_int_dec_le(v___x_1958_, v_a_1957_);
if (v___x_1959_ == 0)
{
lean_object* v___x_1960_; 
lean_dec(v_a_1957_);
v___x_1960_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1931_ = v___x_1960_;
goto v___jp_1930_;
}
else
{
lean_object* v___x_1961_; lean_object* v___x_1962_; 
lean_del_object(v___x_1928_);
lean_dec(v___x_1926_);
v___x_1961_ = l_Int_toNat(v_a_1957_);
lean_dec(v_a_1957_);
v___x_1962_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1962_, 0, v___x_1961_);
return v___x_1962_;
}
}
}
}
else
{
lean_object* v___x_1971_; 
lean_dec(v_d_1924_);
v___x_1971_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1));
return v___x_1971_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_1972_, lean_object* v_key_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_1972_, v_key_1973_);
lean_dec_ref(v_key_1973_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_1978_, lean_object* v_key_1979_){
_start:
{
if (lean_obj_tag(v_d_1978_) == 8)
{
lean_object* v___x_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_2005_; 
v___x_1980_ = l_Lasm_JS_Data_field(v_d_1978_, v_key_1979_);
v_isSharedCheck_2005_ = !lean_is_exclusive(v_d_1978_);
if (v_isSharedCheck_2005_ == 0)
{
lean_object* v_unused_2006_; 
v_unused_2006_ = lean_ctor_get(v_d_1978_, 0);
lean_dec(v_unused_2006_);
v___x_1982_ = v_d_1978_;
v_isShared_1983_ = v_isSharedCheck_2005_;
goto v_resetjp_1981_;
}
else
{
lean_dec(v_d_1978_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_2005_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
if (lean_obj_tag(v___x_1980_) == 4)
{
lean_object* v_s_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_del_object(v___x_1982_);
v_s_1984_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1980_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_s_1984_);
lean_dec(v___x_1980_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
lean_ctor_set_tag(v___x_1986_, 1);
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_s_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
else
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2003_; 
v___x_1992_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1993_ = lean_string_append(v___x_1992_, v_key_1979_);
v___x_1994_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1995_ = lean_string_append(v___x_1993_, v___x_1994_);
v___x_1996_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1997_ = lean_string_append(v___x_1995_, v___x_1996_);
v___x_1998_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1999_ = lean_string_append(v___x_1997_, v___x_1998_);
v___x_2000_ = l_Lasm_JS_Data_describe(v___x_1980_);
v___x_2001_ = lean_string_append(v___x_1999_, v___x_2000_);
lean_dec_ref(v___x_2000_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set_tag(v___x_1982_, 0);
lean_ctor_set(v___x_1982_, 0, v___x_2001_);
v___x_2003_ = v___x_1982_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v___x_2001_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
else
{
lean_object* v___x_2007_; 
lean_dec(v_d_1978_);
v___x_2007_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_2007_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2008_, lean_object* v_key_2009_){
_start:
{
lean_object* v_res_2010_; 
v_res_2010_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_2008_, v_key_2009_);
lean_dec_ref(v_key_2009_);
return v_res_2010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(lean_object* v_context_2012_, lean_object* v_d_2013_){
_start:
{
lean_object* v___y_2019_; lean_object* v___y_2020_; lean_object* v___y_2025_; lean_object* v_received_2026_; lean_object* v___y_2045_; lean_object* v_a_2048_; 
switch(lean_obj_tag(v_d_2013_))
{
case 1:
{
goto v___jp_2015_;
}
case 0:
{
goto v___jp_2015_;
}
default: 
{
lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2072_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
lean_inc(v_d_2013_);
v___x_2073_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_2013_, v___x_2072_);
if (lean_obj_tag(v___x_2073_) == 0)
{
lean_object* v_a_2074_; 
v_a_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2074_);
lean_dec_ref_known(v___x_2073_, 1);
v_a_2048_ = v_a_2074_;
goto v___jp_2047_;
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v_a_2075_ = lean_ctor_get(v___x_2073_, 0);
lean_inc(v_a_2075_);
lean_dec_ref_known(v___x_2073_, 1);
v___x_2076_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
lean_inc(v_d_2013_);
v___x_2077_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_2013_, v___x_2076_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; 
lean_dec(v_a_2075_);
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc(v_a_2078_);
lean_dec_ref_known(v___x_2077_, 1);
v_a_2048_ = v_a_2078_;
goto v___jp_2047_;
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2099_; 
v_a_2079_ = lean_ctor_get(v___x_2077_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2077_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2081_ = v___x_2077_;
v_isShared_2082_ = v_isSharedCheck_2099_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2077_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2099_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2083_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
lean_inc(v_d_2013_);
v___x_2084_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_2013_, v___x_2083_);
if (lean_obj_tag(v___x_2084_) == 0)
{
lean_object* v_a_2085_; 
lean_del_object(v___x_2081_);
lean_dec(v_a_2079_);
lean_dec(v_a_2075_);
v_a_2085_ = lean_ctor_get(v___x_2084_, 0);
lean_inc(v_a_2085_);
lean_dec_ref_known(v___x_2084_, 1);
v_a_2048_ = v_a_2085_;
goto v___jp_2047_;
}
else
{
lean_object* v_a_2086_; lean_object* v___x_2088_; uint8_t v_isShared_2089_; uint8_t v_isSharedCheck_2098_; 
lean_dec(v_d_2013_);
v_a_2086_ = lean_ctor_get(v___x_2084_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2084_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2088_ = v___x_2084_;
v_isShared_2089_ = v_isSharedCheck_2098_;
goto v_resetjp_2087_;
}
else
{
lean_inc(v_a_2086_);
lean_dec(v___x_2084_);
v___x_2088_ = lean_box(0);
v_isShared_2089_ = v_isSharedCheck_2098_;
goto v_resetjp_2087_;
}
v_resetjp_2087_:
{
lean_object* v___x_2090_; uint8_t v___x_2091_; lean_object* v___x_2093_; 
v___x_2090_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2090_, 0, v_a_2075_);
lean_ctor_set(v___x_2090_, 1, v_a_2079_);
v___x_2091_ = lean_unbox(v_a_2086_);
lean_dec(v_a_2086_);
lean_ctor_set_uint8(v___x_2090_, sizeof(void*)*2, v___x_2091_);
if (v_isShared_2089_ == 0)
{
lean_ctor_set(v___x_2088_, 0, v___x_2090_);
v___x_2093_ = v___x_2088_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v___x_2090_);
v___x_2093_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2095_; 
if (v_isShared_2082_ == 0)
{
lean_ctor_set_tag(v___x_2081_, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2093_);
v___x_2095_ = v___x_2081_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2096_; 
v_reuseFailAlloc_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2096_, 0, v___x_2093_);
v___x_2095_ = v_reuseFailAlloc_2096_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
return v___x_2095_;
}
}
}
}
}
}
}
}
}
v___jp_2015_:
{
lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2016_ = lean_box(0);
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v___x_2016_);
return v___x_2017_;
}
v___jp_2018_:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; 
v___x_2021_ = lean_string_append(v___y_2019_, v___y_2020_);
lean_dec_ref(v___y_2020_);
v___x_2022_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2022_, 0, v___x_2021_);
v___x_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2023_, 0, v___x_2022_);
return v___x_2023_;
}
v___jp_2024_:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; uint8_t v___x_2038_; 
v___x_2027_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_2028_ = lean_string_append(v___x_2027_, v_context_2012_);
v___x_2029_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_2030_ = lean_string_append(v___x_2028_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0));
v___x_2032_ = lean_string_append(v___x_2030_, v___x_2031_);
v___x_2033_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_2034_ = lean_string_append(v___x_2032_, v___x_2033_);
v___x_2035_ = lean_string_append(v___x_2034_, v_received_2026_);
lean_dec_ref(v_received_2026_);
v___x_2036_ = lean_string_utf8_byte_size(v___y_2025_);
v___x_2037_ = lean_unsigned_to_nat(0u);
v___x_2038_ = lean_nat_dec_eq(v___x_2036_, v___x_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2039_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_2040_ = lean_string_append(v___x_2039_, v___y_2025_);
lean_dec_ref(v___y_2025_);
v___x_2041_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_2042_ = lean_string_append(v___x_2040_, v___x_2041_);
v___y_2019_ = v___x_2035_;
v___y_2020_ = v___x_2042_;
goto v___jp_2018_;
}
else
{
lean_object* v___x_2043_; 
lean_dec_ref(v___y_2025_);
v___x_2043_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_2019_ = v___x_2035_;
v___y_2020_ = v___x_2043_;
goto v___jp_2018_;
}
}
v___jp_2044_:
{
lean_object* v___x_2046_; 
v___x_2046_ = l_Lasm_JS_Data_describe(v_d_2013_);
v___y_2025_ = v___y_2045_;
v_received_2026_ = v___x_2046_;
goto v___jp_2024_;
}
v___jp_2047_:
{
if (lean_obj_tag(v_d_2013_) == 9)
{
lean_object* v_value_2049_; lean_object* v_description_2050_; lean_object* v___x_2051_; uint8_t v___x_2052_; 
v_value_2049_ = lean_ctor_get(v_d_2013_, 0);
v_description_2050_ = lean_ctor_get(v_d_2013_, 1);
v___x_2051_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2052_ = lean_string_dec_eq(v_description_2050_, v___x_2051_);
if (v___x_2052_ == 0)
{
v___y_2045_ = v_a_2048_;
goto v___jp_2044_;
}
else
{
lean_object* v___x_2054_; uint8_t v_isShared_2055_; uint8_t v_isSharedCheck_2069_; 
lean_inc(v_value_2049_);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_d_2013_);
if (v_isSharedCheck_2069_ == 0)
{
lean_object* v_unused_2070_; lean_object* v_unused_2071_; 
v_unused_2070_ = lean_ctor_get(v_d_2013_, 1);
lean_dec(v_unused_2070_);
v_unused_2071_ = lean_ctor_get(v_d_2013_, 0);
lean_dec(v_unused_2071_);
v___x_2054_ = v_d_2013_;
v_isShared_2055_ = v_isSharedCheck_2069_;
goto v_resetjp_2053_;
}
else
{
lean_dec(v_d_2013_);
v___x_2054_ = lean_box(0);
v_isShared_2055_ = v_isSharedCheck_2069_;
goto v_resetjp_2053_;
}
v_resetjp_2053_:
{
uint32_t v___x_2056_; uint64_t v___x_2057_; lean_object* v___x_2059_; 
v___x_2056_ = 206;
v___x_2057_ = 0ULL;
lean_inc(v_value_2049_);
if (v_isShared_2055_ == 0)
{
lean_ctor_set(v___x_2054_, 1, v___x_2051_);
v___x_2059_ = v___x_2054_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_value_2049_);
lean_ctor_set(v_reuseFailAlloc_2068_, 1, v___x_2051_);
v___x_2059_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
uint32_t v___x_2060_; lean_object* v___x_2061_; 
v___x_2060_ = lasm_js_value_handle(v_value_2049_);
lean_dec(v_value_2049_);
v___x_2061_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2056_, v___x_2057_, v___x_2059_, v___x_2060_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; uint8_t v___x_2063_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
lean_inc(v_a_2062_);
lean_dec_ref_known(v___x_2061_, 1);
v___x_2063_ = lean_string_validate_utf8(v_a_2062_);
if (v___x_2063_ == 0)
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
lean_dec(v_a_2062_);
v___x_2064_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6);
v___x_2065_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2064_);
v___y_2025_ = v_a_2048_;
v_received_2026_ = v___x_2065_;
goto v___jp_2024_;
}
else
{
lean_object* v___x_2066_; 
v___x_2066_ = lean_string_from_utf8_unchecked(v_a_2062_);
v___y_2025_ = v_a_2048_;
v_received_2026_ = v___x_2066_;
goto v___jp_2024_;
}
}
else
{
lean_object* v___x_2067_; 
lean_dec_ref_known(v___x_2061_, 1);
v___x_2067_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7));
v___y_2025_ = v_a_2048_;
v_received_2026_ = v___x_2067_;
goto v___jp_2024_;
}
}
}
}
}
else
{
v___y_2045_ = v_a_2048_;
goto v___jp_2044_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2100_, lean_object* v_d_2101_, lean_object* v_a_2102_){
_start:
{
lean_object* v_res_2103_; 
v_res_2103_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_2100_, v_d_2101_);
lean_dec_ref(v_context_2100_);
return v_res_2103_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(lean_object* v_context_2104_, lean_object* v_bytes_2105_){
_start:
{
lean_object* v___x_2107_; 
v___x_2107_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2105_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2109_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref_known(v___x_2107_, 1);
v___x_2109_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_2104_, v_a_2108_);
return v___x_2109_;
}
else
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2117_; 
v_a_2110_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2112_ = v___x_2107_;
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2107_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2117_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2115_; 
if (v_isShared_2113_ == 0)
{
v___x_2115_ = v___x_2112_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v_a_2110_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1___boxed(lean_object* v_context_2118_, lean_object* v_bytes_2119_, lean_object* v_a_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v_context_2118_, v_bytes_2119_);
lean_dec_ref(v_bytes_2119_);
lean_dec_ref(v_context_2118_);
return v_res_2121_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2122_; uint8_t v___x_2123_; uint64_t v___x_2124_; 
v___x_2122_ = 8ULL;
v___x_2123_ = 0;
v___x_2124_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v___x_2123_, v___x_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(lean_object* v_o_2125_, lean_object* v_name_2126_, lean_object* v_args_2127_){
_start:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; uint64_t v___x_2132_; lean_object* v___x_2133_; 
v___x_2129_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2130_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2130_, 0, v_o_2125_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
lean_inc_ref(v_name_2126_);
v___x_2131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2131_, 0, v_name_2126_);
v___x_2132_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0);
v___x_2133_ = l_Lasm_JS_Value_invokeRaw(v___x_2130_, v___x_2131_, v_args_2127_, v___x_2132_);
if (lean_obj_tag(v___x_2133_) == 0)
{
lean_object* v_a_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref_known(v___x_2133_, 1);
v___x_2135_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_2136_ = lean_string_append(v___x_2135_, v_name_2126_);
lean_dec_ref(v_name_2126_);
v___x_2137_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v___x_2136_, v_a_2134_);
lean_dec(v_a_2134_);
lean_dec_ref(v___x_2136_);
return v___x_2137_;
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
lean_dec_ref(v_name_2126_);
v_a_2138_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___x_2133_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2133_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___boxed(lean_object* v_o_2146_, lean_object* v_name_2147_, lean_object* v_args_2148_, lean_object* v_a_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_o_2146_, v_name_2147_, v_args_2148_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP(lean_object* v_self_2152_, lean_object* v_request_2153_){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; 
v___x_2155_ = ((lean_object*)(l_Lasm_JS_Bun_Server_requestIP___closed__0));
v___x_2156_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2157_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2157_, 0, v_request_2153_);
lean_ctor_set(v___x_2157_, 1, v___x_2156_);
v___x_2158_ = lean_unsigned_to_nat(1u);
v___x_2159_ = lean_mk_empty_array_with_capacity(v___x_2158_);
v___x_2160_ = lean_array_push(v___x_2159_, v___x_2157_);
v___x_2161_ = l_Lasm_JS_Web_Support_args(v___x_2160_);
v___x_2162_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_self_2152_, v___x_2155_, v___x_2161_);
return v___x_2162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP___boxed(lean_object* v_self_2163_, lean_object* v_request_2164_, lean_object* v_a_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l_Lasm_JS_Bun_Server_requestIP(v_self_2163_, v_request_2164_);
return v_res_2166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout(lean_object* v_self_2168_, lean_object* v_request_2169_, lean_object* v_seconds_2170_){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___y_2176_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; uint8_t v___x_2186_; 
v___x_2172_ = ((lean_object*)(l_Lasm_JS_Bun_Server_timeout___closed__0));
v___x_2173_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2174_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2174_, 0, v_request_2169_);
lean_ctor_set(v___x_2174_, 1, v___x_2173_);
v___x_2183_ = lean_nat_to_int(v_seconds_2170_);
v___x_2184_ = lean_nat_abs(v___x_2183_);
v___x_2185_ = lean_cstr_to_nat("9007199254740991");
v___x_2186_ = lean_nat_dec_le(v___x_2184_, v___x_2185_);
lean_dec(v___x_2184_);
if (v___x_2186_ == 0)
{
lean_object* v___x_2187_; 
v___x_2187_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2183_);
v___y_2176_ = v___x_2187_;
goto v___jp_2175_;
}
else
{
double v___x_2188_; lean_object* v___x_2189_; 
v___x_2188_ = l_Float_ofInt(v___x_2183_);
lean_dec(v___x_2183_);
v___x_2189_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2189_, 0, v___x_2188_);
v___y_2176_ = v___x_2189_;
goto v___jp_2175_;
}
v___jp_2175_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2177_ = lean_unsigned_to_nat(2u);
v___x_2178_ = lean_mk_empty_array_with_capacity(v___x_2177_);
v___x_2179_ = lean_array_push(v___x_2178_, v___x_2174_);
v___x_2180_ = lean_array_push(v___x_2179_, v___y_2176_);
v___x_2181_ = l_Lasm_JS_Web_Support_args(v___x_2180_);
v___x_2182_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2168_, v___x_2172_, v___x_2181_);
return v___x_2182_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout___boxed(lean_object* v_self_2190_, lean_object* v_request_2191_, lean_object* v_seconds_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l_Lasm_JS_Bun_Server_timeout(v_self_2190_, v_request_2191_, v_seconds_2192_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref(lean_object* v_self_2196_){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2198_ = ((lean_object*)(l_Lasm_JS_Bun_Server_ref___closed__0));
v___x_2199_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2200_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2196_, v___x_2198_, v___x_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref___boxed(lean_object* v_self_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lasm_JS_Bun_Server_ref(v_self_2201_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref(lean_object* v_self_2205_){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; 
v___x_2207_ = ((lean_object*)(l_Lasm_JS_Bun_Server_unref___closed__0));
v___x_2208_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2209_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2205_, v___x_2207_, v___x_2208_);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref___boxed(lean_object* v_self_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lasm_JS_Bun_Server_unref(v_self_2210_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve(lean_object* v_options_2222_){
_start:
{
lean_object* v_maxRequestBodySize_2224_; lean_object* v_error_2225_; lean_object* v_id_2226_; lean_object* v_hostname_2227_; lean_object* v_port_2228_; lean_object* v_reusePort_2229_; lean_object* v_ipv6Only_2230_; lean_object* v_idleTimeout_2231_; lean_object* v_fetch_2232_; uint8_t v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v_maxRequestBodySize_2224_ = lean_ctor_get(v_options_2222_, 0);
lean_inc(v_maxRequestBodySize_2224_);
v_error_2225_ = lean_ctor_get(v_options_2222_, 1);
lean_inc(v_error_2225_);
v_id_2226_ = lean_ctor_get(v_options_2222_, 2);
lean_inc(v_id_2226_);
v_hostname_2227_ = lean_ctor_get(v_options_2222_, 3);
lean_inc(v_hostname_2227_);
v_port_2228_ = lean_ctor_get(v_options_2222_, 4);
lean_inc(v_port_2228_);
v_reusePort_2229_ = lean_ctor_get(v_options_2222_, 5);
lean_inc(v_reusePort_2229_);
v_ipv6Only_2230_ = lean_ctor_get(v_options_2222_, 6);
lean_inc(v_ipv6Only_2230_);
v_idleTimeout_2231_ = lean_ctor_get(v_options_2222_, 7);
lean_inc(v_idleTimeout_2231_);
v_fetch_2232_ = lean_ctor_get(v_options_2222_, 8);
lean_inc(v_fetch_2232_);
lean_dec_ref(v_options_2222_);
v___x_2233_ = 0;
v___x_2234_ = lean_unsigned_to_nat(1u);
v___x_2235_ = ((lean_object*)(l_Lasm_JS_Bun_serve___closed__3));
v___x_2236_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_2237_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_2224_);
v___x_2238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2238_, 0, v___x_2236_);
lean_ctor_set(v___x_2238_, 1, v___x_2237_);
v___x_2239_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_2240_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_2225_);
lean_dec(v_error_2225_);
v___x_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2241_, 0, v___x_2239_);
lean_ctor_set(v___x_2241_, 1, v___x_2240_);
v___x_2242_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_2243_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_2226_);
v___x_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2242_);
lean_ctor_set(v___x_2244_, 1, v___x_2243_);
v___x_2245_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_2246_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2227_);
v___x_2247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2247_, 0, v___x_2245_);
lean_ctor_set(v___x_2247_, 1, v___x_2246_);
v___x_2248_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_2249_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_2228_);
v___x_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2248_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_2252_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2229_);
lean_dec(v_reusePort_2229_);
v___x_2253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2253_, 0, v___x_2251_);
lean_ctor_set(v___x_2253_, 1, v___x_2252_);
v___x_2254_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_2255_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_2230_);
lean_dec(v_ipv6Only_2230_);
v___x_2256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2254_);
lean_ctor_set(v___x_2256_, 1, v___x_2255_);
v___x_2257_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_2258_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_2231_);
v___x_2259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2257_);
lean_ctor_set(v___x_2259_, 1, v___x_2258_);
v___x_2260_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_2261_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2262_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2262_, 0, v_fetch_2232_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2260_);
lean_ctor_set(v___x_2263_, 1, v___x_2262_);
v___x_2264_ = lean_unsigned_to_nat(9u);
v___x_2265_ = lean_mk_empty_array_with_capacity(v___x_2264_);
v___x_2266_ = lean_array_push(v___x_2265_, v___x_2238_);
v___x_2267_ = lean_array_push(v___x_2266_, v___x_2241_);
v___x_2268_ = lean_array_push(v___x_2267_, v___x_2244_);
v___x_2269_ = lean_array_push(v___x_2268_, v___x_2247_);
v___x_2270_ = lean_array_push(v___x_2269_, v___x_2250_);
v___x_2271_ = lean_array_push(v___x_2270_, v___x_2253_);
v___x_2272_ = lean_array_push(v___x_2271_, v___x_2256_);
v___x_2273_ = lean_array_push(v___x_2272_, v___x_2259_);
v___x_2274_ = lean_array_push(v___x_2273_, v___x_2263_);
v___x_2275_ = l_Lasm_JS_Web_Support_fields(v___x_2274_);
lean_dec_ref(v___x_2274_);
v___x_2276_ = lean_mk_empty_array_with_capacity(v___x_2234_);
v___x_2277_ = lean_array_push(v___x_2276_, v___x_2275_);
v___x_2278_ = l_Lasm_JS_Web_Support_args(v___x_2277_);
v___x_2279_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2235_, v___x_2278_, v___x_2233_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
v_a_2288_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2279_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2279_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve___boxed(lean_object* v_options_2296_, lean_object* v_a_2297_){
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l_Lasm_JS_Bun_serve(v_options_2296_);
return v_res_2298_;
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
