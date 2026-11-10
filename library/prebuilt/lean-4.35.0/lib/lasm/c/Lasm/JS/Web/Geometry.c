// Lean compiler output
// Module: Lasm.JS.Web.Geometry
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
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
lean_object* l_Lasm_JS_instToJSFloat___lam__0___boxed(lean_object*);
lean_object* l_Lasm_JS_Web_Support_fields(lean_object*);
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_optional___redArg(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMRectReadOnly___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectReadOnly___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectReadOnly___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDOMRectReadOnly = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectReadOnly___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.DOMRectReadOnly"};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDOMRect = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectReadOnly___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSDOMRect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.JS.Web.DOMRect"};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRect___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRect___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSDOMRect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSDOMRect___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRect___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRect___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSDOMRect = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRect___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly = (const lean_object*)&l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDOMRectList = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectReadOnly___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSDOMRectList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.DOMRectList"};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRectList___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectList___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSDOMRectList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectList___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSDOMRectList___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectList___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSDOMRectList = (const lean_object*)&l_Lasm_JS_Web_instFromJSDOMRectList___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "width"};
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2_value;
static const lean_string_object l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "height"};
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMRectInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_instToJSFloat___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___closed__0_value;
static const lean_closure_object l_Lasm_JS_Web_instToJSDOMRectInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSDOMRectInit___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___closed__0_value)} };
static const lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSDOMRectInit = (const lean_object*)&l_Lasm_JS_Web_instToJSDOMRectInit___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lasm.JS.Web.DOMRectReadOnly.new"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "DOMRectReadOnly"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_DOMRectReadOnly_new___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__2_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new___closed__3 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_x(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_x___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_y(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_y___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_width(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_width___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_height(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_height___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_top___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "top"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_top___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_top___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_top(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_top___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_right___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_right___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_right___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_right(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_right___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_bottom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bottom"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_bottom___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_bottom___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_bottom(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_bottom___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_left___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_left___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_left___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_left(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_left___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lasm.JS.Web.DOMRectReadOnly.fromRect"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "DOMRectReadOnly.fromRect"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__0_value),((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__2 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toJSON"};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__0_value;
static const lean_array_object l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRect_new___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.DOMRect.new"};
static const lean_object* l_Lasm_JS_Web_DOMRect_new___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRect_new___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_DOMRect_new___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "DOMRect"};
static const lean_object* l_Lasm_JS_Web_DOMRect_new___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DOMRect_new___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_DOMRect_new___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DOMRect_new___closed__0_value),((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_DOMRect_new___closed__1_value),((lean_object*)(((size_t)(4) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_DOMRect_new___closed__2 = (const lean_object*)&l_Lasm_JS_Web_DOMRect_new___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_new(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_new___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_x(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_x___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setX(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setX___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_y(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_y___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setY(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setY___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_width(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_width___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setWidth(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setWidth___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_height(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_height___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setHeight(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setHeight___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRect_fromRect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.DOMRect.fromRect"};
static const lean_object* l_Lasm_JS_Web_DOMRect_fromRect___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRect_fromRect___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_DOMRect_fromRect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "DOMRect.fromRect"};
static const lean_object* l_Lasm_JS_Web_DOMRect_fromRect___closed__1 = (const lean_object*)&l_Lasm_JS_Web_DOMRect_fromRect___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_DOMRect_fromRect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_DOMRect_fromRect___closed__0_value),((lean_object*)&l_Lasm_JS_Web_DOMRectReadOnly_new___closed__1_value),((lean_object*)&l_Lasm_JS_Web_DOMRect_fromRect___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_DOMRect_fromRect___closed__2 = (const lean_object*)&l_Lasm_JS_Web_DOMRect_fromRect___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_fromRect(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_fromRect___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectList_length___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* l_Lasm_JS_Web_DOMRectList_length___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectList_length___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_length(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_length___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Option (Lasm.JS.Web.DOMRect)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_DOMRectList_item___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "item"};
static const lean_object* l_Lasm_JS_Web_DOMRectList_item___closed__0 = (const lean_object*)&l_Lasm_JS_Web_DOMRectList_item___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_item(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_item___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0(lean_object* v_x_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_4_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4_, 0, v_x_2_);
lean_ctor_set(v___x_4_, 1, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0(lean_object* v_x_9_){
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
v___x_12_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0___closed__0));
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0___boxed(lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lasm_JS_Web_instFromJSDOMRectReadOnly___lam__0(v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___lam__0(lean_object* v_self_29_){
_start:
{
lean_inc(v_self_29_);
return v_self_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___lam__0___boxed(lean_object* v_self_30_){
_start:
{
lean_object* v_res_31_; 
v_res_31_ = l_Lasm_JS_Web_instCoeDOMRectDOMRectReadOnly___lam__0(v_self_30_);
lean_dec(v_self_30_);
return v_res_31_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSDOMRectInit___lam__0(lean_object* v___f_45_, lean_object* v_d_46_){
_start:
{
lean_object* v_x_47_; lean_object* v_y_48_; lean_object* v_width_49_; lean_object* v_height_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v_x_47_ = lean_ctor_get(v_d_46_, 0);
lean_inc(v_x_47_);
v_y_48_ = lean_ctor_get(v_d_46_, 1);
lean_inc(v_y_48_);
v_width_49_ = lean_ctor_get(v_d_46_, 2);
lean_inc(v_width_49_);
v_height_50_ = lean_ctor_get(v_d_46_, 3);
lean_inc(v_height_50_);
lean_dec_ref(v_d_46_);
v___x_51_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
lean_inc_ref_n(v___f_45_, 3);
v___x_52_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_45_, v_x_47_);
v___x_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_53_, 0, v___x_51_);
lean_ctor_set(v___x_53_, 1, v___x_52_);
v___x_54_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_55_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_45_, v_y_48_);
v___x_56_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_56_, 0, v___x_54_);
lean_ctor_set(v___x_56_, 1, v___x_55_);
v___x_57_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_58_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_45_, v_width_49_);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
v___x_60_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_61_ = l_Lasm_JS_Web_Support_optional___redArg(v___f_45_, v_height_50_);
v___x_62_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_60_);
lean_ctor_set(v___x_62_, 1, v___x_61_);
v___x_63_ = lean_unsigned_to_nat(4u);
v___x_64_ = lean_mk_empty_array_with_capacity(v___x_63_);
v___x_65_ = lean_array_push(v___x_64_, v___x_53_);
v___x_66_ = lean_array_push(v___x_65_, v___x_56_);
v___x_67_ = lean_array_push(v___x_66_, v___x_59_);
v___x_68_ = lean_array_push(v___x_67_, v___x_62_);
v___x_69_ = l_Lasm_JS_Web_Support_fields(v___x_68_);
lean_dec_ref(v___x_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(lean_object* v_x_74_){
_start:
{
if (lean_obj_tag(v_x_74_) == 0)
{
lean_object* v___x_75_; 
v___x_75_ = lean_box(0);
return v___x_75_;
}
else
{
lean_object* v_val_76_; lean_object* v___x_77_; double v___x_78_; 
v_val_76_ = lean_ctor_get(v_x_74_, 0);
v___x_77_ = lean_alloc_ctor(3, 0, 8);
v___x_78_ = lean_unbox_float(v_val_76_);
lean_ctor_set_float(v___x_77_, 0, v___x_78_);
return v___x_77_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0___boxed(lean_object* v_x_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_x_79_);
lean_dec(v_x_79_);
return v_res_80_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_85_ = lean_string_utf8_byte_size(v___x_84_);
return v___x_85_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_86_ = lean_unsigned_to_nat(0u);
v___x_87_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3);
v___x_88_ = lean_nat_dec_eq(v___x_87_, v___x_86_);
return v___x_88_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_93_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__8));
v___x_94_ = lean_unsigned_to_nat(46u);
v___x_95_ = lean_unsigned_to_nat(193u);
v___x_96_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7));
v___x_97_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6));
v___x_98_ = l_mkPanicMessageWithDecl(v___x_97_, v___x_96_, v___x_95_, v___x_94_, v___x_93_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1(lean_object* v_context_100_, lean_object* v_d_101_){
_start:
{
lean_object* v___y_104_; lean_object* v___y_105_; 
if (lean_obj_tag(v_d_101_) == 9)
{
lean_object* v_value_109_; lean_object* v___x_110_; 
v_value_109_ = lean_ctor_get(v_d_101_, 0);
lean_inc(v_value_109_);
lean_dec_ref_known(v_d_101_, 2);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v_value_109_);
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v_received_113_; 
v___x_111_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
if (lean_obj_tag(v_d_101_) == 9)
{
lean_object* v_value_127_; lean_object* v_description_128_; uint8_t v___x_129_; 
v_value_127_ = lean_ctor_get(v_d_101_, 0);
v_description_128_ = lean_ctor_get(v_d_101_, 1);
v___x_129_ = lean_string_dec_eq(v_description_128_, v___x_111_);
if (v___x_129_ == 0)
{
goto v___jp_125_;
}
else
{
uint32_t v___x_130_; uint64_t v___x_131_; lean_object* v___x_132_; uint32_t v___x_133_; lean_object* v___x_134_; 
lean_inc_n(v_value_127_, 2);
lean_dec_ref_known(v_d_101_, 2);
v___x_130_ = 206;
v___x_131_ = 0ULL;
v___x_132_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_132_, 0, v_value_127_);
lean_ctor_set(v___x_132_, 1, v___x_111_);
v___x_133_ = lasm_js_value_handle(v_value_127_);
lean_dec(v_value_127_);
v___x_134_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_130_, v___x_131_, v___x_132_, v___x_133_);
lean_dec_ref_known(v___x_132_, 2);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; uint8_t v___x_136_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_a_135_);
lean_dec_ref_known(v___x_134_, 1);
v___x_136_ = lean_string_validate_utf8(v_a_135_);
if (v___x_136_ == 0)
{
lean_object* v___x_137_; lean_object* v___x_138_; 
lean_dec(v_a_135_);
v___x_137_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9);
v___x_138_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_137_);
v_received_113_ = v___x_138_;
goto v___jp_112_;
}
else
{
lean_object* v___x_139_; 
v___x_139_ = lean_string_from_utf8_unchecked(v_a_135_);
v_received_113_ = v___x_139_;
goto v___jp_112_;
}
}
else
{
lean_object* v___x_140_; 
lean_dec_ref_known(v___x_134_, 1);
v___x_140_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__10));
v_received_113_ = v___x_140_;
goto v___jp_112_;
}
}
}
else
{
goto v___jp_125_;
}
v___jp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; 
v___x_114_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_115_ = lean_string_append(v___x_114_, v_context_100_);
v___x_116_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_117_ = lean_string_append(v___x_115_, v___x_116_);
v___x_118_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__1));
v___x_119_ = lean_string_append(v___x_117_, v___x_118_);
v___x_120_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_121_ = lean_string_append(v___x_119_, v___x_120_);
v___x_122_ = lean_string_append(v___x_121_, v_received_113_);
lean_dec_ref(v_received_113_);
v___x_123_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; 
v___x_124_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5));
v___y_104_ = v___x_122_;
v___y_105_ = v___x_124_;
goto v___jp_103_;
}
else
{
v___y_104_ = v___x_122_;
v___y_105_ = v___x_111_;
goto v___jp_103_;
}
}
v___jp_125_:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lasm_JS_Data_describe(v_d_101_);
v_received_113_ = v___x_126_;
goto v___jp_112_;
}
}
v___jp_103_:
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_106_ = lean_string_append(v___y_104_, v___y_105_);
v___x_107_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
v___x_108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
return v___x_108_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___boxed(lean_object* v_context_141_, lean_object* v_d_142_, lean_object* v_a_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1(v_context_141_, v_d_142_);
lean_dec_ref(v_context_141_);
return v_res_144_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_146_; uint64_t v___x_147_; 
v___x_146_ = 0;
v___x_147_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1(lean_object* v_b_148_, lean_object* v_args_149_, uint8_t v_await_150_){
_start:
{
uint64_t v___y_153_; uint64_t v___y_154_; uint64_t v___x_197_; uint64_t v___y_199_; 
v___x_197_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_150_ == 0)
{
uint64_t v___x_204_; 
v___x_204_ = 0ULL;
v___y_199_ = v___x_204_;
goto v___jp_198_;
}
else
{
uint64_t v___x_205_; 
v___x_205_ = 2ULL;
v___y_199_ = v___x_205_;
goto v___jp_198_;
}
v___jp_152_:
{
uint64_t v_flags_155_; uint32_t v___x_156_; lean_object* v___x_157_; uint32_t v___x_158_; lean_object* v___x_159_; 
v_flags_155_ = lean_uint64_lor(v___y_153_, v___y_154_);
v___x_156_ = 214;
v___x_157_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_148_, v_args_149_);
v___x_158_ = 0;
v___x_159_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_156_, v_flags_155_, v___x_157_, v___x_158_);
lean_dec(v___x_157_);
if (lean_obj_tag(v___x_159_) == 0)
{
if (lean_obj_tag(v___x_159_) == 0)
{
lean_object* v_a_160_; lean_object* v___x_161_; 
v_a_160_ = lean_ctor_get(v___x_159_, 0);
lean_inc(v_a_160_);
lean_dec_ref_known(v___x_159_, 1);
v___x_161_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_160_);
lean_dec(v_a_160_);
if (lean_obj_tag(v___x_161_) == 0)
{
lean_object* v_a_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v_a_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc(v_a_162_);
lean_dec_ref_known(v___x_161_, 1);
v___x_163_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_148_);
v___x_164_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1(v___x_163_, v_a_162_);
lean_dec_ref(v___x_163_);
return v___x_164_;
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
v_a_165_ = lean_ctor_get(v___x_161_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_161_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_161_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_161_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
else
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
v_a_173_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_159_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_159_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
lean_ctor_set_tag(v___x_175_, 1);
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_196_; 
v_a_181_ = lean_ctor_get(v___x_159_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_159_);
if (v_isSharedCheck_196_ == 0)
{
v___x_183_ = v___x_159_;
v_isShared_184_ = v_isSharedCheck_196_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_159_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_196_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_185_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_186_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_148_);
v___x_187_ = lean_string_append(v___x_185_, v___x_186_);
lean_dec_ref(v___x_186_);
v___x_188_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__0));
v___x_189_ = lean_string_append(v___x_187_, v___x_188_);
v___x_190_ = lean_io_error_to_string(v_a_181_);
v___x_191_ = lean_string_append(v___x_189_, v___x_190_);
lean_dec_ref(v___x_190_);
v___x_192_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
if (v_isShared_184_ == 0)
{
lean_ctor_set(v___x_183_, 0, v___x_192_);
v___x_194_ = v___x_183_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
v___jp_198_:
{
uint8_t v_construct_200_; uint64_t v___x_201_; 
v_construct_200_ = lean_ctor_get_uint8(v_b_148_, sizeof(void*)*4);
v___x_201_ = lean_uint64_lor(v___x_197_, v___y_199_);
if (v_construct_200_ == 0)
{
uint64_t v___x_202_; 
v___x_202_ = 0ULL;
v___y_153_ = v___x_201_;
v___y_154_ = v___x_202_;
goto v___jp_152_;
}
else
{
uint64_t v___x_203_; 
v___x_203_ = 4ULL;
v___y_153_ = v___x_201_;
v___y_154_ = v___x_203_;
goto v___jp_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___boxed(lean_object* v_b_206_, lean_object* v_args_207_, lean_object* v_await_208_, lean_object* v_a_209_){
_start:
{
uint8_t v_await_boxed_210_; lean_object* v_res_211_; 
v_await_boxed_210_ = lean_unbox(v_await_208_);
v_res_211_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1(v_b_206_, v_args_207_, v_await_boxed_210_);
lean_dec_ref(v_b_206_);
return v_res_211_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new(lean_object* v_x_221_, lean_object* v_y_222_, lean_object* v_width_223_, lean_object* v_height_224_){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; 
v___x_226_ = lean_unsigned_to_nat(4u);
v___x_227_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_new___closed__3));
v___x_228_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_x_221_);
v___x_229_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_y_222_);
v___x_230_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_223_);
v___x_231_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_224_);
v___x_232_ = lean_mk_empty_array_with_capacity(v___x_226_);
v___x_233_ = lean_array_push(v___x_232_, v___x_228_);
v___x_234_ = lean_array_push(v___x_233_, v___x_229_);
v___x_235_ = lean_array_push(v___x_234_, v___x_230_);
v___x_236_ = lean_array_push(v___x_235_, v___x_231_);
v___x_237_ = l_Lasm_JS_Web_Support_args(v___x_236_);
v___x_238_ = 0;
v___x_239_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1(v___x_227_, v___x_237_, v___x_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new___boxed(lean_object* v_x_240_, lean_object* v_y_241_, lean_object* v_width_242_, lean_object* v_height_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_Lasm_JS_Web_DOMRectReadOnly_new(v_x_240_, v_y_241_, v_width_242_, v_height_243_);
lean_dec(v_height_243_);
lean_dec(v_width_242_);
lean_dec(v_y_241_);
lean_dec(v_x_240_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1(lean_object* v_context_247_, lean_object* v_d_248_){
_start:
{
lean_object* v___y_251_; lean_object* v___y_252_; 
if (lean_obj_tag(v_d_248_) == 3)
{
double v_n_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v_n_256_ = lean_ctor_get_float(v_d_248_, 0);
lean_dec_ref_known(v_d_248_, 0);
v___x_257_ = lean_box_float(v_n_256_);
v___x_258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
else
{
lean_object* v___x_259_; lean_object* v_received_261_; 
v___x_259_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
if (lean_obj_tag(v_d_248_) == 9)
{
lean_object* v_value_275_; lean_object* v_description_276_; uint8_t v___x_277_; 
v_value_275_ = lean_ctor_get(v_d_248_, 0);
v_description_276_ = lean_ctor_get(v_d_248_, 1);
v___x_277_ = lean_string_dec_eq(v_description_276_, v___x_259_);
if (v___x_277_ == 0)
{
goto v___jp_273_;
}
else
{
uint32_t v___x_278_; uint64_t v___x_279_; lean_object* v___x_280_; uint32_t v___x_281_; lean_object* v___x_282_; 
lean_inc_n(v_value_275_, 2);
lean_dec_ref_known(v_d_248_, 2);
v___x_278_ = 206;
v___x_279_ = 0ULL;
v___x_280_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_280_, 0, v_value_275_);
lean_ctor_set(v___x_280_, 1, v___x_259_);
v___x_281_ = lasm_js_value_handle(v_value_275_);
lean_dec(v_value_275_);
v___x_282_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_278_, v___x_279_, v___x_280_, v___x_281_);
lean_dec_ref_known(v___x_280_, 2);
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
v___x_285_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9);
v___x_286_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_285_);
v_received_261_ = v___x_286_;
goto v___jp_260_;
}
else
{
lean_object* v___x_287_; 
v___x_287_ = lean_string_from_utf8_unchecked(v_a_283_);
v_received_261_ = v___x_287_;
goto v___jp_260_;
}
}
else
{
lean_object* v___x_288_; 
lean_dec_ref_known(v___x_282_, 1);
v___x_288_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__10));
v_received_261_ = v___x_288_;
goto v___jp_260_;
}
}
}
else
{
goto v___jp_273_;
}
v___jp_260_:
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_263_ = lean_string_append(v___x_262_, v_context_247_);
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
v___x_266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___closed__0));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
v___x_268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_269_ = lean_string_append(v___x_267_, v___x_268_);
v___x_270_ = lean_string_append(v___x_269_, v_received_261_);
lean_dec_ref(v_received_261_);
v___x_271_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; 
v___x_272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5));
v___y_251_ = v___x_270_;
v___y_252_ = v___x_272_;
goto v___jp_250_;
}
else
{
v___y_251_ = v___x_270_;
v___y_252_ = v___x_259_;
goto v___jp_250_;
}
}
v___jp_273_:
{
lean_object* v___x_274_; 
v___x_274_ = l_Lasm_JS_Data_describe(v_d_248_);
v_received_261_ = v___x_274_;
goto v___jp_260_;
}
}
v___jp_250_:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; 
v___x_253_ = lean_string_append(v___y_251_, v___y_252_);
v___x_254_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
v___x_255_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
return v___x_255_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___boxed(lean_object* v_context_289_, lean_object* v_d_290_, lean_object* v_a_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1(v_context_289_, v_d_290_);
lean_dec_ref(v_context_289_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0(lean_object* v_context_293_, lean_object* v_bytes_294_){
_start:
{
lean_object* v___x_296_; 
v___x_296_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_294_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v_a_297_; lean_object* v___x_298_; 
v_a_297_ = lean_ctor_get(v___x_296_, 0);
lean_inc(v_a_297_);
lean_dec_ref_known(v___x_296_, 1);
v___x_298_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1(v_context_293_, v_a_297_);
return v___x_298_;
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_306_; 
v_a_299_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_306_ == 0)
{
v___x_301_ = v___x_296_;
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_296_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0___boxed(lean_object* v_context_307_, lean_object* v_bytes_308_, lean_object* v_a_309_){
_start:
{
lean_object* v_res_310_; 
v_res_310_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0(v_context_307_, v_bytes_308_);
lean_dec_ref(v_bytes_308_);
lean_dec_ref(v_context_307_);
return v_res_310_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(lean_object* v_o_312_, lean_object* v_key_313_){
_start:
{
lean_object* v_k_315_; lean_object* v___x_316_; 
v_k_315_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_315_, 0, v_key_313_);
v___x_316_ = l_Lasm_JS_Wire_encodeIO(v_k_315_);
if (lean_obj_tag(v___x_316_) == 0)
{
lean_object* v_a_317_; uint32_t v___x_318_; uint32_t v___x_319_; uint64_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_a_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v___x_316_, 1);
v___x_318_ = 203;
v___x_319_ = lasm_js_value_handle(v_o_312_);
v___x_320_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
v___x_321_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_322_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_322_, 0, v_o_312_);
lean_ctor_set(v___x_322_, 1, v___x_321_);
v___x_323_ = lean_unsigned_to_nat(2u);
v___x_324_ = lean_mk_empty_array_with_capacity(v___x_323_);
lean_inc_ref(v_k_315_);
v___x_325_ = lean_array_push(v___x_324_, v_k_315_);
v___x_326_ = lean_array_push(v___x_325_, v___x_322_);
v___x_327_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_327_, 0, v___x_326_);
v___x_328_ = lasm_js_call(v___x_318_, v___x_319_, v___x_320_, v_a_317_, v___x_327_);
lean_dec_ref_known(v___x_327_, 1);
lean_dec(v_a_317_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_329_);
lean_dec_ref_known(v___x_328_, 1);
v___x_330_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___closed__0));
v___x_331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_315_);
v___x_332_ = lean_string_append(v___x_330_, v___x_331_);
lean_dec_ref(v___x_331_);
v___x_333_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0(v___x_332_, v_a_329_);
lean_dec(v_a_329_);
lean_dec_ref(v___x_332_);
return v___x_333_;
}
else
{
lean_object* v_a_334_; lean_object* v___x_336_; uint8_t v_isShared_337_; uint8_t v_isSharedCheck_341_; 
lean_dec_ref_known(v_k_315_, 1);
v_a_334_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_341_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_341_ == 0)
{
v___x_336_ = v___x_328_;
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
else
{
lean_inc(v_a_334_);
lean_dec(v___x_328_);
v___x_336_ = lean_box(0);
v_isShared_337_ = v_isSharedCheck_341_;
goto v_resetjp_335_;
}
v_resetjp_335_:
{
lean_object* v___x_339_; 
if (v_isShared_337_ == 0)
{
v___x_339_ = v___x_336_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v_a_334_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
else
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec_ref_known(v_k_315_, 1);
lean_dec(v_o_312_);
v_a_342_ = lean_ctor_get(v___x_316_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_316_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_316_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___boxed(lean_object* v_o_350_, lean_object* v_key_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_o_350_, v_key_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_x(lean_object* v_self_354_){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_357_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_354_, v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_x___boxed(lean_object* v_self_358_, lean_object* v_a_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lasm_JS_Web_DOMRectReadOnly_x(v_self_358_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_y(lean_object* v_self_361_){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_364_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_361_, v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_y___boxed(lean_object* v_self_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lasm_JS_Web_DOMRectReadOnly_y(v_self_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_width(lean_object* v_self_368_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_371_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_368_, v___x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_width___boxed(lean_object* v_self_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lasm_JS_Web_DOMRectReadOnly_width(v_self_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_height(lean_object* v_self_375_){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_378_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_375_, v___x_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_height___boxed(lean_object* v_self_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lasm_JS_Web_DOMRectReadOnly_height(v_self_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_top(lean_object* v_self_383_){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_top___closed__0));
v___x_386_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_383_, v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_top___boxed(lean_object* v_self_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lasm_JS_Web_DOMRectReadOnly_top(v_self_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_right(lean_object* v_self_391_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_393_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_right___closed__0));
v___x_394_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_391_, v___x_393_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_right___boxed(lean_object* v_self_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lasm_JS_Web_DOMRectReadOnly_right(v_self_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_bottom(lean_object* v_self_399_){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_bottom___closed__0));
v___x_402_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_399_, v___x_401_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_bottom___boxed(lean_object* v_self_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lasm_JS_Web_DOMRectReadOnly_bottom(v_self_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_left(lean_object* v_self_407_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_left___closed__0));
v___x_410_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_407_, v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_left___boxed(lean_object* v_self_411_, lean_object* v_a_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lasm_JS_Web_DOMRectReadOnly_left(v_self_411_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(lean_object* v_x_414_){
_start:
{
if (lean_obj_tag(v_x_414_) == 0)
{
lean_object* v___x_415_; 
v___x_415_ = lean_box(0);
return v___x_415_;
}
else
{
lean_object* v_val_416_; lean_object* v_x_417_; lean_object* v_y_418_; lean_object* v_width_419_; lean_object* v_height_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; 
v_val_416_ = lean_ctor_get(v_x_414_, 0);
v_x_417_ = lean_ctor_get(v_val_416_, 0);
v_y_418_ = lean_ctor_get(v_val_416_, 1);
v_width_419_ = lean_ctor_get(v_val_416_, 2);
v_height_420_ = lean_ctor_get(v_val_416_, 3);
v___x_421_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_422_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_x_417_);
v___x_423_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_423_, 0, v___x_421_);
lean_ctor_set(v___x_423_, 1, v___x_422_);
v___x_424_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_425_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_y_418_);
v___x_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_426_, 0, v___x_424_);
lean_ctor_set(v___x_426_, 1, v___x_425_);
v___x_427_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_428_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_419_);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_431_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_420_);
v___x_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_432_, 0, v___x_430_);
lean_ctor_set(v___x_432_, 1, v___x_431_);
v___x_433_ = lean_unsigned_to_nat(4u);
v___x_434_ = lean_mk_empty_array_with_capacity(v___x_433_);
v___x_435_ = lean_array_push(v___x_434_, v___x_423_);
v___x_436_ = lean_array_push(v___x_435_, v___x_426_);
v___x_437_ = lean_array_push(v___x_436_, v___x_429_);
v___x_438_ = lean_array_push(v___x_437_, v___x_432_);
v___x_439_ = l_Lasm_JS_Web_Support_fields(v___x_438_);
lean_dec_ref(v___x_438_);
return v___x_439_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0___boxed(lean_object* v_x_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(v_x_440_);
lean_dec(v_x_440_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect(lean_object* v_other_450_){
_start:
{
uint8_t v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_452_ = 0;
v___x_453_ = lean_unsigned_to_nat(1u);
v___x_454_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__2));
v___x_455_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(v_other_450_);
v___x_456_ = lean_mk_empty_array_with_capacity(v___x_453_);
v___x_457_ = lean_array_push(v___x_456_, v___x_455_);
v___x_458_ = l_Lasm_JS_Web_Support_args(v___x_457_);
v___x_459_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_454_, v___x_458_, v___x_452_);
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
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
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
v_a_468_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_459_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_459_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect___boxed(lean_object* v_other_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lasm_JS_Web_DOMRectReadOnly_fromRect(v_other_476_);
lean_dec(v_other_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(lean_object* v_bytes_479_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_479_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
v_a_482_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_481_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
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
else
{
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_490_, lean_object* v_a_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(v_bytes_490_);
lean_dec_ref(v_bytes_490_);
return v_res_492_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0(uint8_t v_await_493_, uint64_t v_extra_494_){
_start:
{
uint64_t v___x_495_; uint64_t v___y_497_; 
v___x_495_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_493_ == 0)
{
uint64_t v___x_500_; 
v___x_500_ = 0ULL;
v___y_497_ = v___x_500_;
goto v___jp_496_;
}
else
{
uint64_t v___x_501_; 
v___x_501_ = 2ULL;
v___y_497_ = v___x_501_;
goto v___jp_496_;
}
v___jp_496_:
{
uint64_t v___x_498_; uint64_t v___x_499_; 
v___x_498_ = lean_uint64_lor(v___x_495_, v___y_497_);
v___x_499_ = lean_uint64_lor(v___x_498_, v_extra_494_);
return v___x_499_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0___boxed(lean_object* v_await_502_, lean_object* v_extra_503_){
_start:
{
uint8_t v_await_boxed_504_; uint64_t v_extra_boxed_505_; uint64_t v_res_506_; lean_object* v_r_507_; 
v_await_boxed_504_ = lean_unbox(v_await_502_);
v_extra_boxed_505_ = lean_unbox_uint64(v_extra_503_);
lean_dec_ref(v_extra_503_);
v_res_506_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0(v_await_boxed_504_, v_extra_boxed_505_);
v_r_507_ = lean_box_uint64(v_res_506_);
return v_r_507_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0(void){
_start:
{
uint64_t v___x_508_; uint8_t v___x_509_; uint64_t v___x_510_; 
v___x_508_ = 8ULL;
v___x_509_ = 0;
v___x_510_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0(v___x_509_, v___x_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0(lean_object* v_o_511_, lean_object* v_name_512_, lean_object* v_args_513_){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; uint64_t v___x_518_; lean_object* v___x_519_; 
v___x_515_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_516_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_516_, 0, v_o_511_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v___x_517_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_517_, 0, v_name_512_);
v___x_518_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0);
v___x_519_ = l_Lasm_JS_Value_invokeRaw(v___x_516_, v___x_517_, v_args_513_, v___x_518_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v_a_520_; lean_object* v___x_521_; 
v_a_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_a_520_);
lean_dec_ref_known(v___x_519_, 1);
v___x_521_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(v_a_520_);
lean_dec(v_a_520_);
return v___x_521_;
}
else
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_529_; 
v_a_522_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_529_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_529_ == 0)
{
v___x_524_ = v___x_519_;
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_519_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_529_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_a_522_);
v___x_527_ = v_reuseFailAlloc_528_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
return v___x_527_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___boxed(lean_object* v_o_530_, lean_object* v_name_531_, lean_object* v_args_532_, lean_object* v_a_533_){
_start:
{
lean_object* v_res_534_; 
v_res_534_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0(v_o_530_, v_name_531_, v_args_532_);
return v_res_534_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2(void){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__1));
v___x_539_ = l_Lasm_JS_Web_Support_args(v___x_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON(lean_object* v_self_540_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__0));
v___x_543_ = lean_obj_once(&l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2, &l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2_once, _init_l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2);
v___x_544_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0(v_self_540_, v___x_542_, v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON___boxed(lean_object* v_self_545_, lean_object* v_a_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lasm_JS_Web_DOMRectReadOnly_toJSON(v_self_545_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg(lean_object* v_d_548_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_550_, 0, v_d_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_d_551_, lean_object* v_a_552_){
_start:
{
lean_object* v_res_553_; 
v_res_553_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg(v_d_551_);
return v_res_553_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2(lean_object* v_context_554_, lean_object* v_d_555_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_557_, 0, v_d_555_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___boxed(lean_object* v_context_558_, lean_object* v_d_559_, lean_object* v_a_560_){
_start:
{
lean_object* v_res_561_; 
v_res_561_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2(v_context_558_, v_d_559_);
lean_dec_ref(v_context_558_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1(lean_object* v_context_562_, lean_object* v_bytes_563_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(v_bytes_563_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___boxed(lean_object* v_context_566_, lean_object* v_bytes_567_, lean_object* v_a_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1(v_context_566_, v_bytes_567_);
lean_dec_ref(v_bytes_567_);
lean_dec_ref(v_context_566_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0(lean_object* v_context_570_, lean_object* v_d_571_){
_start:
{
lean_object* v___y_574_; lean_object* v___y_575_; 
if (lean_obj_tag(v_d_571_) == 9)
{
lean_object* v_value_579_; lean_object* v___x_580_; 
v_value_579_ = lean_ctor_get(v_d_571_, 0);
lean_inc(v_value_579_);
lean_dec_ref_known(v_d_571_, 2);
v___x_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_580_, 0, v_value_579_);
return v___x_580_;
}
else
{
lean_object* v___x_581_; lean_object* v_received_583_; 
v___x_581_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
if (lean_obj_tag(v_d_571_) == 9)
{
lean_object* v_value_597_; lean_object* v_description_598_; uint8_t v___x_599_; 
v_value_597_ = lean_ctor_get(v_d_571_, 0);
v_description_598_ = lean_ctor_get(v_d_571_, 1);
v___x_599_ = lean_string_dec_eq(v_description_598_, v___x_581_);
if (v___x_599_ == 0)
{
goto v___jp_595_;
}
else
{
uint32_t v___x_600_; uint64_t v___x_601_; lean_object* v___x_602_; uint32_t v___x_603_; lean_object* v___x_604_; 
lean_inc_n(v_value_597_, 2);
lean_dec_ref_known(v_d_571_, 2);
v___x_600_ = 206;
v___x_601_ = 0ULL;
v___x_602_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_602_, 0, v_value_597_);
lean_ctor_set(v___x_602_, 1, v___x_581_);
v___x_603_ = lasm_js_value_handle(v_value_597_);
lean_dec(v_value_597_);
v___x_604_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_600_, v___x_601_, v___x_602_, v___x_603_);
lean_dec_ref_known(v___x_602_, 2);
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; uint8_t v___x_606_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_604_, 1);
v___x_606_ = lean_string_validate_utf8(v_a_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; lean_object* v___x_608_; 
lean_dec(v_a_605_);
v___x_607_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9);
v___x_608_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_607_);
v_received_583_ = v___x_608_;
goto v___jp_582_;
}
else
{
lean_object* v___x_609_; 
v___x_609_ = lean_string_from_utf8_unchecked(v_a_605_);
v_received_583_ = v___x_609_;
goto v___jp_582_;
}
}
else
{
lean_object* v___x_610_; 
lean_dec_ref_known(v___x_604_, 1);
v___x_610_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__10));
v_received_583_ = v___x_610_;
goto v___jp_582_;
}
}
}
else
{
goto v___jp_595_;
}
v___jp_582_:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; uint8_t v___x_593_; 
v___x_584_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_585_ = lean_string_append(v___x_584_, v_context_570_);
v___x_586_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_587_ = lean_string_append(v___x_585_, v___x_586_);
v___x_588_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDOMRect___closed__0));
v___x_589_ = lean_string_append(v___x_587_, v___x_588_);
v___x_590_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
v___x_592_ = lean_string_append(v___x_591_, v_received_583_);
lean_dec_ref(v_received_583_);
v___x_593_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; 
v___x_594_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5));
v___y_574_ = v___x_592_;
v___y_575_ = v___x_594_;
goto v___jp_573_;
}
else
{
v___y_574_ = v___x_592_;
v___y_575_ = v___x_581_;
goto v___jp_573_;
}
}
v___jp_595_:
{
lean_object* v___x_596_; 
v___x_596_ = l_Lasm_JS_Data_describe(v_d_571_);
v_received_583_ = v___x_596_;
goto v___jp_582_;
}
}
v___jp_573_:
{
lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_576_ = lean_string_append(v___y_574_, v___y_575_);
v___x_577_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
v___x_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
return v___x_578_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0___boxed(lean_object* v_context_611_, lean_object* v_d_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0(v_context_611_, v_d_612_);
lean_dec_ref(v_context_611_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0(lean_object* v_b_615_, lean_object* v_args_616_, uint8_t v_await_617_){
_start:
{
uint64_t v___y_620_; uint64_t v___y_621_; uint64_t v___x_664_; uint64_t v___y_666_; 
v___x_664_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_617_ == 0)
{
uint64_t v___x_671_; 
v___x_671_ = 0ULL;
v___y_666_ = v___x_671_;
goto v___jp_665_;
}
else
{
uint64_t v___x_672_; 
v___x_672_ = 2ULL;
v___y_666_ = v___x_672_;
goto v___jp_665_;
}
v___jp_619_:
{
uint64_t v_flags_622_; uint32_t v___x_623_; lean_object* v___x_624_; uint32_t v___x_625_; lean_object* v___x_626_; 
v_flags_622_ = lean_uint64_lor(v___y_620_, v___y_621_);
v___x_623_ = 214;
v___x_624_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_615_, v_args_616_);
v___x_625_ = 0;
v___x_626_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_623_, v_flags_622_, v___x_624_, v___x_625_);
lean_dec(v___x_624_);
if (lean_obj_tag(v___x_626_) == 0)
{
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; lean_object* v___x_628_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
lean_inc(v_a_627_);
lean_dec_ref_known(v___x_626_, 1);
v___x_628_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_627_);
lean_dec(v_a_627_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; lean_object* v___x_631_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_615_);
v___x_631_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0(v___x_630_, v_a_629_);
lean_dec_ref(v___x_630_);
return v___x_631_;
}
else
{
lean_object* v_a_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_639_; 
v_a_632_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_639_ == 0)
{
v___x_634_ = v___x_628_;
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_a_632_);
lean_dec(v___x_628_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_639_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_637_; 
if (v_isShared_635_ == 0)
{
v___x_637_ = v___x_634_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_632_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
v_a_640_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_647_ == 0)
{
v___x_642_ = v___x_626_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v___x_626_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 1);
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_640_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_663_; 
v_a_648_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_663_ == 0)
{
v___x_650_ = v___x_626_;
v_isShared_651_ = v_isSharedCheck_663_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_626_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_663_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_661_; 
v___x_652_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_653_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_615_);
v___x_654_ = lean_string_append(v___x_652_, v___x_653_);
lean_dec_ref(v___x_653_);
v___x_655_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__0));
v___x_656_ = lean_string_append(v___x_654_, v___x_655_);
v___x_657_ = lean_io_error_to_string(v_a_648_);
v___x_658_ = lean_string_append(v___x_656_, v___x_657_);
lean_dec_ref(v___x_657_);
v___x_659_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_659_, 0, v___x_658_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_659_);
v___x_661_ = v___x_650_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_659_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
v___jp_665_:
{
uint8_t v_construct_667_; uint64_t v___x_668_; 
v_construct_667_ = lean_ctor_get_uint8(v_b_615_, sizeof(void*)*4);
v___x_668_ = lean_uint64_lor(v___x_664_, v___y_666_);
if (v_construct_667_ == 0)
{
uint64_t v___x_669_; 
v___x_669_ = 0ULL;
v___y_620_ = v___x_668_;
v___y_621_ = v___x_669_;
goto v___jp_619_;
}
else
{
uint64_t v___x_670_; 
v___x_670_ = 4ULL;
v___y_620_ = v___x_668_;
v___y_621_ = v___x_670_;
goto v___jp_619_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0___boxed(lean_object* v_b_673_, lean_object* v_args_674_, lean_object* v_await_675_, lean_object* v_a_676_){
_start:
{
uint8_t v_await_boxed_677_; lean_object* v_res_678_; 
v_await_boxed_677_ = lean_unbox(v_await_675_);
v_res_678_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0(v_b_673_, v_args_674_, v_await_boxed_677_);
lean_dec_ref(v_b_673_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_new(lean_object* v_x_687_, lean_object* v_y_688_, lean_object* v_width_689_, lean_object* v_height_690_){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; lean_object* v___x_705_; 
v___x_692_ = lean_unsigned_to_nat(4u);
v___x_693_ = ((lean_object*)(l_Lasm_JS_Web_DOMRect_new___closed__2));
v___x_694_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_x_687_);
v___x_695_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_y_688_);
v___x_696_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_689_);
v___x_697_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_690_);
v___x_698_ = lean_mk_empty_array_with_capacity(v___x_692_);
v___x_699_ = lean_array_push(v___x_698_, v___x_694_);
v___x_700_ = lean_array_push(v___x_699_, v___x_695_);
v___x_701_ = lean_array_push(v___x_700_, v___x_696_);
v___x_702_ = lean_array_push(v___x_701_, v___x_697_);
v___x_703_ = l_Lasm_JS_Web_Support_args(v___x_702_);
v___x_704_ = 0;
v___x_705_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0(v___x_693_, v___x_703_, v___x_704_);
return v___x_705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_new___boxed(lean_object* v_x_706_, lean_object* v_y_707_, lean_object* v_width_708_, lean_object* v_height_709_, lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lasm_JS_Web_DOMRect_new(v_x_706_, v_y_707_, v_width_708_, v_height_709_);
lean_dec(v_height_709_);
lean_dec(v_width_708_);
lean_dec(v_y_707_);
lean_dec(v_x_706_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_x(lean_object* v_self_712_){
_start:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_715_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_712_, v___x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_x___boxed(lean_object* v_self_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lasm_JS_Web_DOMRect_x(v_self_716_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(lean_object* v_o_719_, lean_object* v_key_720_, lean_object* v_x_721_){
_start:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v_payload_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___x_723_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_723_, 0, v_key_720_);
v___x_724_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
lean_inc(v_o_719_);
v___x_725_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_725_, 0, v_o_719_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = lean_unsigned_to_nat(3u);
v___x_727_ = lean_mk_empty_array_with_capacity(v___x_726_);
lean_inc_ref(v___x_723_);
v___x_728_ = lean_array_push(v___x_727_, v___x_723_);
lean_inc(v_x_721_);
v___x_729_ = lean_array_push(v___x_728_, v_x_721_);
v___x_730_ = lean_array_push(v___x_729_, v___x_725_);
v_payload_731_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_731_, 0, v___x_730_);
v___x_732_ = lean_unsigned_to_nat(2u);
v___x_733_ = lean_mk_empty_array_with_capacity(v___x_732_);
v___x_734_ = lean_array_push(v___x_733_, v___x_723_);
v___x_735_ = lean_array_push(v___x_734_, v_x_721_);
v___x_736_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
v___x_737_ = l_Lasm_JS_Wire_encodeIO(v___x_736_);
lean_dec_ref_known(v___x_736_, 1);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; uint32_t v___x_739_; uint32_t v___x_740_; uint64_t v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = 204;
v___x_740_ = lasm_js_value_handle(v_o_719_);
lean_dec(v_o_719_);
v___x_741_ = 0ULL;
v___x_742_ = lean_box(0);
v___x_743_ = lasm_js_call(v___x_739_, v___x_740_, v___x_741_, v_a_738_, v_payload_731_);
lean_dec_ref_known(v_payload_731_, 1);
lean_dec(v_a_738_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_750_ == 0)
{
lean_object* v_unused_751_; 
v_unused_751_ = lean_ctor_get(v___x_743_, 0);
lean_dec(v_unused_751_);
v___x_745_ = v___x_743_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_dec(v___x_743_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 0, v___x_742_);
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_742_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
else
{
lean_object* v_a_752_; lean_object* v___x_754_; uint8_t v_isShared_755_; uint8_t v_isSharedCheck_759_; 
v_a_752_ = lean_ctor_get(v___x_743_, 0);
v_isSharedCheck_759_ = !lean_is_exclusive(v___x_743_);
if (v_isSharedCheck_759_ == 0)
{
v___x_754_ = v___x_743_;
v_isShared_755_ = v_isSharedCheck_759_;
goto v_resetjp_753_;
}
else
{
lean_inc(v_a_752_);
lean_dec(v___x_743_);
v___x_754_ = lean_box(0);
v_isShared_755_ = v_isSharedCheck_759_;
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
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_a_752_);
v___x_757_ = v_reuseFailAlloc_758_;
goto v_reusejp_756_;
}
v_reusejp_756_:
{
return v___x_757_;
}
}
}
}
else
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec_ref_known(v_payload_731_, 1);
lean_dec(v_o_719_);
v_a_760_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_737_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_737_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0___boxed(lean_object* v_o_768_, lean_object* v_key_769_, lean_object* v_x_770_, lean_object* v_a_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_o_768_, v_key_769_, v_x_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setX(lean_object* v_self_773_, double v_value_774_){
_start:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_776_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_777_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_777_, 0, v_value_774_);
v___x_778_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_773_, v___x_776_, v___x_777_);
return v___x_778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setX___boxed(lean_object* v_self_779_, lean_object* v_value_780_, lean_object* v_a_781_){
_start:
{
double v_value_boxed_782_; lean_object* v_res_783_; 
v_value_boxed_782_ = lean_unbox_float(v_value_780_);
lean_dec_ref(v_value_780_);
v_res_783_ = l_Lasm_JS_Web_DOMRect_setX(v_self_779_, v_value_boxed_782_);
return v_res_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_y(lean_object* v_self_784_){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_787_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_784_, v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_y___boxed(lean_object* v_self_788_, lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lasm_JS_Web_DOMRect_y(v_self_788_);
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setY(lean_object* v_self_791_, double v_value_792_){
_start:
{
lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_794_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_795_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_795_, 0, v_value_792_);
v___x_796_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_791_, v___x_794_, v___x_795_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setY___boxed(lean_object* v_self_797_, lean_object* v_value_798_, lean_object* v_a_799_){
_start:
{
double v_value_boxed_800_; lean_object* v_res_801_; 
v_value_boxed_800_ = lean_unbox_float(v_value_798_);
lean_dec_ref(v_value_798_);
v_res_801_ = l_Lasm_JS_Web_DOMRect_setY(v_self_797_, v_value_boxed_800_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_width(lean_object* v_self_802_){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_805_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_802_, v___x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_width___boxed(lean_object* v_self_806_, lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l_Lasm_JS_Web_DOMRect_width(v_self_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setWidth(lean_object* v_self_809_, double v_value_810_){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
v___x_812_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_813_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_813_, 0, v_value_810_);
v___x_814_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_809_, v___x_812_, v___x_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setWidth___boxed(lean_object* v_self_815_, lean_object* v_value_816_, lean_object* v_a_817_){
_start:
{
double v_value_boxed_818_; lean_object* v_res_819_; 
v_value_boxed_818_ = lean_unbox_float(v_value_816_);
lean_dec_ref(v_value_816_);
v_res_819_ = l_Lasm_JS_Web_DOMRect_setWidth(v_self_815_, v_value_boxed_818_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_height(lean_object* v_self_820_){
_start:
{
lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_822_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_823_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_820_, v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_height___boxed(lean_object* v_self_824_, lean_object* v_a_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lasm_JS_Web_DOMRect_height(v_self_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setHeight(lean_object* v_self_827_, double v_value_828_){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_831_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_831_, 0, v_value_828_);
v___x_832_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_827_, v___x_830_, v___x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setHeight___boxed(lean_object* v_self_833_, lean_object* v_value_834_, lean_object* v_a_835_){
_start:
{
double v_value_boxed_836_; lean_object* v_res_837_; 
v_value_boxed_836_ = lean_unbox_float(v_value_834_);
lean_dec_ref(v_value_834_);
v_res_837_ = l_Lasm_JS_Web_DOMRect_setHeight(v_self_833_, v_value_boxed_836_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_fromRect(lean_object* v_other_846_){
_start:
{
uint8_t v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_848_ = 0;
v___x_849_ = lean_unsigned_to_nat(1u);
v___x_850_ = ((lean_object*)(l_Lasm_JS_Web_DOMRect_fromRect___closed__2));
v___x_851_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(v_other_846_);
v___x_852_ = lean_mk_empty_array_with_capacity(v___x_849_);
v___x_853_ = lean_array_push(v___x_852_, v___x_851_);
v___x_854_ = l_Lasm_JS_Web_Support_args(v___x_853_);
v___x_855_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_850_, v___x_854_, v___x_848_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_863_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_863_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_863_ == 0)
{
v___x_858_ = v___x_855_;
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_a_856_);
lean_dec(v___x_855_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_863_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_861_; 
if (v_isShared_859_ == 0)
{
v___x_861_ = v___x_858_;
goto v_reusejp_860_;
}
else
{
lean_object* v_reuseFailAlloc_862_; 
v_reuseFailAlloc_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_862_, 0, v_a_856_);
v___x_861_ = v_reuseFailAlloc_862_;
goto v_reusejp_860_;
}
v_reusejp_860_:
{
return v___x_861_;
}
}
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
v_a_864_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_855_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_855_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_fromRect___boxed(lean_object* v_other_872_, lean_object* v_a_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lasm_JS_Web_DOMRect_fromRect(v_other_872_);
lean_dec(v_other_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_length(lean_object* v_self_876_){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_878_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectList_length___closed__0));
v___x_879_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_876_, v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_length___boxed(lean_object* v_self_880_, lean_object* v_a_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lasm_JS_Web_DOMRectList_length(v_self_880_);
return v_res_882_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0(uint8_t v_await_883_, uint64_t v_extra_884_){
_start:
{
uint64_t v___x_885_; uint64_t v___y_887_; 
v___x_885_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_883_ == 0)
{
uint64_t v___x_890_; 
v___x_890_ = 0ULL;
v___y_887_ = v___x_890_;
goto v___jp_886_;
}
else
{
uint64_t v___x_891_; 
v___x_891_ = 2ULL;
v___y_887_ = v___x_891_;
goto v___jp_886_;
}
v___jp_886_:
{
uint64_t v___x_888_; uint64_t v___x_889_; 
v___x_888_ = lean_uint64_lor(v___x_885_, v___y_887_);
v___x_889_ = lean_uint64_lor(v___x_888_, v_extra_884_);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0___boxed(lean_object* v_await_892_, lean_object* v_extra_893_){
_start:
{
uint8_t v_await_boxed_894_; uint64_t v_extra_boxed_895_; uint64_t v_res_896_; lean_object* v_r_897_; 
v_await_boxed_894_ = lean_unbox(v_await_892_);
v_extra_boxed_895_ = lean_unbox_uint64(v_extra_893_);
lean_dec_ref(v_extra_893_);
v_res_896_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0(v_await_boxed_894_, v_extra_boxed_895_);
v_r_897_ = lean_box_uint64(v_res_896_);
return v_r_897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2(lean_object* v_context_899_, lean_object* v_d_900_){
_start:
{
lean_object* v___y_906_; lean_object* v___y_907_; 
switch(lean_obj_tag(v_d_900_))
{
case 1:
{
goto v___jp_902_;
}
case 0:
{
goto v___jp_902_;
}
default: 
{
if (lean_obj_tag(v_d_900_) == 9)
{
lean_object* v_value_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v_value_911_ = lean_ctor_get(v_d_900_, 0);
lean_inc(v_value_911_);
lean_dec_ref_known(v_d_900_, 2);
v___x_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_912_, 0, v_value_911_);
v___x_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
return v___x_913_;
}
else
{
lean_object* v___x_914_; lean_object* v_received_916_; 
v___x_914_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
if (lean_obj_tag(v_d_900_) == 9)
{
lean_object* v_value_930_; lean_object* v_description_931_; uint8_t v___x_932_; 
v_value_930_ = lean_ctor_get(v_d_900_, 0);
v_description_931_ = lean_ctor_get(v_d_900_, 1);
v___x_932_ = lean_string_dec_eq(v_description_931_, v___x_914_);
if (v___x_932_ == 0)
{
goto v___jp_928_;
}
else
{
uint32_t v___x_933_; uint64_t v___x_934_; lean_object* v___x_935_; uint32_t v___x_936_; lean_object* v___x_937_; 
lean_inc_n(v_value_930_, 2);
lean_dec_ref_known(v_d_900_, 2);
v___x_933_ = 206;
v___x_934_ = 0ULL;
v___x_935_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_935_, 0, v_value_930_);
lean_ctor_set(v___x_935_, 1, v___x_914_);
v___x_936_ = lasm_js_value_handle(v_value_930_);
lean_dec(v_value_930_);
v___x_937_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_933_, v___x_934_, v___x_935_, v___x_936_);
lean_dec_ref_known(v___x_935_, 2);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; uint8_t v___x_939_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___x_939_ = lean_string_validate_utf8(v_a_938_);
if (v___x_939_ == 0)
{
lean_object* v___x_940_; lean_object* v___x_941_; 
lean_dec(v_a_938_);
v___x_940_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__9);
v___x_941_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_940_);
v_received_916_ = v___x_941_;
goto v___jp_915_;
}
else
{
lean_object* v___x_942_; 
v___x_942_ = lean_string_from_utf8_unchecked(v_a_938_);
v_received_916_ = v___x_942_;
goto v___jp_915_;
}
}
else
{
lean_object* v___x_943_; 
lean_dec_ref_known(v___x_937_, 1);
v___x_943_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__10));
v_received_916_ = v___x_943_;
goto v___jp_915_;
}
}
}
else
{
goto v___jp_928_;
}
v___jp_915_:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_917_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_918_ = lean_string_append(v___x_917_, v_context_899_);
v___x_919_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_920_ = lean_string_append(v___x_918_, v___x_919_);
v___x_921_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___closed__0));
v___x_922_ = lean_string_append(v___x_920_, v___x_921_);
v___x_923_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_924_ = lean_string_append(v___x_922_, v___x_923_);
v___x_925_ = lean_string_append(v___x_924_, v_received_916_);
lean_dec_ref(v_received_916_);
v___x_926_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; 
v___x_927_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5));
v___y_906_ = v___x_925_;
v___y_907_ = v___x_927_;
goto v___jp_905_;
}
else
{
v___y_906_ = v___x_925_;
v___y_907_ = v___x_914_;
goto v___jp_905_;
}
}
v___jp_928_:
{
lean_object* v___x_929_; 
v___x_929_ = l_Lasm_JS_Data_describe(v_d_900_);
v_received_916_ = v___x_929_;
goto v___jp_915_;
}
}
}
}
v___jp_902_:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = lean_box(0);
v___x_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
return v___x_904_;
}
v___jp_905_:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_string_append(v___y_906_, v___y_907_);
v___x_909_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
v___x_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_910_, 0, v___x_909_);
return v___x_910_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___boxed(lean_object* v_context_944_, lean_object* v_d_945_, lean_object* v_a_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2(v_context_944_, v_d_945_);
lean_dec_ref(v_context_944_);
return v_res_947_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1(lean_object* v_context_948_, lean_object* v_bytes_949_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_949_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_953_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_951_, 1);
v___x_953_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2(v_context_948_, v_a_952_);
return v___x_953_;
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_954_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_951_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_951_);
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
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1___boxed(lean_object* v_context_962_, lean_object* v_bytes_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1(v_context_962_, v_bytes_963_);
lean_dec_ref(v_bytes_963_);
lean_dec_ref(v_context_962_);
return v_res_965_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0(void){
_start:
{
uint64_t v___x_966_; uint8_t v___x_967_; uint64_t v___x_968_; 
v___x_966_ = 8ULL;
v___x_967_ = 0;
v___x_968_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0(v___x_967_, v___x_966_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0(lean_object* v_o_970_, lean_object* v_name_971_, lean_object* v_args_972_){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; uint64_t v___x_977_; lean_object* v___x_978_; 
v___x_974_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_975_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_975_, 0, v_o_970_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
lean_inc_ref(v_name_971_);
v___x_976_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_976_, 0, v_name_971_);
v___x_977_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0);
v___x_978_ = l_Lasm_JS_Value_invokeRaw(v___x_975_, v___x_976_, v_args_972_, v___x_977_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__1));
v___x_981_ = lean_string_append(v___x_980_, v_name_971_);
lean_dec_ref(v_name_971_);
v___x_982_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1(v___x_981_, v_a_979_);
lean_dec(v_a_979_);
lean_dec_ref(v___x_981_);
return v___x_982_;
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec_ref(v_name_971_);
v_a_983_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_978_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_978_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___boxed(lean_object* v_o_991_, lean_object* v_name_992_, lean_object* v_args_993_, lean_object* v_a_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0(v_o_991_, v_name_992_, v_args_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_item(lean_object* v_self_997_, lean_object* v_index_998_){
_start:
{
lean_object* v___x_1000_; lean_object* v___y_1002_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; uint8_t v___x_1011_; 
v___x_1000_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectList_item___closed__0));
v___x_1008_ = lean_nat_to_int(v_index_998_);
v___x_1009_ = lean_nat_abs(v___x_1008_);
v___x_1010_ = lean_cstr_to_nat("9007199254740991");
v___x_1011_ = lean_nat_dec_le(v___x_1009_, v___x_1010_);
lean_dec(v___x_1009_);
if (v___x_1011_ == 0)
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1008_);
v___y_1002_ = v___x_1012_;
goto v___jp_1001_;
}
else
{
double v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = l_Float_ofInt(v___x_1008_);
lean_dec(v___x_1008_);
v___x_1014_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_1014_, 0, v___x_1013_);
v___y_1002_ = v___x_1014_;
goto v___jp_1001_;
}
v___jp_1001_:
{
lean_object* v___x_1003_; lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v___x_1003_ = lean_unsigned_to_nat(1u);
v___x_1004_ = lean_mk_empty_array_with_capacity(v___x_1003_);
v___x_1005_ = lean_array_push(v___x_1004_, v___y_1002_);
v___x_1006_ = l_Lasm_JS_Web_Support_args(v___x_1005_);
v___x_1007_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0(v_self_997_, v___x_1000_, v___x_1006_);
return v___x_1007_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_item___boxed(lean_object* v_self_1015_, lean_object* v_index_1016_, lean_object* v_a_1017_){
_start:
{
lean_object* v_res_1018_; 
v_res_1018_ = l_Lasm_JS_Web_DOMRectList_item(v_self_1015_, v_index_1016_);
return v_res_1018_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Geometry(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
