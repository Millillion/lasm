// Lean compiler output
// Module: Lasm.JS.Node.Process
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(uint32_t, uint32_t, uint64_t, lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instToJSLongLongOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.LongLongOrDOMString"};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__0_value),((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2 = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString = (const lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instToJSDOMStringOrDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0 = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble = (const lean_object*)&l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0;
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Node: empty path in "};
static const lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "require "};
static const lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_arch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "node:process"};
static const lean_object* l_Lasm_JS_Node_process_arch___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_arch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "arch"};
static const lean_object* l_Lasm_JS_Node_process_arch___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_arch___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_arch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_arch___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_arch___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_arch___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch___boxed(lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Array (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "an element is not String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_argv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "argv"};
static const lean_object* l_Lasm_JS_Node_process_argv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_argv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_argv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_argv___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_argv___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_argv___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a two-element array"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 25, .m_data = "Array ((String × String))"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 35, .m_data = "an element is not (String × String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lasm.JS.Node.Support.recordOf"};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Object.entries"};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__0_value),((lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__1_value),((lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_env___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "env"};
static const lean_object* l_Lasm_JS_Node_process_env___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_env___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_env___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_env___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_env___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_env___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_execArgv___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execArgv"};
static const lean_object* l_Lasm_JS_Node_process_execArgv___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_execArgv___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_execArgv___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_execArgv___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_execPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "execPath"};
static const lean_object* l_Lasm_JS_Node_process_execPath___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_execPath___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_execPath___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_execPath___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_execPath___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_execPath___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Option (Lasm.JS.Node.LongLongOrDOMString)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_exitCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exitCode"};
static const lean_object* l_Lasm_JS_Node_process_exitCode___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_exitCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_exitCode___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_exitCode___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_pid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pid"};
static const lean_object* l_Lasm_JS_Node_process_pid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_pid___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_pid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_pid___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_pid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_pid___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_platform___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "platform"};
static const lean_object* l_Lasm_JS_Node_process_platform___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_platform___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_platform___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_platform___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_platform___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_platform___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_ppid___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ppid"};
static const lean_object* l_Lasm_JS_Node_process_ppid___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_ppid___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_ppid___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_ppid___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_ppid___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_ppid___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_title___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* l_Lasm_JS_Node_process_title___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_title___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_title___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_title___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_title___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_title___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_version___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "version"};
static const lean_object* l_Lasm_JS_Node_process_version___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_version___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_version___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_version___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_version___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_version___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_versions___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "versions"};
static const lean_object* l_Lasm_JS_Node_process_versions___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_versions___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Node_process_versions___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_versions___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Node_process_versions___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_versions___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_chdir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Node.process.chdir"};
static const lean_object* l_Lasm_JS_Node_process_chdir___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_chdir___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_chdir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "chdir"};
static const lean_object* l_Lasm_JS_Node_process_chdir___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_chdir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_chdir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_chdir___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_chdir___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_chdir___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_chdir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_cwd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Node.process.cwd"};
static const lean_object* l_Lasm_JS_Node_process_cwd___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_cwd___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_cwd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cwd"};
static const lean_object* l_Lasm_JS_Node_process_cwd___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_cwd___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_cwd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_cwd___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_cwd___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_cwd___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_cwd___closed__2_value;
static const lean_array_object l_Lasm_JS_Node_process_cwd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Node_process_cwd___closed__3 = (const lean_object*)&l_Lasm_JS_Node_process_cwd___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Node_process_cwd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Node_process_cwd___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_exit_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_exit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.process.exit"};
static const lean_object* l_Lasm_JS_Node_process_exit___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_exit___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_exit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* l_Lasm_JS_Node_process_exit___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_exit___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_exit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_exit___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_exit___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_exit___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_exit___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_kill___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Node.process.kill"};
static const lean_object* l_Lasm_JS_Node_process_kill___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_kill___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_kill___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kill"};
static const lean_object* l_Lasm_JS_Node_process_kill___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_kill___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_kill___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_kill___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_kill___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_kill___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_kill___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill(double, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_memoryUsage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lasm.JS.Node.process.memoryUsage"};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_memoryUsage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "memoryUsage"};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_memoryUsage___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_memoryUsage___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_memoryUsage___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Node_process_uptime___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Node.process.uptime"};
static const lean_object* l_Lasm_JS_Node_process_uptime___closed__0 = (const lean_object*)&l_Lasm_JS_Node_process_uptime___closed__0_value;
static const lean_string_object l_Lasm_JS_Node_process_uptime___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "uptime"};
static const lean_object* l_Lasm_JS_Node_process_uptime___closed__1 = (const lean_object*)&l_Lasm_JS_Node_process_uptime___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Node_process_uptime___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Node_process_uptime___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_arch___closed__0_value),((lean_object*)&l_Lasm_JS_Node_process_uptime___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Node_process_uptime___closed__2 = (const lean_object*)&l_Lasm_JS_Node_process_uptime___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime();
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
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
lean_dec_ref_known(v_t_5_, 1);
v___x_10_ = lean_apply_1(v_k_6_, v_value_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object* v_t_23_, lean_object* v_longLong_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_23_, v_longLong_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_longLong_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_27_, v_longLong_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object* v_t_31_, lean_object* v_domString_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_31_, v_domString_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_domString_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_35_, v_domString_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object* v_x_39_){
_start:
{
if (lean_obj_tag(v_x_39_) == 0)
{
lean_object* v_value_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_52_; 
v_value_40_ = lean_ctor_get(v_x_39_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v_x_39_);
if (v_isSharedCheck_52_ == 0)
{
v___x_42_ = v_x_39_;
v_isShared_43_ = v_isSharedCheck_52_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_value_40_);
lean_dec(v_x_39_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_52_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_44_ = lean_nat_abs(v_value_40_);
v___x_45_ = lean_cstr_to_nat("9007199254740991");
v___x_46_ = lean_nat_dec_le(v___x_44_, v___x_45_);
lean_dec(v___x_44_);
if (v___x_46_ == 0)
{
lean_object* v___x_48_; 
if (v_isShared_43_ == 0)
{
lean_ctor_set_tag(v___x_42_, 5);
v___x_48_ = v___x_42_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v_value_40_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
else
{
double v___x_50_; lean_object* v___x_51_; 
lean_del_object(v___x_42_);
v___x_50_ = l_Float_ofInt(v_value_40_);
lean_dec(v_value_40_);
v___x_51_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_51_, 0, v___x_50_);
return v___x_51_;
}
}
}
else
{
lean_object* v_value_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_60_; 
v_value_53_ = lean_ctor_get(v_x_39_, 0);
v_isSharedCheck_60_ = !lean_is_exclusive(v_x_39_);
if (v_isSharedCheck_60_ == 0)
{
v___x_55_ = v_x_39_;
v_isShared_56_ = v_isSharedCheck_60_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_value_53_);
lean_dec(v_x_39_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_60_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
lean_object* v___x_58_; 
if (v_isShared_56_ == 0)
{
lean_ctor_set_tag(v___x_55_, 4);
v___x_58_ = v___x_55_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v_value_53_);
v___x_58_ = v_reuseFailAlloc_59_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
return v___x_58_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object* v_value_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_64_, 0, v_value_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object* v_value_67_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_68_, 0, v_value_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object* v_x_77_){
_start:
{
switch(lean_obj_tag(v_x_77_))
{
case 3:
{
double v_n_78_; lean_object* v___x_79_; 
v_n_78_ = lean_ctor_get_float(v_x_77_, 0);
lean_dec_ref_known(v_x_77_, 0);
v___x_79_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_78_);
if (lean_obj_tag(v___x_79_) == 0)
{
lean_object* v___x_80_; 
v___x_80_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1));
return v___x_80_;
}
else
{
lean_object* v_val_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_89_; 
v_val_81_ = lean_ctor_get(v___x_79_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_79_);
if (v_isSharedCheck_89_ == 0)
{
v___x_83_ = v___x_79_;
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_val_81_);
lean_dec(v___x_79_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
lean_ctor_set_tag(v___x_83_, 0);
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_val_81_);
v___x_86_ = v_reuseFailAlloc_88_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
lean_object* v___x_87_; 
v___x_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_87_, 0, v___x_86_);
return v___x_87_;
}
}
}
}
case 4:
{
lean_object* v_s_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_98_; 
v_s_90_ = lean_ctor_get(v_x_77_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v_x_77_);
if (v_isSharedCheck_98_ == 0)
{
v___x_92_ = v_x_77_;
v_isShared_93_ = v_isSharedCheck_98_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_s_90_);
lean_dec(v_x_77_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_98_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_95_; 
if (v_isShared_93_ == 0)
{
lean_ctor_set_tag(v___x_92_, 1);
v___x_95_ = v___x_92_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_s_90_);
v___x_95_ = v_reuseFailAlloc_97_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; 
v___x_96_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
return v___x_96_;
}
}
}
default: 
{
lean_object* v___x_99_; 
lean_dec(v_x_77_);
v___x_99_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__3));
return v___x_99_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___impl(lean_object* v_x_107_){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = lean_obj_tag_nat(v_x_107_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___impl___boxed(lean_object* v_x_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___impl(v_x_109_);
lean_dec_ref(v_x_109_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object* v_t_111_, lean_object* v_k_112_){
_start:
{
if (lean_obj_tag(v_t_111_) == 0)
{
lean_object* v_value_113_; lean_object* v___x_114_; 
v_value_113_ = lean_ctor_get(v_t_111_, 0);
lean_inc_ref(v_value_113_);
lean_dec_ref_known(v_t_111_, 1);
v___x_114_ = lean_apply_1(v_k_112_, v_value_113_);
return v___x_114_;
}
else
{
double v_value_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v_value_115_ = lean_ctor_get_float(v_t_111_, 0);
lean_dec_ref_known(v_t_111_, 0);
v___x_116_ = lean_box_float(v_value_115_);
v___x_117_ = lean_apply_1(v_k_112_, v___x_116_);
return v___x_117_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object* v_motive_118_, lean_object* v_ctorIdx_119_, lean_object* v_t_120_, lean_object* v_h_121_, lean_object* v_k_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_120_, v_k_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object* v_motive_124_, lean_object* v_ctorIdx_125_, lean_object* v_t_126_, lean_object* v_h_127_, lean_object* v_k_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(v_motive_124_, v_ctorIdx_125_, v_t_126_, v_h_127_, v_k_128_);
lean_dec(v_ctorIdx_125_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object* v_t_130_, lean_object* v_domString_131_){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_130_, v_domString_131_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object* v_motive_133_, lean_object* v_t_134_, lean_object* v_h_135_, lean_object* v_domString_136_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_134_, v_domString_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object* v_t_138_, lean_object* v_double_139_){
_start:
{
lean_object* v___x_140_; 
v___x_140_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_138_, v_double_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object* v_motive_141_, lean_object* v_t_142_, lean_object* v_h_143_, lean_object* v_double_144_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_142_, v_double_144_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object* v_x_146_){
_start:
{
if (lean_obj_tag(v_x_146_) == 0)
{
lean_object* v_value_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
v_value_147_ = lean_ctor_get(v_x_146_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v_x_146_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v_x_146_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_value_147_);
lean_dec(v_x_146_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
lean_ctor_set_tag(v___x_149_, 4);
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_value_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
else
{
double v_value_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
v_value_155_ = lean_ctor_get_float(v_x_146_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v_x_146_);
if (v_isSharedCheck_162_ == 0)
{
v___x_157_ = v_x_146_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_dec(v_x_146_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
lean_ctor_set_tag(v___x_157_, 3);
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_161_, 0, v_value_155_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object* v_value_165_){
_start:
{
lean_object* v___x_166_; 
v___x_166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_166_, 0, v_value_165_);
return v___x_166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double v_value_169_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_170_, 0, v_value_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object* v_value_171_){
_start:
{
double v_value_boxed_172_; lean_object* v_res_173_; 
v_value_boxed_172_ = lean_unbox_float(v_value_171_);
lean_dec_ref(v_value_171_);
v_res_173_ = l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(v_value_boxed_172_);
return v_res_173_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7(void){
_start:
{
lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_183_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___x_184_ = lean_unsigned_to_nat(46u);
v___x_185_ = lean_unsigned_to_nat(193u);
v___x_186_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5));
v___x_187_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4));
v___x_188_ = l_mkPanicMessageWithDecl(v___x_187_, v___x_186_, v___x_185_, v___x_184_, v___x_183_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_context_190_, lean_object* v_d_191_){
_start:
{
lean_object* v_received_194_; 
if (lean_obj_tag(v_d_191_) == 4)
{
lean_object* v_s_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_215_; 
v_s_208_ = lean_ctor_get(v_d_191_, 0);
v_isSharedCheck_215_ = !lean_is_exclusive(v_d_191_);
if (v_isSharedCheck_215_ == 0)
{
v___x_210_ = v_d_191_;
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_s_208_);
lean_dec(v_d_191_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_215_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_213_; 
if (v_isShared_211_ == 0)
{
lean_ctor_set_tag(v___x_210_, 0);
v___x_213_ = v___x_210_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_s_208_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
else
{
if (lean_obj_tag(v_d_191_) == 9)
{
lean_object* v_value_216_; lean_object* v_description_217_; lean_object* v___x_218_; uint8_t v___x_219_; 
v_value_216_ = lean_ctor_get(v_d_191_, 0);
v_description_217_ = lean_ctor_get(v_d_191_, 1);
v___x_218_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_219_ = lean_string_dec_eq(v_description_217_, v___x_218_);
if (v___x_219_ == 0)
{
goto v___jp_206_;
}
else
{
uint32_t v___x_220_; uint64_t v___x_221_; lean_object* v___x_222_; uint32_t v___x_223_; lean_object* v___x_224_; 
lean_inc_n(v_value_216_, 2);
lean_dec_ref_known(v_d_191_, 2);
v___x_220_ = 206;
v___x_221_ = 0ULL;
v___x_222_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_222_, 0, v_value_216_);
lean_ctor_set(v___x_222_, 1, v___x_218_);
v___x_223_ = lasm_js_value_handle(v_value_216_);
lean_dec(v_value_216_);
v___x_224_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_220_, v___x_221_, v___x_222_, v___x_223_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; uint8_t v___x_226_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
lean_inc(v_a_225_);
lean_dec_ref_known(v___x_224_, 1);
v___x_226_ = lean_string_validate_utf8(v_a_225_);
if (v___x_226_ == 0)
{
lean_object* v___x_227_; lean_object* v___x_228_; 
lean_dec(v_a_225_);
v___x_227_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7);
v___x_228_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_227_);
v_received_194_ = v___x_228_;
goto v___jp_193_;
}
else
{
lean_object* v___x_229_; 
v___x_229_ = lean_string_from_utf8_unchecked(v_a_225_);
v_received_194_ = v___x_229_;
goto v___jp_193_;
}
}
else
{
lean_object* v___x_230_; 
lean_dec_ref_known(v___x_224_, 1);
v___x_230_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v_received_194_ = v___x_230_;
goto v___jp_193_;
}
}
}
else
{
goto v___jp_206_;
}
}
v___jp_193_:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_196_ = lean_string_append(v___x_195_, v_context_190_);
v___x_197_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
v___x_199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
v___x_201_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
v___x_203_ = lean_string_append(v___x_202_, v_received_194_);
lean_dec_ref(v_received_194_);
v___x_204_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_204_, 0, v___x_203_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
return v___x_205_;
}
v___jp_206_:
{
lean_object* v___x_207_; 
v___x_207_ = l_Lasm_JS_Data_describe(v_d_191_);
v_received_194_ = v___x_207_;
goto v___jp_193_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_context_231_, lean_object* v_d_232_, lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_231_, v_d_232_);
lean_dec_ref(v_context_231_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_235_, lean_object* v_bytes_236_){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_236_);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; lean_object* v___x_240_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_a_239_);
lean_dec_ref_known(v___x_238_, 1);
v___x_240_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_235_, v_a_239_);
return v___x_240_;
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_248_; 
v_a_241_ = lean_ctor_get(v___x_238_, 0);
v_isSharedCheck_248_ = !lean_is_exclusive(v___x_238_);
if (v_isSharedCheck_248_ == 0)
{
v___x_243_ = v___x_238_;
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_238_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_248_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_246_; 
if (v_isShared_244_ == 0)
{
v___x_246_ = v___x_243_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_a_241_);
v___x_246_ = v_reuseFailAlloc_247_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
return v___x_246_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_249_, lean_object* v_bytes_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3(v_context_249_, v_bytes_250_);
lean_dec_ref(v_bytes_250_);
lean_dec_ref(v_context_249_);
return v_res_252_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_253_; uint64_t v___x_254_; 
v___x_253_ = 0;
v___x_254_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2(lean_object* v_o_256_, lean_object* v_key_257_){
_start:
{
lean_object* v_k_259_; lean_object* v___x_260_; 
v_k_259_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_259_, 0, v_key_257_);
lean_inc_ref(v_k_259_);
v___x_260_ = l_Lasm_JS_Wire_encodeIO(v_k_259_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; uint32_t v___x_262_; uint32_t v___x_263_; uint64_t v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
lean_inc(v_a_261_);
lean_dec_ref_known(v___x_260_, 1);
v___x_262_ = 203;
v___x_263_ = lasm_js_value_handle(v_o_256_);
v___x_264_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_265_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_266_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_266_, 0, v_o_256_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = lean_unsigned_to_nat(2u);
v___x_268_ = lean_mk_empty_array_with_capacity(v___x_267_);
lean_inc_ref(v_k_259_);
v___x_269_ = lean_array_push(v___x_268_, v_k_259_);
v___x_270_ = lean_array_push(v___x_269_, v___x_266_);
v___x_271_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
v___x_272_ = lasm_js_call(v___x_262_, v___x_263_, v___x_264_, v_a_261_, v___x_271_);
lean_dec_ref_known(v___x_271_, 1);
lean_dec(v_a_261_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc(v_a_273_);
lean_dec_ref_known(v___x_272_, 1);
v___x_274_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_275_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_259_);
v___x_276_ = lean_string_append(v___x_274_, v___x_275_);
lean_dec_ref(v___x_275_);
v___x_277_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3(v___x_276_, v_a_273_);
lean_dec(v_a_273_);
lean_dec_ref(v___x_276_);
return v___x_277_;
}
else
{
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec_ref_known(v_k_259_, 1);
v_a_278_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_272_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_272_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
lean_dec_ref_known(v_k_259_, 1);
lean_dec(v_o_256_);
v_a_286_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_260_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_260_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___boxed(lean_object* v_o_294_, lean_object* v_key_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2(v_o_294_, v_key_295_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1(lean_object* v_module_299_, lean_object* v_o_300_, lean_object* v_a_301_){
_start:
{
if (lean_obj_tag(v_a_301_) == 0)
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
lean_dec(v_o_300_);
v___x_303_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_304_ = lean_string_append(v___x_303_, v_module_299_);
v___x_305_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
v___x_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
return v___x_306_;
}
else
{
lean_object* v_tail_307_; 
v_tail_307_ = lean_ctor_get(v_a_301_, 1);
if (lean_obj_tag(v_tail_307_) == 0)
{
lean_object* v_head_308_; lean_object* v___x_309_; 
v_head_308_ = lean_ctor_get(v_a_301_, 0);
lean_inc(v_head_308_);
lean_dec_ref_known(v_a_301_, 2);
v___x_309_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2(v_o_300_, v_head_308_);
return v___x_309_;
}
else
{
lean_object* v_head_310_; lean_object* v___x_311_; 
lean_inc(v_tail_307_);
v_head_310_ = lean_ctor_get(v_a_301_, 0);
lean_inc(v_head_310_);
lean_dec_ref_known(v_a_301_, 2);
v___x_311_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_300_, v_head_310_);
if (lean_obj_tag(v___x_311_) == 0)
{
lean_object* v_a_312_; 
v_a_312_ = lean_ctor_get(v___x_311_, 0);
lean_inc(v_a_312_);
lean_dec_ref_known(v___x_311_, 1);
v_o_300_ = v_a_312_;
v_a_301_ = v_tail_307_;
goto _start;
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec(v_tail_307_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___boxed(lean_object* v_module_322_, lean_object* v_o_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1(v_module_322_, v_o_323_, v_a_324_);
lean_dec_ref(v_module_322_);
return v_res_326_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_327_; uint64_t v___x_328_; 
v___x_327_ = 1;
v___x_328_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(lean_object* v_specifier_330_){
_start:
{
uint32_t v___x_332_; uint32_t v___x_333_; uint64_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_332_ = 201;
v___x_333_ = 0;
v___x_334_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0);
lean_inc_ref(v_specifier_330_);
v___x_335_ = lean_string_to_utf8(v_specifier_330_);
v___x_336_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_332_, v___x_333_, v___x_334_, v___x_335_);
lean_dec_ref(v___x_335_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
lean_inc(v_a_337_);
lean_dec_ref_known(v___x_336_, 1);
v___x_338_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__1));
v___x_339_ = l_String_quote(v_specifier_330_);
v___x_340_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
v___x_341_ = lean_unsigned_to_nat(120u);
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = l_Std_Format_pretty(v___x_340_, v___x_341_, v___x_342_, v___x_342_);
v___x_344_ = lean_string_append(v___x_338_, v___x_343_);
lean_dec_ref(v___x_343_);
v___x_345_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_344_, v_a_337_);
lean_dec(v_a_337_);
lean_dec_ref(v___x_344_);
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_specifier_330_);
v_a_346_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_336_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_336_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___boxed(lean_object* v_specifier_354_, lean_object* v_a_355_){
_start:
{
lean_object* v_res_356_; 
v_res_356_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_specifier_354_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(lean_object* v_module_357_, lean_object* v_path_358_){
_start:
{
lean_object* v___x_360_; 
lean_inc_ref(v_module_357_);
v___x_360_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_357_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v_a_361_; lean_object* v___x_362_; 
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref_known(v___x_360_, 1);
v___x_362_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1(v_module_357_, v_a_361_, v_path_358_);
lean_dec_ref(v_module_357_);
return v___x_362_;
}
else
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_370_; 
lean_dec(v_path_358_);
lean_dec_ref(v_module_357_);
v_a_363_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_370_ == 0)
{
v___x_365_ = v___x_360_;
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_360_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_370_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_368_; 
if (v_isShared_366_ == 0)
{
v___x_368_ = v___x_365_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_363_);
v___x_368_ = v_reuseFailAlloc_369_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
return v___x_368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0___boxed(lean_object* v_module_371_, lean_object* v_path_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v_module_371_, v_path_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch(){
_start:
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_381_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_382_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__2));
v___x_383_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_381_, v___x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch___boxed(lean_object* v_a_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lasm_JS_Node_process_arch();
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(size_t v_sz_388_, size_t v_i_389_, lean_object* v_bs_390_){
_start:
{
uint8_t v___x_391_; 
v___x_391_ = lean_usize_dec_lt(v_i_389_, v_sz_388_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; 
v___x_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_392_, 0, v_bs_390_);
return v___x_392_;
}
else
{
lean_object* v_v_393_; 
v_v_393_ = lean_array_uget_borrowed(v_bs_390_, v_i_389_);
if (lean_obj_tag(v_v_393_) == 4)
{
lean_object* v_s_394_; lean_object* v___x_395_; lean_object* v_bs_x27_396_; size_t v___x_397_; size_t v___x_398_; lean_object* v___x_399_; 
v_s_394_ = lean_ctor_get(v_v_393_, 0);
lean_inc_ref(v_s_394_);
v___x_395_ = lean_unsigned_to_nat(0u);
v_bs_x27_396_ = lean_array_uset(v_bs_390_, v_i_389_, v___x_395_);
v___x_397_ = ((size_t)1ULL);
v___x_398_ = lean_usize_add(v_i_389_, v___x_397_);
v___x_399_ = lean_array_uset(v_bs_x27_396_, v_i_389_, v_s_394_);
v_i_389_ = v___x_398_;
v_bs_390_ = v___x_399_;
goto _start;
}
else
{
lean_object* v___x_401_; 
lean_dec_ref(v_bs_390_);
v___x_401_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_401_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_402_, lean_object* v_i_403_, lean_object* v_bs_404_){
_start:
{
size_t v_sz_boxed_405_; size_t v_i_boxed_406_; lean_object* v_res_407_; 
v_sz_boxed_405_ = lean_unbox_usize(v_sz_402_);
lean_dec(v_sz_402_);
v_i_boxed_406_ = lean_unbox_usize(v_i_403_);
lean_dec(v_i_403_);
v_res_407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_405_, v_i_boxed_406_, v_bs_404_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_413_, lean_object* v_d_414_){
_start:
{
lean_object* v___y_417_; lean_object* v___y_418_; lean_object* v___y_423_; lean_object* v_received_424_; lean_object* v___y_443_; lean_object* v_a_446_; 
if (lean_obj_tag(v_d_414_) == 7)
{
lean_object* v_items_470_; size_t v_sz_471_; size_t v___x_472_; lean_object* v___x_473_; 
v_items_470_ = lean_ctor_get(v_d_414_, 0);
v_sz_471_ = lean_array_size(v_items_470_);
v___x_472_ = ((size_t)0ULL);
lean_inc_ref(v_items_470_);
v___x_473_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_sz_471_, v___x_472_, v_items_470_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; uint8_t v___x_478_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_a_474_);
lean_dec_ref_known(v___x_473_, 1);
v___x_475_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_476_ = lean_string_utf8_byte_size(v_a_474_);
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = lean_nat_dec_eq(v___x_476_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_480_ = lean_string_append(v___x_479_, v_a_474_);
lean_dec(v_a_474_);
v___x_481_ = lean_string_append(v___x_475_, v___x_480_);
lean_dec_ref(v___x_480_);
v_a_446_ = v___x_481_;
goto v___jp_445_;
}
else
{
lean_dec(v_a_474_);
v_a_446_ = v___x_475_;
goto v___jp_445_;
}
}
else
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
lean_dec_ref_known(v_d_414_, 1);
v_a_482_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_473_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_473_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 0);
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
}
else
{
lean_object* v___x_490_; 
v___x_490_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_446_ = v___x_490_;
goto v___jp_445_;
}
v___jp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_string_append(v___y_417_, v___y_418_);
lean_dec_ref(v___y_418_);
v___x_420_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_420_, 0, v___x_419_);
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
return v___x_421_;
}
v___jp_422_:
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v___x_425_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_426_ = lean_string_append(v___x_425_, v_context_413_);
v___x_427_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_428_ = lean_string_append(v___x_426_, v___x_427_);
v___x_429_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_430_ = lean_string_append(v___x_428_, v___x_429_);
v___x_431_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_432_ = lean_string_append(v___x_430_, v___x_431_);
v___x_433_ = lean_string_append(v___x_432_, v_received_424_);
lean_dec_ref(v_received_424_);
v___x_434_ = lean_string_utf8_byte_size(v___y_423_);
v___x_435_ = lean_unsigned_to_nat(0u);
v___x_436_ = lean_nat_dec_eq(v___x_434_, v___x_435_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_437_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_438_ = lean_string_append(v___x_437_, v___y_423_);
lean_dec_ref(v___y_423_);
v___x_439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_440_ = lean_string_append(v___x_438_, v___x_439_);
v___y_417_ = v___x_433_;
v___y_418_ = v___x_440_;
goto v___jp_416_;
}
else
{
lean_object* v___x_441_; 
lean_dec_ref(v___y_423_);
v___x_441_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_417_ = v___x_433_;
v___y_418_ = v___x_441_;
goto v___jp_416_;
}
}
v___jp_442_:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lasm_JS_Data_describe(v_d_414_);
v___y_423_ = v___y_443_;
v_received_424_ = v___x_444_;
goto v___jp_422_;
}
v___jp_445_:
{
if (lean_obj_tag(v_d_414_) == 9)
{
lean_object* v_value_447_; lean_object* v_description_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v_value_447_ = lean_ctor_get(v_d_414_, 0);
v_description_448_ = lean_ctor_get(v_d_414_, 1);
v___x_449_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_450_ = lean_string_dec_eq(v_description_448_, v___x_449_);
if (v___x_450_ == 0)
{
v___y_443_ = v_a_446_;
goto v___jp_442_;
}
else
{
lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_467_; 
lean_inc(v_value_447_);
v_isSharedCheck_467_ = !lean_is_exclusive(v_d_414_);
if (v_isSharedCheck_467_ == 0)
{
lean_object* v_unused_468_; lean_object* v_unused_469_; 
v_unused_468_ = lean_ctor_get(v_d_414_, 1);
lean_dec(v_unused_468_);
v_unused_469_ = lean_ctor_get(v_d_414_, 0);
lean_dec(v_unused_469_);
v___x_452_ = v_d_414_;
v_isShared_453_ = v_isSharedCheck_467_;
goto v_resetjp_451_;
}
else
{
lean_dec(v_d_414_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_467_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
uint32_t v___x_454_; uint64_t v___x_455_; lean_object* v___x_457_; 
v___x_454_ = 206;
v___x_455_ = 0ULL;
lean_inc(v_value_447_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 1, v___x_449_);
v___x_457_ = v___x_452_;
goto v_reusejp_456_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_value_447_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v___x_449_);
v___x_457_ = v_reuseFailAlloc_466_;
goto v_reusejp_456_;
}
v_reusejp_456_:
{
uint32_t v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lasm_js_value_handle(v_value_447_);
lean_dec(v_value_447_);
v___x_459_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_454_, v___x_455_, v___x_457_, v___x_458_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; uint8_t v___x_461_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_a_460_);
lean_dec_ref_known(v___x_459_, 1);
v___x_461_ = lean_string_validate_utf8(v_a_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_462_; lean_object* v___x_463_; 
lean_dec(v_a_460_);
v___x_462_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7);
v___x_463_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_462_);
v___y_423_ = v_a_446_;
v_received_424_ = v___x_463_;
goto v___jp_422_;
}
else
{
lean_object* v___x_464_; 
v___x_464_ = lean_string_from_utf8_unchecked(v_a_460_);
v___y_423_ = v_a_446_;
v_received_424_ = v___x_464_;
goto v___jp_422_;
}
}
else
{
lean_object* v___x_465_; 
lean_dec_ref_known(v___x_459_, 1);
v___x_465_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v___y_423_ = v_a_446_;
v_received_424_ = v___x_465_;
goto v___jp_422_;
}
}
}
}
}
else
{
v___y_443_ = v_a_446_;
goto v___jp_442_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_491_, lean_object* v_d_492_, lean_object* v_a_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_491_, v_d_492_);
lean_dec_ref(v_context_491_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_495_, lean_object* v_bytes_496_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_496_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_500_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_a_499_);
lean_dec_ref_known(v___x_498_, 1);
v___x_500_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_495_, v_a_499_);
return v___x_500_;
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
v_a_501_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_498_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_498_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_509_, lean_object* v_bytes_510_, lean_object* v_a_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2(v_context_509_, v_bytes_510_);
lean_dec_ref(v_bytes_510_);
lean_dec_ref(v_context_509_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1(lean_object* v_o_513_, lean_object* v_key_514_){
_start:
{
lean_object* v_k_516_; lean_object* v___x_517_; 
v_k_516_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_516_, 0, v_key_514_);
lean_inc_ref(v_k_516_);
v___x_517_ = l_Lasm_JS_Wire_encodeIO(v_k_516_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; uint32_t v___x_519_; uint32_t v___x_520_; uint64_t v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_518_);
lean_dec_ref_known(v___x_517_, 1);
v___x_519_ = 203;
v___x_520_ = lasm_js_value_handle(v_o_513_);
v___x_521_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_522_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_523_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_523_, 0, v_o_513_);
lean_ctor_set(v___x_523_, 1, v___x_522_);
v___x_524_ = lean_unsigned_to_nat(2u);
v___x_525_ = lean_mk_empty_array_with_capacity(v___x_524_);
lean_inc_ref(v_k_516_);
v___x_526_ = lean_array_push(v___x_525_, v_k_516_);
v___x_527_ = lean_array_push(v___x_526_, v___x_523_);
v___x_528_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_528_, 0, v___x_527_);
v___x_529_ = lasm_js_call(v___x_519_, v___x_520_, v___x_521_, v_a_518_, v___x_528_);
lean_dec_ref_known(v___x_528_, 1);
lean_dec(v_a_518_);
if (lean_obj_tag(v___x_529_) == 0)
{
lean_object* v_a_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v_a_530_ = lean_ctor_get(v___x_529_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_529_, 1);
v___x_531_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_532_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_516_);
v___x_533_ = lean_string_append(v___x_531_, v___x_532_);
lean_dec_ref(v___x_532_);
v___x_534_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2(v___x_533_, v_a_530_);
lean_dec(v_a_530_);
lean_dec_ref(v___x_533_);
return v___x_534_;
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
lean_dec_ref_known(v_k_516_, 1);
v_a_535_ = lean_ctor_get(v___x_529_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_529_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_529_);
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
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
lean_dec_ref_known(v_k_516_, 1);
lean_dec(v_o_513_);
v_a_543_ = lean_ctor_get(v___x_517_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_517_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_517_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_517_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1___boxed(lean_object* v_o_551_, lean_object* v_key_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1(v_o_551_, v_key_552_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(lean_object* v_module_555_, lean_object* v_o_556_, lean_object* v_a_557_){
_start:
{
if (lean_obj_tag(v_a_557_) == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec(v_o_556_);
v___x_559_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_560_ = lean_string_append(v___x_559_, v_module_555_);
v___x_561_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
v___x_562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
else
{
lean_object* v_tail_563_; 
v_tail_563_ = lean_ctor_get(v_a_557_, 1);
if (lean_obj_tag(v_tail_563_) == 0)
{
lean_object* v_head_564_; lean_object* v___x_565_; 
v_head_564_ = lean_ctor_get(v_a_557_, 0);
lean_inc(v_head_564_);
lean_dec_ref_known(v_a_557_, 2);
v___x_565_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1(v_o_556_, v_head_564_);
return v___x_565_;
}
else
{
lean_object* v_head_566_; lean_object* v___x_567_; 
lean_inc(v_tail_563_);
v_head_566_ = lean_ctor_get(v_a_557_, 0);
lean_inc(v_head_566_);
lean_dec_ref_known(v_a_557_, 2);
v___x_567_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_556_, v_head_566_);
if (lean_obj_tag(v___x_567_) == 0)
{
lean_object* v_a_568_; 
v_a_568_ = lean_ctor_get(v___x_567_, 0);
lean_inc(v_a_568_);
lean_dec_ref_known(v___x_567_, 1);
v_o_556_ = v_a_568_;
v_a_557_ = v_tail_563_;
goto _start;
}
else
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_577_; 
lean_dec(v_tail_563_);
v_a_570_ = lean_ctor_get(v___x_567_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v___x_567_);
if (v_isSharedCheck_577_ == 0)
{
v___x_572_ = v___x_567_;
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v___x_567_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_577_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0___boxed(lean_object* v_module_578_, lean_object* v_o_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(v_module_578_, v_o_579_, v_a_580_);
lean_dec_ref(v_module_578_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(lean_object* v_module_583_, lean_object* v_path_584_){
_start:
{
lean_object* v___x_586_; 
lean_inc_ref(v_module_583_);
v___x_586_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_583_);
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_588_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
lean_inc(v_a_587_);
lean_dec_ref_known(v___x_586_, 1);
v___x_588_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(v_module_583_, v_a_587_, v_path_584_);
lean_dec_ref(v_module_583_);
return v___x_588_;
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_dec(v_path_584_);
lean_dec_ref(v_module_583_);
v_a_589_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_586_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_586_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0___boxed(lean_object* v_module_597_, lean_object* v_path_598_, lean_object* v_a_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v_module_597_, v_path_598_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv(){
_start:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_606_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_607_ = ((lean_object*)(l_Lasm_JS_Node_process_argv___closed__1));
v___x_608_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_606_, v___x_607_);
return v___x_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv___boxed(lean_object* v_a_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lasm_JS_Node_process_argv();
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4(size_t v_sz_614_, size_t v_i_615_, lean_object* v_bs_616_){
_start:
{
uint8_t v___x_619_; 
v___x_619_ = lean_usize_dec_lt(v_i_615_, v_sz_614_);
if (v___x_619_ == 0)
{
lean_object* v___x_620_; 
v___x_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_620_, 0, v_bs_616_);
return v___x_620_;
}
else
{
lean_object* v_v_621_; 
v_v_621_ = lean_array_uget_borrowed(v_bs_616_, v_i_615_);
if (lean_obj_tag(v_v_621_) == 7)
{
lean_object* v_items_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; 
v_items_622_ = lean_ctor_get(v_v_621_, 0);
v___x_623_ = lean_array_get_size(v_items_622_);
v___x_624_ = lean_unsigned_to_nat(2u);
v___x_625_ = lean_nat_dec_eq(v___x_623_, v___x_624_);
if (v___x_625_ == 0)
{
lean_dec_ref(v_bs_616_);
goto v___jp_617_;
}
else
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_unsigned_to_nat(0u);
v___x_627_ = lean_array_fget_borrowed(v_items_622_, v___x_626_);
if (lean_obj_tag(v___x_627_) == 4)
{
lean_object* v_s_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v_s_628_ = lean_ctor_get(v___x_627_, 0);
lean_inc_ref(v_s_628_);
v___x_629_ = lean_unsigned_to_nat(1u);
v___x_630_ = lean_array_fget_borrowed(v_items_622_, v___x_629_);
if (lean_obj_tag(v___x_630_) == 4)
{
lean_object* v_s_631_; lean_object* v_bs_x27_632_; lean_object* v___x_633_; size_t v___x_634_; size_t v___x_635_; lean_object* v___x_636_; 
v_s_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc_ref(v_s_631_);
v_bs_x27_632_ = lean_array_uset(v_bs_616_, v_i_615_, v___x_626_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v_s_628_);
lean_ctor_set(v___x_633_, 1, v_s_631_);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_add(v_i_615_, v___x_634_);
v___x_636_ = lean_array_uset(v_bs_x27_632_, v_i_615_, v___x_633_);
v_i_615_ = v___x_635_;
v_bs_616_ = v___x_636_;
goto _start;
}
else
{
lean_object* v___x_638_; 
lean_dec_ref(v_s_628_);
lean_dec_ref(v_bs_616_);
v___x_638_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_638_;
}
}
else
{
lean_object* v___x_639_; 
lean_dec_ref(v_bs_616_);
v___x_639_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_639_;
}
}
}
else
{
lean_dec_ref(v_bs_616_);
goto v___jp_617_;
}
}
v___jp_617_:
{
lean_object* v___x_618_; 
v___x_618_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__1));
return v___x_618_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_640_, lean_object* v_i_641_, lean_object* v_bs_642_){
_start:
{
size_t v_sz_boxed_643_; size_t v_i_boxed_644_; lean_object* v_res_645_; 
v_sz_boxed_643_ = lean_unbox_usize(v_sz_640_);
lean_dec(v_sz_640_);
v_i_boxed_644_ = lean_unbox_usize(v_i_641_);
lean_dec(v_i_641_);
v_res_645_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_643_, v_i_boxed_644_, v_bs_642_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3(lean_object* v_context_648_, lean_object* v_d_649_){
_start:
{
lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_658_; lean_object* v_received_659_; lean_object* v___y_678_; lean_object* v_a_681_; 
if (lean_obj_tag(v_d_649_) == 7)
{
lean_object* v_items_705_; size_t v_sz_706_; size_t v___x_707_; lean_object* v___x_708_; 
v_items_705_ = lean_ctor_get(v_d_649_, 0);
v_sz_706_ = lean_array_size(v_items_705_);
v___x_707_ = ((size_t)0ULL);
lean_inc_ref(v_items_705_);
v___x_708_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4(v_sz_706_, v___x_707_, v_items_705_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__1));
v___x_711_ = lean_string_utf8_byte_size(v_a_709_);
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = lean_nat_dec_eq(v___x_711_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_715_ = lean_string_append(v___x_714_, v_a_709_);
lean_dec(v_a_709_);
v___x_716_ = lean_string_append(v___x_710_, v___x_715_);
lean_dec_ref(v___x_715_);
v_a_681_ = v___x_716_;
goto v___jp_680_;
}
else
{
lean_dec(v_a_709_);
v_a_681_ = v___x_710_;
goto v___jp_680_;
}
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec_ref_known(v_d_649_, 1);
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
lean_ctor_set_tag(v___x_719_, 0);
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_725_; 
v___x_725_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_681_ = v___x_725_;
goto v___jp_680_;
}
v___jp_651_:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_654_ = lean_string_append(v___y_652_, v___y_653_);
lean_dec_ref(v___y_653_);
v___x_655_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
v___x_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
v___jp_657_:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; 
v___x_660_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_661_ = lean_string_append(v___x_660_, v_context_648_);
v___x_662_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_663_ = lean_string_append(v___x_661_, v___x_662_);
v___x_664_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__0));
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
v___x_666_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_667_ = lean_string_append(v___x_665_, v___x_666_);
v___x_668_ = lean_string_append(v___x_667_, v_received_659_);
lean_dec_ref(v_received_659_);
v___x_669_ = lean_string_utf8_byte_size(v___y_658_);
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_671_ = lean_nat_dec_eq(v___x_669_, v___x_670_);
if (v___x_671_ == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_672_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_673_ = lean_string_append(v___x_672_, v___y_658_);
lean_dec_ref(v___y_658_);
v___x_674_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_675_ = lean_string_append(v___x_673_, v___x_674_);
v___y_652_ = v___x_668_;
v___y_653_ = v___x_675_;
goto v___jp_651_;
}
else
{
lean_object* v___x_676_; 
lean_dec_ref(v___y_658_);
v___x_676_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_652_ = v___x_668_;
v___y_653_ = v___x_676_;
goto v___jp_651_;
}
}
v___jp_677_:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lasm_JS_Data_describe(v_d_649_);
v___y_658_ = v___y_678_;
v_received_659_ = v___x_679_;
goto v___jp_657_;
}
v___jp_680_:
{
if (lean_obj_tag(v_d_649_) == 9)
{
lean_object* v_value_682_; lean_object* v_description_683_; lean_object* v___x_684_; uint8_t v___x_685_; 
v_value_682_ = lean_ctor_get(v_d_649_, 0);
v_description_683_ = lean_ctor_get(v_d_649_, 1);
v___x_684_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_685_ = lean_string_dec_eq(v_description_683_, v___x_684_);
if (v___x_685_ == 0)
{
v___y_678_ = v_a_681_;
goto v___jp_677_;
}
else
{
lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_702_; 
lean_inc(v_value_682_);
v_isSharedCheck_702_ = !lean_is_exclusive(v_d_649_);
if (v_isSharedCheck_702_ == 0)
{
lean_object* v_unused_703_; lean_object* v_unused_704_; 
v_unused_703_ = lean_ctor_get(v_d_649_, 1);
lean_dec(v_unused_703_);
v_unused_704_ = lean_ctor_get(v_d_649_, 0);
lean_dec(v_unused_704_);
v___x_687_ = v_d_649_;
v_isShared_688_ = v_isSharedCheck_702_;
goto v_resetjp_686_;
}
else
{
lean_dec(v_d_649_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_702_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
uint32_t v___x_689_; uint64_t v___x_690_; lean_object* v___x_692_; 
v___x_689_ = 206;
v___x_690_ = 0ULL;
lean_inc(v_value_682_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 1, v___x_684_);
v___x_692_ = v___x_687_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_701_; 
v_reuseFailAlloc_701_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_701_, 0, v_value_682_);
lean_ctor_set(v_reuseFailAlloc_701_, 1, v___x_684_);
v___x_692_ = v_reuseFailAlloc_701_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
uint32_t v___x_693_; lean_object* v___x_694_; 
v___x_693_ = lasm_js_value_handle(v_value_682_);
lean_dec(v_value_682_);
v___x_694_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_689_, v___x_690_, v___x_692_, v___x_693_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; uint8_t v___x_696_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = lean_string_validate_utf8(v_a_695_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; 
lean_dec(v_a_695_);
v___x_697_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7);
v___x_698_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_697_);
v___y_658_ = v_a_681_;
v_received_659_ = v___x_698_;
goto v___jp_657_;
}
else
{
lean_object* v___x_699_; 
v___x_699_ = lean_string_from_utf8_unchecked(v_a_695_);
v___y_658_ = v_a_681_;
v_received_659_ = v___x_699_;
goto v___jp_657_;
}
}
else
{
lean_object* v___x_700_; 
lean_dec_ref_known(v___x_694_, 1);
v___x_700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v___y_658_ = v_a_681_;
v_received_659_ = v___x_700_;
goto v___jp_657_;
}
}
}
}
}
else
{
v___y_678_ = v_a_681_;
goto v___jp_677_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___boxed(lean_object* v_context_726_, lean_object* v_d_727_, lean_object* v_a_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3(v_context_726_, v_d_727_);
lean_dec_ref(v_context_726_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2(lean_object* v_b_730_, lean_object* v_args_731_, uint8_t v_await_732_){
_start:
{
uint64_t v___y_735_; uint64_t v___y_736_; uint64_t v___x_771_; uint64_t v___y_773_; 
v___x_771_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_732_ == 0)
{
uint64_t v___x_778_; 
v___x_778_ = 0ULL;
v___y_773_ = v___x_778_;
goto v___jp_772_;
}
else
{
uint64_t v___x_779_; 
v___x_779_ = 2ULL;
v___y_773_ = v___x_779_;
goto v___jp_772_;
}
v___jp_734_:
{
uint64_t v_flags_737_; uint32_t v___x_738_; lean_object* v___x_739_; uint32_t v___x_740_; lean_object* v___x_741_; 
v_flags_737_ = lean_uint64_lor(v___y_735_, v___y_736_);
v___x_738_ = 214;
v___x_739_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_730_, v_args_731_);
v___x_740_ = 0;
v___x_741_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_738_, v_flags_737_, v___x_739_, v___x_740_);
if (lean_obj_tag(v___x_741_) == 0)
{
lean_object* v_a_742_; lean_object* v___x_743_; 
v_a_742_ = lean_ctor_get(v___x_741_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_741_, 1);
v___x_743_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_742_);
lean_dec(v_a_742_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
lean_dec_ref_known(v___x_743_, 1);
v___x_745_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_730_);
v___x_746_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3(v___x_745_, v_a_744_);
lean_dec_ref(v___x_745_);
return v___x_746_;
}
else
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
v_a_747_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_743_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_743_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
return v___x_752_;
}
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_770_; 
v_a_755_ = lean_ctor_get(v___x_741_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_741_);
if (v_isSharedCheck_770_ == 0)
{
v___x_757_ = v___x_741_;
v_isShared_758_ = v_isSharedCheck_770_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_741_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_770_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_759_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_760_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_730_);
v___x_761_ = lean_string_append(v___x_759_, v___x_760_);
lean_dec_ref(v___x_760_);
v___x_762_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_763_ = lean_string_append(v___x_761_, v___x_762_);
v___x_764_ = lean_io_error_to_string(v_a_755_);
v___x_765_ = lean_string_append(v___x_763_, v___x_764_);
lean_dec_ref(v___x_764_);
v___x_766_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_766_, 0, v___x_765_);
if (v_isShared_758_ == 0)
{
lean_ctor_set(v___x_757_, 0, v___x_766_);
v___x_768_ = v___x_757_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
v___jp_772_:
{
uint8_t v_construct_774_; uint64_t v___x_775_; 
v_construct_774_ = lean_ctor_get_uint8(v_b_730_, sizeof(void*)*4);
v___x_775_ = lean_uint64_lor(v___x_771_, v___y_773_);
if (v_construct_774_ == 0)
{
uint64_t v___x_776_; 
v___x_776_ = 0ULL;
v___y_735_ = v___x_775_;
v___y_736_ = v___x_776_;
goto v___jp_734_;
}
else
{
uint64_t v___x_777_; 
v___x_777_ = 4ULL;
v___y_735_ = v___x_775_;
v___y_736_ = v___x_777_;
goto v___jp_734_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2___boxed(lean_object* v_b_780_, lean_object* v_args_781_, lean_object* v_await_782_, lean_object* v_a_783_){
_start:
{
uint8_t v_await_boxed_784_; lean_object* v_res_785_; 
v_await_boxed_784_ = lean_unbox(v_await_782_);
v_res_785_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2(v_b_780_, v_args_781_, v_await_boxed_784_);
lean_dec_ref(v_b_780_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(lean_object* v_v_795_){
_start:
{
uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v___x_797_ = 0;
v___x_798_ = lean_unsigned_to_nat(1u);
v___x_799_ = ((lean_object*)(l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__3));
v___x_800_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_801_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_801_, 0, v_v_795_);
lean_ctor_set(v___x_801_, 1, v___x_800_);
v___x_802_ = lean_mk_empty_array_with_capacity(v___x_798_);
v___x_803_ = lean_array_push(v___x_802_, v___x_801_);
v___x_804_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2(v___x_799_, v___x_803_, v___x_797_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_804_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_804_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
v_a_813_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_804_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_804_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___boxed(lean_object* v_v_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(v_v_821_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0(lean_object* v_module_824_, lean_object* v_o_825_, lean_object* v_a_826_){
_start:
{
if (lean_obj_tag(v_a_826_) == 0)
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec(v_o_825_);
v___x_828_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_829_ = lean_string_append(v___x_828_, v_module_824_);
v___x_830_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
v___x_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
return v___x_831_;
}
else
{
lean_object* v_tail_832_; 
v_tail_832_ = lean_ctor_get(v_a_826_, 1);
if (lean_obj_tag(v_tail_832_) == 0)
{
lean_object* v_head_833_; lean_object* v___x_834_; 
v_head_833_ = lean_ctor_get(v_a_826_, 0);
lean_inc(v_head_833_);
lean_dec_ref_known(v_a_826_, 2);
v___x_834_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_825_, v_head_833_);
return v___x_834_;
}
else
{
lean_object* v_head_835_; lean_object* v___x_836_; 
lean_inc(v_tail_832_);
v_head_835_ = lean_ctor_get(v_a_826_, 0);
lean_inc(v_head_835_);
lean_dec_ref_known(v_a_826_, 2);
v___x_836_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_825_, v_head_835_);
if (lean_obj_tag(v___x_836_) == 0)
{
lean_object* v_a_837_; 
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref_known(v___x_836_, 1);
v_o_825_ = v_a_837_;
v_a_826_ = v_tail_832_;
goto _start;
}
else
{
lean_dec(v_tail_832_);
return v___x_836_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0___boxed(lean_object* v_module_839_, lean_object* v_o_840_, lean_object* v_a_841_, lean_object* v_a_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0(v_module_839_, v_o_840_, v_a_841_);
lean_dec_ref(v_module_839_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(lean_object* v_module_844_, lean_object* v_path_845_){
_start:
{
lean_object* v___x_847_; 
lean_inc_ref(v_module_844_);
v___x_847_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_844_);
if (lean_obj_tag(v___x_847_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_849_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_847_, 1);
v___x_849_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0(v_module_844_, v_a_848_, v_path_845_);
lean_dec_ref(v_module_844_);
return v___x_849_;
}
else
{
lean_dec(v_path_845_);
lean_dec_ref(v_module_844_);
return v___x_847_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0___boxed(lean_object* v_module_850_, lean_object* v_path_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v_module_850_, v_path_851_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env(){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_859_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_860_ = ((lean_object*)(l_Lasm_JS_Node_process_env___closed__1));
v___x_861_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v___x_859_, v___x_860_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_863_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_861_, 1);
v___x_863_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(v_a_862_);
return v___x_863_;
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
v_a_864_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_861_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_861_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env___boxed(lean_object* v_a_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lasm_JS_Node_process_env();
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv(){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_879_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_880_ = ((lean_object*)(l_Lasm_JS_Node_process_execArgv___closed__1));
v___x_881_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_879_, v___x_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv___boxed(lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lasm_JS_Node_process_execArgv();
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath(){
_start:
{
lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_889_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_890_ = ((lean_object*)(l_Lasm_JS_Node_process_execPath___closed__1));
v___x_891_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_889_, v___x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath___boxed(lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Lasm_JS_Node_process_execPath();
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_895_, lean_object* v_d_896_){
_start:
{
lean_object* v___y_902_; lean_object* v___y_903_; lean_object* v___y_908_; lean_object* v_received_909_; lean_object* v___y_928_; lean_object* v_a_931_; lean_object* v_a_956_; 
switch(lean_obj_tag(v_d_896_))
{
case 1:
{
goto v___jp_898_;
}
case 0:
{
goto v___jp_898_;
}
default: 
{
switch(lean_obj_tag(v_d_896_))
{
case 3:
{
double v_n_959_; lean_object* v___x_960_; 
v_n_959_ = lean_ctor_get_float(v_d_896_, 0);
v___x_960_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_959_);
if (lean_obj_tag(v___x_960_) == 0)
{
lean_object* v___x_961_; 
v___x_961_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0));
v_a_931_ = v___x_961_;
goto v___jp_930_;
}
else
{
lean_object* v_val_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec_ref_known(v_d_896_, 0);
v_val_962_ = lean_ctor_get(v___x_960_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_960_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_960_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_val_962_);
lean_dec(v___x_960_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___x_967_; 
if (v_isShared_965_ == 0)
{
lean_ctor_set_tag(v___x_964_, 0);
v___x_967_ = v___x_964_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_val_962_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
v_a_956_ = v___x_967_;
goto v___jp_955_;
}
}
}
}
case 4:
{
lean_object* v_s_970_; lean_object* v___x_971_; 
v_s_970_ = lean_ctor_get(v_d_896_, 0);
lean_inc_ref(v_s_970_);
lean_dec_ref_known(v_d_896_, 1);
v___x_971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_971_, 0, v_s_970_);
v_a_956_ = v___x_971_;
goto v___jp_955_;
}
default: 
{
lean_object* v___x_972_; 
v___x_972_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_931_ = v___x_972_;
goto v___jp_930_;
}
}
}
}
v___jp_898_:
{
lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_899_ = lean_box(0);
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
return v___x_900_;
}
v___jp_901_:
{
lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_904_ = lean_string_append(v___y_902_, v___y_903_);
lean_dec_ref(v___y_903_);
v___x_905_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
v___x_906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_906_, 0, v___x_905_);
return v___x_906_;
}
v___jp_907_:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; uint8_t v___x_921_; 
v___x_910_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_911_ = lean_string_append(v___x_910_, v_context_895_);
v___x_912_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_913_ = lean_string_append(v___x_911_, v___x_912_);
v___x_914_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_915_ = lean_string_append(v___x_913_, v___x_914_);
v___x_916_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_917_ = lean_string_append(v___x_915_, v___x_916_);
v___x_918_ = lean_string_append(v___x_917_, v_received_909_);
lean_dec_ref(v_received_909_);
v___x_919_ = lean_string_utf8_byte_size(v___y_908_);
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = lean_nat_dec_eq(v___x_919_, v___x_920_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_922_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_923_ = lean_string_append(v___x_922_, v___y_908_);
v___x_924_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_925_ = lean_string_append(v___x_923_, v___x_924_);
v___y_902_ = v___x_918_;
v___y_903_ = v___x_925_;
goto v___jp_901_;
}
else
{
lean_object* v___x_926_; 
v___x_926_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_902_ = v___x_918_;
v___y_903_ = v___x_926_;
goto v___jp_901_;
}
}
v___jp_927_:
{
lean_object* v___x_929_; 
v___x_929_ = l_Lasm_JS_Data_describe(v_d_896_);
v___y_908_ = v___y_928_;
v_received_909_ = v___x_929_;
goto v___jp_907_;
}
v___jp_930_:
{
if (lean_obj_tag(v_d_896_) == 9)
{
lean_object* v_value_932_; lean_object* v_description_933_; lean_object* v___x_934_; uint8_t v___x_935_; 
v_value_932_ = lean_ctor_get(v_d_896_, 0);
v_description_933_ = lean_ctor_get(v_d_896_, 1);
v___x_934_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_935_ = lean_string_dec_eq(v_description_933_, v___x_934_);
if (v___x_935_ == 0)
{
v___y_928_ = v_a_931_;
goto v___jp_927_;
}
else
{
lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_952_; 
lean_inc(v_value_932_);
v_isSharedCheck_952_ = !lean_is_exclusive(v_d_896_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; lean_object* v_unused_954_; 
v_unused_953_ = lean_ctor_get(v_d_896_, 1);
lean_dec(v_unused_953_);
v_unused_954_ = lean_ctor_get(v_d_896_, 0);
lean_dec(v_unused_954_);
v___x_937_ = v_d_896_;
v_isShared_938_ = v_isSharedCheck_952_;
goto v_resetjp_936_;
}
else
{
lean_dec(v_d_896_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_952_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
uint32_t v___x_939_; uint64_t v___x_940_; lean_object* v___x_942_; 
v___x_939_ = 206;
v___x_940_ = 0ULL;
lean_inc(v_value_932_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 1, v___x_934_);
v___x_942_ = v___x_937_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_value_932_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___x_934_);
v___x_942_ = v_reuseFailAlloc_951_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
uint32_t v___x_943_; lean_object* v___x_944_; 
v___x_943_ = lasm_js_value_handle(v_value_932_);
lean_dec(v_value_932_);
v___x_944_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_939_, v___x_940_, v___x_942_, v___x_943_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; uint8_t v___x_946_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v___x_946_ = lean_string_validate_utf8(v_a_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; lean_object* v___x_948_; 
lean_dec(v_a_945_);
v___x_947_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7);
v___x_948_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_947_);
v___y_908_ = v_a_931_;
v_received_909_ = v___x_948_;
goto v___jp_907_;
}
else
{
lean_object* v___x_949_; 
v___x_949_ = lean_string_from_utf8_unchecked(v_a_945_);
v___y_908_ = v_a_931_;
v_received_909_ = v___x_949_;
goto v___jp_907_;
}
}
else
{
lean_object* v___x_950_; 
lean_dec_ref_known(v___x_944_, 1);
v___x_950_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v___y_908_ = v_a_931_;
v_received_909_ = v___x_950_;
goto v___jp_907_;
}
}
}
}
}
else
{
v___y_928_ = v_a_931_;
goto v___jp_927_;
}
}
v___jp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_957_, 0, v_a_956_);
v___x_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_958_, 0, v___x_957_);
return v___x_958_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_973_, lean_object* v_d_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_973_, v_d_974_);
lean_dec_ref(v_context_973_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_977_, lean_object* v_bytes_978_){
_start:
{
lean_object* v___x_980_; 
v___x_980_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_978_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc(v_a_981_);
lean_dec_ref_known(v___x_980_, 1);
v___x_982_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_977_, v_a_981_);
return v___x_982_;
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
v_a_983_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_980_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_980_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_991_, lean_object* v_bytes_992_, lean_object* v_a_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(v_context_991_, v_bytes_992_);
lean_dec_ref(v_bytes_992_);
lean_dec_ref(v_context_991_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(lean_object* v_o_995_, lean_object* v_key_996_){
_start:
{
lean_object* v_k_998_; lean_object* v___x_999_; 
v_k_998_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_998_, 0, v_key_996_);
lean_inc_ref(v_k_998_);
v___x_999_ = l_Lasm_JS_Wire_encodeIO(v_k_998_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; uint32_t v___x_1001_; uint32_t v___x_1002_; uint64_t v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v___x_1001_ = 203;
v___x_1002_ = lasm_js_value_handle(v_o_995_);
v___x_1003_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_1004_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_1005_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1005_, 0, v_o_995_);
lean_ctor_set(v___x_1005_, 1, v___x_1004_);
v___x_1006_ = lean_unsigned_to_nat(2u);
v___x_1007_ = lean_mk_empty_array_with_capacity(v___x_1006_);
lean_inc_ref(v_k_998_);
v___x_1008_ = lean_array_push(v___x_1007_, v_k_998_);
v___x_1009_ = lean_array_push(v___x_1008_, v___x_1005_);
v___x_1010_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1010_, 0, v___x_1009_);
v___x_1011_ = lasm_js_call(v___x_1001_, v___x_1002_, v___x_1003_, v_a_1000_, v___x_1010_);
lean_dec_ref_known(v___x_1010_, 1);
lean_dec(v_a_1000_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_1011_, 1);
v___x_1013_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_1014_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_998_);
v___x_1015_ = lean_string_append(v___x_1013_, v___x_1014_);
lean_dec_ref(v___x_1014_);
v___x_1016_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(v___x_1015_, v_a_1012_);
lean_dec(v_a_1012_);
lean_dec_ref(v___x_1015_);
return v___x_1016_;
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
lean_dec_ref_known(v_k_998_, 1);
v_a_1017_ = lean_ctor_get(v___x_1011_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1011_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1011_);
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
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec_ref_known(v_k_998_, 1);
lean_dec(v_o_995_);
v_a_1025_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_999_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_999_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
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
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1033_, lean_object* v_key_1034_, lean_object* v_a_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(v_o_1033_, v_key_1034_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(lean_object* v_module_1037_, lean_object* v_o_1038_, lean_object* v_a_1039_){
_start:
{
if (lean_obj_tag(v_a_1039_) == 0)
{
lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
lean_dec(v_o_1038_);
v___x_1041_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_1042_ = lean_string_append(v___x_1041_, v_module_1037_);
v___x_1043_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1042_);
v___x_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
return v___x_1044_;
}
else
{
lean_object* v_tail_1045_; 
v_tail_1045_ = lean_ctor_get(v_a_1039_, 1);
if (lean_obj_tag(v_tail_1045_) == 0)
{
lean_object* v_head_1046_; lean_object* v___x_1047_; 
v_head_1046_ = lean_ctor_get(v_a_1039_, 0);
lean_inc(v_head_1046_);
lean_dec_ref_known(v_a_1039_, 2);
v___x_1047_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(v_o_1038_, v_head_1046_);
return v___x_1047_;
}
else
{
lean_object* v_head_1048_; lean_object* v___x_1049_; 
lean_inc(v_tail_1045_);
v_head_1048_ = lean_ctor_get(v_a_1039_, 0);
lean_inc(v_head_1048_);
lean_dec_ref_known(v_a_1039_, 2);
v___x_1049_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1038_, v_head_1048_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v_a_1050_; 
v_a_1050_ = lean_ctor_get(v___x_1049_, 0);
lean_inc(v_a_1050_);
lean_dec_ref_known(v___x_1049_, 1);
v_o_1038_ = v_a_1050_;
v_a_1039_ = v_tail_1045_;
goto _start;
}
else
{
lean_object* v_a_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1059_; 
lean_dec(v_tail_1045_);
v_a_1052_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1054_ = v___x_1049_;
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_a_1052_);
lean_dec(v___x_1049_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1059_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v_a_1052_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0___boxed(lean_object* v_module_1060_, lean_object* v_o_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(v_module_1060_, v_o_1061_, v_a_1062_);
lean_dec_ref(v_module_1060_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(lean_object* v_module_1065_, lean_object* v_path_1066_){
_start:
{
lean_object* v___x_1068_; 
lean_inc_ref(v_module_1065_);
v___x_1068_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_1065_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(v_module_1065_, v_a_1069_, v_path_1066_);
lean_dec_ref(v_module_1065_);
return v___x_1070_;
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec(v_path_1066_);
lean_dec_ref(v_module_1065_);
v_a_1071_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1068_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1068_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0___boxed(lean_object* v_module_1079_, lean_object* v_path_1080_, lean_object* v_a_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v_module_1079_, v_path_1080_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode(){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1089_ = ((lean_object*)(l_Lasm_JS_Node_process_exitCode___closed__1));
v___x_1090_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v___x_1088_, v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode___boxed(lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lasm_JS_Node_process_exitCode();
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_1094_, lean_object* v_d_1095_){
_start:
{
lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1104_; lean_object* v_received_1105_; lean_object* v___y_1124_; lean_object* v_a_1127_; 
switch(lean_obj_tag(v_d_1095_))
{
case 3:
{
double v_n_1151_; lean_object* v___x_1152_; 
v_n_1151_ = lean_ctor_get_float(v_d_1095_, 0);
v___x_1152_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1151_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v___x_1153_; 
v___x_1153_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0));
v_a_1127_ = v___x_1153_;
goto v___jp_1126_;
}
else
{
lean_object* v_val_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec_ref_known(v_d_1095_, 0);
v_val_1154_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1152_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_val_1154_);
lean_dec(v___x_1152_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set_tag(v___x_1156_, 0);
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_val_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
case 5:
{
lean_object* v_i_1162_; lean_object* v___x_1163_; 
v_i_1162_ = lean_ctor_get(v_d_1095_, 0);
lean_inc(v_i_1162_);
lean_dec_ref_known(v_d_1095_, 1);
v___x_1163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1163_, 0, v_i_1162_);
return v___x_1163_;
}
default: 
{
lean_object* v___x_1164_; 
v___x_1164_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_1127_ = v___x_1164_;
goto v___jp_1126_;
}
}
v___jp_1097_:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = lean_string_append(v___y_1098_, v___y_1099_);
lean_dec_ref(v___y_1099_);
v___x_1101_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
v___jp_1103_:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; uint8_t v___x_1117_; 
v___x_1106_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1107_ = lean_string_append(v___x_1106_, v_context_1094_);
v___x_1108_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1109_ = lean_string_append(v___x_1107_, v___x_1108_);
v___x_1110_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1111_ = lean_string_append(v___x_1109_, v___x_1110_);
v___x_1112_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1113_ = lean_string_append(v___x_1111_, v___x_1112_);
v___x_1114_ = lean_string_append(v___x_1113_, v_received_1105_);
lean_dec_ref(v_received_1105_);
v___x_1115_ = lean_string_utf8_byte_size(v___y_1104_);
v___x_1116_ = lean_unsigned_to_nat(0u);
v___x_1117_ = lean_nat_dec_eq(v___x_1115_, v___x_1116_);
if (v___x_1117_ == 0)
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1118_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_1119_ = lean_string_append(v___x_1118_, v___y_1104_);
v___x_1120_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_1121_ = lean_string_append(v___x_1119_, v___x_1120_);
v___y_1098_ = v___x_1114_;
v___y_1099_ = v___x_1121_;
goto v___jp_1097_;
}
else
{
lean_object* v___x_1122_; 
v___x_1122_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_1098_ = v___x_1114_;
v___y_1099_ = v___x_1122_;
goto v___jp_1097_;
}
}
v___jp_1123_:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lasm_JS_Data_describe(v_d_1095_);
v___y_1104_ = v___y_1124_;
v_received_1105_ = v___x_1125_;
goto v___jp_1103_;
}
v___jp_1126_:
{
if (lean_obj_tag(v_d_1095_) == 9)
{
lean_object* v_value_1128_; lean_object* v_description_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; 
v_value_1128_ = lean_ctor_get(v_d_1095_, 0);
v_description_1129_ = lean_ctor_get(v_d_1095_, 1);
v___x_1130_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_1131_ = lean_string_dec_eq(v_description_1129_, v___x_1130_);
if (v___x_1131_ == 0)
{
v___y_1124_ = v_a_1127_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1148_; 
lean_inc(v_value_1128_);
v_isSharedCheck_1148_ = !lean_is_exclusive(v_d_1095_);
if (v_isSharedCheck_1148_ == 0)
{
lean_object* v_unused_1149_; lean_object* v_unused_1150_; 
v_unused_1149_ = lean_ctor_get(v_d_1095_, 1);
lean_dec(v_unused_1149_);
v_unused_1150_ = lean_ctor_get(v_d_1095_, 0);
lean_dec(v_unused_1150_);
v___x_1133_ = v_d_1095_;
v_isShared_1134_ = v_isSharedCheck_1148_;
goto v_resetjp_1132_;
}
else
{
lean_dec(v_d_1095_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1148_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
uint32_t v___x_1135_; uint64_t v___x_1136_; lean_object* v___x_1138_; 
v___x_1135_ = 206;
v___x_1136_ = 0ULL;
lean_inc(v_value_1128_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 1, v___x_1130_);
v___x_1138_ = v___x_1133_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_value_1128_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v___x_1130_);
v___x_1138_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
uint32_t v___x_1139_; lean_object* v___x_1140_; 
v___x_1139_ = lasm_js_value_handle(v_value_1128_);
lean_dec(v_value_1128_);
v___x_1140_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1135_, v___x_1136_, v___x_1138_, v___x_1139_);
if (lean_obj_tag(v___x_1140_) == 0)
{
lean_object* v_a_1141_; uint8_t v___x_1142_; 
v_a_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc(v_a_1141_);
lean_dec_ref_known(v___x_1140_, 1);
v___x_1142_ = lean_string_validate_utf8(v_a_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
lean_dec(v_a_1141_);
v___x_1143_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7);
v___x_1144_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1143_);
v___y_1104_ = v_a_1127_;
v_received_1105_ = v___x_1144_;
goto v___jp_1103_;
}
else
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_string_from_utf8_unchecked(v_a_1141_);
v___y_1104_ = v_a_1127_;
v_received_1105_ = v___x_1145_;
goto v___jp_1103_;
}
}
else
{
lean_object* v___x_1146_; 
lean_dec_ref_known(v___x_1140_, 1);
v___x_1146_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v___y_1104_ = v_a_1127_;
v_received_1105_ = v___x_1146_;
goto v___jp_1103_;
}
}
}
}
}
else
{
v___y_1124_ = v_a_1127_;
goto v___jp_1123_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_1165_, lean_object* v_d_1166_, lean_object* v_a_1167_){
_start:
{
lean_object* v_res_1168_; 
v_res_1168_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_1165_, v_d_1166_);
lean_dec_ref(v_context_1165_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_1169_, lean_object* v_bytes_1170_){
_start:
{
lean_object* v___x_1172_; 
v___x_1172_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1170_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1174_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1174_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_1169_, v_a_1173_);
return v___x_1174_;
}
else
{
lean_object* v_a_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1182_; 
v_a_1175_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1182_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1182_ == 0)
{
v___x_1177_ = v___x_1172_;
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_a_1175_);
lean_dec(v___x_1172_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1182_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
lean_object* v___x_1180_; 
if (v_isShared_1178_ == 0)
{
v___x_1180_ = v___x_1177_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_a_1175_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
return v___x_1180_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1183_, lean_object* v_bytes_1184_, lean_object* v_a_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2(v_context_1183_, v_bytes_1184_);
lean_dec_ref(v_bytes_1184_);
lean_dec_ref(v_context_1183_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1(lean_object* v_o_1187_, lean_object* v_key_1188_){
_start:
{
lean_object* v_k_1190_; lean_object* v___x_1191_; 
v_k_1190_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1190_, 0, v_key_1188_);
lean_inc_ref(v_k_1190_);
v___x_1191_ = l_Lasm_JS_Wire_encodeIO(v_k_1190_);
if (lean_obj_tag(v___x_1191_) == 0)
{
lean_object* v_a_1192_; uint32_t v___x_1193_; uint32_t v___x_1194_; uint64_t v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; 
v_a_1192_ = lean_ctor_get(v___x_1191_, 0);
lean_inc(v_a_1192_);
lean_dec_ref_known(v___x_1191_, 1);
v___x_1193_ = 203;
v___x_1194_ = lasm_js_value_handle(v_o_1187_);
v___x_1195_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_1196_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_1197_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1197_, 0, v_o_1187_);
lean_ctor_set(v___x_1197_, 1, v___x_1196_);
v___x_1198_ = lean_unsigned_to_nat(2u);
v___x_1199_ = lean_mk_empty_array_with_capacity(v___x_1198_);
lean_inc_ref(v_k_1190_);
v___x_1200_ = lean_array_push(v___x_1199_, v_k_1190_);
v___x_1201_ = lean_array_push(v___x_1200_, v___x_1197_);
v___x_1202_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
v___x_1203_ = lasm_js_call(v___x_1193_, v___x_1194_, v___x_1195_, v_a_1192_, v___x_1202_);
lean_dec_ref_known(v___x_1202_, 1);
lean_dec(v_a_1192_);
if (lean_obj_tag(v___x_1203_) == 0)
{
lean_object* v_a_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v_a_1204_ = lean_ctor_get(v___x_1203_, 0);
lean_inc(v_a_1204_);
lean_dec_ref_known(v___x_1203_, 1);
v___x_1205_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_1206_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1190_);
v___x_1207_ = lean_string_append(v___x_1205_, v___x_1206_);
lean_dec_ref(v___x_1206_);
v___x_1208_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2(v___x_1207_, v_a_1204_);
lean_dec(v_a_1204_);
lean_dec_ref(v___x_1207_);
return v___x_1208_;
}
else
{
lean_object* v_a_1209_; lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1216_; 
lean_dec_ref_known(v_k_1190_, 1);
v_a_1209_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1216_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1211_ = v___x_1203_;
v_isShared_1212_ = v_isSharedCheck_1216_;
goto v_resetjp_1210_;
}
else
{
lean_inc(v_a_1209_);
lean_dec(v___x_1203_);
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
v_reuseFailAlloc_1215_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_1217_; lean_object* v___x_1219_; uint8_t v_isShared_1220_; uint8_t v_isSharedCheck_1224_; 
lean_dec_ref_known(v_k_1190_, 1);
lean_dec(v_o_1187_);
v_a_1217_ = lean_ctor_get(v___x_1191_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1191_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1219_ = v___x_1191_;
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
else
{
lean_inc(v_a_1217_);
lean_dec(v___x_1191_);
v___x_1219_ = lean_box(0);
v_isShared_1220_ = v_isSharedCheck_1224_;
goto v_resetjp_1218_;
}
v_resetjp_1218_:
{
lean_object* v___x_1222_; 
if (v_isShared_1220_ == 0)
{
v___x_1222_ = v___x_1219_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v_a_1217_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1225_, lean_object* v_key_1226_, lean_object* v_a_1227_){
_start:
{
lean_object* v_res_1228_; 
v_res_1228_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1(v_o_1225_, v_key_1226_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0(lean_object* v_module_1229_, lean_object* v_o_1230_, lean_object* v_a_1231_){
_start:
{
if (lean_obj_tag(v_a_1231_) == 0)
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; 
lean_dec(v_o_1230_);
v___x_1233_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_1234_ = lean_string_append(v___x_1233_, v_module_1229_);
v___x_1235_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1234_);
v___x_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1235_);
return v___x_1236_;
}
else
{
lean_object* v_tail_1237_; 
v_tail_1237_ = lean_ctor_get(v_a_1231_, 1);
if (lean_obj_tag(v_tail_1237_) == 0)
{
lean_object* v_head_1238_; lean_object* v___x_1239_; 
v_head_1238_ = lean_ctor_get(v_a_1231_, 0);
lean_inc(v_head_1238_);
lean_dec_ref_known(v_a_1231_, 2);
v___x_1239_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1(v_o_1230_, v_head_1238_);
return v___x_1239_;
}
else
{
lean_object* v_head_1240_; lean_object* v___x_1241_; 
lean_inc(v_tail_1237_);
v_head_1240_ = lean_ctor_get(v_a_1231_, 0);
lean_inc(v_head_1240_);
lean_dec_ref_known(v_a_1231_, 2);
v___x_1241_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1230_, v_head_1240_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1241_, 1);
v_o_1230_ = v_a_1242_;
v_a_1231_ = v_tail_1237_;
goto _start;
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
lean_dec(v_tail_1237_);
v_a_1244_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1241_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1241_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0___boxed(lean_object* v_module_1252_, lean_object* v_o_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_){
_start:
{
lean_object* v_res_1256_; 
v_res_1256_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0(v_module_1252_, v_o_1253_, v_a_1254_);
lean_dec_ref(v_module_1252_);
return v_res_1256_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(lean_object* v_module_1257_, lean_object* v_path_1258_){
_start:
{
lean_object* v___x_1260_; 
lean_inc_ref(v_module_1257_);
v___x_1260_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_1257_);
if (lean_obj_tag(v___x_1260_) == 0)
{
lean_object* v_a_1261_; lean_object* v___x_1262_; 
v_a_1261_ = lean_ctor_get(v___x_1260_, 0);
lean_inc(v_a_1261_);
lean_dec_ref_known(v___x_1260_, 1);
v___x_1262_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0(v_module_1257_, v_a_1261_, v_path_1258_);
lean_dec_ref(v_module_1257_);
return v___x_1262_;
}
else
{
lean_object* v_a_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1270_; 
lean_dec(v_path_1258_);
lean_dec_ref(v_module_1257_);
v_a_1263_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1270_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1265_ = v___x_1260_;
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_a_1263_);
lean_dec(v___x_1260_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1270_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1268_; 
if (v_isShared_1266_ == 0)
{
v___x_1268_ = v___x_1265_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_a_1263_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0___boxed(lean_object* v_module_1271_, lean_object* v_path_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(v_module_1271_, v_path_1272_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid(){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1280_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1281_ = ((lean_object*)(l_Lasm_JS_Node_process_pid___closed__1));
v___x_1282_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(v___x_1280_, v___x_1281_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid___boxed(lean_object* v_a_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lasm_JS_Node_process_pid();
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform(){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1291_ = ((lean_object*)(l_Lasm_JS_Node_process_platform___closed__1));
v___x_1292_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1290_, v___x_1291_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform___boxed(lean_object* v_a_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lasm_JS_Node_process_platform();
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid(){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1301_ = ((lean_object*)(l_Lasm_JS_Node_process_ppid___closed__1));
v___x_1302_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(v___x_1300_, v___x_1301_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid___boxed(lean_object* v_a_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lasm_JS_Node_process_ppid();
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title(){
_start:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1310_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1311_ = ((lean_object*)(l_Lasm_JS_Node_process_title___closed__1));
v___x_1312_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1310_, v___x_1311_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title___boxed(lean_object* v_a_1313_){
_start:
{
lean_object* v_res_1314_; 
v_res_1314_ = l_Lasm_JS_Node_process_title();
return v_res_1314_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version(){
_start:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1320_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1321_ = ((lean_object*)(l_Lasm_JS_Node_process_version___closed__1));
v___x_1322_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1320_, v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version___boxed(lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lasm_JS_Node_process_version();
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions(){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v___x_1330_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1331_ = ((lean_object*)(l_Lasm_JS_Node_process_versions___closed__1));
v___x_1332_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v___x_1330_, v___x_1331_);
if (lean_obj_tag(v___x_1332_) == 0)
{
lean_object* v_a_1333_; lean_object* v___x_1334_; 
v_a_1333_ = lean_ctor_get(v___x_1332_, 0);
lean_inc(v_a_1333_);
lean_dec_ref_known(v___x_1332_, 1);
v___x_1334_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(v_a_1333_);
return v___x_1334_;
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
v_a_1335_ = lean_ctor_get(v___x_1332_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1332_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1332_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1332_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions___boxed(lean_object* v_a_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lasm_JS_Node_process_versions();
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1346_ = lean_box(0);
v___x_1347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg___boxed(lean_object* v_a_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg();
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(lean_object* v_b_1350_, lean_object* v_args_1351_, uint8_t v_await_1352_){
_start:
{
uint64_t v___y_1355_; uint64_t v___y_1356_; uint64_t v___x_1389_; uint64_t v___y_1391_; 
v___x_1389_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1352_ == 0)
{
uint64_t v___x_1396_; 
v___x_1396_ = 0ULL;
v___y_1391_ = v___x_1396_;
goto v___jp_1390_;
}
else
{
uint64_t v___x_1397_; 
v___x_1397_ = 2ULL;
v___y_1391_ = v___x_1397_;
goto v___jp_1390_;
}
v___jp_1354_:
{
uint64_t v_flags_1357_; uint32_t v___x_1358_; lean_object* v___x_1359_; uint32_t v___x_1360_; lean_object* v___x_1361_; 
v_flags_1357_ = lean_uint64_lor(v___y_1355_, v___y_1356_);
v___x_1358_ = 214;
v___x_1359_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1350_, v_args_1351_);
v___x_1360_ = 0;
v___x_1361_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1358_, v_flags_1357_, v___x_1359_, v___x_1360_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1363_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1361_, 1);
v___x_1363_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1362_);
lean_dec(v_a_1362_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v___x_1364_; 
lean_dec_ref_known(v___x_1363_, 1);
v___x_1364_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg();
return v___x_1364_;
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
v_a_1365_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1363_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1363_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1388_; 
v_a_1373_ = lean_ctor_get(v___x_1361_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1361_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1375_ = v___x_1361_;
v_isShared_1376_ = v_isSharedCheck_1388_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1361_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1388_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1386_; 
v___x_1377_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1378_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1350_);
v___x_1379_ = lean_string_append(v___x_1377_, v___x_1378_);
lean_dec_ref(v___x_1378_);
v___x_1380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1381_ = lean_string_append(v___x_1379_, v___x_1380_);
v___x_1382_ = lean_io_error_to_string(v_a_1373_);
v___x_1383_ = lean_string_append(v___x_1381_, v___x_1382_);
lean_dec_ref(v___x_1382_);
v___x_1384_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1384_, 0, v___x_1383_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 0, v___x_1384_);
v___x_1386_ = v___x_1375_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1384_);
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
v___jp_1390_:
{
uint8_t v_construct_1392_; uint64_t v___x_1393_; 
v_construct_1392_ = lean_ctor_get_uint8(v_b_1350_, sizeof(void*)*4);
v___x_1393_ = lean_uint64_lor(v___x_1389_, v___y_1391_);
if (v_construct_1392_ == 0)
{
uint64_t v___x_1394_; 
v___x_1394_ = 0ULL;
v___y_1355_ = v___x_1393_;
v___y_1356_ = v___x_1394_;
goto v___jp_1354_;
}
else
{
uint64_t v___x_1395_; 
v___x_1395_ = 4ULL;
v___y_1355_ = v___x_1393_;
v___y_1356_ = v___x_1395_;
goto v___jp_1354_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0___boxed(lean_object* v_b_1398_, lean_object* v_args_1399_, lean_object* v_await_1400_, lean_object* v_a_1401_){
_start:
{
uint8_t v_await_boxed_1402_; lean_object* v_res_1403_; 
v_await_boxed_1402_ = lean_unbox(v_await_1400_);
v_res_1403_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v_b_1398_, v_args_1399_, v_await_boxed_1402_);
lean_dec_ref(v_b_1398_);
return v_res_1403_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir(lean_object* v_directory_1412_){
_start:
{
uint8_t v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1414_ = 0;
v___x_1415_ = lean_unsigned_to_nat(1u);
v___x_1416_ = ((lean_object*)(l_Lasm_JS_Node_process_chdir___closed__2));
v___x_1417_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1417_, 0, v_directory_1412_);
v___x_1418_ = lean_mk_empty_array_with_capacity(v___x_1415_);
v___x_1419_ = lean_array_push(v___x_1418_, v___x_1417_);
v___x_1420_ = l_Lasm_JS_Web_Support_args(v___x_1419_);
v___x_1421_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v___x_1416_, v___x_1420_, v___x_1414_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir___boxed(lean_object* v_directory_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v_res_1424_; 
v_res_1424_ = l_Lasm_JS_Node_process_chdir(v_directory_1422_);
return v_res_1424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0(lean_object* v_context_1425_, lean_object* v_d_1426_){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg();
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___boxed(lean_object* v_context_1429_, lean_object* v_d_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0(v_context_1429_, v_d_1430_);
lean_dec(v_d_1430_);
lean_dec_ref(v_context_1429_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0(lean_object* v_b_1433_, lean_object* v_args_1434_, uint8_t v_await_1435_){
_start:
{
uint64_t v___y_1438_; uint64_t v___y_1439_; uint64_t v___x_1474_; uint64_t v___y_1476_; 
v___x_1474_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1435_ == 0)
{
uint64_t v___x_1481_; 
v___x_1481_ = 0ULL;
v___y_1476_ = v___x_1481_;
goto v___jp_1475_;
}
else
{
uint64_t v___x_1482_; 
v___x_1482_ = 2ULL;
v___y_1476_ = v___x_1482_;
goto v___jp_1475_;
}
v___jp_1437_:
{
uint64_t v_flags_1440_; uint32_t v___x_1441_; lean_object* v___x_1442_; uint32_t v___x_1443_; lean_object* v___x_1444_; 
v_flags_1440_ = lean_uint64_lor(v___y_1438_, v___y_1439_);
v___x_1441_ = 214;
v___x_1442_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1433_, v_args_1434_);
v___x_1443_ = 0;
v___x_1444_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1441_, v_flags_1440_, v___x_1442_, v___x_1443_);
if (lean_obj_tag(v___x_1444_) == 0)
{
lean_object* v_a_1445_; lean_object* v___x_1446_; 
v_a_1445_ = lean_ctor_get(v___x_1444_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1444_, 1);
v___x_1446_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1445_);
lean_dec(v_a_1445_);
if (lean_obj_tag(v___x_1446_) == 0)
{
lean_object* v_a_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v_a_1447_ = lean_ctor_get(v___x_1446_, 0);
lean_inc(v_a_1447_);
lean_dec_ref_known(v___x_1446_, 1);
v___x_1448_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1433_);
v___x_1449_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_1448_, v_a_1447_);
lean_dec_ref(v___x_1448_);
return v___x_1449_;
}
else
{
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
v_a_1450_ = lean_ctor_get(v___x_1446_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1446_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1446_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1446_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1473_; 
v_a_1458_ = lean_ctor_get(v___x_1444_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1444_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1460_ = v___x_1444_;
v_isShared_1461_ = v_isSharedCheck_1473_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1444_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1473_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1471_; 
v___x_1462_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1433_);
v___x_1464_ = lean_string_append(v___x_1462_, v___x_1463_);
lean_dec_ref(v___x_1463_);
v___x_1465_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1466_ = lean_string_append(v___x_1464_, v___x_1465_);
v___x_1467_ = lean_io_error_to_string(v_a_1458_);
v___x_1468_ = lean_string_append(v___x_1466_, v___x_1467_);
lean_dec_ref(v___x_1467_);
v___x_1469_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
if (v_isShared_1461_ == 0)
{
lean_ctor_set(v___x_1460_, 0, v___x_1469_);
v___x_1471_ = v___x_1460_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___x_1469_);
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
v___jp_1475_:
{
uint8_t v_construct_1477_; uint64_t v___x_1478_; 
v_construct_1477_ = lean_ctor_get_uint8(v_b_1433_, sizeof(void*)*4);
v___x_1478_ = lean_uint64_lor(v___x_1474_, v___y_1476_);
if (v_construct_1477_ == 0)
{
uint64_t v___x_1479_; 
v___x_1479_ = 0ULL;
v___y_1438_ = v___x_1478_;
v___y_1439_ = v___x_1479_;
goto v___jp_1437_;
}
else
{
uint64_t v___x_1480_; 
v___x_1480_ = 4ULL;
v___y_1438_ = v___x_1478_;
v___y_1439_ = v___x_1480_;
goto v___jp_1437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0___boxed(lean_object* v_b_1483_, lean_object* v_args_1484_, lean_object* v_await_1485_, lean_object* v_a_1486_){
_start:
{
uint8_t v_await_boxed_1487_; lean_object* v_res_1488_; 
v_await_boxed_1487_ = lean_unbox(v_await_1485_);
v_res_1488_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0(v_b_1483_, v_args_1484_, v_await_boxed_1487_);
lean_dec_ref(v_b_1483_);
return v_res_1488_;
}
}
static lean_object* _init_l_Lasm_JS_Node_process_cwd___closed__4(void){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = ((lean_object*)(l_Lasm_JS_Node_process_cwd___closed__3));
v___x_1500_ = l_Lasm_JS_Web_Support_args(v___x_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd(){
_start:
{
uint8_t v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; 
v___x_1502_ = 0;
v___x_1503_ = ((lean_object*)(l_Lasm_JS_Node_process_cwd___closed__2));
v___x_1504_ = lean_obj_once(&l_Lasm_JS_Node_process_cwd___closed__4, &l_Lasm_JS_Node_process_cwd___closed__4_once, _init_l_Lasm_JS_Node_process_cwd___closed__4);
v___x_1505_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0(v___x_1503_, v___x_1504_, v___x_1502_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd___boxed(lean_object* v_a_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lasm_JS_Node_process_cwd();
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_exit_spec__0(lean_object* v_x_1508_){
_start:
{
if (lean_obj_tag(v_x_1508_) == 0)
{
lean_object* v___x_1509_; 
v___x_1509_ = lean_box(0);
return v___x_1509_;
}
else
{
lean_object* v_val_1510_; 
v_val_1510_ = lean_ctor_get(v_x_1508_, 0);
lean_inc(v_val_1510_);
lean_dec_ref_known(v_x_1508_, 1);
if (lean_obj_tag(v_val_1510_) == 0)
{
lean_object* v_value_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1523_; 
v_value_1511_ = lean_ctor_get(v_val_1510_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_val_1510_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1513_ = v_val_1510_;
v_isShared_1514_ = v_isSharedCheck_1523_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_value_1511_);
lean_dec(v_val_1510_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1523_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; uint8_t v___x_1517_; 
v___x_1515_ = lean_nat_abs(v_value_1511_);
v___x_1516_ = lean_cstr_to_nat("9007199254740991");
v___x_1517_ = lean_nat_dec_le(v___x_1515_, v___x_1516_);
lean_dec(v___x_1515_);
if (v___x_1517_ == 0)
{
lean_object* v___x_1519_; 
if (v_isShared_1514_ == 0)
{
lean_ctor_set_tag(v___x_1513_, 5);
v___x_1519_ = v___x_1513_;
goto v_reusejp_1518_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v_value_1511_);
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
lean_del_object(v___x_1513_);
v___x_1521_ = l_Float_ofInt(v_value_1511_);
lean_dec(v_value_1511_);
v___x_1522_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1522_, 0, v___x_1521_);
return v___x_1522_;
}
}
}
else
{
lean_object* v_value_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
v_value_1524_ = lean_ctor_get(v_val_1510_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v_val_1510_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v_val_1510_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_value_1524_);
lean_dec(v_val_1510_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
lean_ctor_set_tag(v___x_1526_, 4);
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_value_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit(lean_object* v_code_1540_){
_start:
{
uint8_t v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1542_ = 0;
v___x_1543_ = lean_unsigned_to_nat(1u);
v___x_1544_ = ((lean_object*)(l_Lasm_JS_Node_process_exit___closed__2));
v___x_1545_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_exit_spec__0(v_code_1540_);
v___x_1546_ = lean_mk_empty_array_with_capacity(v___x_1543_);
v___x_1547_ = lean_array_push(v___x_1546_, v___x_1545_);
v___x_1548_ = l_Lasm_JS_Web_Support_args(v___x_1547_);
v___x_1549_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v___x_1544_, v___x_1548_, v___x_1542_);
return v___x_1549_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit___boxed(lean_object* v_code_1550_, lean_object* v_a_1551_){
_start:
{
lean_object* v_res_1552_; 
v_res_1552_ = l_Lasm_JS_Node_process_exit(v_code_1550_);
return v_res_1552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(lean_object* v_x_1553_){
_start:
{
if (lean_obj_tag(v_x_1553_) == 0)
{
lean_object* v___x_1554_; 
v___x_1554_ = lean_box(0);
return v___x_1554_;
}
else
{
lean_object* v_val_1555_; 
v_val_1555_ = lean_ctor_get(v_x_1553_, 0);
lean_inc(v_val_1555_);
lean_dec_ref_known(v_x_1553_, 1);
if (lean_obj_tag(v_val_1555_) == 0)
{
lean_object* v_value_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1563_; 
v_value_1556_ = lean_ctor_get(v_val_1555_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_val_1555_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v_val_1555_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_value_1556_);
lean_dec(v_val_1555_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v___x_1561_; 
if (v_isShared_1559_ == 0)
{
lean_ctor_set_tag(v___x_1558_, 4);
v___x_1561_ = v___x_1558_;
goto v_reusejp_1560_;
}
else
{
lean_object* v_reuseFailAlloc_1562_; 
v_reuseFailAlloc_1562_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1562_, 0, v_value_1556_);
v___x_1561_ = v_reuseFailAlloc_1562_;
goto v_reusejp_1560_;
}
v_reusejp_1560_:
{
return v___x_1561_;
}
}
}
else
{
double v_value_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
v_value_1564_ = lean_ctor_get_float(v_val_1555_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_val_1555_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v_val_1555_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_dec(v_val_1555_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
lean_ctor_set_tag(v___x_1566_, 3);
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1570_, 0, v_value_1564_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill(double v_pid_1580_, lean_object* v_signal_1581_){
_start:
{
uint8_t v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1583_ = 0;
v___x_1584_ = lean_unsigned_to_nat(2u);
v___x_1585_ = ((lean_object*)(l_Lasm_JS_Node_process_kill___closed__2));
v___x_1586_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1586_, 0, v_pid_1580_);
v___x_1587_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(v_signal_1581_);
v___x_1588_ = lean_mk_empty_array_with_capacity(v___x_1584_);
v___x_1589_ = lean_array_push(v___x_1588_, v___x_1586_);
v___x_1590_ = lean_array_push(v___x_1589_, v___x_1587_);
v___x_1591_ = l_Lasm_JS_Web_Support_args(v___x_1590_);
v___x_1592_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v___x_1585_, v___x_1591_, v___x_1583_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill___boxed(lean_object* v_pid_1593_, lean_object* v_signal_1594_, lean_object* v_a_1595_){
_start:
{
double v_pid_boxed_1596_; lean_object* v_res_1597_; 
v_pid_boxed_1596_ = lean_unbox_float(v_pid_1593_);
lean_dec_ref(v_pid_1593_);
v_res_1597_ = l_Lasm_JS_Node_process_kill(v_pid_boxed_1596_, v_signal_1594_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0(lean_object* v_b_1598_, lean_object* v_args_1599_, uint8_t v_await_1600_){
_start:
{
uint64_t v___y_1603_; uint64_t v___y_1604_; uint64_t v___x_1636_; uint64_t v___y_1638_; 
v___x_1636_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1600_ == 0)
{
uint64_t v___x_1643_; 
v___x_1643_ = 0ULL;
v___y_1638_ = v___x_1643_;
goto v___jp_1637_;
}
else
{
uint64_t v___x_1644_; 
v___x_1644_ = 2ULL;
v___y_1638_ = v___x_1644_;
goto v___jp_1637_;
}
v___jp_1602_:
{
uint64_t v_flags_1605_; uint32_t v___x_1606_; lean_object* v___x_1607_; uint32_t v___x_1608_; lean_object* v___x_1609_; 
v_flags_1605_ = lean_uint64_lor(v___y_1603_, v___y_1604_);
v___x_1606_ = 214;
v___x_1607_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1598_, v_args_1599_);
v___x_1608_ = 0;
v___x_1609_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1606_, v_flags_1605_, v___x_1607_, v___x_1608_);
if (lean_obj_tag(v___x_1609_) == 0)
{
lean_object* v_a_1610_; lean_object* v___x_1611_; 
v_a_1610_ = lean_ctor_get(v___x_1609_, 0);
lean_inc(v_a_1610_);
lean_dec_ref_known(v___x_1609_, 1);
v___x_1611_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1610_);
lean_dec(v_a_1610_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v_a_1612_; lean_object* v___x_1614_; uint8_t v_isShared_1615_; uint8_t v_isSharedCheck_1619_; 
v_a_1612_ = lean_ctor_get(v___x_1611_, 0);
v_isSharedCheck_1619_ = !lean_is_exclusive(v___x_1611_);
if (v_isSharedCheck_1619_ == 0)
{
v___x_1614_ = v___x_1611_;
v_isShared_1615_ = v_isSharedCheck_1619_;
goto v_resetjp_1613_;
}
else
{
lean_inc(v_a_1612_);
lean_dec(v___x_1611_);
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
v_reuseFailAlloc_1618_ = lean_alloc_ctor(0, 1, 0);
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
else
{
return v___x_1611_;
}
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1635_; 
v_a_1620_ = lean_ctor_get(v___x_1609_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1609_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1622_ = v___x_1609_;
v_isShared_1623_ = v_isSharedCheck_1635_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1609_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1635_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1633_; 
v___x_1624_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1625_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1598_);
v___x_1626_ = lean_string_append(v___x_1624_, v___x_1625_);
lean_dec_ref(v___x_1625_);
v___x_1627_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1628_ = lean_string_append(v___x_1626_, v___x_1627_);
v___x_1629_ = lean_io_error_to_string(v_a_1620_);
v___x_1630_ = lean_string_append(v___x_1628_, v___x_1629_);
lean_dec_ref(v___x_1629_);
v___x_1631_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1631_, 0, v___x_1630_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 0, v___x_1631_);
v___x_1633_ = v___x_1622_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v___x_1631_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
v___jp_1637_:
{
uint8_t v_construct_1639_; uint64_t v___x_1640_; 
v_construct_1639_ = lean_ctor_get_uint8(v_b_1598_, sizeof(void*)*4);
v___x_1640_ = lean_uint64_lor(v___x_1636_, v___y_1638_);
if (v_construct_1639_ == 0)
{
uint64_t v___x_1641_; 
v___x_1641_ = 0ULL;
v___y_1603_ = v___x_1640_;
v___y_1604_ = v___x_1641_;
goto v___jp_1602_;
}
else
{
uint64_t v___x_1642_; 
v___x_1642_ = 4ULL;
v___y_1603_ = v___x_1640_;
v___y_1604_ = v___x_1642_;
goto v___jp_1602_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0___boxed(lean_object* v_b_1645_, lean_object* v_args_1646_, lean_object* v_await_1647_, lean_object* v_a_1648_){
_start:
{
uint8_t v_await_boxed_1649_; lean_object* v_res_1650_; 
v_await_boxed_1649_ = lean_unbox(v_await_1647_);
v_res_1650_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0(v_b_1645_, v_args_1646_, v_await_boxed_1649_);
lean_dec_ref(v_b_1645_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage(){
_start:
{
uint8_t v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1660_ = 0;
v___x_1661_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage___closed__2));
v___x_1662_ = lean_obj_once(&l_Lasm_JS_Node_process_cwd___closed__4, &l_Lasm_JS_Node_process_cwd___closed__4_once, _init_l_Lasm_JS_Node_process_cwd___closed__4);
v___x_1663_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0(v___x_1661_, v___x_1662_, v___x_1660_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage___boxed(lean_object* v_a_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l_Lasm_JS_Node_process_memoryUsage();
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg(lean_object* v_d_1666_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v_d_1666_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg___boxed(lean_object* v_d_1669_, lean_object* v_a_1670_){
_start:
{
lean_object* v_res_1671_; 
v_res_1671_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg(v_d_1669_);
return v_res_1671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0(lean_object* v_context_1672_, lean_object* v_d_1673_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v_d_1673_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___boxed(lean_object* v_context_1676_, lean_object* v_d_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0(v_context_1676_, v_d_1677_);
lean_dec_ref(v_context_1676_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0(lean_object* v_context_1681_, lean_object* v_d_1682_){
_start:
{
lean_object* v_received_1685_; 
if (lean_obj_tag(v_d_1682_) == 3)
{
double v_n_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v_n_1699_ = lean_ctor_get_float(v_d_1682_, 0);
lean_dec_ref_known(v_d_1682_, 0);
v___x_1700_ = lean_box_float(v_n_1699_);
v___x_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
return v___x_1701_;
}
else
{
if (lean_obj_tag(v_d_1682_) == 9)
{
lean_object* v_value_1702_; lean_object* v_description_1703_; lean_object* v___x_1704_; uint8_t v___x_1705_; 
v_value_1702_ = lean_ctor_get(v_d_1682_, 0);
v_description_1703_ = lean_ctor_get(v_d_1682_, 1);
v___x_1704_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_1705_ = lean_string_dec_eq(v_description_1703_, v___x_1704_);
if (v___x_1705_ == 0)
{
goto v___jp_1697_;
}
else
{
uint32_t v___x_1706_; uint64_t v___x_1707_; lean_object* v___x_1708_; uint32_t v___x_1709_; lean_object* v___x_1710_; 
lean_inc_n(v_value_1702_, 2);
lean_dec_ref_known(v_d_1682_, 2);
v___x_1706_ = 206;
v___x_1707_ = 0ULL;
v___x_1708_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1708_, 0, v_value_1702_);
lean_ctor_set(v___x_1708_, 1, v___x_1704_);
v___x_1709_ = lasm_js_value_handle(v_value_1702_);
lean_dec(v_value_1702_);
v___x_1710_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1706_, v___x_1707_, v___x_1708_, v___x_1709_);
if (lean_obj_tag(v___x_1710_) == 0)
{
lean_object* v_a_1711_; uint8_t v___x_1712_; 
v_a_1711_ = lean_ctor_get(v___x_1710_, 0);
lean_inc(v_a_1711_);
lean_dec_ref_known(v___x_1710_, 1);
v___x_1712_ = lean_string_validate_utf8(v_a_1711_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1713_; lean_object* v___x_1714_; 
lean_dec(v_a_1711_);
v___x_1713_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7);
v___x_1714_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1713_);
v_received_1685_ = v___x_1714_;
goto v___jp_1684_;
}
else
{
lean_object* v___x_1715_; 
v___x_1715_ = lean_string_from_utf8_unchecked(v_a_1711_);
v_received_1685_ = v___x_1715_;
goto v___jp_1684_;
}
}
else
{
lean_object* v___x_1716_; 
lean_dec_ref_known(v___x_1710_, 1);
v___x_1716_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v_received_1685_ = v___x_1716_;
goto v___jp_1684_;
}
}
}
else
{
goto v___jp_1697_;
}
}
v___jp_1684_:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1686_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1687_ = lean_string_append(v___x_1686_, v_context_1681_);
v___x_1688_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1689_ = lean_string_append(v___x_1687_, v___x_1688_);
v___x_1690_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___closed__0));
v___x_1691_ = lean_string_append(v___x_1689_, v___x_1690_);
v___x_1692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1693_ = lean_string_append(v___x_1691_, v___x_1692_);
v___x_1694_ = lean_string_append(v___x_1693_, v_received_1685_);
lean_dec_ref(v_received_1685_);
v___x_1695_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1694_);
v___x_1696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1695_);
return v___x_1696_;
}
v___jp_1697_:
{
lean_object* v___x_1698_; 
v___x_1698_ = l_Lasm_JS_Data_describe(v_d_1682_);
v_received_1685_ = v___x_1698_;
goto v___jp_1684_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___boxed(lean_object* v_context_1717_, lean_object* v_d_1718_, lean_object* v_a_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0(v_context_1717_, v_d_1718_);
lean_dec_ref(v_context_1717_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0(lean_object* v_b_1721_, lean_object* v_args_1722_, uint8_t v_await_1723_){
_start:
{
uint64_t v___y_1726_; uint64_t v___y_1727_; uint64_t v___x_1762_; uint64_t v___y_1764_; 
v___x_1762_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1723_ == 0)
{
uint64_t v___x_1769_; 
v___x_1769_ = 0ULL;
v___y_1764_ = v___x_1769_;
goto v___jp_1763_;
}
else
{
uint64_t v___x_1770_; 
v___x_1770_ = 2ULL;
v___y_1764_ = v___x_1770_;
goto v___jp_1763_;
}
v___jp_1725_:
{
uint64_t v_flags_1728_; uint32_t v___x_1729_; lean_object* v___x_1730_; uint32_t v___x_1731_; lean_object* v___x_1732_; 
v_flags_1728_ = lean_uint64_lor(v___y_1726_, v___y_1727_);
v___x_1729_ = 214;
v___x_1730_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1721_, v_args_1722_);
v___x_1731_ = 0;
v___x_1732_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1729_, v_flags_1728_, v___x_1730_, v___x_1731_);
if (lean_obj_tag(v___x_1732_) == 0)
{
lean_object* v_a_1733_; lean_object* v___x_1734_; 
v_a_1733_ = lean_ctor_get(v___x_1732_, 0);
lean_inc(v_a_1733_);
lean_dec_ref_known(v___x_1732_, 1);
v___x_1734_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1733_);
lean_dec(v_a_1733_);
if (lean_obj_tag(v___x_1734_) == 0)
{
lean_object* v_a_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v_a_1735_ = lean_ctor_get(v___x_1734_, 0);
lean_inc(v_a_1735_);
lean_dec_ref_known(v___x_1734_, 1);
v___x_1736_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1721_);
v___x_1737_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0(v___x_1736_, v_a_1735_);
lean_dec_ref(v___x_1736_);
return v___x_1737_;
}
else
{
lean_object* v_a_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1745_; 
v_a_1738_ = lean_ctor_get(v___x_1734_, 0);
v_isSharedCheck_1745_ = !lean_is_exclusive(v___x_1734_);
if (v_isSharedCheck_1745_ == 0)
{
v___x_1740_ = v___x_1734_;
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_a_1738_);
lean_dec(v___x_1734_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1745_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1743_; 
if (v_isShared_1741_ == 0)
{
v___x_1743_ = v___x_1740_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v_a_1738_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
}
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1761_; 
v_a_1746_ = lean_ctor_get(v___x_1732_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1732_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1748_ = v___x_1732_;
v_isShared_1749_ = v_isSharedCheck_1761_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1732_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1761_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1759_; 
v___x_1750_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1751_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1721_);
v___x_1752_ = lean_string_append(v___x_1750_, v___x_1751_);
lean_dec_ref(v___x_1751_);
v___x_1753_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1754_ = lean_string_append(v___x_1752_, v___x_1753_);
v___x_1755_ = lean_io_error_to_string(v_a_1746_);
v___x_1756_ = lean_string_append(v___x_1754_, v___x_1755_);
lean_dec_ref(v___x_1755_);
v___x_1757_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1757_, 0, v___x_1756_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set(v___x_1748_, 0, v___x_1757_);
v___x_1759_ = v___x_1748_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1760_; 
v_reuseFailAlloc_1760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1760_, 0, v___x_1757_);
v___x_1759_ = v_reuseFailAlloc_1760_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
return v___x_1759_;
}
}
}
}
v___jp_1763_:
{
uint8_t v_construct_1765_; uint64_t v___x_1766_; 
v_construct_1765_ = lean_ctor_get_uint8(v_b_1721_, sizeof(void*)*4);
v___x_1766_ = lean_uint64_lor(v___x_1762_, v___y_1764_);
if (v_construct_1765_ == 0)
{
uint64_t v___x_1767_; 
v___x_1767_ = 0ULL;
v___y_1726_ = v___x_1766_;
v___y_1727_ = v___x_1767_;
goto v___jp_1725_;
}
else
{
uint64_t v___x_1768_; 
v___x_1768_ = 4ULL;
v___y_1726_ = v___x_1766_;
v___y_1727_ = v___x_1768_;
goto v___jp_1725_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0___boxed(lean_object* v_b_1771_, lean_object* v_args_1772_, lean_object* v_await_1773_, lean_object* v_a_1774_){
_start:
{
uint8_t v_await_boxed_1775_; lean_object* v_res_1776_; 
v_await_boxed_1775_ = lean_unbox(v_await_1773_);
v_res_1776_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0(v_b_1771_, v_args_1772_, v_await_boxed_1775_);
lean_dec_ref(v_b_1771_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime(){
_start:
{
uint8_t v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1786_ = 0;
v___x_1787_ = ((lean_object*)(l_Lasm_JS_Node_process_uptime___closed__2));
v___x_1788_ = lean_obj_once(&l_Lasm_JS_Node_process_cwd___closed__4, &l_Lasm_JS_Node_process_cwd___closed__4_once, _init_l_Lasm_JS_Node_process_cwd___closed__4);
v___x_1789_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0(v___x_1787_, v___x_1788_, v___x_1786_);
return v___x_1789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime___boxed(lean_object* v_a_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l_Lasm_JS_Node_process_uptime();
return v_res_1791_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Node_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Node_Process(uint8_t builtin) {
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
