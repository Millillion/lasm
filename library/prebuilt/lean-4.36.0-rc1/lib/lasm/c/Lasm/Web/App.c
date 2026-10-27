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
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.Element"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_18_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__7));
v___x_19_ = lean_unsigned_to_nat(46u);
v___x_20_ = lean_unsigned_to_nat(193u);
v___x_21_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__6));
v___x_22_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__5));
v___x_23_ = l_mkPanicMessageWithDecl(v___x_22_, v___x_21_, v___x_20_, v___x_19_, v___x_18_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0(lean_object* v_context_25_, lean_object* v_d_26_){
_start:
{
lean_object* v_received_29_; 
if (lean_obj_tag(v_d_26_) == 9)
{
lean_object* v_value_43_; lean_object* v___x_44_; 
v_value_43_ = lean_ctor_get(v_d_26_, 0);
lean_inc(v_value_43_);
lean_dec_ref_known(v_d_26_, 2);
v___x_44_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_44_, 0, v_value_43_);
return v___x_44_;
}
else
{
if (lean_obj_tag(v_d_26_) == 9)
{
lean_object* v_value_45_; lean_object* v_description_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
v_value_45_ = lean_ctor_get(v_d_26_, 0);
v_description_46_ = lean_ctor_get(v_d_26_, 1);
v___x_47_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_48_ = lean_string_dec_eq(v_description_46_, v___x_47_);
if (v___x_48_ == 0)
{
goto v___jp_41_;
}
else
{
uint32_t v___x_49_; uint64_t v___x_50_; lean_object* v___x_51_; uint32_t v___x_52_; lean_object* v___x_53_; 
lean_inc_n(v_value_45_, 2);
lean_dec_ref_known(v_d_26_, 2);
v___x_49_ = 206;
v___x_50_ = 0ULL;
v___x_51_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_51_, 0, v_value_45_);
lean_ctor_set(v___x_51_, 1, v___x_47_);
v___x_52_ = lasm_js_value_handle(v_value_45_);
lean_dec(v_value_45_);
v___x_53_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_49_, v___x_50_, v___x_51_, v___x_52_);
if (lean_obj_tag(v___x_53_) == 0)
{
lean_object* v_a_54_; uint8_t v___x_55_; 
v_a_54_ = lean_ctor_get(v___x_53_, 0);
lean_inc(v_a_54_);
lean_dec_ref_known(v___x_53_, 1);
v___x_55_ = lean_string_validate_utf8(v_a_54_);
if (v___x_55_ == 0)
{
lean_object* v___x_56_; lean_object* v___x_57_; 
lean_dec(v_a_54_);
v___x_56_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8);
v___x_57_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_56_);
v_received_29_ = v___x_57_;
goto v___jp_28_;
}
else
{
lean_object* v___x_58_; 
v___x_58_ = lean_string_from_utf8_unchecked(v_a_54_);
v_received_29_ = v___x_58_;
goto v___jp_28_;
}
}
else
{
lean_object* v___x_59_; 
lean_dec_ref_known(v___x_53_, 1);
v___x_59_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9));
v_received_29_ = v___x_59_;
goto v___jp_28_;
}
}
}
else
{
goto v___jp_41_;
}
}
v___jp_28_:
{
lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_30_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_31_ = lean_string_append(v___x_30_, v_context_25_);
v___x_32_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_33_ = lean_string_append(v___x_31_, v___x_32_);
v___x_34_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__2));
v___x_35_ = lean_string_append(v___x_33_, v___x_34_);
v___x_36_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3));
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
v___x_38_ = lean_string_append(v___x_37_, v_received_29_);
lean_dec_ref(v_received_29_);
v___x_39_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
v___x_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
return v___x_40_;
}
v___jp_41_:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lasm_JS_Data_describe(v_d_26_);
v_received_29_ = v___x_42_;
goto v___jp_28_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___boxed(lean_object* v_context_60_, lean_object* v_d_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0(v_context_60_, v_d_61_);
lean_dec_ref(v_context_60_);
return v_res_63_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1(void){
_start:
{
uint8_t v___x_65_; uint64_t v___x_66_; 
v___x_65_ = 1;
v___x_66_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0(lean_object* v_b_67_, lean_object* v_args_68_, uint8_t v_await_69_){
_start:
{
uint64_t v___y_72_; uint64_t v___y_73_; uint64_t v___x_108_; uint64_t v___y_110_; 
v___x_108_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1);
if (v_await_69_ == 0)
{
uint64_t v___x_115_; 
v___x_115_ = 0ULL;
v___y_110_ = v___x_115_;
goto v___jp_109_;
}
else
{
uint64_t v___x_116_; 
v___x_116_ = 2ULL;
v___y_110_ = v___x_116_;
goto v___jp_109_;
}
v___jp_71_:
{
uint64_t v_flags_74_; uint32_t v___x_75_; lean_object* v___x_76_; uint32_t v___x_77_; lean_object* v___x_78_; 
v_flags_74_ = lean_uint64_lor(v___y_72_, v___y_73_);
v___x_75_ = 214;
v___x_76_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_67_, v_args_68_);
v___x_77_ = 0;
v___x_78_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_75_, v_flags_74_, v___x_76_, v___x_77_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v_a_79_; lean_object* v___x_80_; 
v_a_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_79_);
lean_dec_ref_known(v___x_78_, 1);
v___x_80_ = l_Lasm_JS_Wire_decode(v_a_79_);
lean_dec(v_a_79_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_a_81_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_81_);
lean_dec_ref_known(v___x_80_, 1);
v___x_82_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_67_);
v___x_83_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0(v___x_82_, v_a_81_);
lean_dec_ref(v___x_82_);
return v___x_83_;
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_91_; 
v_a_84_ = lean_ctor_get(v___x_80_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_80_);
if (v_isSharedCheck_91_ == 0)
{
v___x_86_ = v___x_80_;
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_80_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_91_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_89_; 
if (v_isShared_87_ == 0)
{
v___x_89_ = v___x_86_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_84_);
v___x_89_ = v_reuseFailAlloc_90_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
return v___x_89_;
}
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_107_; 
v_a_92_ = lean_ctor_get(v___x_78_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_78_);
if (v_isSharedCheck_107_ == 0)
{
v___x_94_ = v___x_78_;
v_isShared_95_ = v_isSharedCheck_107_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_78_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_107_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_96_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_97_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_67_);
v___x_98_ = lean_string_append(v___x_96_, v___x_97_);
lean_dec_ref(v___x_97_);
v___x_99_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_100_ = lean_string_append(v___x_98_, v___x_99_);
v___x_101_ = lean_io_error_to_string(v_a_92_);
v___x_102_ = lean_string_append(v___x_100_, v___x_101_);
lean_dec_ref(v___x_101_);
v___x_103_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 0, v___x_103_);
v___x_105_ = v___x_94_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v___x_103_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
}
v___jp_109_:
{
uint8_t v_construct_111_; uint64_t v___x_112_; 
v_construct_111_ = lean_ctor_get_uint8(v_b_67_, sizeof(void*)*4);
v___x_112_ = lean_uint64_lor(v___x_108_, v___y_110_);
if (v_construct_111_ == 0)
{
uint64_t v___x_113_; 
v___x_113_ = 0ULL;
v___y_72_ = v___x_112_;
v___y_73_ = v___x_113_;
goto v___jp_71_;
}
else
{
uint64_t v___x_114_; 
v___x_114_ = 4ULL;
v___y_72_ = v___x_112_;
v___y_73_ = v___x_114_;
goto v___jp_71_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___boxed(lean_object* v_b_117_, lean_object* v_args_118_, lean_object* v_await_119_, lean_object* v_a_120_){
_start:
{
uint8_t v_await_boxed_121_; lean_object* v_res_122_; 
v_await_boxed_121_ = lean_unbox(v_await_119_);
v_res_122_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0(v_b_117_, v_args_118_, v_await_boxed_121_);
lean_dec_ref(v_b_117_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_root(){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; lean_object* v___x_136_; 
v___x_133_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__2));
v___x_134_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_135_ = 1;
v___x_136_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0(v___x_133_, v___x_134_, v___x_135_);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_root___boxed(lean_object* v_a_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lasm_Web_App_Raw_root();
return v_res_138_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0(void){
_start:
{
uint8_t v___x_139_; uint64_t v___x_140_; 
v___x_139_ = 0;
v___x_140_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_139_);
return v___x_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(lean_object* v_b_141_, lean_object* v_args_142_, uint8_t v_await_143_){
_start:
{
uint64_t v___y_146_; uint64_t v___y_147_; uint64_t v___x_179_; uint64_t v___y_181_; 
v___x_179_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_143_ == 0)
{
uint64_t v___x_186_; 
v___x_186_ = 0ULL;
v___y_181_ = v___x_186_;
goto v___jp_180_;
}
else
{
uint64_t v___x_187_; 
v___x_187_ = 2ULL;
v___y_181_ = v___x_187_;
goto v___jp_180_;
}
v___jp_145_:
{
uint64_t v_flags_148_; uint32_t v___x_149_; lean_object* v___x_150_; uint32_t v___x_151_; lean_object* v___x_152_; 
v_flags_148_ = lean_uint64_lor(v___y_146_, v___y_147_);
v___x_149_ = 214;
v___x_150_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_141_, v_args_142_);
v___x_151_ = 0;
v___x_152_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_149_, v_flags_148_, v___x_150_, v___x_151_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v_a_153_; lean_object* v___x_154_; 
v_a_153_ = lean_ctor_get(v___x_152_, 0);
lean_inc(v_a_153_);
lean_dec_ref_known(v___x_152_, 1);
v___x_154_ = l_Lasm_JS_Wire_decode(v_a_153_);
lean_dec(v_a_153_);
if (lean_obj_tag(v___x_154_) == 0)
{
lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
v_a_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_162_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_a_155_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
else
{
return v___x_154_;
}
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_178_; 
v_a_163_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_178_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_178_ == 0)
{
v___x_165_ = v___x_152_;
v_isShared_166_ = v_isSharedCheck_178_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_152_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_178_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_167_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_168_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_141_);
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
lean_dec_ref(v___x_168_);
v___x_170_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_171_ = lean_string_append(v___x_169_, v___x_170_);
v___x_172_ = lean_io_error_to_string(v_a_163_);
v___x_173_ = lean_string_append(v___x_171_, v___x_172_);
lean_dec_ref(v___x_172_);
v___x_174_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_174_, 0, v___x_173_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_174_);
v___x_176_ = v___x_165_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_177_; 
v_reuseFailAlloc_177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_177_, 0, v___x_174_);
v___x_176_ = v_reuseFailAlloc_177_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
return v___x_176_;
}
}
}
}
v___jp_180_:
{
uint8_t v_construct_182_; uint64_t v___x_183_; 
v_construct_182_ = lean_ctor_get_uint8(v_b_141_, sizeof(void*)*4);
v___x_183_ = lean_uint64_lor(v___x_179_, v___y_181_);
if (v_construct_182_ == 0)
{
uint64_t v___x_184_; 
v___x_184_ = 0ULL;
v___y_146_ = v___x_183_;
v___y_147_ = v___x_184_;
goto v___jp_145_;
}
else
{
uint64_t v___x_185_; 
v___x_185_ = 4ULL;
v___y_146_ = v___x_183_;
v___y_147_ = v___x_185_;
goto v___jp_145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___boxed(lean_object* v_b_188_, lean_object* v_args_189_, lean_object* v_await_190_, lean_object* v_a_191_){
_start:
{
uint8_t v_await_boxed_192_; lean_object* v_res_193_; 
v_await_boxed_192_ = lean_unbox(v_await_190_);
v_res_193_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(v_b_188_, v_args_189_, v_await_boxed_192_);
lean_dec_ref(v_b_188_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_flags(){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; lean_object* v___x_204_; 
v___x_201_ = ((lean_object*)(l_Lasm_Web_App_Raw_flags___closed__1));
v___x_202_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_203_ = 1;
v___x_204_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(v___x_201_, v___x_202_, v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_flags___boxed(lean_object* v_a_205_){
_start:
{
lean_object* v_res_206_; 
v_res_206_ = l_Lasm_Web_App_Raw_flags();
return v_res_206_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg(lean_object* v_d_207_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_209_, 0, v_d_207_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg___boxed(lean_object* v_d_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___redArg(v_d_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0(lean_object* v_context_213_, lean_object* v_d_214_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v_d_214_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0___boxed(lean_object* v_context_217_, lean_object* v_d_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0_spec__0(v_context_217_, v_d_218_);
lean_dec_ref(v_context_217_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0(lean_object* v_context_222_, lean_object* v_d_223_){
_start:
{
lean_object* v_received_226_; 
if (lean_obj_tag(v_d_223_) == 2)
{
uint8_t v_b_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
v_b_240_ = lean_ctor_get_uint8(v_d_223_, 0);
lean_dec_ref_known(v_d_223_, 0);
v___x_241_ = lean_box(v_b_240_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
else
{
if (lean_obj_tag(v_d_223_) == 9)
{
lean_object* v_value_243_; lean_object* v_description_244_; lean_object* v___x_245_; uint8_t v___x_246_; 
v_value_243_ = lean_ctor_get(v_d_223_, 0);
v_description_244_ = lean_ctor_get(v_d_223_, 1);
v___x_245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_246_ = lean_string_dec_eq(v_description_244_, v___x_245_);
if (v___x_246_ == 0)
{
goto v___jp_238_;
}
else
{
uint32_t v___x_247_; uint64_t v___x_248_; lean_object* v___x_249_; uint32_t v___x_250_; lean_object* v___x_251_; 
lean_inc_n(v_value_243_, 2);
lean_dec_ref_known(v_d_223_, 2);
v___x_247_ = 206;
v___x_248_ = 0ULL;
v___x_249_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_249_, 0, v_value_243_);
lean_ctor_set(v___x_249_, 1, v___x_245_);
v___x_250_ = lasm_js_value_handle(v_value_243_);
lean_dec(v_value_243_);
v___x_251_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_247_, v___x_248_, v___x_249_, v___x_250_);
if (lean_obj_tag(v___x_251_) == 0)
{
lean_object* v_a_252_; uint8_t v___x_253_; 
v_a_252_ = lean_ctor_get(v___x_251_, 0);
lean_inc(v_a_252_);
lean_dec_ref_known(v___x_251_, 1);
v___x_253_ = lean_string_validate_utf8(v_a_252_);
if (v___x_253_ == 0)
{
lean_object* v___x_254_; lean_object* v___x_255_; 
lean_dec(v_a_252_);
v___x_254_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8);
v___x_255_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_254_);
v_received_226_ = v___x_255_;
goto v___jp_225_;
}
else
{
lean_object* v___x_256_; 
v___x_256_ = lean_string_from_utf8_unchecked(v_a_252_);
v_received_226_ = v___x_256_;
goto v___jp_225_;
}
}
else
{
lean_object* v___x_257_; 
lean_dec_ref_known(v___x_251_, 1);
v___x_257_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9));
v_received_226_ = v___x_257_;
goto v___jp_225_;
}
}
}
else
{
goto v___jp_238_;
}
}
v___jp_225_:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_227_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_228_ = lean_string_append(v___x_227_, v_context_222_);
v___x_229_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
v___x_231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___x_233_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3));
v___x_234_ = lean_string_append(v___x_232_, v___x_233_);
v___x_235_ = lean_string_append(v___x_234_, v_received_226_);
lean_dec_ref(v_received_226_);
v___x_236_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_236_, 0, v___x_235_);
v___x_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
v___jp_238_:
{
lean_object* v___x_239_; 
v___x_239_ = l_Lasm_JS_Data_describe(v_d_223_);
v_received_226_ = v___x_239_;
goto v___jp_225_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0___boxed(lean_object* v_context_258_, lean_object* v_d_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0(v_context_258_, v_d_259_);
lean_dec_ref(v_context_258_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0(lean_object* v_b_262_, lean_object* v_args_263_, uint8_t v_await_264_){
_start:
{
uint64_t v___y_267_; uint64_t v___y_268_; uint64_t v___x_303_; uint64_t v___y_305_; 
v___x_303_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_264_ == 0)
{
uint64_t v___x_310_; 
v___x_310_ = 0ULL;
v___y_305_ = v___x_310_;
goto v___jp_304_;
}
else
{
uint64_t v___x_311_; 
v___x_311_ = 2ULL;
v___y_305_ = v___x_311_;
goto v___jp_304_;
}
v___jp_266_:
{
uint64_t v_flags_269_; uint32_t v___x_270_; lean_object* v___x_271_; uint32_t v___x_272_; lean_object* v___x_273_; 
v_flags_269_ = lean_uint64_lor(v___y_267_, v___y_268_);
v___x_270_ = 214;
v___x_271_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_262_, v_args_263_);
v___x_272_ = 0;
v___x_273_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_270_, v_flags_269_, v___x_271_, v___x_272_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_275_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
lean_inc(v_a_274_);
lean_dec_ref_known(v___x_273_, 1);
v___x_275_ = l_Lasm_JS_Wire_decode(v_a_274_);
lean_dec(v_a_274_);
if (lean_obj_tag(v___x_275_) == 0)
{
lean_object* v_a_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v_a_276_ = lean_ctor_get(v___x_275_, 0);
lean_inc(v_a_276_);
lean_dec_ref_known(v___x_275_, 1);
v___x_277_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_262_);
v___x_278_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0_spec__0(v___x_277_, v_a_276_);
lean_dec_ref(v___x_277_);
return v___x_278_;
}
else
{
lean_object* v_a_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_286_; 
v_a_279_ = lean_ctor_get(v___x_275_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v___x_275_);
if (v_isSharedCheck_286_ == 0)
{
v___x_281_ = v___x_275_;
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_a_279_);
lean_dec(v___x_275_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_286_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_284_; 
if (v_isShared_282_ == 0)
{
v___x_284_ = v___x_281_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_285_; 
v_reuseFailAlloc_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_285_, 0, v_a_279_);
v___x_284_ = v_reuseFailAlloc_285_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
return v___x_284_;
}
}
}
}
else
{
lean_object* v_a_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_302_; 
v_a_287_ = lean_ctor_get(v___x_273_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_273_);
if (v_isSharedCheck_302_ == 0)
{
v___x_289_ = v___x_273_;
v_isShared_290_ = v_isSharedCheck_302_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_a_287_);
lean_dec(v___x_273_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_302_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_300_; 
v___x_291_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_292_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_262_);
v___x_293_ = lean_string_append(v___x_291_, v___x_292_);
lean_dec_ref(v___x_292_);
v___x_294_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
v___x_296_ = lean_io_error_to_string(v_a_287_);
v___x_297_ = lean_string_append(v___x_295_, v___x_296_);
lean_dec_ref(v___x_296_);
v___x_298_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
if (v_isShared_290_ == 0)
{
lean_ctor_set(v___x_289_, 0, v___x_298_);
v___x_300_ = v___x_289_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
v___jp_304_:
{
uint8_t v_construct_306_; uint64_t v___x_307_; 
v_construct_306_ = lean_ctor_get_uint8(v_b_262_, sizeof(void*)*4);
v___x_307_ = lean_uint64_lor(v___x_303_, v___y_305_);
if (v_construct_306_ == 0)
{
uint64_t v___x_308_; 
v___x_308_ = 0ULL;
v___y_267_ = v___x_307_;
v___y_268_ = v___x_308_;
goto v___jp_266_;
}
else
{
uint64_t v___x_309_; 
v___x_309_ = 4ULL;
v___y_267_ = v___x_307_;
v___y_268_ = v___x_309_;
goto v___jp_266_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0___boxed(lean_object* v_b_312_, lean_object* v_args_313_, lean_object* v_await_314_, lean_object* v_a_315_){
_start:
{
uint8_t v_await_boxed_316_; lean_object* v_res_317_; 
v_await_boxed_316_ = lean_unbox(v_await_314_);
v_res_317_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0(v_b_312_, v_args_313_, v_await_boxed_316_);
lean_dec_ref(v_b_312_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hydrating(){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; uint8_t v___x_327_; lean_object* v___x_328_; 
v___x_325_ = ((lean_object*)(l_Lasm_Web_App_Raw_hydrating___closed__1));
v___x_326_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_327_ = 1;
v___x_328_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_hydrating_spec__0(v___x_325_, v___x_326_, v___x_327_);
return v___x_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hydrating___boxed(lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lasm_Web_App_Raw_hydrating();
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0(lean_object* v_context_332_, lean_object* v_d_333_){
_start:
{
lean_object* v_received_336_; 
if (lean_obj_tag(v_d_333_) == 4)
{
lean_object* v_s_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_357_; 
v_s_350_ = lean_ctor_get(v_d_333_, 0);
v_isSharedCheck_357_ = !lean_is_exclusive(v_d_333_);
if (v_isSharedCheck_357_ == 0)
{
v___x_352_ = v_d_333_;
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_s_350_);
lean_dec(v_d_333_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_357_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_355_; 
if (v_isShared_353_ == 0)
{
lean_ctor_set_tag(v___x_352_, 0);
v___x_355_ = v___x_352_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_356_; 
v_reuseFailAlloc_356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_356_, 0, v_s_350_);
v___x_355_ = v_reuseFailAlloc_356_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
return v___x_355_;
}
}
}
else
{
if (lean_obj_tag(v_d_333_) == 9)
{
lean_object* v_value_358_; lean_object* v_description_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v_value_358_ = lean_ctor_get(v_d_333_, 0);
v_description_359_ = lean_ctor_get(v_d_333_, 1);
v___x_360_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_361_ = lean_string_dec_eq(v_description_359_, v___x_360_);
if (v___x_361_ == 0)
{
goto v___jp_348_;
}
else
{
uint32_t v___x_362_; uint64_t v___x_363_; lean_object* v___x_364_; uint32_t v___x_365_; lean_object* v___x_366_; 
lean_inc_n(v_value_358_, 2);
lean_dec_ref_known(v_d_333_, 2);
v___x_362_ = 206;
v___x_363_ = 0ULL;
v___x_364_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_364_, 0, v_value_358_);
lean_ctor_set(v___x_364_, 1, v___x_360_);
v___x_365_ = lasm_js_value_handle(v_value_358_);
lean_dec(v_value_358_);
v___x_366_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_362_, v___x_363_, v___x_364_, v___x_365_);
if (lean_obj_tag(v___x_366_) == 0)
{
lean_object* v_a_367_; uint8_t v___x_368_; 
v_a_367_ = lean_ctor_get(v___x_366_, 0);
lean_inc(v_a_367_);
lean_dec_ref_known(v___x_366_, 1);
v___x_368_ = lean_string_validate_utf8(v_a_367_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; lean_object* v___x_370_; 
lean_dec(v_a_367_);
v___x_369_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8);
v___x_370_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_369_);
v_received_336_ = v___x_370_;
goto v___jp_335_;
}
else
{
lean_object* v___x_371_; 
v___x_371_ = lean_string_from_utf8_unchecked(v_a_367_);
v_received_336_ = v___x_371_;
goto v___jp_335_;
}
}
else
{
lean_object* v___x_372_; 
lean_dec_ref_known(v___x_366_, 1);
v___x_372_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9));
v_received_336_ = v___x_372_;
goto v___jp_335_;
}
}
}
else
{
goto v___jp_348_;
}
}
v___jp_335_:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_337_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_338_ = lean_string_append(v___x_337_, v_context_332_);
v___x_339_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_340_ = lean_string_append(v___x_338_, v___x_339_);
v___x_341_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___closed__0));
v___x_342_ = lean_string_append(v___x_340_, v___x_341_);
v___x_343_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3));
v___x_344_ = lean_string_append(v___x_342_, v___x_343_);
v___x_345_ = lean_string_append(v___x_344_, v_received_336_);
lean_dec_ref(v_received_336_);
v___x_346_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_346_, 0, v___x_345_);
v___x_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
return v___x_347_;
}
v___jp_348_:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lasm_JS_Data_describe(v_d_333_);
v_received_336_ = v___x_349_;
goto v___jp_335_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0___boxed(lean_object* v_context_373_, lean_object* v_d_374_, lean_object* v_a_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0(v_context_373_, v_d_374_);
lean_dec_ref(v_context_373_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0(lean_object* v_b_377_, lean_object* v_args_378_, uint8_t v_await_379_){
_start:
{
uint64_t v___y_382_; uint64_t v___y_383_; uint64_t v___x_418_; uint64_t v___y_420_; 
v___x_418_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_379_ == 0)
{
uint64_t v___x_425_; 
v___x_425_ = 0ULL;
v___y_420_ = v___x_425_;
goto v___jp_419_;
}
else
{
uint64_t v___x_426_; 
v___x_426_ = 2ULL;
v___y_420_ = v___x_426_;
goto v___jp_419_;
}
v___jp_381_:
{
uint64_t v_flags_384_; uint32_t v___x_385_; lean_object* v___x_386_; uint32_t v___x_387_; lean_object* v___x_388_; 
v_flags_384_ = lean_uint64_lor(v___y_382_, v___y_383_);
v___x_385_ = 214;
v___x_386_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_377_, v_args_378_);
v___x_387_ = 0;
v___x_388_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_385_, v_flags_384_, v___x_386_, v___x_387_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_390_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = l_Lasm_JS_Wire_decode(v_a_389_);
lean_dec(v_a_389_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_a_391_);
lean_dec_ref_known(v___x_390_, 1);
v___x_392_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_377_);
v___x_393_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0_spec__0(v___x_392_, v_a_391_);
lean_dec_ref(v___x_392_);
return v___x_393_;
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
v_a_394_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_390_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_390_);
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
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_417_; 
v_a_402_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_417_ == 0)
{
v___x_404_ = v___x_388_;
v_isShared_405_ = v_isSharedCheck_417_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_388_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_417_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_415_; 
v___x_406_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_407_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_377_);
v___x_408_ = lean_string_append(v___x_406_, v___x_407_);
lean_dec_ref(v___x_407_);
v___x_409_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_410_ = lean_string_append(v___x_408_, v___x_409_);
v___x_411_ = lean_io_error_to_string(v_a_402_);
v___x_412_ = lean_string_append(v___x_410_, v___x_411_);
lean_dec_ref(v___x_411_);
v___x_413_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v___x_413_);
v___x_415_ = v___x_404_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_413_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
v___jp_419_:
{
uint8_t v_construct_421_; uint64_t v___x_422_; 
v_construct_421_ = lean_ctor_get_uint8(v_b_377_, sizeof(void*)*4);
v___x_422_ = lean_uint64_lor(v___x_418_, v___y_420_);
if (v_construct_421_ == 0)
{
uint64_t v___x_423_; 
v___x_423_ = 0ULL;
v___y_382_ = v___x_422_;
v___y_383_ = v___x_423_;
goto v___jp_381_;
}
else
{
uint64_t v___x_424_; 
v___x_424_ = 4ULL;
v___y_382_ = v___x_422_;
v___y_383_ = v___x_424_;
goto v___jp_381_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0___boxed(lean_object* v_b_427_, lean_object* v_args_428_, lean_object* v_await_429_, lean_object* v_a_430_){
_start:
{
uint8_t v_await_boxed_431_; lean_object* v_res_432_; 
v_await_boxed_431_ = lean_unbox(v_await_429_);
v_res_432_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0(v_b_427_, v_args_428_, v_await_boxed_431_);
lean_dec_ref(v_b_427_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_target(){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; lean_object* v___x_443_; 
v___x_440_ = ((lean_object*)(l_Lasm_Web_App_Raw_target___closed__1));
v___x_441_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_442_ = 1;
v___x_443_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_target_spec__0(v___x_440_, v___x_441_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_target___boxed(lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = l_Lasm_Web_App_Raw_target();
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0(lean_object* v_context_446_, lean_object* v_d_447_){
_start:
{
lean_object* v_received_450_; 
if (lean_obj_tag(v_d_447_) == 9)
{
lean_object* v_value_464_; lean_object* v___x_465_; 
v_value_464_ = lean_ctor_get(v_d_447_, 0);
lean_inc(v_value_464_);
lean_dec_ref_known(v_d_447_, 2);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v_value_464_);
return v___x_465_;
}
else
{
if (lean_obj_tag(v_d_447_) == 9)
{
lean_object* v_value_466_; lean_object* v_description_467_; lean_object* v___x_468_; uint8_t v___x_469_; 
v_value_466_ = lean_ctor_get(v_d_447_, 0);
v_description_467_ = lean_ctor_get(v_d_447_, 1);
v___x_468_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_469_ = lean_string_dec_eq(v_description_467_, v___x_468_);
if (v___x_469_ == 0)
{
goto v___jp_462_;
}
else
{
uint32_t v___x_470_; uint64_t v___x_471_; lean_object* v___x_472_; uint32_t v___x_473_; lean_object* v___x_474_; 
lean_inc_n(v_value_466_, 2);
lean_dec_ref_known(v_d_447_, 2);
v___x_470_ = 206;
v___x_471_ = 0ULL;
v___x_472_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_472_, 0, v_value_466_);
lean_ctor_set(v___x_472_, 1, v___x_468_);
v___x_473_ = lasm_js_value_handle(v_value_466_);
lean_dec(v_value_466_);
v___x_474_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_470_, v___x_471_, v___x_472_, v___x_473_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; uint8_t v___x_476_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref_known(v___x_474_, 1);
v___x_476_ = lean_string_validate_utf8(v_a_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; lean_object* v___x_478_; 
lean_dec(v_a_475_);
v___x_477_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__8);
v___x_478_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_477_);
v_received_450_ = v___x_478_;
goto v___jp_449_;
}
else
{
lean_object* v___x_479_; 
v___x_479_ = lean_string_from_utf8_unchecked(v_a_475_);
v_received_450_ = v___x_479_;
goto v___jp_449_;
}
}
else
{
lean_object* v___x_480_; 
lean_dec_ref_known(v___x_474_, 1);
v___x_480_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__9));
v_received_450_ = v___x_480_;
goto v___jp_449_;
}
}
}
else
{
goto v___jp_462_;
}
}
v___jp_449_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_451_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_452_ = lean_string_append(v___x_451_, v_context_446_);
v___x_453_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__1));
v___x_454_ = lean_string_append(v___x_452_, v___x_453_);
v___x_455_ = ((lean_object*)(l_Lasm_Web_App_instFromJSPort___closed__1));
v___x_456_ = lean_string_append(v___x_454_, v___x_455_);
v___x_457_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__3));
v___x_458_ = lean_string_append(v___x_456_, v___x_457_);
v___x_459_ = lean_string_append(v___x_458_, v_received_450_);
lean_dec_ref(v_received_450_);
v___x_460_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
v___x_461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_461_, 0, v___x_460_);
return v___x_461_;
}
v___jp_462_:
{
lean_object* v___x_463_; 
v___x_463_ = l_Lasm_JS_Data_describe(v_d_447_);
v_received_450_ = v___x_463_;
goto v___jp_449_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0___boxed(lean_object* v_context_481_, lean_object* v_d_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0(v_context_481_, v_d_482_);
lean_dec_ref(v_context_481_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0(lean_object* v_b_485_, lean_object* v_args_486_, uint8_t v_await_487_){
_start:
{
uint64_t v___y_490_; uint64_t v___y_491_; uint64_t v___x_526_; uint64_t v___y_528_; 
v___x_526_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__1);
if (v_await_487_ == 0)
{
uint64_t v___x_533_; 
v___x_533_ = 0ULL;
v___y_528_ = v___x_533_;
goto v___jp_527_;
}
else
{
uint64_t v___x_534_; 
v___x_534_ = 2ULL;
v___y_528_ = v___x_534_;
goto v___jp_527_;
}
v___jp_489_:
{
uint64_t v_flags_492_; uint32_t v___x_493_; lean_object* v___x_494_; uint32_t v___x_495_; lean_object* v___x_496_; 
v_flags_492_ = lean_uint64_lor(v___y_490_, v___y_491_);
v___x_493_ = 214;
v___x_494_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_485_, v_args_486_);
v___x_495_ = 0;
v___x_496_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_493_, v_flags_492_, v___x_494_, v___x_495_);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; lean_object* v___x_498_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_497_);
lean_dec_ref_known(v___x_496_, 1);
v___x_498_ = l_Lasm_JS_Wire_decode(v_a_497_);
lean_dec(v_a_497_);
if (lean_obj_tag(v___x_498_) == 0)
{
lean_object* v_a_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v_a_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_a_499_);
lean_dec_ref_known(v___x_498_, 1);
v___x_500_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_485_);
v___x_501_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0_spec__0(v___x_500_, v_a_499_);
lean_dec_ref(v___x_500_);
return v___x_501_;
}
else
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_509_; 
v_a_502_ = lean_ctor_get(v___x_498_, 0);
v_isSharedCheck_509_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_509_ == 0)
{
v___x_504_ = v___x_498_;
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v___x_498_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_509_;
goto v_resetjp_503_;
}
v_resetjp_503_:
{
lean_object* v___x_507_; 
if (v_isShared_505_ == 0)
{
v___x_507_ = v___x_504_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v_a_502_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_525_; 
v_a_510_ = lean_ctor_get(v___x_496_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_496_);
if (v_isSharedCheck_525_ == 0)
{
v___x_512_ = v___x_496_;
v_isShared_513_ = v_isSharedCheck_525_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_496_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_525_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
v___x_514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_515_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_485_);
v___x_516_ = lean_string_append(v___x_514_, v___x_515_);
lean_dec_ref(v___x_515_);
v___x_517_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_518_ = lean_string_append(v___x_516_, v___x_517_);
v___x_519_ = lean_io_error_to_string(v_a_510_);
v___x_520_ = lean_string_append(v___x_518_, v___x_519_);
lean_dec_ref(v___x_519_);
v___x_521_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 0, v___x_521_);
v___x_523_ = v___x_512_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
v___jp_527_:
{
uint8_t v_construct_529_; uint64_t v___x_530_; 
v_construct_529_ = lean_ctor_get_uint8(v_b_485_, sizeof(void*)*4);
v___x_530_ = lean_uint64_lor(v___x_526_, v___y_528_);
if (v_construct_529_ == 0)
{
uint64_t v___x_531_; 
v___x_531_ = 0ULL;
v___y_490_ = v___x_530_;
v___y_491_ = v___x_531_;
goto v___jp_489_;
}
else
{
uint64_t v___x_532_; 
v___x_532_ = 4ULL;
v___y_490_ = v___x_530_;
v___y_491_ = v___x_532_;
goto v___jp_489_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0___boxed(lean_object* v_b_535_, lean_object* v_args_536_, lean_object* v_await_537_, lean_object* v_a_538_){
_start:
{
uint8_t v_await_boxed_539_; lean_object* v_res_540_; 
v_await_boxed_539_ = lean_unbox(v_await_537_);
v_res_540_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0(v_b_535_, v_args_536_, v_await_boxed_539_);
lean_dec_ref(v_b_535_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_port(lean_object* v_a_547_){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; uint8_t v___x_553_; lean_object* v___x_554_; 
v___x_549_ = ((lean_object*)(l_Lasm_Web_App_Raw_port___closed__1));
v___x_550_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_551_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_551_, 0, v_a_547_);
v___x_552_ = lean_array_push(v___x_550_, v___x_551_);
v___x_553_ = 1;
v___x_554_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_port_spec__0(v___x_549_, v___x_552_, v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_port___boxed(lean_object* v_a_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lasm_Web_App_Raw_port(v_a_555_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(lean_object* v_b_558_, lean_object* v_args_559_, uint8_t v_await_560_){
_start:
{
uint64_t v___y_563_; uint64_t v___y_564_; uint64_t v___x_597_; uint64_t v___y_599_; 
v___x_597_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0___closed__0);
if (v_await_560_ == 0)
{
uint64_t v___x_604_; 
v___x_604_ = 0ULL;
v___y_599_ = v___x_604_;
goto v___jp_598_;
}
else
{
uint64_t v___x_605_; 
v___x_605_ = 2ULL;
v___y_599_ = v___x_605_;
goto v___jp_598_;
}
v___jp_562_:
{
uint64_t v_flags_565_; uint32_t v___x_566_; lean_object* v___x_567_; uint32_t v___x_568_; lean_object* v___x_569_; 
v_flags_565_ = lean_uint64_lor(v___y_563_, v___y_564_);
v___x_566_ = 214;
v___x_567_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_558_, v_args_559_);
v___x_568_ = 0;
v___x_569_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_566_, v_flags_565_, v___x_567_, v___x_568_);
if (lean_obj_tag(v___x_569_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_571_; 
v_a_570_ = lean_ctor_get(v___x_569_, 0);
lean_inc(v_a_570_);
lean_dec_ref_known(v___x_569_, 1);
v___x_571_ = l_Lasm_JS_Wire_decode(v_a_570_);
lean_dec(v_a_570_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v___x_572_; 
lean_dec_ref_known(v___x_571_, 1);
v___x_572_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_572_;
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_a_573_ = lean_ctor_get(v___x_571_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_571_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_571_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
else
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_596_; 
v_a_581_ = lean_ctor_get(v___x_569_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_596_ == 0)
{
v___x_583_ = v___x_569_;
v_isShared_584_ = v_isSharedCheck_596_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_569_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_596_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_594_; 
v___x_585_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__0));
v___x_586_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_558_);
v___x_587_ = lean_string_append(v___x_585_, v___x_586_);
lean_dec_ref(v___x_586_);
v___x_588_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0___closed__0));
v___x_589_ = lean_string_append(v___x_587_, v___x_588_);
v___x_590_ = lean_io_error_to_string(v_a_581_);
v___x_591_ = lean_string_append(v___x_589_, v___x_590_);
lean_dec_ref(v___x_590_);
v___x_592_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
if (v_isShared_584_ == 0)
{
lean_ctor_set(v___x_583_, 0, v___x_592_);
v___x_594_ = v___x_583_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v___x_592_);
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
v___jp_598_:
{
uint8_t v_construct_600_; uint64_t v___x_601_; 
v_construct_600_ = lean_ctor_get_uint8(v_b_558_, sizeof(void*)*4);
v___x_601_ = lean_uint64_lor(v___x_597_, v___y_599_);
if (v_construct_600_ == 0)
{
uint64_t v___x_602_; 
v___x_602_ = 0ULL;
v___y_563_ = v___x_601_;
v___y_564_ = v___x_602_;
goto v___jp_562_;
}
else
{
uint64_t v___x_603_; 
v___x_603_ = 4ULL;
v___y_563_ = v___x_601_;
v___y_564_ = v___x_603_;
goto v___jp_562_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0___boxed(lean_object* v_b_606_, lean_object* v_args_607_, lean_object* v_await_608_, lean_object* v_a_609_){
_start:
{
uint8_t v_await_boxed_610_; lean_object* v_res_611_; 
v_await_boxed_610_ = lean_unbox(v_await_608_);
v_res_611_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v_b_606_, v_args_607_, v_await_boxed_610_);
lean_dec_ref(v_b_606_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onMessage(lean_object* v_a_618_){
_start:
{
lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; uint8_t v___x_625_; lean_object* v___x_626_; 
v___x_620_ = ((lean_object*)(l_Lasm_Web_App_Raw_onMessage___closed__1));
v___x_621_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_622_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_623_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_623_, 0, v_a_618_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = lean_array_push(v___x_621_, v___x_623_);
v___x_625_ = 1;
v___x_626_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_620_, v___x_624_, v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onMessage___boxed(lean_object* v_a_627_, lean_object* v_a_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lasm_Web_App_Raw_onMessage(v_a_627_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onUnmount(lean_object* v_a_636_){
_start:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; lean_object* v___x_644_; 
v___x_638_ = ((lean_object*)(l_Lasm_Web_App_Raw_onUnmount___closed__1));
v___x_639_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_640_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_641_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_641_, 0, v_a_636_);
lean_ctor_set(v___x_641_, 1, v___x_640_);
v___x_642_ = lean_array_push(v___x_639_, v___x_641_);
v___x_643_ = 1;
v___x_644_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_638_, v___x_642_, v___x_643_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onUnmount___boxed(lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lasm_Web_App_Raw_onUnmount(v_a_645_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hotState(){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; lean_object* v___x_658_; 
v___x_655_ = ((lean_object*)(l_Lasm_Web_App_Raw_hotState___closed__1));
v___x_656_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_657_ = 1;
v___x_658_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_flags_spec__0(v___x_655_, v___x_656_, v___x_657_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_hotState___boxed(lean_object* v_a_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_Lasm_Web_App_Raw_hotState();
return v_res_660_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onHotSave(lean_object* v_a_667_){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; uint8_t v___x_674_; lean_object* v___x_675_; 
v___x_669_ = ((lean_object*)(l_Lasm_Web_App_Raw_onHotSave___closed__1));
v___x_670_ = ((lean_object*)(l_Lasm_Web_App_Raw_root___closed__3));
v___x_671_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_672_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_672_, 0, v_a_667_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_array_push(v___x_670_, v___x_672_);
v___x_674_ = 1;
v___x_675_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_onMessage_spec__0(v___x_669_, v___x_673_, v___x_674_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Raw_onHotSave___boxed(lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l_Lasm_Web_App_Raw_onHotSave(v_a_676_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_root(){
_start:
{
lean_object* v___x_680_; 
v___x_680_ = l_Lasm_Web_App_Raw_root();
return v___x_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_root___boxed(lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lasm_Web_App_root();
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___redArg(lean_object* v_inst_684_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l_Lasm_Web_App_Raw_flags();
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = ((lean_object*)(l_Lasm_Web_App_flags___redArg___closed__0));
v___x_689_ = l_Lasm_JS_decodeAs___redArg(v_inst_684_, v___x_688_, v_a_687_);
return v___x_689_;
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec_ref(v_inst_684_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___redArg___boxed(lean_object* v_inst_698_, lean_object* v_a_699_){
_start:
{
lean_object* v_res_700_; 
v_res_700_ = l_Lasm_Web_App_flags___redArg(v_inst_698_);
return v_res_700_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags(lean_object* v_00_u03b1_701_, lean_object* v_inst_702_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lasm_Web_App_flags___redArg(v_inst_702_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_flags___boxed(lean_object* v_00_u03b1_705_, lean_object* v_inst_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lasm_Web_App_flags(v_00_u03b1_705_, v_inst_706_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hydrating(){
_start:
{
lean_object* v___x_710_; 
v___x_710_ = l_Lasm_Web_App_Raw_hydrating();
return v___x_710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hydrating___boxed(lean_object* v_a_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lasm_Web_App_hydrating();
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_target(){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l_Lasm_Web_App_Raw_target();
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_target___boxed(lean_object* v_a_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_Lasm_Web_App_target();
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_port(lean_object* v_name_717_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l_Lasm_Web_App_Raw_port(v_name_717_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_port___boxed(lean_object* v_name_720_, lean_object* v_a_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lasm_Web_App_port(v_name_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___redArg(lean_object* v_inst_724_, lean_object* v_p_725_, lean_object* v_value_726_){
_start:
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_728_ = l_Lasm_JS_instFromJSUnit;
v___x_729_ = ((lean_object*)(l_Lasm_Web_App_Port_send___redArg___closed__0));
v___x_730_ = lean_apply_1(v_inst_724_, v_value_726_);
v___x_731_ = lean_unsigned_to_nat(1u);
v___x_732_ = lean_mk_empty_array_with_capacity(v___x_731_);
v___x_733_ = lean_array_push(v___x_732_, v___x_730_);
v___x_734_ = l_Lasm_JS_Value_callMethod___redArg(v_p_725_, v___x_729_, v___x_733_, v___x_728_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___redArg___boxed(lean_object* v_inst_735_, lean_object* v_p_736_, lean_object* v_value_737_, lean_object* v_a_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lasm_Web_App_Port_send___redArg(v_inst_735_, v_p_736_, v_value_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send(lean_object* v_00_u03b1_740_, lean_object* v_inst_741_, lean_object* v_p_742_, lean_object* v_value_743_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lasm_Web_App_Port_send___redArg(v_inst_741_, v_p_742_, v_value_743_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_send___boxed(lean_object* v_00_u03b1_746_, lean_object* v_inst_747_, lean_object* v_p_748_, lean_object* v_value_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lasm_Web_App_Port_send(v_00_u03b1_746_, v_inst_747_, v_p_748_, v_value_749_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___lam__0(lean_object* v_f_752_, lean_object* v_args_753_){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; uint8_t v___x_757_; 
v___x_755_ = lean_unsigned_to_nat(0u);
v___x_756_ = lean_array_get_size(v_args_753_);
v___x_757_ = lean_nat_dec_lt(v___x_755_, v___x_756_);
if (v___x_757_ == 0)
{
lean_object* v___x_758_; lean_object* v___x_759_; 
v___x_758_ = lean_box(0);
v___x_759_ = lean_apply_2(v_f_752_, v___x_758_, lean_box(0));
return v___x_759_;
}
else
{
lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_760_ = lean_array_fget_borrowed(v_args_753_, v___x_755_);
lean_inc(v___x_760_);
v___x_761_ = lean_apply_2(v_f_752_, v___x_760_, lean_box(0));
return v___x_761_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___lam__0___boxed(lean_object* v_f_762_, lean_object* v_args_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_Lasm_Web_App_Port_subscribe___lam__0(v_f_762_, v_args_763_);
lean_dec_ref(v_args_763_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe(lean_object* v_p_767_, lean_object* v_f_768_){
_start:
{
lean_object* v___f_770_; lean_object* v___x_771_; 
v___f_770_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_770_, 0, v_f_768_);
v___x_771_ = l_Lasm_Web_callback(v___f_770_);
if (lean_obj_tag(v___x_771_) == 0)
{
lean_object* v_a_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v_a_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_a_772_);
lean_dec_ref_known(v___x_771_, 1);
v___x_773_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribe___closed__0));
v___x_774_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_775_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_775_, 0, v_a_772_);
lean_ctor_set(v___x_775_, 1, v___x_774_);
v___x_776_ = lean_unsigned_to_nat(1u);
v___x_777_ = lean_mk_empty_array_with_capacity(v___x_776_);
v___x_778_ = lean_array_push(v___x_777_, v___x_775_);
v___x_779_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_767_, v___x_773_, v___x_778_);
return v___x_779_;
}
else
{
lean_object* v_a_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_787_; 
lean_dec(v_p_767_);
v_a_780_ = lean_ctor_get(v___x_771_, 0);
v_isSharedCheck_787_ = !lean_is_exclusive(v___x_771_);
if (v_isSharedCheck_787_ == 0)
{
v___x_782_ = v___x_771_;
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_a_780_);
lean_dec(v___x_771_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_787_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___x_785_; 
if (v_isShared_783_ == 0)
{
v___x_785_ = v___x_782_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_a_780_);
v___x_785_ = v_reuseFailAlloc_786_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
return v___x_785_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribe___boxed(lean_object* v_p_788_, lean_object* v_f_789_, lean_object* v_a_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lasm_Web_App_Port_subscribe(v_p_788_, v_f_789_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0(lean_object* v_x_796_){
_start:
{
if (lean_obj_tag(v_x_796_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_806_; 
v_a_798_ = lean_ctor_get(v_x_796_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v_x_796_);
if (v_isSharedCheck_806_ == 0)
{
v___x_800_ = v_x_796_;
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v_x_796_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_806_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v___x_803_; 
if (v_isShared_801_ == 0)
{
v___x_803_ = v___x_800_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_a_798_);
v___x_803_ = v_reuseFailAlloc_805_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
lean_object* v___x_804_; 
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
return v___x_804_;
}
}
}
else
{
lean_object* v___x_807_; 
lean_dec_ref_known(v_x_796_, 1);
v___x_807_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribeAsync___lam__0___closed__1));
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__0___boxed(lean_object* v_x_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l_Lasm_Web_App_Port_subscribeAsync___lam__0(v_x_808_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__1(lean_object* v_f_811_, lean_object* v___f_812_, lean_object* v_args_813_){
_start:
{
lean_object* v___y_816_; lean_object* v___x_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v___x_821_ = lean_unsigned_to_nat(0u);
v___x_822_ = lean_array_get_size(v_args_813_);
v___x_823_ = lean_nat_dec_lt(v___x_821_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; 
v___x_824_ = lean_box(0);
v___y_816_ = v___x_824_;
goto v___jp_815_;
}
else
{
lean_object* v___x_825_; 
v___x_825_ = lean_array_fget_borrowed(v_args_813_, v___x_821_);
lean_inc(v___x_825_);
v___y_816_ = v___x_825_;
goto v___jp_815_;
}
v___jp_815_:
{
lean_object* v___x_817_; uint8_t v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_817_ = lean_unsigned_to_nat(0u);
v___x_818_ = 0;
v___x_819_ = lean_apply_2(v_f_811_, v___y_816_, lean_box(0));
v___x_820_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_817_, v___x_818_, v___x_819_, v___f_812_);
return v___x_820_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___lam__1___boxed(lean_object* v_f_826_, lean_object* v___f_827_, lean_object* v_args_828_, lean_object* v___y_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l_Lasm_Web_App_Port_subscribeAsync___lam__1(v_f_826_, v___f_827_, v_args_828_);
lean_dec_ref(v_args_828_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync(lean_object* v_p_832_, lean_object* v_f_833_){
_start:
{
lean_object* v___f_835_; lean_object* v___f_836_; lean_object* v___x_837_; 
v___f_835_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribeAsync___closed__0));
v___f_836_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_836_, 0, v_f_833_);
lean_closure_set(v___f_836_, 1, v___f_835_);
v___x_837_ = l_Lasm_JS_Function_ofFn(v___f_836_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_a_838_);
lean_dec_ref_known(v___x_837_, 1);
v___x_839_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribe___closed__0));
v___x_840_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_App_Raw_root_spec__0_spec__0___closed__4));
v___x_841_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_841_, 0, v_a_838_);
lean_ctor_set(v___x_841_, 1, v___x_840_);
v___x_842_ = lean_unsigned_to_nat(1u);
v___x_843_ = lean_mk_empty_array_with_capacity(v___x_842_);
v___x_844_ = lean_array_push(v___x_843_, v___x_841_);
v___x_845_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1(v_p_832_, v___x_839_, v___x_844_);
return v___x_845_;
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_p_832_);
v_a_846_ = lean_ctor_get(v___x_837_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_837_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_837_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_837_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_Port_subscribeAsync___boxed(lean_object* v_p_854_, lean_object* v_f_855_, lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lasm_Web_App_Port_subscribeAsync(v_p_854_, v_f_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessage(lean_object* v_f_858_){
_start:
{
lean_object* v___f_860_; lean_object* v___x_861_; 
v___f_860_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_860_, 0, v_f_858_);
v___x_861_ = l_Lasm_Web_callback(v___f_860_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; lean_object* v___x_863_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_861_, 1);
v___x_863_ = l_Lasm_Web_App_Raw_onMessage(v_a_862_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessage___boxed(lean_object* v_f_872_, lean_object* v_a_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lasm_Web_App_onMessage(v_f_872_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessageAsync(lean_object* v_f_875_){
_start:
{
lean_object* v___f_877_; lean_object* v___f_878_; lean_object* v___x_879_; 
v___f_877_ = ((lean_object*)(l_Lasm_Web_App_Port_subscribeAsync___closed__0));
v___f_878_ = lean_alloc_closure((void*)(l_Lasm_Web_App_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_878_, 0, v_f_875_);
lean_closure_set(v___f_878_, 1, v___f_877_);
v___x_879_ = l_Lasm_JS_Function_ofFn(v___f_878_);
if (lean_obj_tag(v___x_879_) == 0)
{
lean_object* v_a_880_; lean_object* v___x_881_; 
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref_known(v___x_879_, 1);
v___x_881_ = l_Lasm_Web_App_Raw_onMessage(v_a_880_);
return v___x_881_;
}
else
{
lean_object* v_a_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
v_a_882_ = lean_ctor_get(v___x_879_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_879_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_879_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_a_882_);
lean_dec(v___x_879_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_a_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onMessageAsync___boxed(lean_object* v_f_890_, lean_object* v_a_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lasm_Web_App_onMessageAsync(v_f_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___lam__0(lean_object* v_f_893_, lean_object* v_x_894_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = lean_apply_1(v_f_893_, lean_box(0));
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___lam__0___boxed(lean_object* v_f_897_, lean_object* v_x_898_, lean_object* v___y_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lasm_Web_App_onUnmount___lam__0(v_f_897_, v_x_898_);
lean_dec_ref(v_x_898_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount(lean_object* v_f_901_){
_start:
{
lean_object* v___f_903_; lean_object* v___x_904_; 
v___f_903_ = lean_alloc_closure((void*)(l_Lasm_Web_App_onUnmount___lam__0___boxed), 3, 1);
lean_closure_set(v___f_903_, 0, v_f_901_);
v___x_904_ = l_Lasm_Web_callback(v___f_903_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v___x_906_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = l_Lasm_Web_App_Raw_onUnmount(v_a_905_);
return v___x_906_;
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_a_907_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_904_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_904_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onUnmount___boxed(lean_object* v_f_915_, lean_object* v_a_916_){
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_Lasm_Web_App_onUnmount(v_f_915_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___redArg(lean_object* v_inst_918_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l_Lasm_Web_App_Raw_hotState();
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_946_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_946_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_946_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_946_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
if (lean_obj_tag(v_a_921_) == 0)
{
lean_object* v___x_925_; lean_object* v___x_927_; 
lean_dec_ref(v_inst_918_);
v___x_925_ = lean_box(0);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_925_);
v___x_927_ = v___x_923_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_925_);
v___x_927_ = v_reuseFailAlloc_928_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
return v___x_927_;
}
}
else
{
lean_object* v_fromJS_929_; lean_object* v___x_930_; 
v_fromJS_929_ = lean_ctor_get(v_inst_918_, 0);
lean_inc_ref(v_fromJS_929_);
lean_dec_ref(v_inst_918_);
v___x_930_ = lean_apply_1(v_fromJS_929_, v_a_921_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_object* v___x_931_; lean_object* v___x_933_; 
lean_dec_ref_known(v___x_930_, 1);
v___x_931_ = lean_box(0);
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_931_);
v___x_933_ = v___x_923_;
goto v_reusejp_932_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v___x_931_);
v___x_933_ = v_reuseFailAlloc_934_;
goto v_reusejp_932_;
}
v_reusejp_932_:
{
return v___x_933_;
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_945_; 
v_a_935_ = lean_ctor_get(v___x_930_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_930_);
if (v_isSharedCheck_945_ == 0)
{
v___x_937_ = v___x_930_;
v_isShared_938_ = v_isSharedCheck_945_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_930_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_945_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_944_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
lean_object* v___x_942_; 
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_940_);
v___x_942_ = v___x_923_;
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
}
}
}
}
else
{
lean_object* v_a_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_954_; 
lean_dec_ref(v_inst_918_);
v_a_947_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_954_ == 0)
{
v___x_949_ = v___x_920_;
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_a_947_);
lean_dec(v___x_920_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_954_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_952_; 
if (v_isShared_950_ == 0)
{
v___x_952_ = v___x_949_;
goto v_reusejp_951_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_a_947_);
v___x_952_ = v_reuseFailAlloc_953_;
goto v_reusejp_951_;
}
v_reusejp_951_:
{
return v___x_952_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___redArg___boxed(lean_object* v_inst_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lasm_Web_App_hotState___redArg(v_inst_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState(lean_object* v_00_u03b1_958_, lean_object* v_inst_959_){
_start:
{
lean_object* v___x_961_; 
v___x_961_ = l_Lasm_Web_App_hotState___redArg(v_inst_959_);
return v___x_961_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_hotState___boxed(lean_object* v_00_u03b1_962_, lean_object* v_inst_963_, lean_object* v_a_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lasm_Web_App_hotState(v_00_u03b1_962_, v_inst_963_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___lam__0(lean_object* v_f_966_, lean_object* v_x_967_){
_start:
{
lean_object* v___x_969_; 
v___x_969_ = lean_apply_1(v_f_966_, lean_box(0));
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___lam__0___boxed(lean_object* v_f_970_, lean_object* v_x_971_, lean_object* v___y_972_){
_start:
{
lean_object* v_res_973_; 
v_res_973_ = l_Lasm_Web_App_onHotSave___lam__0(v_f_970_, v_x_971_);
lean_dec_ref(v_x_971_);
return v_res_973_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave(lean_object* v_f_974_){
_start:
{
lean_object* v___f_976_; lean_object* v___x_977_; 
v___f_976_ = lean_alloc_closure((void*)(l_Lasm_Web_App_onHotSave___lam__0___boxed), 3, 1);
lean_closure_set(v___f_976_, 0, v_f_974_);
v___x_977_ = l_Lasm_JS_Function_ofSyncFn(v___f_976_);
if (lean_obj_tag(v___x_977_) == 0)
{
lean_object* v_a_978_; lean_object* v___x_979_; 
v_a_978_ = lean_ctor_get(v___x_977_, 0);
lean_inc(v_a_978_);
lean_dec_ref_known(v___x_977_, 1);
v___x_979_ = l_Lasm_Web_App_Raw_onHotSave(v_a_978_);
return v___x_979_;
}
else
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_987_; 
v_a_980_ = lean_ctor_get(v___x_977_, 0);
v_isSharedCheck_987_ = !lean_is_exclusive(v___x_977_);
if (v_isSharedCheck_987_ == 0)
{
v___x_982_ = v___x_977_;
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_977_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_987_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_985_; 
if (v_isShared_983_ == 0)
{
v___x_985_ = v___x_982_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v_a_980_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_App_onHotSave___boxed(lean_object* v_f_988_, lean_object* v_a_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lasm_Web_App_onHotSave(v_f_988_);
return v_res_990_;
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
