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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 2)
{
lean_object* v_value_7_; lean_object* v___x_8_; 
v_value_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_value_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_value_7_);
return v___x_8_;
}
else
{
lean_object* v_value_9_; lean_object* v___x_10_; 
v_value_9_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_value_9_);
lean_dec_ref(v_t_5_);
v___x_10_ = lean_apply_1(v_k_6_, v_value_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim___redArg(lean_object* v_t_23_, lean_object* v_domString_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_23_, v_domString_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_domString_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_domString_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_27_, v_domString_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim___redArg(lean_object* v_t_31_, lean_object* v_uint8Array_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_31_, v_uint8Array_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_uint8Array_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_uint8Array_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_35_, v_uint8Array_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim___redArg(lean_object* v_t_39_, lean_object* v_longLong_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_39_, v_longLong_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_longLong_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_longLong_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lasm_JS_Node_DOMStringOrUint8ArrayOrLongLong_ctorElim___redArg(v_t_43_, v_longLong_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_x_47_){
_start:
{
switch(lean_obj_tag(v_x_47_))
{
case 0:
{
lean_object* v_value_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
v_value_48_ = lean_ctor_get(v_x_47_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v_x_47_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v_x_47_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_value_48_);
lean_dec(v_x_47_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
lean_ctor_set_tag(v___x_50_, 4);
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_value_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
case 1:
{
lean_object* v_value_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_63_; 
v_value_56_ = lean_ctor_get(v_x_47_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v_x_47_);
if (v_isSharedCheck_63_ == 0)
{
v___x_58_ = v_x_47_;
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_value_56_);
lean_dec(v_x_47_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_63_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set_tag(v___x_58_, 6);
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_62_; 
v_reuseFailAlloc_62_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_62_, 0, v_value_56_);
v___x_61_ = v_reuseFailAlloc_62_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
return v___x_61_;
}
}
}
default: 
{
lean_object* v_value_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_76_; 
v_value_64_ = lean_ctor_get(v_x_47_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v_x_47_);
if (v_isSharedCheck_76_ == 0)
{
v___x_66_ = v_x_47_;
v_isShared_67_ = v_isSharedCheck_76_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_value_64_);
lean_dec(v_x_47_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_76_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___x_68_; lean_object* v___x_69_; uint8_t v___x_70_; 
v___x_68_ = lean_nat_abs(v_value_64_);
v___x_69_ = lean_cstr_to_nat("9007199254740991");
v___x_70_ = lean_nat_dec_le(v___x_68_, v___x_69_);
lean_dec(v___x_68_);
if (v___x_70_ == 0)
{
lean_object* v___x_72_; 
if (v_isShared_67_ == 0)
{
lean_ctor_set_tag(v___x_66_, 5);
v___x_72_ = v___x_66_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_73_; 
v_reuseFailAlloc_73_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_73_, 0, v_value_64_);
v___x_72_ = v_reuseFailAlloc_73_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
return v___x_72_;
}
}
else
{
double v___x_74_; lean_object* v___x_75_; 
lean_del_object(v___x_66_);
v___x_74_ = l_Float_ofInt(v_value_64_);
lean_dec(v_value_64_);
v___x_75_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_80_, 0, v_value_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_83_){
_start:
{
lean_object* v___x_84_; 
v___x_84_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_84_, 0, v_value_83_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntDOMStringOrUint8ArrayOrLongLong___lam__0(lean_object* v_value_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_88_, 0, v_value_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___impl(lean_object* v_x_91_){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = lean_obj_tag_nat(v_x_91_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___impl___boxed(lean_object* v_x_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorIdx___impl(v_x_93_);
lean_dec_ref(v_x_93_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(lean_object* v_t_95_, lean_object* v_k_96_){
_start:
{
lean_object* v_value_97_; lean_object* v___x_98_; 
v_value_97_ = lean_ctor_get(v_t_95_, 0);
lean_inc_ref(v_value_97_);
lean_dec_ref(v_t_95_);
v___x_98_ = lean_apply_1(v_k_96_, v_value_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(lean_object* v_motive_99_, lean_object* v_ctorIdx_100_, lean_object* v_t_101_, lean_object* v_h_102_, lean_object* v_k_103_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_101_, v_k_103_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___boxed(lean_object* v_motive_105_, lean_object* v_ctorIdx_106_, lean_object* v_t_107_, lean_object* v_h_108_, lean_object* v_k_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim(v_motive_105_, v_ctorIdx_106_, v_t_107_, v_h_108_, v_k_109_);
lean_dec(v_ctorIdx_106_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim___redArg(lean_object* v_t_111_, lean_object* v_domString_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_111_, v_domString_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_domString_elim(lean_object* v_motive_114_, lean_object* v_t_115_, lean_object* v_h_116_, lean_object* v_domString_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_115_, v_domString_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim___redArg(lean_object* v_t_119_, lean_object* v_uint8Array_120_){
_start:
{
lean_object* v___x_121_; 
v___x_121_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_119_, v_uint8Array_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrUint8Array_uint8Array_elim(lean_object* v_motive_122_, lean_object* v_t_123_, lean_object* v_h_124_, lean_object* v_uint8Array_125_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lasm_JS_Node_DOMStringOrUint8Array_ctorElim___redArg(v_t_123_, v_uint8Array_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrUint8Array___lam__0(lean_object* v_x_127_){
_start:
{
if (lean_obj_tag(v_x_127_) == 0)
{
lean_object* v_value_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
v_value_128_ = lean_ctor_get(v_x_127_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v_x_127_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v_x_127_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_value_128_);
lean_dec(v_x_127_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
lean_ctor_set_tag(v___x_130_, 4);
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_value_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
else
{
lean_object* v_value_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
v_value_136_ = lean_ctor_get(v_x_127_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v_x_127_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v_x_127_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_value_136_);
lean_dec(v_x_127_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
lean_ctor_set_tag(v___x_138_, 6);
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_value_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrUint8Array___lam__0(lean_object* v_value_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v_value_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeByteArrayDOMStringOrUint8Array___lam__0(lean_object* v_value_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v_value_150_);
return v___x_151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0(lean_object* v_x_157_){
_start:
{
switch(lean_obj_tag(v_x_157_))
{
case 4:
{
lean_object* v_s_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_166_; 
v_s_158_ = lean_ctor_get(v_x_157_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v_x_157_);
if (v_isSharedCheck_166_ == 0)
{
v___x_160_ = v_x_157_;
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_s_158_);
lean_dec(v_x_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_166_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_163_; 
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 0);
v___x_163_ = v___x_160_;
goto v_reusejp_162_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_s_158_);
v___x_163_ = v_reuseFailAlloc_165_;
goto v_reusejp_162_;
}
v_reusejp_162_:
{
lean_object* v___x_164_; 
v___x_164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_164_, 0, v___x_163_);
return v___x_164_;
}
}
}
case 6:
{
lean_object* v_b_167_; lean_object* v___x_169_; uint8_t v_isShared_170_; uint8_t v_isSharedCheck_175_; 
v_b_167_ = lean_ctor_get(v_x_157_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v_x_157_);
if (v_isSharedCheck_175_ == 0)
{
v___x_169_ = v_x_157_;
v_isShared_170_ = v_isSharedCheck_175_;
goto v_resetjp_168_;
}
else
{
lean_inc(v_b_167_);
lean_dec(v_x_157_);
v___x_169_ = lean_box(0);
v_isShared_170_ = v_isSharedCheck_175_;
goto v_resetjp_168_;
}
v_resetjp_168_:
{
lean_object* v___x_172_; 
if (v_isShared_170_ == 0)
{
lean_ctor_set_tag(v___x_169_, 1);
v___x_172_ = v___x_169_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_b_167_);
v___x_172_ = v_reuseFailAlloc_174_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
lean_object* v___x_173_; 
v___x_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
}
default: 
{
lean_object* v___x_176_; 
lean_dec(v_x_157_);
v___x_176_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__1));
return v___x_176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
lean_object* v___x_185_; 
v___x_185_ = lean_box(0);
return v___x_185_;
}
else
{
lean_object* v_val_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_198_; 
v_val_186_ = lean_ctor_get(v_x_184_, 0);
v_isSharedCheck_198_ = !lean_is_exclusive(v_x_184_);
if (v_isSharedCheck_198_ == 0)
{
v___x_188_ = v_x_184_;
v_isShared_189_ = v_isSharedCheck_198_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_val_186_);
lean_dec(v_x_184_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_198_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; uint8_t v___x_192_; 
v___x_190_ = lean_nat_abs(v_val_186_);
v___x_191_ = lean_cstr_to_nat("9007199254740991");
v___x_192_ = lean_nat_dec_le(v___x_190_, v___x_191_);
lean_dec(v___x_190_);
if (v___x_192_ == 0)
{
lean_object* v___x_194_; 
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 5);
v___x_194_ = v___x_188_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_val_186_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
else
{
double v___x_196_; lean_object* v___x_197_; 
lean_del_object(v___x_188_);
v___x_196_ = l_Float_ofInt(v_val_186_);
lean_dec(v_val_186_);
v___x_197_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_197_, 0, v___x_196_);
return v___x_197_;
}
}
}
}
}
static uint64_t _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0(void){
_start:
{
uint8_t v___x_199_; uint64_t v___x_200_; 
v___x_199_ = 0;
v___x_200_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5(uint8_t v_await_201_, uint64_t v_extra_202_){
_start:
{
uint64_t v___x_203_; uint64_t v___y_205_; 
v___x_203_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_201_ == 0)
{
uint64_t v___x_208_; 
v___x_208_ = 0ULL;
v___y_205_ = v___x_208_;
goto v___jp_204_;
}
else
{
uint64_t v___x_209_; 
v___x_209_ = 2ULL;
v___y_205_ = v___x_209_;
goto v___jp_204_;
}
v___jp_204_:
{
uint64_t v___x_206_; uint64_t v___x_207_; 
v___x_206_ = lean_uint64_lor(v___x_203_, v___y_205_);
v___x_207_ = lean_uint64_lor(v___x_206_, v_extra_202_);
return v___x_207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___boxed(lean_object* v_await_210_, lean_object* v_extra_211_){
_start:
{
uint8_t v_await_boxed_212_; uint64_t v_extra_boxed_213_; uint64_t v_res_214_; lean_object* v_r_215_; 
v_await_boxed_212_ = lean_unbox(v_await_210_);
v_extra_boxed_213_ = lean_unbox_uint64(v_extra_211_);
lean_dec_ref(v_extra_211_);
v_res_214_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5(v_await_boxed_212_, v_extra_boxed_213_);
v_r_215_ = lean_box_uint64(v_res_214_);
return v_r_215_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9(void){
_start:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_225_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__8));
v___x_226_ = lean_unsigned_to_nat(46u);
v___x_227_ = lean_unsigned_to_nat(193u);
v___x_228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__7));
v___x_229_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__6));
v___x_230_ = l_mkPanicMessageWithDecl(v___x_229_, v___x_228_, v___x_227_, v___x_226_, v___x_225_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(lean_object* v_context_233_, lean_object* v_d_234_){
_start:
{
lean_object* v___y_237_; lean_object* v___y_238_; lean_object* v___y_243_; lean_object* v_received_244_; lean_object* v___y_263_; lean_object* v_a_266_; 
switch(lean_obj_tag(v_d_234_))
{
case 3:
{
double v_n_290_; lean_object* v___x_291_; 
v_n_290_ = lean_ctor_get_float(v_d_234_, 0);
v___x_291_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_290_);
if (lean_obj_tag(v___x_291_) == 0)
{
lean_object* v___x_292_; 
v___x_292_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__11));
v_a_266_ = v___x_292_;
goto v___jp_265_;
}
else
{
lean_object* v_val_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
lean_dec_ref_known(v_d_234_, 0);
v_val_293_ = lean_ctor_get(v___x_291_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_291_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_291_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_val_293_);
lean_dec(v___x_291_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
lean_ctor_set_tag(v___x_295_, 0);
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_val_293_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
case 5:
{
lean_object* v_i_301_; lean_object* v___x_302_; 
v_i_301_ = lean_ctor_get(v_d_234_, 0);
lean_inc(v_i_301_);
lean_dec_ref_known(v_d_234_, 1);
v___x_302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_302_, 0, v_i_301_);
return v___x_302_;
}
default: 
{
lean_object* v___x_303_; 
v___x_303_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v_a_266_ = v___x_303_;
goto v___jp_265_;
}
}
v___jp_236_:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_string_append(v___y_237_, v___y_238_);
lean_dec_ref(v___y_238_);
v___x_240_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
v___x_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
return v___x_241_;
}
v___jp_242_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_246_ = lean_string_append(v___x_245_, v_context_233_);
v___x_247_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1));
v___x_248_ = lean_string_append(v___x_246_, v___x_247_);
v___x_249_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__2));
v___x_250_ = lean_string_append(v___x_248_, v___x_249_);
v___x_251_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3));
v___x_252_ = lean_string_append(v___x_250_, v___x_251_);
v___x_253_ = lean_string_append(v___x_252_, v_received_244_);
lean_dec_ref(v_received_244_);
v___x_254_ = lean_string_utf8_byte_size(v___y_243_);
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = lean_nat_dec_eq(v___x_254_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__4));
v___x_258_ = lean_string_append(v___x_257_, v___y_243_);
v___x_259_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__5));
v___x_260_ = lean_string_append(v___x_258_, v___x_259_);
v___y_237_ = v___x_253_;
v___y_238_ = v___x_260_;
goto v___jp_236_;
}
else
{
lean_object* v___x_261_; 
v___x_261_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___y_237_ = v___x_253_;
v___y_238_ = v___x_261_;
goto v___jp_236_;
}
}
v___jp_262_:
{
lean_object* v___x_264_; 
v___x_264_ = l_Lasm_JS_Data_describe(v_d_234_);
v___y_243_ = v___y_263_;
v_received_244_ = v___x_264_;
goto v___jp_242_;
}
v___jp_265_:
{
if (lean_obj_tag(v_d_234_) == 9)
{
lean_object* v_value_267_; lean_object* v_description_268_; lean_object* v___x_269_; uint8_t v___x_270_; 
v_value_267_ = lean_ctor_get(v_d_234_, 0);
v_description_268_ = lean_ctor_get(v_d_234_, 1);
v___x_269_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_270_ = lean_string_dec_eq(v_description_268_, v___x_269_);
if (v___x_270_ == 0)
{
v___y_263_ = v_a_266_;
goto v___jp_262_;
}
else
{
lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_287_; 
lean_inc(v_value_267_);
v_isSharedCheck_287_ = !lean_is_exclusive(v_d_234_);
if (v_isSharedCheck_287_ == 0)
{
lean_object* v_unused_288_; lean_object* v_unused_289_; 
v_unused_288_ = lean_ctor_get(v_d_234_, 1);
lean_dec(v_unused_288_);
v_unused_289_ = lean_ctor_get(v_d_234_, 0);
lean_dec(v_unused_289_);
v___x_272_ = v_d_234_;
v_isShared_273_ = v_isSharedCheck_287_;
goto v_resetjp_271_;
}
else
{
lean_dec(v_d_234_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_287_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
uint32_t v___x_274_; uint64_t v___x_275_; lean_object* v___x_277_; 
v___x_274_ = 206;
v___x_275_ = 0ULL;
lean_inc(v_value_267_);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___x_269_);
v___x_277_ = v___x_272_;
goto v_reusejp_276_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v_value_267_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v___x_269_);
v___x_277_ = v_reuseFailAlloc_286_;
goto v_reusejp_276_;
}
v_reusejp_276_:
{
uint32_t v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lasm_js_value_handle(v_value_267_);
lean_dec(v_value_267_);
v___x_279_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_274_, v___x_275_, v___x_277_, v___x_278_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; uint8_t v___x_281_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
lean_inc(v_a_280_);
lean_dec_ref_known(v___x_279_, 1);
v___x_281_ = lean_string_validate_utf8(v_a_280_);
if (v___x_281_ == 0)
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec(v_a_280_);
v___x_282_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9);
v___x_283_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_282_);
v___y_243_ = v_a_266_;
v_received_244_ = v___x_283_;
goto v___jp_242_;
}
else
{
lean_object* v___x_284_; 
v___x_284_ = lean_string_from_utf8_unchecked(v_a_280_);
v___y_243_ = v_a_266_;
v_received_244_ = v___x_284_;
goto v___jp_242_;
}
}
else
{
lean_object* v___x_285_; 
lean_dec_ref_known(v___x_279_, 1);
v___x_285_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10));
v___y_243_ = v_a_266_;
v_received_244_ = v___x_285_;
goto v___jp_242_;
}
}
}
}
}
else
{
v___y_263_ = v_a_266_;
goto v___jp_262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___boxed(lean_object* v_context_304_, lean_object* v_d_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(v_context_304_, v_d_305_);
lean_dec_ref(v_context_304_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(lean_object* v_context_308_, lean_object* v_bytes_309_){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_309_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; lean_object* v___x_313_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v___x_313_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(v_context_308_, v_a_312_);
return v___x_313_;
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
v_a_314_ = lean_ctor_get(v___x_311_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_311_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_311_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_311_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
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
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6___boxed(lean_object* v_context_322_, lean_object* v_bytes_323_, lean_object* v_a_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(v_context_322_, v_bytes_323_);
lean_dec_ref(v_bytes_323_);
lean_dec_ref(v_context_322_);
return v_res_325_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0(void){
_start:
{
uint64_t v___x_326_; uint8_t v___x_327_; uint64_t v___x_328_; 
v___x_326_ = 0ULL;
v___x_327_ = 0;
v___x_328_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5(v___x_327_, v___x_326_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2(lean_object* v_f_330_, lean_object* v_args_331_, lean_object* v_this_332_){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; uint64_t v___x_336_; lean_object* v___x_337_; 
v___x_334_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_335_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_335_, 0, v_f_330_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
v___x_336_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__0);
v___x_337_ = l_Lasm_JS_Value_invokeRaw(v___x_335_, v_this_332_, v_args_331_, v___x_336_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_337_, 1);
v___x_339_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_340_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(v___x_339_, v_a_338_);
lean_dec(v_a_338_);
return v___x_340_;
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
v_a_341_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_337_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_337_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___boxed(lean_object* v_f_349_, lean_object* v_args_350_, lean_object* v_this_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2(v_f_349_, v_args_350_, v_this_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3(lean_object* v_module_355_, lean_object* v_o_356_, lean_object* v_a_357_){
_start:
{
if (lean_obj_tag(v_a_357_) == 0)
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
lean_dec(v_o_356_);
v___x_359_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0));
v___x_360_ = lean_string_append(v___x_359_, v_module_355_);
v___x_361_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
v___x_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_362_, 0, v___x_361_);
return v___x_362_;
}
else
{
lean_object* v_tail_363_; 
v_tail_363_ = lean_ctor_get(v_a_357_, 1);
if (lean_obj_tag(v_tail_363_) == 0)
{
lean_object* v_head_364_; lean_object* v___x_365_; 
v_head_364_ = lean_ctor_get(v_a_357_, 0);
lean_inc(v_head_364_);
lean_dec_ref_known(v_a_357_, 2);
v___x_365_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_356_, v_head_364_);
return v___x_365_;
}
else
{
lean_object* v_head_366_; lean_object* v___x_367_; 
lean_inc(v_tail_363_);
v_head_366_ = lean_ctor_get(v_a_357_, 0);
lean_inc(v_head_366_);
lean_dec_ref_known(v_a_357_, 2);
v___x_367_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_356_, v_head_366_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___x_367_, 1);
v_o_356_ = v_a_368_;
v_a_357_ = v_tail_363_;
goto _start;
}
else
{
lean_dec(v_tail_363_);
return v___x_367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___boxed(lean_object* v_module_370_, lean_object* v_o_371_, lean_object* v_a_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3(v_module_370_, v_o_371_, v_a_372_);
lean_dec_ref(v_module_370_);
return v_res_374_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_375_; uint64_t v___x_376_; 
v___x_375_ = 1;
v___x_376_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(lean_object* v_specifier_378_){
_start:
{
uint32_t v___x_380_; uint32_t v___x_381_; uint64_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_380_ = 201;
v___x_381_ = 0;
v___x_382_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__0);
lean_inc_ref(v_specifier_378_);
v___x_383_ = lean_string_to_utf8(v_specifier_378_);
v___x_384_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_380_, v___x_381_, v___x_382_, v___x_383_);
lean_dec_ref(v___x_383_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_385_);
lean_dec_ref_known(v___x_384_, 1);
v___x_386_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___closed__1));
v___x_387_ = l_String_quote(v_specifier_378_);
v___x_388_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_388_, 0, v___x_387_);
v___x_389_ = lean_unsigned_to_nat(120u);
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = l_Std_Format_pretty(v___x_388_, v___x_389_, v___x_390_, v___x_390_);
v___x_392_ = lean_string_append(v___x_386_, v___x_391_);
lean_dec_ref(v___x_391_);
v___x_393_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_392_, v_a_385_);
lean_dec(v_a_385_);
lean_dec_ref(v___x_392_);
return v___x_393_;
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec_ref(v_specifier_378_);
v_a_394_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_384_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_384_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2___boxed(lean_object* v_specifier_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(v_specifier_402_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(lean_object* v_module_405_, lean_object* v_path_406_){
_start:
{
lean_object* v___x_408_; 
lean_inc_ref(v_module_405_);
v___x_408_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(v_module_405_);
if (lean_obj_tag(v___x_408_) == 0)
{
lean_object* v_a_409_; lean_object* v___x_410_; 
v_a_409_ = lean_ctor_get(v___x_408_, 0);
lean_inc(v_a_409_);
lean_dec_ref_known(v___x_408_, 1);
v___x_410_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3(v_module_405_, v_a_409_, v_path_406_);
lean_dec_ref(v_module_405_);
return v___x_410_;
}
else
{
lean_dec(v_path_406_);
lean_dec_ref(v_module_405_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1___boxed(lean_object* v_module_411_, lean_object* v_path_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_411_, v_path_412_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1(lean_object* v_module_416_, lean_object* v_path_417_, lean_object* v_self_418_, lean_object* v_args_419_){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_421_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_422_ = lean_unsigned_to_nat(0u);
v___x_423_ = lean_box(0);
v___x_424_ = l_String_splitOnAux(v_path_417_, v___x_421_, v___x_422_, v___x_422_, v___x_422_, v___x_423_);
v___x_425_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_416_, v___x_424_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v___x_427_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_427_, 0, v_self_418_);
v___x_428_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2(v_a_426_, v_args_419_, v___x_427_);
return v___x_428_;
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec_ref(v_args_419_);
lean_dec_ref(v_self_418_);
v_a_429_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_425_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_425_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___boxed(lean_object* v_module_437_, lean_object* v_path_438_, lean_object* v_self_439_, lean_object* v_args_440_, lean_object* v_a_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1(v_module_437_, v_path_438_, v_self_439_, v_args_440_);
lean_dec_ref(v_path_438_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare(lean_object* v_self_445_, lean_object* v_target_446_, lean_object* v_targetStart_447_, lean_object* v_targetEnd_448_, lean_object* v_sourceStart_449_, lean_object* v_sourceEnd_450_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_452_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_453_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__1));
v___x_454_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_454_, 0, v_target_446_);
v___x_455_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_targetStart_447_);
v___x_456_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_targetEnd_448_);
v___x_457_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_sourceStart_449_);
v___x_458_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_sourceEnd_450_);
v___x_459_ = lean_unsigned_to_nat(5u);
v___x_460_ = lean_mk_empty_array_with_capacity(v___x_459_);
v___x_461_ = lean_array_push(v___x_460_, v___x_454_);
v___x_462_ = lean_array_push(v___x_461_, v___x_455_);
v___x_463_ = lean_array_push(v___x_462_, v___x_456_);
v___x_464_ = lean_array_push(v___x_463_, v___x_457_);
v___x_465_ = lean_array_push(v___x_464_, v___x_458_);
v___x_466_ = l_Lasm_JS_Web_Support_args(v___x_465_);
v___x_467_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1(v___x_452_, v___x_453_, v_self_445_, v___x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_compare___boxed(lean_object* v_self_468_, lean_object* v_target_469_, lean_object* v_targetStart_470_, lean_object* v_targetEnd_471_, lean_object* v_sourceStart_472_, lean_object* v_sourceEnd_473_, lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lasm_JS_Node_Buffer_compare(v_self_468_, v_target_469_, v_targetStart_470_, v_targetEnd_471_, v_sourceStart_472_, v_sourceEnd_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(lean_object* v_context_477_, lean_object* v_d_478_){
_start:
{
lean_object* v_received_481_; 
if (lean_obj_tag(v_d_478_) == 2)
{
uint8_t v_b_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v_b_495_ = lean_ctor_get_uint8(v_d_478_, 0);
lean_dec_ref_known(v_d_478_, 0);
v___x_496_ = lean_box(v_b_495_);
v___x_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
return v___x_497_;
}
else
{
if (lean_obj_tag(v_d_478_) == 9)
{
lean_object* v_value_498_; lean_object* v_description_499_; lean_object* v___x_500_; uint8_t v___x_501_; 
v_value_498_ = lean_ctor_get(v_d_478_, 0);
v_description_499_ = lean_ctor_get(v_d_478_, 1);
v___x_500_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_501_ = lean_string_dec_eq(v_description_499_, v___x_500_);
if (v___x_501_ == 0)
{
goto v___jp_493_;
}
else
{
uint32_t v___x_502_; uint64_t v___x_503_; lean_object* v___x_504_; uint32_t v___x_505_; lean_object* v___x_506_; 
lean_inc_n(v_value_498_, 2);
lean_dec_ref_known(v_d_478_, 2);
v___x_502_ = 206;
v___x_503_ = 0ULL;
v___x_504_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_504_, 0, v_value_498_);
lean_ctor_set(v___x_504_, 1, v___x_500_);
v___x_505_ = lasm_js_value_handle(v_value_498_);
lean_dec(v_value_498_);
v___x_506_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_502_, v___x_503_, v___x_504_, v___x_505_);
if (lean_obj_tag(v___x_506_) == 0)
{
lean_object* v_a_507_; uint8_t v___x_508_; 
v_a_507_ = lean_ctor_get(v___x_506_, 0);
lean_inc(v_a_507_);
lean_dec_ref_known(v___x_506_, 1);
v___x_508_ = lean_string_validate_utf8(v_a_507_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; lean_object* v___x_510_; 
lean_dec(v_a_507_);
v___x_509_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9);
v___x_510_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_509_);
v_received_481_ = v___x_510_;
goto v___jp_480_;
}
else
{
lean_object* v___x_511_; 
v___x_511_ = lean_string_from_utf8_unchecked(v_a_507_);
v_received_481_ = v___x_511_;
goto v___jp_480_;
}
}
else
{
lean_object* v___x_512_; 
lean_dec_ref_known(v___x_506_, 1);
v___x_512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10));
v_received_481_ = v___x_512_;
goto v___jp_480_;
}
}
}
else
{
goto v___jp_493_;
}
}
v___jp_480_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v___x_482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_483_ = lean_string_append(v___x_482_, v_context_477_);
v___x_484_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1));
v___x_485_ = lean_string_append(v___x_483_, v___x_484_);
v___x_486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_487_ = lean_string_append(v___x_485_, v___x_486_);
v___x_488_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3));
v___x_489_ = lean_string_append(v___x_487_, v___x_488_);
v___x_490_ = lean_string_append(v___x_489_, v_received_481_);
lean_dec_ref(v_received_481_);
v___x_491_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
v___x_492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_492_, 0, v___x_491_);
return v___x_492_;
}
v___jp_493_:
{
lean_object* v___x_494_; 
v___x_494_ = l_Lasm_JS_Data_describe(v_d_478_);
v_received_481_ = v___x_494_;
goto v___jp_480_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_context_513_, lean_object* v_d_514_, lean_object* v_a_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(v_context_513_, v_d_514_);
lean_dec_ref(v_context_513_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2(lean_object* v_context_517_, lean_object* v_bytes_518_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_518_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_522_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_521_);
lean_dec_ref_known(v___x_520_, 1);
v___x_522_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(v_context_517_, v_a_521_);
return v___x_522_;
}
else
{
lean_object* v_a_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_530_; 
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2___boxed(lean_object* v_context_531_, lean_object* v_bytes_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2(v_context_531_, v_bytes_532_);
lean_dec_ref(v_bytes_532_);
lean_dec_ref(v_context_531_);
return v_res_534_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1(uint8_t v_await_535_, uint64_t v_extra_536_){
_start:
{
uint64_t v___x_537_; uint64_t v___y_539_; 
v___x_537_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_535_ == 0)
{
uint64_t v___x_542_; 
v___x_542_ = 0ULL;
v___y_539_ = v___x_542_;
goto v___jp_538_;
}
else
{
uint64_t v___x_543_; 
v___x_543_ = 2ULL;
v___y_539_ = v___x_543_;
goto v___jp_538_;
}
v___jp_538_:
{
uint64_t v___x_540_; uint64_t v___x_541_; 
v___x_540_ = lean_uint64_lor(v___x_537_, v___y_539_);
v___x_541_ = lean_uint64_lor(v___x_540_, v_extra_536_);
return v___x_541_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1___boxed(lean_object* v_await_544_, lean_object* v_extra_545_){
_start:
{
uint8_t v_await_boxed_546_; uint64_t v_extra_boxed_547_; uint64_t v_res_548_; lean_object* v_r_549_; 
v_await_boxed_546_ = lean_unbox(v_await_544_);
v_extra_boxed_547_ = lean_unbox_uint64(v_extra_545_);
lean_dec_ref(v_extra_545_);
v_res_548_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1(v_await_boxed_546_, v_extra_boxed_547_);
v_r_549_ = lean_box_uint64(v_res_548_);
return v_r_549_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_550_; uint8_t v___x_551_; uint64_t v___x_552_; 
v___x_550_ = 0ULL;
v___x_551_ = 0;
v___x_552_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__1(v___x_551_, v___x_550_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(lean_object* v_f_553_, lean_object* v_args_554_, lean_object* v_this_555_){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; uint64_t v___x_559_; lean_object* v___x_560_; 
v___x_557_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_558_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_558_, 0, v_f_553_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0);
v___x_560_ = l_Lasm_JS_Value_invokeRaw(v___x_558_, v_this_555_, v_args_554_, v___x_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_560_, 1);
v___x_562_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_563_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2(v___x_562_, v_a_561_);
lean_dec(v_a_561_);
return v___x_563_;
}
else
{
lean_object* v_a_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_571_; 
v_a_564_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_571_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_571_ == 0)
{
v___x_566_ = v___x_560_;
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_a_564_);
lean_dec(v___x_560_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_571_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_a_564_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___boxed(lean_object* v_f_572_, lean_object* v_args_573_, lean_object* v_this_574_, lean_object* v_a_575_){
_start:
{
lean_object* v_res_576_; 
v_res_576_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_f_572_, v_args_573_, v_this_574_);
return v_res_576_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(lean_object* v_module_577_, lean_object* v_path_578_, lean_object* v_self_579_, lean_object* v_args_580_){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_582_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_583_ = lean_unsigned_to_nat(0u);
v___x_584_ = lean_box(0);
v___x_585_ = l_String_splitOnAux(v_path_578_, v___x_582_, v___x_583_, v___x_583_, v___x_583_, v___x_584_);
v___x_586_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_577_, v___x_585_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_588_; lean_object* v___x_589_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_586_, 1);
v___x_588_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_588_, 0, v_self_579_);
v___x_589_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_a_587_, v_args_580_, v___x_588_);
return v___x_589_;
}
else
{
lean_object* v_a_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_597_; 
lean_dec_ref(v_args_580_);
lean_dec_ref(v_self_579_);
v_a_590_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_597_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_597_ == 0)
{
v___x_592_ = v___x_586_;
v_isShared_593_ = v_isSharedCheck_597_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_a_590_);
lean_dec(v___x_586_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0___boxed(lean_object* v_module_598_, lean_object* v_path_599_, lean_object* v_self_600_, lean_object* v_args_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v_module_598_, v_path_599_, v_self_600_, v_args_601_);
lean_dec_ref(v_path_599_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals(lean_object* v_self_605_, lean_object* v_otherBuffer_606_){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_608_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_609_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_equals___closed__0));
v___x_610_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_610_, 0, v_otherBuffer_606_);
v___x_611_ = lean_unsigned_to_nat(1u);
v___x_612_ = lean_mk_empty_array_with_capacity(v___x_611_);
v___x_613_ = lean_array_push(v___x_612_, v___x_610_);
v___x_614_ = l_Lasm_JS_Web_Support_args(v___x_613_);
v___x_615_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v___x_608_, v___x_609_, v_self_605_, v___x_614_);
return v___x_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals___boxed(lean_object* v_self_616_, lean_object* v_otherBuffer_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lasm_JS_Node_Buffer_equals(v_self_616_, v_otherBuffer_617_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object* v_x_620_){
_start:
{
if (lean_obj_tag(v_x_620_) == 0)
{
lean_object* v___x_621_; 
v___x_621_ = lean_box(0);
return v___x_621_;
}
else
{
lean_object* v_val_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_629_; 
v_val_622_ = lean_ctor_get(v_x_620_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v_x_620_);
if (v_isSharedCheck_629_ == 0)
{
v___x_624_ = v_x_620_;
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_val_622_);
lean_dec(v_x_620_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_629_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_627_; 
if (v_isShared_625_ == 0)
{
lean_ctor_set_tag(v___x_624_, 4);
v___x_627_ = v___x_624_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_val_622_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(lean_object* v_context_631_, lean_object* v_d_632_){
_start:
{
lean_object* v_received_635_; 
if (lean_obj_tag(v_d_632_) == 4)
{
lean_object* v_s_649_; lean_object* v___x_651_; uint8_t v_isShared_652_; uint8_t v_isSharedCheck_656_; 
v_s_649_ = lean_ctor_get(v_d_632_, 0);
v_isSharedCheck_656_ = !lean_is_exclusive(v_d_632_);
if (v_isSharedCheck_656_ == 0)
{
v___x_651_ = v_d_632_;
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
else
{
lean_inc(v_s_649_);
lean_dec(v_d_632_);
v___x_651_ = lean_box(0);
v_isShared_652_ = v_isSharedCheck_656_;
goto v_resetjp_650_;
}
v_resetjp_650_:
{
lean_object* v___x_654_; 
if (v_isShared_652_ == 0)
{
lean_ctor_set_tag(v___x_651_, 0);
v___x_654_ = v___x_651_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_655_; 
v_reuseFailAlloc_655_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_655_, 0, v_s_649_);
v___x_654_ = v_reuseFailAlloc_655_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
return v___x_654_;
}
}
}
else
{
if (lean_obj_tag(v_d_632_) == 9)
{
lean_object* v_value_657_; lean_object* v_description_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v_value_657_ = lean_ctor_get(v_d_632_, 0);
v_description_658_ = lean_ctor_get(v_d_632_, 1);
v___x_659_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_660_ = lean_string_dec_eq(v_description_658_, v___x_659_);
if (v___x_660_ == 0)
{
goto v___jp_647_;
}
else
{
uint32_t v___x_661_; uint64_t v___x_662_; lean_object* v___x_663_; uint32_t v___x_664_; lean_object* v___x_665_; 
lean_inc_n(v_value_657_, 2);
lean_dec_ref_known(v_d_632_, 2);
v___x_661_ = 206;
v___x_662_ = 0ULL;
v___x_663_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_663_, 0, v_value_657_);
lean_ctor_set(v___x_663_, 1, v___x_659_);
v___x_664_ = lasm_js_value_handle(v_value_657_);
lean_dec(v_value_657_);
v___x_665_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_661_, v___x_662_, v___x_663_, v___x_664_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; uint8_t v___x_667_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_666_);
lean_dec_ref_known(v___x_665_, 1);
v___x_667_ = lean_string_validate_utf8(v_a_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; 
lean_dec(v_a_666_);
v___x_668_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9);
v___x_669_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_668_);
v_received_635_ = v___x_669_;
goto v___jp_634_;
}
else
{
lean_object* v___x_670_; 
v___x_670_ = lean_string_from_utf8_unchecked(v_a_666_);
v_received_635_ = v___x_670_;
goto v___jp_634_;
}
}
else
{
lean_object* v___x_671_; 
lean_dec_ref_known(v___x_665_, 1);
v___x_671_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10));
v_received_635_ = v___x_671_;
goto v___jp_634_;
}
}
}
else
{
goto v___jp_647_;
}
}
v___jp_634_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_636_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_637_ = lean_string_append(v___x_636_, v_context_631_);
v___x_638_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1));
v___x_639_ = lean_string_append(v___x_637_, v___x_638_);
v___x_640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__0));
v___x_641_ = lean_string_append(v___x_639_, v___x_640_);
v___x_642_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3));
v___x_643_ = lean_string_append(v___x_641_, v___x_642_);
v___x_644_ = lean_string_append(v___x_643_, v_received_635_);
lean_dec_ref(v_received_635_);
v___x_645_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_644_);
v___x_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
v___jp_647_:
{
lean_object* v___x_648_; 
v___x_648_ = l_Lasm_JS_Data_describe(v_d_632_);
v_received_635_ = v___x_648_;
goto v___jp_634_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___boxed(lean_object* v_context_672_, lean_object* v_d_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(v_context_672_, v_d_673_);
lean_dec_ref(v_context_672_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(lean_object* v_context_676_, lean_object* v_bytes_677_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_677_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_681_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_a_680_);
lean_dec_ref_known(v___x_679_, 1);
v___x_681_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(v_context_676_, v_a_680_);
return v___x_681_;
}
else
{
lean_object* v_a_682_; lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_689_; 
v_a_682_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_689_ == 0)
{
v___x_684_ = v___x_679_;
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
else
{
lean_inc(v_a_682_);
lean_dec(v___x_679_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_689_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_687_; 
if (v_isShared_685_ == 0)
{
v___x_687_ = v___x_684_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_682_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3___boxed(lean_object* v_context_690_, lean_object* v_bytes_691_, lean_object* v_a_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(v_context_690_, v_bytes_691_);
lean_dec_ref(v_bytes_691_);
lean_dec_ref(v_context_690_);
return v_res_693_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(uint8_t v_await_694_, uint64_t v_extra_695_){
_start:
{
uint64_t v___x_696_; uint64_t v___y_698_; 
v___x_696_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_694_ == 0)
{
uint64_t v___x_701_; 
v___x_701_ = 0ULL;
v___y_698_ = v___x_701_;
goto v___jp_697_;
}
else
{
uint64_t v___x_702_; 
v___x_702_ = 2ULL;
v___y_698_ = v___x_702_;
goto v___jp_697_;
}
v___jp_697_:
{
uint64_t v___x_699_; uint64_t v___x_700_; 
v___x_699_ = lean_uint64_lor(v___x_696_, v___y_698_);
v___x_700_ = lean_uint64_lor(v___x_699_, v_extra_695_);
return v___x_700_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2___boxed(lean_object* v_await_703_, lean_object* v_extra_704_){
_start:
{
uint8_t v_await_boxed_705_; uint64_t v_extra_boxed_706_; uint64_t v_res_707_; lean_object* v_r_708_; 
v_await_boxed_705_ = lean_unbox(v_await_703_);
v_extra_boxed_706_ = lean_unbox_uint64(v_extra_704_);
lean_dec_ref(v_extra_704_);
v_res_707_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(v_await_boxed_705_, v_extra_boxed_706_);
v_r_708_ = lean_box_uint64(v_res_707_);
return v_r_708_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0(void){
_start:
{
uint64_t v___x_709_; uint8_t v___x_710_; uint64_t v___x_711_; 
v___x_709_ = 0ULL;
v___x_710_ = 0;
v___x_711_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(v___x_710_, v___x_709_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(lean_object* v_f_712_, lean_object* v_args_713_, lean_object* v_this_714_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; uint64_t v___x_718_; lean_object* v___x_719_; 
v___x_716_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_717_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_717_, 0, v_f_712_);
lean_ctor_set(v___x_717_, 1, v___x_716_);
v___x_718_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0);
v___x_719_ = l_Lasm_JS_Value_invokeRaw(v___x_717_, v_this_714_, v_args_713_, v___x_718_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v___x_719_, 1);
v___x_721_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_722_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(v___x_721_, v_a_720_);
lean_dec(v_a_720_);
return v___x_722_;
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
v_a_723_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_719_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___boxed(lean_object* v_f_731_, lean_object* v_args_732_, lean_object* v_this_733_, lean_object* v_a_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(v_f_731_, v_args_732_, v_this_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(lean_object* v_module_736_, lean_object* v_path_737_, lean_object* v_self_738_, lean_object* v_args_739_){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_741_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_742_ = lean_unsigned_to_nat(0u);
v___x_743_ = lean_box(0);
v___x_744_ = l_String_splitOnAux(v_path_737_, v___x_741_, v___x_742_, v___x_742_, v___x_742_, v___x_743_);
v___x_745_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_736_, v___x_744_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_745_, 1);
v___x_747_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_747_, 0, v_self_738_);
v___x_748_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(v_a_746_, v_args_739_, v___x_747_);
return v___x_748_;
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec_ref(v_args_739_);
lean_dec_ref(v_self_738_);
v_a_749_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_745_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_745_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1___boxed(lean_object* v_module_757_, lean_object* v_path_758_, lean_object* v_self_759_, lean_object* v_args_760_, lean_object* v_a_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(v_module_757_, v_path_758_, v_self_759_, v_args_760_);
lean_dec_ref(v_path_758_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString(lean_object* v_self_764_, lean_object* v_encoding_765_, lean_object* v_start_766_, lean_object* v_end_767_){
_start:
{
lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_769_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_770_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_toString___closed__0));
v___x_771_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_765_);
v___x_772_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_start_766_);
v___x_773_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_end_767_);
v___x_774_ = lean_unsigned_to_nat(3u);
v___x_775_ = lean_mk_empty_array_with_capacity(v___x_774_);
v___x_776_ = lean_array_push(v___x_775_, v___x_771_);
v___x_777_ = lean_array_push(v___x_776_, v___x_772_);
v___x_778_ = lean_array_push(v___x_777_, v___x_773_);
v___x_779_ = l_Lasm_JS_Web_Support_args(v___x_778_);
v___x_780_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(v___x_769_, v___x_770_, v_self_764_, v___x_779_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString___boxed(lean_object* v_self_781_, lean_object* v_encoding_782_, lean_object* v_start_783_, lean_object* v_end_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lasm_JS_Node_Buffer_toString(v_self_781_, v_encoding_782_, v_start_783_, v_end_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(lean_object* v_x_787_){
_start:
{
if (lean_obj_tag(v_x_787_) == 0)
{
lean_object* v___x_788_; 
v___x_788_ = lean_box(0);
return v___x_788_;
}
else
{
lean_object* v_val_789_; 
v_val_789_ = lean_ctor_get(v_x_787_, 0);
lean_inc(v_val_789_);
lean_dec_ref_known(v_x_787_, 1);
switch(lean_obj_tag(v_val_789_))
{
case 0:
{
lean_object* v_value_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
v_value_790_ = lean_ctor_get(v_val_789_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v_val_789_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v_val_789_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_value_790_);
lean_dec(v_val_789_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
lean_ctor_set_tag(v___x_792_, 4);
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_value_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
case 1:
{
lean_object* v_value_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
v_value_798_ = lean_ctor_get(v_val_789_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v_val_789_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v_val_789_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_value_798_);
lean_dec(v_val_789_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
lean_ctor_set_tag(v___x_800_, 6);
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_value_798_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
default: 
{
lean_object* v_value_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_818_; 
v_value_806_ = lean_ctor_get(v_val_789_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v_val_789_);
if (v_isSharedCheck_818_ == 0)
{
v___x_808_ = v_val_789_;
v_isShared_809_ = v_isSharedCheck_818_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_value_806_);
lean_dec(v_val_789_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_818_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v___x_810_; lean_object* v___x_811_; uint8_t v___x_812_; 
v___x_810_ = lean_nat_abs(v_value_806_);
v___x_811_ = lean_cstr_to_nat("9007199254740991");
v___x_812_ = lean_nat_dec_le(v___x_810_, v___x_811_);
lean_dec(v___x_810_);
if (v___x_812_ == 0)
{
lean_object* v___x_814_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set_tag(v___x_808_, 5);
v___x_814_ = v___x_808_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_815_; 
v_reuseFailAlloc_815_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_815_, 0, v_value_806_);
v___x_814_ = v_reuseFailAlloc_815_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
return v___x_814_;
}
}
else
{
double v___x_816_; lean_object* v___x_817_; 
lean_del_object(v___x_808_);
v___x_816_ = l_Float_ofInt(v_value_806_);
lean_dec(v_value_806_);
v___x_817_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_817_, 0, v___x_816_);
return v___x_817_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc(lean_object* v_size_827_, lean_object* v_fill_828_, lean_object* v_encoding_829_){
_start:
{
uint8_t v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___y_835_; lean_object* v___x_844_; lean_object* v___x_845_; uint8_t v___x_846_; 
v___x_831_ = 0;
v___x_832_ = lean_unsigned_to_nat(3u);
v___x_833_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_alloc___closed__2));
v___x_844_ = lean_nat_abs(v_size_827_);
v___x_845_ = lean_cstr_to_nat("9007199254740991");
v___x_846_ = lean_nat_dec_le(v___x_844_, v___x_845_);
lean_dec(v___x_844_);
if (v___x_846_ == 0)
{
lean_object* v___x_847_; 
v___x_847_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_847_, 0, v_size_827_);
v___y_835_ = v___x_847_;
goto v___jp_834_;
}
else
{
double v___x_848_; lean_object* v___x_849_; 
v___x_848_ = l_Float_ofInt(v_size_827_);
lean_dec(v_size_827_);
v___x_849_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_849_, 0, v___x_848_);
v___y_835_ = v___x_849_;
goto v___jp_834_;
}
v___jp_834_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; 
v___x_836_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(v_fill_828_);
v___x_837_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_829_);
v___x_838_ = lean_mk_empty_array_with_capacity(v___x_832_);
v___x_839_ = lean_array_push(v___x_838_, v___y_835_);
v___x_840_ = lean_array_push(v___x_839_, v___x_836_);
v___x_841_ = lean_array_push(v___x_840_, v___x_837_);
v___x_842_ = l_Lasm_JS_Web_Support_args(v___x_841_);
v___x_843_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_833_, v___x_842_, v___x_831_);
return v___x_843_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc___boxed(lean_object* v_size_850_, lean_object* v_fill_851_, lean_object* v_encoding_852_, lean_object* v_a_853_){
_start:
{
lean_object* v_res_854_; 
v_res_854_ = l_Lasm_JS_Node_Buffer_alloc(v_size_850_, v_fill_851_, v_encoding_852_);
return v_res_854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(lean_object* v_b_856_, lean_object* v_args_857_, uint8_t v_await_858_){
_start:
{
uint64_t v___y_861_; uint64_t v___y_862_; uint64_t v___x_897_; uint64_t v___y_899_; 
v___x_897_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_858_ == 0)
{
uint64_t v___x_904_; 
v___x_904_ = 0ULL;
v___y_899_ = v___x_904_;
goto v___jp_898_;
}
else
{
uint64_t v___x_905_; 
v___x_905_ = 2ULL;
v___y_899_ = v___x_905_;
goto v___jp_898_;
}
v___jp_860_:
{
uint64_t v_flags_863_; uint32_t v___x_864_; lean_object* v___x_865_; uint32_t v___x_866_; lean_object* v___x_867_; 
v_flags_863_ = lean_uint64_lor(v___y_861_, v___y_862_);
v___x_864_ = 214;
v___x_865_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_856_, v_args_857_);
v___x_866_ = 0;
v___x_867_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_864_, v_flags_863_, v___x_865_, v___x_866_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_object* v_a_868_; lean_object* v___x_869_; 
v_a_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_a_868_);
lean_dec_ref_known(v___x_867_, 1);
v___x_869_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_868_);
lean_dec(v_a_868_);
if (lean_obj_tag(v___x_869_) == 0)
{
lean_object* v_a_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v_a_870_ = lean_ctor_get(v___x_869_, 0);
lean_inc(v_a_870_);
lean_dec_ref_known(v___x_869_, 1);
v___x_871_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_856_);
v___x_872_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(v___x_871_, v_a_870_);
lean_dec_ref(v___x_871_);
return v___x_872_;
}
else
{
lean_object* v_a_873_; lean_object* v___x_875_; uint8_t v_isShared_876_; uint8_t v_isSharedCheck_880_; 
v_a_873_ = lean_ctor_get(v___x_869_, 0);
v_isSharedCheck_880_ = !lean_is_exclusive(v___x_869_);
if (v_isSharedCheck_880_ == 0)
{
v___x_875_ = v___x_869_;
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
else
{
lean_inc(v_a_873_);
lean_dec(v___x_869_);
v___x_875_ = lean_box(0);
v_isShared_876_ = v_isSharedCheck_880_;
goto v_resetjp_874_;
}
v_resetjp_874_:
{
lean_object* v___x_878_; 
if (v_isShared_876_ == 0)
{
v___x_878_ = v___x_875_;
goto v_reusejp_877_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v_a_873_);
v___x_878_ = v_reuseFailAlloc_879_;
goto v_reusejp_877_;
}
v_reusejp_877_:
{
return v___x_878_;
}
}
}
}
else
{
lean_object* v_a_881_; lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_896_; 
v_a_881_ = lean_ctor_get(v___x_867_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_867_);
if (v_isSharedCheck_896_ == 0)
{
v___x_883_ = v___x_867_;
v_isShared_884_ = v_isSharedCheck_896_;
goto v_resetjp_882_;
}
else
{
lean_inc(v_a_881_);
lean_dec(v___x_867_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_896_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_894_; 
v___x_885_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_886_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_856_);
v___x_887_ = lean_string_append(v___x_885_, v___x_886_);
lean_dec_ref(v___x_886_);
v___x_888_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_889_ = lean_string_append(v___x_887_, v___x_888_);
v___x_890_ = lean_io_error_to_string(v_a_881_);
v___x_891_ = lean_string_append(v___x_889_, v___x_890_);
lean_dec_ref(v___x_890_);
v___x_892_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_892_);
v___x_894_ = v___x_883_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v___x_892_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
v___jp_898_:
{
uint8_t v_construct_900_; uint64_t v___x_901_; 
v_construct_900_ = lean_ctor_get_uint8(v_b_856_, sizeof(void*)*4);
v___x_901_ = lean_uint64_lor(v___x_897_, v___y_899_);
if (v_construct_900_ == 0)
{
uint64_t v___x_902_; 
v___x_902_ = 0ULL;
v___y_861_ = v___x_901_;
v___y_862_ = v___x_902_;
goto v___jp_860_;
}
else
{
uint64_t v___x_903_; 
v___x_903_ = 4ULL;
v___y_861_ = v___x_901_;
v___y_862_ = v___x_903_;
goto v___jp_860_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___boxed(lean_object* v_b_906_, lean_object* v_args_907_, lean_object* v_await_908_, lean_object* v_a_909_){
_start:
{
uint8_t v_await_boxed_910_; lean_object* v_res_911_; 
v_await_boxed_910_ = lean_unbox(v_await_908_);
v_res_911_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v_b_906_, v_args_907_, v_await_boxed_910_);
lean_dec_ref(v_b_906_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength(lean_object* v_string_920_, lean_object* v_encoding_921_){
_start:
{
uint8_t v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___y_927_; 
v___x_923_ = 0;
v___x_924_ = lean_unsigned_to_nat(2u);
v___x_925_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_byteLength___closed__2));
if (lean_obj_tag(v_string_920_) == 0)
{
lean_object* v_value_934_; lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_941_; 
v_value_934_ = lean_ctor_get(v_string_920_, 0);
v_isSharedCheck_941_ = !lean_is_exclusive(v_string_920_);
if (v_isSharedCheck_941_ == 0)
{
v___x_936_ = v_string_920_;
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
else
{
lean_inc(v_value_934_);
lean_dec(v_string_920_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_941_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_939_; 
if (v_isShared_937_ == 0)
{
lean_ctor_set_tag(v___x_936_, 4);
v___x_939_ = v___x_936_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_value_934_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
v___y_927_ = v___x_939_;
goto v___jp_926_;
}
}
}
else
{
lean_object* v_value_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
v_value_942_ = lean_ctor_get(v_string_920_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v_string_920_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v_string_920_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_value_942_);
lean_dec(v_string_920_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
lean_ctor_set_tag(v___x_944_, 6);
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_value_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
v___y_927_ = v___x_947_;
goto v___jp_926_;
}
}
}
v___jp_926_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_928_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_921_);
v___x_929_ = lean_mk_empty_array_with_capacity(v___x_924_);
v___x_930_ = lean_array_push(v___x_929_, v___y_927_);
v___x_931_ = lean_array_push(v___x_930_, v___x_928_);
v___x_932_ = l_Lasm_JS_Web_Support_args(v___x_931_);
v___x_933_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_925_, v___x_932_, v___x_923_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength___boxed(lean_object* v_string_950_, lean_object* v_encoding_951_, lean_object* v_a_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_Lasm_JS_Node_Buffer_byteLength(v_string_950_, v_encoding_951_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare(lean_object* v_buf1_962_, lean_object* v_buf2_963_){
_start:
{
uint8_t v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v___x_965_ = 0;
v___x_966_ = lean_unsigned_to_nat(2u);
v___x_967_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_staticCompare___closed__2));
v___x_968_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_968_, 0, v_buf1_962_);
v___x_969_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_969_, 0, v_buf2_963_);
v___x_970_ = lean_mk_empty_array_with_capacity(v___x_966_);
v___x_971_ = lean_array_push(v___x_970_, v___x_968_);
v___x_972_ = lean_array_push(v___x_971_, v___x_969_);
v___x_973_ = l_Lasm_JS_Web_Support_args(v___x_972_);
v___x_974_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_967_, v___x_973_, v___x_965_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare___boxed(lean_object* v_buf1_975_, lean_object* v_buf2_976_, lean_object* v_a_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lasm_JS_Node_Buffer_staticCompare(v_buf1_975_, v_buf2_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(size_t v_sz_979_, size_t v_i_980_, lean_object* v_bs_981_){
_start:
{
uint8_t v___x_982_; 
v___x_982_ = lean_usize_dec_lt(v_i_980_, v_sz_979_);
if (v___x_982_ == 0)
{
return v_bs_981_;
}
else
{
lean_object* v_v_983_; lean_object* v___x_984_; lean_object* v_bs_x27_985_; lean_object* v___x_986_; size_t v___x_987_; size_t v___x_988_; lean_object* v___x_989_; 
v_v_983_ = lean_array_uget(v_bs_981_, v_i_980_);
v___x_984_ = lean_unsigned_to_nat(0u);
v_bs_x27_985_ = lean_array_uset(v_bs_981_, v_i_980_, v___x_984_);
v___x_986_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_986_, 0, v_v_983_);
v___x_987_ = ((size_t)1ULL);
v___x_988_ = lean_usize_add(v_i_980_, v___x_987_);
v___x_989_ = lean_array_uset(v_bs_x27_985_, v_i_980_, v___x_986_);
v_i_980_ = v___x_988_;
v_bs_981_ = v___x_989_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0___boxed(lean_object* v_sz_991_, lean_object* v_i_992_, lean_object* v_bs_993_){
_start:
{
size_t v_sz_boxed_994_; size_t v_i_boxed_995_; lean_object* v_res_996_; 
v_sz_boxed_994_ = lean_unbox_usize(v_sz_991_);
lean_dec(v_sz_991_);
v_i_boxed_995_ = lean_unbox_usize(v_i_992_);
lean_dec(v_i_992_);
v_res_996_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_boxed_994_, v_i_boxed_995_, v_bs_993_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat(lean_object* v_list_1005_, lean_object* v_totalLength_1006_){
_start:
{
uint8_t v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; size_t v_sz_1011_; size_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1008_ = 0;
v___x_1009_ = lean_unsigned_to_nat(2u);
v___x_1010_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_concat___closed__2));
v_sz_1011_ = lean_array_size(v_list_1005_);
v___x_1012_ = ((size_t)0ULL);
v___x_1013_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_1011_, v___x_1012_, v_list_1005_);
v___x_1014_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
v___x_1015_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_totalLength_1006_);
v___x_1016_ = lean_mk_empty_array_with_capacity(v___x_1009_);
v___x_1017_ = lean_array_push(v___x_1016_, v___x_1014_);
v___x_1018_ = lean_array_push(v___x_1017_, v___x_1015_);
v___x_1019_ = l_Lasm_JS_Web_Support_args(v___x_1018_);
v___x_1020_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1010_, v___x_1019_, v___x_1008_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat___boxed(lean_object* v_list_1021_, lean_object* v_totalLength_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lasm_JS_Node_Buffer_concat(v_list_1021_, v_totalLength_1022_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from(lean_object* v_string_1033_, lean_object* v_encoding_1034_){
_start:
{
uint8_t v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v___x_1036_ = 0;
v___x_1037_ = lean_unsigned_to_nat(2u);
v___x_1038_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_from___closed__2));
v___x_1039_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1039_, 0, v_string_1033_);
v___x_1040_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_1034_);
v___x_1041_ = lean_mk_empty_array_with_capacity(v___x_1037_);
v___x_1042_ = lean_array_push(v___x_1041_, v___x_1039_);
v___x_1043_ = lean_array_push(v___x_1042_, v___x_1040_);
v___x_1044_ = l_Lasm_JS_Web_Support_args(v___x_1043_);
v___x_1045_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1038_, v___x_1044_, v___x_1036_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from___boxed(lean_object* v_string_1046_, lean_object* v_encoding_1047_, lean_object* v_a_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l_Lasm_JS_Node_Buffer_from(v_string_1046_, v_encoding_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(lean_object* v_b_1050_, lean_object* v_args_1051_, uint8_t v_await_1052_){
_start:
{
uint64_t v___y_1055_; uint64_t v___y_1056_; uint64_t v___x_1091_; uint64_t v___y_1093_; 
v___x_1091_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_1052_ == 0)
{
uint64_t v___x_1098_; 
v___x_1098_ = 0ULL;
v___y_1093_ = v___x_1098_;
goto v___jp_1092_;
}
else
{
uint64_t v___x_1099_; 
v___x_1099_ = 2ULL;
v___y_1093_ = v___x_1099_;
goto v___jp_1092_;
}
v___jp_1054_:
{
uint64_t v_flags_1057_; uint32_t v___x_1058_; lean_object* v___x_1059_; uint32_t v___x_1060_; lean_object* v___x_1061_; 
v_flags_1057_ = lean_uint64_lor(v___y_1055_, v___y_1056_);
v___x_1058_ = 214;
v___x_1059_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1050_, v_args_1051_);
v___x_1060_ = 0;
v___x_1061_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1058_, v_flags_1057_, v___x_1059_, v___x_1060_);
if (lean_obj_tag(v___x_1061_) == 0)
{
lean_object* v_a_1062_; lean_object* v___x_1063_; 
v_a_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_a_1062_);
lean_dec_ref_known(v___x_1061_, 1);
v___x_1063_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1062_);
lean_dec(v_a_1062_);
if (lean_obj_tag(v___x_1063_) == 0)
{
lean_object* v_a_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v_a_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc(v_a_1064_);
lean_dec_ref_known(v___x_1063_, 1);
v___x_1065_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1050_);
v___x_1066_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0_spec__2_spec__3(v___x_1065_, v_a_1064_);
lean_dec_ref(v___x_1065_);
return v___x_1066_;
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
v_a_1067_ = lean_ctor_get(v___x_1063_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1063_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1063_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1063_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
else
{
lean_object* v_a_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1090_; 
v_a_1075_ = lean_ctor_get(v___x_1061_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1061_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1077_ = v___x_1061_;
v_isShared_1078_ = v_isSharedCheck_1090_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_a_1075_);
lean_dec(v___x_1061_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1090_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1079_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_1080_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1050_);
v___x_1081_ = lean_string_append(v___x_1079_, v___x_1080_);
lean_dec_ref(v___x_1080_);
v___x_1082_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_1083_ = lean_string_append(v___x_1081_, v___x_1082_);
v___x_1084_ = lean_io_error_to_string(v_a_1075_);
v___x_1085_ = lean_string_append(v___x_1083_, v___x_1084_);
lean_dec_ref(v___x_1084_);
v___x_1086_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 0, v___x_1086_);
v___x_1088_ = v___x_1077_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
v___jp_1092_:
{
uint8_t v_construct_1094_; uint64_t v___x_1095_; 
v_construct_1094_ = lean_ctor_get_uint8(v_b_1050_, sizeof(void*)*4);
v___x_1095_ = lean_uint64_lor(v___x_1091_, v___y_1093_);
if (v_construct_1094_ == 0)
{
uint64_t v___x_1096_; 
v___x_1096_ = 0ULL;
v___y_1055_ = v___x_1095_;
v___y_1056_ = v___x_1096_;
goto v___jp_1054_;
}
else
{
uint64_t v___x_1097_; 
v___x_1097_ = 4ULL;
v___y_1055_ = v___x_1095_;
v___y_1056_ = v___x_1097_;
goto v___jp_1054_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0___boxed(lean_object* v_b_1100_, lean_object* v_args_1101_, lean_object* v_await_1102_, lean_object* v_a_1103_){
_start:
{
uint8_t v_await_boxed_1104_; lean_object* v_res_1105_; 
v_await_boxed_1104_ = lean_unbox(v_await_1102_);
v_res_1105_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v_b_1100_, v_args_1101_, v_await_boxed_1104_);
lean_dec_ref(v_b_1100_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding(lean_object* v_encoding_1114_){
_start:
{
uint8_t v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1116_ = 0;
v___x_1117_ = lean_unsigned_to_nat(1u);
v___x_1118_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_isEncoding___closed__2));
v___x_1119_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1119_, 0, v_encoding_1114_);
v___x_1120_ = lean_mk_empty_array_with_capacity(v___x_1117_);
v___x_1121_ = lean_array_push(v___x_1120_, v___x_1119_);
v___x_1122_ = l_Lasm_JS_Web_Support_args(v___x_1121_);
v___x_1123_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1118_, v___x_1122_, v___x_1116_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding___boxed(lean_object* v_encoding_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_JS_Node_Buffer_isEncoding(v_encoding_1124_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(lean_object* v_o_1128_, lean_object* v_key_1129_){
_start:
{
lean_object* v_k_1131_; lean_object* v___x_1132_; 
v_k_1131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1131_, 0, v_key_1129_);
lean_inc_ref(v_k_1131_);
v___x_1132_ = l_Lasm_JS_Wire_encodeIO(v_k_1131_);
if (lean_obj_tag(v___x_1132_) == 0)
{
lean_object* v_a_1133_; uint32_t v___x_1134_; uint32_t v___x_1135_; uint64_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v_a_1133_ = lean_ctor_get(v___x_1132_, 0);
lean_inc(v_a_1133_);
lean_dec_ref_known(v___x_1132_, 1);
v___x_1134_ = 203;
v___x_1135_ = lasm_js_value_handle(v_o_1128_);
v___x_1136_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
v___x_1137_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_1138_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1138_, 0, v_o_1128_);
lean_ctor_set(v___x_1138_, 1, v___x_1137_);
v___x_1139_ = lean_unsigned_to_nat(2u);
v___x_1140_ = lean_mk_empty_array_with_capacity(v___x_1139_);
lean_inc_ref(v_k_1131_);
v___x_1141_ = lean_array_push(v___x_1140_, v_k_1131_);
v___x_1142_ = lean_array_push(v___x_1141_, v___x_1138_);
v___x_1143_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1142_);
v___x_1144_ = lasm_js_call(v___x_1134_, v___x_1135_, v___x_1136_, v_a_1133_, v___x_1143_);
lean_dec_ref_known(v___x_1143_, 1);
lean_dec(v_a_1133_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___closed__0));
v___x_1147_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1131_);
v___x_1148_ = lean_string_append(v___x_1146_, v___x_1147_);
lean_dec_ref(v___x_1147_);
v___x_1149_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(v___x_1148_, v_a_1145_);
lean_dec(v_a_1145_);
lean_dec_ref(v___x_1148_);
return v___x_1149_;
}
else
{
lean_object* v_a_1150_; lean_object* v___x_1152_; uint8_t v_isShared_1153_; uint8_t v_isSharedCheck_1157_; 
lean_dec_ref_known(v_k_1131_, 1);
v_a_1150_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1152_ = v___x_1144_;
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
else
{
lean_inc(v_a_1150_);
lean_dec(v___x_1144_);
v___x_1152_ = lean_box(0);
v_isShared_1153_ = v_isSharedCheck_1157_;
goto v_resetjp_1151_;
}
v_resetjp_1151_:
{
lean_object* v___x_1155_; 
if (v_isShared_1153_ == 0)
{
v___x_1155_ = v___x_1152_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v_a_1150_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
lean_dec_ref_known(v_k_1131_, 1);
lean_dec(v_o_1128_);
v_a_1158_ = lean_ctor_get(v___x_1132_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1132_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1132_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1132_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1166_, lean_object* v_key_1167_, lean_object* v_a_1168_){
_start:
{
lean_object* v_res_1169_; 
v_res_1169_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(v_o_1166_, v_key_1167_);
return v_res_1169_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(lean_object* v_module_1170_, lean_object* v_o_1171_, lean_object* v_a_1172_){
_start:
{
if (lean_obj_tag(v_a_1172_) == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
lean_dec(v_o_1171_);
v___x_1174_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0));
v___x_1175_ = lean_string_append(v___x_1174_, v_module_1170_);
v___x_1176_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
v___x_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
return v___x_1177_;
}
else
{
lean_object* v_tail_1178_; 
v_tail_1178_ = lean_ctor_get(v_a_1172_, 1);
if (lean_obj_tag(v_tail_1178_) == 0)
{
lean_object* v_head_1179_; lean_object* v___x_1180_; 
v_head_1179_ = lean_ctor_get(v_a_1172_, 0);
lean_inc(v_head_1179_);
lean_dec_ref_known(v_a_1172_, 2);
v___x_1180_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(v_o_1171_, v_head_1179_);
return v___x_1180_;
}
else
{
lean_object* v_head_1181_; lean_object* v___x_1182_; 
lean_inc(v_tail_1178_);
v_head_1181_ = lean_ctor_get(v_a_1172_, 0);
lean_inc(v_head_1181_);
lean_dec_ref_known(v_a_1172_, 2);
v___x_1182_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1171_, v_head_1181_);
if (lean_obj_tag(v___x_1182_) == 0)
{
lean_object* v_a_1183_; 
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
lean_inc(v_a_1183_);
lean_dec_ref_known(v___x_1182_, 1);
v_o_1171_ = v_a_1183_;
v_a_1172_ = v_tail_1178_;
goto _start;
}
else
{
lean_object* v_a_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
lean_dec(v_tail_1178_);
v_a_1185_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1192_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1192_ == 0)
{
v___x_1187_ = v___x_1182_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_a_1185_);
lean_dec(v___x_1182_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0___boxed(lean_object* v_module_1193_, lean_object* v_o_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(v_module_1193_, v_o_1194_, v_a_1195_);
lean_dec_ref(v_module_1193_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(lean_object* v_module_1198_, lean_object* v_path_1199_){
_start:
{
lean_object* v___x_1201_; 
lean_inc_ref(v_module_1198_);
v___x_1201_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(v_module_1198_);
if (lean_obj_tag(v___x_1201_) == 0)
{
lean_object* v_a_1202_; lean_object* v___x_1203_; 
v_a_1202_ = lean_ctor_get(v___x_1201_, 0);
lean_inc(v_a_1202_);
lean_dec_ref_known(v___x_1201_, 1);
v___x_1203_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(v_module_1198_, v_a_1202_, v_path_1199_);
lean_dec_ref(v_module_1198_);
return v___x_1203_;
}
else
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
lean_dec(v_path_1199_);
lean_dec_ref(v_module_1198_);
v_a_1204_ = lean_ctor_get(v___x_1201_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1201_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1201_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1201_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0___boxed(lean_object* v_module_1212_, lean_object* v_path_1213_, lean_object* v_a_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v_module_1212_, v_path_1213_);
return v_res_1215_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength(){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1221_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_1222_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kMaxLength___closed__1));
v___x_1223_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v___x_1221_, v___x_1222_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength___boxed(lean_object* v_a_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lasm_JS_Node_buffer_kMaxLength();
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength(){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1231_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_1232_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1));
v___x_1233_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v___x_1231_, v___x_1232_);
return v___x_1233_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___boxed(lean_object* v_a_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lasm_JS_Node_buffer_kStringMaxLength();
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii(lean_object* v_input_1244_){
_start:
{
uint8_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1246_ = 0;
v___x_1247_ = lean_unsigned_to_nat(1u);
v___x_1248_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isAscii___closed__2));
v___x_1249_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1249_, 0, v_input_1244_);
v___x_1250_ = lean_mk_empty_array_with_capacity(v___x_1247_);
v___x_1251_ = lean_array_push(v___x_1250_, v___x_1249_);
v___x_1252_ = l_Lasm_JS_Web_Support_args(v___x_1251_);
v___x_1253_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1248_, v___x_1252_, v___x_1246_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii___boxed(lean_object* v_input_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lasm_JS_Node_buffer_isAscii(v_input_1254_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8(lean_object* v_input_1265_){
_start:
{
uint8_t v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1267_ = 0;
v___x_1268_ = lean_unsigned_to_nat(1u);
v___x_1269_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isUtf8___closed__2));
v___x_1270_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1270_, 0, v_input_1265_);
v___x_1271_ = lean_mk_empty_array_with_capacity(v___x_1268_);
v___x_1272_ = lean_array_push(v___x_1271_, v___x_1270_);
v___x_1273_ = l_Lasm_JS_Web_Support_args(v___x_1272_);
v___x_1274_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1269_, v___x_1273_, v___x_1267_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8___boxed(lean_object* v_input_1275_, lean_object* v_a_1276_){
_start:
{
lean_object* v_res_1277_; 
v_res_1277_ = l_Lasm_JS_Node_buffer_isUtf8(v_input_1275_);
return v_res_1277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode(lean_object* v_source_1286_, lean_object* v_fromEnc_1287_, lean_object* v_toEnc_1288_){
_start:
{
uint8_t v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; 
v___x_1290_ = 0;
v___x_1291_ = lean_unsigned_to_nat(3u);
v___x_1292_ = ((lean_object*)(l_Lasm_JS_Node_buffer_transcode___closed__2));
v___x_1293_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1293_, 0, v_source_1286_);
v___x_1294_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1294_, 0, v_fromEnc_1287_);
v___x_1295_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1295_, 0, v_toEnc_1288_);
v___x_1296_ = lean_mk_empty_array_with_capacity(v___x_1291_);
v___x_1297_ = lean_array_push(v___x_1296_, v___x_1293_);
v___x_1298_ = lean_array_push(v___x_1297_, v___x_1294_);
v___x_1299_ = lean_array_push(v___x_1298_, v___x_1295_);
v___x_1300_ = l_Lasm_JS_Web_Support_args(v___x_1299_);
v___x_1301_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1292_, v___x_1300_, v___x_1290_);
return v___x_1301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode___boxed(lean_object* v_source_1302_, lean_object* v_fromEnc_1303_, lean_object* v_toEnc_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lasm_JS_Node_buffer_transcode(v_source_1302_, v_fromEnc_1303_, v_toEnc_1304_);
return v_res_1306_;
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
