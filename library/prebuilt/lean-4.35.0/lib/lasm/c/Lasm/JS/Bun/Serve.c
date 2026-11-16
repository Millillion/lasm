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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
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
lean_object* v___f_394_; lean_object* v___f_395_; lean_object* v___f_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___f_394_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_395_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_395_, 0, v_f_392_);
lean_closure_set(v___f_395_, 1, v___f_394_);
v___f_396_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___lam__2___boxed), 3, 1);
lean_closure_set(v___f_396_, 0, v___f_395_);
v___x_397_ = lean_unsigned_to_nat(0u);
v___x_398_ = l_Lasm_JS_Function_ofFn(v___f_396_, v___x_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_400_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v___x_398_, 1);
v___x_400_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_400_) == 0)
{
lean_object* v_a_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
v_a_401_ = lean_ctor_get(v___x_400_, 0);
lean_inc(v_a_401_);
lean_dec_ref_known(v___x_400_, 1);
v___x_402_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_403_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_401_, v___x_402_);
if (lean_obj_tag(v___x_403_) == 0)
{
lean_object* v_a_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___y_411_; uint8_t v___x_438_; 
v_a_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc(v_a_404_);
lean_dec_ref_known(v___x_403_, 1);
v___x_405_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_406_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_399_);
v___x_407_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_407_, 0, v_a_399_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
v___x_408_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_409_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_438_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
v___x_439_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8);
v___y_411_ = v___x_439_;
goto v___jp_410_;
}
else
{
lean_object* v___x_440_; 
v___x_440_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10);
v___y_411_ = v___x_440_;
goto v___jp_410_;
}
v___jp_410_:
{
lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
lean_inc(v___y_411_);
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_409_);
lean_ctor_set(v___x_412_, 1, v___y_411_);
v___x_413_ = lean_box(0);
v___x_414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = l_Lasm_JS_obj(v___x_414_);
v___x_416_ = lean_unsigned_to_nat(3u);
v___x_417_ = lean_mk_empty_array_with_capacity(v___x_416_);
v___x_418_ = lean_array_push(v___x_417_, v___x_407_);
v___x_419_ = lean_array_push(v___x_418_, v___x_408_);
v___x_420_ = lean_array_push(v___x_419_, v___x_415_);
v___x_421_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_404_, v___x_405_, v___x_420_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v___x_423_; uint8_t v_isShared_424_; uint8_t v_isSharedCheck_428_; 
v_isSharedCheck_428_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; 
v_unused_429_ = lean_ctor_get(v___x_421_, 0);
lean_dec(v_unused_429_);
v___x_423_ = v___x_421_;
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
else
{
lean_dec(v___x_421_);
v___x_423_ = lean_box(0);
v_isShared_424_ = v_isSharedCheck_428_;
goto v_resetjp_422_;
}
v_resetjp_422_:
{
lean_object* v___x_426_; 
if (v_isShared_424_ == 0)
{
lean_ctor_set(v___x_423_, 0, v_a_399_);
v___x_426_ = v___x_423_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_a_399_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec(v_a_399_);
v_a_430_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_421_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_421_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
else
{
lean_object* v_a_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_448_; 
lean_dec(v_a_399_);
v_a_441_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_448_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_448_ == 0)
{
v___x_443_ = v___x_403_;
v_isShared_444_ = v_isSharedCheck_448_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_a_441_);
lean_dec(v___x_403_);
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
else
{
lean_object* v_a_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_456_; 
lean_dec(v_a_399_);
v_a_449_ = lean_ctor_get(v___x_400_, 0);
v_isSharedCheck_456_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_456_ == 0)
{
v___x_451_ = v___x_400_;
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_a_449_);
lean_dec(v___x_400_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_456_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_a_449_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
}
else
{
lean_object* v_a_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_464_; 
v_a_457_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_464_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_464_ == 0)
{
v___x_459_ = v___x_398_;
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_a_457_);
lean_dec(v___x_398_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_464_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_462_; 
if (v_isShared_460_ == 0)
{
v___x_462_ = v___x_459_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v_a_457_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofFn___boxed(lean_object* v_f_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_Bun_ServeOptionsError_ofFn(v_f_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(lean_object* v_f_468_, lean_object* v_args_469_){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v_a_473_; lean_object* v___x_474_; 
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Web_QueuingStrategySize_ofFn_spec__0(v_args_469_, v___x_471_);
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref(v___x_472_);
v___x_474_ = lean_apply_2(v_f_468_, v_a_473_, lean_box(0));
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_484_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_484_ == 0)
{
v___x_477_ = v___x_474_;
v_isShared_478_ = v_isSharedCheck_484_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_474_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_484_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_482_; 
v___x_479_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_480_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_480_, 0, v_a_475_);
lean_ctor_set(v___x_480_, 1, v___x_479_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___x_480_);
v___x_482_ = v___x_477_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_480_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
v_a_485_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_474_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_474_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed(lean_object* v_f_493_, lean_object* v_args_494_, lean_object* v___y_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0(v_f_493_, v_args_494_);
lean_dec_ref(v_args_494_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(lean_object* v_f_497_){
_start:
{
lean_object* v___f_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___f_499_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_499_, 0, v_f_497_);
v___x_500_ = lean_unsigned_to_nat(0u);
v___x_501_ = l_Lasm_JS_Function_ofSyncFn(v___f_499_, v___x_500_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_503_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
v___x_503_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref_known(v___x_503_, 1);
v___x_505_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_506_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_504_, v___x_505_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___y_514_; uint8_t v___x_541_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v___x_506_, 1);
v___x_508_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_509_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_502_);
v___x_510_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_510_, 0, v_a_502_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v___x_511_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_512_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_541_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__7);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
v___x_542_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__8);
v___y_514_ = v___x_542_;
goto v___jp_513_;
}
else
{
lean_object* v___x_543_; 
v___x_543_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10, &l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10_once, _init_l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__10);
v___y_514_ = v___x_543_;
goto v___jp_513_;
}
v___jp_513_:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; 
lean_inc(v___y_514_);
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v___x_512_);
lean_ctor_set(v___x_515_, 1, v___y_514_);
v___x_516_ = lean_box(0);
v___x_517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_515_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = l_Lasm_JS_obj(v___x_517_);
v___x_519_ = lean_unsigned_to_nat(3u);
v___x_520_ = lean_mk_empty_array_with_capacity(v___x_519_);
v___x_521_ = lean_array_push(v___x_520_, v___x_510_);
v___x_522_ = lean_array_push(v___x_521_, v___x_511_);
v___x_523_ = lean_array_push(v___x_522_, v___x_518_);
v___x_524_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_507_, v___x_508_, v___x_523_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_531_ == 0)
{
lean_object* v_unused_532_; 
v_unused_532_ = lean_ctor_get(v___x_524_, 0);
lean_dec(v_unused_532_);
v___x_526_ = v___x_524_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_dec(v___x_524_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v_a_502_);
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_502_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
lean_dec(v_a_502_);
v_a_533_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_524_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_524_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
}
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
lean_dec(v_a_502_);
v_a_544_ = lean_ctor_get(v___x_506_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_506_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v___x_506_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_506_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
lean_dec(v_a_502_);
v_a_552_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_503_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_503_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_a_560_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_501_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_501_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn___boxed(lean_object* v_f_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lasm_JS_Bun_ServeOptionsError_ofSyncFn(v_f_568_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(lean_object* v_x_571_){
_start:
{
if (lean_obj_tag(v_x_571_) == 0)
{
lean_object* v___x_572_; 
v___x_572_ = lean_unsigned_to_nat(0u);
return v___x_572_;
}
else
{
lean_object* v___x_573_; 
v___x_573_ = lean_unsigned_to_nat(1u);
return v___x_573_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx___boxed(lean_object* v_x_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorIdx(v_x_574_);
lean_dec_ref(v_x_574_);
return v_res_575_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(lean_object* v_t_576_, lean_object* v_k_577_){
_start:
{
if (lean_obj_tag(v_t_576_) == 0)
{
lean_object* v_value_578_; lean_object* v___x_579_; 
v_value_578_ = lean_ctor_get(v_t_576_, 0);
lean_inc_ref(v_value_578_);
lean_dec_ref_known(v_t_576_, 1);
v___x_579_ = lean_apply_1(v_k_577_, v_value_578_);
return v___x_579_;
}
else
{
lean_object* v_value_580_; lean_object* v___x_581_; 
v_value_580_ = lean_ctor_get(v_t_576_, 0);
lean_inc(v_value_580_);
lean_dec_ref_known(v_t_576_, 1);
v___x_581_ = lean_apply_1(v_k_577_, v_value_580_);
return v___x_581_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(lean_object* v_motive_582_, lean_object* v_ctorIdx_583_, lean_object* v_t_584_, lean_object* v_h_585_, lean_object* v_k_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_584_, v_k_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___boxed(lean_object* v_motive_588_, lean_object* v_ctorIdx_589_, lean_object* v_t_590_, lean_object* v_h_591_, lean_object* v_k_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim(v_motive_588_, v_ctorIdx_589_, v_t_590_, v_h_591_, v_k_592_);
lean_dec(v_ctorIdx_589_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim___redArg(lean_object* v_t_594_, lean_object* v_domString_595_){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_594_, v_domString_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_domString_elim(lean_object* v_motive_597_, lean_object* v_t_598_, lean_object* v_h_599_, lean_object* v_domString_600_){
_start:
{
lean_object* v___x_601_; 
v___x_601_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_598_, v_domString_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim___redArg(lean_object* v_t_602_, lean_object* v_unsignedShort_603_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_602_, v_unsignedShort_603_);
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_DOMStringOrUnsignedShort_unsignedShort_elim(lean_object* v_motive_605_, lean_object* v_t_606_, lean_object* v_h_607_, lean_object* v_unsignedShort_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Lasm_JS_Bun_DOMStringOrUnsignedShort_ctorElim___redArg(v_t_606_, v_unsignedShort_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSDOMStringOrUnsignedShort___lam__0(lean_object* v_x_610_){
_start:
{
if (lean_obj_tag(v_x_610_) == 0)
{
lean_object* v_value_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
v_value_611_ = lean_ctor_get(v_x_610_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v_x_610_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v_x_610_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_value_611_);
lean_dec(v_x_610_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set_tag(v___x_613_, 4);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_value_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
else
{
lean_object* v_value_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_632_; 
v_value_619_ = lean_ctor_get(v_x_610_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v_x_610_);
if (v_isSharedCheck_632_ == 0)
{
v___x_621_ = v_x_610_;
v_isShared_622_ = v_isSharedCheck_632_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_value_619_);
lean_dec(v_x_610_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_632_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_623_ = lean_nat_to_int(v_value_619_);
v___x_624_ = lean_nat_abs(v___x_623_);
v___x_625_ = lean_cstr_to_nat("9007199254740991");
v___x_626_ = lean_nat_dec_le(v___x_624_, v___x_625_);
lean_dec(v___x_624_);
if (v___x_626_ == 0)
{
lean_object* v___x_628_; 
if (v_isShared_622_ == 0)
{
lean_ctor_set_tag(v___x_621_, 5);
lean_ctor_set(v___x_621_, 0, v___x_623_);
v___x_628_ = v___x_621_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
else
{
double v___x_630_; lean_object* v___x_631_; 
lean_del_object(v___x_621_);
v___x_630_ = l_Float_ofInt(v___x_623_);
lean_dec(v___x_623_);
v___x_631_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_631_, 0, v___x_630_);
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringDOMStringOrUnsignedShort___lam__0(lean_object* v_value_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v_value_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeNatDOMStringOrUnsignedShort___lam__0(lean_object* v_value_639_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_640_, 0, v_value_639_);
return v___x_640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(lean_object* v_f_650_, lean_object* v_a_651_, lean_object* v___f_652_, lean_object* v_x_653_){
_start:
{
if (lean_obj_tag(v_x_653_) == 0)
{
lean_object* v_a_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_663_; 
lean_dec_ref(v___f_652_);
lean_dec(v_a_651_);
lean_dec_ref(v_f_650_);
v_a_655_ = lean_ctor_get(v_x_653_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v_x_653_);
if (v_isSharedCheck_663_ == 0)
{
v___x_657_ = v_x_653_;
v_isShared_658_ = v_isSharedCheck_663_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_a_655_);
lean_dec(v_x_653_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_663_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_655_);
v___x_660_ = v_reuseFailAlloc_662_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
lean_object* v___x_661_; 
v___x_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_661_, 0, v___x_660_);
return v___x_661_;
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_665_; uint8_t v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v_a_664_ = lean_ctor_get(v_x_653_, 0);
lean_inc(v_a_664_);
lean_dec_ref_known(v_x_653_, 1);
v___x_665_ = lean_unsigned_to_nat(0u);
v___x_666_ = 0;
v___x_667_ = lean_apply_3(v_f_650_, v_a_651_, v_a_664_, lean_box(0));
v___x_668_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_665_, v___x_666_, v___x_667_, v___f_652_);
return v___x_668_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed(lean_object* v_f_669_, lean_object* v_a_670_, lean_object* v___f_671_, lean_object* v_x_672_, lean_object* v___y_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1(v_f_669_, v_a_670_, v___f_671_, v_x_672_);
return v_res_674_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_679_ = lean_string_utf8_byte_size(v___x_678_);
return v___x_679_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v___x_680_ = lean_unsigned_to_nat(0u);
v___x_681_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__3);
v___x_682_ = lean_nat_dec_eq(v___x_681_, v___x_680_);
return v___x_682_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_687_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__8));
v___x_688_ = lean_unsigned_to_nat(46u);
v___x_689_ = lean_unsigned_to_nat(193u);
v___x_690_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__7));
v___x_691_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__6));
v___x_692_ = l_mkPanicMessageWithDecl(v___x_691_, v___x_690_, v___x_689_, v___x_688_, v___x_687_);
return v___x_692_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(lean_object* v_context_694_, lean_object* v_d_695_){
_start:
{
lean_object* v___y_698_; lean_object* v___y_699_; 
if (lean_obj_tag(v_d_695_) == 9)
{
lean_object* v_value_703_; lean_object* v___x_704_; 
v_value_703_ = lean_ctor_get(v_d_695_, 0);
lean_inc(v_value_703_);
lean_dec_ref_known(v_d_695_, 2);
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v_value_703_);
return v___x_704_;
}
else
{
lean_object* v___x_705_; lean_object* v_received_707_; 
v___x_705_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
if (lean_obj_tag(v_d_695_) == 9)
{
lean_object* v_value_721_; lean_object* v_description_722_; uint8_t v___x_723_; 
v_value_721_ = lean_ctor_get(v_d_695_, 0);
v_description_722_ = lean_ctor_get(v_d_695_, 1);
v___x_723_ = lean_string_dec_eq(v_description_722_, v___x_705_);
if (v___x_723_ == 0)
{
goto v___jp_719_;
}
else
{
uint32_t v___x_724_; uint64_t v___x_725_; lean_object* v___x_726_; uint32_t v___x_727_; lean_object* v___x_728_; 
lean_inc_n(v_value_721_, 2);
lean_dec_ref_known(v_d_695_, 2);
v___x_724_ = 206;
v___x_725_ = 0ULL;
v___x_726_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_726_, 0, v_value_721_);
lean_ctor_set(v___x_726_, 1, v___x_705_);
v___x_727_ = lasm_js_value_handle(v_value_721_);
lean_dec(v_value_721_);
v___x_728_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_724_, v___x_725_, v___x_726_, v___x_727_);
lean_dec_ref_known(v___x_726_, 2);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; uint8_t v___x_730_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_728_, 1);
v___x_730_ = lean_string_validate_utf8(v_a_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; lean_object* v___x_732_; 
lean_dec(v_a_729_);
v___x_731_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_732_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_731_);
v_received_707_ = v___x_732_;
goto v___jp_706_;
}
else
{
lean_object* v___x_733_; 
v___x_733_ = lean_string_from_utf8_unchecked(v_a_729_);
v_received_707_ = v___x_733_;
goto v___jp_706_;
}
}
else
{
lean_object* v___x_734_; 
lean_dec_ref_known(v___x_728_, 1);
v___x_734_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v_received_707_ = v___x_734_;
goto v___jp_706_;
}
}
}
else
{
goto v___jp_719_;
}
v___jp_706_:
{
lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_708_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_709_ = lean_string_append(v___x_708_, v_context_694_);
v___x_710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_711_ = lean_string_append(v___x_709_, v___x_710_);
v___x_712_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSServer___closed__1));
v___x_713_ = lean_string_append(v___x_711_, v___x_712_);
v___x_714_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_715_ = lean_string_append(v___x_713_, v___x_714_);
v___x_716_ = lean_string_append(v___x_715_, v_received_707_);
lean_dec_ref(v_received_707_);
v___x_717_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; 
v___x_718_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5));
v___y_698_ = v___x_716_;
v___y_699_ = v___x_718_;
goto v___jp_697_;
}
else
{
v___y_698_ = v___x_716_;
v___y_699_ = v___x_705_;
goto v___jp_697_;
}
}
v___jp_719_:
{
lean_object* v___x_720_; 
v___x_720_ = l_Lasm_JS_Data_describe(v_d_695_);
v_received_707_ = v___x_720_;
goto v___jp_706_;
}
}
v___jp_697_:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_700_ = lean_string_append(v___y_698_, v___y_699_);
v___x_701_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_701_, 0, v___x_700_);
v___x_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___boxed(lean_object* v_context_735_, lean_object* v_d_736_, lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v_context_735_, v_d_736_);
lean_dec_ref(v_context_735_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(lean_object* v_args_740_, lean_object* v_i_741_){
_start:
{
lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_743_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_744_ = lean_unsigned_to_nat(1u);
v___x_745_ = lean_nat_add(v_i_741_, v___x_744_);
v___x_746_ = l_Nat_reprFast(v___x_745_);
v___x_747_ = lean_string_append(v___x_743_, v___x_746_);
lean_dec_ref(v___x_746_);
v___x_748_ = lean_array_get_size(v_args_740_);
v___x_749_ = lean_nat_dec_lt(v_i_741_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = lean_box(0);
v___x_751_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_747_, v___x_750_);
lean_dec_ref(v___x_747_);
return v___x_751_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = lean_array_fget_borrowed(v_args_740_, v_i_741_);
lean_inc(v___x_752_);
v___x_753_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0(v___x_747_, v___x_752_);
lean_dec_ref(v___x_747_);
return v___x_753_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___boxed(lean_object* v_args_754_, lean_object* v_i_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_754_, v_i_755_);
lean_dec(v_i_755_);
lean_dec_ref(v_args_754_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(lean_object* v_f_758_, lean_object* v___f_759_, lean_object* v_args_760_, lean_object* v_x_761_){
_start:
{
if (lean_obj_tag(v_x_761_) == 0)
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_771_; 
lean_dec_ref(v___f_759_);
lean_dec_ref(v_f_758_);
v_a_763_ = lean_ctor_get(v_x_761_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v_x_761_);
if (v_isSharedCheck_771_ == 0)
{
v___x_765_ = v_x_761_;
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v_x_761_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_771_;
goto v_resetjp_764_;
}
v_resetjp_764_:
{
lean_object* v___x_768_; 
if (v_isShared_766_ == 0)
{
v___x_768_ = v___x_765_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_763_);
v___x_768_ = v_reuseFailAlloc_770_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
lean_object* v___x_769_; 
v___x_769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
return v___x_769_;
}
}
}
else
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_793_; 
v_a_772_ = lean_ctor_get(v_x_761_, 0);
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_761_);
if (v_isSharedCheck_793_ == 0)
{
v___x_774_ = v_x_761_;
v_isShared_775_ = v_isSharedCheck_793_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v_x_761_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_793_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___f_776_; lean_object* v___x_777_; lean_object* v___x_778_; uint8_t v___x_779_; lean_object* v_val_781_; lean_object* v___x_784_; 
v___f_776_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__1___boxed), 5, 3);
lean_closure_set(v___f_776_, 0, v_f_758_);
lean_closure_set(v___f_776_, 1, v_a_772_);
lean_closure_set(v___f_776_, 2, v___f_759_);
v___x_777_ = lean_unsigned_to_nat(1u);
v___x_778_ = lean_unsigned_to_nat(0u);
v___x_779_ = 0;
v___x_784_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_760_, v___x_777_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_784_, 1);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 0, v_a_785_);
v___x_787_ = v___x_774_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_785_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
v_val_781_ = v___x_787_;
goto v___jp_780_;
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; 
v_a_789_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_784_, 1);
if (v_isShared_775_ == 0)
{
lean_ctor_set_tag(v___x_774_, 0);
lean_ctor_set(v___x_774_, 0, v_a_789_);
v___x_791_ = v___x_774_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_a_789_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
v_val_781_ = v___x_791_;
goto v___jp_780_;
}
}
v___jp_780_:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_782_, 0, v_val_781_);
v___x_783_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_778_, v___x_779_, v___x_782_, v___f_776_);
return v___x_783_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed(lean_object* v_f_794_, lean_object* v___f_795_, lean_object* v_args_796_, lean_object* v_x_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0(v_f_794_, v___f_795_, v_args_796_, v_x_797_);
lean_dec_ref(v_args_796_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(lean_object* v_args_800_, lean_object* v_i_801_){
_start:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; uint8_t v___x_809_; 
v___x_803_ = ((lean_object*)(l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0___closed__0));
v___x_804_ = lean_unsigned_to_nat(1u);
v___x_805_ = lean_nat_add(v_i_801_, v___x_804_);
v___x_806_ = l_Nat_reprFast(v___x_805_);
v___x_807_ = lean_string_append(v___x_803_, v___x_806_);
lean_dec_ref(v___x_806_);
v___x_808_ = lean_array_get_size(v_args_800_);
v___x_809_ = lean_nat_dec_lt(v_i_801_, v___x_808_);
if (v___x_809_ == 0)
{
lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_810_ = lean_box(0);
v___x_811_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_807_, v___x_810_);
lean_dec_ref(v___x_807_);
return v___x_811_;
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = lean_array_fget_borrowed(v_args_800_, v_i_801_);
lean_inc(v___x_812_);
v___x_813_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Request_new_spec__1_spec__9(v___x_807_, v___x_812_);
lean_dec_ref(v___x_807_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1___boxed(lean_object* v_args_814_, lean_object* v_i_815_, lean_object* v_a_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_814_, v_i_815_);
lean_dec(v_i_815_);
lean_dec_ref(v_args_814_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(lean_object* v_f_818_, lean_object* v___f_819_, lean_object* v_args_820_){
_start:
{
lean_object* v___f_822_; lean_object* v___x_823_; uint8_t v___x_824_; lean_object* v_val_826_; lean_object* v___x_829_; 
lean_inc_ref(v_args_820_);
v___f_822_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__0___boxed), 5, 3);
lean_closure_set(v___f_822_, 0, v_f_818_);
lean_closure_set(v___f_822_, 1, v___f_819_);
lean_closure_set(v___f_822_, 2, v_args_820_);
v___x_823_ = lean_unsigned_to_nat(0u);
v___x_824_ = 0;
v___x_829_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_820_, v___x_823_);
lean_dec_ref(v_args_820_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_829_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_829_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
lean_ctor_set_tag(v___x_832_, 1);
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
v_val_826_ = v___x_835_;
goto v___jp_825_;
}
}
}
else
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
v_a_838_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_829_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_829_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
lean_ctor_set_tag(v___x_840_, 0);
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
v_val_826_ = v___x_843_;
goto v___jp_825_;
}
}
}
v___jp_825_:
{
lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_827_, 0, v_val_826_);
v___x_828_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_823_, v___x_824_, v___x_827_, v___f_822_);
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed(lean_object* v_f_846_, lean_object* v___f_847_, lean_object* v_args_848_, lean_object* v___y_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2(v_f_846_, v___f_847_, v_args_848_);
return v_res_850_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0(void){
_start:
{
lean_object* v___x_851_; lean_object* v___x_852_; 
v___x_851_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_852_ = lean_nat_abs(v___x_851_);
return v___x_852_;
}
}
static uint8_t _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v___x_853_ = lean_cstr_to_nat("9007199254740991");
v___x_854_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__0);
v___x_855_ = lean_nat_dec_le(v___x_854_, v___x_853_);
return v___x_855_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_857_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_857_, 0, v___x_856_);
return v___x_857_;
}
}
static double _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3(void){
_start:
{
lean_object* v___x_858_; double v___x_859_; 
v___x_858_ = lean_obj_once(&l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4, &l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4_once, _init_l_Lasm_JS_Bun_instReprSocketAddressFamily_repr___closed__4);
v___x_859_ = l_Float_ofInt(v___x_858_);
return v___x_859_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4(void){
_start:
{
double v___x_860_; lean_object* v___x_861_; 
v___x_860_ = lean_float_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__3);
v___x_861_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_861_, 0, v___x_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(lean_object* v_f_862_){
_start:
{
lean_object* v___f_864_; lean_object* v___f_865_; lean_object* v___x_866_; lean_object* v___x_867_; 
v___f_864_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__0));
v___f_865_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___lam__2___boxed), 4, 2);
lean_closure_set(v___f_865_, 0, v_f_862_);
lean_closure_set(v___f_865_, 1, v___f_864_);
v___x_866_ = lean_unsigned_to_nat(0u);
v___x_867_ = l_Lasm_JS_Function_ofFn(v___f_865_, v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_869_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v___x_869_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v___x_871_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_872_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_870_, v___x_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___y_880_; uint8_t v___x_907_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_872_, 1);
v___x_874_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_875_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_868_);
v___x_876_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_876_, 0, v_a_868_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_878_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_907_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; 
v___x_908_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_880_ = v___x_908_;
goto v___jp_879_;
}
else
{
lean_object* v___x_909_; 
v___x_909_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_880_ = v___x_909_;
goto v___jp_879_;
}
v___jp_879_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
lean_inc(v___y_880_);
v___x_881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_878_);
lean_ctor_set(v___x_881_, 1, v___y_880_);
v___x_882_ = lean_box(0);
v___x_883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = l_Lasm_JS_obj(v___x_883_);
v___x_885_ = lean_unsigned_to_nat(3u);
v___x_886_ = lean_mk_empty_array_with_capacity(v___x_885_);
v___x_887_ = lean_array_push(v___x_886_, v___x_876_);
v___x_888_ = lean_array_push(v___x_887_, v___x_877_);
v___x_889_ = lean_array_push(v___x_888_, v___x_884_);
v___x_890_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_873_, v___x_874_, v___x_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_897_ == 0)
{
lean_object* v_unused_898_; 
v_unused_898_ = lean_ctor_get(v___x_890_, 0);
lean_dec(v_unused_898_);
v___x_892_ = v___x_890_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_dec(v___x_890_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
lean_ctor_set(v___x_892_, 0, v_a_868_);
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_868_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec(v_a_868_);
v_a_899_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_890_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_890_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_917_; 
lean_dec(v_a_868_);
v_a_910_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_917_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_917_ == 0)
{
v___x_912_ = v___x_872_;
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_872_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_917_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_915_; 
if (v_isShared_913_ == 0)
{
v___x_915_ = v___x_912_;
goto v_reusejp_914_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_a_910_);
v___x_915_ = v_reuseFailAlloc_916_;
goto v_reusejp_914_;
}
v_reusejp_914_:
{
return v___x_915_;
}
}
}
}
else
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
lean_dec(v_a_868_);
v_a_918_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_869_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_869_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_867_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_867_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___boxed(lean_object* v_f_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofFn(v_f_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(lean_object* v_f_937_, lean_object* v_args_938_){
_start:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_unsigned_to_nat(0u);
v___x_941_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__1(v_args_938_, v___x_940_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
lean_inc(v_a_942_);
lean_dec_ref_known(v___x_941_, 1);
v___x_943_ = lean_unsigned_to_nat(1u);
v___x_944_ = l_Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0(v_args_938_, v___x_943_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_946_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v___x_946_ = lean_apply_3(v_f_937_, v_a_942_, v_a_945_, lean_box(0));
if (lean_obj_tag(v___x_946_) == 0)
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_956_; 
v_a_947_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_956_ == 0)
{
v___x_949_ = v___x_946_;
v_isShared_950_ = v_isSharedCheck_956_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_946_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_956_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_954_; 
v___x_951_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_952_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_952_, 0, v_a_947_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 0, v___x_952_);
v___x_954_ = v___x_949_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v___x_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
else
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
v_a_957_ = lean_ctor_get(v___x_946_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_946_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_946_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_946_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
else
{
lean_object* v_a_965_; lean_object* v___x_967_; uint8_t v_isShared_968_; uint8_t v_isSharedCheck_972_; 
lean_dec(v_a_942_);
lean_dec_ref(v_f_937_);
v_a_965_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_972_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_972_ == 0)
{
v___x_967_ = v___x_944_;
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
else
{
lean_inc(v_a_965_);
lean_dec(v___x_944_);
v___x_967_ = lean_box(0);
v_isShared_968_ = v_isSharedCheck_972_;
goto v_resetjp_966_;
}
v_resetjp_966_:
{
lean_object* v___x_970_; 
if (v_isShared_968_ == 0)
{
v___x_970_ = v___x_967_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v_a_965_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
else
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
lean_dec_ref(v_f_937_);
v_a_973_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_941_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_941_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed(lean_object* v_f_981_, lean_object* v_args_982_, lean_object* v___y_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0(v_f_981_, v_args_982_);
lean_dec_ref(v_args_982_);
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(lean_object* v_f_985_){
_start:
{
lean_object* v___f_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___f_987_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_987_, 0, v_f_985_);
v___x_988_ = lean_unsigned_to_nat(0u);
v___x_989_ = l_Lasm_JS_Function_ofSyncFn(v___f_987_, v___x_988_);
if (lean_obj_tag(v___x_989_) == 0)
{
lean_object* v_a_990_; lean_object* v___x_991_; 
v_a_990_ = lean_ctor_get(v___x_989_, 0);
lean_inc(v_a_990_);
lean_dec_ref_known(v___x_989_, 1);
v___x_991_ = l_Lasm_JS_global();
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref_known(v___x_991_, 1);
v___x_993_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__1));
v___x_994_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_a_992_, v___x_993_);
if (lean_obj_tag(v___x_994_) == 0)
{
lean_object* v_a_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___y_1002_; uint8_t v___x_1029_; 
v_a_995_ = lean_ctor_get(v___x_994_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_994_, 1);
v___x_996_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__2));
v___x_997_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_a_990_);
v___x_998_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_998_, 0, v_a_990_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__4));
v___x_1000_ = ((lean_object*)(l_Lasm_JS_Bun_ServeOptionsError_ofFn___closed__5));
v___x_1029_ = lean_uint8_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__1);
if (v___x_1029_ == 0)
{
lean_object* v___x_1030_; 
v___x_1030_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__2);
v___y_1002_ = v___x_1030_;
goto v___jp_1001_;
}
else
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_obj_once(&l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4, &l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4_once, _init_l_Lasm_JS_Bun_ServeOptionsFetch_ofFn___closed__4);
v___y_1002_ = v___x_1031_;
goto v___jp_1001_;
}
v___jp_1001_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
lean_inc(v___y_1002_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___x_1000_);
lean_ctor_set(v___x_1003_, 1, v___y_1002_);
v___x_1004_ = lean_box(0);
v___x_1005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1005_, 0, v___x_1003_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = l_Lasm_JS_obj(v___x_1005_);
v___x_1007_ = lean_unsigned_to_nat(3u);
v___x_1008_ = lean_mk_empty_array_with_capacity(v___x_1007_);
v___x_1009_ = lean_array_push(v___x_1008_, v___x_998_);
v___x_1010_ = lean_array_push(v___x_1009_, v___x_999_);
v___x_1011_ = lean_array_push(v___x_1010_, v___x_1006_);
v___x_1012_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_a_995_, v___x_996_, v___x_1011_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1019_; 
v_isSharedCheck_1019_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1019_ == 0)
{
lean_object* v_unused_1020_; 
v_unused_1020_ = lean_ctor_get(v___x_1012_, 0);
lean_dec(v_unused_1020_);
v___x_1014_ = v___x_1012_;
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
else
{
lean_dec(v___x_1012_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1019_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v___x_1017_; 
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 0, v_a_990_);
v___x_1017_ = v___x_1014_;
goto v_reusejp_1016_;
}
else
{
lean_object* v_reuseFailAlloc_1018_; 
v_reuseFailAlloc_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1018_, 0, v_a_990_);
v___x_1017_ = v_reuseFailAlloc_1018_;
goto v_reusejp_1016_;
}
v_reusejp_1016_:
{
return v___x_1017_;
}
}
}
else
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1028_; 
lean_dec(v_a_990_);
v_a_1021_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1028_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1028_ == 0)
{
v___x_1023_ = v___x_1012_;
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1012_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1028_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1026_; 
if (v_isShared_1024_ == 0)
{
v___x_1026_ = v___x_1023_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_a_1021_);
v___x_1026_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
return v___x_1026_;
}
}
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1039_; 
lean_dec(v_a_990_);
v_a_1032_ = lean_ctor_get(v___x_994_, 0);
v_isSharedCheck_1039_ = !lean_is_exclusive(v___x_994_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1034_ = v___x_994_;
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_994_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1039_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1037_; 
if (v_isShared_1035_ == 0)
{
v___x_1037_ = v___x_1034_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_a_1032_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec(v_a_990_);
v_a_1040_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_991_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_991_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
else
{
lean_object* v_a_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1055_; 
v_a_1048_ = lean_ctor_get(v___x_989_, 0);
v_isSharedCheck_1055_ = !lean_is_exclusive(v___x_989_);
if (v_isSharedCheck_1055_ == 0)
{
v___x_1050_ = v___x_989_;
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_a_1048_);
lean_dec(v___x_989_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1055_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1053_; 
if (v_isShared_1051_ == 0)
{
v___x_1053_ = v___x_1050_;
goto v_reusejp_1052_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_a_1048_);
v___x_1053_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1052_;
}
v_reusejp_1052_:
{
return v___x_1053_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn___boxed(lean_object* v_f_1056_, lean_object* v_a_1057_){
_start:
{
lean_object* v_res_1058_; 
v_res_1058_ = l_Lasm_JS_Bun_ServeOptionsFetch_ofSyncFn(v_f_1056_);
return v_res_1058_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSServeOptions___lam__0(lean_object* v___f_1068_, lean_object* v___f_1069_, lean_object* v___f_1070_, lean_object* v___f_1071_, lean_object* v___f_1072_, lean_object* v_d_1073_){
_start:
{
lean_object* v_maxRequestBodySize_1074_; lean_object* v_error_1075_; lean_object* v_id_1076_; lean_object* v_hostname_1077_; lean_object* v_port_1078_; lean_object* v_reusePort_1079_; lean_object* v_ipv6Only_1080_; lean_object* v_idleTimeout_1081_; lean_object* v_fetch_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; 
v_maxRequestBodySize_1074_ = lean_ctor_get(v_d_1073_, 0);
lean_inc(v_maxRequestBodySize_1074_);
v_error_1075_ = lean_ctor_get(v_d_1073_, 1);
lean_inc(v_error_1075_);
v_id_1076_ = lean_ctor_get(v_d_1073_, 2);
lean_inc(v_id_1076_);
v_hostname_1077_ = lean_ctor_get(v_d_1073_, 3);
lean_inc(v_hostname_1077_);
v_port_1078_ = lean_ctor_get(v_d_1073_, 4);
lean_inc(v_port_1078_);
v_reusePort_1079_ = lean_ctor_get(v_d_1073_, 5);
lean_inc(v_reusePort_1079_);
v_ipv6Only_1080_ = lean_ctor_get(v_d_1073_, 6);
lean_inc(v_ipv6Only_1080_);
v_idleTimeout_1081_ = lean_ctor_get(v_d_1073_, 7);
lean_inc(v_idleTimeout_1081_);
v_fetch_1082_ = lean_ctor_get(v_d_1073_, 8);
lean_inc(v_fetch_1082_);
lean_dec_ref(v_d_1073_);
v___x_1083_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
lean_inc_ref(v___f_1068_);
v___x_1084_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1068_, v_maxRequestBodySize_1074_);
v___x_1085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1085_, 0, v___x_1083_);
lean_ctor_set(v___x_1085_, 1, v___x_1084_);
v___x_1086_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_1087_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1069_, v_error_1075_);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
lean_inc_ref(v___f_1070_);
v___x_1090_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1070_, v_id_1076_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1093_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1070_, v_hostname_1077_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1096_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1071_, v_port_1078_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
lean_inc_ref(v___f_1072_);
v___x_1099_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1072_, v_reusePort_1079_);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_1102_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1072_, v_ipv6Only_1080_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_1105_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_1068_, v_idleTimeout_1081_);
v___x_1106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1104_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_1108_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1109_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1109_, 0, v_fetch_1082_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1107_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = lean_unsigned_to_nat(9u);
v___x_1112_ = lean_mk_empty_array_with_capacity(v___x_1111_);
v___x_1113_ = lean_array_push(v___x_1112_, v___x_1085_);
v___x_1114_ = lean_array_push(v___x_1113_, v___x_1088_);
v___x_1115_ = lean_array_push(v___x_1114_, v___x_1091_);
v___x_1116_ = lean_array_push(v___x_1115_, v___x_1094_);
v___x_1117_ = lean_array_push(v___x_1116_, v___x_1097_);
v___x_1118_ = lean_array_push(v___x_1117_, v___x_1100_);
v___x_1119_ = lean_array_push(v___x_1118_, v___x_1103_);
v___x_1120_ = lean_array_push(v___x_1119_, v___x_1106_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1110_);
v___x_1122_ = l_Lasm_JS_Web_Support_fields(v___x_1121_);
lean_dec_ref(v___x_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(lean_object* v_x_1133_){
_start:
{
if (lean_obj_tag(v_x_1133_) == 0)
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_unsigned_to_nat(0u);
return v___x_1134_;
}
else
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_unsigned_to_nat(1u);
return v___x_1135_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx___boxed(lean_object* v_x_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorIdx(v_x_1136_);
lean_dec_ref(v_x_1136_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(lean_object* v_t_1138_, lean_object* v_k_1139_){
_start:
{
if (lean_obj_tag(v_t_1138_) == 0)
{
lean_object* v_value_1140_; lean_object* v___x_1141_; 
v_value_1140_ = lean_ctor_get(v_t_1138_, 0);
lean_inc(v_value_1140_);
lean_dec_ref_known(v_t_1138_, 1);
v___x_1141_ = lean_apply_1(v_k_1139_, v_value_1140_);
return v___x_1141_;
}
else
{
lean_object* v_value_1142_; lean_object* v___x_1143_; 
v_value_1142_ = lean_ctor_get(v_t_1138_, 0);
lean_inc_ref(v_value_1142_);
lean_dec_ref_known(v_t_1138_, 1);
v___x_1143_ = lean_apply_1(v_k_1139_, v_value_1142_);
return v___x_1143_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(lean_object* v_motive_1144_, lean_object* v_ctorIdx_1145_, lean_object* v_t_1146_, lean_object* v_h_1147_, lean_object* v_k_1148_){
_start:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1146_, v_k_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___boxed(lean_object* v_motive_1150_, lean_object* v_ctorIdx_1151_, lean_object* v_t_1152_, lean_object* v_h_1153_, lean_object* v_k_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim(v_motive_1150_, v_ctorIdx_1151_, v_t_1152_, v_h_1153_, v_k_1154_);
lean_dec(v_ctorIdx_1151_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim___redArg(lean_object* v_t_1156_, lean_object* v_request_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1156_, v_request_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_request_elim(lean_object* v_motive_1159_, lean_object* v_t_1160_, lean_object* v_h_1161_, lean_object* v_request_1162_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1160_, v_request_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim___redArg(lean_object* v_t_1164_, lean_object* v_domString_1165_){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1164_, v_domString_1165_);
return v___x_1166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_RequestOrDOMString_domString_elim(lean_object* v_motive_1167_, lean_object* v_t_1168_, lean_object* v_h_1169_, lean_object* v_domString_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Lasm_JS_Bun_RequestOrDOMString_ctorElim___redArg(v_t_1168_, v_domString_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instToJSRequestOrDOMString___lam__0(lean_object* v_x_1172_){
_start:
{
if (lean_obj_tag(v_x_1172_) == 0)
{
lean_object* v_value_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
v_value_1173_ = lean_ctor_get(v_x_1172_, 0);
lean_inc(v_value_1173_);
lean_dec_ref_known(v_x_1172_, 1);
v___x_1174_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1175_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_value_1173_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
return v___x_1175_;
}
else
{
lean_object* v_value_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
v_value_1176_ = lean_ctor_get(v_x_1172_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_x_1172_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v_x_1172_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_value_1176_);
lean_dec(v_x_1172_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
lean_ctor_set_tag(v___x_1178_, 4);
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_value_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeRequestRequestOrDOMString___lam__0(lean_object* v_value_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_value_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instCoeStringRequestOrDOMString___lam__0(lean_object* v_value_1190_){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_value_1190_);
return v___x_1191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(lean_object* v___x_1196_, lean_object* v___x_1197_, lean_object* v___x_1198_, lean_object* v_d_1199_){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; 
v___x_1200_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
v___x_1201_ = l_Lasm_JS_readField___redArg(v___x_1196_, v_d_1199_, v___x_1200_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v___x_1198_);
lean_dec_ref(v___x_1197_);
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1201_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1201_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; 
v_a_1210_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1210_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1211_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1212_ = l_Lasm_JS_readField___redArg(v___x_1197_, v_d_1199_, v___x_1211_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1220_; 
lean_dec(v_a_1210_);
lean_dec_ref(v___x_1198_);
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1215_ = v___x_1212_;
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1212_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1220_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1218_; 
if (v_isShared_1216_ == 0)
{
v___x_1218_ = v___x_1215_;
goto v_reusejp_1217_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_a_1213_);
v___x_1218_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1217_;
}
v_reusejp_1217_:
{
return v___x_1218_;
}
}
}
else
{
lean_object* v_a_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v_a_1221_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1221_);
lean_dec_ref_known(v___x_1212_, 1);
v___x_1222_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
v___x_1223_ = l_Lasm_JS_readField___redArg(v___x_1198_, v_d_1199_, v___x_1222_);
if (lean_obj_tag(v___x_1223_) == 0)
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
lean_dec(v_a_1221_);
lean_dec(v_a_1210_);
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v___x_1223_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1223_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1241_; 
v_a_1232_ = lean_ctor_get(v___x_1223_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1223_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1234_ = v___x_1223_;
v_isShared_1235_ = v_isSharedCheck_1241_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1223_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1241_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1236_; uint8_t v___x_1237_; lean_object* v___x_1239_; 
v___x_1236_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1236_, 0, v_a_1210_);
lean_ctor_set(v___x_1236_, 1, v_a_1221_);
v___x_1237_ = lean_unbox(v_a_1232_);
lean_dec(v_a_1232_);
lean_ctor_set_uint8(v___x_1236_, sizeof(void*)*2, v___x_1237_);
if (v_isShared_1235_ == 0)
{
lean_ctor_set(v___x_1234_, 0, v___x_1236_);
v___x_1239_ = v___x_1234_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1236_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed(lean_object* v___x_1242_, lean_object* v___x_1243_, lean_object* v___x_1244_, lean_object* v_d_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0(v___x_1242_, v___x_1243_, v___x_1244_, v_d_1245_);
lean_dec(v_d_1245_);
return v_res_1246_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0(void){
_start:
{
lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___f_1250_; 
v___x_1247_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily));
v___x_1248_ = l_Lasm_JS_instFromJSNat;
v___x_1249_ = l_Lasm_JS_instFromJSString;
v___f_1250_ = lean_alloc_closure((void*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1250_, 0, v___x_1249_);
lean_closure_set(v___f_1250_, 1, v___x_1248_);
lean_closure_set(v___f_1250_, 2, v___x_1247_);
return v___f_1250_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2(void){
_start:
{
uint8_t v___x_1252_; lean_object* v___x_1253_; lean_object* v___f_1254_; lean_object* v___x_1255_; 
v___x_1252_ = 0;
v___x_1253_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___closed__1));
v___f_1254_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__0);
v___x_1255_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1255_, 0, v___f_1254_);
lean_ctor_set(v___x_1255_, 1, v___x_1253_);
lean_ctor_set_uint8(v___x_1255_, sizeof(void*)*2, v___x_1252_);
return v___x_1255_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_instFromJSSocketAddress(void){
_start:
{
lean_object* v___x_1256_; 
v___x_1256_ = lean_obj_once(&l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2, &l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2_once, _init_l_Lasm_JS_Bun_instFromJSSocketAddress___closed__2);
return v___x_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests(lean_object* v_self_1258_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l_Lasm_JS_Bun_Server_pendingRequests___closed__0));
v___x_1261_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_1258_, v___x_1260_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_pendingRequests___boxed(lean_object* v_self_1262_, lean_object* v_a_1263_){
_start:
{
lean_object* v_res_1264_; 
v_res_1264_ = l_Lasm_JS_Bun_Server_pendingRequests(v_self_1262_);
return v_res_1264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url(lean_object* v_self_1266_){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = ((lean_object*)(l_Lasm_JS_Bun_Server_url___closed__0));
v___x_1269_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_self_1266_, v___x_1268_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
v_a_1278_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1269_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1269_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_url___boxed(lean_object* v_self_1286_, lean_object* v_a_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l_Lasm_JS_Bun_Server_url(v_self_1286_);
return v_res_1288_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = lean_nat_to_int(v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(lean_object* v_context_1296_, lean_object* v_d_1297_){
_start:
{
lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___y_1309_; lean_object* v_received_1310_; lean_object* v___y_1329_; lean_object* v_a_1332_; lean_object* v_a_1357_; 
switch(lean_obj_tag(v_d_1297_))
{
case 1:
{
goto v___jp_1299_;
}
case 0:
{
goto v___jp_1299_;
}
default: 
{
switch(lean_obj_tag(v_d_1297_))
{
case 3:
{
double v_n_1364_; lean_object* v___x_1365_; 
v_n_1364_ = lean_ctor_get_float(v_d_1297_, 0);
v___x_1365_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1364_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v___x_1366_; 
v___x_1366_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1332_ = v___x_1366_;
goto v___jp_1331_;
}
else
{
lean_object* v_val_1367_; 
v_val_1367_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_val_1367_);
lean_dec_ref_known(v___x_1365_, 1);
v_a_1357_ = v_val_1367_;
goto v___jp_1356_;
}
}
case 5:
{
lean_object* v_i_1368_; 
v_i_1368_ = lean_ctor_get(v_d_1297_, 0);
lean_inc(v_i_1368_);
v_a_1357_ = v_i_1368_;
goto v___jp_1356_;
}
default: 
{
lean_object* v___x_1369_; 
v___x_1369_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1332_ = v___x_1369_;
goto v___jp_1331_;
}
}
}
}
v___jp_1299_:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1300_ = lean_box(0);
v___x_1301_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1300_);
return v___x_1301_;
}
v___jp_1302_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1305_ = lean_string_append(v___y_1303_, v___y_1304_);
lean_dec_ref(v___y_1304_);
v___x_1306_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
v___x_1307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
return v___x_1307_;
}
v___jp_1308_:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; 
v___x_1311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1312_ = lean_string_append(v___x_1311_, v_context_1296_);
v___x_1313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1314_ = lean_string_append(v___x_1312_, v___x_1313_);
v___x_1315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__0));
v___x_1316_ = lean_string_append(v___x_1314_, v___x_1315_);
v___x_1317_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1318_ = lean_string_append(v___x_1316_, v___x_1317_);
v___x_1319_ = lean_string_append(v___x_1318_, v_received_1310_);
lean_dec_ref(v_received_1310_);
v___x_1320_ = lean_string_utf8_byte_size(v___y_1309_);
v___x_1321_ = lean_unsigned_to_nat(0u);
v___x_1322_ = lean_nat_dec_eq(v___x_1320_, v___x_1321_);
if (v___x_1322_ == 0)
{
lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1323_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1324_ = lean_string_append(v___x_1323_, v___y_1309_);
v___x_1325_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1326_ = lean_string_append(v___x_1324_, v___x_1325_);
v___y_1303_ = v___x_1319_;
v___y_1304_ = v___x_1326_;
goto v___jp_1302_;
}
else
{
lean_object* v___x_1327_; 
v___x_1327_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1303_ = v___x_1319_;
v___y_1304_ = v___x_1327_;
goto v___jp_1302_;
}
}
v___jp_1328_:
{
lean_object* v___x_1330_; 
v___x_1330_ = l_Lasm_JS_Data_describe(v_d_1297_);
v___y_1309_ = v___y_1329_;
v_received_1310_ = v___x_1330_;
goto v___jp_1308_;
}
v___jp_1331_:
{
if (lean_obj_tag(v_d_1297_) == 9)
{
lean_object* v_value_1333_; lean_object* v_description_1334_; lean_object* v___x_1335_; uint8_t v___x_1336_; 
v_value_1333_ = lean_ctor_get(v_d_1297_, 0);
v_description_1334_ = lean_ctor_get(v_d_1297_, 1);
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1336_ = lean_string_dec_eq(v_description_1334_, v___x_1335_);
if (v___x_1336_ == 0)
{
v___y_1329_ = v_a_1332_;
goto v___jp_1328_;
}
else
{
lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1353_; 
lean_inc(v_value_1333_);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_d_1297_);
if (v_isSharedCheck_1353_ == 0)
{
lean_object* v_unused_1354_; lean_object* v_unused_1355_; 
v_unused_1354_ = lean_ctor_get(v_d_1297_, 1);
lean_dec(v_unused_1354_);
v_unused_1355_ = lean_ctor_get(v_d_1297_, 0);
lean_dec(v_unused_1355_);
v___x_1338_ = v_d_1297_;
v_isShared_1339_ = v_isSharedCheck_1353_;
goto v_resetjp_1337_;
}
else
{
lean_dec(v_d_1297_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1353_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
uint32_t v___x_1340_; uint64_t v___x_1341_; lean_object* v___x_1343_; 
v___x_1340_ = 206;
v___x_1341_ = 0ULL;
lean_inc(v_value_1333_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 1, v___x_1335_);
v___x_1343_ = v___x_1338_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v_value_1333_);
lean_ctor_set(v_reuseFailAlloc_1352_, 1, v___x_1335_);
v___x_1343_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
uint32_t v___x_1344_; lean_object* v___x_1345_; 
v___x_1344_ = lasm_js_value_handle(v_value_1333_);
lean_dec(v_value_1333_);
v___x_1345_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1340_, v___x_1341_, v___x_1343_, v___x_1344_);
lean_dec_ref(v___x_1343_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; uint8_t v___x_1347_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc(v_a_1346_);
lean_dec_ref_known(v___x_1345_, 1);
v___x_1347_ = lean_string_validate_utf8(v_a_1346_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec(v_a_1346_);
v___x_1348_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_1349_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1348_);
v___y_1309_ = v_a_1332_;
v_received_1310_ = v___x_1349_;
goto v___jp_1308_;
}
else
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_string_from_utf8_unchecked(v_a_1346_);
v___y_1309_ = v_a_1332_;
v_received_1310_ = v___x_1350_;
goto v___jp_1308_;
}
}
else
{
lean_object* v___x_1351_; 
lean_dec_ref_known(v___x_1345_, 1);
v___x_1351_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_1309_ = v_a_1332_;
v_received_1310_ = v___x_1351_;
goto v___jp_1308_;
}
}
}
}
}
else
{
v___y_1329_ = v_a_1332_;
goto v___jp_1328_;
}
}
v___jp_1356_:
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1359_ = lean_int_dec_le(v___x_1358_, v_a_1357_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; 
lean_dec(v_a_1357_);
v___x_1360_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1332_ = v___x_1360_;
goto v___jp_1331_;
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_dec(v_d_1297_);
v___x_1361_ = l_Int_toNat(v_a_1357_);
lean_dec(v_a_1357_);
v___x_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
v___x_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1363_, 0, v___x_1362_);
return v___x_1363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1370_, lean_object* v_d_1371_, lean_object* v_a_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1370_, v_d_1371_);
lean_dec_ref(v_context_1370_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(lean_object* v_context_1374_, lean_object* v_bytes_1375_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1375_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1379_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref_known(v___x_1377_, 1);
v___x_1379_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1(v_context_1374_, v_a_1378_);
return v___x_1379_;
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1387_; 
v_a_1380_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1382_ = v___x_1377_;
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1377_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1380_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0___boxed(lean_object* v_context_1388_, lean_object* v_bytes_1389_, lean_object* v_a_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v_context_1388_, v_bytes_1389_);
lean_dec_ref(v_bytes_1389_);
lean_dec_ref(v_context_1388_);
return v_res_1391_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1392_; uint64_t v___x_1393_; 
v___x_1392_ = 0;
v___x_1393_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(lean_object* v_o_1395_, lean_object* v_key_1396_){
_start:
{
lean_object* v_k_1398_; lean_object* v___x_1399_; 
v_k_1398_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1398_, 0, v_key_1396_);
v___x_1399_ = l_Lasm_JS_Wire_encodeIO(v_k_1398_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v_a_1400_; uint32_t v___x_1401_; uint32_t v___x_1402_; uint64_t v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_a_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_a_1400_);
lean_dec_ref_known(v___x_1399_, 1);
v___x_1401_ = 203;
v___x_1402_ = lasm_js_value_handle(v_o_1395_);
v___x_1403_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1404_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1405_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1405_, 0, v_o_1395_);
lean_ctor_set(v___x_1405_, 1, v___x_1404_);
v___x_1406_ = lean_unsigned_to_nat(2u);
v___x_1407_ = lean_mk_empty_array_with_capacity(v___x_1406_);
lean_inc_ref(v_k_1398_);
v___x_1408_ = lean_array_push(v___x_1407_, v_k_1398_);
v___x_1409_ = lean_array_push(v___x_1408_, v___x_1405_);
v___x_1410_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
v___x_1411_ = lasm_js_call(v___x_1401_, v___x_1402_, v___x_1403_, v_a_1400_, v___x_1410_);
lean_dec_ref_known(v___x_1410_, 1);
lean_dec(v_a_1400_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
lean_inc(v_a_1412_);
lean_dec_ref_known(v___x_1411_, 1);
v___x_1413_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1414_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1398_);
v___x_1415_ = lean_string_append(v___x_1413_, v___x_1414_);
lean_dec_ref(v___x_1414_);
v___x_1416_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0(v___x_1415_, v_a_1412_);
lean_dec(v_a_1412_);
lean_dec_ref(v___x_1415_);
return v___x_1416_;
}
else
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1424_; 
lean_dec_ref_known(v_k_1398_, 1);
v_a_1417_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1424_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1424_ == 0)
{
v___x_1419_ = v___x_1411_;
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1411_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1424_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1422_; 
if (v_isShared_1420_ == 0)
{
v___x_1422_ = v___x_1419_;
goto v_reusejp_1421_;
}
else
{
lean_object* v_reuseFailAlloc_1423_; 
v_reuseFailAlloc_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1423_, 0, v_a_1417_);
v___x_1422_ = v_reuseFailAlloc_1423_;
goto v_reusejp_1421_;
}
v_reusejp_1421_:
{
return v___x_1422_;
}
}
}
}
else
{
lean_object* v_a_1425_; lean_object* v___x_1427_; uint8_t v_isShared_1428_; uint8_t v_isSharedCheck_1432_; 
lean_dec_ref_known(v_k_1398_, 1);
lean_dec(v_o_1395_);
v_a_1425_ = lean_ctor_get(v___x_1399_, 0);
v_isSharedCheck_1432_ = !lean_is_exclusive(v___x_1399_);
if (v_isSharedCheck_1432_ == 0)
{
v___x_1427_ = v___x_1399_;
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
else
{
lean_inc(v_a_1425_);
lean_dec(v___x_1399_);
v___x_1427_ = lean_box(0);
v_isShared_1428_ = v_isSharedCheck_1432_;
goto v_resetjp_1426_;
}
v_resetjp_1426_:
{
lean_object* v___x_1430_; 
if (v_isShared_1428_ == 0)
{
v___x_1430_ = v___x_1427_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v_a_1425_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___boxed(lean_object* v_o_1433_, lean_object* v_key_1434_, lean_object* v_a_1435_){
_start:
{
lean_object* v_res_1436_; 
v_res_1436_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_o_1433_, v_key_1434_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port(lean_object* v_self_1437_){
_start:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1440_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0(v_self_1437_, v___x_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_port___boxed(lean_object* v_self_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lasm_JS_Bun_Server_port(v_self_1441_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(lean_object* v_o_1444_, lean_object* v_key_1445_){
_start:
{
lean_object* v_k_1447_; lean_object* v___x_1448_; 
v_k_1447_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1447_, 0, v_key_1445_);
v___x_1448_ = l_Lasm_JS_Wire_encodeIO(v_k_1447_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; uint32_t v___x_1450_; uint32_t v___x_1451_; uint64_t v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1448_, 1);
v___x_1450_ = 203;
v___x_1451_ = lasm_js_value_handle(v_o_1444_);
v___x_1452_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1453_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1454_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1454_, 0, v_o_1444_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
v___x_1455_ = lean_unsigned_to_nat(2u);
v___x_1456_ = lean_mk_empty_array_with_capacity(v___x_1455_);
lean_inc_ref(v_k_1447_);
v___x_1457_ = lean_array_push(v___x_1456_, v_k_1447_);
v___x_1458_ = lean_array_push(v___x_1457_, v___x_1454_);
v___x_1459_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1458_);
v___x_1460_ = lasm_js_call(v___x_1450_, v___x_1451_, v___x_1452_, v_a_1449_, v___x_1459_);
lean_dec_ref_known(v___x_1459_, 1);
lean_dec(v_a_1449_);
if (lean_obj_tag(v___x_1460_) == 0)
{
lean_object* v_a_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_a_1461_ = lean_ctor_get(v___x_1460_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v___x_1460_, 1);
v___x_1462_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1447_);
v___x_1464_ = lean_string_append(v___x_1462_, v___x_1463_);
lean_dec_ref(v___x_1463_);
v___x_1465_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_URLSearchParams_get_spec__0_spec__1(v___x_1464_, v_a_1461_);
lean_dec(v_a_1461_);
lean_dec_ref(v___x_1464_);
return v___x_1465_;
}
else
{
lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1473_; 
lean_dec_ref_known(v_k_1447_, 1);
v_a_1466_ = lean_ctor_get(v___x_1460_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1460_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1468_ = v___x_1460_;
v_isShared_1469_ = v_isSharedCheck_1473_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1460_);
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
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec_ref_known(v_k_1447_, 1);
lean_dec(v_o_1444_);
v_a_1474_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1448_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1448_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0___boxed(lean_object* v_o_1482_, lean_object* v_key_1483_, lean_object* v_a_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_o_1482_, v_key_1483_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname(lean_object* v_self_1486_){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1489_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_hostname_spec__0(v_self_1486_, v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_hostname___boxed(lean_object* v_self_1490_, lean_object* v_a_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lasm_JS_Bun_Server_hostname(v_self_1490_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(lean_object* v_context_1495_, lean_object* v_d_1496_){
_start:
{
lean_object* v___y_1502_; lean_object* v___y_1503_; lean_object* v___y_1508_; lean_object* v_received_1509_; lean_object* v___y_1525_; uint8_t v_a_1553_; 
switch(lean_obj_tag(v_d_1496_))
{
case 1:
{
goto v___jp_1498_;
}
case 0:
{
goto v___jp_1498_;
}
default: 
{
if (lean_obj_tag(v_d_1496_) == 4)
{
lean_object* v_s_1557_; lean_object* v___x_1558_; uint8_t v___x_1559_; 
v_s_1557_ = lean_ctor_get(v_d_1496_, 0);
v___x_1558_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__0));
v___x_1559_ = lean_string_dec_eq(v_s_1557_, v___x_1558_);
if (v___x_1559_ == 0)
{
lean_object* v___x_1560_; uint8_t v___x_1561_; 
v___x_1560_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServerProtocol___lam__0___closed__2));
v___x_1561_ = lean_string_dec_eq(v_s_1557_, v___x_1560_);
if (v___x_1561_ == 0)
{
goto v___jp_1527_;
}
else
{
uint8_t v___x_1562_; 
lean_dec_ref_known(v_d_1496_, 1);
v___x_1562_ = 1;
v_a_1553_ = v___x_1562_;
goto v___jp_1552_;
}
}
else
{
uint8_t v___x_1563_; 
lean_dec_ref_known(v_d_1496_, 1);
v___x_1563_ = 0;
v_a_1553_ = v___x_1563_;
goto v___jp_1552_;
}
}
else
{
goto v___jp_1527_;
}
}
}
v___jp_1498_:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = lean_box(0);
v___x_1500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1500_, 0, v___x_1499_);
return v___x_1500_;
}
v___jp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1504_ = lean_string_append(v___y_1502_, v___y_1503_);
v___x_1505_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1505_, 0, v___x_1504_);
v___x_1506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1505_);
return v___x_1506_;
}
v___jp_1507_:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; 
v___x_1510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_1511_ = lean_string_append(v___x_1510_, v_context_1495_);
v___x_1512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_1513_ = lean_string_append(v___x_1511_, v___x_1512_);
v___x_1514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__0));
v___x_1515_ = lean_string_append(v___x_1513_, v___x_1514_);
v___x_1516_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_1517_ = lean_string_append(v___x_1515_, v___x_1516_);
v___x_1518_ = lean_string_append(v___x_1517_, v_received_1509_);
lean_dec_ref(v_received_1509_);
v___x_1519_ = lean_string_utf8_byte_size(v___y_1508_);
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1521_ = lean_nat_dec_eq(v___x_1519_, v___x_1520_);
if (v___x_1521_ == 0)
{
lean_object* v___x_1522_; 
v___x_1522_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___y_1502_ = v___x_1518_;
v___y_1503_ = v___x_1522_;
goto v___jp_1501_;
}
else
{
lean_object* v___x_1523_; 
v___x_1523_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_1502_ = v___x_1518_;
v___y_1503_ = v___x_1523_;
goto v___jp_1501_;
}
}
v___jp_1524_:
{
lean_object* v___x_1526_; 
v___x_1526_ = l_Lasm_JS_Data_describe(v_d_1496_);
v___y_1508_ = v___y_1525_;
v_received_1509_ = v___x_1526_;
goto v___jp_1507_;
}
v___jp_1527_:
{
lean_object* v___x_1528_; 
v___x_1528_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0));
if (lean_obj_tag(v_d_1496_) == 9)
{
lean_object* v_value_1529_; lean_object* v_description_1530_; lean_object* v___x_1531_; uint8_t v___x_1532_; 
v_value_1529_ = lean_ctor_get(v_d_1496_, 0);
v_description_1530_ = lean_ctor_get(v_d_1496_, 1);
v___x_1531_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1532_ = lean_string_dec_eq(v_description_1530_, v___x_1531_);
if (v___x_1532_ == 0)
{
v___y_1525_ = v___x_1528_;
goto v___jp_1524_;
}
else
{
lean_object* v___x_1534_; uint8_t v_isShared_1535_; uint8_t v_isSharedCheck_1549_; 
lean_inc(v_value_1529_);
v_isSharedCheck_1549_ = !lean_is_exclusive(v_d_1496_);
if (v_isSharedCheck_1549_ == 0)
{
lean_object* v_unused_1550_; lean_object* v_unused_1551_; 
v_unused_1550_ = lean_ctor_get(v_d_1496_, 1);
lean_dec(v_unused_1550_);
v_unused_1551_ = lean_ctor_get(v_d_1496_, 0);
lean_dec(v_unused_1551_);
v___x_1534_ = v_d_1496_;
v_isShared_1535_ = v_isSharedCheck_1549_;
goto v_resetjp_1533_;
}
else
{
lean_dec(v_d_1496_);
v___x_1534_ = lean_box(0);
v_isShared_1535_ = v_isSharedCheck_1549_;
goto v_resetjp_1533_;
}
v_resetjp_1533_:
{
uint32_t v___x_1536_; uint64_t v___x_1537_; lean_object* v___x_1539_; 
v___x_1536_ = 206;
v___x_1537_ = 0ULL;
lean_inc(v_value_1529_);
if (v_isShared_1535_ == 0)
{
lean_ctor_set(v___x_1534_, 1, v___x_1531_);
v___x_1539_ = v___x_1534_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_value_1529_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v___x_1531_);
v___x_1539_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
uint32_t v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = lasm_js_value_handle(v_value_1529_);
lean_dec(v_value_1529_);
v___x_1541_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1536_, v___x_1537_, v___x_1539_, v___x_1540_);
lean_dec_ref(v___x_1539_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; uint8_t v___x_1543_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___x_1543_ = lean_string_validate_utf8(v_a_1542_);
if (v___x_1543_ == 0)
{
lean_object* v___x_1544_; lean_object* v___x_1545_; 
lean_dec(v_a_1542_);
v___x_1544_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_1545_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1544_);
v___y_1508_ = v___x_1528_;
v_received_1509_ = v___x_1545_;
goto v___jp_1507_;
}
else
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_string_from_utf8_unchecked(v_a_1542_);
v___y_1508_ = v___x_1528_;
v_received_1509_ = v___x_1546_;
goto v___jp_1507_;
}
}
else
{
lean_object* v___x_1547_; 
lean_dec_ref_known(v___x_1541_, 1);
v___x_1547_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_1508_ = v___x_1528_;
v_received_1509_ = v___x_1547_;
goto v___jp_1507_;
}
}
}
}
}
else
{
v___y_1525_ = v___x_1528_;
goto v___jp_1524_;
}
}
v___jp_1552_:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1554_ = lean_box(v_a_1553_);
v___x_1555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1554_);
v___x_1556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1564_, lean_object* v_d_1565_, lean_object* v_a_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1564_, v_d_1565_);
lean_dec_ref(v_context_1564_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(lean_object* v_context_1568_, lean_object* v_bytes_1569_){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1569_);
if (lean_obj_tag(v___x_1571_) == 0)
{
lean_object* v_a_1572_; lean_object* v___x_1573_; 
v_a_1572_ = lean_ctor_get(v___x_1571_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v___x_1571_, 1);
v___x_1573_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1(v_context_1568_, v_a_1572_);
return v___x_1573_;
}
else
{
lean_object* v_a_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1581_; 
v_a_1574_ = lean_ctor_get(v___x_1571_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1571_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1571_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1571_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___x_1579_; 
if (v_isShared_1577_ == 0)
{
v___x_1579_ = v___x_1576_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v_a_1574_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0___boxed(lean_object* v_context_1582_, lean_object* v_bytes_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v_context_1582_, v_bytes_1583_);
lean_dec_ref(v_bytes_1583_);
lean_dec_ref(v_context_1582_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(lean_object* v_o_1586_, lean_object* v_key_1587_){
_start:
{
lean_object* v_k_1589_; lean_object* v___x_1590_; 
v_k_1589_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1589_, 0, v_key_1587_);
v___x_1590_ = l_Lasm_JS_Wire_encodeIO(v_k_1589_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v_a_1591_; uint32_t v___x_1592_; uint32_t v___x_1593_; uint64_t v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v_a_1591_ = lean_ctor_get(v___x_1590_, 0);
lean_inc(v_a_1591_);
lean_dec_ref_known(v___x_1590_, 1);
v___x_1592_ = 203;
v___x_1593_ = lasm_js_value_handle(v_o_1586_);
v___x_1594_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
v___x_1595_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1596_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1596_, 0, v_o_1586_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = lean_unsigned_to_nat(2u);
v___x_1598_ = lean_mk_empty_array_with_capacity(v___x_1597_);
lean_inc_ref(v_k_1589_);
v___x_1599_ = lean_array_push(v___x_1598_, v_k_1589_);
v___x_1600_ = lean_array_push(v___x_1599_, v___x_1596_);
v___x_1601_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
v___x_1602_ = lasm_js_call(v___x_1592_, v___x_1593_, v___x_1594_, v_a_1591_, v___x_1601_);
lean_dec_ref_known(v___x_1601_, 1);
lean_dec(v_a_1591_);
if (lean_obj_tag(v___x_1602_) == 0)
{
lean_object* v_a_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v_a_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_a_1603_);
lean_dec_ref_known(v___x_1602_, 1);
v___x_1604_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__1));
v___x_1605_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1589_);
v___x_1606_ = lean_string_append(v___x_1604_, v___x_1605_);
lean_dec_ref(v___x_1605_);
v___x_1607_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0(v___x_1606_, v_a_1603_);
lean_dec(v_a_1603_);
lean_dec_ref(v___x_1606_);
return v___x_1607_;
}
else
{
lean_object* v_a_1608_; lean_object* v___x_1610_; uint8_t v_isShared_1611_; uint8_t v_isSharedCheck_1615_; 
lean_dec_ref_known(v_k_1589_, 1);
v_a_1608_ = lean_ctor_get(v___x_1602_, 0);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1615_ == 0)
{
v___x_1610_ = v___x_1602_;
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
else
{
lean_inc(v_a_1608_);
lean_dec(v___x_1602_);
v___x_1610_ = lean_box(0);
v_isShared_1611_ = v_isSharedCheck_1615_;
goto v_resetjp_1609_;
}
v_resetjp_1609_:
{
lean_object* v___x_1613_; 
if (v_isShared_1611_ == 0)
{
v___x_1613_ = v___x_1610_;
goto v_reusejp_1612_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_a_1608_);
v___x_1613_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1612_;
}
v_reusejp_1612_:
{
return v___x_1613_;
}
}
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
lean_dec_ref_known(v_k_1589_, 1);
lean_dec(v_o_1586_);
v_a_1616_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1590_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1590_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0___boxed(lean_object* v_o_1624_, lean_object* v_key_1625_, lean_object* v_a_1626_){
_start:
{
lean_object* v_res_1627_; 
v_res_1627_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_o_1624_, v_key_1625_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol(lean_object* v_self_1629_){
_start:
{
lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1631_ = ((lean_object*)(l_Lasm_JS_Bun_Server_protocol___closed__0));
v___x_1632_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0(v_self_1629_, v___x_1631_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_protocol___boxed(lean_object* v_self_1633_, lean_object* v_a_1634_){
_start:
{
lean_object* v_res_1635_; 
v_res_1635_ = l_Lasm_JS_Bun_Server_protocol(v_self_1633_);
return v_res_1635_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development(lean_object* v_self_1637_){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; 
v___x_1639_ = ((lean_object*)(l_Lasm_JS_Bun_Server_development___closed__0));
v___x_1640_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_cancelBubble_spec__0(v_self_1637_, v___x_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_development___boxed(lean_object* v_self_1641_, lean_object* v_a_1642_){
_start:
{
lean_object* v_res_1643_; 
v_res_1643_ = l_Lasm_JS_Bun_Server_development(v_self_1641_);
return v_res_1643_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id(lean_object* v_self_1644_){
_start:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1647_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Event_type_spec__0(v_self_1644_, v___x_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_id___boxed(lean_object* v_self_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l_Lasm_JS_Bun_Server_id(v_self_1648_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop(lean_object* v_self_1652_, lean_object* v_closeActiveConnections_1653_){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1655_ = ((lean_object*)(l_Lasm_JS_Bun_Server_stop___closed__0));
v___x_1656_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_closeActiveConnections_1653_);
v___x_1657_ = lean_unsigned_to_nat(1u);
v___x_1658_ = lean_mk_empty_array_with_capacity(v___x_1657_);
v___x_1659_ = lean_array_push(v___x_1658_, v___x_1656_);
v___x_1660_ = l_Lasm_JS_Web_Support_args(v___x_1659_);
v___x_1661_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_ReadableStream_cancel_spec__0(v_self_1652_, v___x_1655_, v___x_1660_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_stop___boxed(lean_object* v_self_1662_, lean_object* v_closeActiveConnections_1663_, lean_object* v_a_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l_Lasm_JS_Bun_Server_stop(v_self_1662_, v_closeActiveConnections_1663_);
lean_dec(v_closeActiveConnections_1663_);
return v_res_1665_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(uint8_t v_await_1666_, uint64_t v_extra_1667_){
_start:
{
uint64_t v___x_1668_; uint64_t v___y_1670_; 
v___x_1668_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1666_ == 0)
{
uint64_t v___x_1673_; 
v___x_1673_ = 0ULL;
v___y_1670_ = v___x_1673_;
goto v___jp_1669_;
}
else
{
uint64_t v___x_1674_; 
v___x_1674_ = 2ULL;
v___y_1670_ = v___x_1674_;
goto v___jp_1669_;
}
v___jp_1669_:
{
uint64_t v___x_1671_; uint64_t v___x_1672_; 
v___x_1671_ = lean_uint64_lor(v___x_1668_, v___y_1670_);
v___x_1672_ = lean_uint64_lor(v___x_1671_, v_extra_1667_);
return v___x_1672_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0___boxed(lean_object* v_await_1675_, lean_object* v_extra_1676_){
_start:
{
uint8_t v_await_boxed_1677_; uint64_t v_extra_boxed_1678_; uint64_t v_res_1679_; lean_object* v_r_1680_; 
v_await_boxed_1677_ = lean_unbox(v_await_1675_);
v_extra_boxed_1678_ = lean_unbox_uint64(v_extra_1676_);
lean_dec_ref(v_extra_1676_);
v_res_1679_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v_await_boxed_1677_, v_extra_boxed_1678_);
v_r_1680_ = lean_box_uint64(v_res_1679_);
return v_r_1680_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0(void){
_start:
{
uint64_t v___x_1681_; uint8_t v___x_1682_; uint64_t v___x_1683_; 
v___x_1681_ = 8ULL;
v___x_1682_ = 0;
v___x_1683_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0_spec__0(v___x_1682_, v___x_1681_);
return v___x_1683_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(lean_object* v_o_1685_, lean_object* v_name_1686_, lean_object* v_args_1687_){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; uint64_t v___x_1692_; lean_object* v___x_1693_; 
v___x_1689_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1690_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1690_, 0, v_o_1685_);
lean_ctor_set(v___x_1690_, 1, v___x_1689_);
lean_inc_ref(v_name_1686_);
v___x_1691_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1691_, 0, v_name_1686_);
v___x_1692_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__0);
v___x_1693_ = l_Lasm_JS_Value_invokeRaw(v___x_1690_, v___x_1691_, v_args_1687_, v___x_1692_);
if (lean_obj_tag(v___x_1693_) == 0)
{
lean_object* v_a_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; 
v_a_1694_ = lean_ctor_get(v___x_1693_, 0);
lean_inc(v_a_1694_);
lean_dec_ref_known(v___x_1693_, 1);
v___x_1695_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_1696_ = lean_string_append(v___x_1695_, v_name_1686_);
lean_dec_ref(v_name_1686_);
v___x_1697_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1_spec__1(v___x_1696_, v_a_1694_);
lean_dec(v_a_1694_);
lean_dec_ref(v___x_1696_);
return v___x_1697_;
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
lean_dec_ref(v_name_1686_);
v_a_1698_ = lean_ctor_get(v___x_1693_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1693_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1693_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___boxed(lean_object* v_o_1706_, lean_object* v_name_1707_, lean_object* v_args_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_o_1706_, v_name_1707_, v_args_1708_);
return v_res_1710_;
}
}
static lean_object* _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2(void){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1714_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__1));
v___x_1715_ = l_Lasm_JS_Web_Support_args(v___x_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections(lean_object* v_self_1716_){
_start:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1718_ = ((lean_object*)(l_Lasm_JS_Bun_Server_closeIdleConnections___closed__0));
v___x_1719_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_1720_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0(v_self_1716_, v___x_1718_, v___x_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_closeIdleConnections___boxed(lean_object* v_self_1721_, lean_object* v_a_1722_){
_start:
{
lean_object* v_res_1723_; 
v_res_1723_ = l_Lasm_JS_Bun_Server_closeIdleConnections(v_self_1721_);
return v_res_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(lean_object* v_x_1724_){
_start:
{
if (lean_obj_tag(v_x_1724_) == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = lean_box(0);
return v___x_1725_;
}
else
{
lean_object* v_val_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v_val_1726_ = lean_ctor_get(v_x_1724_, 0);
v___x_1727_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
lean_inc(v_val_1726_);
v___x_1728_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1728_, 0, v_val_1726_);
lean_ctor_set(v___x_1728_, 1, v___x_1727_);
return v___x_1728_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0___boxed(lean_object* v_x_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_x_1729_);
lean_dec(v_x_1729_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(lean_object* v_x_1731_){
_start:
{
if (lean_obj_tag(v_x_1731_) == 0)
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_box(0);
return v___x_1732_;
}
else
{
lean_object* v_val_1733_; 
v_val_1733_ = lean_ctor_get(v_x_1731_, 0);
lean_inc(v_val_1733_);
lean_dec_ref_known(v_x_1731_, 1);
if (lean_obj_tag(v_val_1733_) == 0)
{
lean_object* v_value_1734_; lean_object* v___x_1736_; uint8_t v_isShared_1737_; uint8_t v_isSharedCheck_1741_; 
v_value_1734_ = lean_ctor_get(v_val_1733_, 0);
v_isSharedCheck_1741_ = !lean_is_exclusive(v_val_1733_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1736_ = v_val_1733_;
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
else
{
lean_inc(v_value_1734_);
lean_dec(v_val_1733_);
v___x_1736_ = lean_box(0);
v_isShared_1737_ = v_isSharedCheck_1741_;
goto v_resetjp_1735_;
}
v_resetjp_1735_:
{
lean_object* v___x_1739_; 
if (v_isShared_1737_ == 0)
{
lean_ctor_set_tag(v___x_1736_, 4);
v___x_1739_ = v___x_1736_;
goto v_reusejp_1738_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_value_1734_);
v___x_1739_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1738_;
}
v_reusejp_1738_:
{
return v___x_1739_;
}
}
}
else
{
lean_object* v_value_1742_; lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1755_; 
v_value_1742_ = lean_ctor_get(v_val_1733_, 0);
v_isSharedCheck_1755_ = !lean_is_exclusive(v_val_1733_);
if (v_isSharedCheck_1755_ == 0)
{
v___x_1744_ = v_val_1733_;
v_isShared_1745_ = v_isSharedCheck_1755_;
goto v_resetjp_1743_;
}
else
{
lean_inc(v_value_1742_);
lean_dec(v_val_1733_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1755_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; uint8_t v___x_1749_; 
v___x_1746_ = lean_nat_to_int(v_value_1742_);
v___x_1747_ = lean_nat_abs(v___x_1746_);
v___x_1748_ = lean_cstr_to_nat("9007199254740991");
v___x_1749_ = lean_nat_dec_le(v___x_1747_, v___x_1748_);
lean_dec(v___x_1747_);
if (v___x_1749_ == 0)
{
lean_object* v___x_1751_; 
if (v_isShared_1745_ == 0)
{
lean_ctor_set_tag(v___x_1744_, 5);
lean_ctor_set(v___x_1744_, 0, v___x_1746_);
v___x_1751_ = v___x_1744_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
else
{
double v___x_1753_; lean_object* v___x_1754_; 
lean_del_object(v___x_1744_);
v___x_1753_ = l_Float_ofInt(v___x_1746_);
lean_dec(v___x_1746_);
v___x_1754_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1754_, 0, v___x_1753_);
return v___x_1754_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload(lean_object* v_self_1757_, lean_object* v_options_1758_){
_start:
{
lean_object* v_maxRequestBodySize_1760_; lean_object* v_error_1761_; lean_object* v_id_1762_; lean_object* v_hostname_1763_; lean_object* v_port_1764_; lean_object* v_reusePort_1765_; lean_object* v_ipv6Only_1766_; lean_object* v_idleTimeout_1767_; lean_object* v_fetch_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v_maxRequestBodySize_1760_ = lean_ctor_get(v_options_1758_, 0);
lean_inc(v_maxRequestBodySize_1760_);
v_error_1761_ = lean_ctor_get(v_options_1758_, 1);
lean_inc(v_error_1761_);
v_id_1762_ = lean_ctor_get(v_options_1758_, 2);
lean_inc(v_id_1762_);
v_hostname_1763_ = lean_ctor_get(v_options_1758_, 3);
lean_inc(v_hostname_1763_);
v_port_1764_ = lean_ctor_get(v_options_1758_, 4);
lean_inc(v_port_1764_);
v_reusePort_1765_ = lean_ctor_get(v_options_1758_, 5);
lean_inc(v_reusePort_1765_);
v_ipv6Only_1766_ = lean_ctor_get(v_options_1758_, 6);
lean_inc(v_ipv6Only_1766_);
v_idleTimeout_1767_ = lean_ctor_get(v_options_1758_, 7);
lean_inc(v_idleTimeout_1767_);
v_fetch_1768_ = lean_ctor_get(v_options_1758_, 8);
lean_inc(v_fetch_1768_);
lean_dec_ref(v_options_1758_);
v___x_1769_ = ((lean_object*)(l_Lasm_JS_Bun_Server_reload___closed__0));
v___x_1770_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_1771_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_1760_);
v___x_1772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1772_, 0, v___x_1770_);
lean_ctor_set(v___x_1772_, 1, v___x_1771_);
v___x_1773_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_1774_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_1761_);
lean_dec(v_error_1761_);
v___x_1775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1775_, 0, v___x_1773_);
lean_ctor_set(v___x_1775_, 1, v___x_1774_);
v___x_1776_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_1777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_1762_);
v___x_1778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1776_);
lean_ctor_set(v___x_1778_, 1, v___x_1777_);
v___x_1779_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_1780_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_1763_);
v___x_1781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1781_, 0, v___x_1779_);
lean_ctor_set(v___x_1781_, 1, v___x_1780_);
v___x_1782_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_1783_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_1764_);
v___x_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1784_, 0, v___x_1782_);
lean_ctor_set(v___x_1784_, 1, v___x_1783_);
v___x_1785_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_1786_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_1765_);
lean_dec(v_reusePort_1765_);
v___x_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1785_);
lean_ctor_set(v___x_1787_, 1, v___x_1786_);
v___x_1788_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_1789_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_1766_);
lean_dec(v_ipv6Only_1766_);
v___x_1790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1788_);
lean_ctor_set(v___x_1790_, 1, v___x_1789_);
v___x_1791_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_1792_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_1767_);
v___x_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1793_, 0, v___x_1791_);
lean_ctor_set(v___x_1793_, 1, v___x_1792_);
v___x_1794_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_1795_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1796_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1796_, 0, v_fetch_1768_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1797_, 0, v___x_1794_);
lean_ctor_set(v___x_1797_, 1, v___x_1796_);
v___x_1798_ = lean_unsigned_to_nat(9u);
v___x_1799_ = lean_mk_empty_array_with_capacity(v___x_1798_);
v___x_1800_ = lean_array_push(v___x_1799_, v___x_1772_);
v___x_1801_ = lean_array_push(v___x_1800_, v___x_1775_);
v___x_1802_ = lean_array_push(v___x_1801_, v___x_1778_);
v___x_1803_ = lean_array_push(v___x_1802_, v___x_1781_);
v___x_1804_ = lean_array_push(v___x_1803_, v___x_1784_);
v___x_1805_ = lean_array_push(v___x_1804_, v___x_1787_);
v___x_1806_ = lean_array_push(v___x_1805_, v___x_1790_);
v___x_1807_ = lean_array_push(v___x_1806_, v___x_1793_);
v___x_1808_ = lean_array_push(v___x_1807_, v___x_1797_);
v___x_1809_ = l_Lasm_JS_Web_Support_fields(v___x_1808_);
lean_dec_ref(v___x_1808_);
v___x_1810_ = lean_unsigned_to_nat(1u);
v___x_1811_ = lean_mk_empty_array_with_capacity(v___x_1810_);
v___x_1812_ = lean_array_push(v___x_1811_, v___x_1809_);
v___x_1813_ = l_Lasm_JS_Web_Support_args(v___x_1812_);
v___x_1814_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_ReadableStream_getReader_spec__1(v_self_1757_, v___x_1769_, v___x_1813_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_reload___boxed(lean_object* v_self_1831_, lean_object* v_options_1832_, lean_object* v_a_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l_Lasm_JS_Bun_Server_reload(v_self_1831_, v_options_1832_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0(lean_object* v_x_1835_){
_start:
{
if (lean_obj_tag(v_x_1835_) == 0)
{
lean_object* v_a_1837_; lean_object* v___x_1839_; uint8_t v_isShared_1840_; uint8_t v_isSharedCheck_1845_; 
v_a_1837_ = lean_ctor_get(v_x_1835_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_x_1835_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1839_ = v_x_1835_;
v_isShared_1840_ = v_isSharedCheck_1845_;
goto v_resetjp_1838_;
}
else
{
lean_inc(v_a_1837_);
lean_dec(v_x_1835_);
v___x_1839_ = lean_box(0);
v_isShared_1840_ = v_isSharedCheck_1845_;
goto v_resetjp_1838_;
}
v_resetjp_1838_:
{
lean_object* v___x_1842_; 
if (v_isShared_1840_ == 0)
{
v___x_1842_ = v___x_1839_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1837_);
v___x_1842_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
lean_object* v___x_1843_; 
v___x_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
return v___x_1843_;
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1854_; 
v_a_1846_ = lean_ctor_get(v_x_1835_, 0);
v_isSharedCheck_1854_ = !lean_is_exclusive(v_x_1835_);
if (v_isSharedCheck_1854_ == 0)
{
v___x_1848_ = v_x_1835_;
v_isShared_1849_ = v_isSharedCheck_1854_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v_x_1835_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1854_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1852_; 
v___x_1852_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1851_);
return v___x_1852_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___lam__0___boxed(lean_object* v_x_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l_Lasm_JS_Bun_Server_fetch___lam__0(v_x_1855_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch(lean_object* v_self_1859_, lean_object* v_request_1860_){
_start:
{
lean_object* v___f_1862_; lean_object* v___x_1863_; lean_object* v___y_1865_; 
v___f_1862_ = ((lean_object*)(l_Lasm_JS_Bun_Server_fetch___closed__0));
v___x_1863_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
if (lean_obj_tag(v_request_1860_) == 0)
{
lean_object* v_value_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; 
v_value_1874_ = lean_ctor_get(v_request_1860_, 0);
lean_inc(v_value_1874_);
lean_dec_ref_known(v_request_1860_, 1);
v___x_1875_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_1876_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1876_, 0, v_value_1874_);
lean_ctor_set(v___x_1876_, 1, v___x_1875_);
v___y_1865_ = v___x_1876_;
goto v___jp_1864_;
}
else
{
lean_object* v_value_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1884_; 
v_value_1877_ = lean_ctor_get(v_request_1860_, 0);
v_isSharedCheck_1884_ = !lean_is_exclusive(v_request_1860_);
if (v_isSharedCheck_1884_ == 0)
{
v___x_1879_ = v_request_1860_;
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_value_1877_);
lean_dec(v_request_1860_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1884_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1882_; 
if (v_isShared_1880_ == 0)
{
lean_ctor_set_tag(v___x_1879_, 4);
v___x_1882_ = v___x_1879_;
goto v_reusejp_1881_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v_value_1877_);
v___x_1882_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1881_;
}
v_reusejp_1881_:
{
v___y_1865_ = v___x_1882_;
goto v___jp_1864_;
}
}
}
v___jp_1864_:
{
lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; uint8_t v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1866_ = lean_unsigned_to_nat(1u);
v___x_1867_ = lean_mk_empty_array_with_capacity(v___x_1866_);
v___x_1868_ = lean_array_push(v___x_1867_, v___y_1865_);
v___x_1869_ = l_Lasm_JS_Web_Support_args(v___x_1868_);
v___x_1870_ = lean_unsigned_to_nat(0u);
v___x_1871_ = 0;
v___x_1872_ = l_Lasm_JS_Value_callMethodAwait___at___00Lasm_JS_Web_Blob_arrayBuffer_spec__0(v_self_1859_, v___x_1863_, v___x_1869_);
v___x_1873_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1870_, v___x_1871_, v___x_1872_, v___f_1862_);
return v___x_1873_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_fetch___boxed(lean_object* v_self_1885_, lean_object* v_request_1886_, lean_object* v_a_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lasm_JS_Bun_Server_fetch(v_self_1885_, v_request_1886_);
return v_res_1888_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(uint8_t v_await_1889_, uint64_t v_extra_1890_){
_start:
{
uint64_t v___x_1891_; uint64_t v___y_1893_; 
v___x_1891_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0___closed__0);
if (v_await_1889_ == 0)
{
uint64_t v___x_1896_; 
v___x_1896_ = 0ULL;
v___y_1893_ = v___x_1896_;
goto v___jp_1892_;
}
else
{
uint64_t v___x_1897_; 
v___x_1897_ = 2ULL;
v___y_1893_ = v___x_1897_;
goto v___jp_1892_;
}
v___jp_1892_:
{
uint64_t v___x_1894_; uint64_t v___x_1895_; 
v___x_1894_ = lean_uint64_lor(v___x_1891_, v___y_1893_);
v___x_1895_ = lean_uint64_lor(v___x_1894_, v_extra_1890_);
return v___x_1895_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0___boxed(lean_object* v_await_1898_, lean_object* v_extra_1899_){
_start:
{
uint8_t v_await_boxed_1900_; uint64_t v_extra_boxed_1901_; uint64_t v_res_1902_; lean_object* v_r_1903_; 
v_await_boxed_1900_ = lean_unbox(v_await_1898_);
v_extra_boxed_1901_ = lean_unbox_uint64(v_extra_1899_);
lean_dec_ref(v_extra_1899_);
v_res_1902_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v_await_boxed_1900_, v_extra_boxed_1901_);
v_r_1903_ = lean_box_uint64(v_res_1902_);
return v_r_1903_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3(void){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1907_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__0));
v___x_1908_ = lean_string_utf8_byte_size(v___x_1907_);
return v___x_1908_;
}
}
static uint8_t _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4(void){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; 
v___x_1909_ = lean_unsigned_to_nat(0u);
v___x_1910_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__3);
v___x_1911_ = lean_nat_dec_eq(v___x_1910_, v___x_1909_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(lean_object* v_d_1915_, lean_object* v_key_1916_){
_start:
{
if (lean_obj_tag(v_d_1915_) == 8)
{
lean_object* v___x_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1948_; 
v___x_1917_ = l_Lasm_JS_Data_field(v_d_1915_, v_key_1916_);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_d_1915_);
if (v_isSharedCheck_1948_ == 0)
{
lean_object* v_unused_1949_; 
v_unused_1949_ = lean_ctor_get(v_d_1915_, 0);
lean_dec(v_unused_1949_);
v___x_1919_ = v_d_1915_;
v_isShared_1920_ = v_isSharedCheck_1948_;
goto v_resetjp_1918_;
}
else
{
lean_dec(v_d_1915_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1948_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
if (lean_obj_tag(v___x_1917_) == 4)
{
lean_object* v_s_1941_; lean_object* v___x_1942_; uint8_t v___x_1943_; 
v_s_1941_ = lean_ctor_get(v___x_1917_, 0);
lean_inc_ref(v_s_1941_);
v___x_1942_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__0));
v___x_1943_ = lean_string_dec_eq(v_s_1941_, v___x_1942_);
if (v___x_1943_ == 0)
{
lean_object* v___x_1944_; uint8_t v___x_1945_; 
v___x_1944_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSSocketAddressFamily___lam__0___closed__2));
v___x_1945_ = lean_string_dec_eq(v_s_1941_, v___x_1944_);
lean_dec_ref(v_s_1941_);
if (v___x_1945_ == 0)
{
goto v___jp_1921_;
}
else
{
lean_object* v___x_1946_; 
lean_dec_ref_known(v___x_1917_, 1);
lean_del_object(v___x_1919_);
v___x_1946_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__2));
return v___x_1946_;
}
}
else
{
lean_object* v___x_1947_; 
lean_dec_ref(v_s_1941_);
lean_dec_ref_known(v___x_1917_, 1);
lean_del_object(v___x_1919_);
v___x_1947_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___lam__0___closed__3));
return v___x_1947_;
}
}
else
{
goto v___jp_1921_;
}
v___jp_1921_:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
v___x_1922_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1923_ = lean_string_append(v___x_1922_, v_key_1916_);
v___x_1924_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1925_ = lean_string_append(v___x_1923_, v___x_1924_);
v___x_1926_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddressFamily___closed__1));
v___x_1927_ = lean_string_append(v___x_1925_, v___x_1926_);
v___x_1928_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1929_ = lean_string_append(v___x_1927_, v___x_1928_);
v___x_1930_ = l_Lasm_JS_Data_describe(v___x_1917_);
v___x_1931_ = lean_string_append(v___x_1929_, v___x_1930_);
lean_dec_ref(v___x_1930_);
v___x_1932_ = lean_uint8_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__4);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1936_; 
v___x_1933_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_protocol_spec__0_spec__0_spec__1___closed__1));
v___x_1934_ = lean_string_append(v___x_1931_, v___x_1933_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set_tag(v___x_1919_, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1934_);
v___x_1936_ = v___x_1919_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1934_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
else
{
lean_object* v___x_1939_; 
if (v_isShared_1920_ == 0)
{
lean_ctor_set_tag(v___x_1919_, 0);
lean_ctor_set(v___x_1919_, 0, v___x_1931_);
v___x_1939_ = v___x_1919_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1931_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
else
{
lean_object* v___x_1950_; 
lean_dec(v_d_1915_);
v___x_1950_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__6));
return v___x_1950_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_d_1951_, lean_object* v_key_1952_){
_start:
{
lean_object* v_res_1953_; 
v_res_1953_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_1951_, v_key_1952_);
lean_dec_ref(v_key_1952_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(lean_object* v_d_1957_, lean_object* v_key_1958_){
_start:
{
if (lean_obj_tag(v_d_1957_) == 8)
{
lean_object* v___x_1959_; lean_object* v___x_1961_; uint8_t v_isShared_1962_; uint8_t v_isSharedCheck_2002_; 
v___x_1959_ = l_Lasm_JS_Data_field(v_d_1957_, v_key_1958_);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_d_1957_);
if (v_isSharedCheck_2002_ == 0)
{
lean_object* v_unused_2003_; 
v_unused_2003_ = lean_ctor_get(v_d_1957_, 0);
lean_dec(v_unused_2003_);
v___x_1961_ = v_d_1957_;
v_isShared_1962_ = v_isSharedCheck_2002_;
goto v_resetjp_1960_;
}
else
{
lean_dec(v_d_1957_);
v___x_1961_ = lean_box(0);
v_isShared_1962_ = v_isSharedCheck_2002_;
goto v_resetjp_1960_;
}
v_resetjp_1960_:
{
lean_object* v_a_1964_; lean_object* v_a_1990_; 
switch(lean_obj_tag(v___x_1959_))
{
case 3:
{
double v_n_1996_; lean_object* v___x_1997_; 
v_n_1996_ = lean_ctor_get_float(v___x_1959_, 0);
v___x_1997_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1996_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v___x_1998_; 
v___x_1998_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__5));
v_a_1964_ = v___x_1998_;
goto v___jp_1963_;
}
else
{
lean_object* v_val_1999_; 
v_val_1999_ = lean_ctor_get(v___x_1997_, 0);
lean_inc(v_val_1999_);
lean_dec_ref_known(v___x_1997_, 1);
v_a_1990_ = v_val_1999_;
goto v___jp_1989_;
}
}
case 5:
{
lean_object* v_i_2000_; 
v_i_2000_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_i_2000_);
v_a_1990_ = v_i_2000_;
goto v___jp_1989_;
}
default: 
{
lean_object* v___x_2001_; 
v___x_2001_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v_a_1964_ = v___x_2001_;
goto v___jp_1963_;
}
}
v___jp_1963_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; uint8_t v___x_1977_; 
v___x_1965_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_1966_ = lean_string_append(v___x_1965_, v_key_1958_);
v___x_1967_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_1968_ = lean_string_append(v___x_1966_, v___x_1967_);
v___x_1969_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__0));
v___x_1970_ = lean_string_append(v___x_1968_, v___x_1969_);
v___x_1971_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_1972_ = lean_string_append(v___x_1970_, v___x_1971_);
v___x_1973_ = l_Lasm_JS_Data_describe(v___x_1959_);
v___x_1974_ = lean_string_append(v___x_1972_, v___x_1973_);
lean_dec_ref(v___x_1973_);
v___x_1975_ = lean_string_utf8_byte_size(v_a_1964_);
v___x_1976_ = lean_unsigned_to_nat(0u);
v___x_1977_ = lean_nat_dec_eq(v___x_1975_, v___x_1976_);
if (v___x_1977_ == 0)
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1984_; 
v___x_1978_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_1979_ = lean_string_append(v___x_1978_, v_a_1964_);
v___x_1980_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_1981_ = lean_string_append(v___x_1979_, v___x_1980_);
v___x_1982_ = lean_string_append(v___x_1974_, v___x_1981_);
lean_dec_ref(v___x_1981_);
if (v_isShared_1962_ == 0)
{
lean_ctor_set_tag(v___x_1961_, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1982_);
v___x_1984_ = v___x_1961_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1982_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
else
{
lean_object* v___x_1987_; 
if (v_isShared_1962_ == 0)
{
lean_ctor_set_tag(v___x_1961_, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1974_);
v___x_1987_ = v___x_1961_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v___x_1974_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
v___jp_1989_:
{
lean_object* v___x_1991_; uint8_t v___x_1992_; 
v___x_1991_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__3);
v___x_1992_ = lean_int_dec_le(v___x_1991_, v_a_1990_);
if (v___x_1992_ == 0)
{
lean_object* v___x_1993_; 
lean_dec(v_a_1990_);
v___x_1993_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__4));
v_a_1964_ = v___x_1993_;
goto v___jp_1963_;
}
else
{
lean_object* v___x_1994_; lean_object* v___x_1995_; 
lean_del_object(v___x_1961_);
lean_dec(v___x_1959_);
v___x_1994_ = l_Int_toNat(v_a_1990_);
lean_dec(v_a_1990_);
v___x_1995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1995_, 0, v___x_1994_);
return v___x_1995_;
}
}
}
}
else
{
lean_object* v___x_2004_; 
lean_dec(v_d_1957_);
v___x_2004_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___closed__1));
return v___x_2004_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_d_2005_, lean_object* v_key_2006_){
_start:
{
lean_object* v_res_2007_; 
v_res_2007_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_2005_, v_key_2006_);
lean_dec_ref(v_key_2006_);
return v_res_2007_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(lean_object* v_d_2011_, lean_object* v_key_2012_){
_start:
{
if (lean_obj_tag(v_d_2011_) == 8)
{
lean_object* v___x_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2044_; 
v___x_2013_ = l_Lasm_JS_Data_field(v_d_2011_, v_key_2012_);
v_isSharedCheck_2044_ = !lean_is_exclusive(v_d_2011_);
if (v_isSharedCheck_2044_ == 0)
{
lean_object* v_unused_2045_; 
v_unused_2045_ = lean_ctor_get(v_d_2011_, 0);
lean_dec(v_unused_2045_);
v___x_2015_ = v_d_2011_;
v_isShared_2016_ = v_isSharedCheck_2044_;
goto v_resetjp_2014_;
}
else
{
lean_dec(v_d_2011_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2044_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
if (lean_obj_tag(v___x_2013_) == 4)
{
lean_object* v_s_2017_; lean_object* v___x_2019_; uint8_t v_isShared_2020_; uint8_t v_isSharedCheck_2024_; 
lean_del_object(v___x_2015_);
v_s_2017_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2019_ = v___x_2013_;
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
else
{
lean_inc(v_s_2017_);
lean_dec(v___x_2013_);
v___x_2019_ = lean_box(0);
v_isShared_2020_ = v_isSharedCheck_2024_;
goto v_resetjp_2018_;
}
v_resetjp_2018_:
{
lean_object* v___x_2022_; 
if (v_isShared_2020_ == 0)
{
lean_ctor_set_tag(v___x_2019_, 1);
v___x_2022_ = v___x_2019_;
goto v_reusejp_2021_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v_s_2017_);
v___x_2022_ = v_reuseFailAlloc_2023_;
goto v_reusejp_2021_;
}
v_reusejp_2021_:
{
return v___x_2022_;
}
}
}
else
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; uint8_t v___x_2035_; 
v___x_2025_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__0));
v___x_2026_ = lean_string_append(v___x_2025_, v_key_2012_);
v___x_2027_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__1));
v___x_2028_ = lean_string_append(v___x_2026_, v___x_2027_);
v___x_2029_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_2030_ = lean_string_append(v___x_2028_, v___x_2029_);
v___x_2031_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5___closed__2));
v___x_2032_ = lean_string_append(v___x_2030_, v___x_2031_);
v___x_2033_ = l_Lasm_JS_Data_describe(v___x_2013_);
v___x_2034_ = lean_string_append(v___x_2032_, v___x_2033_);
lean_dec_ref(v___x_2033_);
v___x_2035_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__4);
if (v___x_2035_ == 0)
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2039_; 
v___x_2036_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__5));
v___x_2037_ = lean_string_append(v___x_2034_, v___x_2036_);
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2037_);
v___x_2039_ = v___x_2015_;
goto v_reusejp_2038_;
}
else
{
lean_object* v_reuseFailAlloc_2040_; 
v_reuseFailAlloc_2040_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2040_, 0, v___x_2037_);
v___x_2039_ = v_reuseFailAlloc_2040_;
goto v_reusejp_2038_;
}
v_reusejp_2038_:
{
return v___x_2039_;
}
}
else
{
lean_object* v___x_2042_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2034_);
v___x_2042_ = v___x_2015_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v___x_2034_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
}
}
else
{
lean_object* v___x_2046_; 
lean_dec(v_d_2011_);
v___x_2046_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___closed__1));
return v___x_2046_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_d_2047_, lean_object* v_key_2048_){
_start:
{
lean_object* v_res_2049_; 
v_res_2049_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_2047_, v_key_2048_);
lean_dec_ref(v_key_2048_);
return v_res_2049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(lean_object* v_context_2051_, lean_object* v_d_2052_){
_start:
{
lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v___y_2064_; lean_object* v_received_2065_; lean_object* v___y_2084_; lean_object* v_a_2087_; 
switch(lean_obj_tag(v_d_2052_))
{
case 1:
{
goto v___jp_2054_;
}
case 0:
{
goto v___jp_2054_;
}
default: 
{
lean_object* v___x_2111_; lean_object* v___x_2112_; 
v___x_2111_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__0));
lean_inc(v_d_2052_);
v___x_2112_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__3(v_d_2052_, v___x_2111_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
lean_dec_ref_known(v___x_2112_, 1);
v_a_2087_ = v_a_2113_;
goto v___jp_2086_;
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; 
v_a_2114_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2114_);
lean_dec_ref_known(v___x_2112_, 1);
v___x_2115_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
lean_inc(v_d_2052_);
v___x_2116_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__4(v_d_2052_, v___x_2115_);
if (lean_obj_tag(v___x_2116_) == 0)
{
lean_object* v_a_2117_; 
lean_dec(v_a_2114_);
v_a_2117_ = lean_ctor_get(v___x_2116_, 0);
lean_inc(v_a_2117_);
lean_dec_ref_known(v___x_2116_, 1);
v_a_2087_ = v_a_2117_;
goto v___jp_2086_;
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2138_; 
v_a_2118_ = lean_ctor_get(v___x_2116_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2116_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2120_ = v___x_2116_;
v_isShared_2121_ = v_isSharedCheck_2138_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2116_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2138_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
v___x_2122_ = ((lean_object*)(l_Lasm_JS_Bun_instFromJSSocketAddress___lam__0___closed__1));
lean_inc(v_d_2052_);
v___x_2123_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2_spec__5(v_d_2052_, v___x_2122_);
if (lean_obj_tag(v___x_2123_) == 0)
{
lean_object* v_a_2124_; 
lean_del_object(v___x_2120_);
lean_dec(v_a_2118_);
lean_dec(v_a_2114_);
v_a_2124_ = lean_ctor_get(v___x_2123_, 0);
lean_inc(v_a_2124_);
lean_dec_ref_known(v___x_2123_, 1);
v_a_2087_ = v_a_2124_;
goto v___jp_2086_;
}
else
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2137_; 
lean_dec(v_d_2052_);
v_a_2125_ = lean_ctor_get(v___x_2123_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2123_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2127_ = v___x_2123_;
v_isShared_2128_ = v_isSharedCheck_2137_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2123_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2137_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2129_; uint8_t v___x_2130_; lean_object* v___x_2132_; 
v___x_2129_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2129_, 0, v_a_2114_);
lean_ctor_set(v___x_2129_, 1, v_a_2118_);
v___x_2130_ = lean_unbox(v_a_2125_);
lean_dec(v_a_2125_);
lean_ctor_set_uint8(v___x_2129_, sizeof(void*)*2, v___x_2130_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 0, v___x_2129_);
v___x_2132_ = v___x_2127_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v___x_2129_);
v___x_2132_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2134_; 
if (v_isShared_2121_ == 0)
{
lean_ctor_set_tag(v___x_2120_, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2132_);
v___x_2134_ = v___x_2120_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
}
}
}
}
}
v___jp_2054_:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2055_ = lean_box(0);
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
return v___x_2056_;
}
v___jp_2057_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2060_ = lean_string_append(v___y_2058_, v___y_2059_);
lean_dec_ref(v___y_2059_);
v___x_2061_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
v___x_2062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2061_);
return v___x_2062_;
}
v___jp_2063_:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; uint8_t v___x_2077_; 
v___x_2066_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__0));
v___x_2067_ = lean_string_append(v___x_2066_, v_context_2051_);
v___x_2068_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__1));
v___x_2069_ = lean_string_append(v___x_2067_, v___x_2068_);
v___x_2070_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___closed__0));
v___x_2071_ = lean_string_append(v___x_2069_, v___x_2070_);
v___x_2072_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__2));
v___x_2073_ = lean_string_append(v___x_2071_, v___x_2072_);
v___x_2074_ = lean_string_append(v___x_2073_, v_received_2065_);
lean_dec_ref(v_received_2065_);
v___x_2075_ = lean_string_utf8_byte_size(v___y_2064_);
v___x_2076_ = lean_unsigned_to_nat(0u);
v___x_2077_ = lean_nat_dec_eq(v___x_2075_, v___x_2076_);
if (v___x_2077_ == 0)
{
lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2078_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__1));
v___x_2079_ = lean_string_append(v___x_2078_, v___y_2064_);
lean_dec_ref(v___y_2064_);
v___x_2080_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Bun_Server_port_spec__0_spec__0_spec__1___closed__2));
v___x_2081_ = lean_string_append(v___x_2079_, v___x_2080_);
v___y_2058_ = v___x_2074_;
v___y_2059_ = v___x_2081_;
goto v___jp_2057_;
}
else
{
lean_object* v___x_2082_; 
lean_dec_ref(v___y_2064_);
v___x_2082_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___y_2058_ = v___x_2074_;
v___y_2059_ = v___x_2082_;
goto v___jp_2057_;
}
}
v___jp_2083_:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lasm_JS_Data_describe(v_d_2052_);
v___y_2064_ = v___y_2084_;
v_received_2065_ = v___x_2085_;
goto v___jp_2063_;
}
v___jp_2086_:
{
if (lean_obj_tag(v_d_2052_) == 9)
{
lean_object* v_value_2088_; lean_object* v_description_2089_; lean_object* v___x_2090_; uint8_t v___x_2091_; 
v_value_2088_ = lean_ctor_get(v_d_2052_, 0);
v_description_2089_ = lean_ctor_get(v_d_2052_, 1);
v___x_2090_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2091_ = lean_string_dec_eq(v_description_2089_, v___x_2090_);
if (v___x_2091_ == 0)
{
v___y_2084_ = v_a_2087_;
goto v___jp_2083_;
}
else
{
lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2108_; 
lean_inc(v_value_2088_);
v_isSharedCheck_2108_ = !lean_is_exclusive(v_d_2052_);
if (v_isSharedCheck_2108_ == 0)
{
lean_object* v_unused_2109_; lean_object* v_unused_2110_; 
v_unused_2109_ = lean_ctor_get(v_d_2052_, 1);
lean_dec(v_unused_2109_);
v_unused_2110_ = lean_ctor_get(v_d_2052_, 0);
lean_dec(v_unused_2110_);
v___x_2093_ = v_d_2052_;
v_isShared_2094_ = v_isSharedCheck_2108_;
goto v_resetjp_2092_;
}
else
{
lean_dec(v_d_2052_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2108_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
uint32_t v___x_2095_; uint64_t v___x_2096_; lean_object* v___x_2098_; 
v___x_2095_ = 206;
v___x_2096_ = 0ULL;
lean_inc(v_value_2088_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 1, v___x_2090_);
v___x_2098_ = v___x_2093_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_value_2088_);
lean_ctor_set(v_reuseFailAlloc_2107_, 1, v___x_2090_);
v___x_2098_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
uint32_t v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lasm_js_value_handle(v_value_2088_);
lean_dec(v_value_2088_);
v___x_2100_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2095_, v___x_2096_, v___x_2098_, v___x_2099_);
lean_dec_ref(v___x_2098_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; uint8_t v___x_2102_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref_known(v___x_2100_, 1);
v___x_2102_ = lean_string_validate_utf8(v_a_2101_);
if (v___x_2102_ == 0)
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
lean_dec(v_a_2101_);
v___x_2103_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__9);
v___x_2104_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_2103_);
v___y_2064_ = v_a_2087_;
v_received_2065_ = v___x_2104_;
goto v___jp_2063_;
}
else
{
lean_object* v___x_2105_; 
v___x_2105_ = lean_string_from_utf8_unchecked(v_a_2101_);
v___y_2064_ = v_a_2087_;
v_received_2065_ = v___x_2105_;
goto v___jp_2063_;
}
}
else
{
lean_object* v___x_2106_; 
lean_dec_ref_known(v___x_2100_, 1);
v___x_2106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Web_Support_arg___at___00Lasm_JS_Bun_ServeOptionsFetch_ofFn_spec__0_spec__0___closed__10));
v___y_2064_ = v_a_2087_;
v_received_2065_ = v___x_2106_;
goto v___jp_2063_;
}
}
}
}
}
else
{
v___y_2084_ = v_a_2087_;
goto v___jp_2083_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2___boxed(lean_object* v_context_2139_, lean_object* v_d_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_2139_, v_d_2140_);
lean_dec_ref(v_context_2139_);
return v_res_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(lean_object* v_context_2143_, lean_object* v_bytes_2144_){
_start:
{
lean_object* v___x_2146_; 
v___x_2146_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_2144_);
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v_a_2147_; lean_object* v___x_2148_; 
v_a_2147_ = lean_ctor_get(v___x_2146_, 0);
lean_inc(v_a_2147_);
lean_dec_ref_known(v___x_2146_, 1);
v___x_2148_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1_spec__2(v_context_2143_, v_a_2147_);
return v___x_2148_;
}
else
{
lean_object* v_a_2149_; lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2156_; 
v_a_2149_ = lean_ctor_get(v___x_2146_, 0);
v_isSharedCheck_2156_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2156_ == 0)
{
v___x_2151_ = v___x_2146_;
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
else
{
lean_inc(v_a_2149_);
lean_dec(v___x_2146_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2156_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2154_; 
if (v_isShared_2152_ == 0)
{
v___x_2154_ = v___x_2151_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2155_; 
v_reuseFailAlloc_2155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2155_, 0, v_a_2149_);
v___x_2154_ = v_reuseFailAlloc_2155_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
return v___x_2154_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1___boxed(lean_object* v_context_2157_, lean_object* v_bytes_2158_, lean_object* v_a_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v_context_2157_, v_bytes_2158_);
lean_dec_ref(v_bytes_2158_);
lean_dec_ref(v_context_2157_);
return v_res_2160_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0(void){
_start:
{
uint64_t v___x_2161_; uint8_t v___x_2162_; uint64_t v___x_2163_; 
v___x_2161_ = 8ULL;
v___x_2162_ = 0;
v___x_2163_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__0(v___x_2162_, v___x_2161_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(lean_object* v_o_2164_, lean_object* v_name_2165_, lean_object* v_args_2166_){
_start:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; uint64_t v___x_2171_; lean_object* v___x_2172_; 
v___x_2168_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2169_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2169_, 0, v_o_2164_);
lean_ctor_set(v___x_2169_, 1, v___x_2168_);
lean_inc_ref(v_name_2165_);
v___x_2170_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2170_, 0, v_name_2165_);
v___x_2171_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___closed__0);
v___x_2172_ = l_Lasm_JS_Value_invokeRaw(v___x_2169_, v___x_2170_, v_args_2166_, v___x_2171_);
if (lean_obj_tag(v___x_2172_) == 0)
{
lean_object* v_a_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v_a_2173_ = lean_ctor_get(v___x_2172_, 0);
lean_inc(v_a_2173_);
lean_dec_ref_known(v___x_2172_, 1);
v___x_2174_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_closeIdleConnections_spec__0___closed__1));
v___x_2175_ = lean_string_append(v___x_2174_, v_name_2165_);
lean_dec_ref(v_name_2165_);
v___x_2176_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0_spec__1(v___x_2175_, v_a_2173_);
lean_dec(v_a_2173_);
lean_dec_ref(v___x_2175_);
return v___x_2176_;
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_dec_ref(v_name_2165_);
v_a_2177_ = lean_ctor_get(v___x_2172_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2172_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2172_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2172_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0___boxed(lean_object* v_o_2185_, lean_object* v_name_2186_, lean_object* v_args_2187_, lean_object* v_a_2188_){
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_o_2185_, v_name_2186_, v_args_2187_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP(lean_object* v_self_2191_, lean_object* v_request_2192_){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
v___x_2194_ = ((lean_object*)(l_Lasm_JS_Bun_Server_requestIP___closed__0));
v___x_2195_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2196_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2196_, 0, v_request_2192_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = lean_unsigned_to_nat(1u);
v___x_2198_ = lean_mk_empty_array_with_capacity(v___x_2197_);
v___x_2199_ = lean_array_push(v___x_2198_, v___x_2196_);
v___x_2200_ = l_Lasm_JS_Web_Support_args(v___x_2199_);
v___x_2201_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Bun_Server_requestIP_spec__0(v_self_2191_, v___x_2194_, v___x_2200_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_requestIP___boxed(lean_object* v_self_2202_, lean_object* v_request_2203_, lean_object* v_a_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l_Lasm_JS_Bun_Server_requestIP(v_self_2202_, v_request_2203_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout(lean_object* v_self_2207_, lean_object* v_request_2208_, lean_object* v_seconds_2209_){
_start:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___y_2215_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; uint8_t v___x_2225_; 
v___x_2211_ = ((lean_object*)(l_Lasm_JS_Bun_Server_timeout___closed__0));
v___x_2212_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2213_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2213_, 0, v_request_2208_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
v___x_2222_ = lean_nat_to_int(v_seconds_2209_);
v___x_2223_ = lean_nat_abs(v___x_2222_);
v___x_2224_ = lean_cstr_to_nat("9007199254740991");
v___x_2225_ = lean_nat_dec_le(v___x_2223_, v___x_2224_);
lean_dec(v___x_2223_);
if (v___x_2225_ == 0)
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2222_);
v___y_2215_ = v___x_2226_;
goto v___jp_2214_;
}
else
{
double v___x_2227_; lean_object* v___x_2228_; 
v___x_2227_ = l_Float_ofInt(v___x_2222_);
lean_dec(v___x_2222_);
v___x_2228_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2228_, 0, v___x_2227_);
v___y_2215_ = v___x_2228_;
goto v___jp_2214_;
}
v___jp_2214_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2216_ = lean_unsigned_to_nat(2u);
v___x_2217_ = lean_mk_empty_array_with_capacity(v___x_2216_);
v___x_2218_ = lean_array_push(v___x_2217_, v___x_2213_);
v___x_2219_ = lean_array_push(v___x_2218_, v___y_2215_);
v___x_2220_ = l_Lasm_JS_Web_Support_args(v___x_2219_);
v___x_2221_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2207_, v___x_2211_, v___x_2220_);
return v___x_2221_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_timeout___boxed(lean_object* v_self_2229_, lean_object* v_request_2230_, lean_object* v_seconds_2231_, lean_object* v_a_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l_Lasm_JS_Bun_Server_timeout(v_self_2229_, v_request_2230_, v_seconds_2231_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref(lean_object* v_self_2235_){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2237_ = ((lean_object*)(l_Lasm_JS_Bun_Server_ref___closed__0));
v___x_2238_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2239_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2235_, v___x_2237_, v___x_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_ref___boxed(lean_object* v_self_2240_, lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Lasm_JS_Bun_Server_ref(v_self_2240_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref(lean_object* v_self_2244_){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2246_ = ((lean_object*)(l_Lasm_JS_Bun_Server_unref___closed__0));
v___x_2247_ = lean_obj_once(&l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2, &l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2_once, _init_l_Lasm_JS_Bun_Server_closeIdleConnections___closed__2);
v___x_2248_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1(v_self_2244_, v___x_2246_, v___x_2247_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_Server_unref___boxed(lean_object* v_self_2249_, lean_object* v_a_2250_){
_start:
{
lean_object* v_res_2251_; 
v_res_2251_ = l_Lasm_JS_Bun_Server_unref(v_self_2249_);
return v_res_2251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve(lean_object* v_options_2261_){
_start:
{
lean_object* v_maxRequestBodySize_2263_; lean_object* v_error_2264_; lean_object* v_id_2265_; lean_object* v_hostname_2266_; lean_object* v_port_2267_; lean_object* v_reusePort_2268_; lean_object* v_ipv6Only_2269_; lean_object* v_idleTimeout_2270_; lean_object* v_fetch_2271_; uint8_t v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; 
v_maxRequestBodySize_2263_ = lean_ctor_get(v_options_2261_, 0);
lean_inc(v_maxRequestBodySize_2263_);
v_error_2264_ = lean_ctor_get(v_options_2261_, 1);
lean_inc(v_error_2264_);
v_id_2265_ = lean_ctor_get(v_options_2261_, 2);
lean_inc(v_id_2265_);
v_hostname_2266_ = lean_ctor_get(v_options_2261_, 3);
lean_inc(v_hostname_2266_);
v_port_2267_ = lean_ctor_get(v_options_2261_, 4);
lean_inc(v_port_2267_);
v_reusePort_2268_ = lean_ctor_get(v_options_2261_, 5);
lean_inc(v_reusePort_2268_);
v_ipv6Only_2269_ = lean_ctor_get(v_options_2261_, 6);
lean_inc(v_ipv6Only_2269_);
v_idleTimeout_2270_ = lean_ctor_get(v_options_2261_, 7);
lean_inc(v_idleTimeout_2270_);
v_fetch_2271_ = lean_ctor_get(v_options_2261_, 8);
lean_inc(v_fetch_2271_);
lean_dec_ref(v_options_2261_);
v___x_2272_ = 0;
v___x_2273_ = lean_unsigned_to_nat(1u);
v___x_2274_ = ((lean_object*)(l_Lasm_JS_Bun_serve___closed__3));
v___x_2275_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__0));
v___x_2276_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_maxRequestBodySize_2263_);
v___x_2277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2275_);
lean_ctor_set(v___x_2277_, 1, v___x_2276_);
v___x_2278_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__1));
v___x_2279_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__0(v_error_2264_);
lean_dec(v_error_2264_);
v___x_2280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2278_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__2));
v___x_2282_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_id_2265_);
v___x_2283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2283_, 0, v___x_2281_);
lean_ctor_set(v___x_2283_, 1, v___x_2282_);
v___x_2284_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__3));
v___x_2285_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMException_new_spec__0(v_hostname_2266_);
v___x_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__4));
v___x_2288_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Bun_Server_reload_spec__1(v_port_2267_);
v___x_2289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2289_, 0, v___x_2287_);
lean_ctor_set(v___x_2289_, 1, v___x_2288_);
v___x_2290_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__5));
v___x_2291_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_reusePort_2268_);
lean_dec(v_reusePort_2268_);
v___x_2292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2290_);
lean_ctor_set(v___x_2292_, 1, v___x_2291_);
v___x_2293_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__6));
v___x_2294_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__0_spec__0(v_ipv6Only_2269_);
lean_dec(v_ipv6Only_2269_);
v___x_2295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2293_);
lean_ctor_set(v___x_2295_, 1, v___x_2294_);
v___x_2296_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__7));
v___x_2297_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_ReadableStreamBYOBReader_read_spec__0_spec__0(v_idleTimeout_2270_);
v___x_2298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2298_, 0, v___x_2296_);
lean_ctor_set(v___x_2298_, 1, v___x_2297_);
v___x_2299_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServeOptions___lam__0___closed__8));
v___x_2300_ = ((lean_object*)(l_Lasm_JS_Bun_instToJSServer___lam__0___closed__0));
v___x_2301_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2301_, 0, v_fetch_2271_);
lean_ctor_set(v___x_2301_, 1, v___x_2300_);
v___x_2302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2299_);
lean_ctor_set(v___x_2302_, 1, v___x_2301_);
v___x_2303_ = lean_unsigned_to_nat(9u);
v___x_2304_ = lean_mk_empty_array_with_capacity(v___x_2303_);
v___x_2305_ = lean_array_push(v___x_2304_, v___x_2277_);
v___x_2306_ = lean_array_push(v___x_2305_, v___x_2280_);
v___x_2307_ = lean_array_push(v___x_2306_, v___x_2283_);
v___x_2308_ = lean_array_push(v___x_2307_, v___x_2286_);
v___x_2309_ = lean_array_push(v___x_2308_, v___x_2289_);
v___x_2310_ = lean_array_push(v___x_2309_, v___x_2292_);
v___x_2311_ = lean_array_push(v___x_2310_, v___x_2295_);
v___x_2312_ = lean_array_push(v___x_2311_, v___x_2298_);
v___x_2313_ = lean_array_push(v___x_2312_, v___x_2302_);
v___x_2314_ = l_Lasm_JS_Web_Support_fields(v___x_2313_);
lean_dec_ref(v___x_2313_);
v___x_2315_ = lean_mk_empty_array_with_capacity(v___x_2273_);
v___x_2316_ = lean_array_push(v___x_2315_, v___x_2314_);
v___x_2317_ = l_Lasm_JS_Web_Support_args(v___x_2316_);
v___x_2318_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_2274_, v___x_2317_, v___x_2272_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2318_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2318_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
else
{
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
v_a_2327_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2329_ = v___x_2318_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2318_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2327_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Bun_serve___boxed(lean_object* v_options_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l_Lasm_JS_Bun_serve(v_options_2335_);
return v_res_2337_;
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
