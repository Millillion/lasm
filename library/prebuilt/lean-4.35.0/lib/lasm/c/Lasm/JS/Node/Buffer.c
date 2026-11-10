// Lean compiler output
// Module: Lasm.JS.Node.Buffer
// Imports: public import Init public meta import Init public import Lasm.JS.Node.Support
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
lean_object* lean_string_append(lean_object*, lean_object*);
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
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong = (const lean_object*)&l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Node.DOMStringOrUint8Array"};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array = (const lean_object*)&l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(lean_object*);
static lean_once_cell_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0;
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0;
static const lean_string_object l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "call"};
static const lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_compare___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "node:buffer"};
static const lean_object* l_Lasm_JS_Node_Buffer_compare___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_compare___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Buffer.prototype.compare"};
static const lean_object* l_Lasm_JS_Node_Buffer_compare___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__0_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__1;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_equals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Buffer.prototype.equals"};
static const lean_object* l_Lasm_JS_Node_Buffer_equals___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_equals___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Buffer.prototype.toString"};
static const lean_object* l_Lasm_JS_Node_Buffer_toString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_toString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_alloc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.Buffer.alloc"};
static const lean_object* l_Lasm_JS_Node_Buffer_alloc___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_alloc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Buffer.alloc"};
static const lean_object* l_Lasm_JS_Node_Buffer_alloc___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_alloc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_alloc___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_alloc___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_byteLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.Buffer.byteLength"};
static const lean_object* l_Lasm_JS_Node_Buffer_byteLength___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_byteLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Buffer.byteLength"};
static const lean_object* l_Lasm_JS_Node_Buffer_byteLength___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_byteLength___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_byteLength___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_byteLength___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_staticCompare___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Lasm.JS.Node.Buffer.staticCompare"};
static const lean_object* l_Lasm_JS_Node_Buffer_staticCompare___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_staticCompare___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Buffer.compare"};
static const lean_object* l_Lasm_JS_Node_Buffer_staticCompare___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_staticCompare___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_staticCompare___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_staticCompare___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_concat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.Buffer.concat"};
static const lean_object* l_Lasm_JS_Node_Buffer_concat___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_concat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Buffer.concat"};
static const lean_object* l_Lasm_JS_Node_Buffer_concat___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_concat___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_concat___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_concat___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_from___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.Buffer.from"};
static const lean_object* l_Lasm_JS_Node_Buffer_from___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_from___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Buffer.from"};
static const lean_object* l_Lasm_JS_Node_Buffer_from___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_from___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_from___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_from___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Buffer_isEncoding___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Node.Buffer.isEncoding"};
static const lean_object* l_Lasm_JS_Node_Buffer_isEncoding___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Buffer_isEncoding___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Buffer.isEncoding"};
static const lean_object* l_Lasm_JS_Node_Buffer_isEncoding___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_Buffer_isEncoding___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Buffer_isEncoding___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Buffer_isEncoding___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_kMaxLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "kMaxLength"};
static const lean_object* l_Lasm_JS_Node_buffer_kMaxLength___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_kMaxLength___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_kMaxLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_kMaxLength___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_buffer_kMaxLength___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_kMaxLength___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "kStringMaxLength"};
static const lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_kStringMaxLength___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_isAscii___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.buffer.isAscii"};
static const lean_object* l_Lasm_JS_Node_buffer_isAscii___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_isAscii___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isAscii"};
static const lean_object* l_Lasm_JS_Node_buffer_isAscii___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_isAscii___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_isAscii___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_isAscii___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_isUtf8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.buffer.isUtf8"};
static const lean_object* l_Lasm_JS_Node_buffer_isUtf8___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_isUtf8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isUtf8"};
static const lean_object* l_Lasm_JS_Node_buffer_isUtf8___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_isUtf8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_isUtf8___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_isUtf8___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_buffer_transcode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Node.buffer.transcode"};
static const lean_object* l_Lasm_JS_Node_buffer_transcode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_buffer_transcode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transcode"};
static const lean_object* l_Lasm_JS_Node_buffer_transcode___closed__1 = (const lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_buffer_transcode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Buffer_compare___closed__0_value),((lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_buffer_transcode___closed__2 = (const lean_object*)&l_Lasm_JS_Node_buffer_transcode___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_value_9_; lean_object* v___x_10_; 
v_value_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_value_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_value_9_);
return v___x_10_;
}
else
{
lean_object* v_value_11_; lean_object* v___x_12_; 
v_value_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_value_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_value_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim___redArg(lean_object* v_t_25_, lean_object* v_domString_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_25_, v_domString_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_domString_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_29_, v_domString_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim___redArg(lean_object* v_t_33_, lean_object* v_uint8Array_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_33_, v_uint8Array_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_uint8Array_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_37_, v_uint8Array_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim___redArg(lean_object* v_t_41_, lean_object* v_longLong_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_41_, v_longLong_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_longLong_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_45_, v_longLong_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_x_49_){
_start:
{
switch(lean_obj_tag(v_x_49_))
{
case 0:
{
lean_object* v_value_50_; lean_object* v___x_52_; uint8_t v_isShared_53_; uint8_t v_isSharedCheck_57_; 
v_value_50_ = lean_ctor_get(v_x_49_, 0);
v_isSharedCheck_57_ = !lean_is_exclusive(v_x_49_);
if (v_isSharedCheck_57_ == 0)
{
v___x_52_ = v_x_49_;
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
else
{
lean_inc(v_value_50_);
lean_dec(v_x_49_);
v___x_52_ = lean_box(0);
v_isShared_53_ = v_isSharedCheck_57_;
goto v_resetjp_51_;
}
v_resetjp_51_:
{
lean_object* v___x_55_; 
if (v_isShared_53_ == 0)
{
lean_ctor_set_tag(v___x_52_, 4);
v___x_55_ = v___x_52_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_56_; 
v_reuseFailAlloc_56_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_56_, 0, v_value_50_);
v___x_55_ = v_reuseFailAlloc_56_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
return v___x_55_;
}
}
}
case 1:
{
lean_object* v_value_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_65_; 
v_value_58_ = lean_ctor_get(v_x_49_, 0);
v_isSharedCheck_65_ = !lean_is_exclusive(v_x_49_);
if (v_isSharedCheck_65_ == 0)
{
v___x_60_ = v_x_49_;
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_value_58_);
lean_dec(v_x_49_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_65_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_63_; 
if (v_isShared_61_ == 0)
{
lean_ctor_set_tag(v___x_60_, 6);
v___x_63_ = v___x_60_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_value_58_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
default: 
{
lean_object* v_value_66_; lean_object* v___x_68_; uint8_t v_isShared_69_; uint8_t v_isSharedCheck_78_; 
v_value_66_ = lean_ctor_get(v_x_49_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v_x_49_);
if (v_isSharedCheck_78_ == 0)
{
v___x_68_ = v_x_49_;
v_isShared_69_ = v_isSharedCheck_78_;
goto v_resetjp_67_;
}
else
{
lean_inc(v_value_66_);
lean_dec(v_x_49_);
v___x_68_ = lean_box(0);
v_isShared_69_ = v_isSharedCheck_78_;
goto v_resetjp_67_;
}
v_resetjp_67_:
{
lean_object* v___x_70_; lean_object* v___x_71_; uint8_t v___x_72_; 
v___x_70_ = lean_nat_abs(v_value_66_);
v___x_71_ = lean_cstr_to_nat("9007199254740991");
v___x_72_ = lean_nat_dec_le(v___x_70_, v___x_71_);
lean_dec(v___x_70_);
if (v___x_72_ == 0)
{
lean_object* v___x_74_; 
if (v_isShared_69_ == 0)
{
lean_ctor_set_tag(v___x_68_, 5);
v___x_74_ = v___x_68_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_value_66_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
else
{
double v___x_76_; lean_object* v___x_77_; 
lean_del_object(v___x_68_);
v___x_76_ = l_Float_ofInt(v_value_66_);
lean_dec(v_value_66_);
v___x_77_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_77_, 0, v___x_76_);
return v___x_77_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_value_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_85_){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_86_, 0, v_value_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_90_, 0, v_value_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(lean_object* v_x_93_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v___x_94_; 
v___x_94_ = lean_unsigned_to_nat(0u);
return v___x_94_;
}
else
{
lean_object* v___x_95_; 
v___x_95_ = lean_unsigned_to_nat(1u);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___boxed(lean_object* v_x_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx(v_x_96_);
lean_dec_ref(v_x_96_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(lean_object* v_t_98_, lean_object* v_k_99_){
_start:
{
lean_object* v_value_100_; lean_object* v___x_101_; 
v_value_100_ = lean_ctor_get(v_t_98_, 0);
lean_inc_ref(v_value_100_);
lean_dec_ref(v_t_98_);
v___x_101_ = lean_apply_1(v_k_99_, v_value_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(lean_object* v_motive_102_, lean_object* v_ctorIdx_103_, lean_object* v_t_104_, lean_object* v_h_105_, lean_object* v_k_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_104_, v_k_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___boxed(lean_object* v_motive_108_, lean_object* v_ctorIdx_109_, lean_object* v_t_110_, lean_object* v_h_111_, lean_object* v_k_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(v_motive_108_, v_ctorIdx_109_, v_t_110_, v_h_111_, v_k_112_);
lean_dec(v_ctorIdx_109_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim___redArg(lean_object* v_t_114_, lean_object* v_domString_115_){
_start:
{
lean_object* v___x_116_; 
v___x_116_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_114_, v_domString_115_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim(lean_object* v_motive_117_, lean_object* v_t_118_, lean_object* v_h_119_, lean_object* v_domString_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_118_, v_domString_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim___redArg(lean_object* v_t_122_, lean_object* v_uint8Array_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_122_, v_uint8Array_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim(lean_object* v_motive_125_, lean_object* v_t_126_, lean_object* v_h_127_, lean_object* v_uint8Array_128_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_126_, v_uint8Array_128_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
lean_object* v_value_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
v_value_131_ = lean_ctor_get(v_x_130_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v_x_130_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_value_131_);
lean_dec(v_x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
lean_ctor_set_tag(v___x_133_, 4);
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_value_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
else
{
lean_object* v_value_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
v_value_139_ = lean_ctor_get(v_x_130_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v_x_130_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v_x_130_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_value_139_);
lean_dec(v_x_130_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
lean_ctor_set_tag(v___x_141_, 6);
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_value_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0(lean_object* v_value_149_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_150_, 0, v_value_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0(lean_object* v_value_153_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_154_, 0, v_value_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0(lean_object* v_x_160_){
_start:
{
switch(lean_obj_tag(v_x_160_))
{
case 4:
{
lean_object* v_s_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_169_; 
v_s_161_ = lean_ctor_get(v_x_160_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v_x_160_);
if (v_isSharedCheck_169_ == 0)
{
v___x_163_ = v_x_160_;
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_s_161_);
lean_dec(v_x_160_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_169_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_166_; 
if (v_isShared_164_ == 0)
{
lean_ctor_set_tag(v___x_163_, 0);
v___x_166_ = v___x_163_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_s_161_);
v___x_166_ = v_reuseFailAlloc_168_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
lean_object* v___x_167_; 
v___x_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_167_, 0, v___x_166_);
return v___x_167_;
}
}
}
case 6:
{
lean_object* v_b_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_178_; 
v_b_170_ = lean_ctor_get(v_x_160_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v_x_160_);
if (v_isSharedCheck_178_ == 0)
{
v___x_172_ = v_x_160_;
v_isShared_173_ = v_isSharedCheck_178_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_b_170_);
lean_dec(v_x_160_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_178_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
lean_ctor_set_tag(v___x_172_, 1);
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v_b_170_);
v___x_175_ = v_reuseFailAlloc_177_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
lean_object* v___x_176_; 
v___x_176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_176_, 0, v___x_175_);
return v___x_176_;
}
}
}
default: 
{
lean_object* v___x_179_; 
lean_dec(v_x_160_);
v___x_179_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__1));
return v___x_179_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(lean_object* v_x_187_){
_start:
{
if (lean_obj_tag(v_x_187_) == 0)
{
lean_object* v___x_188_; 
v___x_188_ = lean_box(0);
return v___x_188_;
}
else
{
lean_object* v_val_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_201_; 
v_val_189_ = lean_ctor_get(v_x_187_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v_x_187_);
if (v_isSharedCheck_201_ == 0)
{
v___x_191_ = v_x_187_;
v_isShared_192_ = v_isSharedCheck_201_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_val_189_);
lean_dec(v_x_187_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_201_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_193_ = lean_nat_abs(v_val_189_);
v___x_194_ = lean_cstr_to_nat("9007199254740991");
v___x_195_ = lean_nat_dec_le(v___x_193_, v___x_194_);
lean_dec(v___x_193_);
if (v___x_195_ == 0)
{
lean_object* v___x_197_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 5);
v___x_197_ = v___x_191_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v_val_189_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
else
{
double v___x_199_; lean_object* v___x_200_; 
lean_del_object(v___x_191_);
v___x_199_ = l_Float_ofInt(v_val_189_);
lean_dec(v_val_189_);
v___x_200_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_200_, 0, v___x_199_);
return v___x_200_;
}
}
}
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0(void){
_start:
{
uint8_t v___x_202_; uint64_t v___x_203_; 
v___x_202_ = 0;
v___x_203_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_202_);
return v___x_203_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5(uint8_t v_await_204_, uint64_t v_extra_205_){
_start:
{
uint64_t v___x_206_; uint64_t v___y_208_; 
v___x_206_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_204_ == 0)
{
uint64_t v___x_211_; 
v___x_211_ = 0ULL;
v___y_208_ = v___x_211_;
goto v___jp_207_;
}
else
{
uint64_t v___x_212_; 
v___x_212_ = 2ULL;
v___y_208_ = v___x_212_;
goto v___jp_207_;
}
v___jp_207_:
{
uint64_t v___x_209_; uint64_t v___x_210_; 
v___x_209_ = lean_uint64_lor(v___x_206_, v___y_208_);
v___x_210_ = lean_uint64_lor(v___x_209_, v_extra_205_);
return v___x_210_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___boxed(lean_object* v_await_213_, lean_object* v_extra_214_){
_start:
{
uint8_t v_await_boxed_215_; uint64_t v_extra_boxed_216_; uint64_t v_res_217_; lean_object* v_r_218_; 
v_await_boxed_215_ = lean_unbox(v_await_213_);
v_extra_boxed_216_ = lean_unbox_uint64(v_extra_214_);
lean_dec_ref(v_extra_214_);
v_res_217_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5(v_await_boxed_215_, v_extra_boxed_216_);
v_r_218_ = lean_box_uint64(v_res_217_);
return v_r_218_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__8));
v___x_229_ = lean_unsigned_to_nat(46u);
v___x_230_ = lean_unsigned_to_nat(193u);
v___x_231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__7));
v___x_232_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__6));
v___x_233_ = l_mkPanicMessageWithDecl(v___x_232_, v___x_231_, v___x_230_, v___x_229_, v___x_228_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(lean_object* v_context_236_, lean_object* v_d_237_){
_start:
{
lean_object* v___y_240_; lean_object* v___y_241_; lean_object* v___y_246_; lean_object* v_received_247_; lean_object* v___y_266_; lean_object* v_a_269_; 
switch(lean_obj_tag(v_d_237_))
{
case 3:
{
double v_n_293_; lean_object* v___x_294_; 
v_n_293_ = lean_ctor_get_float(v_d_237_, 0);
v___x_294_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_293_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v___x_295_; 
v___x_295_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__11));
v_a_269_ = v___x_295_;
goto v___jp_268_;
}
else
{
lean_object* v_val_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec_ref_known(v_d_237_, 0);
v_val_296_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_294_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_val_296_);
lean_dec(v___x_294_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
lean_ctor_set_tag(v___x_298_, 0);
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_val_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
case 5:
{
lean_object* v_i_304_; lean_object* v___x_305_; 
v_i_304_ = lean_ctor_get(v_d_237_, 0);
lean_inc(v_i_304_);
lean_dec_ref_known(v_d_237_, 1);
v___x_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_305_, 0, v_i_304_);
return v___x_305_;
}
default: 
{
lean_object* v___x_306_; 
v___x_306_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v_a_269_ = v___x_306_;
goto v___jp_268_;
}
}
v___jp_239_:
{
lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v___x_242_ = lean_string_append(v___y_240_, v___y_241_);
lean_dec_ref(v___y_241_);
v___x_243_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
v___x_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_244_, 0, v___x_243_);
return v___x_244_;
}
v___jp_245_:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_248_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_249_ = lean_string_append(v___x_248_, v_context_236_);
v___x_250_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1));
v___x_251_ = lean_string_append(v___x_249_, v___x_250_);
v___x_252_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__2));
v___x_253_ = lean_string_append(v___x_251_, v___x_252_);
v___x_254_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3));
v___x_255_ = lean_string_append(v___x_253_, v___x_254_);
v___x_256_ = lean_string_append(v___x_255_, v_received_247_);
lean_dec_ref(v_received_247_);
v___x_257_ = lean_string_utf8_byte_size(v___y_246_);
v___x_258_ = lean_unsigned_to_nat(0u);
v___x_259_ = lean_nat_dec_eq(v___x_257_, v___x_258_);
if (v___x_259_ == 0)
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__4));
v___x_261_ = lean_string_append(v___x_260_, v___y_246_);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__5));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___y_240_ = v___x_256_;
v___y_241_ = v___x_263_;
goto v___jp_239_;
}
else
{
lean_object* v___x_264_; 
v___x_264_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___y_240_ = v___x_256_;
v___y_241_ = v___x_264_;
goto v___jp_239_;
}
}
v___jp_265_:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lasm_JS_Data_describe(v_d_237_);
v___y_246_ = v___y_266_;
v_received_247_ = v___x_267_;
goto v___jp_245_;
}
v___jp_268_:
{
if (lean_obj_tag(v_d_237_) == 9)
{
lean_object* v_value_270_; lean_object* v_description_271_; lean_object* v___x_272_; uint8_t v___x_273_; 
v_value_270_ = lean_ctor_get(v_d_237_, 0);
v_description_271_ = lean_ctor_get(v_d_237_, 1);
v___x_272_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_273_ = lean_string_dec_eq(v_description_271_, v___x_272_);
if (v___x_273_ == 0)
{
v___y_266_ = v_a_269_;
goto v___jp_265_;
}
else
{
lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_290_; 
lean_inc(v_value_270_);
v_isSharedCheck_290_ = !lean_is_exclusive(v_d_237_);
if (v_isSharedCheck_290_ == 0)
{
lean_object* v_unused_291_; lean_object* v_unused_292_; 
v_unused_291_ = lean_ctor_get(v_d_237_, 1);
lean_dec(v_unused_291_);
v_unused_292_ = lean_ctor_get(v_d_237_, 0);
lean_dec(v_unused_292_);
v___x_275_ = v_d_237_;
v_isShared_276_ = v_isSharedCheck_290_;
goto v_resetjp_274_;
}
else
{
lean_dec(v_d_237_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_290_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
uint32_t v___x_277_; uint64_t v___x_278_; lean_object* v___x_280_; 
v___x_277_ = 206;
v___x_278_ = 0ULL;
lean_inc(v_value_270_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_272_);
v___x_280_ = v___x_275_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_value_270_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v___x_272_);
v___x_280_ = v_reuseFailAlloc_289_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
uint32_t v___x_281_; lean_object* v___x_282_; 
v___x_281_ = lasm_js_value_handle(v_value_270_);
lean_dec(v_value_270_);
v___x_282_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_277_, v___x_278_, v___x_280_, v___x_281_);
lean_dec_ref(v___x_280_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; uint8_t v___x_284_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
lean_inc(v_a_283_);
lean_dec_ref_known(v___x_282_, 1);
v___x_284_ = lean_string_validate_utf8(v_a_283_);
if (v___x_284_ == 0)
{
lean_object* v___x_285_; lean_object* v___x_286_; 
lean_dec(v_a_283_);
v___x_285_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9);
v___x_286_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_285_);
v___y_246_ = v_a_269_;
v_received_247_ = v___x_286_;
goto v___jp_245_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = lean_string_from_utf8_unchecked(v_a_283_);
v___y_246_ = v_a_269_;
v_received_247_ = v___x_287_;
goto v___jp_245_;
}
}
else
{
lean_object* v___x_288_; 
lean_dec_ref_known(v___x_282_, 1);
v___x_288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10));
v___y_246_ = v_a_269_;
v_received_247_ = v___x_288_;
goto v___jp_245_;
}
}
}
}
}
else
{
v___y_266_ = v_a_269_;
goto v___jp_265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___boxed(lean_object* v_context_307_, lean_object* v_d_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(v_context_307_, v_d_308_);
lean_dec_ref(v_context_307_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(lean_object* v_context_311_, lean_object* v_bytes_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_312_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_316_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
lean_inc(v_a_315_);
lean_dec_ref_known(v___x_314_, 1);
v___x_316_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(v_context_311_, v_a_315_);
return v___x_316_;
}
else
{
lean_object* v_a_317_; lean_object* v___x_319_; uint8_t v_isShared_320_; uint8_t v_isSharedCheck_324_; 
v_a_317_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_324_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_324_ == 0)
{
v___x_319_ = v___x_314_;
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
else
{
lean_inc(v_a_317_);
lean_dec(v___x_314_);
v___x_319_ = lean_box(0);
v_isShared_320_ = v_isSharedCheck_324_;
goto v_resetjp_318_;
}
v_resetjp_318_:
{
lean_object* v___x_322_; 
if (v_isShared_320_ == 0)
{
v___x_322_ = v___x_319_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_a_317_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6___boxed(lean_object* v_context_325_, lean_object* v_bytes_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(v_context_325_, v_bytes_326_);
lean_dec_ref(v_bytes_326_);
lean_dec_ref(v_context_325_);
return v_res_328_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0(void){
_start:
{
uint64_t v___x_329_; uint8_t v___x_330_; uint64_t v___x_331_; 
v___x_329_ = 0ULL;
v___x_330_ = 0;
v___x_331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5(v___x_330_, v___x_329_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2(lean_object* v_f_333_, lean_object* v_args_334_, lean_object* v_this_335_){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; uint64_t v___x_339_; lean_object* v___x_340_; 
v___x_337_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_338_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_338_, 0, v_f_333_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
v___x_339_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0);
v___x_340_ = l_Lasm_JS_Value_invokeRaw(v___x_338_, v_this_335_, v_args_334_, v___x_339_);
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_340_, 1);
v___x_342_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_343_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(v___x_342_, v_a_341_);
lean_dec(v_a_341_);
return v___x_343_;
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_340_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_340_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___boxed(lean_object* v_f_352_, lean_object* v_args_353_, lean_object* v_this_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2(v_f_352_, v_args_353_, v_this_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3(lean_object* v_module_358_, lean_object* v_o_359_, lean_object* v_a_360_){
_start:
{
if (lean_obj_tag(v_a_360_) == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
lean_dec(v_o_359_);
v___x_362_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0));
v___x_363_ = lean_string_append(v___x_362_, v_module_358_);
v___x_364_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_364_, 0, v___x_363_);
v___x_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
return v___x_365_;
}
else
{
lean_object* v_tail_366_; 
v_tail_366_ = lean_ctor_get(v_a_360_, 1);
if (lean_obj_tag(v_tail_366_) == 0)
{
lean_object* v_head_367_; lean_object* v___x_368_; 
v_head_367_ = lean_ctor_get(v_a_360_, 0);
lean_inc(v_head_367_);
lean_dec_ref_known(v_a_360_, 2);
v___x_368_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_359_, v_head_367_);
return v___x_368_;
}
else
{
lean_object* v_head_369_; lean_object* v___x_370_; 
lean_inc(v_tail_366_);
v_head_369_ = lean_ctor_get(v_a_360_, 0);
lean_inc(v_head_369_);
lean_dec_ref_known(v_a_360_, 2);
v___x_370_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_359_, v_head_369_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; 
v_a_371_ = lean_ctor_get(v___x_370_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v___x_370_, 1);
v_o_359_ = v_a_371_;
v_a_360_ = v_tail_366_;
goto _start;
}
else
{
lean_dec(v_tail_366_);
return v___x_370_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___boxed(lean_object* v_module_373_, lean_object* v_o_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3(v_module_373_, v_o_374_, v_a_375_);
lean_dec_ref(v_module_373_);
return v_res_377_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_378_; uint64_t v___x_379_; 
v___x_378_ = 1;
v___x_379_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(lean_object* v_specifier_381_){
_start:
{
uint32_t v___x_383_; uint32_t v___x_384_; uint64_t v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_383_ = 201;
v___x_384_ = 0;
v___x_385_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0);
v___x_386_ = lean_string_to_utf8(v_specifier_381_);
v___x_387_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_383_, v___x_384_, v___x_385_, v___x_386_);
lean_dec_ref(v___x_386_);
if (lean_obj_tag(v___x_387_) == 0)
{
lean_object* v_a_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v_a_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_a_388_);
lean_dec_ref_known(v___x_387_, 1);
v___x_389_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__1));
v___x_390_ = l_String_quote(v_specifier_381_);
v___x_391_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
v___x_392_ = lean_unsigned_to_nat(120u);
v___x_393_ = lean_unsigned_to_nat(0u);
v___x_394_ = l_Std_Format_pretty(v___x_391_, v___x_392_, v___x_393_, v___x_393_);
v___x_395_ = lean_string_append(v___x_389_, v___x_394_);
lean_dec_ref(v___x_394_);
v___x_396_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_395_, v_a_388_);
lean_dec(v_a_388_);
lean_dec_ref(v___x_395_);
return v___x_396_;
}
else
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_404_; 
lean_dec_ref(v_specifier_381_);
v_a_397_ = lean_ctor_get(v___x_387_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_404_ == 0)
{
v___x_399_ = v___x_387_;
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_387_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_404_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_402_; 
if (v_isShared_400_ == 0)
{
v___x_402_ = v___x_399_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v_a_397_);
v___x_402_ = v_reuseFailAlloc_403_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
return v___x_402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___boxed(lean_object* v_specifier_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(v_specifier_405_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(lean_object* v_module_408_, lean_object* v_path_409_){
_start:
{
lean_object* v___x_411_; 
lean_inc_ref(v_module_408_);
v___x_411_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(v_module_408_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_413_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_a_412_);
lean_dec_ref_known(v___x_411_, 1);
v___x_413_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3(v_module_408_, v_a_412_, v_path_409_);
lean_dec_ref(v_module_408_);
return v___x_413_;
}
else
{
lean_dec(v_path_409_);
lean_dec_ref(v_module_408_);
return v___x_411_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1___boxed(lean_object* v_module_414_, lean_object* v_path_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_414_, v_path_415_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1(lean_object* v_module_419_, lean_object* v_path_420_, lean_object* v_self_421_, lean_object* v_args_422_){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_424_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_425_ = lean_unsigned_to_nat(0u);
v___x_426_ = lean_box(0);
v___x_427_ = l_String_splitOnAux(v_path_420_, v___x_424_, v___x_425_, v___x_425_, v___x_425_, v___x_426_);
v___x_428_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_419_, v___x_427_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; lean_object* v___x_430_; lean_object* v___x_431_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref_known(v___x_428_, 1);
v___x_430_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_430_, 0, v_self_421_);
v___x_431_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2(v_a_429_, v_args_422_, v___x_430_);
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
lean_dec_ref(v_args_422_);
lean_dec_ref(v_self_421_);
v_a_432_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_428_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___boxed(lean_object* v_module_440_, lean_object* v_path_441_, lean_object* v_self_442_, lean_object* v_args_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1(v_module_440_, v_path_441_, v_self_442_, v_args_443_);
lean_dec_ref(v_path_441_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare(lean_object* v_self_448_, lean_object* v_target_449_, lean_object* v_targetStart_450_, lean_object* v_targetEnd_451_, lean_object* v_sourceStart_452_, lean_object* v_sourceEnd_453_){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_455_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_456_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__1));
v___x_457_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_457_, 0, v_target_449_);
v___x_458_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_targetStart_450_);
v___x_459_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_targetEnd_451_);
v___x_460_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_sourceStart_452_);
v___x_461_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_sourceEnd_453_);
v___x_462_ = lean_unsigned_to_nat(5u);
v___x_463_ = lean_mk_empty_array_with_capacity(v___x_462_);
v___x_464_ = lean_array_push(v___x_463_, v___x_457_);
v___x_465_ = lean_array_push(v___x_464_, v___x_458_);
v___x_466_ = lean_array_push(v___x_465_, v___x_459_);
v___x_467_ = lean_array_push(v___x_466_, v___x_460_);
v___x_468_ = lean_array_push(v___x_467_, v___x_461_);
v___x_469_ = l_Lasm_JS_Web_Support_args(v___x_468_);
v___x_470_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1(v___x_455_, v___x_456_, v_self_448_, v___x_469_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare___boxed(lean_object* v_self_471_, lean_object* v_target_472_, lean_object* v_targetStart_473_, lean_object* v_targetEnd_474_, lean_object* v_sourceStart_475_, lean_object* v_sourceEnd_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lasm_JS_Node_Buffer_compare(v_self_471_, v_target_472_, v_targetStart_473_, v_targetEnd_474_, v_sourceStart_475_, v_sourceEnd_476_);
return v_res_478_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__1(void){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_481_ = lean_string_utf8_byte_size(v___x_480_);
return v___x_481_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__1);
v___x_484_ = lean_nat_dec_eq(v___x_483_, v___x_482_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(lean_object* v_context_486_, lean_object* v_d_487_){
_start:
{
lean_object* v___y_490_; lean_object* v___y_491_; 
if (lean_obj_tag(v_d_487_) == 2)
{
uint8_t v_b_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v_b_495_ = lean_ctor_get_uint8(v_d_487_, 0);
lean_dec_ref_known(v_d_487_, 0);
v___x_496_ = lean_box(v_b_495_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
else
{
lean_object* v___x_498_; lean_object* v_received_500_; 
v___x_498_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
if (lean_obj_tag(v_d_487_) == 9)
{
lean_object* v_value_514_; lean_object* v_description_515_; uint8_t v___x_516_; 
v_value_514_ = lean_ctor_get(v_d_487_, 0);
v_description_515_ = lean_ctor_get(v_d_487_, 1);
v___x_516_ = lean_string_dec_eq(v_description_515_, v___x_498_);
if (v___x_516_ == 0)
{
goto v___jp_512_;
}
else
{
uint32_t v___x_517_; uint64_t v___x_518_; lean_object* v___x_519_; uint32_t v___x_520_; lean_object* v___x_521_; 
lean_inc_n(v_value_514_, 2);
lean_dec_ref_known(v_d_487_, 2);
v___x_517_ = 206;
v___x_518_ = 0ULL;
v___x_519_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_519_, 0, v_value_514_);
lean_ctor_set(v___x_519_, 1, v___x_498_);
v___x_520_ = lasm_js_value_handle(v_value_514_);
lean_dec(v_value_514_);
v___x_521_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_517_, v___x_518_, v___x_519_, v___x_520_);
lean_dec_ref_known(v___x_519_, 2);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; uint8_t v___x_523_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
lean_inc(v_a_522_);
lean_dec_ref_known(v___x_521_, 1);
v___x_523_ = lean_string_validate_utf8(v_a_522_);
if (v___x_523_ == 0)
{
lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec(v_a_522_);
v___x_524_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9);
v___x_525_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_524_);
v_received_500_ = v___x_525_;
goto v___jp_499_;
}
else
{
lean_object* v___x_526_; 
v___x_526_ = lean_string_from_utf8_unchecked(v_a_522_);
v_received_500_ = v___x_526_;
goto v___jp_499_;
}
}
else
{
lean_object* v___x_527_; 
lean_dec_ref_known(v___x_521_, 1);
v___x_527_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10));
v_received_500_ = v___x_527_;
goto v___jp_499_;
}
}
}
else
{
goto v___jp_512_;
}
v___jp_499_:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; 
v___x_501_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_502_ = lean_string_append(v___x_501_, v_context_486_);
v___x_503_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1));
v___x_504_ = lean_string_append(v___x_502_, v___x_503_);
v___x_505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_506_ = lean_string_append(v___x_504_, v___x_505_);
v___x_507_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3));
v___x_508_ = lean_string_append(v___x_506_, v___x_507_);
v___x_509_ = lean_string_append(v___x_508_, v_received_500_);
lean_dec_ref(v_received_500_);
v___x_510_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2);
if (v___x_510_ == 0)
{
lean_object* v___x_511_; 
v___x_511_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__3));
v___y_490_ = v___x_509_;
v___y_491_ = v___x_511_;
goto v___jp_489_;
}
else
{
v___y_490_ = v___x_509_;
v___y_491_ = v___x_498_;
goto v___jp_489_;
}
}
v___jp_512_:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lasm_JS_Data_describe(v_d_487_);
v_received_500_ = v___x_513_;
goto v___jp_499_;
}
}
v___jp_489_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_492_ = lean_string_append(v___y_490_, v___y_491_);
v___x_493_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
v___x_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_context_528_, lean_object* v_d_529_, lean_object* v_a_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(v_context_528_, v_d_529_);
lean_dec_ref(v_context_528_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2(lean_object* v_context_532_, lean_object* v_bytes_533_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_533_);
if (lean_obj_tag(v___x_535_) == 0)
{
lean_object* v_a_536_; lean_object* v___x_537_; 
v_a_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc(v_a_536_);
lean_dec_ref_known(v___x_535_, 1);
v___x_537_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(v_context_532_, v_a_536_);
return v___x_537_;
}
else
{
lean_object* v_a_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_545_; 
v_a_538_ = lean_ctor_get(v___x_535_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v___x_535_);
if (v_isSharedCheck_545_ == 0)
{
v___x_540_ = v___x_535_;
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_a_538_);
lean_dec(v___x_535_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_545_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v___x_543_; 
if (v_isShared_541_ == 0)
{
v___x_543_ = v___x_540_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_538_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2___boxed(lean_object* v_context_546_, lean_object* v_bytes_547_, lean_object* v_a_548_){
_start:
{
lean_object* v_res_549_; 
v_res_549_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2(v_context_546_, v_bytes_547_);
lean_dec_ref(v_bytes_547_);
lean_dec_ref(v_context_546_);
return v_res_549_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1(uint8_t v_await_550_, uint64_t v_extra_551_){
_start:
{
uint64_t v___x_552_; uint64_t v___y_554_; 
v___x_552_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_550_ == 0)
{
uint64_t v___x_557_; 
v___x_557_ = 0ULL;
v___y_554_ = v___x_557_;
goto v___jp_553_;
}
else
{
uint64_t v___x_558_; 
v___x_558_ = 2ULL;
v___y_554_ = v___x_558_;
goto v___jp_553_;
}
v___jp_553_:
{
uint64_t v___x_555_; uint64_t v___x_556_; 
v___x_555_ = lean_uint64_lor(v___x_552_, v___y_554_);
v___x_556_ = lean_uint64_lor(v___x_555_, v_extra_551_);
return v___x_556_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1___boxed(lean_object* v_await_559_, lean_object* v_extra_560_){
_start:
{
uint8_t v_await_boxed_561_; uint64_t v_extra_boxed_562_; uint64_t v_res_563_; lean_object* v_r_564_; 
v_await_boxed_561_ = lean_unbox(v_await_559_);
v_extra_boxed_562_ = lean_unbox_uint64(v_extra_560_);
lean_dec_ref(v_extra_560_);
v_res_563_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1(v_await_boxed_561_, v_extra_boxed_562_);
v_r_564_ = lean_box_uint64(v_res_563_);
return v_r_564_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_565_; uint8_t v___x_566_; uint64_t v___x_567_; 
v___x_565_ = 0ULL;
v___x_566_ = 0;
v___x_567_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1(v___x_566_, v___x_565_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(lean_object* v_f_568_, lean_object* v_args_569_, lean_object* v_this_570_){
_start:
{
lean_object* v___x_572_; lean_object* v___x_573_; uint64_t v___x_574_; lean_object* v___x_575_; 
v___x_572_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_573_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_573_, 0, v_f_568_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___x_574_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0);
v___x_575_ = l_Lasm_JS_Value_invokeRaw(v___x_573_, v_this_570_, v_args_569_, v___x_574_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v___x_575_, 1);
v___x_577_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_578_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2(v___x_577_, v_a_576_);
lean_dec(v_a_576_);
return v___x_578_;
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_586_; 
v_a_579_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_586_ == 0)
{
v___x_581_ = v___x_575_;
v_isShared_582_ = v_isSharedCheck_586_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v___x_575_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___boxed(lean_object* v_f_587_, lean_object* v_args_588_, lean_object* v_this_589_, lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_f_587_, v_args_588_, v_this_589_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(lean_object* v_module_592_, lean_object* v_path_593_, lean_object* v_self_594_, lean_object* v_args_595_){
_start:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_597_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_598_ = lean_unsigned_to_nat(0u);
v___x_599_ = lean_box(0);
v___x_600_ = l_String_splitOnAux(v_path_593_, v___x_597_, v___x_598_, v___x_598_, v___x_598_, v___x_599_);
v___x_601_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_592_, v___x_600_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_603_; lean_object* v___x_604_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_603_, 0, v_self_594_);
v___x_604_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_a_602_, v_args_595_, v___x_603_);
return v___x_604_;
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec_ref(v_args_595_);
lean_dec_ref(v_self_594_);
v_a_605_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_601_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_601_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0___boxed(lean_object* v_module_613_, lean_object* v_path_614_, lean_object* v_self_615_, lean_object* v_args_616_, lean_object* v_a_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v_module_613_, v_path_614_, v_self_615_, v_args_616_);
lean_dec_ref(v_path_614_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals(lean_object* v_self_620_, lean_object* v_otherBuffer_621_){
_start:
{
lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_623_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_624_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_equals___closed__0));
v___x_625_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_625_, 0, v_otherBuffer_621_);
v___x_626_ = lean_unsigned_to_nat(1u);
v___x_627_ = lean_mk_empty_array_with_capacity(v___x_626_);
v___x_628_ = lean_array_push(v___x_627_, v___x_625_);
v___x_629_ = l_Lasm_JS_Web_Support_args(v___x_628_);
v___x_630_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v___x_623_, v___x_624_, v_self_620_, v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals___boxed(lean_object* v_self_631_, lean_object* v_otherBuffer_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lasm_JS_Node_Buffer_equals(v_self_631_, v_otherBuffer_632_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object* v_x_635_){
_start:
{
if (lean_obj_tag(v_x_635_) == 0)
{
lean_object* v___x_636_; 
v___x_636_ = lean_box(0);
return v___x_636_;
}
else
{
lean_object* v_val_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
v_val_637_ = lean_ctor_get(v_x_635_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v_x_635_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v_x_635_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_val_637_);
lean_dec(v_x_635_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
lean_ctor_set_tag(v___x_639_, 4);
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_val_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(lean_object* v_context_646_, lean_object* v_d_647_){
_start:
{
lean_object* v___y_650_; lean_object* v___y_651_; 
if (lean_obj_tag(v_d_647_) == 4)
{
lean_object* v_s_655_; lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
v_s_655_ = lean_ctor_get(v_d_647_, 0);
v_isSharedCheck_662_ = !lean_is_exclusive(v_d_647_);
if (v_isSharedCheck_662_ == 0)
{
v___x_657_ = v_d_647_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_inc(v_s_655_);
lean_dec(v_d_647_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set_tag(v___x_657_, 0);
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_s_655_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v___x_663_; lean_object* v_received_665_; 
v___x_663_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
if (lean_obj_tag(v_d_647_) == 9)
{
lean_object* v_value_679_; lean_object* v_description_680_; uint8_t v___x_681_; 
v_value_679_ = lean_ctor_get(v_d_647_, 0);
v_description_680_ = lean_ctor_get(v_d_647_, 1);
v___x_681_ = lean_string_dec_eq(v_description_680_, v___x_663_);
if (v___x_681_ == 0)
{
goto v___jp_677_;
}
else
{
uint32_t v___x_682_; uint64_t v___x_683_; lean_object* v___x_684_; uint32_t v___x_685_; lean_object* v___x_686_; 
lean_inc_n(v_value_679_, 2);
lean_dec_ref_known(v_d_647_, 2);
v___x_682_ = 206;
v___x_683_ = 0ULL;
v___x_684_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_684_, 0, v_value_679_);
lean_ctor_set(v___x_684_, 1, v___x_663_);
v___x_685_ = lasm_js_value_handle(v_value_679_);
lean_dec(v_value_679_);
v___x_686_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_682_, v___x_683_, v___x_684_, v___x_685_);
lean_dec_ref_known(v___x_684_, 2);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; uint8_t v___x_688_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = lean_string_validate_utf8(v_a_687_);
if (v___x_688_ == 0)
{
lean_object* v___x_689_; lean_object* v___x_690_; 
lean_dec(v_a_687_);
v___x_689_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9);
v___x_690_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_689_);
v_received_665_ = v___x_690_;
goto v___jp_664_;
}
else
{
lean_object* v___x_691_; 
v___x_691_ = lean_string_from_utf8_unchecked(v_a_687_);
v_received_665_ = v___x_691_;
goto v___jp_664_;
}
}
else
{
lean_object* v___x_692_; 
lean_dec_ref_known(v___x_686_, 1);
v___x_692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10));
v_received_665_ = v___x_692_;
goto v___jp_664_;
}
}
}
else
{
goto v___jp_677_;
}
v___jp_664_:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; uint8_t v___x_675_; 
v___x_666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_667_ = lean_string_append(v___x_666_, v_context_646_);
v___x_668_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1));
v___x_669_ = lean_string_append(v___x_667_, v___x_668_);
v___x_670_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__0));
v___x_671_ = lean_string_append(v___x_669_, v___x_670_);
v___x_672_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3));
v___x_673_ = lean_string_append(v___x_671_, v___x_672_);
v___x_674_ = lean_string_append(v___x_673_, v_received_665_);
lean_dec_ref(v_received_665_);
v___x_675_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__2);
if (v___x_675_ == 0)
{
lean_object* v___x_676_; 
v___x_676_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__3));
v___y_650_ = v___x_674_;
v___y_651_ = v___x_676_;
goto v___jp_649_;
}
else
{
v___y_650_ = v___x_674_;
v___y_651_ = v___x_663_;
goto v___jp_649_;
}
}
v___jp_677_:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lasm_JS_Data_describe(v_d_647_);
v_received_665_ = v___x_678_;
goto v___jp_664_;
}
}
v___jp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v___x_652_ = lean_string_append(v___y_650_, v___y_651_);
v___x_653_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_653_, 0, v___x_652_);
v___x_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___boxed(lean_object* v_context_693_, lean_object* v_d_694_, lean_object* v_a_695_){
_start:
{
lean_object* v_res_696_; 
v_res_696_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(v_context_693_, v_d_694_);
lean_dec_ref(v_context_693_);
return v_res_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(lean_object* v_context_697_, lean_object* v_bytes_698_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_698_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_702_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref_known(v___x_700_, 1);
v___x_702_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(v_context_697_, v_a_701_);
return v___x_702_;
}
else
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
v_a_703_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_710_ == 0)
{
v___x_705_ = v___x_700_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_700_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3___boxed(lean_object* v_context_711_, lean_object* v_bytes_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(v_context_711_, v_bytes_712_);
lean_dec_ref(v_bytes_712_);
lean_dec_ref(v_context_711_);
return v_res_714_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(uint8_t v_await_715_, uint64_t v_extra_716_){
_start:
{
uint64_t v___x_717_; uint64_t v___y_719_; 
v___x_717_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_715_ == 0)
{
uint64_t v___x_722_; 
v___x_722_ = 0ULL;
v___y_719_ = v___x_722_;
goto v___jp_718_;
}
else
{
uint64_t v___x_723_; 
v___x_723_ = 2ULL;
v___y_719_ = v___x_723_;
goto v___jp_718_;
}
v___jp_718_:
{
uint64_t v___x_720_; uint64_t v___x_721_; 
v___x_720_ = lean_uint64_lor(v___x_717_, v___y_719_);
v___x_721_ = lean_uint64_lor(v___x_720_, v_extra_716_);
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2___boxed(lean_object* v_await_724_, lean_object* v_extra_725_){
_start:
{
uint8_t v_await_boxed_726_; uint64_t v_extra_boxed_727_; uint64_t v_res_728_; lean_object* v_r_729_; 
v_await_boxed_726_ = lean_unbox(v_await_724_);
v_extra_boxed_727_ = lean_unbox_uint64(v_extra_725_);
lean_dec_ref(v_extra_725_);
v_res_728_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(v_await_boxed_726_, v_extra_boxed_727_);
v_r_729_ = lean_box_uint64(v_res_728_);
return v_r_729_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0(void){
_start:
{
uint64_t v___x_730_; uint8_t v___x_731_; uint64_t v___x_732_; 
v___x_730_ = 0ULL;
v___x_731_ = 0;
v___x_732_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(v___x_731_, v___x_730_);
return v___x_732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(lean_object* v_f_733_, lean_object* v_args_734_, lean_object* v_this_735_){
_start:
{
lean_object* v___x_737_; lean_object* v___x_738_; uint64_t v___x_739_; lean_object* v___x_740_; 
v___x_737_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_738_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_738_, 0, v_f_733_);
lean_ctor_set(v___x_738_, 1, v___x_737_);
v___x_739_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0);
v___x_740_ = l_Lasm_JS_Value_invokeRaw(v___x_738_, v_this_735_, v_args_734_, v___x_739_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v___x_742_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_743_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(v___x_742_, v_a_741_);
lean_dec(v_a_741_);
return v___x_743_;
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
v_a_744_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_740_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_740_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___boxed(lean_object* v_f_752_, lean_object* v_args_753_, lean_object* v_this_754_, lean_object* v_a_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(v_f_752_, v_args_753_, v_this_754_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(lean_object* v_module_757_, lean_object* v_path_758_, lean_object* v_self_759_, lean_object* v_args_760_){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_762_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_763_ = lean_unsigned_to_nat(0u);
v___x_764_ = lean_box(0);
v___x_765_ = l_String_splitOnAux(v_path_758_, v___x_762_, v___x_763_, v___x_763_, v___x_763_, v___x_764_);
v___x_766_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_757_, v___x_765_);
if (lean_obj_tag(v___x_766_) == 0)
{
lean_object* v_a_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v_a_767_ = lean_ctor_get(v___x_766_, 0);
lean_inc(v_a_767_);
lean_dec_ref_known(v___x_766_, 1);
v___x_768_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_768_, 0, v_self_759_);
v___x_769_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(v_a_767_, v_args_760_, v___x_768_);
return v___x_769_;
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_777_; 
lean_dec_ref(v_args_760_);
lean_dec_ref(v_self_759_);
v_a_770_ = lean_ctor_get(v___x_766_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_766_);
if (v_isSharedCheck_777_ == 0)
{
v___x_772_ = v___x_766_;
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_766_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_777_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_775_; 
if (v_isShared_773_ == 0)
{
v___x_775_ = v___x_772_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_a_770_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1___boxed(lean_object* v_module_778_, lean_object* v_path_779_, lean_object* v_self_780_, lean_object* v_args_781_, lean_object* v_a_782_){
_start:
{
lean_object* v_res_783_; 
v_res_783_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(v_module_778_, v_path_779_, v_self_780_, v_args_781_);
lean_dec_ref(v_path_779_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString(lean_object* v_self_785_, lean_object* v_encoding_786_, lean_object* v_start_787_, lean_object* v_end_788_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_790_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_791_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_toString___closed__0));
v___x_792_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_786_);
v___x_793_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_start_787_);
v___x_794_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_end_788_);
v___x_795_ = lean_unsigned_to_nat(3u);
v___x_796_ = lean_mk_empty_array_with_capacity(v___x_795_);
v___x_797_ = lean_array_push(v___x_796_, v___x_792_);
v___x_798_ = lean_array_push(v___x_797_, v___x_793_);
v___x_799_ = lean_array_push(v___x_798_, v___x_794_);
v___x_800_ = l_Lasm_JS_Web_Support_args(v___x_799_);
v___x_801_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(v___x_790_, v___x_791_, v_self_785_, v___x_800_);
return v___x_801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString___boxed(lean_object* v_self_802_, lean_object* v_encoding_803_, lean_object* v_start_804_, lean_object* v_end_805_, lean_object* v_a_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lasm_JS_Node_Buffer_toString(v_self_802_, v_encoding_803_, v_start_804_, v_end_805_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(lean_object* v_x_808_){
_start:
{
if (lean_obj_tag(v_x_808_) == 0)
{
lean_object* v___x_809_; 
v___x_809_ = lean_box(0);
return v___x_809_;
}
else
{
lean_object* v_val_810_; 
v_val_810_ = lean_ctor_get(v_x_808_, 0);
lean_inc(v_val_810_);
lean_dec_ref_known(v_x_808_, 1);
switch(lean_obj_tag(v_val_810_))
{
case 0:
{
lean_object* v_value_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
v_value_811_ = lean_ctor_get(v_val_810_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v_val_810_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v_val_810_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_value_811_);
lean_dec(v_val_810_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
lean_ctor_set_tag(v___x_813_, 4);
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_value_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
case 1:
{
lean_object* v_value_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
v_value_819_ = lean_ctor_get(v_val_810_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v_val_810_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v_val_810_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_value_819_);
lean_dec(v_val_810_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set_tag(v___x_821_, 6);
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_value_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
default: 
{
lean_object* v_value_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_839_; 
v_value_827_ = lean_ctor_get(v_val_810_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v_val_810_);
if (v_isSharedCheck_839_ == 0)
{
v___x_829_ = v_val_810_;
v_isShared_830_ = v_isSharedCheck_839_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_value_827_);
lean_dec(v_val_810_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_839_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_831_ = lean_nat_abs(v_value_827_);
v___x_832_ = lean_cstr_to_nat("9007199254740991");
v___x_833_ = lean_nat_dec_le(v___x_831_, v___x_832_);
lean_dec(v___x_831_);
if (v___x_833_ == 0)
{
lean_object* v___x_835_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set_tag(v___x_829_, 5);
v___x_835_ = v___x_829_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_value_827_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
else
{
double v___x_837_; lean_object* v___x_838_; 
lean_del_object(v___x_829_);
v___x_837_ = l_Float_ofInt(v_value_827_);
lean_dec(v_value_827_);
v___x_838_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_838_, 0, v___x_837_);
return v___x_838_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc(lean_object* v_size_848_, lean_object* v_fill_849_, lean_object* v_encoding_850_){
_start:
{
uint8_t v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___y_856_; lean_object* v___x_865_; lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_852_ = 0;
v___x_853_ = lean_unsigned_to_nat(3u);
v___x_854_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_alloc___closed__2));
v___x_865_ = lean_nat_abs(v_size_848_);
v___x_866_ = lean_cstr_to_nat("9007199254740991");
v___x_867_ = lean_nat_dec_le(v___x_865_, v___x_866_);
lean_dec(v___x_865_);
if (v___x_867_ == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_868_, 0, v_size_848_);
v___y_856_ = v___x_868_;
goto v___jp_855_;
}
else
{
double v___x_869_; lean_object* v___x_870_; 
v___x_869_ = l_Float_ofInt(v_size_848_);
lean_dec(v_size_848_);
v___x_870_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_870_, 0, v___x_869_);
v___y_856_ = v___x_870_;
goto v___jp_855_;
}
v___jp_855_:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_857_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(v_fill_849_);
v___x_858_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_850_);
v___x_859_ = lean_mk_empty_array_with_capacity(v___x_853_);
v___x_860_ = lean_array_push(v___x_859_, v___y_856_);
v___x_861_ = lean_array_push(v___x_860_, v___x_857_);
v___x_862_ = lean_array_push(v___x_861_, v___x_858_);
v___x_863_ = l_Lasm_JS_Web_Support_args(v___x_862_);
v___x_864_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_854_, v___x_863_, v___x_852_);
return v___x_864_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc___boxed(lean_object* v_size_871_, lean_object* v_fill_872_, lean_object* v_encoding_873_, lean_object* v_a_874_){
_start:
{
lean_object* v_res_875_; 
v_res_875_ = l_Lasm_JS_Node_Buffer_alloc(v_size_871_, v_fill_872_, v_encoding_873_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(lean_object* v_b_877_, lean_object* v_args_878_, uint8_t v_await_879_){
_start:
{
uint64_t v___y_882_; uint64_t v___y_883_; uint64_t v___x_926_; uint64_t v___y_928_; 
v___x_926_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_879_ == 0)
{
uint64_t v___x_933_; 
v___x_933_ = 0ULL;
v___y_928_ = v___x_933_;
goto v___jp_927_;
}
else
{
uint64_t v___x_934_; 
v___x_934_ = 2ULL;
v___y_928_ = v___x_934_;
goto v___jp_927_;
}
v___jp_881_:
{
uint64_t v_flags_884_; uint32_t v___x_885_; lean_object* v___x_886_; uint32_t v___x_887_; lean_object* v___x_888_; 
v_flags_884_ = lean_uint64_lor(v___y_882_, v___y_883_);
v___x_885_ = 214;
v___x_886_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_877_, v_args_878_);
v___x_887_ = 0;
v___x_888_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_885_, v_flags_884_, v___x_886_, v___x_887_);
lean_dec(v___x_886_);
if (lean_obj_tag(v___x_888_) == 0)
{
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_888_, 1);
v___x_890_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_889_);
lean_dec(v_a_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v___x_890_, 1);
v___x_892_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_877_);
v___x_893_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(v___x_892_, v_a_891_);
lean_dec_ref(v___x_892_);
return v___x_893_;
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
v_a_894_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_890_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_890_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
v_a_902_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_888_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_888_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 1);
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
else
{
lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_925_; 
v_a_910_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_925_ == 0)
{
v___x_912_ = v___x_888_;
v_isShared_913_ = v_isSharedCheck_925_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_dec(v___x_888_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_925_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_914_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_915_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_877_);
v___x_916_ = lean_string_append(v___x_914_, v___x_915_);
lean_dec_ref(v___x_915_);
v___x_917_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_918_ = lean_string_append(v___x_916_, v___x_917_);
v___x_919_ = lean_io_error_to_string(v_a_910_);
v___x_920_ = lean_string_append(v___x_918_, v___x_919_);
lean_dec_ref(v___x_919_);
v___x_921_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v___x_921_);
v___x_923_ = v___x_912_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
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
v___jp_927_:
{
uint8_t v_construct_929_; uint64_t v___x_930_; 
v_construct_929_ = lean_ctor_get_uint8(v_b_877_, sizeof(void*)*4);
v___x_930_ = lean_uint64_lor(v___x_926_, v___y_928_);
if (v_construct_929_ == 0)
{
uint64_t v___x_931_; 
v___x_931_ = 0ULL;
v___y_882_ = v___x_930_;
v___y_883_ = v___x_931_;
goto v___jp_881_;
}
else
{
uint64_t v___x_932_; 
v___x_932_ = 4ULL;
v___y_882_ = v___x_930_;
v___y_883_ = v___x_932_;
goto v___jp_881_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___boxed(lean_object* v_b_935_, lean_object* v_args_936_, lean_object* v_await_937_, lean_object* v_a_938_){
_start:
{
uint8_t v_await_boxed_939_; lean_object* v_res_940_; 
v_await_boxed_939_ = lean_unbox(v_await_937_);
v_res_940_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v_b_935_, v_args_936_, v_await_boxed_939_);
lean_dec_ref(v_b_935_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength(lean_object* v_string_949_, lean_object* v_encoding_950_){
_start:
{
uint8_t v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___y_956_; 
v___x_952_ = 0;
v___x_953_ = lean_unsigned_to_nat(2u);
v___x_954_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_byteLength___closed__2));
if (lean_obj_tag(v_string_949_) == 0)
{
lean_object* v_value_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_970_; 
v_value_963_ = lean_ctor_get(v_string_949_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v_string_949_);
if (v_isSharedCheck_970_ == 0)
{
v___x_965_ = v_string_949_;
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_value_963_);
lean_dec(v_string_949_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_970_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
lean_ctor_set_tag(v___x_965_, 4);
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_value_963_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
v___y_956_ = v___x_968_;
goto v___jp_955_;
}
}
}
else
{
lean_object* v_value_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_value_971_ = lean_ctor_get(v_string_949_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v_string_949_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v_string_949_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_value_971_);
lean_dec(v_string_949_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
lean_ctor_set_tag(v___x_973_, 6);
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_value_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
v___y_956_ = v___x_976_;
goto v___jp_955_;
}
}
}
v___jp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_957_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_950_);
v___x_958_ = lean_mk_empty_array_with_capacity(v___x_953_);
v___x_959_ = lean_array_push(v___x_958_, v___y_956_);
v___x_960_ = lean_array_push(v___x_959_, v___x_957_);
v___x_961_ = l_Lasm_JS_Web_Support_args(v___x_960_);
v___x_962_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_954_, v___x_961_, v___x_952_);
return v___x_962_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength___boxed(lean_object* v_string_979_, lean_object* v_encoding_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_JS_Node_Buffer_byteLength(v_string_979_, v_encoding_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare(lean_object* v_buf1_991_, lean_object* v_buf2_992_){
_start:
{
uint8_t v___x_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_994_ = 0;
v___x_995_ = lean_unsigned_to_nat(2u);
v___x_996_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_staticCompare___closed__2));
v___x_997_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_997_, 0, v_buf1_991_);
v___x_998_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_998_, 0, v_buf2_992_);
v___x_999_ = lean_mk_empty_array_with_capacity(v___x_995_);
v___x_1000_ = lean_array_push(v___x_999_, v___x_997_);
v___x_1001_ = lean_array_push(v___x_1000_, v___x_998_);
v___x_1002_ = l_Lasm_JS_Web_Support_args(v___x_1001_);
v___x_1003_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_996_, v___x_1002_, v___x_994_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare___boxed(lean_object* v_buf1_1004_, lean_object* v_buf2_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Lasm_JS_Node_Buffer_staticCompare(v_buf1_1004_, v_buf2_1005_);
return v_res_1007_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(size_t v_sz_1008_, size_t v_i_1009_, lean_object* v_bs_1010_){
_start:
{
uint8_t v___x_1011_; 
v___x_1011_ = lean_usize_dec_lt(v_i_1009_, v_sz_1008_);
if (v___x_1011_ == 0)
{
return v_bs_1010_;
}
else
{
lean_object* v_v_1012_; lean_object* v___x_1013_; lean_object* v_bs_x27_1014_; lean_object* v___x_1015_; size_t v___x_1016_; size_t v___x_1017_; lean_object* v___x_1018_; 
v_v_1012_ = lean_array_uget(v_bs_1010_, v_i_1009_);
v___x_1013_ = lean_unsigned_to_nat(0u);
v_bs_x27_1014_ = lean_array_uset(v_bs_1010_, v_i_1009_, v___x_1013_);
v___x_1015_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1015_, 0, v_v_1012_);
v___x_1016_ = ((size_t)1ULL);
v___x_1017_ = lean_usize_add(v_i_1009_, v___x_1016_);
v___x_1018_ = lean_array_uset(v_bs_x27_1014_, v_i_1009_, v___x_1015_);
v_i_1009_ = v___x_1017_;
v_bs_1010_ = v___x_1018_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0___boxed(lean_object* v_sz_1020_, lean_object* v_i_1021_, lean_object* v_bs_1022_){
_start:
{
size_t v_sz_boxed_1023_; size_t v_i_boxed_1024_; lean_object* v_res_1025_; 
v_sz_boxed_1023_ = lean_unbox_usize(v_sz_1020_);
lean_dec(v_sz_1020_);
v_i_boxed_1024_ = lean_unbox_usize(v_i_1021_);
lean_dec(v_i_1021_);
v_res_1025_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_boxed_1023_, v_i_boxed_1024_, v_bs_1022_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat(lean_object* v_list_1034_, lean_object* v_totalLength_1035_){
_start:
{
uint8_t v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; size_t v_sz_1040_; size_t v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1037_ = 0;
v___x_1038_ = lean_unsigned_to_nat(2u);
v___x_1039_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_concat___closed__2));
v_sz_1040_ = lean_array_size(v_list_1034_);
v___x_1041_ = ((size_t)0ULL);
v___x_1042_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_1040_, v___x_1041_, v_list_1034_);
v___x_1043_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
v___x_1044_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_totalLength_1035_);
v___x_1045_ = lean_mk_empty_array_with_capacity(v___x_1038_);
v___x_1046_ = lean_array_push(v___x_1045_, v___x_1043_);
v___x_1047_ = lean_array_push(v___x_1046_, v___x_1044_);
v___x_1048_ = l_Lasm_JS_Web_Support_args(v___x_1047_);
v___x_1049_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1039_, v___x_1048_, v___x_1037_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat___boxed(lean_object* v_list_1050_, lean_object* v_totalLength_1051_, lean_object* v_a_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lasm_JS_Node_Buffer_concat(v_list_1050_, v_totalLength_1051_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from(lean_object* v_string_1062_, lean_object* v_encoding_1063_){
_start:
{
uint8_t v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1065_ = 0;
v___x_1066_ = lean_unsigned_to_nat(2u);
v___x_1067_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_from___closed__2));
v___x_1068_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_string_1062_);
v___x_1069_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_1063_);
v___x_1070_ = lean_mk_empty_array_with_capacity(v___x_1066_);
v___x_1071_ = lean_array_push(v___x_1070_, v___x_1068_);
v___x_1072_ = lean_array_push(v___x_1071_, v___x_1069_);
v___x_1073_ = l_Lasm_JS_Web_Support_args(v___x_1072_);
v___x_1074_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1067_, v___x_1073_, v___x_1065_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from___boxed(lean_object* v_string_1075_, lean_object* v_encoding_1076_, lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lasm_JS_Node_Buffer_from(v_string_1075_, v_encoding_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(lean_object* v_b_1079_, lean_object* v_args_1080_, uint8_t v_await_1081_){
_start:
{
uint64_t v___y_1084_; uint64_t v___y_1085_; uint64_t v___x_1128_; uint64_t v___y_1130_; 
v___x_1128_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_1081_ == 0)
{
uint64_t v___x_1135_; 
v___x_1135_ = 0ULL;
v___y_1130_ = v___x_1135_;
goto v___jp_1129_;
}
else
{
uint64_t v___x_1136_; 
v___x_1136_ = 2ULL;
v___y_1130_ = v___x_1136_;
goto v___jp_1129_;
}
v___jp_1083_:
{
uint64_t v_flags_1086_; uint32_t v___x_1087_; lean_object* v___x_1088_; uint32_t v___x_1089_; lean_object* v___x_1090_; 
v_flags_1086_ = lean_uint64_lor(v___y_1084_, v___y_1085_);
v___x_1087_ = 214;
v___x_1088_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1079_, v_args_1080_);
v___x_1089_ = 0;
v___x_1090_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1087_, v_flags_1086_, v___x_1088_, v___x_1089_);
lean_dec(v___x_1088_);
if (lean_obj_tag(v___x_1090_) == 0)
{
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1091_);
lean_dec(v_a_1091_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1079_);
v___x_1095_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(v___x_1094_, v_a_1093_);
lean_dec_ref(v___x_1094_);
return v___x_1095_;
}
else
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1103_; 
v_a_1096_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1103_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1103_ == 0)
{
v___x_1098_ = v___x_1092_;
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1092_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1103_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v___x_1101_; 
if (v_isShared_1099_ == 0)
{
v___x_1101_ = v___x_1098_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_a_1096_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
return v___x_1101_;
}
}
}
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
v_a_1104_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1090_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1090_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 1);
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1127_; 
v_a_1112_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1114_ = v___x_1090_;
v_isShared_1115_ = v_isSharedCheck_1127_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1090_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1127_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1116_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_1117_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1079_);
v___x_1118_ = lean_string_append(v___x_1116_, v___x_1117_);
lean_dec_ref(v___x_1117_);
v___x_1119_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_1120_ = lean_string_append(v___x_1118_, v___x_1119_);
v___x_1121_ = lean_io_error_to_string(v_a_1112_);
v___x_1122_ = lean_string_append(v___x_1120_, v___x_1121_);
lean_dec_ref(v___x_1121_);
v___x_1123_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1123_, 0, v___x_1122_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v___x_1123_);
v___x_1125_ = v___x_1114_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1123_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
v___jp_1129_:
{
uint8_t v_construct_1131_; uint64_t v___x_1132_; 
v_construct_1131_ = lean_ctor_get_uint8(v_b_1079_, sizeof(void*)*4);
v___x_1132_ = lean_uint64_lor(v___x_1128_, v___y_1130_);
if (v_construct_1131_ == 0)
{
uint64_t v___x_1133_; 
v___x_1133_ = 0ULL;
v___y_1084_ = v___x_1132_;
v___y_1085_ = v___x_1133_;
goto v___jp_1083_;
}
else
{
uint64_t v___x_1134_; 
v___x_1134_ = 4ULL;
v___y_1084_ = v___x_1132_;
v___y_1085_ = v___x_1134_;
goto v___jp_1083_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0___boxed(lean_object* v_b_1137_, lean_object* v_args_1138_, lean_object* v_await_1139_, lean_object* v_a_1140_){
_start:
{
uint8_t v_await_boxed_1141_; lean_object* v_res_1142_; 
v_await_boxed_1141_ = lean_unbox(v_await_1139_);
v_res_1142_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v_b_1137_, v_args_1138_, v_await_boxed_1141_);
lean_dec_ref(v_b_1137_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding(lean_object* v_encoding_1151_){
_start:
{
uint8_t v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1153_ = 0;
v___x_1154_ = lean_unsigned_to_nat(1u);
v___x_1155_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_isEncoding___closed__2));
v___x_1156_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1156_, 0, v_encoding_1151_);
v___x_1157_ = lean_mk_empty_array_with_capacity(v___x_1154_);
v___x_1158_ = lean_array_push(v___x_1157_, v___x_1156_);
v___x_1159_ = l_Lasm_JS_Web_Support_args(v___x_1158_);
v___x_1160_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1155_, v___x_1159_, v___x_1153_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding___boxed(lean_object* v_encoding_1161_, lean_object* v_a_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lasm_JS_Node_Buffer_isEncoding(v_encoding_1161_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(lean_object* v_o_1165_, lean_object* v_key_1166_){
_start:
{
lean_object* v_k_1168_; lean_object* v___x_1169_; 
v_k_1168_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1168_, 0, v_key_1166_);
v___x_1169_ = l_Lasm_JS_Wire_encodeIO(v_k_1168_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; uint32_t v___x_1171_; uint32_t v___x_1172_; uint64_t v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1169_, 1);
v___x_1171_ = 203;
v___x_1172_ = lasm_js_value_handle(v_o_1165_);
v___x_1173_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
v___x_1174_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_1175_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_o_1165_);
lean_ctor_set(v___x_1175_, 1, v___x_1174_);
v___x_1176_ = lean_unsigned_to_nat(2u);
v___x_1177_ = lean_mk_empty_array_with_capacity(v___x_1176_);
lean_inc_ref(v_k_1168_);
v___x_1178_ = lean_array_push(v___x_1177_, v_k_1168_);
v___x_1179_ = lean_array_push(v___x_1178_, v___x_1175_);
v___x_1180_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1179_);
v___x_1181_ = lasm_js_call(v___x_1171_, v___x_1172_, v___x_1173_, v_a_1170_, v___x_1180_);
lean_dec_ref_known(v___x_1180_, 1);
lean_dec(v_a_1170_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1181_, 1);
v___x_1183_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___closed__0));
v___x_1184_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1168_);
v___x_1185_ = lean_string_append(v___x_1183_, v___x_1184_);
lean_dec_ref(v___x_1184_);
v___x_1186_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(v___x_1185_, v_a_1182_);
lean_dec(v_a_1182_);
lean_dec_ref(v___x_1185_);
return v___x_1186_;
}
else
{
lean_object* v_a_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1194_; 
lean_dec_ref_known(v_k_1168_, 1);
v_a_1187_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1194_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1194_ == 0)
{
v___x_1189_ = v___x_1181_;
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_a_1187_);
lean_dec(v___x_1181_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1194_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v___x_1192_; 
if (v_isShared_1190_ == 0)
{
v___x_1192_ = v___x_1189_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1193_; 
v_reuseFailAlloc_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1193_, 0, v_a_1187_);
v___x_1192_ = v_reuseFailAlloc_1193_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
return v___x_1192_;
}
}
}
}
else
{
lean_object* v_a_1195_; lean_object* v___x_1197_; uint8_t v_isShared_1198_; uint8_t v_isSharedCheck_1202_; 
lean_dec_ref_known(v_k_1168_, 1);
lean_dec(v_o_1165_);
v_a_1195_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1197_ = v___x_1169_;
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
else
{
lean_inc(v_a_1195_);
lean_dec(v___x_1169_);
v___x_1197_ = lean_box(0);
v_isShared_1198_ = v_isSharedCheck_1202_;
goto v_resetjp_1196_;
}
v_resetjp_1196_:
{
lean_object* v___x_1200_; 
if (v_isShared_1198_ == 0)
{
v___x_1200_ = v___x_1197_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1195_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1203_, lean_object* v_key_1204_, lean_object* v_a_1205_){
_start:
{
lean_object* v_res_1206_; 
v_res_1206_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(v_o_1203_, v_key_1204_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(lean_object* v_module_1207_, lean_object* v_o_1208_, lean_object* v_a_1209_){
_start:
{
if (lean_obj_tag(v_a_1209_) == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; 
lean_dec(v_o_1208_);
v___x_1211_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0));
v___x_1212_ = lean_string_append(v___x_1211_, v_module_1207_);
v___x_1213_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
v___x_1214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1213_);
return v___x_1214_;
}
else
{
lean_object* v_tail_1215_; 
v_tail_1215_ = lean_ctor_get(v_a_1209_, 1);
if (lean_obj_tag(v_tail_1215_) == 0)
{
lean_object* v_head_1216_; lean_object* v___x_1217_; 
v_head_1216_ = lean_ctor_get(v_a_1209_, 0);
lean_inc(v_head_1216_);
lean_dec_ref_known(v_a_1209_, 2);
v___x_1217_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(v_o_1208_, v_head_1216_);
return v___x_1217_;
}
else
{
lean_object* v_head_1218_; lean_object* v___x_1219_; 
lean_inc(v_tail_1215_);
v_head_1218_ = lean_ctor_get(v_a_1209_, 0);
lean_inc(v_head_1218_);
lean_dec_ref_known(v_a_1209_, 2);
v___x_1219_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1208_, v_head_1218_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_object* v_a_1220_; 
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc(v_a_1220_);
lean_dec_ref_known(v___x_1219_, 1);
v_o_1208_ = v_a_1220_;
v_a_1209_ = v_tail_1215_;
goto _start;
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
lean_dec(v_tail_1215_);
v_a_1222_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1219_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1219_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0___boxed(lean_object* v_module_1230_, lean_object* v_o_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(v_module_1230_, v_o_1231_, v_a_1232_);
lean_dec_ref(v_module_1230_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(lean_object* v_module_1235_, lean_object* v_path_1236_){
_start:
{
lean_object* v___x_1238_; 
lean_inc_ref(v_module_1235_);
v___x_1238_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(v_module_1235_);
if (lean_obj_tag(v___x_1238_) == 0)
{
lean_object* v_a_1239_; lean_object* v___x_1240_; 
v_a_1239_ = lean_ctor_get(v___x_1238_, 0);
lean_inc(v_a_1239_);
lean_dec_ref_known(v___x_1238_, 1);
v___x_1240_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(v_module_1235_, v_a_1239_, v_path_1236_);
lean_dec_ref(v_module_1235_);
return v___x_1240_;
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_dec(v_path_1236_);
lean_dec_ref(v_module_1235_);
v_a_1241_ = lean_ctor_get(v___x_1238_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1238_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1238_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1238_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1246_; 
if (v_isShared_1244_ == 0)
{
v___x_1246_ = v___x_1243_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_a_1241_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0___boxed(lean_object* v_module_1249_, lean_object* v_path_1250_, lean_object* v_a_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v_module_1249_, v_path_1250_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength(){
_start:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_1259_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kMaxLength___closed__1));
v___x_1260_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v___x_1258_, v___x_1259_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength___boxed(lean_object* v_a_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lasm_JS_Node_buffer_kMaxLength();
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength(){
_start:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1268_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_1269_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1));
v___x_1270_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v___x_1268_, v___x_1269_);
return v___x_1270_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___boxed(lean_object* v_a_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lasm_JS_Node_buffer_kStringMaxLength();
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii(lean_object* v_input_1281_){
_start:
{
uint8_t v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1283_ = 0;
v___x_1284_ = lean_unsigned_to_nat(1u);
v___x_1285_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isAscii___closed__2));
v___x_1286_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1286_, 0, v_input_1281_);
v___x_1287_ = lean_mk_empty_array_with_capacity(v___x_1284_);
v___x_1288_ = lean_array_push(v___x_1287_, v___x_1286_);
v___x_1289_ = l_Lasm_JS_Web_Support_args(v___x_1288_);
v___x_1290_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1285_, v___x_1289_, v___x_1283_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii___boxed(lean_object* v_input_1291_, lean_object* v_a_1292_){
_start:
{
lean_object* v_res_1293_; 
v_res_1293_ = l_Lasm_JS_Node_buffer_isAscii(v_input_1291_);
return v_res_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8(lean_object* v_input_1302_){
_start:
{
uint8_t v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1304_ = 0;
v___x_1305_ = lean_unsigned_to_nat(1u);
v___x_1306_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isUtf8___closed__2));
v___x_1307_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1307_, 0, v_input_1302_);
v___x_1308_ = lean_mk_empty_array_with_capacity(v___x_1305_);
v___x_1309_ = lean_array_push(v___x_1308_, v___x_1307_);
v___x_1310_ = l_Lasm_JS_Web_Support_args(v___x_1309_);
v___x_1311_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1306_, v___x_1310_, v___x_1304_);
return v___x_1311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8___boxed(lean_object* v_input_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lasm_JS_Node_buffer_isUtf8(v_input_1312_);
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode(lean_object* v_source_1323_, lean_object* v_fromEnc_1324_, lean_object* v_toEnc_1325_){
_start:
{
uint8_t v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
v___x_1327_ = 0;
v___x_1328_ = lean_unsigned_to_nat(3u);
v___x_1329_ = ((lean_object*)(l_Lasm_JS_Node_buffer_transcode___closed__2));
v___x_1330_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_source_1323_);
v___x_1331_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1331_, 0, v_fromEnc_1324_);
v___x_1332_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1332_, 0, v_toEnc_1325_);
v___x_1333_ = lean_mk_empty_array_with_capacity(v___x_1328_);
v___x_1334_ = lean_array_push(v___x_1333_, v___x_1330_);
v___x_1335_ = lean_array_push(v___x_1334_, v___x_1331_);
v___x_1336_ = lean_array_push(v___x_1335_, v___x_1332_);
v___x_1337_ = l_Lasm_JS_Web_Support_args(v___x_1336_);
v___x_1338_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1329_, v___x_1337_, v___x_1327_);
return v___x_1338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode___boxed(lean_object* v_source_1339_, lean_object* v_fromEnc_1340_, lean_object* v_toEnc_1341_, lean_object* v_a_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lasm_JS_Node_buffer_transcode(v_source_1339_, v_fromEnc_1340_, v_toEnc_1341_);
return v_res_1343_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Buffer(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
