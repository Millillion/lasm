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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_value_8_; lean_object* v___x_9_; 
v_value_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_value_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_value_8_);
return v___x_9_;
}
else
{
lean_object* v_value_10_; lean_object* v___x_11_; 
v_value_10_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_value_10_);
lean_dec_ref_known(v_t_6_, 1);
v___x_11_ = lean_apply_1(v_k_7_, v_value_10_);
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(lean_object* v_motive_12_, lean_object* v_ctorIdx_13_, lean_object* v_t_14_, lean_object* v_h_15_, lean_object* v_k_16_){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_14_, v_k_16_);
return v___x_17_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___boxed(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim(v_motive_18_, v_ctorIdx_19_, v_t_20_, v_h_21_, v_k_22_);
lean_dec(v_ctorIdx_19_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim___redArg(lean_object* v_t_24_, lean_object* v_longLong_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_24_, v_longLong_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_longLong_elim(lean_object* v_motive_27_, lean_object* v_t_28_, lean_object* v_h_29_, lean_object* v_longLong_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_28_, v_longLong_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim___redArg(lean_object* v_t_32_, lean_object* v_domString_33_){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_32_, v_domString_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_LongLongOrDOMString_domString_elim(lean_object* v_motive_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_domString_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lasm_JS_Node_LongLongOrDOMString_ctorElim___redArg(v_t_36_, v_domString_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSLongLongOrDOMString___lam__0(lean_object* v_x_40_){
_start:
{
if (lean_obj_tag(v_x_40_) == 0)
{
lean_object* v_value_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_53_; 
v_value_41_ = lean_ctor_get(v_x_40_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v_x_40_);
if (v_isSharedCheck_53_ == 0)
{
v___x_43_ = v_x_40_;
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_value_41_);
lean_dec(v_x_40_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
lean_object* v___x_45_; lean_object* v___x_46_; uint8_t v___x_47_; 
v___x_45_ = lean_nat_abs(v_value_41_);
v___x_46_ = lean_cstr_to_nat("9007199254740991");
v___x_47_ = lean_nat_dec_le(v___x_45_, v___x_46_);
lean_dec(v___x_45_);
if (v___x_47_ == 0)
{
lean_object* v___x_49_; 
if (v_isShared_44_ == 0)
{
lean_ctor_set_tag(v___x_43_, 5);
v___x_49_ = v___x_43_;
goto v_reusejp_48_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_value_41_);
v___x_49_ = v_reuseFailAlloc_50_;
goto v_reusejp_48_;
}
v_reusejp_48_:
{
return v___x_49_;
}
}
else
{
double v___x_51_; lean_object* v___x_52_; 
lean_del_object(v___x_43_);
v___x_51_ = l_Float_ofInt(v_value_41_);
lean_dec(v_value_41_);
v___x_52_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_52_, 0, v___x_51_);
return v___x_52_;
}
}
}
else
{
lean_object* v_value_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_61_; 
v_value_54_ = lean_ctor_get(v_x_40_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v_x_40_);
if (v_isSharedCheck_61_ == 0)
{
v___x_56_ = v_x_40_;
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_value_54_);
lean_dec(v_x_40_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_61_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_59_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set_tag(v___x_56_, 4);
v___x_59_ = v___x_56_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_value_54_);
v___x_59_ = v_reuseFailAlloc_60_;
goto v_reusejp_58_;
}
v_reusejp_58_:
{
return v___x_59_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeIntLongLongOrDOMString___lam__0(lean_object* v_value_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v_value_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringLongLongOrDOMString___lam__0(lean_object* v_value_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_69_, 0, v_value_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0(lean_object* v_x_78_){
_start:
{
switch(lean_obj_tag(v_x_78_))
{
case 3:
{
double v_n_79_; lean_object* v___x_80_; 
v_n_79_ = lean_ctor_get_float(v_x_78_, 0);
lean_dec_ref_known(v_x_78_, 0);
v___x_80_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_79_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v___x_81_; 
v___x_81_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__1));
return v___x_81_;
}
else
{
lean_object* v_val_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_90_; 
v_val_82_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_90_ == 0)
{
v___x_84_ = v___x_80_;
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_val_82_);
lean_dec(v___x_80_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_90_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_87_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set_tag(v___x_84_, 0);
v___x_87_ = v___x_84_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_val_82_);
v___x_87_ = v_reuseFailAlloc_89_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
lean_object* v___x_88_; 
v___x_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
}
}
case 4:
{
lean_object* v_s_91_; lean_object* v___x_93_; uint8_t v_isShared_94_; uint8_t v_isSharedCheck_99_; 
v_s_91_ = lean_ctor_get(v_x_78_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v_x_78_);
if (v_isSharedCheck_99_ == 0)
{
v___x_93_ = v_x_78_;
v_isShared_94_ = v_isSharedCheck_99_;
goto v_resetjp_92_;
}
else
{
lean_inc(v_s_91_);
lean_dec(v_x_78_);
v___x_93_ = lean_box(0);
v_isShared_94_ = v_isSharedCheck_99_;
goto v_resetjp_92_;
}
v_resetjp_92_:
{
lean_object* v___x_96_; 
if (v_isShared_94_ == 0)
{
lean_ctor_set_tag(v___x_93_, 1);
v___x_96_ = v___x_93_;
goto v_reusejp_95_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_s_91_);
v___x_96_ = v_reuseFailAlloc_98_;
goto v_reusejp_95_;
}
v_reusejp_95_:
{
lean_object* v___x_97_; 
v___x_97_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
return v___x_97_;
}
}
}
default: 
{
lean_object* v___x_100_; 
lean_dec(v_x_78_);
v___x_100_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__3));
return v___x_100_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(lean_object* v_x_108_){
_start:
{
if (lean_obj_tag(v_x_108_) == 0)
{
lean_object* v___x_109_; 
v___x_109_ = lean_unsigned_to_nat(0u);
return v___x_109_;
}
else
{
lean_object* v___x_110_; 
v___x_110_ = lean_unsigned_to_nat(1u);
return v___x_110_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx___boxed(lean_object* v_x_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorIdx(v_x_111_);
lean_dec_ref(v_x_111_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(lean_object* v_t_113_, lean_object* v_k_114_){
_start:
{
if (lean_obj_tag(v_t_113_) == 0)
{
lean_object* v_value_115_; lean_object* v___x_116_; 
v_value_115_ = lean_ctor_get(v_t_113_, 0);
lean_inc_ref(v_value_115_);
lean_dec_ref_known(v_t_113_, 1);
v___x_116_ = lean_apply_1(v_k_114_, v_value_115_);
return v___x_116_;
}
else
{
double v_value_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v_value_117_ = lean_ctor_get_float(v_t_113_, 0);
lean_dec_ref_known(v_t_113_, 0);
v___x_118_ = lean_box_float(v_value_117_);
v___x_119_ = lean_apply_1(v_k_114_, v___x_118_);
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(lean_object* v_motive_120_, lean_object* v_ctorIdx_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_k_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_122_, v_k_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___boxed(lean_object* v_motive_126_, lean_object* v_ctorIdx_127_, lean_object* v_t_128_, lean_object* v_h_129_, lean_object* v_k_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim(v_motive_126_, v_ctorIdx_127_, v_t_128_, v_h_129_, v_k_130_);
lean_dec(v_ctorIdx_127_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim___redArg(lean_object* v_t_132_, lean_object* v_domString_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_132_, v_domString_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_domString_elim(lean_object* v_motive_135_, lean_object* v_t_136_, lean_object* v_h_137_, lean_object* v_domString_138_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_136_, v_domString_138_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim___redArg(lean_object* v_t_140_, lean_object* v_double_141_){
_start:
{
lean_object* v___x_142_; 
v___x_142_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_140_, v_double_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_DOMStringOrDouble_double_elim(lean_object* v_motive_143_, lean_object* v_t_144_, lean_object* v_h_145_, lean_object* v_double_146_){
_start:
{
lean_object* v___x_147_; 
v___x_147_ = l_Lasm_JS_Node_DOMStringOrDouble_ctorElim___redArg(v_t_144_, v_double_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instToJSDOMStringOrDouble___lam__0(lean_object* v_x_148_){
_start:
{
if (lean_obj_tag(v_x_148_) == 0)
{
lean_object* v_value_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_156_; 
v_value_149_ = lean_ctor_get(v_x_148_, 0);
v_isSharedCheck_156_ = !lean_is_exclusive(v_x_148_);
if (v_isSharedCheck_156_ == 0)
{
v___x_151_ = v_x_148_;
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_value_149_);
lean_dec(v_x_148_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_156_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_154_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set_tag(v___x_151_, 4);
v___x_154_ = v___x_151_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v_value_149_);
v___x_154_ = v_reuseFailAlloc_155_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
return v___x_154_;
}
}
}
else
{
double v_value_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_164_; 
v_value_157_ = lean_ctor_get_float(v_x_148_, 0);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_148_);
if (v_isSharedCheck_164_ == 0)
{
v___x_159_ = v_x_148_;
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
else
{
lean_dec(v_x_148_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_164_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set_tag(v___x_159_, 3);
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_163_, 0, v_value_157_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeStringDOMStringOrDouble___lam__0(lean_object* v_value_167_){
_start:
{
lean_object* v___x_168_; 
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v_value_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(double v_value_171_){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = lean_alloc_ctor(1, 0, 8);
lean_ctor_set_float(v___x_172_, 0, v_value_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0___boxed(lean_object* v_value_173_){
_start:
{
double v_value_boxed_174_; lean_object* v_res_175_; 
v_value_boxed_174_ = lean_unbox_float(v_value_173_);
lean_dec_ref(v_value_173_);
v_res_175_ = l_Lasm_JS_Node_instCoeFloatDOMStringOrDouble___lam__0(v_value_boxed_174_);
return v_res_175_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4(void){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_183_ = lean_string_utf8_byte_size(v___x_182_);
return v___x_183_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__4);
v___x_186_ = lean_nat_dec_eq(v___x_185_, v___x_184_);
return v___x_186_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; 
v___x_191_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__9));
v___x_192_ = lean_unsigned_to_nat(46u);
v___x_193_ = lean_unsigned_to_nat(193u);
v___x_194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__8));
v___x_195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__7));
v___x_196_ = l_mkPanicMessageWithDecl(v___x_195_, v___x_194_, v___x_193_, v___x_192_, v___x_191_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_context_198_, lean_object* v_d_199_){
_start:
{
lean_object* v___y_202_; lean_object* v___y_203_; 
if (lean_obj_tag(v_d_199_) == 4)
{
lean_object* v_s_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
v_s_207_ = lean_ctor_get(v_d_199_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v_d_199_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v_d_199_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_s_207_);
lean_dec(v_d_199_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set_tag(v___x_209_, 0);
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_s_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
else
{
lean_object* v___x_215_; lean_object* v_received_217_; 
v___x_215_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
if (lean_obj_tag(v_d_199_) == 9)
{
lean_object* v_value_231_; lean_object* v_description_232_; uint8_t v___x_233_; 
v_value_231_ = lean_ctor_get(v_d_199_, 0);
v_description_232_ = lean_ctor_get(v_d_199_, 1);
v___x_233_ = lean_string_dec_eq(v_description_232_, v___x_215_);
if (v___x_233_ == 0)
{
goto v___jp_229_;
}
else
{
uint32_t v___x_234_; uint64_t v___x_235_; lean_object* v___x_236_; uint32_t v___x_237_; lean_object* v___x_238_; 
lean_inc_n(v_value_231_, 2);
lean_dec_ref_known(v_d_199_, 2);
v___x_234_ = 206;
v___x_235_ = 0ULL;
v___x_236_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_236_, 0, v_value_231_);
lean_ctor_set(v___x_236_, 1, v___x_215_);
v___x_237_ = lasm_js_value_handle(v_value_231_);
lean_dec(v_value_231_);
v___x_238_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_234_, v___x_235_, v___x_236_, v___x_237_);
lean_dec_ref_known(v___x_236_, 2);
if (lean_obj_tag(v___x_238_) == 0)
{
lean_object* v_a_239_; uint8_t v___x_240_; 
v_a_239_ = lean_ctor_get(v___x_238_, 0);
lean_inc(v_a_239_);
lean_dec_ref_known(v___x_238_, 1);
v___x_240_ = lean_string_validate_utf8(v_a_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; lean_object* v___x_242_; 
lean_dec(v_a_239_);
v___x_241_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10);
v___x_242_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_241_);
v_received_217_ = v___x_242_;
goto v___jp_216_;
}
else
{
lean_object* v___x_243_; 
v___x_243_ = lean_string_from_utf8_unchecked(v_a_239_);
v_received_217_ = v___x_243_;
goto v___jp_216_;
}
}
else
{
lean_object* v___x_244_; 
lean_dec_ref_known(v___x_238_, 1);
v___x_244_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11));
v_received_217_ = v___x_244_;
goto v___jp_216_;
}
}
}
else
{
goto v___jp_229_;
}
v___jp_216_:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; uint8_t v___x_227_; 
v___x_218_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_219_ = lean_string_append(v___x_218_, v_context_198_);
v___x_220_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_221_ = lean_string_append(v___x_219_, v___x_220_);
v___x_222_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__2));
v___x_223_ = lean_string_append(v___x_221_, v___x_222_);
v___x_224_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_225_ = lean_string_append(v___x_223_, v___x_224_);
v___x_226_ = lean_string_append(v___x_225_, v_received_217_);
lean_dec_ref(v_received_217_);
v___x_227_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_227_ == 0)
{
lean_object* v___x_228_; 
v___x_228_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___y_202_ = v___x_226_;
v___y_203_ = v___x_228_;
goto v___jp_201_;
}
else
{
v___y_202_ = v___x_226_;
v___y_203_ = v___x_215_;
goto v___jp_201_;
}
}
v___jp_229_:
{
lean_object* v___x_230_; 
v___x_230_ = l_Lasm_JS_Data_describe(v_d_199_);
v_received_217_ = v___x_230_;
goto v___jp_216_;
}
}
v___jp_201_:
{
lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_204_ = lean_string_append(v___y_202_, v___y_203_);
v___x_205_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
v___x_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_206_, 0, v___x_205_);
return v___x_206_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_context_245_, lean_object* v_d_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_245_, v_d_246_);
lean_dec_ref(v_context_245_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_249_, lean_object* v_bytes_250_){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_250_);
if (lean_obj_tag(v___x_252_) == 0)
{
lean_object* v_a_253_; lean_object* v___x_254_; 
v_a_253_ = lean_ctor_get(v___x_252_, 0);
lean_inc(v_a_253_);
lean_dec_ref_known(v___x_252_, 1);
v___x_254_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(v_context_249_, v_a_253_);
return v___x_254_;
}
else
{
lean_object* v_a_255_; lean_object* v___x_257_; uint8_t v_isShared_258_; uint8_t v_isSharedCheck_262_; 
v_a_255_ = lean_ctor_get(v___x_252_, 0);
v_isSharedCheck_262_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_262_ == 0)
{
v___x_257_ = v___x_252_;
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
else
{
lean_inc(v_a_255_);
lean_dec(v___x_252_);
v___x_257_ = lean_box(0);
v_isShared_258_ = v_isSharedCheck_262_;
goto v_resetjp_256_;
}
v_resetjp_256_:
{
lean_object* v___x_260_; 
if (v_isShared_258_ == 0)
{
v___x_260_ = v___x_257_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_a_255_);
v___x_260_ = v_reuseFailAlloc_261_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
return v___x_260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_263_, lean_object* v_bytes_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3(v_context_263_, v_bytes_264_);
lean_dec_ref(v_bytes_264_);
lean_dec_ref(v_context_263_);
return v_res_266_;
}
}
static uint64_t _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0(void){
_start:
{
uint8_t v___x_267_; uint64_t v___x_268_; 
v___x_267_ = 0;
v___x_268_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2(lean_object* v_o_270_, lean_object* v_key_271_){
_start:
{
lean_object* v_k_273_; lean_object* v___x_274_; 
v_k_273_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_273_, 0, v_key_271_);
v___x_274_ = l_Lasm_JS_Wire_encodeIO(v_k_273_);
if (lean_obj_tag(v___x_274_) == 0)
{
lean_object* v_a_275_; uint32_t v___x_276_; uint32_t v___x_277_; uint64_t v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v_a_275_ = lean_ctor_get(v___x_274_, 0);
lean_inc(v_a_275_);
lean_dec_ref_known(v___x_274_, 1);
v___x_276_ = 203;
v___x_277_ = lasm_js_value_handle(v_o_270_);
v___x_278_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_279_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_280_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_280_, 0, v_o_270_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = lean_unsigned_to_nat(2u);
v___x_282_ = lean_mk_empty_array_with_capacity(v___x_281_);
lean_inc_ref(v_k_273_);
v___x_283_ = lean_array_push(v___x_282_, v_k_273_);
v___x_284_ = lean_array_push(v___x_283_, v___x_280_);
v___x_285_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_285_, 0, v___x_284_);
v___x_286_ = lasm_js_call(v___x_276_, v___x_277_, v___x_278_, v_a_275_, v___x_285_);
lean_dec_ref_known(v___x_285_, 1);
lean_dec(v_a_275_);
if (lean_obj_tag(v___x_286_) == 0)
{
lean_object* v_a_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v_a_287_ = lean_ctor_get(v___x_286_, 0);
lean_inc(v_a_287_);
lean_dec_ref_known(v___x_286_, 1);
v___x_288_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_289_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_273_);
v___x_290_ = lean_string_append(v___x_288_, v___x_289_);
lean_dec_ref(v___x_289_);
v___x_291_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3(v___x_290_, v_a_287_);
lean_dec(v_a_287_);
lean_dec_ref(v___x_290_);
return v___x_291_;
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
lean_dec_ref_known(v_k_273_, 1);
v_a_292_ = lean_ctor_get(v___x_286_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_286_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___x_286_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_286_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec_ref_known(v_k_273_, 1);
lean_dec(v_o_270_);
v_a_300_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_274_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_274_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___boxed(lean_object* v_o_308_, lean_object* v_key_309_, lean_object* v_a_310_){
_start:
{
lean_object* v_res_311_; 
v_res_311_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2(v_o_308_, v_key_309_);
return v_res_311_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1(lean_object* v_module_313_, lean_object* v_o_314_, lean_object* v_a_315_){
_start:
{
if (lean_obj_tag(v_a_315_) == 0)
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
lean_dec(v_o_314_);
v___x_317_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_318_ = lean_string_append(v___x_317_, v_module_313_);
v___x_319_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
v___x_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
return v___x_320_;
}
else
{
lean_object* v_tail_321_; 
v_tail_321_ = lean_ctor_get(v_a_315_, 1);
if (lean_obj_tag(v_tail_321_) == 0)
{
lean_object* v_head_322_; lean_object* v___x_323_; 
v_head_322_ = lean_ctor_get(v_a_315_, 0);
lean_inc(v_head_322_);
lean_dec_ref_known(v_a_315_, 2);
v___x_323_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2(v_o_314_, v_head_322_);
return v___x_323_;
}
else
{
lean_object* v_head_324_; lean_object* v___x_325_; 
lean_inc(v_tail_321_);
v_head_324_ = lean_ctor_get(v_a_315_, 0);
lean_inc(v_head_324_);
lean_dec_ref_known(v_a_315_, 2);
v___x_325_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_314_, v_head_324_);
if (lean_obj_tag(v___x_325_) == 0)
{
lean_object* v_a_326_; 
v_a_326_ = lean_ctor_get(v___x_325_, 0);
lean_inc(v_a_326_);
lean_dec_ref_known(v___x_325_, 1);
v_o_314_ = v_a_326_;
v_a_315_ = v_tail_321_;
goto _start;
}
else
{
lean_object* v_a_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_335_; 
lean_dec(v_tail_321_);
v_a_328_ = lean_ctor_get(v___x_325_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_325_);
if (v_isSharedCheck_335_ == 0)
{
v___x_330_ = v___x_325_;
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_a_328_);
lean_dec(v___x_325_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_335_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_333_; 
if (v_isShared_331_ == 0)
{
v___x_333_ = v___x_330_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_328_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___boxed(lean_object* v_module_336_, lean_object* v_o_337_, lean_object* v_a_338_, lean_object* v_a_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1(v_module_336_, v_o_337_, v_a_338_);
lean_dec_ref(v_module_336_);
return v_res_340_;
}
}
static uint64_t _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0(void){
_start:
{
uint8_t v___x_341_; uint64_t v___x_342_; 
v___x_341_ = 1;
v___x_342_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(lean_object* v_specifier_344_){
_start:
{
uint32_t v___x_346_; uint32_t v___x_347_; uint64_t v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_346_ = 201;
v___x_347_ = 0;
v___x_348_ = lean_uint64_once(&l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0, &l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0_once, _init_l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__0);
v___x_349_ = lean_string_to_utf8(v_specifier_344_);
v___x_350_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCall(v___x_346_, v___x_347_, v___x_348_, v___x_349_);
lean_dec_ref(v___x_349_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
v___x_352_ = ((lean_object*)(l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___closed__1));
v___x_353_ = l_String_quote(v_specifier_344_);
v___x_354_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
v___x_355_ = lean_unsigned_to_nat(120u);
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = l_Std_Format_pretty(v___x_354_, v___x_355_, v___x_356_, v___x_356_);
v___x_358_ = lean_string_append(v___x_352_, v___x_357_);
lean_dec_ref(v___x_357_);
v___x_359_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_358_, v_a_351_);
lean_dec(v_a_351_);
lean_dec_ref(v___x_358_);
return v___x_359_;
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec_ref(v_specifier_344_);
v_a_360_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_350_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_350_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0___boxed(lean_object* v_specifier_368_, lean_object* v_a_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_specifier_368_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(lean_object* v_module_371_, lean_object* v_path_372_){
_start:
{
lean_object* v___x_374_; 
lean_inc_ref(v_module_371_);
v___x_374_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_371_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v___x_376_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v___x_374_, 1);
v___x_376_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1(v_module_371_, v_a_375_, v_path_372_);
lean_dec_ref(v_module_371_);
return v___x_376_;
}
else
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
lean_dec(v_path_372_);
lean_dec_ref(v_module_371_);
v_a_377_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_374_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_374_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0___boxed(lean_object* v_module_385_, lean_object* v_path_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v_module_385_, v_path_386_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch(){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_396_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__2));
v___x_397_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_395_, v___x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_arch___boxed(lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lasm_JS_Node_process_arch();
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(size_t v_sz_402_, size_t v_i_403_, lean_object* v_bs_404_){
_start:
{
uint8_t v___x_405_; 
v___x_405_ = lean_usize_dec_lt(v_i_403_, v_sz_402_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; 
v___x_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_406_, 0, v_bs_404_);
return v___x_406_;
}
else
{
lean_object* v_v_407_; 
v_v_407_ = lean_array_uget_borrowed(v_bs_404_, v_i_403_);
if (lean_obj_tag(v_v_407_) == 4)
{
lean_object* v_s_408_; lean_object* v___x_409_; lean_object* v_bs_x27_410_; size_t v___x_411_; size_t v___x_412_; lean_object* v___x_413_; 
v_s_408_ = lean_ctor_get(v_v_407_, 0);
lean_inc_ref(v_s_408_);
v___x_409_ = lean_unsigned_to_nat(0u);
v_bs_x27_410_ = lean_array_uset(v_bs_404_, v_i_403_, v___x_409_);
v___x_411_ = ((size_t)1ULL);
v___x_412_ = lean_usize_add(v_i_403_, v___x_411_);
v___x_413_ = lean_array_uset(v_bs_x27_410_, v_i_403_, v_s_408_);
v_i_403_ = v___x_412_;
v_bs_404_ = v___x_413_;
goto _start;
}
else
{
lean_object* v___x_415_; 
lean_dec_ref(v_bs_404_);
v___x_415_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_415_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_416_, lean_object* v_i_417_, lean_object* v_bs_418_){
_start:
{
size_t v_sz_boxed_419_; size_t v_i_boxed_420_; lean_object* v_res_421_; 
v_sz_boxed_419_ = lean_unbox_usize(v_sz_416_);
lean_dec(v_sz_416_);
v_i_boxed_420_ = lean_unbox_usize(v_i_417_);
lean_dec(v_i_417_);
v_res_421_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_419_, v_i_boxed_420_, v_bs_418_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_427_, lean_object* v_d_428_){
_start:
{
lean_object* v___y_431_; lean_object* v___y_432_; lean_object* v___y_437_; lean_object* v_received_438_; lean_object* v___y_457_; lean_object* v_a_460_; 
if (lean_obj_tag(v_d_428_) == 7)
{
lean_object* v_items_484_; size_t v_sz_485_; size_t v___x_486_; lean_object* v___x_487_; 
v_items_484_ = lean_ctor_get(v_d_428_, 0);
v_sz_485_ = lean_array_size(v_items_484_);
v___x_486_ = ((size_t)0ULL);
lean_inc_ref(v_items_484_);
v___x_487_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_sz_485_, v___x_486_, v_items_484_);
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; 
v_a_488_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_488_);
lean_dec_ref_known(v___x_487_, 1);
v___x_489_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__3));
v___x_490_ = lean_string_utf8_byte_size(v_a_488_);
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = lean_nat_dec_eq(v___x_490_, v___x_491_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_493_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_494_ = lean_string_append(v___x_493_, v_a_488_);
lean_dec(v_a_488_);
v___x_495_ = lean_string_append(v___x_489_, v___x_494_);
lean_dec_ref(v___x_494_);
v_a_460_ = v___x_495_;
goto v___jp_459_;
}
else
{
lean_dec(v_a_488_);
v_a_460_ = v___x_489_;
goto v___jp_459_;
}
}
else
{
if (lean_obj_tag(v___x_487_) == 0)
{
lean_object* v_a_496_; 
v_a_496_ = lean_ctor_get(v___x_487_, 0);
lean_inc(v_a_496_);
lean_dec_ref_known(v___x_487_, 1);
v_a_460_ = v_a_496_;
goto v___jp_459_;
}
else
{
lean_object* v_a_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_504_; 
lean_dec_ref_known(v_d_428_, 1);
v_a_497_ = lean_ctor_get(v___x_487_, 0);
v_isSharedCheck_504_ = !lean_is_exclusive(v___x_487_);
if (v_isSharedCheck_504_ == 0)
{
v___x_499_ = v___x_487_;
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_a_497_);
lean_dec(v___x_487_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_504_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v___x_502_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set_tag(v___x_499_, 0);
v___x_502_ = v___x_499_;
goto v_reusejp_501_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v_a_497_);
v___x_502_ = v_reuseFailAlloc_503_;
goto v_reusejp_501_;
}
v_reusejp_501_:
{
return v___x_502_;
}
}
}
}
}
else
{
lean_object* v___x_505_; 
v___x_505_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_460_ = v___x_505_;
goto v___jp_459_;
}
v___jp_430_:
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_433_ = lean_string_append(v___y_431_, v___y_432_);
lean_dec_ref(v___y_432_);
v___x_434_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
v___x_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
return v___x_435_;
}
v___jp_436_:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v___x_439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_440_ = lean_string_append(v___x_439_, v_context_427_);
v___x_441_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_442_ = lean_string_append(v___x_440_, v___x_441_);
v___x_443_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_444_ = lean_string_append(v___x_442_, v___x_443_);
v___x_445_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_446_ = lean_string_append(v___x_444_, v___x_445_);
v___x_447_ = lean_string_append(v___x_446_, v_received_438_);
lean_dec_ref(v_received_438_);
v___x_448_ = lean_string_utf8_byte_size(v___y_437_);
v___x_449_ = lean_unsigned_to_nat(0u);
v___x_450_ = lean_nat_dec_eq(v___x_448_, v___x_449_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; 
v___x_451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_452_ = lean_string_append(v___x_451_, v___y_437_);
lean_dec_ref(v___y_437_);
v___x_453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_454_ = lean_string_append(v___x_452_, v___x_453_);
v___y_431_ = v___x_447_;
v___y_432_ = v___x_454_;
goto v___jp_430_;
}
else
{
lean_object* v___x_455_; 
lean_dec_ref(v___y_437_);
v___x_455_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_431_ = v___x_447_;
v___y_432_ = v___x_455_;
goto v___jp_430_;
}
}
v___jp_456_:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lasm_JS_Data_describe(v_d_428_);
v___y_437_ = v___y_457_;
v_received_438_ = v___x_458_;
goto v___jp_436_;
}
v___jp_459_:
{
if (lean_obj_tag(v_d_428_) == 9)
{
lean_object* v_value_461_; lean_object* v_description_462_; lean_object* v___x_463_; uint8_t v___x_464_; 
v_value_461_ = lean_ctor_get(v_d_428_, 0);
v_description_462_ = lean_ctor_get(v_d_428_, 1);
v___x_463_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_464_ = lean_string_dec_eq(v_description_462_, v___x_463_);
if (v___x_464_ == 0)
{
v___y_457_ = v_a_460_;
goto v___jp_456_;
}
else
{
lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_481_; 
lean_inc(v_value_461_);
v_isSharedCheck_481_ = !lean_is_exclusive(v_d_428_);
if (v_isSharedCheck_481_ == 0)
{
lean_object* v_unused_482_; lean_object* v_unused_483_; 
v_unused_482_ = lean_ctor_get(v_d_428_, 1);
lean_dec(v_unused_482_);
v_unused_483_ = lean_ctor_get(v_d_428_, 0);
lean_dec(v_unused_483_);
v___x_466_ = v_d_428_;
v_isShared_467_ = v_isSharedCheck_481_;
goto v_resetjp_465_;
}
else
{
lean_dec(v_d_428_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_481_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
uint32_t v___x_468_; uint64_t v___x_469_; lean_object* v___x_471_; 
v___x_468_ = 206;
v___x_469_ = 0ULL;
lean_inc(v_value_461_);
if (v_isShared_467_ == 0)
{
lean_ctor_set(v___x_466_, 1, v___x_463_);
v___x_471_ = v___x_466_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_value_461_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v___x_463_);
v___x_471_ = v_reuseFailAlloc_480_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
uint32_t v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lasm_js_value_handle(v_value_461_);
lean_dec(v_value_461_);
v___x_473_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_468_, v___x_469_, v___x_471_, v___x_472_);
lean_dec_ref(v___x_471_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; uint8_t v___x_475_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_a_474_);
lean_dec_ref_known(v___x_473_, 1);
v___x_475_ = lean_string_validate_utf8(v_a_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_476_; lean_object* v___x_477_; 
lean_dec(v_a_474_);
v___x_476_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10);
v___x_477_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_476_);
v___y_437_ = v_a_460_;
v_received_438_ = v___x_477_;
goto v___jp_436_;
}
else
{
lean_object* v___x_478_; 
v___x_478_ = lean_string_from_utf8_unchecked(v_a_474_);
v___y_437_ = v_a_460_;
v_received_438_ = v___x_478_;
goto v___jp_436_;
}
}
else
{
lean_object* v___x_479_; 
lean_dec_ref_known(v___x_473_, 1);
v___x_479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11));
v___y_437_ = v_a_460_;
v_received_438_ = v___x_479_;
goto v___jp_436_;
}
}
}
}
}
else
{
v___y_457_ = v_a_460_;
goto v___jp_456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_506_, lean_object* v_d_507_, lean_object* v_a_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_506_, v_d_507_);
lean_dec_ref(v_context_506_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_510_, lean_object* v_bytes_511_){
_start:
{
lean_object* v___x_513_; 
v___x_513_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_511_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref_known(v___x_513_, 1);
v___x_515_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_510_, v_a_514_);
return v___x_515_;
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
v_a_516_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_513_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_513_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_524_, lean_object* v_bytes_525_, lean_object* v_a_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2(v_context_524_, v_bytes_525_);
lean_dec_ref(v_bytes_525_);
lean_dec_ref(v_context_524_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1(lean_object* v_o_528_, lean_object* v_key_529_){
_start:
{
lean_object* v_k_531_; lean_object* v___x_532_; 
v_k_531_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_531_, 0, v_key_529_);
v___x_532_ = l_Lasm_JS_Wire_encodeIO(v_k_531_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; uint32_t v___x_534_; uint32_t v___x_535_; uint64_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v___x_532_, 1);
v___x_534_ = 203;
v___x_535_ = lasm_js_value_handle(v_o_528_);
v___x_536_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_537_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_538_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_538_, 0, v_o_528_);
lean_ctor_set(v___x_538_, 1, v___x_537_);
v___x_539_ = lean_unsigned_to_nat(2u);
v___x_540_ = lean_mk_empty_array_with_capacity(v___x_539_);
lean_inc_ref(v_k_531_);
v___x_541_ = lean_array_push(v___x_540_, v_k_531_);
v___x_542_ = lean_array_push(v___x_541_, v___x_538_);
v___x_543_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
v___x_544_ = lasm_js_call(v___x_534_, v___x_535_, v___x_536_, v_a_533_, v___x_543_);
lean_dec_ref_known(v___x_543_, 1);
lean_dec(v_a_533_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_a_545_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_544_, 1);
v___x_546_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_547_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_531_);
v___x_548_ = lean_string_append(v___x_546_, v___x_547_);
lean_dec_ref(v___x_547_);
v___x_549_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2(v___x_548_, v_a_545_);
lean_dec(v_a_545_);
lean_dec_ref(v___x_548_);
return v___x_549_;
}
else
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_557_; 
lean_dec_ref_known(v_k_531_, 1);
v_a_550_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_557_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_557_ == 0)
{
v___x_552_ = v___x_544_;
v_isShared_553_ = v_isSharedCheck_557_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_544_);
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
lean_dec_ref_known(v_k_531_, 1);
lean_dec(v_o_528_);
v_a_558_ = lean_ctor_get(v___x_532_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v___x_532_);
if (v_isSharedCheck_565_ == 0)
{
v___x_560_ = v___x_532_;
v_isShared_561_ = v_isSharedCheck_565_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_a_558_);
lean_dec(v___x_532_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1___boxed(lean_object* v_o_566_, lean_object* v_key_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1(v_o_566_, v_key_567_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(lean_object* v_module_570_, lean_object* v_o_571_, lean_object* v_a_572_){
_start:
{
if (lean_obj_tag(v_a_572_) == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec(v_o_571_);
v___x_574_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_575_ = lean_string_append(v___x_574_, v_module_570_);
v___x_576_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
v___x_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
else
{
lean_object* v_tail_578_; 
v_tail_578_ = lean_ctor_get(v_a_572_, 1);
if (lean_obj_tag(v_tail_578_) == 0)
{
lean_object* v_head_579_; lean_object* v___x_580_; 
v_head_579_ = lean_ctor_get(v_a_572_, 0);
lean_inc(v_head_579_);
lean_dec_ref_known(v_a_572_, 2);
v___x_580_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1(v_o_571_, v_head_579_);
return v___x_580_;
}
else
{
lean_object* v_head_581_; lean_object* v___x_582_; 
lean_inc(v_tail_578_);
v_head_581_ = lean_ctor_get(v_a_572_, 0);
lean_inc(v_head_581_);
lean_dec_ref_known(v_a_572_, 2);
v___x_582_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_571_, v_head_581_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_582_, 1);
v_o_571_ = v_a_583_;
v_a_572_ = v_tail_578_;
goto _start;
}
else
{
lean_object* v_a_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_592_; 
lean_dec(v_tail_578_);
v_a_585_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_592_ == 0)
{
v___x_587_ = v___x_582_;
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_a_585_);
lean_dec(v___x_582_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_592_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_590_; 
if (v_isShared_588_ == 0)
{
v___x_590_ = v___x_587_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_585_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0___boxed(lean_object* v_module_593_, lean_object* v_o_594_, lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(v_module_593_, v_o_594_, v_a_595_);
lean_dec_ref(v_module_593_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(lean_object* v_module_598_, lean_object* v_path_599_){
_start:
{
lean_object* v___x_601_; 
lean_inc_ref(v_module_598_);
v___x_601_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_598_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_603_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0(v_module_598_, v_a_602_, v_path_599_);
lean_dec_ref(v_module_598_);
return v___x_603_;
}
else
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
lean_dec(v_path_599_);
lean_dec_ref(v_module_598_);
v_a_604_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_611_ == 0)
{
v___x_606_ = v___x_601_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_601_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_604_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0___boxed(lean_object* v_module_612_, lean_object* v_path_613_, lean_object* v_a_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v_module_612_, v_path_613_);
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv(){
_start:
{
lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_622_ = ((lean_object*)(l_Lasm_JS_Node_process_argv___closed__1));
v___x_623_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_621_, v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_argv___boxed(lean_object* v_a_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lasm_JS_Node_process_argv();
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4(size_t v_sz_629_, size_t v_i_630_, lean_object* v_bs_631_){
_start:
{
uint8_t v___x_634_; 
v___x_634_ = lean_usize_dec_lt(v_i_630_, v_sz_629_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; 
v___x_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_635_, 0, v_bs_631_);
return v___x_635_;
}
else
{
lean_object* v_v_636_; 
v_v_636_ = lean_array_uget_borrowed(v_bs_631_, v_i_630_);
if (lean_obj_tag(v_v_636_) == 7)
{
lean_object* v_items_637_; lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v_items_637_ = lean_ctor_get(v_v_636_, 0);
v___x_638_ = lean_array_get_size(v_items_637_);
v___x_639_ = lean_unsigned_to_nat(2u);
v___x_640_ = lean_nat_dec_eq(v___x_638_, v___x_639_);
if (v___x_640_ == 0)
{
lean_dec_ref(v_bs_631_);
goto v___jp_632_;
}
else
{
lean_object* v___x_641_; lean_object* v___x_642_; 
v___x_641_ = lean_unsigned_to_nat(0u);
v___x_642_ = lean_array_fget_borrowed(v_items_637_, v___x_641_);
if (lean_obj_tag(v___x_642_) == 4)
{
lean_object* v_s_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v_s_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc_ref(v_s_643_);
v___x_644_ = lean_unsigned_to_nat(1u);
v___x_645_ = lean_array_fget_borrowed(v_items_637_, v___x_644_);
if (lean_obj_tag(v___x_645_) == 4)
{
lean_object* v_s_646_; lean_object* v_bs_x27_647_; lean_object* v___x_648_; size_t v___x_649_; size_t v___x_650_; lean_object* v___x_651_; 
v_s_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc_ref(v_s_646_);
v_bs_x27_647_ = lean_array_uset(v_bs_631_, v_i_630_, v___x_641_);
v___x_648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_648_, 0, v_s_643_);
lean_ctor_set(v___x_648_, 1, v_s_646_);
v___x_649_ = ((size_t)1ULL);
v___x_650_ = lean_usize_add(v_i_630_, v___x_649_);
v___x_651_ = lean_array_uset(v_bs_x27_647_, v_i_630_, v___x_648_);
v_i_630_ = v___x_650_;
v_bs_631_ = v___x_651_;
goto _start;
}
else
{
lean_object* v___x_653_; 
lean_dec_ref(v_s_643_);
lean_dec_ref(v_bs_631_);
v___x_653_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_653_;
}
}
else
{
lean_object* v___x_654_; 
lean_dec_ref(v_bs_631_);
v___x_654_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
return v___x_654_;
}
}
}
else
{
lean_dec_ref(v_bs_631_);
goto v___jp_632_;
}
}
v___jp_632_:
{
lean_object* v___x_633_; 
v___x_633_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___closed__1));
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_655_, lean_object* v_i_656_, lean_object* v_bs_657_){
_start:
{
size_t v_sz_boxed_658_; size_t v_i_boxed_659_; lean_object* v_res_660_; 
v_sz_boxed_658_ = lean_unbox_usize(v_sz_655_);
lean_dec(v_sz_655_);
v_i_boxed_659_ = lean_unbox_usize(v_i_656_);
lean_dec(v_i_656_);
v_res_660_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4(v_sz_boxed_658_, v_i_boxed_659_, v_bs_657_);
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3(lean_object* v_context_663_, lean_object* v_d_664_){
_start:
{
lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_673_; lean_object* v_received_674_; lean_object* v___y_693_; lean_object* v_a_696_; 
if (lean_obj_tag(v_d_664_) == 7)
{
lean_object* v_items_720_; size_t v_sz_721_; size_t v___x_722_; lean_object* v___x_723_; 
v_items_720_ = lean_ctor_get(v_d_664_, 0);
v_sz_721_ = lean_array_size(v_items_720_);
v___x_722_ = ((size_t)0ULL);
lean_inc_ref(v_items_720_);
v___x_723_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3_spec__4(v_sz_721_, v___x_722_, v_items_720_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
lean_dec_ref_known(v___x_723_, 1);
v___x_725_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__1));
v___x_726_ = lean_string_utf8_byte_size(v_a_724_);
v___x_727_ = lean_unsigned_to_nat(0u);
v___x_728_ = lean_nat_dec_eq(v___x_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; 
v___x_729_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_730_ = lean_string_append(v___x_729_, v_a_724_);
lean_dec(v_a_724_);
v___x_731_ = lean_string_append(v___x_725_, v___x_730_);
lean_dec_ref(v___x_730_);
v_a_696_ = v___x_731_;
goto v___jp_695_;
}
else
{
lean_dec(v_a_724_);
v_a_696_ = v___x_725_;
goto v___jp_695_;
}
}
else
{
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_732_; 
v_a_732_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_732_);
lean_dec_ref_known(v___x_723_, 1);
v_a_696_ = v_a_732_;
goto v___jp_695_;
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec_ref_known(v_d_664_, 1);
v_a_733_ = lean_ctor_get(v___x_723_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_723_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_723_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
lean_ctor_set_tag(v___x_735_, 0);
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
}
else
{
lean_object* v___x_741_; 
v___x_741_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_696_ = v___x_741_;
goto v___jp_695_;
}
v___jp_666_:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_669_ = lean_string_append(v___y_667_, v___y_668_);
lean_dec_ref(v___y_668_);
v___x_670_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
v___x_671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_671_, 0, v___x_670_);
return v___x_671_;
}
v___jp_672_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_675_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_676_ = lean_string_append(v___x_675_, v_context_663_);
v___x_677_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_678_ = lean_string_append(v___x_676_, v___x_677_);
v___x_679_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___closed__0));
v___x_680_ = lean_string_append(v___x_678_, v___x_679_);
v___x_681_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_682_ = lean_string_append(v___x_680_, v___x_681_);
v___x_683_ = lean_string_append(v___x_682_, v_received_674_);
lean_dec_ref(v_received_674_);
v___x_684_ = lean_string_utf8_byte_size(v___y_673_);
v___x_685_ = lean_unsigned_to_nat(0u);
v___x_686_ = lean_nat_dec_eq(v___x_684_, v___x_685_);
if (v___x_686_ == 0)
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_687_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_688_ = lean_string_append(v___x_687_, v___y_673_);
lean_dec_ref(v___y_673_);
v___x_689_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_690_ = lean_string_append(v___x_688_, v___x_689_);
v___y_667_ = v___x_683_;
v___y_668_ = v___x_690_;
goto v___jp_666_;
}
else
{
lean_object* v___x_691_; 
lean_dec_ref(v___y_673_);
v___x_691_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_667_ = v___x_683_;
v___y_668_ = v___x_691_;
goto v___jp_666_;
}
}
v___jp_692_:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lasm_JS_Data_describe(v_d_664_);
v___y_673_ = v___y_693_;
v_received_674_ = v___x_694_;
goto v___jp_672_;
}
v___jp_695_:
{
if (lean_obj_tag(v_d_664_) == 9)
{
lean_object* v_value_697_; lean_object* v_description_698_; lean_object* v___x_699_; uint8_t v___x_700_; 
v_value_697_ = lean_ctor_get(v_d_664_, 0);
v_description_698_ = lean_ctor_get(v_d_664_, 1);
v___x_699_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_700_ = lean_string_dec_eq(v_description_698_, v___x_699_);
if (v___x_700_ == 0)
{
v___y_693_ = v_a_696_;
goto v___jp_692_;
}
else
{
lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_717_; 
lean_inc(v_value_697_);
v_isSharedCheck_717_ = !lean_is_exclusive(v_d_664_);
if (v_isSharedCheck_717_ == 0)
{
lean_object* v_unused_718_; lean_object* v_unused_719_; 
v_unused_718_ = lean_ctor_get(v_d_664_, 1);
lean_dec(v_unused_718_);
v_unused_719_ = lean_ctor_get(v_d_664_, 0);
lean_dec(v_unused_719_);
v___x_702_ = v_d_664_;
v_isShared_703_ = v_isSharedCheck_717_;
goto v_resetjp_701_;
}
else
{
lean_dec(v_d_664_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_717_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
uint32_t v___x_704_; uint64_t v___x_705_; lean_object* v___x_707_; 
v___x_704_ = 206;
v___x_705_ = 0ULL;
lean_inc(v_value_697_);
if (v_isShared_703_ == 0)
{
lean_ctor_set(v___x_702_, 1, v___x_699_);
v___x_707_ = v___x_702_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_value_697_);
lean_ctor_set(v_reuseFailAlloc_716_, 1, v___x_699_);
v___x_707_ = v_reuseFailAlloc_716_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
uint32_t v___x_708_; lean_object* v___x_709_; 
v___x_708_ = lasm_js_value_handle(v_value_697_);
lean_dec(v_value_697_);
v___x_709_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_704_, v___x_705_, v___x_707_, v___x_708_);
lean_dec_ref(v___x_707_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; uint8_t v___x_711_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
v___x_711_ = lean_string_validate_utf8(v_a_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; lean_object* v___x_713_; 
lean_dec(v_a_710_);
v___x_712_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10);
v___x_713_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_712_);
v___y_673_ = v_a_696_;
v_received_674_ = v___x_713_;
goto v___jp_672_;
}
else
{
lean_object* v___x_714_; 
v___x_714_ = lean_string_from_utf8_unchecked(v_a_710_);
v___y_673_ = v_a_696_;
v_received_674_ = v___x_714_;
goto v___jp_672_;
}
}
else
{
lean_object* v___x_715_; 
lean_dec_ref_known(v___x_709_, 1);
v___x_715_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11));
v___y_673_ = v_a_696_;
v_received_674_ = v___x_715_;
goto v___jp_672_;
}
}
}
}
}
else
{
v___y_693_ = v_a_696_;
goto v___jp_692_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3___boxed(lean_object* v_context_742_, lean_object* v_d_743_, lean_object* v_a_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3(v_context_742_, v_d_743_);
lean_dec_ref(v_context_742_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2(lean_object* v_b_746_, lean_object* v_args_747_, uint8_t v_await_748_){
_start:
{
uint64_t v___y_751_; uint64_t v___y_752_; uint64_t v___x_795_; uint64_t v___y_797_; 
v___x_795_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_748_ == 0)
{
uint64_t v___x_802_; 
v___x_802_ = 0ULL;
v___y_797_ = v___x_802_;
goto v___jp_796_;
}
else
{
uint64_t v___x_803_; 
v___x_803_ = 2ULL;
v___y_797_ = v___x_803_;
goto v___jp_796_;
}
v___jp_750_:
{
uint64_t v_flags_753_; uint32_t v___x_754_; lean_object* v___x_755_; uint32_t v___x_756_; lean_object* v___x_757_; 
v_flags_753_ = lean_uint64_lor(v___y_751_, v___y_752_);
v___x_754_ = 214;
v___x_755_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_746_, v_args_747_);
v___x_756_ = 0;
v___x_757_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_754_, v_flags_753_, v___x_755_, v___x_756_);
lean_dec(v___x_755_);
if (lean_obj_tag(v___x_757_) == 0)
{
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; lean_object* v___x_759_; 
v_a_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_758_);
lean_dec_ref_known(v___x_757_, 1);
v___x_759_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_758_);
lean_dec(v_a_758_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; lean_object* v___x_761_; lean_object* v___x_762_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref_known(v___x_759_, 1);
v___x_761_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_746_);
v___x_762_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2_spec__3(v___x_761_, v_a_760_);
lean_dec_ref(v___x_761_);
return v___x_762_;
}
else
{
lean_object* v_a_763_; lean_object* v___x_765_; uint8_t v_isShared_766_; uint8_t v_isSharedCheck_770_; 
v_a_763_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_770_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_770_ == 0)
{
v___x_765_ = v___x_759_;
v_isShared_766_ = v_isSharedCheck_770_;
goto v_resetjp_764_;
}
else
{
lean_inc(v_a_763_);
lean_dec(v___x_759_);
v___x_765_ = lean_box(0);
v_isShared_766_ = v_isSharedCheck_770_;
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
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v_a_763_);
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
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
v_a_771_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_757_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_757_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
lean_ctor_set_tag(v___x_773_, 1);
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_794_; 
v_a_779_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_794_ == 0)
{
v___x_781_ = v___x_757_;
v_isShared_782_ = v_isSharedCheck_794_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_757_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_794_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_783_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_784_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_746_);
v___x_785_ = lean_string_append(v___x_783_, v___x_784_);
lean_dec_ref(v___x_784_);
v___x_786_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_787_ = lean_string_append(v___x_785_, v___x_786_);
v___x_788_ = lean_io_error_to_string(v_a_779_);
v___x_789_ = lean_string_append(v___x_787_, v___x_788_);
lean_dec_ref(v___x_788_);
v___x_790_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
if (v_isShared_782_ == 0)
{
lean_ctor_set(v___x_781_, 0, v___x_790_);
v___x_792_ = v___x_781_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
v___jp_796_:
{
uint8_t v_construct_798_; uint64_t v___x_799_; 
v_construct_798_ = lean_ctor_get_uint8(v_b_746_, sizeof(void*)*4);
v___x_799_ = lean_uint64_lor(v___x_795_, v___y_797_);
if (v_construct_798_ == 0)
{
uint64_t v___x_800_; 
v___x_800_ = 0ULL;
v___y_751_ = v___x_799_;
v___y_752_ = v___x_800_;
goto v___jp_750_;
}
else
{
uint64_t v___x_801_; 
v___x_801_ = 4ULL;
v___y_751_ = v___x_799_;
v___y_752_ = v___x_801_;
goto v___jp_750_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2___boxed(lean_object* v_b_804_, lean_object* v_args_805_, lean_object* v_await_806_, lean_object* v_a_807_){
_start:
{
uint8_t v_await_boxed_808_; lean_object* v_res_809_; 
v_await_boxed_808_ = lean_unbox(v_await_806_);
v_res_809_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2(v_b_804_, v_args_805_, v_await_boxed_808_);
lean_dec_ref(v_b_804_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(lean_object* v_v_819_){
_start:
{
uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_821_ = 0;
v___x_822_ = lean_unsigned_to_nat(1u);
v___x_823_ = ((lean_object*)(l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___closed__3));
v___x_824_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_825_, 0, v_v_819_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
v___x_826_ = lean_mk_empty_array_with_capacity(v___x_822_);
v___x_827_ = lean_array_push(v___x_826_, v___x_825_);
v___x_828_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1_spec__2(v___x_823_, v___x_827_, v___x_821_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
v_a_837_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_828_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_828_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1___boxed(lean_object* v_v_845_, lean_object* v_a_846_){
_start:
{
lean_object* v_res_847_; 
v_res_847_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(v_v_845_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0(lean_object* v_module_848_, lean_object* v_o_849_, lean_object* v_a_850_){
_start:
{
if (lean_obj_tag(v_a_850_) == 0)
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
lean_dec(v_o_849_);
v___x_852_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_853_ = lean_string_append(v___x_852_, v_module_848_);
v___x_854_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
v___x_855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
return v___x_855_;
}
else
{
lean_object* v_tail_856_; 
v_tail_856_ = lean_ctor_get(v_a_850_, 1);
if (lean_obj_tag(v_tail_856_) == 0)
{
lean_object* v_head_857_; lean_object* v___x_858_; 
v_head_857_ = lean_ctor_get(v_a_850_, 0);
lean_inc(v_head_857_);
lean_dec_ref_known(v_a_850_, 2);
v___x_858_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_849_, v_head_857_);
return v___x_858_;
}
else
{
lean_object* v_head_859_; lean_object* v___x_860_; 
lean_inc(v_tail_856_);
v_head_859_ = lean_ctor_get(v_a_850_, 0);
lean_inc(v_head_859_);
lean_dec_ref_known(v_a_850_, 2);
v___x_860_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_849_, v_head_859_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v_o_849_ = v_a_861_;
v_a_850_ = v_tail_856_;
goto _start;
}
else
{
lean_dec(v_tail_856_);
return v___x_860_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0___boxed(lean_object* v_module_863_, lean_object* v_o_864_, lean_object* v_a_865_, lean_object* v_a_866_){
_start:
{
lean_object* v_res_867_; 
v_res_867_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0(v_module_863_, v_o_864_, v_a_865_);
lean_dec_ref(v_module_863_);
return v_res_867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(lean_object* v_module_868_, lean_object* v_path_869_){
_start:
{
lean_object* v___x_871_; 
lean_inc_ref(v_module_868_);
v___x_871_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_868_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_873_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
lean_inc(v_a_872_);
lean_dec_ref_known(v___x_871_, 1);
v___x_873_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0_spec__0(v_module_868_, v_a_872_, v_path_869_);
lean_dec_ref(v_module_868_);
return v___x_873_;
}
else
{
lean_dec(v_path_869_);
lean_dec_ref(v_module_868_);
return v___x_871_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0___boxed(lean_object* v_module_874_, lean_object* v_path_875_, lean_object* v_a_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v_module_874_, v_path_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env(){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_883_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_884_ = ((lean_object*)(l_Lasm_JS_Node_process_env___closed__1));
v___x_885_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v___x_883_, v___x_884_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_887_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(v_a_886_);
return v___x_887_;
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
v_a_888_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_885_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_885_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_env___boxed(lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lasm_JS_Node_process_env();
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv(){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_903_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_904_ = ((lean_object*)(l_Lasm_JS_Node_process_execArgv___closed__1));
v___x_905_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0(v___x_903_, v___x_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execArgv___boxed(lean_object* v_a_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lasm_JS_Node_process_execArgv();
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath(){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_913_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_914_ = ((lean_object*)(l_Lasm_JS_Node_process_execPath___closed__1));
v___x_915_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_913_, v___x_914_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_execPath___boxed(lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lasm_JS_Node_process_execPath();
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_919_, lean_object* v_d_920_){
_start:
{
lean_object* v___y_926_; lean_object* v___y_927_; lean_object* v___y_932_; lean_object* v_received_933_; lean_object* v___y_952_; lean_object* v_a_955_; lean_object* v_a_980_; 
switch(lean_obj_tag(v_d_920_))
{
case 1:
{
goto v___jp_922_;
}
case 0:
{
goto v___jp_922_;
}
default: 
{
switch(lean_obj_tag(v_d_920_))
{
case 3:
{
double v_n_983_; lean_object* v___x_984_; 
v_n_983_ = lean_ctor_get_float(v_d_920_, 0);
v___x_984_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_983_);
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v___x_985_; 
v___x_985_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0));
v_a_955_ = v___x_985_;
goto v___jp_954_;
}
else
{
lean_object* v_val_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
lean_dec_ref_known(v_d_920_, 0);
v_val_986_ = lean_ctor_get(v___x_984_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_984_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_val_986_);
lean_dec(v___x_984_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set_tag(v___x_988_, 0);
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_val_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
v_a_980_ = v___x_991_;
goto v___jp_979_;
}
}
}
}
case 4:
{
lean_object* v_s_994_; lean_object* v___x_995_; 
v_s_994_ = lean_ctor_get(v_d_920_, 0);
lean_inc_ref(v_s_994_);
lean_dec_ref_known(v_d_920_, 1);
v___x_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_995_, 0, v_s_994_);
v_a_980_ = v___x_995_;
goto v___jp_979_;
}
default: 
{
lean_object* v___x_996_; 
v___x_996_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_955_ = v___x_996_;
goto v___jp_954_;
}
}
}
}
v___jp_922_:
{
lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_923_ = lean_box(0);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
v___jp_925_:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_928_ = lean_string_append(v___y_926_, v___y_927_);
lean_dec_ref(v___y_927_);
v___x_929_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_929_, 0, v___x_928_);
v___x_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
return v___x_930_;
}
v___jp_931_:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; uint8_t v___x_945_; 
v___x_934_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_935_ = lean_string_append(v___x_934_, v_context_919_);
v___x_936_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_937_ = lean_string_append(v___x_935_, v___x_936_);
v___x_938_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
v___x_940_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_941_ = lean_string_append(v___x_939_, v___x_940_);
v___x_942_ = lean_string_append(v___x_941_, v_received_933_);
lean_dec_ref(v_received_933_);
v___x_943_ = lean_string_utf8_byte_size(v___y_932_);
v___x_944_ = lean_unsigned_to_nat(0u);
v___x_945_ = lean_nat_dec_eq(v___x_943_, v___x_944_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
v___x_946_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_947_ = lean_string_append(v___x_946_, v___y_932_);
v___x_948_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_949_ = lean_string_append(v___x_947_, v___x_948_);
v___y_926_ = v___x_942_;
v___y_927_ = v___x_949_;
goto v___jp_925_;
}
else
{
lean_object* v___x_950_; 
v___x_950_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_926_ = v___x_942_;
v___y_927_ = v___x_950_;
goto v___jp_925_;
}
}
v___jp_951_:
{
lean_object* v___x_953_; 
v___x_953_ = l_Lasm_JS_Data_describe(v_d_920_);
v___y_932_ = v___y_952_;
v_received_933_ = v___x_953_;
goto v___jp_931_;
}
v___jp_954_:
{
if (lean_obj_tag(v_d_920_) == 9)
{
lean_object* v_value_956_; lean_object* v_description_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
v_value_956_ = lean_ctor_get(v_d_920_, 0);
v_description_957_ = lean_ctor_get(v_d_920_, 1);
v___x_958_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_959_ = lean_string_dec_eq(v_description_957_, v___x_958_);
if (v___x_959_ == 0)
{
v___y_952_ = v_a_955_;
goto v___jp_951_;
}
else
{
lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_976_; 
lean_inc(v_value_956_);
v_isSharedCheck_976_ = !lean_is_exclusive(v_d_920_);
if (v_isSharedCheck_976_ == 0)
{
lean_object* v_unused_977_; lean_object* v_unused_978_; 
v_unused_977_ = lean_ctor_get(v_d_920_, 1);
lean_dec(v_unused_977_);
v_unused_978_ = lean_ctor_get(v_d_920_, 0);
lean_dec(v_unused_978_);
v___x_961_ = v_d_920_;
v_isShared_962_ = v_isSharedCheck_976_;
goto v_resetjp_960_;
}
else
{
lean_dec(v_d_920_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_976_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
uint32_t v___x_963_; uint64_t v___x_964_; lean_object* v___x_966_; 
v___x_963_ = 206;
v___x_964_ = 0ULL;
lean_inc(v_value_956_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v___x_958_);
v___x_966_ = v___x_961_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_value_956_);
lean_ctor_set(v_reuseFailAlloc_975_, 1, v___x_958_);
v___x_966_ = v_reuseFailAlloc_975_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
uint32_t v___x_967_; lean_object* v___x_968_; 
v___x_967_ = lasm_js_value_handle(v_value_956_);
lean_dec(v_value_956_);
v___x_968_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_963_, v___x_964_, v___x_966_, v___x_967_);
lean_dec_ref(v___x_966_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; uint8_t v___x_970_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = lean_string_validate_utf8(v_a_969_);
if (v___x_970_ == 0)
{
lean_object* v___x_971_; lean_object* v___x_972_; 
lean_dec(v_a_969_);
v___x_971_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10);
v___x_972_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_971_);
v___y_932_ = v_a_955_;
v_received_933_ = v___x_972_;
goto v___jp_931_;
}
else
{
lean_object* v___x_973_; 
v___x_973_ = lean_string_from_utf8_unchecked(v_a_969_);
v___y_932_ = v_a_955_;
v_received_933_ = v___x_973_;
goto v___jp_931_;
}
}
else
{
lean_object* v___x_974_; 
lean_dec_ref_known(v___x_968_, 1);
v___x_974_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11));
v___y_932_ = v_a_955_;
v_received_933_ = v___x_974_;
goto v___jp_931_;
}
}
}
}
}
else
{
v___y_952_ = v_a_955_;
goto v___jp_951_;
}
}
v___jp_979_:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_981_, 0, v_a_980_);
v___x_982_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
return v___x_982_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_997_, lean_object* v_d_998_, lean_object* v_a_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_997_, v_d_998_);
lean_dec_ref(v_context_997_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_1001_, lean_object* v_bytes_1002_){
_start:
{
lean_object* v___x_1004_; 
v___x_1004_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1002_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_1001_, v_a_1005_);
return v___x_1006_;
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1014_; 
v_a_1007_ = lean_ctor_get(v___x_1004_, 0);
v_isSharedCheck_1014_ = !lean_is_exclusive(v___x_1004_);
if (v_isSharedCheck_1014_ == 0)
{
v___x_1009_ = v___x_1004_;
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_a_1007_);
lean_dec(v___x_1004_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1014_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v___x_1012_; 
if (v_isShared_1010_ == 0)
{
v___x_1012_ = v___x_1009_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_a_1007_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1015_, lean_object* v_bytes_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(v_context_1015_, v_bytes_1016_);
lean_dec_ref(v_bytes_1016_);
lean_dec_ref(v_context_1015_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(lean_object* v_o_1019_, lean_object* v_key_1020_){
_start:
{
lean_object* v_k_1022_; lean_object* v___x_1023_; 
v_k_1022_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1022_, 0, v_key_1020_);
v___x_1023_ = l_Lasm_JS_Wire_encodeIO(v_k_1022_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; uint32_t v___x_1025_; uint32_t v___x_1026_; uint64_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1025_ = 203;
v___x_1026_ = lasm_js_value_handle(v_o_1019_);
v___x_1027_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_1028_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_1029_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1029_, 0, v_o_1019_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
v___x_1030_ = lean_unsigned_to_nat(2u);
v___x_1031_ = lean_mk_empty_array_with_capacity(v___x_1030_);
lean_inc_ref(v_k_1022_);
v___x_1032_ = lean_array_push(v___x_1031_, v_k_1022_);
v___x_1033_ = lean_array_push(v___x_1032_, v___x_1029_);
v___x_1034_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
v___x_1035_ = lasm_js_call(v___x_1025_, v___x_1026_, v___x_1027_, v_a_1024_, v___x_1034_);
lean_dec_ref_known(v___x_1034_, 1);
lean_dec(v_a_1024_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref_known(v___x_1035_, 1);
v___x_1037_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_1038_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1022_);
v___x_1039_ = lean_string_append(v___x_1037_, v___x_1038_);
lean_dec_ref(v___x_1038_);
v___x_1040_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1_spec__2(v___x_1039_, v_a_1036_);
lean_dec(v_a_1036_);
lean_dec_ref(v___x_1039_);
return v___x_1040_;
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_dec_ref_known(v_k_1022_, 1);
v_a_1041_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___x_1035_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___x_1035_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
else
{
lean_object* v_a_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1056_; 
lean_dec_ref_known(v_k_1022_, 1);
lean_dec(v_o_1019_);
v_a_1049_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1056_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1051_ = v___x_1023_;
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_a_1049_);
lean_dec(v___x_1023_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1056_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1054_; 
if (v_isShared_1052_ == 0)
{
v___x_1054_ = v___x_1051_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_a_1049_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1057_, lean_object* v_key_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(v_o_1057_, v_key_1058_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(lean_object* v_module_1061_, lean_object* v_o_1062_, lean_object* v_a_1063_){
_start:
{
if (lean_obj_tag(v_a_1063_) == 0)
{
lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
lean_dec(v_o_1062_);
v___x_1065_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_1066_ = lean_string_append(v___x_1065_, v_module_1061_);
v___x_1067_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
v___x_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
return v___x_1068_;
}
else
{
lean_object* v_tail_1069_; 
v_tail_1069_ = lean_ctor_get(v_a_1063_, 1);
if (lean_obj_tag(v_tail_1069_) == 0)
{
lean_object* v_head_1070_; lean_object* v___x_1071_; 
v_head_1070_ = lean_ctor_get(v_a_1063_, 0);
lean_inc(v_head_1070_);
lean_dec_ref_known(v_a_1063_, 2);
v___x_1071_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0_spec__1(v_o_1062_, v_head_1070_);
return v___x_1071_;
}
else
{
lean_object* v_head_1072_; lean_object* v___x_1073_; 
lean_inc(v_tail_1069_);
v_head_1072_ = lean_ctor_get(v_a_1063_, 0);
lean_inc(v_head_1072_);
lean_dec_ref_known(v_a_1063_, 2);
v___x_1073_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1062_, v_head_1072_);
if (lean_obj_tag(v___x_1073_) == 0)
{
lean_object* v_a_1074_; 
v_a_1074_ = lean_ctor_get(v___x_1073_, 0);
lean_inc(v_a_1074_);
lean_dec_ref_known(v___x_1073_, 1);
v_o_1062_ = v_a_1074_;
v_a_1063_ = v_tail_1069_;
goto _start;
}
else
{
lean_object* v_a_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1083_; 
lean_dec(v_tail_1069_);
v_a_1076_ = lean_ctor_get(v___x_1073_, 0);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1073_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1078_ = v___x_1073_;
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_a_1076_);
lean_dec(v___x_1073_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1083_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1081_; 
if (v_isShared_1079_ == 0)
{
v___x_1081_ = v___x_1078_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v_a_1076_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0___boxed(lean_object* v_module_1084_, lean_object* v_o_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_){
_start:
{
lean_object* v_res_1088_; 
v_res_1088_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(v_module_1084_, v_o_1085_, v_a_1086_);
lean_dec_ref(v_module_1084_);
return v_res_1088_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(lean_object* v_module_1089_, lean_object* v_path_1090_){
_start:
{
lean_object* v___x_1092_; 
lean_inc_ref(v_module_1089_);
v___x_1092_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_1089_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0_spec__0(v_module_1089_, v_a_1093_, v_path_1090_);
lean_dec_ref(v_module_1089_);
return v___x_1094_;
}
else
{
lean_object* v_a_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1102_; 
lean_dec(v_path_1090_);
lean_dec_ref(v_module_1089_);
v_a_1095_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1102_ == 0)
{
v___x_1097_ = v___x_1092_;
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_a_1095_);
lean_dec(v___x_1092_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1102_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1100_; 
if (v_isShared_1098_ == 0)
{
v___x_1100_ = v___x_1097_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v_a_1095_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0___boxed(lean_object* v_module_1103_, lean_object* v_path_1104_, lean_object* v_a_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v_module_1103_, v_path_1104_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode(){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1112_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1113_ = ((lean_object*)(l_Lasm_JS_Node_process_exitCode___closed__1));
v___x_1114_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_exitCode_spec__0(v___x_1112_, v___x_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exitCode___boxed(lean_object* v_a_1115_){
_start:
{
lean_object* v_res_1116_; 
v_res_1116_ = l_Lasm_JS_Node_process_exitCode();
return v_res_1116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_context_1118_, lean_object* v_d_1119_){
_start:
{
lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1128_; lean_object* v_received_1129_; lean_object* v___y_1148_; lean_object* v_a_1151_; 
switch(lean_obj_tag(v_d_1119_))
{
case 3:
{
double v_n_1175_; lean_object* v___x_1176_; 
v_n_1175_ = lean_ctor_get_float(v_d_1119_, 0);
v___x_1176_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1175_);
if (lean_obj_tag(v___x_1176_) == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__0));
v_a_1151_ = v___x_1177_;
goto v___jp_1150_;
}
else
{
lean_object* v_val_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_dec_ref_known(v_d_1119_, 0);
v_val_1178_ = lean_ctor_get(v___x_1176_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1176_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1176_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_val_1178_);
lean_dec(v___x_1176_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
lean_ctor_set_tag(v___x_1180_, 0);
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_val_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
case 5:
{
lean_object* v_i_1186_; lean_object* v___x_1187_; 
v_i_1186_ = lean_ctor_get(v_d_1119_, 0);
lean_inc(v_i_1186_);
lean_dec_ref_known(v_d_1119_, 1);
v___x_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1187_, 0, v_i_1186_);
return v___x_1187_;
}
default: 
{
lean_object* v___x_1188_; 
v___x_1188_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v_a_1151_ = v___x_1188_;
goto v___jp_1150_;
}
}
v___jp_1121_:
{
lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v___x_1124_ = lean_string_append(v___y_1122_, v___y_1123_);
lean_dec_ref(v___y_1123_);
v___x_1125_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1124_);
v___x_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
return v___x_1126_;
}
v___jp_1127_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1130_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1131_ = lean_string_append(v___x_1130_, v_context_1118_);
v___x_1132_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1133_ = lean_string_append(v___x_1131_, v___x_1132_);
v___x_1134_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___closed__0));
v___x_1135_ = lean_string_append(v___x_1133_, v___x_1134_);
v___x_1136_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1137_ = lean_string_append(v___x_1135_, v___x_1136_);
v___x_1138_ = lean_string_append(v___x_1137_, v_received_1129_);
lean_dec_ref(v_received_1129_);
v___x_1139_ = lean_string_utf8_byte_size(v___y_1128_);
v___x_1140_ = lean_unsigned_to_nat(0u);
v___x_1141_ = lean_nat_dec_eq(v___x_1139_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v___x_1142_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__1));
v___x_1143_ = lean_string_append(v___x_1142_, v___y_1128_);
v___x_1144_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__2));
v___x_1145_ = lean_string_append(v___x_1143_, v___x_1144_);
v___y_1122_ = v___x_1138_;
v___y_1123_ = v___x_1145_;
goto v___jp_1121_;
}
else
{
lean_object* v___x_1146_; 
v___x_1146_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___y_1122_ = v___x_1138_;
v___y_1123_ = v___x_1146_;
goto v___jp_1121_;
}
}
v___jp_1147_:
{
lean_object* v___x_1149_; 
v___x_1149_ = l_Lasm_JS_Data_describe(v_d_1119_);
v___y_1128_ = v___y_1148_;
v_received_1129_ = v___x_1149_;
goto v___jp_1127_;
}
v___jp_1150_:
{
if (lean_obj_tag(v_d_1119_) == 9)
{
lean_object* v_value_1152_; lean_object* v_description_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; 
v_value_1152_ = lean_ctor_get(v_d_1119_, 0);
v_description_1153_ = lean_ctor_get(v_d_1119_, 1);
v___x_1154_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_1155_ = lean_string_dec_eq(v_description_1153_, v___x_1154_);
if (v___x_1155_ == 0)
{
v___y_1148_ = v_a_1151_;
goto v___jp_1147_;
}
else
{
lean_object* v___x_1157_; uint8_t v_isShared_1158_; uint8_t v_isSharedCheck_1172_; 
lean_inc(v_value_1152_);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_d_1119_);
if (v_isSharedCheck_1172_ == 0)
{
lean_object* v_unused_1173_; lean_object* v_unused_1174_; 
v_unused_1173_ = lean_ctor_get(v_d_1119_, 1);
lean_dec(v_unused_1173_);
v_unused_1174_ = lean_ctor_get(v_d_1119_, 0);
lean_dec(v_unused_1174_);
v___x_1157_ = v_d_1119_;
v_isShared_1158_ = v_isSharedCheck_1172_;
goto v_resetjp_1156_;
}
else
{
lean_dec(v_d_1119_);
v___x_1157_ = lean_box(0);
v_isShared_1158_ = v_isSharedCheck_1172_;
goto v_resetjp_1156_;
}
v_resetjp_1156_:
{
uint32_t v___x_1159_; uint64_t v___x_1160_; lean_object* v___x_1162_; 
v___x_1159_ = 206;
v___x_1160_ = 0ULL;
lean_inc(v_value_1152_);
if (v_isShared_1158_ == 0)
{
lean_ctor_set(v___x_1157_, 1, v___x_1154_);
v___x_1162_ = v___x_1157_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_value_1152_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v___x_1154_);
v___x_1162_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
uint32_t v___x_1163_; lean_object* v___x_1164_; 
v___x_1163_ = lasm_js_value_handle(v_value_1152_);
lean_dec(v_value_1152_);
v___x_1164_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1159_, v___x_1160_, v___x_1162_, v___x_1163_);
lean_dec_ref(v___x_1162_);
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; uint8_t v___x_1166_; 
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
lean_inc(v_a_1165_);
lean_dec_ref_known(v___x_1164_, 1);
v___x_1166_ = lean_string_validate_utf8(v_a_1165_);
if (v___x_1166_ == 0)
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
lean_dec(v_a_1165_);
v___x_1167_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10);
v___x_1168_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1167_);
v___y_1128_ = v_a_1151_;
v_received_1129_ = v___x_1168_;
goto v___jp_1127_;
}
else
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_string_from_utf8_unchecked(v_a_1165_);
v___y_1128_ = v_a_1151_;
v_received_1129_ = v___x_1169_;
goto v___jp_1127_;
}
}
else
{
lean_object* v___x_1170_; 
lean_dec_ref_known(v___x_1164_, 1);
v___x_1170_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11));
v___y_1128_ = v_a_1151_;
v_received_1129_ = v___x_1170_;
goto v___jp_1127_;
}
}
}
}
}
else
{
v___y_1148_ = v_a_1151_;
goto v___jp_1147_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_context_1189_, lean_object* v_d_1190_, lean_object* v_a_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_1189_, v_d_1190_);
lean_dec_ref(v_context_1189_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2(lean_object* v_context_1193_, lean_object* v_bytes_1194_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_1194_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1198_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1198_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2_spec__3(v_context_1193_, v_a_1197_);
return v___x_1198_;
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1201_; uint8_t v_isShared_1202_; uint8_t v_isSharedCheck_1206_; 
v_a_1199_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1206_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1206_ == 0)
{
v___x_1201_ = v___x_1196_;
v_isShared_1202_ = v_isSharedCheck_1206_;
goto v_resetjp_1200_;
}
else
{
lean_inc(v_a_1199_);
lean_dec(v___x_1196_);
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
v_reuseFailAlloc_1205_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_context_1207_, lean_object* v_bytes_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v_res_1210_; 
v_res_1210_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2(v_context_1207_, v_bytes_1208_);
lean_dec_ref(v_bytes_1208_);
lean_dec_ref(v_context_1207_);
return v_res_1210_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1(lean_object* v_o_1211_, lean_object* v_key_1212_){
_start:
{
lean_object* v_k_1214_; lean_object* v___x_1215_; 
v_k_1214_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_1214_, 0, v_key_1212_);
v___x_1215_ = l_Lasm_JS_Wire_encodeIO(v_k_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_object* v_a_1216_; uint32_t v___x_1217_; uint32_t v___x_1218_; uint64_t v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; 
v_a_1216_ = lean_ctor_get(v___x_1215_, 0);
lean_inc(v_a_1216_);
lean_dec_ref_known(v___x_1215_, 1);
v___x_1217_ = 203;
v___x_1218_ = lasm_js_value_handle(v_o_1211_);
v___x_1219_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
v___x_1220_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
v___x_1221_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1221_, 0, v_o_1211_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = lean_unsigned_to_nat(2u);
v___x_1223_ = lean_mk_empty_array_with_capacity(v___x_1222_);
lean_inc_ref(v_k_1214_);
v___x_1224_ = lean_array_push(v___x_1223_, v_k_1214_);
v___x_1225_ = lean_array_push(v___x_1224_, v___x_1221_);
v___x_1226_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1226_, 0, v___x_1225_);
v___x_1227_ = lasm_js_call(v___x_1217_, v___x_1218_, v___x_1219_, v_a_1216_, v___x_1226_);
lean_dec_ref_known(v___x_1226_, 1);
lean_dec(v_a_1216_);
if (lean_obj_tag(v___x_1227_) == 0)
{
lean_object* v_a_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
v_a_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc(v_a_1228_);
lean_dec_ref_known(v___x_1227_, 1);
v___x_1229_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__1));
v___x_1230_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_1214_);
v___x_1231_ = lean_string_append(v___x_1229_, v___x_1230_);
lean_dec_ref(v___x_1230_);
v___x_1232_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1_spec__2(v___x_1231_, v_a_1228_);
lean_dec(v_a_1228_);
lean_dec_ref(v___x_1231_);
return v___x_1232_;
}
else
{
lean_object* v_a_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1240_; 
lean_dec_ref_known(v_k_1214_, 1);
v_a_1233_ = lean_ctor_get(v___x_1227_, 0);
v_isSharedCheck_1240_ = !lean_is_exclusive(v___x_1227_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1235_ = v___x_1227_;
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_a_1233_);
lean_dec(v___x_1227_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1240_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v___x_1238_; 
if (v_isShared_1236_ == 0)
{
v___x_1238_ = v___x_1235_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v_a_1233_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
return v___x_1238_;
}
}
}
}
else
{
lean_object* v_a_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1248_; 
lean_dec_ref_known(v_k_1214_, 1);
lean_dec(v_o_1211_);
v_a_1241_ = lean_ctor_get(v___x_1215_, 0);
v_isSharedCheck_1248_ = !lean_is_exclusive(v___x_1215_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1243_ = v___x_1215_;
v_isShared_1244_ = v_isSharedCheck_1248_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_a_1241_);
lean_dec(v___x_1215_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1___boxed(lean_object* v_o_1249_, lean_object* v_key_1250_, lean_object* v_a_1251_){
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1(v_o_1249_, v_key_1250_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0(lean_object* v_module_1253_, lean_object* v_o_1254_, lean_object* v_a_1255_){
_start:
{
if (lean_obj_tag(v_a_1255_) == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
lean_dec(v_o_1254_);
v___x_1257_ = ((lean_object*)(l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1___closed__0));
v___x_1258_ = lean_string_append(v___x_1257_, v_module_1253_);
v___x_1259_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
v___x_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
return v___x_1260_;
}
else
{
lean_object* v_tail_1261_; 
v_tail_1261_ = lean_ctor_get(v_a_1255_, 1);
if (lean_obj_tag(v_tail_1261_) == 0)
{
lean_object* v_head_1262_; lean_object* v___x_1263_; 
v_head_1262_ = lean_ctor_get(v_a_1255_, 0);
lean_inc(v_head_1262_);
lean_dec_ref_known(v_a_1255_, 2);
v___x_1263_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0_spec__1(v_o_1254_, v_head_1262_);
return v___x_1263_;
}
else
{
lean_object* v_head_1264_; lean_object* v___x_1265_; 
lean_inc(v_tail_1261_);
v_head_1264_ = lean_ctor_get(v_a_1255_, 0);
lean_inc(v_head_1264_);
lean_dec_ref_known(v_a_1255_, 2);
v___x_1265_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__0(v_o_1254_, v_head_1264_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
lean_inc(v_a_1266_);
lean_dec_ref_known(v___x_1265_, 1);
v_o_1254_ = v_a_1266_;
v_a_1255_ = v_tail_1261_;
goto _start;
}
else
{
lean_object* v_a_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1275_; 
lean_dec(v_tail_1261_);
v_a_1268_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1270_ = v___x_1265_;
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_a_1268_);
lean_dec(v___x_1265_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1275_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___x_1273_; 
if (v_isShared_1271_ == 0)
{
v___x_1273_ = v___x_1270_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_a_1268_);
v___x_1273_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
return v___x_1273_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0___boxed(lean_object* v_module_1276_, lean_object* v_o_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0(v_module_1276_, v_o_1277_, v_a_1278_);
lean_dec_ref(v_module_1276_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(lean_object* v_module_1281_, lean_object* v_path_1282_){
_start:
{
lean_object* v___x_1284_; 
lean_inc_ref(v_module_1281_);
v___x_1284_ = l_Lasm_JS_require___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__0(v_module_1281_);
if (lean_obj_tag(v___x_1284_) == 0)
{
lean_object* v_a_1285_; lean_object* v___x_1286_; 
v_a_1285_ = lean_ctor_get(v___x_1284_, 0);
lean_inc(v_a_1285_);
lean_dec_ref_known(v___x_1284_, 1);
v___x_1286_ = l_Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0_spec__0(v_module_1281_, v_a_1285_, v_path_1282_);
lean_dec_ref(v_module_1281_);
return v___x_1286_;
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec(v_path_1282_);
lean_dec_ref(v_module_1281_);
v_a_1287_ = lean_ctor_get(v___x_1284_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1284_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1284_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1284_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0___boxed(lean_object* v_module_1295_, lean_object* v_path_1296_, lean_object* v_a_1297_){
_start:
{
lean_object* v_res_1298_; 
v_res_1298_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(v_module_1295_, v_path_1296_);
return v_res_1298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid(){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1304_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1305_ = ((lean_object*)(l_Lasm_JS_Node_process_pid___closed__1));
v___x_1306_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(v___x_1304_, v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_pid___boxed(lean_object* v_a_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_Lasm_JS_Node_process_pid();
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform(){
_start:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1314_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1315_ = ((lean_object*)(l_Lasm_JS_Node_process_platform___closed__1));
v___x_1316_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1314_, v___x_1315_);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_platform___boxed(lean_object* v_a_1317_){
_start:
{
lean_object* v_res_1318_; 
v_res_1318_ = l_Lasm_JS_Node_process_platform();
return v_res_1318_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid(){
_start:
{
lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1325_ = ((lean_object*)(l_Lasm_JS_Node_process_ppid___closed__1));
v___x_1326_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_pid_spec__0(v___x_1324_, v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_ppid___boxed(lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = l_Lasm_JS_Node_process_ppid();
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title(){
_start:
{
lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; 
v___x_1334_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1335_ = ((lean_object*)(l_Lasm_JS_Node_process_title___closed__1));
v___x_1336_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1334_, v___x_1335_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_title___boxed(lean_object* v_a_1337_){
_start:
{
lean_object* v_res_1338_; 
v_res_1338_ = l_Lasm_JS_Node_process_title();
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version(){
_start:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1344_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1345_ = ((lean_object*)(l_Lasm_JS_Node_process_version___closed__1));
v___x_1346_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0(v___x_1344_, v___x_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_version___boxed(lean_object* v_a_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lasm_JS_Node_process_version();
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions(){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1354_ = ((lean_object*)(l_Lasm_JS_Node_process_arch___closed__0));
v___x_1355_ = ((lean_object*)(l_Lasm_JS_Node_process_versions___closed__1));
v___x_1356_ = l_Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_env_spec__0(v___x_1354_, v___x_1355_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v_a_1357_; lean_object* v___x_1358_; 
v_a_1357_ = lean_ctor_get(v___x_1356_, 0);
lean_inc(v_a_1357_);
lean_dec_ref_known(v___x_1356_, 1);
v___x_1358_ = l_Lasm_JS_Node_Support_recordOf___at___00Lasm_JS_Node_process_env_spec__1(v_a_1357_);
return v___x_1358_;
}
else
{
lean_object* v_a_1359_; lean_object* v___x_1361_; uint8_t v_isShared_1362_; uint8_t v_isSharedCheck_1366_; 
v_a_1359_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1361_ = v___x_1356_;
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
else
{
lean_inc(v_a_1359_);
lean_dec(v___x_1356_);
v___x_1361_ = lean_box(0);
v_isShared_1362_ = v_isSharedCheck_1366_;
goto v_resetjp_1360_;
}
v_resetjp_1360_:
{
lean_object* v___x_1364_; 
if (v_isShared_1362_ == 0)
{
v___x_1364_ = v___x_1361_;
goto v_reusejp_1363_;
}
else
{
lean_object* v_reuseFailAlloc_1365_; 
v_reuseFailAlloc_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1365_, 0, v_a_1359_);
v___x_1364_ = v_reuseFailAlloc_1365_;
goto v_reusejp_1363_;
}
v_reusejp_1363_:
{
return v___x_1364_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_versions___boxed(lean_object* v_a_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lasm_JS_Node_process_versions();
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1370_ = lean_box(0);
v___x_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1370_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg___boxed(lean_object* v_a_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg();
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(lean_object* v_b_1374_, lean_object* v_args_1375_, uint8_t v_await_1376_){
_start:
{
uint64_t v___y_1379_; uint64_t v___y_1380_; uint64_t v___x_1421_; uint64_t v___y_1423_; 
v___x_1421_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1376_ == 0)
{
uint64_t v___x_1428_; 
v___x_1428_ = 0ULL;
v___y_1423_ = v___x_1428_;
goto v___jp_1422_;
}
else
{
uint64_t v___x_1429_; 
v___x_1429_ = 2ULL;
v___y_1423_ = v___x_1429_;
goto v___jp_1422_;
}
v___jp_1378_:
{
uint64_t v_flags_1381_; uint32_t v___x_1382_; lean_object* v___x_1383_; uint32_t v___x_1384_; lean_object* v___x_1385_; 
v_flags_1381_ = lean_uint64_lor(v___y_1379_, v___y_1380_);
v___x_1382_ = 214;
v___x_1383_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1374_, v_args_1375_);
v___x_1384_ = 0;
v___x_1385_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1382_, v_flags_1381_, v___x_1383_, v___x_1384_);
lean_dec(v___x_1383_);
if (lean_obj_tag(v___x_1385_) == 0)
{
if (lean_obj_tag(v___x_1385_) == 0)
{
lean_object* v_a_1386_; lean_object* v___x_1387_; 
v_a_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc(v_a_1386_);
lean_dec_ref_known(v___x_1385_, 1);
v___x_1387_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1386_);
lean_dec(v_a_1386_);
if (lean_obj_tag(v___x_1387_) == 0)
{
lean_object* v___x_1388_; 
lean_dec_ref_known(v___x_1387_, 1);
v___x_1388_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg();
return v___x_1388_;
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
v_a_1389_ = lean_ctor_get(v___x_1387_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1387_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1387_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1387_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
v_a_1397_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1385_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1385_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
lean_ctor_set_tag(v___x_1399_, 1);
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
else
{
lean_object* v_a_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1420_; 
v_a_1405_ = lean_ctor_get(v___x_1385_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1385_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1407_ = v___x_1385_;
v_isShared_1408_ = v_isSharedCheck_1420_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_a_1405_);
lean_dec(v___x_1385_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1420_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1418_; 
v___x_1409_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1410_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1374_);
v___x_1411_ = lean_string_append(v___x_1409_, v___x_1410_);
lean_dec_ref(v___x_1410_);
v___x_1412_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1413_ = lean_string_append(v___x_1411_, v___x_1412_);
v___x_1414_ = lean_io_error_to_string(v_a_1405_);
v___x_1415_ = lean_string_append(v___x_1413_, v___x_1414_);
lean_dec_ref(v___x_1414_);
v___x_1416_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 0, v___x_1416_);
v___x_1418_ = v___x_1407_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v___x_1416_);
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
v___jp_1422_:
{
uint8_t v_construct_1424_; uint64_t v___x_1425_; 
v_construct_1424_ = lean_ctor_get_uint8(v_b_1374_, sizeof(void*)*4);
v___x_1425_ = lean_uint64_lor(v___x_1421_, v___y_1423_);
if (v_construct_1424_ == 0)
{
uint64_t v___x_1426_; 
v___x_1426_ = 0ULL;
v___y_1379_ = v___x_1425_;
v___y_1380_ = v___x_1426_;
goto v___jp_1378_;
}
else
{
uint64_t v___x_1427_; 
v___x_1427_ = 4ULL;
v___y_1379_ = v___x_1425_;
v___y_1380_ = v___x_1427_;
goto v___jp_1378_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0___boxed(lean_object* v_b_1430_, lean_object* v_args_1431_, lean_object* v_await_1432_, lean_object* v_a_1433_){
_start:
{
uint8_t v_await_boxed_1434_; lean_object* v_res_1435_; 
v_await_boxed_1434_ = lean_unbox(v_await_1432_);
v_res_1435_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v_b_1430_, v_args_1431_, v_await_boxed_1434_);
lean_dec_ref(v_b_1430_);
return v_res_1435_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir(lean_object* v_directory_1444_){
_start:
{
uint8_t v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
v___x_1446_ = 0;
v___x_1447_ = lean_unsigned_to_nat(1u);
v___x_1448_ = ((lean_object*)(l_Lasm_JS_Node_process_chdir___closed__2));
v___x_1449_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1449_, 0, v_directory_1444_);
v___x_1450_ = lean_mk_empty_array_with_capacity(v___x_1447_);
v___x_1451_ = lean_array_push(v___x_1450_, v___x_1449_);
v___x_1452_ = l_Lasm_JS_Web_Support_args(v___x_1451_);
v___x_1453_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v___x_1448_, v___x_1452_, v___x_1446_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_chdir___boxed(lean_object* v_directory_1454_, lean_object* v_a_1455_){
_start:
{
lean_object* v_res_1456_; 
v_res_1456_ = l_Lasm_JS_Node_process_chdir(v_directory_1454_);
return v_res_1456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0(lean_object* v_context_1457_, lean_object* v_d_1458_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___redArg();
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0___boxed(lean_object* v_context_1461_, lean_object* v_d_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0_spec__0(v_context_1461_, v_d_1462_);
lean_dec(v_d_1462_);
lean_dec_ref(v_context_1461_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0(lean_object* v_b_1465_, lean_object* v_args_1466_, uint8_t v_await_1467_){
_start:
{
uint64_t v___y_1470_; uint64_t v___y_1471_; uint64_t v___x_1514_; uint64_t v___y_1516_; 
v___x_1514_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1467_ == 0)
{
uint64_t v___x_1521_; 
v___x_1521_ = 0ULL;
v___y_1516_ = v___x_1521_;
goto v___jp_1515_;
}
else
{
uint64_t v___x_1522_; 
v___x_1522_ = 2ULL;
v___y_1516_ = v___x_1522_;
goto v___jp_1515_;
}
v___jp_1469_:
{
uint64_t v_flags_1472_; uint32_t v___x_1473_; lean_object* v___x_1474_; uint32_t v___x_1475_; lean_object* v___x_1476_; 
v_flags_1472_ = lean_uint64_lor(v___y_1470_, v___y_1471_);
v___x_1473_ = 214;
v___x_1474_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1465_, v_args_1466_);
v___x_1475_ = 0;
v___x_1476_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1473_, v_flags_1472_, v___x_1474_, v___x_1475_);
lean_dec(v___x_1474_);
if (lean_obj_tag(v___x_1476_) == 0)
{
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1478_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref_known(v___x_1476_, 1);
v___x_1478_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1477_);
lean_dec(v_a_1477_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v_a_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc(v_a_1479_);
lean_dec_ref_known(v___x_1478_, 1);
v___x_1480_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1465_);
v___x_1481_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4(v___x_1480_, v_a_1479_);
lean_dec_ref(v___x_1480_);
return v___x_1481_;
}
else
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1489_; 
v_a_1482_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1484_ = v___x_1478_;
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1478_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1489_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___x_1487_; 
if (v_isShared_1485_ == 0)
{
v___x_1487_ = v___x_1484_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v_a_1482_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
v_a_1490_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1476_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1476_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
lean_ctor_set_tag(v___x_1492_, 1);
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
else
{
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1513_; 
v_a_1498_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1500_ = v___x_1476_;
v_isShared_1501_ = v_isSharedCheck_1513_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1476_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1513_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1511_; 
v___x_1502_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1503_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1465_);
v___x_1504_ = lean_string_append(v___x_1502_, v___x_1503_);
lean_dec_ref(v___x_1503_);
v___x_1505_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1506_ = lean_string_append(v___x_1504_, v___x_1505_);
v___x_1507_ = lean_io_error_to_string(v_a_1498_);
v___x_1508_ = lean_string_append(v___x_1506_, v___x_1507_);
lean_dec_ref(v___x_1507_);
v___x_1509_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1509_, 0, v___x_1508_);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1509_);
v___x_1511_ = v___x_1500_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1509_);
v___x_1511_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
return v___x_1511_;
}
}
}
}
v___jp_1515_:
{
uint8_t v_construct_1517_; uint64_t v___x_1518_; 
v_construct_1517_ = lean_ctor_get_uint8(v_b_1465_, sizeof(void*)*4);
v___x_1518_ = lean_uint64_lor(v___x_1514_, v___y_1516_);
if (v_construct_1517_ == 0)
{
uint64_t v___x_1519_; 
v___x_1519_ = 0ULL;
v___y_1470_ = v___x_1518_;
v___y_1471_ = v___x_1519_;
goto v___jp_1469_;
}
else
{
uint64_t v___x_1520_; 
v___x_1520_ = 4ULL;
v___y_1470_ = v___x_1518_;
v___y_1471_ = v___x_1520_;
goto v___jp_1469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0___boxed(lean_object* v_b_1523_, lean_object* v_args_1524_, lean_object* v_await_1525_, lean_object* v_a_1526_){
_start:
{
uint8_t v_await_boxed_1527_; lean_object* v_res_1528_; 
v_await_boxed_1527_ = lean_unbox(v_await_1525_);
v_res_1528_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0(v_b_1523_, v_args_1524_, v_await_boxed_1527_);
lean_dec_ref(v_b_1523_);
return v_res_1528_;
}
}
static lean_object* _init_l_Lasm_JS_Node_process_cwd___closed__4(void){
_start:
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
v___x_1539_ = ((lean_object*)(l_Lasm_JS_Node_process_cwd___closed__3));
v___x_1540_ = l_Lasm_JS_Web_Support_args(v___x_1539_);
return v___x_1540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd(){
_start:
{
uint8_t v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1542_ = 0;
v___x_1543_ = ((lean_object*)(l_Lasm_JS_Node_process_cwd___closed__2));
v___x_1544_ = lean_obj_once(&l_Lasm_JS_Node_process_cwd___closed__4, &l_Lasm_JS_Node_process_cwd___closed__4_once, _init_l_Lasm_JS_Node_process_cwd___closed__4);
v___x_1545_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_cwd_spec__0(v___x_1543_, v___x_1544_, v___x_1542_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_cwd___boxed(lean_object* v_a_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l_Lasm_JS_Node_process_cwd();
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_exit_spec__0(lean_object* v_x_1548_){
_start:
{
if (lean_obj_tag(v_x_1548_) == 0)
{
lean_object* v___x_1549_; 
v___x_1549_ = lean_box(0);
return v___x_1549_;
}
else
{
lean_object* v_val_1550_; 
v_val_1550_ = lean_ctor_get(v_x_1548_, 0);
lean_inc(v_val_1550_);
lean_dec_ref_known(v_x_1548_, 1);
if (lean_obj_tag(v_val_1550_) == 0)
{
lean_object* v_value_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1563_; 
v_value_1551_ = lean_ctor_get(v_val_1550_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_val_1550_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1553_ = v_val_1550_;
v_isShared_1554_ = v_isSharedCheck_1563_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_value_1551_);
lean_dec(v_val_1550_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1563_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1555_ = lean_nat_abs(v_value_1551_);
v___x_1556_ = lean_cstr_to_nat("9007199254740991");
v___x_1557_ = lean_nat_dec_le(v___x_1555_, v___x_1556_);
lean_dec(v___x_1555_);
if (v___x_1557_ == 0)
{
lean_object* v___x_1559_; 
if (v_isShared_1554_ == 0)
{
lean_ctor_set_tag(v___x_1553_, 5);
v___x_1559_ = v___x_1553_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_value_1551_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
else
{
double v___x_1561_; lean_object* v___x_1562_; 
lean_del_object(v___x_1553_);
v___x_1561_ = l_Float_ofInt(v_value_1551_);
lean_dec(v_value_1551_);
v___x_1562_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1562_, 0, v___x_1561_);
return v___x_1562_;
}
}
}
else
{
lean_object* v_value_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1571_; 
v_value_1564_ = lean_ctor_get(v_val_1550_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_val_1550_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1566_ = v_val_1550_;
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_value_1564_);
lean_dec(v_val_1550_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1571_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1569_; 
if (v_isShared_1567_ == 0)
{
lean_ctor_set_tag(v___x_1566_, 4);
v___x_1569_ = v___x_1566_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_value_1564_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit(lean_object* v_code_1580_){
_start:
{
uint8_t v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; 
v___x_1582_ = 0;
v___x_1583_ = lean_unsigned_to_nat(1u);
v___x_1584_ = ((lean_object*)(l_Lasm_JS_Node_process_exit___closed__2));
v___x_1585_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_exit_spec__0(v_code_1580_);
v___x_1586_ = lean_mk_empty_array_with_capacity(v___x_1583_);
v___x_1587_ = lean_array_push(v___x_1586_, v___x_1585_);
v___x_1588_ = l_Lasm_JS_Web_Support_args(v___x_1587_);
v___x_1589_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v___x_1584_, v___x_1588_, v___x_1582_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_exit___boxed(lean_object* v_code_1590_, lean_object* v_a_1591_){
_start:
{
lean_object* v_res_1592_; 
v_res_1592_ = l_Lasm_JS_Node_process_exit(v_code_1590_);
return v_res_1592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(lean_object* v_x_1593_){
_start:
{
if (lean_obj_tag(v_x_1593_) == 0)
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_box(0);
return v___x_1594_;
}
else
{
lean_object* v_val_1595_; 
v_val_1595_ = lean_ctor_get(v_x_1593_, 0);
lean_inc(v_val_1595_);
lean_dec_ref_known(v_x_1593_, 1);
if (lean_obj_tag(v_val_1595_) == 0)
{
lean_object* v_value_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
v_value_1596_ = lean_ctor_get(v_val_1595_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v_val_1595_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v_val_1595_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_value_1596_);
lean_dec(v_val_1595_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
lean_ctor_set_tag(v___x_1598_, 4);
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_value_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
else
{
double v_value_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
v_value_1604_ = lean_ctor_get_float(v_val_1595_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v_val_1595_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v_val_1595_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_dec(v_val_1595_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
lean_ctor_set_tag(v___x_1606_, 3);
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v_reuseFailAlloc_1610_, 0, v_value_1604_);
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
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill(double v_pid_1620_, lean_object* v_signal_1621_){
_start:
{
uint8_t v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1623_ = 0;
v___x_1624_ = lean_unsigned_to_nat(2u);
v___x_1625_ = ((lean_object*)(l_Lasm_JS_Node_process_kill___closed__2));
v___x_1626_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1626_, 0, v_pid_1620_);
v___x_1627_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Node_process_kill_spec__0(v_signal_1621_);
v___x_1628_ = lean_mk_empty_array_with_capacity(v___x_1624_);
v___x_1629_ = lean_array_push(v___x_1628_, v___x_1626_);
v___x_1630_ = lean_array_push(v___x_1629_, v___x_1627_);
v___x_1631_ = l_Lasm_JS_Web_Support_args(v___x_1630_);
v___x_1632_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_chdir_spec__0(v___x_1625_, v___x_1631_, v___x_1623_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_kill___boxed(lean_object* v_pid_1633_, lean_object* v_signal_1634_, lean_object* v_a_1635_){
_start:
{
double v_pid_boxed_1636_; lean_object* v_res_1637_; 
v_pid_boxed_1636_ = lean_unbox_float(v_pid_1633_);
lean_dec_ref(v_pid_1633_);
v_res_1637_ = l_Lasm_JS_Node_process_kill(v_pid_boxed_1636_, v_signal_1634_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0(lean_object* v_b_1638_, lean_object* v_args_1639_, uint8_t v_await_1640_){
_start:
{
uint64_t v___y_1643_; uint64_t v___y_1644_; uint64_t v___x_1684_; uint64_t v___y_1686_; 
v___x_1684_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1640_ == 0)
{
uint64_t v___x_1691_; 
v___x_1691_ = 0ULL;
v___y_1686_ = v___x_1691_;
goto v___jp_1685_;
}
else
{
uint64_t v___x_1692_; 
v___x_1692_ = 2ULL;
v___y_1686_ = v___x_1692_;
goto v___jp_1685_;
}
v___jp_1642_:
{
uint64_t v_flags_1645_; uint32_t v___x_1646_; lean_object* v___x_1647_; uint32_t v___x_1648_; lean_object* v___x_1649_; 
v_flags_1645_ = lean_uint64_lor(v___y_1643_, v___y_1644_);
v___x_1646_ = 214;
v___x_1647_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1638_, v_args_1639_);
v___x_1648_ = 0;
v___x_1649_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1646_, v_flags_1645_, v___x_1647_, v___x_1648_);
lean_dec(v___x_1647_);
if (lean_obj_tag(v___x_1649_) == 0)
{
if (lean_obj_tag(v___x_1649_) == 0)
{
lean_object* v_a_1650_; lean_object* v___x_1651_; 
v_a_1650_ = lean_ctor_get(v___x_1649_, 0);
lean_inc(v_a_1650_);
lean_dec_ref_known(v___x_1649_, 1);
v___x_1651_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1650_);
lean_dec(v_a_1650_);
if (lean_obj_tag(v___x_1651_) == 0)
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
v_a_1652_ = lean_ctor_get(v___x_1651_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1651_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1651_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1651_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
else
{
return v___x_1651_;
}
}
else
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
v_a_1660_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1649_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1649_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 1);
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1683_; 
v_a_1668_ = lean_ctor_get(v___x_1649_, 0);
v_isSharedCheck_1683_ = !lean_is_exclusive(v___x_1649_);
if (v_isSharedCheck_1683_ == 0)
{
v___x_1670_ = v___x_1649_;
v_isShared_1671_ = v_isSharedCheck_1683_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1649_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1683_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1681_; 
v___x_1672_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1673_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1638_);
v___x_1674_ = lean_string_append(v___x_1672_, v___x_1673_);
lean_dec_ref(v___x_1673_);
v___x_1675_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1676_ = lean_string_append(v___x_1674_, v___x_1675_);
v___x_1677_ = lean_io_error_to_string(v_a_1668_);
v___x_1678_ = lean_string_append(v___x_1676_, v___x_1677_);
lean_dec_ref(v___x_1677_);
v___x_1679_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 0, v___x_1679_);
v___x_1681_ = v___x_1670_;
goto v_reusejp_1680_;
}
else
{
lean_object* v_reuseFailAlloc_1682_; 
v_reuseFailAlloc_1682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1682_, 0, v___x_1679_);
v___x_1681_ = v_reuseFailAlloc_1682_;
goto v_reusejp_1680_;
}
v_reusejp_1680_:
{
return v___x_1681_;
}
}
}
}
v___jp_1685_:
{
uint8_t v_construct_1687_; uint64_t v___x_1688_; 
v_construct_1687_ = lean_ctor_get_uint8(v_b_1638_, sizeof(void*)*4);
v___x_1688_ = lean_uint64_lor(v___x_1684_, v___y_1686_);
if (v_construct_1687_ == 0)
{
uint64_t v___x_1689_; 
v___x_1689_ = 0ULL;
v___y_1643_ = v___x_1688_;
v___y_1644_ = v___x_1689_;
goto v___jp_1642_;
}
else
{
uint64_t v___x_1690_; 
v___x_1690_ = 4ULL;
v___y_1643_ = v___x_1688_;
v___y_1644_ = v___x_1690_;
goto v___jp_1642_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0___boxed(lean_object* v_b_1693_, lean_object* v_args_1694_, lean_object* v_await_1695_, lean_object* v_a_1696_){
_start:
{
uint8_t v_await_boxed_1697_; lean_object* v_res_1698_; 
v_await_boxed_1697_ = lean_unbox(v_await_1695_);
v_res_1698_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0(v_b_1693_, v_args_1694_, v_await_boxed_1697_);
lean_dec_ref(v_b_1693_);
return v_res_1698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage(){
_start:
{
uint8_t v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; 
v___x_1708_ = 0;
v___x_1709_ = ((lean_object*)(l_Lasm_JS_Node_process_memoryUsage___closed__2));
v___x_1710_ = lean_obj_once(&l_Lasm_JS_Node_process_cwd___closed__4, &l_Lasm_JS_Node_process_cwd___closed__4_once, _init_l_Lasm_JS_Node_process_cwd___closed__4);
v___x_1711_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0(v___x_1709_, v___x_1710_, v___x_1708_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_memoryUsage___boxed(lean_object* v_a_1712_){
_start:
{
lean_object* v_res_1713_; 
v_res_1713_ = l_Lasm_JS_Node_process_memoryUsage();
return v_res_1713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg(lean_object* v_d_1714_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1716_, 0, v_d_1714_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg___boxed(lean_object* v_d_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___redArg(v_d_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0(lean_object* v_context_1720_, lean_object* v_d_1721_){
_start:
{
lean_object* v___x_1723_; 
v___x_1723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1723_, 0, v_d_1721_);
return v___x_1723_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0___boxed(lean_object* v_context_1724_, lean_object* v_d_1725_, lean_object* v_a_1726_){
_start:
{
lean_object* v_res_1727_; 
v_res_1727_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_memoryUsage_spec__0_spec__0(v_context_1724_, v_d_1725_);
lean_dec_ref(v_context_1724_);
return v_res_1727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0(lean_object* v_context_1729_, lean_object* v_d_1730_){
_start:
{
lean_object* v___y_1733_; lean_object* v___y_1734_; 
if (lean_obj_tag(v_d_1730_) == 3)
{
double v_n_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_n_1738_ = lean_ctor_get_float(v_d_1730_, 0);
lean_dec_ref_known(v_d_1730_, 0);
v___x_1739_ = lean_box_float(v_n_1738_);
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1739_);
return v___x_1740_;
}
else
{
lean_object* v___x_1741_; lean_object* v_received_1743_; 
v___x_1741_ = ((lean_object*)(l_Lasm_JS_Node_instFromJSLongLongOrDOMString___lam__0___closed__2));
if (lean_obj_tag(v_d_1730_) == 9)
{
lean_object* v_value_1757_; lean_object* v_description_1758_; uint8_t v___x_1759_; 
v_value_1757_ = lean_ctor_get(v_d_1730_, 0);
v_description_1758_ = lean_ctor_get(v_d_1730_, 1);
v___x_1759_ = lean_string_dec_eq(v_description_1758_, v___x_1741_);
if (v___x_1759_ == 0)
{
goto v___jp_1755_;
}
else
{
uint32_t v___x_1760_; uint64_t v___x_1761_; lean_object* v___x_1762_; uint32_t v___x_1763_; lean_object* v___x_1764_; 
lean_inc_n(v_value_1757_, 2);
lean_dec_ref_known(v_d_1730_, 2);
v___x_1760_ = 206;
v___x_1761_ = 0ULL;
v___x_1762_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1762_, 0, v_value_1757_);
lean_ctor_set(v___x_1762_, 1, v___x_1741_);
v___x_1763_ = lasm_js_value_handle(v_value_1757_);
lean_dec(v_value_1757_);
v___x_1764_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1760_, v___x_1761_, v___x_1762_, v___x_1763_);
lean_dec_ref_known(v___x_1762_, 2);
if (lean_obj_tag(v___x_1764_) == 0)
{
lean_object* v_a_1765_; uint8_t v___x_1766_; 
v_a_1765_ = lean_ctor_get(v___x_1764_, 0);
lean_inc(v_a_1765_);
lean_dec_ref_known(v___x_1764_, 1);
v___x_1766_ = lean_string_validate_utf8(v_a_1765_);
if (v___x_1766_ == 0)
{
lean_object* v___x_1767_; lean_object* v___x_1768_; 
lean_dec(v_a_1765_);
v___x_1767_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__10);
v___x_1768_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_1767_);
v_received_1743_ = v___x_1768_;
goto v___jp_1742_;
}
else
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_string_from_utf8_unchecked(v_a_1765_);
v_received_1743_ = v___x_1769_;
goto v___jp_1742_;
}
}
else
{
lean_object* v___x_1770_; 
lean_dec_ref_known(v___x_1764_, 1);
v___x_1770_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__11));
v_received_1743_ = v___x_1770_;
goto v___jp_1742_;
}
}
}
else
{
goto v___jp_1755_;
}
v___jp_1742_:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; uint8_t v___x_1753_; 
v___x_1744_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1745_ = lean_string_append(v___x_1744_, v_context_1729_);
v___x_1746_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__1));
v___x_1747_ = lean_string_append(v___x_1745_, v___x_1746_);
v___x_1748_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___closed__0));
v___x_1749_ = lean_string_append(v___x_1747_, v___x_1748_);
v___x_1750_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__3));
v___x_1751_ = lean_string_append(v___x_1749_, v___x_1750_);
v___x_1752_ = lean_string_append(v___x_1751_, v_received_1743_);
lean_dec_ref(v_received_1743_);
v___x_1753_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__5);
if (v___x_1753_ == 0)
{
lean_object* v___x_1754_; 
v___x_1754_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__6));
v___y_1733_ = v___x_1752_;
v___y_1734_ = v___x_1754_;
goto v___jp_1732_;
}
else
{
v___y_1733_ = v___x_1752_;
v___y_1734_ = v___x_1741_;
goto v___jp_1732_;
}
}
v___jp_1755_:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lasm_JS_Data_describe(v_d_1730_);
v_received_1743_ = v___x_1756_;
goto v___jp_1742_;
}
}
v___jp_1732_:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v___x_1735_ = lean_string_append(v___y_1733_, v___y_1734_);
v___x_1736_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
v___x_1737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
return v___x_1737_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0___boxed(lean_object* v_context_1771_, lean_object* v_d_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0(v_context_1771_, v_d_1772_);
lean_dec_ref(v_context_1771_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0(lean_object* v_b_1775_, lean_object* v_args_1776_, uint8_t v_await_1777_){
_start:
{
uint64_t v___y_1780_; uint64_t v___y_1781_; uint64_t v___x_1824_; uint64_t v___y_1826_; 
v___x_1824_ = lean_uint64_once(&l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0, &l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0_once, _init_l_Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2___closed__0);
if (v_await_1777_ == 0)
{
uint64_t v___x_1831_; 
v___x_1831_ = 0ULL;
v___y_1826_ = v___x_1831_;
goto v___jp_1825_;
}
else
{
uint64_t v___x_1832_; 
v___x_1832_ = 2ULL;
v___y_1826_ = v___x_1832_;
goto v___jp_1825_;
}
v___jp_1779_:
{
uint64_t v_flags_1782_; uint32_t v___x_1783_; lean_object* v___x_1784_; uint32_t v___x_1785_; lean_object* v___x_1786_; 
v_flags_1782_ = lean_uint64_lor(v___y_1780_, v___y_1781_);
v___x_1783_ = 214;
v___x_1784_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1775_, v_args_1776_);
v___x_1785_ = 0;
v___x_1786_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1783_, v_flags_1782_, v___x_1784_, v___x_1785_);
lean_dec(v___x_1784_);
if (lean_obj_tag(v___x_1786_) == 0)
{
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1788_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
v___x_1788_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_1787_);
lean_dec(v_a_1787_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
lean_inc(v_a_1789_);
lean_dec_ref_known(v___x_1788_, 1);
v___x_1790_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1775_);
v___x_1791_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0_spec__0(v___x_1790_, v_a_1789_);
lean_dec_ref(v___x_1790_);
return v___x_1791_;
}
else
{
lean_object* v_a_1792_; lean_object* v___x_1794_; uint8_t v_isShared_1795_; uint8_t v_isSharedCheck_1799_; 
v_a_1792_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1799_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1794_ = v___x_1788_;
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
else
{
lean_inc(v_a_1792_);
lean_dec(v___x_1788_);
v___x_1794_ = lean_box(0);
v_isShared_1795_ = v_isSharedCheck_1799_;
goto v_resetjp_1793_;
}
v_resetjp_1793_:
{
lean_object* v___x_1797_; 
if (v_isShared_1795_ == 0)
{
v___x_1797_ = v___x_1794_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_a_1792_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
}
else
{
lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1807_; 
v_a_1800_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1802_ = v___x_1786_;
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v___x_1786_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1807_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1805_; 
if (v_isShared_1803_ == 0)
{
lean_ctor_set_tag(v___x_1802_, 1);
v___x_1805_ = v___x_1802_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_a_1800_);
v___x_1805_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
return v___x_1805_;
}
}
}
}
else
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1823_; 
v_a_1808_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1810_ = v___x_1786_;
v_isShared_1811_ = v_isSharedCheck_1823_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1786_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1823_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1812_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_arch_spec__0_spec__1_spec__2_spec__3_spec__4___closed__0));
v___x_1813_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1775_);
v___x_1814_ = lean_string_append(v___x_1812_, v___x_1813_);
lean_dec_ref(v___x_1813_);
v___x_1815_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Node_Support_getExport_go___at___00Lasm_JS_Node_Support_getExport___at___00Lasm_JS_Node_process_argv_spec__0_spec__0_spec__1_spec__2_spec__3___closed__4));
v___x_1816_ = lean_string_append(v___x_1814_, v___x_1815_);
v___x_1817_ = lean_io_error_to_string(v_a_1808_);
v___x_1818_ = lean_string_append(v___x_1816_, v___x_1817_);
lean_dec_ref(v___x_1817_);
v___x_1819_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1819_, 0, v___x_1818_);
if (v_isShared_1811_ == 0)
{
lean_ctor_set(v___x_1810_, 0, v___x_1819_);
v___x_1821_ = v___x_1810_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
return v___x_1821_;
}
}
}
}
v___jp_1825_:
{
uint8_t v_construct_1827_; uint64_t v___x_1828_; 
v_construct_1827_ = lean_ctor_get_uint8(v_b_1775_, sizeof(void*)*4);
v___x_1828_ = lean_uint64_lor(v___x_1824_, v___y_1826_);
if (v_construct_1827_ == 0)
{
uint64_t v___x_1829_; 
v___x_1829_ = 0ULL;
v___y_1780_ = v___x_1828_;
v___y_1781_ = v___x_1829_;
goto v___jp_1779_;
}
else
{
uint64_t v___x_1830_; 
v___x_1830_ = 4ULL;
v___y_1780_ = v___x_1828_;
v___y_1781_ = v___x_1830_;
goto v___jp_1779_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0___boxed(lean_object* v_b_1833_, lean_object* v_args_1834_, lean_object* v_await_1835_, lean_object* v_a_1836_){
_start:
{
uint8_t v_await_boxed_1837_; lean_object* v_res_1838_; 
v_await_boxed_1837_ = lean_unbox(v_await_1835_);
v_res_1838_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0(v_b_1833_, v_args_1834_, v_await_boxed_1837_);
lean_dec_ref(v_b_1833_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime(){
_start:
{
uint8_t v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1848_ = 0;
v___x_1849_ = ((lean_object*)(l_Lasm_JS_Node_process_uptime___closed__2));
v___x_1850_ = lean_obj_once(&l_Lasm_JS_Node_process_cwd___closed__4, &l_Lasm_JS_Node_process_cwd___closed__4_once, _init_l_Lasm_JS_Node_process_cwd___closed__4);
v___x_1851_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Node_process_uptime_spec__0(v___x_1849_, v___x_1850_, v___x_1848_);
return v___x_1851_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Node_process_uptime___boxed(lean_object* v_a_1852_){
_start:
{
lean_object* v_res_1853_; 
v_res_1853_ = l_Lasm_JS_Node_process_uptime();
return v_res_1853_;
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
