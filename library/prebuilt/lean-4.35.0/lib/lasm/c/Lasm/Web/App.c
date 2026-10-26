// Lean compiler output
// Module: Lasm.Web.App
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta public import Lasm.Web.Types
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
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_Web_callback(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSUnit;
lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_Web_handleFromJS___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_instFromJSPort___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_instFromJSPort___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_Web_App_instFromJSPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_App_instFromJSPort___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_App_instFromJSPort___closed__0 = (const lean_object*)&l_Lasm_Web_App_instFromJSPort___closed__0_value;
static const lean_string_object l_Lasm_Web_App_instFromJSPort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.App.Port"};
static const lean_object* l_Lasm_Web_App_instFromJSPort___closed__1 = (const lean_object*)&l_Lasm_Web_App_instFromJSPort___closed__1_value;
static lean_once_cell_t l_Lasm_Web_App_instFromJSPort___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_App_instFromJSPort___closed__2;
LEAN_EXPORT lean_object* l_Lasm_Web_App_instFromJSPort;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Element"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_root___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "root"};
static const lean_object* l_Lasm_Web_App_Raw_root___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_root___closed__0_value;
static const lean_string_object l_Lasm_Web_App_Raw_root___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:app"};
static const lean_object* l_Lasm_Web_App_Raw_root___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_root___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_root___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_root___closed__2 = (const lean_object*)&l_Lasm_Web_App_Raw_root___closed__2_value;
static const lean_array_object l_Lasm_Web_App_Raw_root___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_App_Raw_root___closed__3 = (const lean_object*)&l_Lasm_Web_App_Raw_root___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_root();
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_root___boxed(lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_flags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "flags"};
static const lean_object* l_Lasm_Web_App_Raw_flags___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_flags___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_flags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_flags___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_flags___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_flags___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_flags___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_flags();
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_flags___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_hydrating___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hydrating"};
static const lean_object* l_Lasm_Web_App_Raw_hydrating___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_hydrating___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_hydrating___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_hydrating___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_hydrating___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_hydrating___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_hydrating___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hydrating();
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hydrating___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_target___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_Web_App_Raw_target___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_target___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_target___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_target___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_target___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_target___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_target___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_target();
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_target___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_port___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_Web_App_Raw_port___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_port___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_port___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_port___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_port___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_port___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_port___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_port___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_onMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onMessage"};
static const lean_object* l_Lasm_Web_App_Raw_onMessage___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_onMessage___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_onMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_onMessage___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_onMessage___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_onMessage___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_onMessage___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onMessage___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_onUnmount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onUnmount"};
static const lean_object* l_Lasm_Web_App_Raw_onUnmount___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_onUnmount___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_onUnmount___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_onUnmount___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_onUnmount___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_onUnmount___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_onUnmount___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onUnmount(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onUnmount___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_hotState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hotState"};
static const lean_object* l_Lasm_Web_App_Raw_hotState___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_hotState___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_hotState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_hotState___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_hotState___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_hotState___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_hotState___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hotState();
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hotState___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_App_Raw_onHotSave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onHotSave"};
static const lean_object* l_Lasm_Web_App_Raw_onHotSave___closed__0 = (const lean_object*)&l_Lasm_Web_App_Raw_onHotSave___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Raw_onHotSave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Raw_onHotSave___closed__0_value),((lean_object*)&l_Lasm_Web_App_Raw_root___closed__1_value),((lean_object*)&l_Lasm_Web_App_Raw_onHotSave___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_App_Raw_onHotSave___closed__1 = (const lean_object*)&l_Lasm_Web_App_Raw_onHotSave___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onHotSave(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onHotSave___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_root();
LEAN_EXPORT lean_object* l_Lasm_Web_App_root___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_App_flags___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.Web.App.flags"};
static const lean_object* l_Lasm_Web_App_flags___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_App_flags___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_hydrating();
LEAN_EXPORT lean_object* l_Lasm_Web_App_hydrating___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_target();
LEAN_EXPORT lean_object* l_Lasm_Web_App_target___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_port___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Port_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emit"};
static const lean_object* l_Lasm_Web_App_Port_send___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_App_Port_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_App_Port_subscribe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "listen"};
static const lean_object* l_Lasm_Web_App_Port_subscribe___closed__0 = (const lean_object*)&l_Lasm_Web_App_Port_subscribe___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_App_Port_subscribeAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_App_Port_subscribeAsync___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_App_Port_subscribeAsync___closed__0 = (const lean_object*)&l_Lasm_Web_App_Port_subscribeAsync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessage___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessageAsync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessageAsync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_App_instFromJSPort___lam__0(lean_object* v_x_1_){
_start:
{
lean_inc(v_x_1_);
return v_x_1_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_instFromJSPort___lam__0___boxed(lean_object* v_x_2_){
_start:
{
lean_object* v_res_3_; 
v_res_3_ = l_Lasm_Web_App_instFromJSPort___lam__0(v_x_2_);
lean_dec(v_x_2_);
return v_res_3_;
}
}
static lean_object* _init_l_Lasm_Web_App_instFromJSPort___closed__2(void){
_start:
{
lean_object* v___f_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___f_6_ = ((lean_object*)(l_Lasm_Web_App_instFromJSPort___closed__0));
v___x_7_ = ((lean_object*)(l_Lasm_Web_App_instFromJSPort___closed__1));
v___x_8_ = l_Lasm_Web_handleFromJS___redArg(v___x_7_, v___f_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Lasm_Web_App_instFromJSPort(void){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_once(&l_Lasm_Web_App_instFromJSPort___closed__2, &l_Lasm_Web_App_instFromJSPort___closed__2_once, _init_l_Lasm_Web_App_instFromJSPort___closed__2);
return v___x_9_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_16_ = lean_string_utf8_byte_size(v___x_15_);
return v___x_16_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; 
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5);
v___x_19_ = lean_nat_dec_eq(v___x_18_, v___x_17_);
return v___x_19_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_24_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__10));
v___x_25_ = lean_unsigned_to_nat(46u);
v___x_26_ = lean_unsigned_to_nat(193u);
v___x_27_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9));
v___x_28_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8));
v___x_29_ = l_mkPanicMessageWithDecl(v___x_28_, v___x_27_, v___x_26_, v___x_25_, v___x_24_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0(lean_object* v_context_31_, lean_object* v_d_32_){
_start:
{
lean_object* v___y_35_; lean_object* v___y_36_; 
if (lean_obj_tag(v_d_32_) == 9)
{
lean_object* v_value_40_; lean_object* v___x_41_; 
v_value_40_ = lean_ctor_get(v_d_32_, 0);
lean_inc(v_value_40_);
lean_dec_ref_known(v_d_32_, 2);
v___x_41_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_41_, 0, v_value_40_);
return v___x_41_;
}
else
{
lean_object* v___x_42_; lean_object* v_received_44_; 
v___x_42_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_32_) == 9)
{
lean_object* v_value_58_; lean_object* v_description_59_; uint8_t v___x_60_; 
v_value_58_ = lean_ctor_get(v_d_32_, 0);
v_description_59_ = lean_ctor_get(v_d_32_, 1);
v___x_60_ = lean_string_dec_eq(v_description_59_, v___x_42_);
if (v___x_60_ == 0)
{
goto v___jp_56_;
}
else
{
uint32_t v___x_61_; uint64_t v___x_62_; lean_object* v___x_63_; uint32_t v___x_64_; lean_object* v___x_65_; 
lean_inc_n(v_value_58_, 2);
lean_dec_ref_known(v_d_32_, 2);
v___x_61_ = 206;
v___x_62_ = 0ULL;
v___x_63_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_63_, 0, v_value_58_);
lean_ctor_set(v___x_63_, 1, v___x_42_);
v___x_64_ = lasm_js_value_handle(v_value_58_);
lean_dec(v_value_58_);
v___x_65_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_61_, v___x_62_, v___x_63_, v___x_64_);
lean_dec_ref_known(v___x_63_, 2);
if (lean_obj_tag(v___x_65_) == 0)
{
lean_object* v_a_66_; uint8_t v___x_67_; 
v_a_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_a_66_);
lean_dec_ref_known(v___x_65_, 1);
v___x_67_ = lean_string_validate_utf8(v_a_66_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v_a_66_);
v___x_68_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11);
v___x_69_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_68_);
v_received_44_ = v___x_69_;
goto v___jp_43_;
}
else
{
lean_object* v___x_70_; 
v___x_70_ = lean_string_from_utf8_unchecked(v_a_66_);
v_received_44_ = v___x_70_;
goto v___jp_43_;
}
}
else
{
lean_object* v___x_71_; 
lean_dec_ref_known(v___x_65_, 1);
v___x_71_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__12));
v_received_44_ = v___x_71_;
goto v___jp_43_;
}
}
}
else
{
goto v___jp_56_;
}
v___jp_43_:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_45_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_46_ = lean_string_append(v___x_45_, v_context_31_);
v___x_47_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2));
v___x_48_ = lean_string_append(v___x_46_, v___x_47_);
v___x_49_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3));
v___x_50_ = lean_string_append(v___x_48_, v___x_49_);
v___x_51_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_52_ = lean_string_append(v___x_50_, v___x_51_);
v___x_53_ = lean_string_append(v___x_52_, v_received_44_);
lean_dec_ref(v_received_44_);
v___x_54_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
v___x_55_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7));
v___y_35_ = v___x_53_;
v___y_36_ = v___x_55_;
goto v___jp_34_;
}
else
{
v___y_35_ = v___x_53_;
v___y_36_ = v___x_42_;
goto v___jp_34_;
}
}
v___jp_56_:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lasm_JS_Data_describe(v_d_32_);
v_received_44_ = v___x_57_;
goto v___jp_43_;
}
}
v___jp_34_:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_string_append(v___y_35_, v___y_36_);
v___x_38_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
v___x_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
return v___x_39_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___boxed(lean_object* v_context_72_, lean_object* v_d_73_, lean_object* v_a_74_){
_start:
{
lean_object* v_res_75_; 
v_res_75_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0(v_context_72_, v_d_73_);
lean_dec_ref(v_context_72_);
return v_res_75_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1(void){
_start:
{
uint8_t v___x_77_; uint64_t v___x_78_; 
v___x_77_ = 1;
v___x_78_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_77_);
return v___x_78_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0(lean_object* v_b_79_, lean_object* v_args_80_, uint8_t v_await_81_){
_start:
{
uint64_t v___y_84_; uint64_t v___y_85_; uint64_t v___x_128_; uint64_t v___y_130_; 
v___x_128_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1);
if (v_await_81_ == 0)
{
uint64_t v___x_135_; 
v___x_135_ = 0ULL;
v___y_130_ = v___x_135_;
goto v___jp_129_;
}
else
{
uint64_t v___x_136_; 
v___x_136_ = 2ULL;
v___y_130_ = v___x_136_;
goto v___jp_129_;
}
v___jp_83_:
{
uint64_t v_flags_86_; uint32_t v___x_87_; lean_object* v___x_88_; uint32_t v___x_89_; lean_object* v___x_90_; 
v_flags_86_ = lean_uint64_lor(v___y_84_, v___y_85_);
v___x_87_ = 214;
v___x_88_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_79_, v_args_80_);
v___x_89_ = 0;
v___x_90_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_87_, v_flags_86_, v___x_88_, v___x_89_);
lean_dec(v___x_88_);
if (lean_obj_tag(v___x_90_) == 0)
{
if (lean_obj_tag(v___x_90_) == 0)
{
lean_object* v_a_91_; lean_object* v___x_92_; 
v_a_91_ = lean_ctor_get(v___x_90_, 0);
lean_inc(v_a_91_);
lean_dec_ref_known(v___x_90_, 1);
v___x_92_ = l_Lasm_JS_Wire_decode(v_a_91_);
lean_dec(v_a_91_);
if (lean_obj_tag(v___x_92_) == 0)
{
lean_object* v_a_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v_a_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc(v_a_93_);
lean_dec_ref_known(v___x_92_, 1);
v___x_94_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_79_);
v___x_95_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0(v___x_94_, v_a_93_);
lean_dec_ref(v___x_94_);
return v___x_95_;
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
v_a_96_ = lean_ctor_get(v___x_92_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_92_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_92_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_92_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_102_; 
v_reuseFailAlloc_102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_102_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_102_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
return v___x_101_;
}
}
}
}
else
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_111_; 
v_a_104_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_111_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_111_ == 0)
{
v___x_106_ = v___x_90_;
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_90_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_111_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_109_; 
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 1);
v___x_109_ = v___x_106_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v_a_104_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
}
}
else
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_127_; 
v_a_112_ = lean_ctor_get(v___x_90_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_90_);
if (v_isSharedCheck_127_ == 0)
{
v___x_114_ = v___x_90_;
v_isShared_115_ = v_isSharedCheck_127_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___x_90_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_127_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_116_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_117_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_79_);
v___x_118_ = lean_string_append(v___x_116_, v___x_117_);
lean_dec_ref(v___x_117_);
v___x_119_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_120_ = lean_string_append(v___x_118_, v___x_119_);
v___x_121_ = lean_io_error_to_string(v_a_112_);
v___x_122_ = lean_string_append(v___x_120_, v___x_121_);
lean_dec_ref(v___x_121_);
v___x_123_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_123_, 0, v___x_122_);
if (v_isShared_115_ == 0)
{
lean_ctor_set(v___x_114_, 0, v___x_123_);
v___x_125_ = v___x_114_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
}
v___jp_129_:
{
uint8_t v_construct_131_; uint64_t v___x_132_; 
v_construct_131_ = lean_ctor_get_uint8(v_b_79_, sizeof(void*)*4);
v___x_132_ = lean_uint64_lor(v___x_128_, v___y_130_);
if (v_construct_131_ == 0)
{
uint64_t v___x_133_; 
v___x_133_ = 0ULL;
v___y_84_ = v___x_132_;
v___y_85_ = v___x_133_;
goto v___jp_83_;
}
else
{
uint64_t v___x_134_; 
v___x_134_ = 4ULL;
v___y_84_ = v___x_132_;
v___y_85_ = v___x_134_;
goto v___jp_83_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___boxed(lean_object* v_b_137_, lean_object* v_args_138_, lean_object* v_await_139_, lean_object* v_a_140_){
_start:
{
uint8_t v_await_boxed_141_; lean_object* v_res_142_; 
v_await_boxed_141_ = lean_unbox(v_await_139_);
v_res_142_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0(v_b_137_, v_args_138_, v_await_boxed_141_);
lean_dec_ref(v_b_137_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_root(){
_start:
{
lean_object* v___x_153_; lean_object* v___x_154_; uint8_t v___x_155_; lean_object* v___x_156_; 
v___x_153_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__2));
v___x_154_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_155_ = 1;
v___x_156_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0(v___x_153_, v___x_154_, v___x_155_);
return v___x_156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_root___boxed(lean_object* v_a_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lasm_Web_App_Raw_root();
return v_res_158_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0(void){
_start:
{
uint8_t v___x_159_; uint64_t v___x_160_; 
v___x_159_ = 0;
v___x_160_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_159_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(lean_object* v_b_161_, lean_object* v_args_162_, uint8_t v_await_163_){
_start:
{
uint64_t v___y_166_; uint64_t v___y_167_; uint64_t v___x_207_; uint64_t v___y_209_; 
v___x_207_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_163_ == 0)
{
uint64_t v___x_214_; 
v___x_214_ = 0ULL;
v___y_209_ = v___x_214_;
goto v___jp_208_;
}
else
{
uint64_t v___x_215_; 
v___x_215_ = 2ULL;
v___y_209_ = v___x_215_;
goto v___jp_208_;
}
v___jp_165_:
{
uint64_t v_flags_168_; uint32_t v___x_169_; lean_object* v___x_170_; uint32_t v___x_171_; lean_object* v___x_172_; 
v_flags_168_ = lean_uint64_lor(v___y_166_, v___y_167_);
v___x_169_ = 214;
v___x_170_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_161_, v_args_162_);
v___x_171_ = 0;
v___x_172_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_169_, v_flags_168_, v___x_170_, v___x_171_);
lean_dec(v___x_170_);
if (lean_obj_tag(v___x_172_) == 0)
{
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_174_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
lean_inc(v_a_173_);
lean_dec_ref_known(v___x_172_, 1);
v___x_174_ = l_Lasm_JS_Wire_decode(v_a_173_);
lean_dec(v_a_173_);
if (lean_obj_tag(v___x_174_) == 0)
{
lean_object* v_a_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_182_; 
v_a_175_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_182_ == 0)
{
v___x_177_ = v___x_174_;
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_a_175_);
lean_dec(v___x_174_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_182_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_180_; 
if (v_isShared_178_ == 0)
{
v___x_180_ = v___x_177_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_a_175_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
else
{
return v___x_174_;
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
v_a_183_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_172_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_172_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
lean_ctor_set_tag(v___x_185_, 1);
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
else
{
lean_object* v_a_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_206_; 
v_a_191_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_206_ == 0)
{
v___x_193_ = v___x_172_;
v_isShared_194_ = v_isSharedCheck_206_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_a_191_);
lean_dec(v___x_172_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_206_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_204_; 
v___x_195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_196_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_161_);
v___x_197_ = lean_string_append(v___x_195_, v___x_196_);
lean_dec_ref(v___x_196_);
v___x_198_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_199_ = lean_string_append(v___x_197_, v___x_198_);
v___x_200_ = lean_io_error_to_string(v_a_191_);
v___x_201_ = lean_string_append(v___x_199_, v___x_200_);
lean_dec_ref(v___x_200_);
v___x_202_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 0, v___x_202_);
v___x_204_ = v___x_193_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v___x_202_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
v___jp_208_:
{
uint8_t v_construct_210_; uint64_t v___x_211_; 
v_construct_210_ = lean_ctor_get_uint8(v_b_161_, sizeof(void*)*4);
v___x_211_ = lean_uint64_lor(v___x_207_, v___y_209_);
if (v_construct_210_ == 0)
{
uint64_t v___x_212_; 
v___x_212_ = 0ULL;
v___y_166_ = v___x_211_;
v___y_167_ = v___x_212_;
goto v___jp_165_;
}
else
{
uint64_t v___x_213_; 
v___x_213_ = 4ULL;
v___y_166_ = v___x_211_;
v___y_167_ = v___x_213_;
goto v___jp_165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___boxed(lean_object* v_b_216_, lean_object* v_args_217_, lean_object* v_await_218_, lean_object* v_a_219_){
_start:
{
uint8_t v_await_boxed_220_; lean_object* v_res_221_; 
v_await_boxed_220_ = lean_unbox(v_await_218_);
v_res_221_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(v_b_216_, v_args_217_, v_await_boxed_220_);
lean_dec_ref(v_b_216_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_flags(){
_start:
{
lean_object* v___x_229_; lean_object* v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; 
v___x_229_ = ((lean_object*)(l_Lasm_Web_App_Raw_flags___closed__1));
v___x_230_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_231_ = 1;
v___x_232_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(v___x_229_, v___x_230_, v___x_231_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_flags___boxed(lean_object* v_a_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lasm_Web_App_Raw_flags();
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg(lean_object* v_d_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v_d_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg___boxed(lean_object* v_d_238_, lean_object* v_a_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg(v_d_238_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0(lean_object* v_context_241_, lean_object* v_d_242_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_244_, 0, v_d_242_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___boxed(lean_object* v_context_245_, lean_object* v_d_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0(v_context_245_, v_d_246_);
lean_dec_ref(v_context_245_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0(lean_object* v_context_250_, lean_object* v_d_251_){
_start:
{
lean_object* v___y_254_; lean_object* v___y_255_; 
if (lean_obj_tag(v_d_251_) == 2)
{
uint8_t v_b_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_b_259_ = lean_ctor_get_uint8(v_d_251_, 0);
lean_dec_ref_known(v_d_251_, 0);
v___x_260_ = lean_box(v_b_259_);
v___x_261_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
return v___x_261_;
}
else
{
lean_object* v___x_262_; lean_object* v_received_264_; 
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_251_) == 9)
{
lean_object* v_value_278_; lean_object* v_description_279_; uint8_t v___x_280_; 
v_value_278_ = lean_ctor_get(v_d_251_, 0);
v_description_279_ = lean_ctor_get(v_d_251_, 1);
v___x_280_ = lean_string_dec_eq(v_description_279_, v___x_262_);
if (v___x_280_ == 0)
{
goto v___jp_276_;
}
else
{
uint32_t v___x_281_; uint64_t v___x_282_; lean_object* v___x_283_; uint32_t v___x_284_; lean_object* v___x_285_; 
lean_inc_n(v_value_278_, 2);
lean_dec_ref_known(v_d_251_, 2);
v___x_281_ = 206;
v___x_282_ = 0ULL;
v___x_283_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_283_, 0, v_value_278_);
lean_ctor_set(v___x_283_, 1, v___x_262_);
v___x_284_ = lasm_js_value_handle(v_value_278_);
lean_dec(v_value_278_);
v___x_285_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_281_, v___x_282_, v___x_283_, v___x_284_);
lean_dec_ref_known(v___x_283_, 2);
if (lean_obj_tag(v___x_285_) == 0)
{
lean_object* v_a_286_; uint8_t v___x_287_; 
v_a_286_ = lean_ctor_get(v___x_285_, 0);
lean_inc(v_a_286_);
lean_dec_ref_known(v___x_285_, 1);
v___x_287_ = lean_string_validate_utf8(v_a_286_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; lean_object* v___x_289_; 
lean_dec(v_a_286_);
v___x_288_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11);
v___x_289_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_288_);
v_received_264_ = v___x_289_;
goto v___jp_263_;
}
else
{
lean_object* v___x_290_; 
v___x_290_ = lean_string_from_utf8_unchecked(v_a_286_);
v_received_264_ = v___x_290_;
goto v___jp_263_;
}
}
else
{
lean_object* v___x_291_; 
lean_dec_ref_known(v___x_285_, 1);
v___x_291_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__12));
v_received_264_ = v___x_291_;
goto v___jp_263_;
}
}
}
else
{
goto v___jp_276_;
}
v___jp_263_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; uint8_t v___x_274_; 
v___x_265_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_266_ = lean_string_append(v___x_265_, v_context_250_);
v___x_267_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2));
v___x_268_ = lean_string_append(v___x_266_, v___x_267_);
v___x_269_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_270_ = lean_string_append(v___x_268_, v___x_269_);
v___x_271_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_272_ = lean_string_append(v___x_270_, v___x_271_);
v___x_273_ = lean_string_append(v___x_272_, v_received_264_);
lean_dec_ref(v_received_264_);
v___x_274_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6);
if (v___x_274_ == 0)
{
lean_object* v___x_275_; 
v___x_275_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7));
v___y_254_ = v___x_273_;
v___y_255_ = v___x_275_;
goto v___jp_253_;
}
else
{
v___y_254_ = v___x_273_;
v___y_255_ = v___x_262_;
goto v___jp_253_;
}
}
v___jp_276_:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lasm_JS_Data_describe(v_d_251_);
v_received_264_ = v___x_277_;
goto v___jp_263_;
}
}
v___jp_253_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_string_append(v___y_254_, v___y_255_);
v___x_257_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
v___x_258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_258_, 0, v___x_257_);
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___boxed(lean_object* v_context_292_, lean_object* v_d_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0(v_context_292_, v_d_293_);
lean_dec_ref(v_context_292_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0(lean_object* v_b_296_, lean_object* v_args_297_, uint8_t v_await_298_){
_start:
{
uint64_t v___y_301_; uint64_t v___y_302_; uint64_t v___x_345_; uint64_t v___y_347_; 
v___x_345_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_298_ == 0)
{
uint64_t v___x_352_; 
v___x_352_ = 0ULL;
v___y_347_ = v___x_352_;
goto v___jp_346_;
}
else
{
uint64_t v___x_353_; 
v___x_353_ = 2ULL;
v___y_347_ = v___x_353_;
goto v___jp_346_;
}
v___jp_300_:
{
uint64_t v_flags_303_; uint32_t v___x_304_; lean_object* v___x_305_; uint32_t v___x_306_; lean_object* v___x_307_; 
v_flags_303_ = lean_uint64_lor(v___y_301_, v___y_302_);
v___x_304_ = 214;
v___x_305_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_296_, v_args_297_);
v___x_306_ = 0;
v___x_307_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_304_, v_flags_303_, v___x_305_, v___x_306_);
lean_dec(v___x_305_);
if (lean_obj_tag(v___x_307_) == 0)
{
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_309_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_308_);
lean_dec_ref_known(v___x_307_, 1);
v___x_309_ = l_Lasm_JS_Wire_decode(v_a_308_);
lean_dec(v_a_308_);
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_a_310_);
lean_dec_ref_known(v___x_309_, 1);
v___x_311_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_296_);
v___x_312_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0(v___x_311_, v_a_310_);
lean_dec_ref(v___x_311_);
return v___x_312_;
}
else
{
lean_object* v_a_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_320_; 
v_a_313_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_320_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_320_ == 0)
{
v___x_315_ = v___x_309_;
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_a_313_);
lean_dec(v___x_309_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_320_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_318_; 
if (v_isShared_316_ == 0)
{
v___x_318_ = v___x_315_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v_a_313_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
v_a_321_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_307_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_307_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
if (v_isShared_324_ == 0)
{
lean_ctor_set_tag(v___x_323_, 1);
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
}
else
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_344_; 
v_a_329_ = lean_ctor_get(v___x_307_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_307_);
if (v_isSharedCheck_344_ == 0)
{
v___x_331_ = v___x_307_;
v_isShared_332_ = v_isSharedCheck_344_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_307_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_344_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_333_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_334_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_296_);
v___x_335_ = lean_string_append(v___x_333_, v___x_334_);
lean_dec_ref(v___x_334_);
v___x_336_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_337_ = lean_string_append(v___x_335_, v___x_336_);
v___x_338_ = lean_io_error_to_string(v_a_329_);
v___x_339_ = lean_string_append(v___x_337_, v___x_338_);
lean_dec_ref(v___x_338_);
v___x_340_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
if (v_isShared_332_ == 0)
{
lean_ctor_set(v___x_331_, 0, v___x_340_);
v___x_342_ = v___x_331_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
}
v___jp_346_:
{
uint8_t v_construct_348_; uint64_t v___x_349_; 
v_construct_348_ = lean_ctor_get_uint8(v_b_296_, sizeof(void*)*4);
v___x_349_ = lean_uint64_lor(v___x_345_, v___y_347_);
if (v_construct_348_ == 0)
{
uint64_t v___x_350_; 
v___x_350_ = 0ULL;
v___y_301_ = v___x_349_;
v___y_302_ = v___x_350_;
goto v___jp_300_;
}
else
{
uint64_t v___x_351_; 
v___x_351_ = 4ULL;
v___y_301_ = v___x_349_;
v___y_302_ = v___x_351_;
goto v___jp_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0___boxed(lean_object* v_b_354_, lean_object* v_args_355_, lean_object* v_await_356_, lean_object* v_a_357_){
_start:
{
uint8_t v_await_boxed_358_; lean_object* v_res_359_; 
v_await_boxed_358_ = lean_unbox(v_await_356_);
v_res_359_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0(v_b_354_, v_args_355_, v_await_boxed_358_);
lean_dec_ref(v_b_354_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hydrating(){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; lean_object* v___x_370_; 
v___x_367_ = ((lean_object*)(l_Lasm_Web_App_Raw_hydrating___closed__1));
v___x_368_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_369_ = 1;
v___x_370_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0(v___x_367_, v___x_368_, v___x_369_);
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hydrating___boxed(lean_object* v_a_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_Lasm_Web_App_Raw_hydrating();
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0(lean_object* v_context_374_, lean_object* v_d_375_){
_start:
{
lean_object* v___y_378_; lean_object* v___y_379_; 
if (lean_obj_tag(v_d_375_) == 4)
{
lean_object* v_s_383_; lean_object* v___x_385_; uint8_t v_isShared_386_; uint8_t v_isSharedCheck_390_; 
v_s_383_ = lean_ctor_get(v_d_375_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v_d_375_);
if (v_isSharedCheck_390_ == 0)
{
v___x_385_ = v_d_375_;
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
else
{
lean_inc(v_s_383_);
lean_dec(v_d_375_);
v___x_385_ = lean_box(0);
v_isShared_386_ = v_isSharedCheck_390_;
goto v_resetjp_384_;
}
v_resetjp_384_:
{
lean_object* v___x_388_; 
if (v_isShared_386_ == 0)
{
lean_ctor_set_tag(v___x_385_, 0);
v___x_388_ = v___x_385_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_s_383_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
else
{
lean_object* v___x_391_; lean_object* v_received_393_; 
v___x_391_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_375_) == 9)
{
lean_object* v_value_407_; lean_object* v_description_408_; uint8_t v___x_409_; 
v_value_407_ = lean_ctor_get(v_d_375_, 0);
v_description_408_ = lean_ctor_get(v_d_375_, 1);
v___x_409_ = lean_string_dec_eq(v_description_408_, v___x_391_);
if (v___x_409_ == 0)
{
goto v___jp_405_;
}
else
{
uint32_t v___x_410_; uint64_t v___x_411_; lean_object* v___x_412_; uint32_t v___x_413_; lean_object* v___x_414_; 
lean_inc_n(v_value_407_, 2);
lean_dec_ref_known(v_d_375_, 2);
v___x_410_ = 206;
v___x_411_ = 0ULL;
v___x_412_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_412_, 0, v_value_407_);
lean_ctor_set(v___x_412_, 1, v___x_391_);
v___x_413_ = lasm_js_value_handle(v_value_407_);
lean_dec(v_value_407_);
v___x_414_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_410_, v___x_411_, v___x_412_, v___x_413_);
lean_dec_ref_known(v___x_412_, 2);
if (lean_obj_tag(v___x_414_) == 0)
{
lean_object* v_a_415_; uint8_t v___x_416_; 
v_a_415_ = lean_ctor_get(v___x_414_, 0);
lean_inc(v_a_415_);
lean_dec_ref_known(v___x_414_, 1);
v___x_416_ = lean_string_validate_utf8(v_a_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v___x_418_; 
lean_dec(v_a_415_);
v___x_417_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11);
v___x_418_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_417_);
v_received_393_ = v___x_418_;
goto v___jp_392_;
}
else
{
lean_object* v___x_419_; 
v___x_419_ = lean_string_from_utf8_unchecked(v_a_415_);
v_received_393_ = v___x_419_;
goto v___jp_392_;
}
}
else
{
lean_object* v___x_420_; 
lean_dec_ref_known(v___x_414_, 1);
v___x_420_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__12));
v_received_393_ = v___x_420_;
goto v___jp_392_;
}
}
}
else
{
goto v___jp_405_;
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_394_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_395_ = lean_string_append(v___x_394_, v_context_374_);
v___x_396_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2));
v___x_397_ = lean_string_append(v___x_395_, v___x_396_);
v___x_398_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___closed__0));
v___x_399_ = lean_string_append(v___x_397_, v___x_398_);
v___x_400_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_401_ = lean_string_append(v___x_399_, v___x_400_);
v___x_402_ = lean_string_append(v___x_401_, v_received_393_);
lean_dec_ref(v_received_393_);
v___x_403_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; 
v___x_404_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7));
v___y_378_ = v___x_402_;
v___y_379_ = v___x_404_;
goto v___jp_377_;
}
else
{
v___y_378_ = v___x_402_;
v___y_379_ = v___x_391_;
goto v___jp_377_;
}
}
v___jp_405_:
{
lean_object* v___x_406_; 
v___x_406_ = l_Lasm_JS_Data_describe(v_d_375_);
v_received_393_ = v___x_406_;
goto v___jp_392_;
}
}
v___jp_377_:
{
lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_380_ = lean_string_append(v___y_378_, v___y_379_);
v___x_381_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_381_, 0, v___x_380_);
v___x_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___boxed(lean_object* v_context_421_, lean_object* v_d_422_, lean_object* v_a_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0(v_context_421_, v_d_422_);
lean_dec_ref(v_context_421_);
return v_res_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0(lean_object* v_b_425_, lean_object* v_args_426_, uint8_t v_await_427_){
_start:
{
uint64_t v___y_430_; uint64_t v___y_431_; uint64_t v___x_474_; uint64_t v___y_476_; 
v___x_474_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_427_ == 0)
{
uint64_t v___x_481_; 
v___x_481_ = 0ULL;
v___y_476_ = v___x_481_;
goto v___jp_475_;
}
else
{
uint64_t v___x_482_; 
v___x_482_ = 2ULL;
v___y_476_ = v___x_482_;
goto v___jp_475_;
}
v___jp_429_:
{
uint64_t v_flags_432_; uint32_t v___x_433_; lean_object* v___x_434_; uint32_t v___x_435_; lean_object* v___x_436_; 
v_flags_432_ = lean_uint64_lor(v___y_430_, v___y_431_);
v___x_433_ = 214;
v___x_434_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_425_, v_args_426_);
v___x_435_ = 0;
v___x_436_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_433_, v_flags_432_, v___x_434_, v___x_435_);
lean_dec(v___x_434_);
if (lean_obj_tag(v___x_436_) == 0)
{
if (lean_obj_tag(v___x_436_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_438_; 
v_a_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_a_437_);
lean_dec_ref_known(v___x_436_, 1);
v___x_438_ = l_Lasm_JS_Wire_decode(v_a_437_);
lean_dec(v_a_437_);
if (lean_obj_tag(v___x_438_) == 0)
{
lean_object* v_a_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
lean_inc(v_a_439_);
lean_dec_ref_known(v___x_438_, 1);
v___x_440_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_425_);
v___x_441_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0(v___x_440_, v_a_439_);
lean_dec_ref(v___x_440_);
return v___x_441_;
}
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
v_a_442_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_438_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_438_);
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
else
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_457_; 
v_a_450_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_457_ == 0)
{
v___x_452_ = v___x_436_;
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v___x_436_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_457_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
lean_ctor_set_tag(v___x_452_, 1);
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_473_; 
v_a_458_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_473_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_473_ == 0)
{
v___x_460_ = v___x_436_;
v_isShared_461_ = v_isSharedCheck_473_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_436_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_473_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_462_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_425_);
v___x_464_ = lean_string_append(v___x_462_, v___x_463_);
lean_dec_ref(v___x_463_);
v___x_465_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_466_ = lean_string_append(v___x_464_, v___x_465_);
v___x_467_ = lean_io_error_to_string(v_a_458_);
v___x_468_ = lean_string_append(v___x_466_, v___x_467_);
lean_dec_ref(v___x_467_);
v___x_469_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_469_);
v___x_471_ = v___x_460_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
v___jp_475_:
{
uint8_t v_construct_477_; uint64_t v___x_478_; 
v_construct_477_ = lean_ctor_get_uint8(v_b_425_, sizeof(void*)*4);
v___x_478_ = lean_uint64_lor(v___x_474_, v___y_476_);
if (v_construct_477_ == 0)
{
uint64_t v___x_479_; 
v___x_479_ = 0ULL;
v___y_430_ = v___x_478_;
v___y_431_ = v___x_479_;
goto v___jp_429_;
}
else
{
uint64_t v___x_480_; 
v___x_480_ = 4ULL;
v___y_430_ = v___x_478_;
v___y_431_ = v___x_480_;
goto v___jp_429_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0___boxed(lean_object* v_b_483_, lean_object* v_args_484_, lean_object* v_await_485_, lean_object* v_a_486_){
_start:
{
uint8_t v_await_boxed_487_; lean_object* v_res_488_; 
v_await_boxed_487_ = lean_unbox(v_await_485_);
v_res_488_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0(v_b_483_, v_args_484_, v_await_boxed_487_);
lean_dec_ref(v_b_483_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_target(){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; uint8_t v___x_498_; lean_object* v___x_499_; 
v___x_496_ = ((lean_object*)(l_Lasm_Web_App_Raw_target___closed__1));
v___x_497_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_498_ = 1;
v___x_499_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0(v___x_496_, v___x_497_, v___x_498_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_target___boxed(lean_object* v_a_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lasm_Web_App_Raw_target();
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0(lean_object* v_context_502_, lean_object* v_d_503_){
_start:
{
lean_object* v___y_506_; lean_object* v___y_507_; 
if (lean_obj_tag(v_d_503_) == 9)
{
lean_object* v_value_511_; lean_object* v___x_512_; 
v_value_511_ = lean_ctor_get(v_d_503_, 0);
lean_inc(v_value_511_);
lean_dec_ref_known(v_d_503_, 2);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v_value_511_);
return v___x_512_;
}
else
{
lean_object* v___x_513_; lean_object* v_received_515_; 
v___x_513_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_503_) == 9)
{
lean_object* v_value_529_; lean_object* v_description_530_; uint8_t v___x_531_; 
v_value_529_ = lean_ctor_get(v_d_503_, 0);
v_description_530_ = lean_ctor_get(v_d_503_, 1);
v___x_531_ = lean_string_dec_eq(v_description_530_, v___x_513_);
if (v___x_531_ == 0)
{
goto v___jp_527_;
}
else
{
uint32_t v___x_532_; uint64_t v___x_533_; lean_object* v___x_534_; uint32_t v___x_535_; lean_object* v___x_536_; 
lean_inc_n(v_value_529_, 2);
lean_dec_ref_known(v_d_503_, 2);
v___x_532_ = 206;
v___x_533_ = 0ULL;
v___x_534_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_534_, 0, v_value_529_);
lean_ctor_set(v___x_534_, 1, v___x_513_);
v___x_535_ = lasm_js_value_handle(v_value_529_);
lean_dec(v_value_529_);
v___x_536_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_532_, v___x_533_, v___x_534_, v___x_535_);
lean_dec_ref_known(v___x_534_, 2);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; uint8_t v___x_538_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
lean_inc(v_a_537_);
lean_dec_ref_known(v___x_536_, 1);
v___x_538_ = lean_string_validate_utf8(v_a_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_539_; lean_object* v___x_540_; 
lean_dec(v_a_537_);
v___x_539_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__11);
v___x_540_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_539_);
v_received_515_ = v___x_540_;
goto v___jp_514_;
}
else
{
lean_object* v___x_541_; 
v___x_541_ = lean_string_from_utf8_unchecked(v_a_537_);
v_received_515_ = v___x_541_;
goto v___jp_514_;
}
}
else
{
lean_object* v___x_542_; 
lean_dec_ref_known(v___x_536_, 1);
v___x_542_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__12));
v_received_515_ = v___x_542_;
goto v___jp_514_;
}
}
}
else
{
goto v___jp_527_;
}
v___jp_514_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; uint8_t v___x_525_; 
v___x_516_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_517_ = lean_string_append(v___x_516_, v_context_502_);
v___x_518_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2));
v___x_519_ = lean_string_append(v___x_517_, v___x_518_);
v___x_520_ = ((lean_object*)(l_Lasm_Web_App_instFromJSPort___closed__1));
v___x_521_ = lean_string_append(v___x_519_, v___x_520_);
v___x_522_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_523_ = lean_string_append(v___x_521_, v___x_522_);
v___x_524_ = lean_string_append(v___x_523_, v_received_515_);
lean_dec_ref(v_received_515_);
v___x_525_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6);
if (v___x_525_ == 0)
{
lean_object* v___x_526_; 
v___x_526_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7));
v___y_506_ = v___x_524_;
v___y_507_ = v___x_526_;
goto v___jp_505_;
}
else
{
v___y_506_ = v___x_524_;
v___y_507_ = v___x_513_;
goto v___jp_505_;
}
}
v___jp_527_:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lasm_JS_Data_describe(v_d_503_);
v_received_515_ = v___x_528_;
goto v___jp_514_;
}
}
v___jp_505_:
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_508_ = lean_string_append(v___y_506_, v___y_507_);
v___x_509_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
v___x_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
return v___x_510_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0___boxed(lean_object* v_context_543_, lean_object* v_d_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0(v_context_543_, v_d_544_);
lean_dec_ref(v_context_543_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0(lean_object* v_b_547_, lean_object* v_args_548_, uint8_t v_await_549_){
_start:
{
uint64_t v___y_552_; uint64_t v___y_553_; uint64_t v___x_596_; uint64_t v___y_598_; 
v___x_596_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1);
if (v_await_549_ == 0)
{
uint64_t v___x_603_; 
v___x_603_ = 0ULL;
v___y_598_ = v___x_603_;
goto v___jp_597_;
}
else
{
uint64_t v___x_604_; 
v___x_604_ = 2ULL;
v___y_598_ = v___x_604_;
goto v___jp_597_;
}
v___jp_551_:
{
uint64_t v_flags_554_; uint32_t v___x_555_; lean_object* v___x_556_; uint32_t v___x_557_; lean_object* v___x_558_; 
v_flags_554_ = lean_uint64_lor(v___y_552_, v___y_553_);
v___x_555_ = 214;
v___x_556_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_547_, v_args_548_);
v___x_557_ = 0;
v___x_558_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_555_, v_flags_554_, v___x_556_, v___x_557_);
lean_dec(v___x_556_);
if (lean_obj_tag(v___x_558_) == 0)
{
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v_a_559_; lean_object* v___x_560_; 
v_a_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_a_559_);
lean_dec_ref_known(v___x_558_, 1);
v___x_560_ = l_Lasm_JS_Wire_decode(v_a_559_);
lean_dec(v_a_559_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_560_, 1);
v___x_562_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_547_);
v___x_563_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0(v___x_562_, v_a_561_);
lean_dec_ref(v___x_562_);
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
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
v_a_572_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_558_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_558_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
lean_ctor_set_tag(v___x_574_, 1);
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
else
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_595_; 
v_a_580_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_595_ == 0)
{
v___x_582_ = v___x_558_;
v_isShared_583_ = v_isSharedCheck_595_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_558_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_595_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_584_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_585_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_547_);
v___x_586_ = lean_string_append(v___x_584_, v___x_585_);
lean_dec_ref(v___x_585_);
v___x_587_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
v___x_589_ = lean_io_error_to_string(v_a_580_);
v___x_590_ = lean_string_append(v___x_588_, v___x_589_);
lean_dec_ref(v___x_589_);
v___x_591_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_591_);
v___x_593_ = v___x_582_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
}
v___jp_597_:
{
uint8_t v_construct_599_; uint64_t v___x_600_; 
v_construct_599_ = lean_ctor_get_uint8(v_b_547_, sizeof(void*)*4);
v___x_600_ = lean_uint64_lor(v___x_596_, v___y_598_);
if (v_construct_599_ == 0)
{
uint64_t v___x_601_; 
v___x_601_ = 0ULL;
v___y_552_ = v___x_600_;
v___y_553_ = v___x_601_;
goto v___jp_551_;
}
else
{
uint64_t v___x_602_; 
v___x_602_ = 4ULL;
v___y_552_ = v___x_600_;
v___y_553_ = v___x_602_;
goto v___jp_551_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0___boxed(lean_object* v_b_605_, lean_object* v_args_606_, lean_object* v_await_607_, lean_object* v_a_608_){
_start:
{
uint8_t v_await_boxed_609_; lean_object* v_res_610_; 
v_await_boxed_609_ = lean_unbox(v_await_607_);
v_res_610_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0(v_b_605_, v_args_606_, v_await_boxed_609_);
lean_dec_ref(v_b_605_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_port(lean_object* v_a_617_){
_start:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; uint8_t v___x_623_; lean_object* v___x_624_; 
v___x_619_ = ((lean_object*)(l_Lasm_Web_App_Raw_port___closed__1));
v___x_620_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_621_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_621_, 0, v_a_617_);
v___x_622_ = lean_array_push(v___x_620_, v___x_621_);
v___x_623_ = 1;
v___x_624_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0(v___x_619_, v___x_622_, v___x_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_port___boxed(lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l_Lasm_Web_App_Raw_port(v_a_625_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(lean_object* v_b_628_, lean_object* v_args_629_, uint8_t v_await_630_){
_start:
{
uint64_t v___y_633_; uint64_t v___y_634_; uint64_t v___x_675_; uint64_t v___y_677_; 
v___x_675_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_630_ == 0)
{
uint64_t v___x_682_; 
v___x_682_ = 0ULL;
v___y_677_ = v___x_682_;
goto v___jp_676_;
}
else
{
uint64_t v___x_683_; 
v___x_683_ = 2ULL;
v___y_677_ = v___x_683_;
goto v___jp_676_;
}
v___jp_632_:
{
uint64_t v_flags_635_; uint32_t v___x_636_; lean_object* v___x_637_; uint32_t v___x_638_; lean_object* v___x_639_; 
v_flags_635_ = lean_uint64_lor(v___y_633_, v___y_634_);
v___x_636_ = 214;
v___x_637_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_628_, v_args_629_);
v___x_638_ = 0;
v___x_639_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_636_, v_flags_635_, v___x_637_, v___x_638_);
lean_dec(v___x_637_);
if (lean_obj_tag(v___x_639_) == 0)
{
if (lean_obj_tag(v___x_639_) == 0)
{
lean_object* v_a_640_; lean_object* v___x_641_; 
v_a_640_ = lean_ctor_get(v___x_639_, 0);
lean_inc(v_a_640_);
lean_dec_ref_known(v___x_639_, 1);
v___x_641_ = l_Lasm_JS_Wire_decode(v_a_640_);
lean_dec(v_a_640_);
if (lean_obj_tag(v___x_641_) == 0)
{
lean_object* v___x_642_; 
lean_dec_ref_known(v___x_641_, 1);
v___x_642_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_642_;
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
v_a_643_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_641_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_641_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
v_a_651_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_639_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_639_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
lean_ctor_set_tag(v___x_653_, 1);
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_674_; 
v_a_659_ = lean_ctor_get(v___x_639_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_639_);
if (v_isSharedCheck_674_ == 0)
{
v___x_661_ = v___x_639_;
v_isShared_662_ = v_isSharedCheck_674_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_639_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_674_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_663_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_664_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_628_);
v___x_665_ = lean_string_append(v___x_663_, v___x_664_);
lean_dec_ref(v___x_664_);
v___x_666_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_667_ = lean_string_append(v___x_665_, v___x_666_);
v___x_668_ = lean_io_error_to_string(v_a_659_);
v___x_669_ = lean_string_append(v___x_667_, v___x_668_);
lean_dec_ref(v___x_668_);
v___x_670_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v___x_670_);
v___x_672_ = v___x_661_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
}
v___jp_676_:
{
uint8_t v_construct_678_; uint64_t v___x_679_; 
v_construct_678_ = lean_ctor_get_uint8(v_b_628_, sizeof(void*)*4);
v___x_679_ = lean_uint64_lor(v___x_675_, v___y_677_);
if (v_construct_678_ == 0)
{
uint64_t v___x_680_; 
v___x_680_ = 0ULL;
v___y_633_ = v___x_679_;
v___y_634_ = v___x_680_;
goto v___jp_632_;
}
else
{
uint64_t v___x_681_; 
v___x_681_ = 4ULL;
v___y_633_ = v___x_679_;
v___y_634_ = v___x_681_;
goto v___jp_632_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0___boxed(lean_object* v_b_684_, lean_object* v_args_685_, lean_object* v_await_686_, lean_object* v_a_687_){
_start:
{
uint8_t v_await_boxed_688_; lean_object* v_res_689_; 
v_await_boxed_688_ = lean_unbox(v_await_686_);
v_res_689_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v_b_684_, v_args_685_, v_await_boxed_688_);
lean_dec_ref(v_b_684_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onMessage(lean_object* v_a_696_){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; uint8_t v___x_703_; lean_object* v___x_704_; 
v___x_698_ = ((lean_object*)(l_Lasm_Web_App_Raw_onMessage___closed__1));
v___x_699_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_700_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_701_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_701_, 0, v_a_696_);
lean_ctor_set(v___x_701_, 1, v___x_700_);
v___x_702_ = lean_array_push(v___x_699_, v___x_701_);
v___x_703_ = 1;
v___x_704_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_698_, v___x_702_, v___x_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onMessage___boxed(lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lasm_Web_App_Raw_onMessage(v_a_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onUnmount(lean_object* v_a_714_){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; uint8_t v___x_721_; lean_object* v___x_722_; 
v___x_716_ = ((lean_object*)(l_Lasm_Web_App_Raw_onUnmount___closed__1));
v___x_717_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_718_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_719_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_719_, 0, v_a_714_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = lean_array_push(v___x_717_, v___x_719_);
v___x_721_ = 1;
v___x_722_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_716_, v___x_720_, v___x_721_);
return v___x_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onUnmount___boxed(lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lasm_Web_App_Raw_onUnmount(v_a_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hotState(){
_start:
{
lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; lean_object* v___x_736_; 
v___x_733_ = ((lean_object*)(l_Lasm_Web_App_Raw_hotState___closed__1));
v___x_734_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_735_ = 1;
v___x_736_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(v___x_733_, v___x_734_, v___x_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hotState___boxed(lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l_Lasm_Web_App_Raw_hotState();
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onHotSave(lean_object* v_a_745_){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; uint8_t v___x_752_; lean_object* v___x_753_; 
v___x_747_ = ((lean_object*)(l_Lasm_Web_App_Raw_onHotSave___closed__1));
v___x_748_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_749_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_750_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_750_, 0, v_a_745_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = lean_array_push(v___x_748_, v___x_750_);
v___x_752_ = 1;
v___x_753_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_747_, v___x_751_, v___x_752_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onHotSave___boxed(lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lasm_Web_App_Raw_onHotSave(v_a_754_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_root(){
_start:
{
lean_object* v___x_758_; 
v___x_758_ = l_Lasm_Web_App_Raw_root();
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_root___boxed(lean_object* v_a_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_Lasm_Web_App_root();
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___redArg(lean_object* v_inst_762_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Lasm_Web_App_Raw_flags();
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v___x_764_, 1);
v___x_766_ = ((lean_object*)(l_Lasm_Web_App_flags___redArg___closed__0));
v___x_767_ = l_Lasm_JS_decodeAs___redArg(v_inst_762_, v___x_766_, v_a_765_);
return v___x_767_;
}
else
{
lean_object* v_a_768_; lean_object* v___x_770_; uint8_t v_isShared_771_; uint8_t v_isSharedCheck_775_; 
lean_dec_ref(v_inst_762_);
v_a_768_ = lean_ctor_get(v___x_764_, 0);
v_isSharedCheck_775_ = !lean_is_exclusive(v___x_764_);
if (v_isSharedCheck_775_ == 0)
{
v___x_770_ = v___x_764_;
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
else
{
lean_inc(v_a_768_);
lean_dec(v___x_764_);
v___x_770_ = lean_box(0);
v_isShared_771_ = v_isSharedCheck_775_;
goto v_resetjp_769_;
}
v_resetjp_769_:
{
lean_object* v___x_773_; 
if (v_isShared_771_ == 0)
{
v___x_773_ = v___x_770_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_a_768_);
v___x_773_ = v_reuseFailAlloc_774_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
return v___x_773_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___redArg___boxed(lean_object* v_inst_776_, lean_object* v_a_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lasm_Web_App_flags___redArg(v_inst_776_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags(lean_object* v_00_u03b1_779_, lean_object* v_inst_780_){
_start:
{
lean_object* v___x_782_; 
v___x_782_ = l_Lasm_Web_App_flags___redArg(v_inst_780_);
return v___x_782_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___boxed(lean_object* v_00_u03b1_783_, lean_object* v_inst_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lasm_Web_App_flags(v_00_u03b1_783_, v_inst_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hydrating(){
_start:
{
lean_object* v___x_788_; 
v___x_788_ = l_Lasm_Web_App_Raw_hydrating();
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hydrating___boxed(lean_object* v_a_789_){
_start:
{
lean_object* v_res_790_; 
v_res_790_ = l_Lasm_Web_App_hydrating();
return v_res_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_target(){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lasm_Web_App_Raw_target();
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_target___boxed(lean_object* v_a_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = l_Lasm_Web_App_target();
return v_res_794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_port(lean_object* v_name_795_){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = l_Lasm_Web_App_Raw_port(v_name_795_);
return v___x_797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_port___boxed(lean_object* v_name_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_Web_App_port(v_name_798_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___redArg(lean_object* v_inst_802_, lean_object* v_p_803_, lean_object* v_value_804_){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_806_ = l_Lasm_JS_instFromJSUnit;
v___x_807_ = ((lean_object*)(l_Lasm_Web_App_Port_send___redArg___closed__0));
v___x_808_ = lean_apply_1(v_inst_802_, v_value_804_);
v___x_809_ = lean_unsigned_to_nat(1u);
v___x_810_ = lean_mk_empty_array_with_capacity(v___x_809_);
v___x_811_ = lean_array_push(v___x_810_, v___x_808_);
v___x_812_ = l_Lasm_JS_Value_callMethod___redArg(v_p_803_, v___x_807_, v___x_811_, v___x_806_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___redArg___boxed(lean_object* v_inst_813_, lean_object* v_p_814_, lean_object* v_value_815_, lean_object* v_a_816_){
_start:
{
lean_object* v_res_817_; 
v_res_817_ = l_Lasm_Web_App_Port_send___redArg(v_inst_813_, v_p_814_, v_value_815_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send(lean_object* v_00_u03b1_818_, lean_object* v_inst_819_, lean_object* v_p_820_, lean_object* v_value_821_){
_start:
{
lean_object* v___x_823_; 
v___x_823_ = l_Lasm_Web_App_Port_send___redArg(v_inst_819_, v_p_820_, v_value_821_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___boxed(lean_object* v_00_u03b1_824_, lean_object* v_inst_825_, lean_object* v_p_826_, lean_object* v_value_827_, lean_object* v_a_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lasm_Web_App_Port_send(v_00_u03b1_824_, v_inst_825_, v_p_826_, v_value_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___lam__0(lean_object* v_f_830_, lean_object* v_args_831_){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_833_ = lean_unsigned_to_nat(0u);
v___x_834_ = lean_array_get_size(v_args_831_);
v___x_835_ = lean_nat_dec_lt(v___x_833_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_box(0);
v___x_837_ = lean_apply_2(v_f_830_, v___x_836_, lean_box(0));
return v___x_837_;
}
else
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_array_fget_borrowed(v_args_831_, v___x_833_);
lean_inc(v___x_838_);
v___x_839_ = lean_apply_2(v_f_830_, v___x_838_, lean_box(0));
return v___x_839_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___lam__0___boxed(lean_object* v_f_840_, lean_object* v_args_841_, lean_object* v___y_842_){
_start:
{
lean_object* v_res_843_; 
v_res_843_ = l_Lasm_Web_App_Port_subscribe___lam__0(v_f_840_, v_args_841_);
lean_dec_ref(v_args_841_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe(lean_object* v_p_845_, lean_object* v_f_846_){
_start:
{
lean_object* v___f_848_; lean_object* v___x_849_; 
v___f_848_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_848_, 0, v_f_846_);
v___x_849_ = l_Lasm_Web_callback(v___f_848_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v___x_849_, 1);
v___x_851_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribe___closed__0));
v___x_852_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_853_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_853_, 0, v_a_850_);
lean_ctor_set(v___x_853_, 1, v___x_852_);
v___x_854_ = lean_unsigned_to_nat(1u);
v___x_855_ = lean_mk_empty_array_with_capacity(v___x_854_);
v___x_856_ = lean_array_push(v___x_855_, v___x_853_);
v___x_857_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_845_, v___x_851_, v___x_856_);
return v___x_857_;
}
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
lean_dec(v_p_845_);
v_a_858_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_849_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_849_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___boxed(lean_object* v_p_866_, lean_object* v_f_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lasm_Web_App_Port_subscribe(v_p_866_, v_f_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0(lean_object* v_x_874_){
_start:
{
if (lean_obj_tag(v_x_874_) == 0)
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_884_; 
v_a_876_ = lean_ctor_get(v_x_874_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v_x_874_);
if (v_isSharedCheck_884_ == 0)
{
v___x_878_ = v_x_874_;
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v_x_874_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_884_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_883_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
lean_object* v___x_882_; 
v___x_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_882_, 0, v___x_881_);
return v___x_882_;
}
}
}
else
{
lean_object* v___x_885_; 
lean_dec_ref_known(v_x_874_, 1);
v___x_885_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__1));
return v___x_885_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0___boxed(lean_object* v_x_886_, lean_object* v___y_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = l_Lasm_Web_App_Port_subscribeAsync___lam__0(v_x_886_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__1(lean_object* v_f_889_, lean_object* v___f_890_, lean_object* v_args_891_){
_start:
{
lean_object* v___y_894_; lean_object* v___x_899_; lean_object* v___x_900_; uint8_t v___x_901_; 
v___x_899_ = lean_unsigned_to_nat(0u);
v___x_900_ = lean_array_get_size(v_args_891_);
v___x_901_ = lean_nat_dec_lt(v___x_899_, v___x_900_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; 
v___x_902_ = lean_box(0);
v___y_894_ = v___x_902_;
goto v___jp_893_;
}
else
{
lean_object* v___x_903_; 
v___x_903_ = lean_array_fget_borrowed(v_args_891_, v___x_899_);
lean_inc(v___x_903_);
v___y_894_ = v___x_903_;
goto v___jp_893_;
}
v___jp_893_:
{
lean_object* v___x_895_; uint8_t v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_895_ = lean_unsigned_to_nat(0u);
v___x_896_ = 0;
v___x_897_ = lean_apply_2(v_f_889_, v___y_894_, lean_box(0));
v___x_898_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_895_, v___x_896_, v___x_897_, v___f_890_);
return v___x_898_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__1___boxed(lean_object* v_f_904_, lean_object* v___f_905_, lean_object* v_args_906_, lean_object* v___y_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lasm_Web_App_Port_subscribeAsync___lam__1(v_f_904_, v___f_905_, v_args_906_);
lean_dec_ref(v_args_906_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync(lean_object* v_p_910_, lean_object* v_f_911_){
_start:
{
lean_object* v___f_913_; lean_object* v___f_914_; lean_object* v___x_915_; 
v___f_913_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribeAsync___closed__0));
v___f_914_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_914_, 0, v_f_911_);
lean_closure_set(v___f_914_, 1, v___f_913_);
v___x_915_ = l_Lasm_JS_Function_ofFn(v___f_914_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 1);
v___x_917_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribe___closed__0));
v___x_918_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_919_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_919_, 0, v_a_916_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = lean_unsigned_to_nat(1u);
v___x_921_ = lean_mk_empty_array_with_capacity(v___x_920_);
v___x_922_ = lean_array_push(v___x_921_, v___x_919_);
v___x_923_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_910_, v___x_917_, v___x_922_);
return v___x_923_;
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v_p_910_);
v_a_924_ = lean_ctor_get(v___x_915_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_915_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_915_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___boxed(lean_object* v_p_932_, lean_object* v_f_933_, lean_object* v_a_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lasm_Web_App_Port_subscribeAsync(v_p_932_, v_f_933_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessage(lean_object* v_f_936_){
_start:
{
lean_object* v___f_938_; lean_object* v___x_939_; 
v___f_938_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_938_, 0, v_f_936_);
v___x_939_ = l_Lasm_Web_callback(v___f_938_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_941_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_939_, 1);
v___x_941_ = l_Lasm_Web_App_Raw_onMessage(v_a_940_);
return v___x_941_;
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
v_a_942_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_939_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_939_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessage___boxed(lean_object* v_f_950_, lean_object* v_a_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lasm_Web_App_onMessage(v_f_950_);
return v_res_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessageAsync(lean_object* v_f_953_){
_start:
{
lean_object* v___f_955_; lean_object* v___f_956_; lean_object* v___x_957_; 
v___f_955_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribeAsync___closed__0));
v___f_956_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_956_, 0, v_f_953_);
lean_closure_set(v___f_956_, 1, v___f_955_);
v___x_957_ = l_Lasm_JS_Function_ofFn(v___f_956_);
if (lean_obj_tag(v___x_957_) == 0)
{
lean_object* v_a_958_; lean_object* v___x_959_; 
v_a_958_ = lean_ctor_get(v___x_957_, 0);
lean_inc(v_a_958_);
lean_dec_ref_known(v___x_957_, 1);
v___x_959_ = l_Lasm_Web_App_Raw_onMessage(v_a_958_);
return v___x_959_;
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
v_a_960_ = lean_ctor_get(v___x_957_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_957_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_957_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_957_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessageAsync___boxed(lean_object* v_f_968_, lean_object* v_a_969_){
_start:
{
lean_object* v_res_970_; 
v_res_970_ = l_Lasm_Web_App_onMessageAsync(v_f_968_);
return v_res_970_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___lam__0(lean_object* v_f_971_, lean_object* v_x_972_){
_start:
{
lean_object* v___x_974_; 
v___x_974_ = lean_apply_1(v_f_971_, lean_box(0));
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___lam__0___boxed(lean_object* v_f_975_, lean_object* v_x_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lasm_Web_App_onUnmount___lam__0(v_f_975_, v_x_976_);
lean_dec_ref(v_x_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount(lean_object* v_f_979_){
_start:
{
lean_object* v___f_981_; lean_object* v___x_982_; 
v___f_981_ = lean_alloc_closure((void*)(l_Lasm_Web_App_onUnmount___lam__0___boxed), 3, 1);
lean_closure_set(v___f_981_, 0, v_f_979_);
v___x_982_ = l_Lasm_Web_callback(v___f_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = l_Lasm_Web_App_Raw_onUnmount(v_a_983_);
return v___x_984_;
}
else
{
lean_object* v_a_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_992_; 
v_a_985_ = lean_ctor_get(v___x_982_, 0);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_982_);
if (v_isSharedCheck_992_ == 0)
{
v___x_987_ = v___x_982_;
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_a_985_);
lean_dec(v___x_982_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_992_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_990_; 
if (v_isShared_988_ == 0)
{
v___x_990_ = v___x_987_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v_a_985_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___boxed(lean_object* v_f_993_, lean_object* v_a_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lasm_Web_App_onUnmount(v_f_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___redArg(lean_object* v_inst_996_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Lasm_Web_App_Raw_hotState();
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1024_; 
v_a_999_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1001_ = v___x_998_;
v_isShared_1002_ = v_isSharedCheck_1024_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_998_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1024_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
if (lean_obj_tag(v_a_999_) == 0)
{
lean_object* v___x_1003_; lean_object* v___x_1005_; 
lean_dec_ref(v_inst_996_);
v___x_1003_ = lean_box(0);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1003_);
v___x_1005_ = v___x_1001_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v___x_1003_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
else
{
lean_object* v_fromJS_1007_; lean_object* v___x_1008_; 
v_fromJS_1007_ = lean_ctor_get(v_inst_996_, 0);
lean_inc_ref(v_fromJS_1007_);
lean_dec_ref(v_inst_996_);
v___x_1008_ = lean_apply_1(v_fromJS_1007_, v_a_999_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v___x_1009_; lean_object* v___x_1011_; 
lean_dec_ref_known(v___x_1008_, 1);
v___x_1009_ = lean_box(0);
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1009_);
v___x_1011_ = v___x_1001_;
goto v_reusejp_1010_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1009_);
v___x_1011_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1010_;
}
v_reusejp_1010_:
{
return v___x_1011_;
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1023_; 
v_a_1013_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1023_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1023_ == 0)
{
v___x_1015_ = v___x_1008_;
v_isShared_1016_ = v_isSharedCheck_1023_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1008_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1023_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
lean_object* v___x_1020_; 
if (v_isShared_1002_ == 0)
{
lean_ctor_set(v___x_1001_, 0, v___x_1018_);
v___x_1020_ = v___x_1001_;
goto v_reusejp_1019_;
}
else
{
lean_object* v_reuseFailAlloc_1021_; 
v_reuseFailAlloc_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1021_, 0, v___x_1018_);
v___x_1020_ = v_reuseFailAlloc_1021_;
goto v_reusejp_1019_;
}
v_reusejp_1019_:
{
return v___x_1020_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
lean_dec_ref(v_inst_996_);
v_a_1025_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_998_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_998_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___redArg___boxed(lean_object* v_inst_1033_, lean_object* v_a_1034_){
_start:
{
lean_object* v_res_1035_; 
v_res_1035_ = l_Lasm_Web_App_hotState___redArg(v_inst_1033_);
return v_res_1035_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState(lean_object* v_00_u03b1_1036_, lean_object* v_inst_1037_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lasm_Web_App_hotState___redArg(v_inst_1037_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___boxed(lean_object* v_00_u03b1_1040_, lean_object* v_inst_1041_, lean_object* v_a_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l_Lasm_Web_App_hotState(v_00_u03b1_1040_, v_inst_1041_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___lam__0(lean_object* v_f_1044_, lean_object* v_x_1045_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_apply_1(v_f_1044_, lean_box(0));
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___lam__0___boxed(lean_object* v_f_1048_, lean_object* v_x_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lasm_Web_App_onHotSave___lam__0(v_f_1048_, v_x_1049_);
lean_dec_ref(v_x_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave(lean_object* v_f_1052_){
_start:
{
lean_object* v___f_1054_; lean_object* v___x_1055_; 
v___f_1054_ = lean_alloc_closure((void*)(l_Lasm_Web_App_onHotSave___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1054_, 0, v_f_1052_);
v___x_1055_ = l_Lasm_JS_Function_ofSyncFn(v___f_1054_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; lean_object* v___x_1057_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v___x_1055_, 1);
v___x_1057_ = l_Lasm_Web_App_Raw_onHotSave(v_a_1056_);
return v___x_1057_;
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_a_1058_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1055_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1055_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___boxed(lean_object* v_f_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lasm_Web_App_onHotSave(v_f_1066_);
return v_res_1068_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_App(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_JS_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lasm_Web_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lasm_Web_App_instFromJSPort = _init_l_Lasm_Web_App_instFromJSPort();
lean_mark_persistent(l_Lasm_Web_App_instFromJSPort);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
