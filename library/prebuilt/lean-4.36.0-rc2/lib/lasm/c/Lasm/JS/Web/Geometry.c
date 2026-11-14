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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_87_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__5));
v___x_88_ = lean_unsigned_to_nat(46u);
v___x_89_ = lean_unsigned_to_nat(193u);
v___x_90_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__4));
v___x_91_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__3));
v___x_92_ = l_mkPanicMessageWithDecl(v___x_91_, v___x_90_, v___x_89_, v___x_88_, v___x_87_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1(lean_object* v_context_94_, lean_object* v_d_95_){
_start:
{
lean_object* v_received_98_; 
if (lean_obj_tag(v_d_95_) == 9)
{
lean_object* v_value_112_; lean_object* v___x_113_; 
v_value_112_ = lean_ctor_get(v_d_95_, 0);
lean_inc(v_value_112_);
lean_dec_ref_known(v_d_95_, 2);
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v_value_112_);
return v___x_113_;
}
else
{
if (lean_obj_tag(v_d_95_) == 9)
{
lean_object* v_value_114_; lean_object* v_description_115_; lean_object* v___x_116_; uint8_t v___x_117_; 
v_value_114_ = lean_ctor_get(v_d_95_, 0);
v_description_115_ = lean_ctor_get(v_d_95_, 1);
v___x_116_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_117_ = lean_string_dec_eq(v_description_115_, v___x_116_);
if (v___x_117_ == 0)
{
goto v___jp_110_;
}
else
{
uint32_t v___x_118_; uint64_t v___x_119_; lean_object* v___x_120_; uint32_t v___x_121_; lean_object* v___x_122_; 
lean_inc_n(v_value_114_, 2);
lean_dec_ref_known(v_d_95_, 2);
v___x_118_ = 206;
v___x_119_ = 0ULL;
v___x_120_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_120_, 0, v_value_114_);
lean_ctor_set(v___x_120_, 1, v___x_116_);
v___x_121_ = lasm_js_value_handle(v_value_114_);
lean_dec(v_value_114_);
v___x_122_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_118_, v___x_119_, v___x_120_, v___x_121_);
if (lean_obj_tag(v___x_122_) == 0)
{
lean_object* v_a_123_; uint8_t v___x_124_; 
v_a_123_ = lean_ctor_get(v___x_122_, 0);
lean_inc(v_a_123_);
lean_dec_ref_known(v___x_122_, 1);
v___x_124_ = lean_string_validate_utf8(v_a_123_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; lean_object* v___x_126_; 
lean_dec(v_a_123_);
v___x_125_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6);
v___x_126_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_125_);
v_received_98_ = v___x_126_;
goto v___jp_97_;
}
else
{
lean_object* v___x_127_; 
v___x_127_ = lean_string_from_utf8_unchecked(v_a_123_);
v_received_98_ = v___x_127_;
goto v___jp_97_;
}
}
else
{
lean_object* v___x_128_; 
lean_dec_ref_known(v___x_122_, 1);
v___x_128_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7));
v_received_98_ = v___x_128_;
goto v___jp_97_;
}
}
}
else
{
goto v___jp_110_;
}
}
v___jp_97_:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_99_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_100_ = lean_string_append(v___x_99_, v_context_94_);
v___x_101_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_102_ = lean_string_append(v___x_100_, v___x_101_);
v___x_103_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDOMRectReadOnly___closed__1));
v___x_104_ = lean_string_append(v___x_102_, v___x_103_);
v___x_105_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_106_ = lean_string_append(v___x_104_, v___x_105_);
v___x_107_ = lean_string_append(v___x_106_, v_received_98_);
lean_dec_ref(v_received_98_);
v___x_108_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
return v___x_109_;
}
v___jp_110_:
{
lean_object* v___x_111_; 
v___x_111_ = l_Lasm_JS_Data_describe(v_d_95_);
v_received_98_ = v___x_111_;
goto v___jp_97_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___boxed(lean_object* v_context_129_, lean_object* v_d_130_, lean_object* v_a_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1(v_context_129_, v_d_130_);
lean_dec_ref(v_context_129_);
return v_res_132_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1(void){
_start:
{
uint8_t v___x_134_; uint64_t v___x_135_; 
v___x_134_ = 0;
v___x_135_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1(lean_object* v_b_136_, lean_object* v_args_137_, uint8_t v_await_138_){
_start:
{
uint64_t v___y_141_; uint64_t v___y_142_; uint64_t v___x_177_; uint64_t v___y_179_; 
v___x_177_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_138_ == 0)
{
uint64_t v___x_184_; 
v___x_184_ = 0ULL;
v___y_179_ = v___x_184_;
goto v___jp_178_;
}
else
{
uint64_t v___x_185_; 
v___x_185_ = 2ULL;
v___y_179_ = v___x_185_;
goto v___jp_178_;
}
v___jp_140_:
{
uint64_t v_flags_143_; uint32_t v___x_144_; lean_object* v___x_145_; uint32_t v___x_146_; lean_object* v___x_147_; 
v_flags_143_ = lean_uint64_lor(v___y_141_, v___y_142_);
v___x_144_ = 214;
v___x_145_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_136_, v_args_137_);
v___x_146_ = 0;
v___x_147_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_144_, v_flags_143_, v___x_145_, v___x_146_);
if (lean_obj_tag(v___x_147_) == 0)
{
lean_object* v_a_148_; lean_object* v___x_149_; 
v_a_148_ = lean_ctor_get(v___x_147_, 0);
lean_inc(v_a_148_);
lean_dec_ref_known(v___x_147_, 1);
v___x_149_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_148_);
lean_dec(v_a_148_);
if (lean_obj_tag(v___x_149_) == 0)
{
lean_object* v_a_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v_a_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_a_150_);
lean_dec_ref_known(v___x_149_, 1);
v___x_151_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_136_);
v___x_152_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1(v___x_151_, v_a_150_);
lean_dec_ref(v___x_151_);
return v___x_152_;
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
v_a_153_ = lean_ctor_get(v___x_149_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_149_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_149_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_149_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
else
{
lean_object* v_a_161_; lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_176_; 
v_a_161_ = lean_ctor_get(v___x_147_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_176_ == 0)
{
v___x_163_ = v___x_147_;
v_isShared_164_ = v_isSharedCheck_176_;
goto v_resetjp_162_;
}
else
{
lean_inc(v_a_161_);
lean_dec(v___x_147_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_176_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_174_; 
v___x_165_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_166_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_136_);
v___x_167_ = lean_string_append(v___x_165_, v___x_166_);
lean_dec_ref(v___x_166_);
v___x_168_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__0));
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
v___x_170_ = lean_io_error_to_string(v_a_161_);
v___x_171_ = lean_string_append(v___x_169_, v___x_170_);
lean_dec_ref(v___x_170_);
v___x_172_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 0, v___x_172_);
v___x_174_ = v___x_163_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v___x_172_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
v___jp_178_:
{
uint8_t v_construct_180_; uint64_t v___x_181_; 
v_construct_180_ = lean_ctor_get_uint8(v_b_136_, sizeof(void*)*4);
v___x_181_ = lean_uint64_lor(v___x_177_, v___y_179_);
if (v_construct_180_ == 0)
{
uint64_t v___x_182_; 
v___x_182_ = 0ULL;
v___y_141_ = v___x_181_;
v___y_142_ = v___x_182_;
goto v___jp_140_;
}
else
{
uint64_t v___x_183_; 
v___x_183_ = 4ULL;
v___y_141_ = v___x_181_;
v___y_142_ = v___x_183_;
goto v___jp_140_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___boxed(lean_object* v_b_186_, lean_object* v_args_187_, lean_object* v_await_188_, lean_object* v_a_189_){
_start:
{
uint8_t v_await_boxed_190_; lean_object* v_res_191_; 
v_await_boxed_190_ = lean_unbox(v_await_188_);
v_res_191_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1(v_b_186_, v_args_187_, v_await_boxed_190_);
lean_dec_ref(v_b_186_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new(lean_object* v_x_201_, lean_object* v_y_202_, lean_object* v_width_203_, lean_object* v_height_204_){
_start:
{
lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; uint8_t v___x_218_; lean_object* v___x_219_; 
v___x_206_ = lean_unsigned_to_nat(4u);
v___x_207_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_new___closed__3));
v___x_208_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_x_201_);
v___x_209_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_y_202_);
v___x_210_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_203_);
v___x_211_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_204_);
v___x_212_ = lean_mk_empty_array_with_capacity(v___x_206_);
v___x_213_ = lean_array_push(v___x_212_, v___x_208_);
v___x_214_ = lean_array_push(v___x_213_, v___x_209_);
v___x_215_ = lean_array_push(v___x_214_, v___x_210_);
v___x_216_ = lean_array_push(v___x_215_, v___x_211_);
v___x_217_ = l_Lasm_JS_Web_Support_args(v___x_216_);
v___x_218_ = 0;
v___x_219_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1(v___x_207_, v___x_217_, v___x_218_);
return v___x_219_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_new___boxed(lean_object* v_x_220_, lean_object* v_y_221_, lean_object* v_width_222_, lean_object* v_height_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lasm_JS_Web_DOMRectReadOnly_new(v_x_220_, v_y_221_, v_width_222_, v_height_223_);
lean_dec(v_height_223_);
lean_dec(v_width_222_);
lean_dec(v_y_221_);
lean_dec(v_x_220_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1(lean_object* v_context_227_, lean_object* v_d_228_){
_start:
{
lean_object* v_received_231_; 
if (lean_obj_tag(v_d_228_) == 3)
{
double v_n_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v_n_245_ = lean_ctor_get_float(v_d_228_, 0);
lean_dec_ref_known(v_d_228_, 0);
v___x_246_ = lean_box_float(v_n_245_);
v___x_247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
return v___x_247_;
}
else
{
if (lean_obj_tag(v_d_228_) == 9)
{
lean_object* v_value_248_; lean_object* v_description_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v_value_248_ = lean_ctor_get(v_d_228_, 0);
v_description_249_ = lean_ctor_get(v_d_228_, 1);
v___x_250_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_251_ = lean_string_dec_eq(v_description_249_, v___x_250_);
if (v___x_251_ == 0)
{
goto v___jp_243_;
}
else
{
uint32_t v___x_252_; uint64_t v___x_253_; lean_object* v___x_254_; uint32_t v___x_255_; lean_object* v___x_256_; 
lean_inc_n(v_value_248_, 2);
lean_dec_ref_known(v_d_228_, 2);
v___x_252_ = 206;
v___x_253_ = 0ULL;
v___x_254_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_254_, 0, v_value_248_);
lean_ctor_set(v___x_254_, 1, v___x_250_);
v___x_255_ = lasm_js_value_handle(v_value_248_);
lean_dec(v_value_248_);
v___x_256_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_252_, v___x_253_, v___x_254_, v___x_255_);
if (lean_obj_tag(v___x_256_) == 0)
{
lean_object* v_a_257_; uint8_t v___x_258_; 
v_a_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_a_257_);
lean_dec_ref_known(v___x_256_, 1);
v___x_258_ = lean_string_validate_utf8(v_a_257_);
if (v___x_258_ == 0)
{
lean_object* v___x_259_; lean_object* v___x_260_; 
lean_dec(v_a_257_);
v___x_259_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6);
v___x_260_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_259_);
v_received_231_ = v___x_260_;
goto v___jp_230_;
}
else
{
lean_object* v___x_261_; 
v___x_261_ = lean_string_from_utf8_unchecked(v_a_257_);
v_received_231_ = v___x_261_;
goto v___jp_230_;
}
}
else
{
lean_object* v___x_262_; 
lean_dec_ref_known(v___x_256_, 1);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7));
v_received_231_ = v___x_262_;
goto v___jp_230_;
}
}
}
else
{
goto v___jp_243_;
}
}
v___jp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_232_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_233_ = lean_string_append(v___x_232_, v_context_227_);
v___x_234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_235_ = lean_string_append(v___x_233_, v___x_234_);
v___x_236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___closed__0));
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
v___x_238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
v___x_240_ = lean_string_append(v___x_239_, v_received_231_);
lean_dec_ref(v_received_231_);
v___x_241_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
v___x_242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
v___jp_243_:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lasm_JS_Data_describe(v_d_228_);
v_received_231_ = v___x_244_;
goto v___jp_230_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1___boxed(lean_object* v_context_263_, lean_object* v_d_264_, lean_object* v_a_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1(v_context_263_, v_d_264_);
lean_dec_ref(v_context_263_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0(lean_object* v_context_267_, lean_object* v_bytes_268_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_268_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc(v_a_271_);
lean_dec_ref_known(v___x_270_, 1);
v___x_272_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0_spec__1(v_context_267_, v_a_271_);
return v___x_272_;
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_a_273_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_270_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_270_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0___boxed(lean_object* v_context_281_, lean_object* v_bytes_282_, lean_object* v_a_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0(v_context_281_, v_bytes_282_);
lean_dec_ref(v_bytes_282_);
lean_dec_ref(v_context_281_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(lean_object* v_o_286_, lean_object* v_key_287_){
_start:
{
lean_object* v_k_289_; lean_object* v___x_290_; 
v_k_289_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_k_289_, 0, v_key_287_);
lean_inc_ref(v_k_289_);
v___x_290_ = l_Lasm_JS_Wire_encodeIO(v_k_289_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; uint32_t v___x_292_; uint32_t v___x_293_; uint64_t v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v___x_290_, 1);
v___x_292_ = 203;
v___x_293_ = lasm_js_value_handle(v_o_286_);
v___x_294_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
v___x_295_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_296_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_296_, 0, v_o_286_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_unsigned_to_nat(2u);
v___x_298_ = lean_mk_empty_array_with_capacity(v___x_297_);
lean_inc_ref(v_k_289_);
v___x_299_ = lean_array_push(v___x_298_, v_k_289_);
v___x_300_ = lean_array_push(v___x_299_, v___x_296_);
v___x_301_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
v___x_302_ = lasm_js_call(v___x_292_, v___x_293_, v___x_294_, v_a_291_, v___x_301_);
lean_dec_ref_known(v___x_301_, 1);
lean_dec(v_a_291_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v_a_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_a_303_ = lean_ctor_get(v___x_302_, 0);
lean_inc(v_a_303_);
lean_dec_ref_known(v___x_302_, 1);
v___x_304_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___closed__0));
v___x_305_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_keyText(v_k_289_);
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
lean_dec_ref(v___x_305_);
v___x_307_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0_spec__0(v___x_306_, v_a_303_);
lean_dec(v_a_303_);
lean_dec_ref(v___x_306_);
return v___x_307_;
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref_known(v_k_289_, 1);
v_a_308_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_302_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_302_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
else
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
lean_dec_ref_known(v_k_289_, 1);
lean_dec(v_o_286_);
v_a_316_ = lean_ctor_get(v___x_290_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_290_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_290_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0___boxed(lean_object* v_o_324_, lean_object* v_key_325_, lean_object* v_a_326_){
_start:
{
lean_object* v_res_327_; 
v_res_327_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_o_324_, v_key_325_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_x(lean_object* v_self_328_){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_330_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_331_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_328_, v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_x___boxed(lean_object* v_self_332_, lean_object* v_a_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l_Lasm_JS_Web_DOMRectReadOnly_x(v_self_332_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_y(lean_object* v_self_335_){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_338_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_335_, v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_y___boxed(lean_object* v_self_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lasm_JS_Web_DOMRectReadOnly_y(v_self_339_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_width(lean_object* v_self_342_){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_345_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_342_, v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_width___boxed(lean_object* v_self_346_, lean_object* v_a_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lasm_JS_Web_DOMRectReadOnly_width(v_self_346_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_height(lean_object* v_self_349_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_352_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_349_, v___x_351_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_height___boxed(lean_object* v_self_353_, lean_object* v_a_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lasm_JS_Web_DOMRectReadOnly_height(v_self_353_);
return v_res_355_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_top(lean_object* v_self_357_){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_359_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_top___closed__0));
v___x_360_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_357_, v___x_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_top___boxed(lean_object* v_self_361_, lean_object* v_a_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lasm_JS_Web_DOMRectReadOnly_top(v_self_361_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_right(lean_object* v_self_365_){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; 
v___x_367_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_right___closed__0));
v___x_368_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_365_, v___x_367_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_right___boxed(lean_object* v_self_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lasm_JS_Web_DOMRectReadOnly_right(v_self_369_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_bottom(lean_object* v_self_373_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_bottom___closed__0));
v___x_376_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_373_, v___x_375_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_bottom___boxed(lean_object* v_self_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lasm_JS_Web_DOMRectReadOnly_bottom(v_self_377_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_left(lean_object* v_self_381_){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_383_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_left___closed__0));
v___x_384_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_381_, v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_left___boxed(lean_object* v_self_385_, lean_object* v_a_386_){
_start:
{
lean_object* v_res_387_; 
v_res_387_ = l_Lasm_JS_Web_DOMRectReadOnly_left(v_self_385_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(lean_object* v_x_388_){
_start:
{
if (lean_obj_tag(v_x_388_) == 0)
{
lean_object* v___x_389_; 
v___x_389_ = lean_box(0);
return v___x_389_;
}
else
{
lean_object* v_val_390_; lean_object* v_x_391_; lean_object* v_y_392_; lean_object* v_width_393_; lean_object* v_height_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v_val_390_ = lean_ctor_get(v_x_388_, 0);
v_x_391_ = lean_ctor_get(v_val_390_, 0);
v_y_392_ = lean_ctor_get(v_val_390_, 1);
v_width_393_ = lean_ctor_get(v_val_390_, 2);
v_height_394_ = lean_ctor_get(v_val_390_, 3);
v___x_395_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_396_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_x_391_);
v___x_397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_397_, 0, v___x_395_);
lean_ctor_set(v___x_397_, 1, v___x_396_);
v___x_398_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_399_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_y_392_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v___x_399_);
v___x_401_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_402_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_393_);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_405_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_394_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_404_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = lean_unsigned_to_nat(4u);
v___x_408_ = lean_mk_empty_array_with_capacity(v___x_407_);
v___x_409_ = lean_array_push(v___x_408_, v___x_397_);
v___x_410_ = lean_array_push(v___x_409_, v___x_400_);
v___x_411_ = lean_array_push(v___x_410_, v___x_403_);
v___x_412_ = lean_array_push(v___x_411_, v___x_406_);
v___x_413_ = l_Lasm_JS_Web_Support_fields(v___x_412_);
lean_dec_ref(v___x_412_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0___boxed(lean_object* v_x_414_){
_start:
{
lean_object* v_res_415_; 
v_res_415_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(v_x_414_);
lean_dec(v_x_414_);
return v_res_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect(lean_object* v_other_424_){
_start:
{
uint8_t v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_426_ = 0;
v___x_427_ = lean_unsigned_to_nat(1u);
v___x_428_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_fromRect___closed__2));
v___x_429_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(v_other_424_);
v___x_430_ = lean_mk_empty_array_with_capacity(v___x_427_);
v___x_431_ = lean_array_push(v___x_430_, v___x_429_);
v___x_432_ = l_Lasm_JS_Web_Support_args(v___x_431_);
v___x_433_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_428_, v___x_432_, v___x_426_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_a_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_441_; 
v_a_434_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_441_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_441_ == 0)
{
v___x_436_ = v___x_433_;
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_a_434_);
lean_dec(v___x_433_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_441_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_439_; 
if (v_isShared_437_ == 0)
{
v___x_439_ = v___x_436_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_a_434_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
v_a_442_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_433_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_433_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_fromRect___boxed(lean_object* v_other_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lasm_JS_Web_DOMRectReadOnly_fromRect(v_other_450_);
lean_dec(v_other_450_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(lean_object* v_bytes_453_){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_453_);
if (lean_obj_tag(v___x_455_) == 0)
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
v_a_456_ = lean_ctor_get(v___x_455_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_455_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_455_);
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
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
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
else
{
return v___x_455_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_464_, lean_object* v_a_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(v_bytes_464_);
lean_dec_ref(v_bytes_464_);
return v_res_466_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0(uint8_t v_await_467_, uint64_t v_extra_468_){
_start:
{
uint64_t v___x_469_; uint64_t v___y_471_; 
v___x_469_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_467_ == 0)
{
uint64_t v___x_474_; 
v___x_474_ = 0ULL;
v___y_471_ = v___x_474_;
goto v___jp_470_;
}
else
{
uint64_t v___x_475_; 
v___x_475_ = 2ULL;
v___y_471_ = v___x_475_;
goto v___jp_470_;
}
v___jp_470_:
{
uint64_t v___x_472_; uint64_t v___x_473_; 
v___x_472_ = lean_uint64_lor(v___x_469_, v___y_471_);
v___x_473_ = lean_uint64_lor(v___x_472_, v_extra_468_);
return v___x_473_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0___boxed(lean_object* v_await_476_, lean_object* v_extra_477_){
_start:
{
uint8_t v_await_boxed_478_; uint64_t v_extra_boxed_479_; uint64_t v_res_480_; lean_object* v_r_481_; 
v_await_boxed_478_ = lean_unbox(v_await_476_);
v_extra_boxed_479_ = lean_unbox_uint64(v_extra_477_);
lean_dec_ref(v_extra_477_);
v_res_480_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0(v_await_boxed_478_, v_extra_boxed_479_);
v_r_481_ = lean_box_uint64(v_res_480_);
return v_r_481_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0(void){
_start:
{
uint64_t v___x_482_; uint8_t v___x_483_; uint64_t v___x_484_; 
v___x_482_ = 8ULL;
v___x_483_ = 0;
v___x_484_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__0(v___x_483_, v___x_482_);
return v___x_484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0(lean_object* v_o_485_, lean_object* v_name_486_, lean_object* v_args_487_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; uint64_t v___x_492_; lean_object* v___x_493_; 
v___x_489_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_490_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_490_, 0, v_o_485_);
lean_ctor_set(v___x_490_, 1, v___x_489_);
v___x_491_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_491_, 0, v_name_486_);
v___x_492_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___closed__0);
v___x_493_ = l_Lasm_JS_Value_invokeRaw(v___x_490_, v___x_491_, v_args_487_, v___x_492_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; lean_object* v___x_495_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_a_494_);
lean_dec_ref_known(v___x_493_, 1);
v___x_495_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(v_a_494_);
lean_dec(v_a_494_);
return v___x_495_;
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
v_a_496_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_493_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_493_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0___boxed(lean_object* v_o_504_, lean_object* v_name_505_, lean_object* v_args_506_, lean_object* v_a_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0(v_o_504_, v_name_505_, v_args_506_);
return v_res_508_;
}
}
static lean_object* _init_l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2(void){
_start:
{
lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_512_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__1));
v___x_513_ = l_Lasm_JS_Web_Support_args(v___x_512_);
return v___x_513_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON(lean_object* v_self_514_){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_516_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__0));
v___x_517_ = lean_obj_once(&l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2, &l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2_once, _init_l_Lasm_JS_Web_DOMRectReadOnly_toJSON___closed__2);
v___x_518_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0(v_self_514_, v___x_516_, v___x_517_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectReadOnly_toJSON___boxed(lean_object* v_self_519_, lean_object* v_a_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lasm_JS_Web_DOMRectReadOnly_toJSON(v_self_519_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg(lean_object* v_d_522_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_524_, 0, v_d_522_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_d_525_, lean_object* v_a_526_){
_start:
{
lean_object* v_res_527_; 
v_res_527_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___redArg(v_d_525_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2(lean_object* v_context_528_, lean_object* v_d_529_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_531_, 0, v_d_529_);
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2___boxed(lean_object* v_context_532_, lean_object* v_d_533_, lean_object* v_a_534_){
_start:
{
lean_object* v_res_535_; 
v_res_535_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1_spec__2(v_context_532_, v_d_533_);
lean_dec_ref(v_context_532_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1(lean_object* v_context_536_, lean_object* v_bytes_537_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___redArg(v_bytes_537_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1___boxed(lean_object* v_context_540_, lean_object* v_bytes_541_, lean_object* v_a_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectReadOnly_toJSON_spec__0_spec__1(v_context_540_, v_bytes_541_);
lean_dec_ref(v_bytes_541_);
lean_dec_ref(v_context_540_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0(lean_object* v_context_544_, lean_object* v_d_545_){
_start:
{
lean_object* v_received_548_; 
if (lean_obj_tag(v_d_545_) == 9)
{
lean_object* v_value_562_; lean_object* v___x_563_; 
v_value_562_ = lean_ctor_get(v_d_545_, 0);
lean_inc(v_value_562_);
lean_dec_ref_known(v_d_545_, 2);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v_value_562_);
return v___x_563_;
}
else
{
if (lean_obj_tag(v_d_545_) == 9)
{
lean_object* v_value_564_; lean_object* v_description_565_; lean_object* v___x_566_; uint8_t v___x_567_; 
v_value_564_ = lean_ctor_get(v_d_545_, 0);
v_description_565_ = lean_ctor_get(v_d_545_, 1);
v___x_566_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_567_ = lean_string_dec_eq(v_description_565_, v___x_566_);
if (v___x_567_ == 0)
{
goto v___jp_560_;
}
else
{
uint32_t v___x_568_; uint64_t v___x_569_; lean_object* v___x_570_; uint32_t v___x_571_; lean_object* v___x_572_; 
lean_inc_n(v_value_564_, 2);
lean_dec_ref_known(v_d_545_, 2);
v___x_568_ = 206;
v___x_569_ = 0ULL;
v___x_570_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_570_, 0, v_value_564_);
lean_ctor_set(v___x_570_, 1, v___x_566_);
v___x_571_ = lasm_js_value_handle(v_value_564_);
lean_dec(v_value_564_);
v___x_572_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_568_, v___x_569_, v___x_570_, v___x_571_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; uint8_t v___x_574_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_572_, 1);
v___x_574_ = lean_string_validate_utf8(v_a_573_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; lean_object* v___x_576_; 
lean_dec(v_a_573_);
v___x_575_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6);
v___x_576_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_575_);
v_received_548_ = v___x_576_;
goto v___jp_547_;
}
else
{
lean_object* v___x_577_; 
v___x_577_ = lean_string_from_utf8_unchecked(v_a_573_);
v_received_548_ = v___x_577_;
goto v___jp_547_;
}
}
else
{
lean_object* v___x_578_; 
lean_dec_ref_known(v___x_572_, 1);
v___x_578_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7));
v_received_548_ = v___x_578_;
goto v___jp_547_;
}
}
}
else
{
goto v___jp_560_;
}
}
v___jp_547_:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_549_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_550_ = lean_string_append(v___x_549_, v_context_544_);
v___x_551_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_552_ = lean_string_append(v___x_550_, v___x_551_);
v___x_553_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSDOMRect___closed__0));
v___x_554_ = lean_string_append(v___x_552_, v___x_553_);
v___x_555_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_556_ = lean_string_append(v___x_554_, v___x_555_);
v___x_557_ = lean_string_append(v___x_556_, v_received_548_);
lean_dec_ref(v_received_548_);
v___x_558_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
v___x_559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
v___jp_560_:
{
lean_object* v___x_561_; 
v___x_561_ = l_Lasm_JS_Data_describe(v_d_545_);
v_received_548_ = v___x_561_;
goto v___jp_547_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0___boxed(lean_object* v_context_579_, lean_object* v_d_580_, lean_object* v_a_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0(v_context_579_, v_d_580_);
lean_dec_ref(v_context_579_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0(lean_object* v_b_583_, lean_object* v_args_584_, uint8_t v_await_585_){
_start:
{
uint64_t v___y_588_; uint64_t v___y_589_; uint64_t v___x_624_; uint64_t v___y_626_; 
v___x_624_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_585_ == 0)
{
uint64_t v___x_631_; 
v___x_631_ = 0ULL;
v___y_626_ = v___x_631_;
goto v___jp_625_;
}
else
{
uint64_t v___x_632_; 
v___x_632_ = 2ULL;
v___y_626_ = v___x_632_;
goto v___jp_625_;
}
v___jp_587_:
{
uint64_t v_flags_590_; uint32_t v___x_591_; lean_object* v___x_592_; uint32_t v___x_593_; lean_object* v___x_594_; 
v_flags_590_ = lean_uint64_lor(v___y_588_, v___y_589_);
v___x_591_ = 214;
v___x_592_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_583_, v_args_584_);
v___x_593_ = 0;
v___x_594_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_591_, v_flags_590_, v___x_592_, v___x_593_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_596_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_594_, 1);
v___x_596_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_595_);
lean_dec(v_a_595_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v_a_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v_a_597_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_597_);
lean_dec_ref_known(v___x_596_, 1);
v___x_598_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_583_);
v___x_599_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0_spec__0(v___x_598_, v_a_597_);
lean_dec_ref(v___x_598_);
return v___x_599_;
}
else
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_607_; 
v_a_600_ = lean_ctor_get(v___x_596_, 0);
v_isSharedCheck_607_ = !lean_is_exclusive(v___x_596_);
if (v_isSharedCheck_607_ == 0)
{
v___x_602_ = v___x_596_;
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_596_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_607_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_605_; 
if (v_isShared_603_ == 0)
{
v___x_605_ = v___x_602_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_a_600_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_623_; 
v_a_608_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_623_ == 0)
{
v___x_610_ = v___x_594_;
v_isShared_611_ = v_isSharedCheck_623_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_594_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_623_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_621_; 
v___x_612_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_613_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_583_);
v___x_614_ = lean_string_append(v___x_612_, v___x_613_);
lean_dec_ref(v___x_613_);
v___x_615_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__0));
v___x_616_ = lean_string_append(v___x_614_, v___x_615_);
v___x_617_ = lean_io_error_to_string(v_a_608_);
v___x_618_ = lean_string_append(v___x_616_, v___x_617_);
lean_dec_ref(v___x_617_);
v___x_619_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
if (v_isShared_611_ == 0)
{
lean_ctor_set(v___x_610_, 0, v___x_619_);
v___x_621_ = v___x_610_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v___x_619_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
v___jp_625_:
{
uint8_t v_construct_627_; uint64_t v___x_628_; 
v_construct_627_ = lean_ctor_get_uint8(v_b_583_, sizeof(void*)*4);
v___x_628_ = lean_uint64_lor(v___x_624_, v___y_626_);
if (v_construct_627_ == 0)
{
uint64_t v___x_629_; 
v___x_629_ = 0ULL;
v___y_588_ = v___x_628_;
v___y_589_ = v___x_629_;
goto v___jp_587_;
}
else
{
uint64_t v___x_630_; 
v___x_630_ = 4ULL;
v___y_588_ = v___x_628_;
v___y_589_ = v___x_630_;
goto v___jp_587_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0___boxed(lean_object* v_b_633_, lean_object* v_args_634_, lean_object* v_await_635_, lean_object* v_a_636_){
_start:
{
uint8_t v_await_boxed_637_; lean_object* v_res_638_; 
v_await_boxed_637_ = lean_unbox(v_await_635_);
v_res_638_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0(v_b_633_, v_args_634_, v_await_boxed_637_);
lean_dec_ref(v_b_633_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_new(lean_object* v_x_647_, lean_object* v_y_648_, lean_object* v_width_649_, lean_object* v_height_650_){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; uint8_t v___x_664_; lean_object* v___x_665_; 
v___x_652_ = lean_unsigned_to_nat(4u);
v___x_653_ = ((lean_object*)(l_Lasm_JS_Web_DOMRect_new___closed__2));
v___x_654_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_x_647_);
v___x_655_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_y_648_);
v___x_656_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_width_649_);
v___x_657_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__0(v_height_650_);
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_652_);
v___x_659_ = lean_array_push(v___x_658_, v___x_654_);
v___x_660_ = lean_array_push(v___x_659_, v___x_655_);
v___x_661_ = lean_array_push(v___x_660_, v___x_656_);
v___x_662_ = lean_array_push(v___x_661_, v___x_657_);
v___x_663_ = l_Lasm_JS_Web_Support_args(v___x_662_);
v___x_664_ = 0;
v___x_665_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRect_new_spec__0(v___x_653_, v___x_663_, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_new___boxed(lean_object* v_x_666_, lean_object* v_y_667_, lean_object* v_width_668_, lean_object* v_height_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lasm_JS_Web_DOMRect_new(v_x_666_, v_y_667_, v_width_668_, v_height_669_);
lean_dec(v_height_669_);
lean_dec(v_width_668_);
lean_dec(v_y_667_);
lean_dec(v_x_666_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_x(lean_object* v_self_672_){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_674_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_675_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_672_, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_x___boxed(lean_object* v_self_676_, lean_object* v_a_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lasm_JS_Web_DOMRect_x(v_self_676_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(lean_object* v_o_679_, lean_object* v_key_680_, lean_object* v_x_681_){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v_payload_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_683_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_683_, 0, v_key_680_);
v___x_684_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
lean_inc(v_o_679_);
v___x_685_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_685_, 0, v_o_679_);
lean_ctor_set(v___x_685_, 1, v___x_684_);
v___x_686_ = lean_unsigned_to_nat(3u);
v___x_687_ = lean_mk_empty_array_with_capacity(v___x_686_);
lean_inc_ref(v___x_683_);
v___x_688_ = lean_array_push(v___x_687_, v___x_683_);
lean_inc(v_x_681_);
v___x_689_ = lean_array_push(v___x_688_, v_x_681_);
v___x_690_ = lean_array_push(v___x_689_, v___x_685_);
v_payload_691_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_payload_691_, 0, v___x_690_);
v___x_692_ = lean_unsigned_to_nat(2u);
v___x_693_ = lean_mk_empty_array_with_capacity(v___x_692_);
v___x_694_ = lean_array_push(v___x_693_, v___x_683_);
v___x_695_ = lean_array_push(v___x_694_, v_x_681_);
v___x_696_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_696_, 0, v___x_695_);
v___x_697_ = l_Lasm_JS_Wire_encodeIO(v___x_696_);
if (lean_obj_tag(v___x_697_) == 0)
{
lean_object* v_a_698_; uint32_t v___x_699_; uint32_t v___x_700_; uint64_t v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_a_698_ = lean_ctor_get(v___x_697_, 0);
lean_inc(v_a_698_);
lean_dec_ref_known(v___x_697_, 1);
v___x_699_ = 204;
v___x_700_ = lasm_js_value_handle(v_o_679_);
lean_dec(v_o_679_);
v___x_701_ = 0ULL;
v___x_702_ = lean_box(0);
v___x_703_ = lasm_js_call(v___x_699_, v___x_700_, v___x_701_, v_a_698_, v_payload_691_);
lean_dec_ref_known(v_payload_691_, 1);
lean_dec(v_a_698_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_710_; 
v_isSharedCheck_710_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_710_ == 0)
{
lean_object* v_unused_711_; 
v_unused_711_ = lean_ctor_get(v___x_703_, 0);
lean_dec(v_unused_711_);
v___x_705_ = v___x_703_;
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
else
{
lean_dec(v___x_703_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_710_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_702_);
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_709_; 
v_reuseFailAlloc_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_709_, 0, v___x_702_);
v___x_708_ = v_reuseFailAlloc_709_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
return v___x_708_;
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
v_a_712_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_703_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_703_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_727_; 
lean_dec_ref_known(v_payload_691_, 1);
lean_dec(v_o_679_);
v_a_720_ = lean_ctor_get(v___x_697_, 0);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_697_);
if (v_isSharedCheck_727_ == 0)
{
v___x_722_ = v___x_697_;
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_697_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_727_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
lean_object* v___x_725_; 
if (v_isShared_723_ == 0)
{
v___x_725_ = v___x_722_;
goto v_reusejp_724_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_a_720_);
v___x_725_ = v_reuseFailAlloc_726_;
goto v_reusejp_724_;
}
v_reusejp_724_:
{
return v___x_725_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0___boxed(lean_object* v_o_728_, lean_object* v_key_729_, lean_object* v_x_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_o_728_, v_key_729_, v_x_730_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setX(lean_object* v_self_733_, double v_value_734_){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_736_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__0));
v___x_737_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_737_, 0, v_value_734_);
v___x_738_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_733_, v___x_736_, v___x_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setX___boxed(lean_object* v_self_739_, lean_object* v_value_740_, lean_object* v_a_741_){
_start:
{
double v_value_boxed_742_; lean_object* v_res_743_; 
v_value_boxed_742_ = lean_unbox_float(v_value_740_);
lean_dec_ref(v_value_740_);
v_res_743_ = l_Lasm_JS_Web_DOMRect_setX(v_self_739_, v_value_boxed_742_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_y(lean_object* v_self_744_){
_start:
{
lean_object* v___x_746_; lean_object* v___x_747_; 
v___x_746_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_747_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_744_, v___x_746_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_y___boxed(lean_object* v_self_748_, lean_object* v_a_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = l_Lasm_JS_Web_DOMRect_y(v_self_748_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setY(lean_object* v_self_751_, double v_value_752_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_754_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__1));
v___x_755_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_755_, 0, v_value_752_);
v___x_756_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_751_, v___x_754_, v___x_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setY___boxed(lean_object* v_self_757_, lean_object* v_value_758_, lean_object* v_a_759_){
_start:
{
double v_value_boxed_760_; lean_object* v_res_761_; 
v_value_boxed_760_ = lean_unbox_float(v_value_758_);
lean_dec_ref(v_value_758_);
v_res_761_ = l_Lasm_JS_Web_DOMRect_setY(v_self_757_, v_value_boxed_760_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_width(lean_object* v_self_762_){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_764_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_765_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_762_, v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_width___boxed(lean_object* v_self_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lasm_JS_Web_DOMRect_width(v_self_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setWidth(lean_object* v_self_769_, double v_value_770_){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_772_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__2));
v___x_773_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_773_, 0, v_value_770_);
v___x_774_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_769_, v___x_772_, v___x_773_);
return v___x_774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setWidth___boxed(lean_object* v_self_775_, lean_object* v_value_776_, lean_object* v_a_777_){
_start:
{
double v_value_boxed_778_; lean_object* v_res_779_; 
v_value_boxed_778_ = lean_unbox_float(v_value_776_);
lean_dec_ref(v_value_776_);
v_res_779_ = l_Lasm_JS_Web_DOMRect_setWidth(v_self_775_, v_value_boxed_778_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_height(lean_object* v_self_780_){
_start:
{
lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_782_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_783_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_DOMRectReadOnly_x_spec__0(v_self_780_, v___x_782_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_height___boxed(lean_object* v_self_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lasm_JS_Web_DOMRect_height(v_self_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setHeight(lean_object* v_self_787_, double v_value_788_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v___x_790_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectInit___lam__0___closed__3));
v___x_791_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_791_, 0, v_value_788_);
v___x_792_ = l_Lasm_JS_Value_set___at___00Lasm_JS_Web_DOMRect_setX_spec__0(v_self_787_, v___x_790_, v___x_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_setHeight___boxed(lean_object* v_self_793_, lean_object* v_value_794_, lean_object* v_a_795_){
_start:
{
double v_value_boxed_796_; lean_object* v_res_797_; 
v_value_boxed_796_ = lean_unbox_float(v_value_794_);
lean_dec_ref(v_value_794_);
v_res_797_ = l_Lasm_JS_Web_DOMRect_setHeight(v_self_793_, v_value_boxed_796_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_fromRect(lean_object* v_other_806_){
_start:
{
uint8_t v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
v___x_808_ = 0;
v___x_809_ = lean_unsigned_to_nat(1u);
v___x_810_ = ((lean_object*)(l_Lasm_JS_Web_DOMRect_fromRect___closed__2));
v___x_811_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_DOMRectReadOnly_fromRect_spec__0(v_other_806_);
v___x_812_ = lean_mk_empty_array_with_capacity(v___x_809_);
v___x_813_ = lean_array_push(v___x_812_, v___x_811_);
v___x_814_ = l_Lasm_JS_Web_Support_args(v___x_813_);
v___x_815_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_810_, v___x_814_, v___x_808_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_823_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_823_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_823_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_823_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
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
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_831_; 
v_a_824_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_831_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_831_ == 0)
{
v___x_826_ = v___x_815_;
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_a_824_);
lean_dec(v___x_815_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_831_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_829_; 
if (v_isShared_827_ == 0)
{
v___x_829_ = v___x_826_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_830_; 
v_reuseFailAlloc_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_830_, 0, v_a_824_);
v___x_829_ = v_reuseFailAlloc_830_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
return v___x_829_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRect_fromRect___boxed(lean_object* v_other_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Lasm_JS_Web_DOMRect_fromRect(v_other_832_);
lean_dec(v_other_832_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_length(lean_object* v_self_836_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectList_length___closed__0));
v___x_839_ = l_Lasm_JS_Value_get___at___00Lasm_JS_Web_Support_viewBytes_spec__1(v_self_836_, v___x_838_);
return v___x_839_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_length___boxed(lean_object* v_self_840_, lean_object* v_a_841_){
_start:
{
lean_object* v_res_842_; 
v_res_842_ = l_Lasm_JS_Web_DOMRectList_length(v_self_840_);
return v_res_842_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0(uint8_t v_await_843_, uint64_t v_extra_844_){
_start:
{
uint64_t v___x_845_; uint64_t v___y_847_; 
v___x_845_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1___closed__1);
if (v_await_843_ == 0)
{
uint64_t v___x_850_; 
v___x_850_ = 0ULL;
v___y_847_ = v___x_850_;
goto v___jp_846_;
}
else
{
uint64_t v___x_851_; 
v___x_851_ = 2ULL;
v___y_847_ = v___x_851_;
goto v___jp_846_;
}
v___jp_846_:
{
uint64_t v___x_848_; uint64_t v___x_849_; 
v___x_848_ = lean_uint64_lor(v___x_845_, v___y_847_);
v___x_849_ = lean_uint64_lor(v___x_848_, v_extra_844_);
return v___x_849_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0___boxed(lean_object* v_await_852_, lean_object* v_extra_853_){
_start:
{
uint8_t v_await_boxed_854_; uint64_t v_extra_boxed_855_; uint64_t v_res_856_; lean_object* v_r_857_; 
v_await_boxed_854_ = lean_unbox(v_await_852_);
v_extra_boxed_855_ = lean_unbox_uint64(v_extra_853_);
lean_dec_ref(v_extra_853_);
v_res_856_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0(v_await_boxed_854_, v_extra_boxed_855_);
v_r_857_ = lean_box_uint64(v_res_856_);
return v_r_857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2(lean_object* v_context_859_, lean_object* v_d_860_){
_start:
{
lean_object* v_received_866_; 
switch(lean_obj_tag(v_d_860_))
{
case 1:
{
goto v___jp_862_;
}
case 0:
{
goto v___jp_862_;
}
default: 
{
if (lean_obj_tag(v_d_860_) == 9)
{
lean_object* v_value_880_; lean_object* v___x_881_; lean_object* v___x_882_; 
v_value_880_ = lean_ctor_get(v_d_860_, 0);
lean_inc(v_value_880_);
lean_dec_ref_known(v_d_860_, 2);
v___x_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_881_, 0, v_value_880_);
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
return v___x_882_;
}
else
{
if (lean_obj_tag(v_d_860_) == 9)
{
lean_object* v_value_883_; lean_object* v_description_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v_value_883_ = lean_ctor_get(v_d_860_, 0);
v_description_884_ = lean_ctor_get(v_d_860_, 1);
v___x_885_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_886_ = lean_string_dec_eq(v_description_884_, v___x_885_);
if (v___x_886_ == 0)
{
goto v___jp_878_;
}
else
{
uint32_t v___x_887_; uint64_t v___x_888_; lean_object* v___x_889_; uint32_t v___x_890_; lean_object* v___x_891_; 
lean_inc_n(v_value_883_, 2);
lean_dec_ref_known(v_d_860_, 2);
v___x_887_ = 206;
v___x_888_ = 0ULL;
v___x_889_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_889_, 0, v_value_883_);
lean_ctor_set(v___x_889_, 1, v___x_885_);
v___x_890_ = lasm_js_value_handle(v_value_883_);
lean_dec(v_value_883_);
v___x_891_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_887_, v___x_888_, v___x_889_, v___x_890_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; uint8_t v___x_893_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
lean_inc(v_a_892_);
lean_dec_ref_known(v___x_891_, 1);
v___x_893_ = lean_string_validate_utf8(v_a_892_);
if (v___x_893_ == 0)
{
lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec(v_a_892_);
v___x_894_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__6);
v___x_895_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_894_);
v_received_866_ = v___x_895_;
goto v___jp_865_;
}
else
{
lean_object* v___x_896_; 
v___x_896_ = lean_string_from_utf8_unchecked(v_a_892_);
v_received_866_ = v___x_896_;
goto v___jp_865_;
}
}
else
{
lean_object* v___x_897_; 
lean_dec_ref_known(v___x_891_, 1);
v___x_897_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__7));
v_received_866_ = v___x_897_;
goto v___jp_865_;
}
}
}
else
{
goto v___jp_878_;
}
}
}
}
v___jp_862_:
{
lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_863_ = lean_box(0);
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
return v___x_864_;
}
v___jp_865_:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v___x_867_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__0));
v___x_868_ = lean_string_append(v___x_867_, v_context_859_);
v___x_869_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__1));
v___x_870_ = lean_string_append(v___x_868_, v___x_869_);
v___x_871_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___closed__0));
v___x_872_ = lean_string_append(v___x_870_, v___x_871_);
v___x_873_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_DOMRectReadOnly_new_spec__1_spec__1___closed__2));
v___x_874_ = lean_string_append(v___x_872_, v___x_873_);
v___x_875_ = lean_string_append(v___x_874_, v_received_866_);
lean_dec_ref(v_received_866_);
v___x_876_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_876_, 0, v___x_875_);
v___x_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_877_, 0, v___x_876_);
return v___x_877_;
}
v___jp_878_:
{
lean_object* v___x_879_; 
v___x_879_ = l_Lasm_JS_Data_describe(v_d_860_);
v_received_866_ = v___x_879_;
goto v___jp_865_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2___boxed(lean_object* v_context_898_, lean_object* v_d_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2(v_context_898_, v_d_899_);
lean_dec_ref(v_context_898_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1(lean_object* v_context_902_, lean_object* v_bytes_903_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_903_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; lean_object* v___x_907_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_906_);
lean_dec_ref_known(v___x_905_, 1);
v___x_907_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1_spec__2(v_context_902_, v_a_906_);
return v___x_907_;
}
else
{
lean_object* v_a_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_915_; 
v_a_908_ = lean_ctor_get(v___x_905_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_915_ == 0)
{
v___x_910_ = v___x_905_;
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_a_908_);
lean_dec(v___x_905_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_915_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_913_; 
if (v_isShared_911_ == 0)
{
v___x_913_ = v___x_910_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v_a_908_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1___boxed(lean_object* v_context_916_, lean_object* v_bytes_917_, lean_object* v_a_918_){
_start:
{
lean_object* v_res_919_; 
v_res_919_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1(v_context_916_, v_bytes_917_);
lean_dec_ref(v_bytes_917_);
lean_dec_ref(v_context_916_);
return v_res_919_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0(void){
_start:
{
uint64_t v___x_920_; uint8_t v___x_921_; uint64_t v___x_922_; 
v___x_920_ = 8ULL;
v___x_921_ = 0;
v___x_922_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__0(v___x_921_, v___x_920_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0(lean_object* v_o_924_, lean_object* v_name_925_, lean_object* v_args_926_){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; uint64_t v___x_931_; lean_object* v___x_932_; 
v___x_928_ = ((lean_object*)(l_Lasm_JS_Web_instToJSDOMRectReadOnly___lam__0___closed__0));
v___x_929_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_929_, 0, v_o_924_);
lean_ctor_set(v___x_929_, 1, v___x_928_);
lean_inc_ref(v_name_925_);
v___x_930_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_930_, 0, v_name_925_);
v___x_931_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__0);
v___x_932_ = l_Lasm_JS_Value_invokeRaw(v___x_929_, v___x_930_, v_args_926_, v___x_931_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_932_, 1);
v___x_934_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___closed__1));
v___x_935_ = lean_string_append(v___x_934_, v_name_925_);
lean_dec_ref(v_name_925_);
v___x_936_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0_spec__1(v___x_935_, v_a_933_);
lean_dec(v_a_933_);
lean_dec_ref(v___x_935_);
return v___x_936_;
}
else
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_944_; 
lean_dec_ref(v_name_925_);
v_a_937_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_944_ == 0)
{
v___x_939_ = v___x_932_;
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_932_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_944_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v___x_942_; 
if (v_isShared_940_ == 0)
{
v___x_942_ = v___x_939_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_937_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
return v___x_942_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0___boxed(lean_object* v_o_945_, lean_object* v_name_946_, lean_object* v_args_947_, lean_object* v_a_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0(v_o_945_, v_name_946_, v_args_947_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_item(lean_object* v_self_951_, lean_object* v_index_952_){
_start:
{
lean_object* v___x_954_; lean_object* v___y_956_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; uint8_t v___x_965_; 
v___x_954_ = ((lean_object*)(l_Lasm_JS_Web_DOMRectList_item___closed__0));
v___x_962_ = lean_nat_to_int(v_index_952_);
v___x_963_ = lean_nat_abs(v___x_962_);
v___x_964_ = lean_cstr_to_nat("9007199254740991");
v___x_965_ = lean_nat_dec_le(v___x_963_, v___x_964_);
lean_dec(v___x_963_);
if (v___x_965_ == 0)
{
lean_object* v___x_966_; 
v___x_966_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_966_, 0, v___x_962_);
v___y_956_ = v___x_966_;
goto v___jp_955_;
}
else
{
double v___x_967_; lean_object* v___x_968_; 
v___x_967_ = l_Float_ofInt(v___x_962_);
lean_dec(v___x_962_);
v___x_968_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_968_, 0, v___x_967_);
v___y_956_ = v___x_968_;
goto v___jp_955_;
}
v___jp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_957_ = lean_unsigned_to_nat(1u);
v___x_958_ = lean_mk_empty_array_with_capacity(v___x_957_);
v___x_959_ = lean_array_push(v___x_958_, v___y_956_);
v___x_960_ = l_Lasm_JS_Web_Support_args(v___x_959_);
v___x_961_ = l_Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_DOMRectList_item_spec__0(v_self_951_, v___x_954_, v___x_960_);
return v___x_961_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_DOMRectList_item___boxed(lean_object* v_self_969_, lean_object* v_index_970_, lean_object* v_a_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_Lasm_JS_Web_DOMRectList_item(v_self_969_, v_index_970_);
return v_res_972_;
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
