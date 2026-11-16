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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(uint8_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(lean_object*, lean_object*);
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__1;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__2;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__3_value;
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
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0(void){
_start:
{
uint64_t v___x_479_; uint8_t v___x_480_; uint64_t v___x_481_; 
v___x_479_ = 0ULL;
v___x_480_ = 0;
v___x_481_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__0(v___x_480_, v___x_479_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(lean_object* v_f_482_, lean_object* v_args_483_, lean_object* v_this_484_){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; uint64_t v___x_488_; lean_object* v___x_489_; 
v___x_486_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_487_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_487_, 0, v_f_482_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
v___x_488_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___closed__0);
v___x_489_ = l_Lasm_JS_Value_invokeRaw(v___x_487_, v_this_484_, v_args_483_, v___x_488_);
if (lean_obj_tag(v___x_489_) == 0)
{
lean_object* v_a_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
v_a_490_ = lean_ctor_get(v___x_489_, 0);
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_489_, 1);
v___x_491_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_492_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1(v___x_491_, v_a_490_);
lean_dec(v_a_490_);
return v___x_492_;
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_500_; 
v_a_493_ = lean_ctor_get(v___x_489_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_489_);
if (v_isSharedCheck_500_ == 0)
{
v___x_495_ = v___x_489_;
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_489_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_500_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_498_; 
if (v_isShared_496_ == 0)
{
v___x_498_ = v___x_495_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_493_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0___boxed(lean_object* v_f_501_, lean_object* v_args_502_, lean_object* v_this_503_, lean_object* v_a_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_f_501_, v_args_502_, v_this_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(lean_object* v_module_506_, lean_object* v_path_507_, lean_object* v_self_508_, lean_object* v_args_509_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = lean_box(0);
v___x_514_ = l_String_splitOnAux(v_path_507_, v___x_511_, v___x_512_, v___x_512_, v___x_512_, v___x_513_);
v___x_515_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_506_, v___x_514_);
if (lean_obj_tag(v___x_515_) == 0)
{
lean_object* v_a_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v_a_516_ = lean_ctor_get(v___x_515_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_515_, 1);
v___x_517_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_517_, 0, v_self_508_);
v___x_518_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0_spec__0(v_a_516_, v_args_509_, v___x_517_);
return v___x_518_;
}
else
{
lean_object* v_a_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_526_; 
lean_dec_ref(v_args_509_);
lean_dec_ref(v_self_508_);
v_a_519_ = lean_ctor_get(v___x_515_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_515_);
if (v_isSharedCheck_526_ == 0)
{
v___x_521_ = v___x_515_;
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_a_519_);
lean_dec(v___x_515_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_526_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_519_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0___boxed(lean_object* v_module_527_, lean_object* v_path_528_, lean_object* v_self_529_, lean_object* v_args_530_, lean_object* v_a_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v_module_527_, v_path_528_, v_self_529_, v_args_530_);
lean_dec_ref(v_path_528_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals(lean_object* v_self_534_, lean_object* v_otherBuffer_535_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_537_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_538_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_equals___closed__0));
v___x_539_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_539_, 0, v_otherBuffer_535_);
v___x_540_ = lean_unsigned_to_nat(1u);
v___x_541_ = lean_mk_empty_array_with_capacity(v___x_540_);
v___x_542_ = lean_array_push(v___x_541_, v___x_539_);
v___x_543_ = l_Lasm_JS_Web_Support_args(v___x_542_);
v___x_544_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_equals_spec__0(v___x_537_, v___x_538_, v_self_534_, v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_equals___boxed(lean_object* v_self_545_, lean_object* v_otherBuffer_546_, lean_object* v_a_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l_Lasm_JS_Node_Buffer_equals(v_self_545_, v_otherBuffer_546_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(lean_object* v_x_549_){
_start:
{
if (lean_obj_tag(v_x_549_) == 0)
{
lean_object* v___x_550_; 
v___x_550_ = lean_box(0);
return v___x_550_;
}
else
{
lean_object* v_val_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_val_551_ = lean_ctor_get(v_x_549_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v_x_549_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_val_551_);
lean_dec(v_x_549_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
lean_ctor_set_tag(v___x_553_, 4);
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_val_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_561_ = lean_string_utf8_byte_size(v___x_560_);
return v___x_561_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__2(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; uint8_t v___x_564_; 
v___x_562_ = lean_unsigned_to_nat(0u);
v___x_563_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__1, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__1_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__1);
v___x_564_ = lean_nat_dec_eq(v___x_563_, v___x_562_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(lean_object* v_context_566_, lean_object* v_d_567_){
_start:
{
lean_object* v___y_570_; lean_object* v___y_571_; 
if (lean_obj_tag(v_d_567_) == 4)
{
lean_object* v_s_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
v_s_575_ = lean_ctor_get(v_d_567_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v_d_567_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v_d_567_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_s_575_);
lean_dec(v_d_567_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
lean_ctor_set_tag(v___x_577_, 0);
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_s_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v___x_583_; lean_object* v_received_585_; 
v___x_583_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
if (lean_obj_tag(v_d_567_) == 9)
{
lean_object* v_value_599_; lean_object* v_description_600_; uint8_t v___x_601_; 
v_value_599_ = lean_ctor_get(v_d_567_, 0);
v_description_600_ = lean_ctor_get(v_d_567_, 1);
v___x_601_ = lean_string_dec_eq(v_description_600_, v___x_583_);
if (v___x_601_ == 0)
{
goto v___jp_597_;
}
else
{
uint32_t v___x_602_; uint64_t v___x_603_; lean_object* v___x_604_; uint32_t v___x_605_; lean_object* v___x_606_; 
lean_inc_n(v_value_599_, 2);
lean_dec_ref_known(v_d_567_, 2);
v___x_602_ = 206;
v___x_603_ = 0ULL;
v___x_604_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_604_, 0, v_value_599_);
lean_ctor_set(v___x_604_, 1, v___x_583_);
v___x_605_ = lasm_js_value_handle(v_value_599_);
lean_dec(v_value_599_);
v___x_606_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_602_, v___x_603_, v___x_604_, v___x_605_);
lean_dec_ref_known(v___x_604_, 2);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; uint8_t v___x_608_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
lean_inc(v_a_607_);
lean_dec_ref_known(v___x_606_, 1);
v___x_608_ = lean_string_validate_utf8(v_a_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; 
lean_dec(v_a_607_);
v___x_609_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__9);
v___x_610_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_609_);
v_received_585_ = v___x_610_;
goto v___jp_584_;
}
else
{
lean_object* v___x_611_; 
v___x_611_ = lean_string_from_utf8_unchecked(v_a_607_);
v_received_585_ = v___x_611_;
goto v___jp_584_;
}
}
else
{
lean_object* v___x_612_; 
lean_dec_ref_known(v___x_606_, 1);
v___x_612_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__10));
v_received_585_ = v___x_612_;
goto v___jp_584_;
}
}
}
else
{
goto v___jp_597_;
}
v___jp_584_:
{
lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; uint8_t v___x_595_; 
v___x_586_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_587_ = lean_string_append(v___x_586_, v_context_566_);
v___x_588_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__1));
v___x_589_ = lean_string_append(v___x_587_, v___x_588_);
v___x_590_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__0));
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
v___x_592_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__3));
v___x_593_ = lean_string_append(v___x_591_, v___x_592_);
v___x_594_ = lean_string_append(v___x_593_, v_received_585_);
lean_dec_ref(v_received_585_);
v___x_595_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__2, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__2_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__2);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; 
v___x_596_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___closed__3));
v___y_570_ = v___x_594_;
v___y_571_ = v___x_596_;
goto v___jp_569_;
}
else
{
v___y_570_ = v___x_594_;
v___y_571_ = v___x_583_;
goto v___jp_569_;
}
}
v___jp_597_:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lasm_JS_Data_describe(v_d_567_);
v_received_585_ = v___x_598_;
goto v___jp_584_;
}
}
v___jp_569_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_572_ = lean_string_append(v___y_570_, v___y_571_);
v___x_573_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
v___x_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4___boxed(lean_object* v_context_613_, lean_object* v_d_614_, lean_object* v_a_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(v_context_613_, v_d_614_);
lean_dec_ref(v_context_613_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(lean_object* v_context_617_, lean_object* v_bytes_618_){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_618_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_622_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
v___x_622_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3_spec__4(v_context_617_, v_a_621_);
return v___x_622_;
}
else
{
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
v_a_623_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_620_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_620_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3___boxed(lean_object* v_context_631_, lean_object* v_bytes_632_, lean_object* v_a_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(v_context_631_, v_bytes_632_);
lean_dec_ref(v_bytes_632_);
lean_dec_ref(v_context_631_);
return v_res_634_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(uint8_t v_await_635_, uint64_t v_extra_636_){
_start:
{
uint64_t v___x_637_; uint64_t v___y_639_; 
v___x_637_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_635_ == 0)
{
uint64_t v___x_642_; 
v___x_642_ = 0ULL;
v___y_639_ = v___x_642_;
goto v___jp_638_;
}
else
{
uint64_t v___x_643_; 
v___x_643_ = 2ULL;
v___y_639_ = v___x_643_;
goto v___jp_638_;
}
v___jp_638_:
{
uint64_t v___x_640_; uint64_t v___x_641_; 
v___x_640_ = lean_uint64_lor(v___x_637_, v___y_639_);
v___x_641_ = lean_uint64_lor(v___x_640_, v_extra_636_);
return v___x_641_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2___boxed(lean_object* v_await_644_, lean_object* v_extra_645_){
_start:
{
uint8_t v_await_boxed_646_; uint64_t v_extra_boxed_647_; uint64_t v_res_648_; lean_object* v_r_649_; 
v_await_boxed_646_ = lean_unbox(v_await_644_);
v_extra_boxed_647_ = lean_unbox_uint64(v_extra_645_);
lean_dec_ref(v_extra_645_);
v_res_648_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(v_await_boxed_646_, v_extra_boxed_647_);
v_r_649_ = lean_box_uint64(v_res_648_);
return v_r_649_;
}
}
static uint64_t _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0(void){
_start:
{
uint64_t v___x_650_; uint8_t v___x_651_; uint64_t v___x_652_; 
v___x_650_ = 0ULL;
v___x_651_ = 0;
v___x_652_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__2(v___x_651_, v___x_650_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(lean_object* v_f_653_, lean_object* v_args_654_, lean_object* v_this_655_){
_start:
{
lean_object* v___x_657_; lean_object* v___x_658_; uint64_t v___x_659_; lean_object* v___x_660_; 
v___x_657_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_658_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_658_, 0, v_f_653_);
lean_ctor_set(v___x_658_, 1, v___x_657_);
v___x_659_ = lean_uint64_once(&l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0, &l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0_once, _init_l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___closed__0);
v___x_660_ = l_Lasm_JS_Value_invokeRaw(v___x_658_, v_this_655_, v_args_654_, v___x_659_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_662_; lean_object* v___x_663_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = ((lean_object*)(l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2___closed__1));
v___x_663_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1_spec__3(v___x_662_, v_a_661_);
lean_dec(v_a_661_);
return v___x_663_;
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
v_a_664_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_660_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_660_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1___boxed(lean_object* v_f_672_, lean_object* v_args_673_, lean_object* v_this_674_, lean_object* v_a_675_){
_start:
{
lean_object* v_res_676_; 
v_res_676_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(v_f_672_, v_args_673_, v_this_674_);
return v_res_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(lean_object* v_module_677_, lean_object* v_path_678_, lean_object* v_self_679_, lean_object* v_args_680_){
_start:
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_682_ = ((lean_object*)(l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1___closed__0));
v___x_683_ = lean_unsigned_to_nat(0u);
v___x_684_ = lean_box(0);
v___x_685_ = l_String_splitOnAux(v_path_678_, v___x_682_, v___x_683_, v___x_683_, v___x_683_, v___x_684_);
v___x_686_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1(v_module_677_, v___x_685_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_688_, 0, v_self_679_);
v___x_689_ = l_Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1_spec__1(v_a_687_, v_args_680_, v___x_688_);
return v___x_689_;
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref(v_args_680_);
lean_dec_ref(v_self_679_);
v_a_690_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_686_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_686_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1___boxed(lean_object* v_module_698_, lean_object* v_path_699_, lean_object* v_self_700_, lean_object* v_args_701_, lean_object* v_a_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(v_module_698_, v_path_699_, v_self_700_, v_args_701_);
lean_dec_ref(v_path_699_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString(lean_object* v_self_705_, lean_object* v_encoding_706_, lean_object* v_start_707_, lean_object* v_end_708_){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_710_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_711_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_toString___closed__0));
v___x_712_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_706_);
v___x_713_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_start_707_);
v___x_714_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_end_708_);
v___x_715_ = lean_unsigned_to_nat(3u);
v___x_716_ = lean_mk_empty_array_with_capacity(v___x_715_);
v___x_717_ = lean_array_push(v___x_716_, v___x_712_);
v___x_718_ = lean_array_push(v___x_717_, v___x_713_);
v___x_719_ = lean_array_push(v___x_718_, v___x_714_);
v___x_720_ = l_Lasm_JS_Web_Support_args(v___x_719_);
v___x_721_ = l_Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_toString_spec__1(v___x_710_, v___x_711_, v_self_705_, v___x_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_toString___boxed(lean_object* v_self_722_, lean_object* v_encoding_723_, lean_object* v_start_724_, lean_object* v_end_725_, lean_object* v_a_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l_Lasm_JS_Node_Buffer_toString(v_self_722_, v_encoding_723_, v_start_724_, v_end_725_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(lean_object* v_x_728_){
_start:
{
if (lean_obj_tag(v_x_728_) == 0)
{
lean_object* v___x_729_; 
v___x_729_ = lean_box(0);
return v___x_729_;
}
else
{
lean_object* v_val_730_; 
v_val_730_ = lean_ctor_get(v_x_728_, 0);
lean_inc(v_val_730_);
lean_dec_ref_known(v_x_728_, 1);
switch(lean_obj_tag(v_val_730_))
{
case 0:
{
lean_object* v_value_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_738_; 
v_value_731_ = lean_ctor_get(v_val_730_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v_val_730_);
if (v_isSharedCheck_738_ == 0)
{
v___x_733_ = v_val_730_;
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_value_731_);
lean_dec(v_val_730_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_738_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v___x_736_; 
if (v_isShared_734_ == 0)
{
lean_ctor_set_tag(v___x_733_, 4);
v___x_736_ = v___x_733_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v_value_731_);
v___x_736_ = v_reuseFailAlloc_737_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
return v___x_736_;
}
}
}
case 1:
{
lean_object* v_value_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
v_value_739_ = lean_ctor_get(v_val_730_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v_val_730_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v_val_730_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_value_739_);
lean_dec(v_val_730_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
lean_ctor_set_tag(v___x_741_, 6);
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_value_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
default: 
{
lean_object* v_value_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_759_; 
v_value_747_ = lean_ctor_get(v_val_730_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v_val_730_);
if (v_isSharedCheck_759_ == 0)
{
v___x_749_ = v_val_730_;
v_isShared_750_ = v_isSharedCheck_759_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_value_747_);
lean_dec(v_val_730_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_759_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_751_; lean_object* v___x_752_; uint8_t v___x_753_; 
v___x_751_ = lean_nat_abs(v_value_747_);
v___x_752_ = lean_cstr_to_nat("9007199254740991");
v___x_753_ = lean_nat_dec_le(v___x_751_, v___x_752_);
lean_dec(v___x_751_);
if (v___x_753_ == 0)
{
lean_object* v___x_755_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set_tag(v___x_749_, 5);
v___x_755_ = v___x_749_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_value_747_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
else
{
double v___x_757_; lean_object* v___x_758_; 
lean_del_object(v___x_749_);
v___x_757_ = l_Float_ofInt(v_value_747_);
lean_dec(v_value_747_);
v___x_758_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_758_, 0, v___x_757_);
return v___x_758_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc(lean_object* v_size_768_, lean_object* v_fill_769_, lean_object* v_encoding_770_){
_start:
{
uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___y_776_; lean_object* v___x_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v___x_772_ = 0;
v___x_773_ = lean_unsigned_to_nat(3u);
v___x_774_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_alloc___closed__2));
v___x_785_ = lean_nat_abs(v_size_768_);
v___x_786_ = lean_cstr_to_nat("9007199254740991");
v___x_787_ = lean_nat_dec_le(v___x_785_, v___x_786_);
lean_dec(v___x_785_);
if (v___x_787_ == 0)
{
lean_object* v___x_788_; 
v___x_788_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_788_, 0, v_size_768_);
v___y_776_ = v___x_788_;
goto v___jp_775_;
}
else
{
double v___x_789_; lean_object* v___x_790_; 
v___x_789_ = l_Float_ofInt(v_size_768_);
lean_dec(v_size_768_);
v___x_790_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_790_, 0, v___x_789_);
v___y_776_ = v___x_790_;
goto v___jp_775_;
}
v___jp_775_:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_777_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_alloc_spec__0(v_fill_769_);
v___x_778_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_770_);
v___x_779_ = lean_mk_empty_array_with_capacity(v___x_773_);
v___x_780_ = lean_array_push(v___x_779_, v___y_776_);
v___x_781_ = lean_array_push(v___x_780_, v___x_777_);
v___x_782_ = lean_array_push(v___x_781_, v___x_778_);
v___x_783_ = l_Lasm_JS_Web_Support_args(v___x_782_);
v___x_784_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_774_, v___x_783_, v___x_772_);
return v___x_784_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_alloc___boxed(lean_object* v_size_791_, lean_object* v_fill_792_, lean_object* v_encoding_793_, lean_object* v_a_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l_Lasm_JS_Node_Buffer_alloc(v_size_791_, v_fill_792_, v_encoding_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(lean_object* v_b_797_, lean_object* v_args_798_, uint8_t v_await_799_){
_start:
{
uint64_t v___y_802_; uint64_t v___y_803_; uint64_t v___x_846_; uint64_t v___y_848_; 
v___x_846_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_799_ == 0)
{
uint64_t v___x_853_; 
v___x_853_ = 0ULL;
v___y_848_ = v___x_853_;
goto v___jp_847_;
}
else
{
uint64_t v___x_854_; 
v___x_854_ = 2ULL;
v___y_848_ = v___x_854_;
goto v___jp_847_;
}
v___jp_801_:
{
uint64_t v_flags_804_; uint32_t v___x_805_; lean_object* v___x_806_; uint32_t v___x_807_; lean_object* v___x_808_; 
v_flags_804_ = lean_uint64_lor(v___y_802_, v___y_803_);
v___x_805_ = 214;
v___x_806_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_797_, v_args_798_);
v___x_807_ = 0;
v___x_808_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_805_, v_flags_804_, v___x_806_, v___x_807_);
lean_dec(v___x_806_);
if (lean_obj_tag(v___x_808_) == 0)
{
if (lean_obj_tag(v___x_808_) == 0)
{
lean_object* v_a_809_; lean_object* v___x_810_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc(v_a_809_);
lean_dec_ref_known(v___x_808_, 1);
v___x_810_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_809_);
lean_dec(v_a_809_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref_known(v___x_810_, 1);
v___x_812_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_797_);
v___x_813_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7(v___x_812_, v_a_811_);
lean_dec_ref(v___x_812_);
return v___x_813_;
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
v_a_814_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_810_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_810_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
v_a_822_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_808_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_808_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
lean_ctor_set_tag(v___x_824_, 1);
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_845_; 
v_a_830_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_845_ == 0)
{
v___x_832_ = v___x_808_;
v_isShared_833_ = v_isSharedCheck_845_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_808_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_845_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_843_; 
v___x_834_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_835_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_797_);
v___x_836_ = lean_string_append(v___x_834_, v___x_835_);
lean_dec_ref(v___x_835_);
v___x_837_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_838_ = lean_string_append(v___x_836_, v___x_837_);
v___x_839_ = lean_io_error_to_string(v_a_830_);
v___x_840_ = lean_string_append(v___x_838_, v___x_839_);
lean_dec_ref(v___x_839_);
v___x_841_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
if (v_isShared_833_ == 0)
{
lean_ctor_set(v___x_832_, 0, v___x_841_);
v___x_843_ = v___x_832_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
v___jp_847_:
{
uint8_t v_construct_849_; uint64_t v___x_850_; 
v_construct_849_ = lean_ctor_get_uint8(v_b_797_, sizeof(void*)*4);
v___x_850_ = lean_uint64_lor(v___x_846_, v___y_848_);
if (v_construct_849_ == 0)
{
uint64_t v___x_851_; 
v___x_851_ = 0ULL;
v___y_802_ = v___x_850_;
v___y_803_ = v___x_851_;
goto v___jp_801_;
}
else
{
uint64_t v___x_852_; 
v___x_852_ = 4ULL;
v___y_802_ = v___x_850_;
v___y_803_ = v___x_852_;
goto v___jp_801_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___boxed(lean_object* v_b_855_, lean_object* v_args_856_, lean_object* v_await_857_, lean_object* v_a_858_){
_start:
{
uint8_t v_await_boxed_859_; lean_object* v_res_860_; 
v_await_boxed_859_ = lean_unbox(v_await_857_);
v_res_860_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v_b_855_, v_args_856_, v_await_boxed_859_);
lean_dec_ref(v_b_855_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength(lean_object* v_string_869_, lean_object* v_encoding_870_){
_start:
{
uint8_t v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___y_876_; 
v___x_872_ = 0;
v___x_873_ = lean_unsigned_to_nat(2u);
v___x_874_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_byteLength___closed__2));
if (lean_obj_tag(v_string_869_) == 0)
{
lean_object* v_value_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
v_value_883_ = lean_ctor_get(v_string_869_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v_string_869_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v_string_869_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_value_883_);
lean_dec(v_string_869_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set_tag(v___x_885_, 4);
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_value_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
v___y_876_ = v___x_888_;
goto v___jp_875_;
}
}
}
else
{
lean_object* v_value_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
v_value_891_ = lean_ctor_get(v_string_869_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v_string_869_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v_string_869_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_value_891_);
lean_dec(v_string_869_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set_tag(v___x_893_, 6);
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_value_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
v___y_876_ = v___x_896_;
goto v___jp_875_;
}
}
}
v___jp_875_:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_877_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_870_);
v___x_878_ = lean_mk_empty_array_with_capacity(v___x_873_);
v___x_879_ = lean_array_push(v___x_878_, v___y_876_);
v___x_880_ = lean_array_push(v___x_879_, v___x_877_);
v___x_881_ = l_Lasm_JS_Web_Support_args(v___x_880_);
v___x_882_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_874_, v___x_881_, v___x_872_);
return v___x_882_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_byteLength___boxed(lean_object* v_string_899_, lean_object* v_encoding_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lasm_JS_Node_Buffer_byteLength(v_string_899_, v_encoding_900_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare(lean_object* v_buf1_911_, lean_object* v_buf2_912_){
_start:
{
uint8_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_914_ = 0;
v___x_915_ = lean_unsigned_to_nat(2u);
v___x_916_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_staticCompare___closed__2));
v___x_917_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_917_, 0, v_buf1_911_);
v___x_918_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_918_, 0, v_buf2_912_);
v___x_919_ = lean_mk_empty_array_with_capacity(v___x_915_);
v___x_920_ = lean_array_push(v___x_919_, v___x_917_);
v___x_921_ = lean_array_push(v___x_920_, v___x_918_);
v___x_922_ = l_Lasm_JS_Web_Support_args(v___x_921_);
v___x_923_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0(v___x_916_, v___x_922_, v___x_914_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_staticCompare___boxed(lean_object* v_buf1_924_, lean_object* v_buf2_925_, lean_object* v_a_926_){
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l_Lasm_JS_Node_Buffer_staticCompare(v_buf1_924_, v_buf2_925_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(size_t v_sz_928_, size_t v_i_929_, lean_object* v_bs_930_){
_start:
{
uint8_t v___x_931_; 
v___x_931_ = lean_usize_dec_lt(v_i_929_, v_sz_928_);
if (v___x_931_ == 0)
{
return v_bs_930_;
}
else
{
lean_object* v_v_932_; lean_object* v___x_933_; lean_object* v_bs_x27_934_; lean_object* v___x_935_; size_t v___x_936_; size_t v___x_937_; lean_object* v___x_938_; 
v_v_932_ = lean_array_uget(v_bs_930_, v_i_929_);
v___x_933_ = lean_unsigned_to_nat(0u);
v_bs_x27_934_ = lean_array_uset(v_bs_930_, v_i_929_, v___x_933_);
v___x_935_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_935_, 0, v_v_932_);
v___x_936_ = ((size_t)1ULL);
v___x_937_ = lean_usize_add(v_i_929_, v___x_936_);
v___x_938_ = lean_array_uset(v_bs_x27_934_, v_i_929_, v___x_935_);
v_i_929_ = v___x_937_;
v_bs_930_ = v___x_938_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0___boxed(lean_object* v_sz_940_, lean_object* v_i_941_, lean_object* v_bs_942_){
_start:
{
size_t v_sz_boxed_943_; size_t v_i_boxed_944_; lean_object* v_res_945_; 
v_sz_boxed_943_ = lean_unbox_usize(v_sz_940_);
lean_dec(v_sz_940_);
v_i_boxed_944_ = lean_unbox_usize(v_i_941_);
lean_dec(v_i_941_);
v_res_945_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_boxed_943_, v_i_boxed_944_, v_bs_942_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat(lean_object* v_list_954_, lean_object* v_totalLength_955_){
_start:
{
uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; size_t v_sz_960_; size_t v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_957_ = 0;
v___x_958_ = lean_unsigned_to_nat(2u);
v___x_959_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_concat___closed__2));
v_sz_960_ = lean_array_size(v_list_954_);
v___x_961_ = ((size_t)0ULL);
v___x_962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Node_Buffer_concat_spec__0(v_sz_960_, v___x_961_, v_list_954_);
v___x_963_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
v___x_964_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_compare_spec__0(v_totalLength_955_);
v___x_965_ = lean_mk_empty_array_with_capacity(v___x_958_);
v___x_966_ = lean_array_push(v___x_965_, v___x_963_);
v___x_967_ = lean_array_push(v___x_966_, v___x_964_);
v___x_968_ = l_Lasm_JS_Web_Support_args(v___x_967_);
v___x_969_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_959_, v___x_968_, v___x_957_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_concat___boxed(lean_object* v_list_970_, lean_object* v_totalLength_971_, lean_object* v_a_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lasm_JS_Node_Buffer_concat(v_list_970_, v_totalLength_971_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from(lean_object* v_string_982_, lean_object* v_encoding_983_){
_start:
{
uint8_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_985_ = 0;
v___x_986_ = lean_unsigned_to_nat(2u);
v___x_987_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_from___closed__2));
v___x_988_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_988_, 0, v_string_982_);
v___x_989_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_Buffer_toString_spec__0(v_encoding_983_);
v___x_990_ = lean_mk_empty_array_with_capacity(v___x_986_);
v___x_991_ = lean_array_push(v___x_990_, v___x_988_);
v___x_992_ = lean_array_push(v___x_991_, v___x_989_);
v___x_993_ = l_Lasm_JS_Web_Support_args(v___x_992_);
v___x_994_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_987_, v___x_993_, v___x_985_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_from___boxed(lean_object* v_string_995_, lean_object* v_encoding_996_, lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lasm_JS_Node_Buffer_from(v_string_995_, v_encoding_996_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(lean_object* v_b_999_, lean_object* v_args_1000_, uint8_t v_await_1001_){
_start:
{
uint64_t v___y_1004_; uint64_t v___y_1005_; uint64_t v___x_1048_; uint64_t v___y_1050_; 
v___x_1048_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
if (v_await_1001_ == 0)
{
uint64_t v___x_1055_; 
v___x_1055_ = 0ULL;
v___y_1050_ = v___x_1055_;
goto v___jp_1049_;
}
else
{
uint64_t v___x_1056_; 
v___x_1056_ = 2ULL;
v___y_1050_ = v___x_1056_;
goto v___jp_1049_;
}
v___jp_1003_:
{
uint64_t v_flags_1006_; uint32_t v___x_1007_; lean_object* v___x_1008_; uint32_t v___x_1009_; lean_object* v___x_1010_; 
v_flags_1006_ = lean_uint64_lor(v___y_1004_, v___y_1005_);
v___x_1007_ = 214;
v___x_1008_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_999_, v_args_1000_);
v___x_1009_ = 0;
v___x_1010_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1007_, v_flags_1006_, v___x_1008_, v___x_1009_);
lean_dec(v___x_1008_);
if (lean_obj_tag(v___x_1010_) == 0)
{
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
v___x_1012_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1011_);
lean_dec(v_a_1011_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1014_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_999_);
v___x_1015_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_Support_isInstance_spec__0_spec__1_spec__2(v___x_1014_, v_a_1013_);
lean_dec_ref(v___x_1014_);
return v___x_1015_;
}
else
{
lean_object* v_a_1016_; lean_object* v___x_1018_; uint8_t v_isShared_1019_; uint8_t v_isSharedCheck_1023_; 
v_a_1016_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1018_ = v___x_1012_;
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
else
{
lean_inc(v_a_1016_);
lean_dec(v___x_1012_);
v___x_1018_ = lean_box(0);
v_isShared_1019_ = v_isSharedCheck_1023_;
goto v_resetjp_1017_;
}
v_resetjp_1017_:
{
lean_object* v___x_1021_; 
if (v_isShared_1019_ == 0)
{
v___x_1021_ = v___x_1018_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1016_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1031_; 
v_a_1024_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1031_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1031_ == 0)
{
v___x_1026_ = v___x_1010_;
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_a_1024_);
lean_dec(v___x_1010_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1031_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1029_; 
if (v_isShared_1027_ == 0)
{
lean_ctor_set_tag(v___x_1026_, 1);
v___x_1029_ = v___x_1026_;
goto v_reusejp_1028_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v_a_1024_);
v___x_1029_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1028_;
}
v_reusejp_1028_:
{
return v___x_1029_;
}
}
}
}
else
{
lean_object* v_a_1032_; lean_object* v___x_1034_; uint8_t v_isShared_1035_; uint8_t v_isSharedCheck_1047_; 
v_a_1032_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1034_ = v___x_1010_;
v_isShared_1035_ = v_isSharedCheck_1047_;
goto v_resetjp_1033_;
}
else
{
lean_inc(v_a_1032_);
lean_dec(v___x_1010_);
v___x_1034_ = lean_box(0);
v_isShared_1035_ = v_isSharedCheck_1047_;
goto v_resetjp_1033_;
}
v_resetjp_1033_:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1036_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6_spec__7___closed__0));
v___x_1037_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_999_);
v___x_1038_ = lean_string_append(v___x_1036_, v___x_1037_);
lean_dec_ref(v___x_1037_);
v___x_1039_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_byteLength_spec__0___closed__0));
v___x_1040_ = lean_string_append(v___x_1038_, v___x_1039_);
v___x_1041_ = lean_io_error_to_string(v_a_1032_);
v___x_1042_ = lean_string_append(v___x_1040_, v___x_1041_);
lean_dec_ref(v___x_1041_);
v___x_1043_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
if (v_isShared_1035_ == 0)
{
lean_ctor_set(v___x_1034_, 0, v___x_1043_);
v___x_1045_ = v___x_1034_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1043_);
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
v___jp_1049_:
{
uint8_t v_construct_1051_; uint64_t v___x_1052_; 
v_construct_1051_ = lean_ctor_get_uint8(v_b_999_, sizeof(void*)*4);
v___x_1052_ = lean_uint64_lor(v___x_1048_, v___y_1050_);
if (v_construct_1051_ == 0)
{
uint64_t v___x_1053_; 
v___x_1053_ = 0ULL;
v___y_1004_ = v___x_1052_;
v___y_1005_ = v___x_1053_;
goto v___jp_1003_;
}
else
{
uint64_t v___x_1054_; 
v___x_1054_ = 4ULL;
v___y_1004_ = v___x_1052_;
v___y_1005_ = v___x_1054_;
goto v___jp_1003_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0___boxed(lean_object* v_b_1057_, lean_object* v_args_1058_, lean_object* v_await_1059_, lean_object* v_a_1060_){
_start:
{
uint8_t v_await_boxed_1061_; lean_object* v_res_1062_; 
v_await_boxed_1061_ = lean_unbox(v_await_1059_);
v_res_1062_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v_b_1057_, v_args_1058_, v_await_boxed_1061_);
lean_dec_ref(v_b_1057_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding(lean_object* v_encoding_1071_){
_start:
{
uint8_t v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1073_ = 0;
v___x_1074_ = lean_unsigned_to_nat(1u);
v___x_1075_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_isEncoding___closed__2));
v___x_1076_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1076_, 0, v_encoding_1071_);
v___x_1077_ = lean_mk_empty_array_with_capacity(v___x_1074_);
v___x_1078_ = lean_array_push(v___x_1077_, v___x_1076_);
v___x_1079_ = l_Lasm_JS_Web_Support_args(v___x_1078_);
v___x_1080_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1075_, v___x_1079_, v___x_1073_);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Buffer_isEncoding___boxed(lean_object* v_encoding_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lasm_JS_Node_Buffer_isEncoding(v_encoding_1081_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(lean_object* v_o_1085_, lean_object* v_key_1086_){
_start:
{
lean_object* v_k_1088_; lean_object* v___x_1089_; 
v_k_1088_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1088_, 0, v_key_1086_);
v___x_1089_ = l_Lasm_JS_Wire_encodeIO(v_k_1088_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; uint32_t v___x_1091_; uint32_t v___x_1092_; uint64_t v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v___x_1089_, 1);
v___x_1091_ = 203;
v___x_1092_ = lasm_js_value_handle(v_o_1085_);
v___x_1093_ = lean_uint64_once(&l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0, &l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0_once, _init_l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__5___closed__0);
v___x_1094_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSDOMStringOrUint8Array___lam__0___closed__0));
v___x_1095_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1095_, 0, v_o_1085_);
lean_ctor_set(v___x_1095_, 1, v___x_1094_);
v___x_1096_ = lean_unsigned_to_nat(2u);
v___x_1097_ = lean_mk_empty_array_with_capacity(v___x_1096_);
lean_inc_ref(v_k_1088_);
v___x_1098_ = lean_array_push(v___x_1097_, v_k_1088_);
v___x_1099_ = lean_array_push(v___x_1098_, v___x_1095_);
v___x_1100_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
v___x_1101_ = lasm_js_call(v___x_1091_, v___x_1092_, v___x_1093_, v_a_1090_, v___x_1100_);
lean_dec_ref_known(v___x_1100_, 1);
lean_dec(v_a_1090_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
lean_inc(v_a_1102_);
lean_dec_ref_known(v___x_1101_, 1);
v___x_1103_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___closed__0));
v___x_1104_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1088_);
v___x_1105_ = lean_string_append(v___x_1103_, v___x_1104_);
lean_dec_ref(v___x_1104_);
v___x_1106_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_call___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__2_spec__6(v___x_1105_, v_a_1102_);
lean_dec(v_a_1102_);
lean_dec_ref(v___x_1105_);
return v___x_1106_;
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1114_; 
lean_dec_ref_known(v_k_1088_, 1);
v_a_1107_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1109_ = v___x_1101_;
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1101_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1114_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
lean_object* v___x_1112_; 
if (v_isShared_1110_ == 0)
{
v___x_1112_ = v___x_1109_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec_ref_known(v_k_1088_, 1);
lean_dec(v_o_1085_);
v_a_1115_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1089_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1089_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1123_, lean_object* v_key_1124_, lean_object* v_a_1125_){
_start:
{
lean_object* v_res_1126_; 
v_res_1126_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(v_o_1123_, v_key_1124_);
return v_res_1126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(lean_object* v_module_1127_, lean_object* v_o_1128_, lean_object* v_a_1129_){
_start:
{
if (lean_obj_tag(v_a_1129_) == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec(v_o_1128_);
v___x_1131_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__3___closed__0));
v___x_1132_ = lean_string_append(v___x_1131_, v_module_1127_);
v___x_1133_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1133_, 0, v___x_1132_);
v___x_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
return v___x_1134_;
}
else
{
lean_object* v_tail_1135_; 
v_tail_1135_ = lean_ctor_get(v_a_1129_, 1);
if (lean_obj_tag(v_tail_1135_) == 0)
{
lean_object* v_head_1136_; lean_object* v___x_1137_; 
v_head_1136_ = lean_ctor_get(v_a_1129_, 0);
lean_inc(v_head_1136_);
lean_dec_ref_known(v_a_1129_, 2);
v___x_1137_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0_spec__1(v_o_1128_, v_head_1136_);
return v___x_1137_;
}
else
{
lean_object* v_head_1138_; lean_object* v___x_1139_; 
lean_inc(v_tail_1135_);
v_head_1138_ = lean_ctor_get(v_a_1129_, 0);
lean_inc(v_head_1138_);
lean_dec_ref_known(v_a_1129_, 2);
v___x_1139_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1128_, v_head_1138_);
if (lean_obj_tag(v___x_1139_) == 0)
{
lean_object* v_a_1140_; 
v_a_1140_ = lean_ctor_get(v___x_1139_, 0);
lean_inc(v_a_1140_);
lean_dec_ref_known(v___x_1139_, 1);
v_o_1128_ = v_a_1140_;
v_a_1129_ = v_tail_1135_;
goto _start;
}
else
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1149_; 
lean_dec(v_tail_1135_);
v_a_1142_ = lean_ctor_get(v___x_1139_, 0);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1149_ == 0)
{
v___x_1144_ = v___x_1139_;
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1139_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1149_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v___x_1147_; 
if (v_isShared_1145_ == 0)
{
v___x_1147_ = v___x_1144_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v_a_1142_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0___boxed(lean_object* v_module_1150_, lean_object* v_o_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_){
_start:
{
lean_object* v_res_1154_; 
v_res_1154_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(v_module_1150_, v_o_1151_, v_a_1152_);
lean_dec_ref(v_module_1150_);
return v_res_1154_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(lean_object* v_module_1155_, lean_object* v_path_1156_){
_start:
{
lean_object* v___x_1158_; 
lean_inc_ref(v_module_1155_);
v___x_1158_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_Support_callOnBytes___at___00Lasm_JS_Node_Buffer_compare_spec__1_spec__1_spec__2(v_module_1155_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1160_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref_known(v___x_1158_, 1);
v___x_1160_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0_spec__0(v_module_1155_, v_a_1159_, v_path_1156_);
lean_dec_ref(v_module_1155_);
return v___x_1160_;
}
else
{
lean_object* v_a_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1168_; 
lean_dec(v_path_1156_);
lean_dec_ref(v_module_1155_);
v_a_1161_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1163_ = v___x_1158_;
v_isShared_1164_ = v_isSharedCheck_1168_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_a_1161_);
lean_dec(v___x_1158_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0___boxed(lean_object* v_module_1169_, lean_object* v_path_1170_, lean_object* v_a_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v_module_1169_, v_path_1170_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength(){
_start:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_1179_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kMaxLength___closed__1));
v___x_1180_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v___x_1178_, v___x_1179_);
return v___x_1180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kMaxLength___boxed(lean_object* v_a_1181_){
_start:
{
lean_object* v_res_1182_; 
v_res_1182_ = l_Lasm_JS_Node_buffer_kMaxLength();
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength(){
_start:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; 
v___x_1188_ = ((lean_object*)(l_Lasm_JS_Node_Buffer_compare___closed__0));
v___x_1189_ = ((lean_object*)(l_Lasm_JS_Node_buffer_kStringMaxLength___closed__1));
v___x_1190_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_buffer_kMaxLength_spec__0(v___x_1188_, v___x_1189_);
return v___x_1190_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_kStringMaxLength___boxed(lean_object* v_a_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lasm_JS_Node_buffer_kStringMaxLength();
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii(lean_object* v_input_1201_){
_start:
{
uint8_t v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1203_ = 0;
v___x_1204_ = lean_unsigned_to_nat(1u);
v___x_1205_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isAscii___closed__2));
v___x_1206_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1206_, 0, v_input_1201_);
v___x_1207_ = lean_mk_empty_array_with_capacity(v___x_1204_);
v___x_1208_ = lean_array_push(v___x_1207_, v___x_1206_);
v___x_1209_ = l_Lasm_JS_Web_Support_args(v___x_1208_);
v___x_1210_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1205_, v___x_1209_, v___x_1203_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isAscii___boxed(lean_object* v_input_1211_, lean_object* v_a_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lasm_JS_Node_buffer_isAscii(v_input_1211_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8(lean_object* v_input_1222_){
_start:
{
uint8_t v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1224_ = 0;
v___x_1225_ = lean_unsigned_to_nat(1u);
v___x_1226_ = ((lean_object*)(l_Lasm_JS_Node_buffer_isUtf8___closed__2));
v___x_1227_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1227_, 0, v_input_1222_);
v___x_1228_ = lean_mk_empty_array_with_capacity(v___x_1225_);
v___x_1229_ = lean_array_push(v___x_1228_, v___x_1227_);
v___x_1230_ = l_Lasm_JS_Web_Support_args(v___x_1229_);
v___x_1231_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Buffer_isEncoding_spec__0(v___x_1226_, v___x_1230_, v___x_1224_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_isUtf8___boxed(lean_object* v_input_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l_Lasm_JS_Node_buffer_isUtf8(v_input_1232_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode(lean_object* v_source_1243_, lean_object* v_fromEnc_1244_, lean_object* v_toEnc_1245_){
_start:
{
uint8_t v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1247_ = 0;
v___x_1248_ = lean_unsigned_to_nat(3u);
v___x_1249_ = ((lean_object*)(l_Lasm_JS_Node_buffer_transcode___closed__2));
v___x_1250_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v___x_1250_, 0, v_source_1243_);
v___x_1251_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1251_, 0, v_fromEnc_1244_);
v___x_1252_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1252_, 0, v_toEnc_1245_);
v___x_1253_ = lean_mk_empty_array_with_capacity(v___x_1248_);
v___x_1254_ = lean_array_push(v___x_1253_, v___x_1250_);
v___x_1255_ = lean_array_push(v___x_1254_, v___x_1251_);
v___x_1256_ = lean_array_push(v___x_1255_, v___x_1252_);
v___x_1257_ = l_Lasm_JS_Web_Support_args(v___x_1256_);
v___x_1258_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_arrayBufferBytes_spec__0(v___x_1249_, v___x_1257_, v___x_1247_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_buffer_transcode___boxed(lean_object* v_source_1259_, lean_object* v_fromEnc_1260_, lean_object* v_toEnc_1261_, lean_object* v_a_1262_){
_start:
{
lean_object* v_res_1263_; 
v_res_1263_ = l_Lasm_JS_Node_buffer_transcode(v_source_1259_, v_fromEnc_1260_, v_toEnc_1261_);
return v_res_1263_;
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
