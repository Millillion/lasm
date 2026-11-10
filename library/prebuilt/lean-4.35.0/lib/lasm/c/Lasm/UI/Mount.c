// Lean compiler output
// Module: Lasm.UI.Mount
// Imports: public import Init public meta import Init public import Lasm.JS.Core public import Lasm.JS.Meta
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
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSUnit;
lean_object* l_Lasm_JS_Value_callMethod___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_instFromJSPort___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_instFromJSPort___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_UI_Mount_instFromJSPort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Mount_instFromJSPort___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Mount_instFromJSPort___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_instFromJSPort___closed__0_value;
static const lean_string_object l_Lasm_UI_Mount_instFromJSPort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.UI.Mount.Port"};
static const lean_object* l_Lasm_UI_Mount_instFromJSPort___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_instFromJSPort___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Mount_instFromJSPort___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_instFromJSPort___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_instFromJSPort___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_instFromJSPort___closed__2 = (const lean_object*)&l_Lasm_UI_Mount_instFromJSPort___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_UI_Mount_instFromJSPort = (const lean_object*)&l_Lasm_UI_Mount_instFromJSPort___closed__2_value;
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_root___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "root"};
static const lean_object* l_Lasm_UI_Mount_Raw_root___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__0_value;
static const lean_string_object l_Lasm_UI_Mount_Raw_root___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:app"};
static const lean_object* l_Lasm_UI_Mount_Raw_root___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_root___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_root___closed__2 = (const lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__2_value;
static const lean_array_object l_Lasm_UI_Mount_Raw_root___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_UI_Mount_Raw_root___closed__3 = (const lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_root();
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_root___boxed(lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_flags___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "flags"};
static const lean_object* l_Lasm_UI_Mount_Raw_flags___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_flags___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_flags___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_flags___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_flags___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_flags___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_flags___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_flags();
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_flags___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_hydrating___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hydrating"};
static const lean_object* l_Lasm_UI_Mount_Raw_hydrating___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_hydrating___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_hydrating___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_hydrating___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_hydrating___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_hydrating___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_hydrating___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hydrating();
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hydrating___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_target___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "target"};
static const lean_object* l_Lasm_UI_Mount_Raw_target___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_target___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_target___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_target___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_target___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_target___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_target___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_target();
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_target___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_port___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "port"};
static const lean_object* l_Lasm_UI_Mount_Raw_port___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_port___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_port___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_port___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_port___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_port___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_port___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_port___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_onMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onMessage"};
static const lean_object* l_Lasm_UI_Mount_Raw_onMessage___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_onMessage___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_onMessage___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_onMessage___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_onMessage___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_onMessage___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_onMessage___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onMessage___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_onUnmount___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onUnmount"};
static const lean_object* l_Lasm_UI_Mount_Raw_onUnmount___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_onUnmount___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_onUnmount___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_onUnmount___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_onUnmount___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_onUnmount___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_onUnmount___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onUnmount(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onUnmount___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_hotState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "hotState"};
static const lean_object* l_Lasm_UI_Mount_Raw_hotState___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_hotState___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_hotState___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_hotState___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_hotState___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_hotState___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_hotState___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hotState();
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hotState___boxed(lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Raw_onHotSave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "onHotSave"};
static const lean_object* l_Lasm_UI_Mount_Raw_onHotSave___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Raw_onHotSave___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Raw_onHotSave___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Raw_onHotSave___closed__0_value),((lean_object*)&l_Lasm_UI_Mount_Raw_root___closed__1_value),((lean_object*)&l_Lasm_UI_Mount_Raw_onHotSave___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_UI_Mount_Raw_onHotSave___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Raw_onHotSave___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onHotSave(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onHotSave___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_root___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Lasm.UI.Mount.root"};
static const lean_object* l_Lasm_UI_Mount_root___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_root___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_flags___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lasm.UI.Mount.flags"};
static const lean_object* l_Lasm_UI_Mount_flags___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_flags___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hydrating();
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hydrating___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_target();
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_target___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_port(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_port___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Port_send___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emit"};
static const lean_object* l_Lasm_UI_Mount_Port_send___redArg___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Port_send___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_UI_Mount_Port_subscribe___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "listen"};
static const lean_object* l_Lasm_UI_Mount_Port_subscribe___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Port_subscribe___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__1 = (const lean_object*)&l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_UI_Mount_Port_subscribeAsync___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___closed__0 = (const lean_object*)&l_Lasm_UI_Mount_Port_subscribeAsync___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessage(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessage___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessageAsync(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessageAsync___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_instFromJSPort___lam__0(lean_object* v_d_4_){
_start:
{
if (lean_obj_tag(v_d_4_) == 9)
{
lean_object* v_value_5_; lean_object* v___x_6_; 
v_value_5_ = lean_ctor_get(v_d_4_, 0);
lean_inc(v_value_5_);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v_value_5_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; 
v___x_7_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__1));
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_instFromJSPort___lam__0___boxed(lean_object* v_d_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lasm_UI_Mount_instFromJSPort___lam__0(v_d_8_);
lean_dec(v_d_8_);
return v_res_9_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2(void){
_start:
{
uint8_t v___x_19_; uint64_t v___x_20_; 
v___x_19_ = 1;
v___x_20_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0(lean_object* v_b_21_, lean_object* v_args_22_, uint8_t v_await_23_){
_start:
{
uint64_t v___y_26_; uint64_t v___y_27_; uint64_t v___x_70_; uint64_t v___y_72_; 
v___x_70_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2);
if (v_await_23_ == 0)
{
uint64_t v___x_77_; 
v___x_77_ = 0ULL;
v___y_72_ = v___x_77_;
goto v___jp_71_;
}
else
{
uint64_t v___x_78_; 
v___x_78_ = 2ULL;
v___y_72_ = v___x_78_;
goto v___jp_71_;
}
v___jp_25_:
{
uint64_t v_flags_28_; uint32_t v___x_29_; lean_object* v___x_30_; uint32_t v___x_31_; lean_object* v___x_32_; 
v_flags_28_ = lean_uint64_lor(v___y_26_, v___y_27_);
v___x_29_ = 214;
v___x_30_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_21_, v_args_22_);
v___x_31_ = 0;
v___x_32_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_29_, v_flags_28_, v___x_30_, v___x_31_);
lean_dec(v___x_30_);
if (lean_obj_tag(v___x_32_) == 0)
{
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; lean_object* v___x_34_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
lean_inc(v_a_33_);
lean_dec_ref_known(v___x_32_, 1);
v___x_34_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_33_);
lean_dec(v_a_33_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v_a_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_a_35_ = lean_ctor_get(v___x_34_, 0);
lean_inc(v_a_35_);
lean_dec_ref_known(v___x_34_, 1);
v___x_36_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_21_);
v___x_37_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_36_, v_a_35_);
lean_dec_ref(v___x_36_);
return v___x_37_;
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_34_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_34_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_34_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_34_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
else
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_53_; 
v_a_46_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_53_ == 0)
{
v___x_48_ = v___x_32_;
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_32_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_53_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
if (v_isShared_49_ == 0)
{
lean_ctor_set_tag(v___x_48_, 1);
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_52_; 
v_reuseFailAlloc_52_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_52_, 0, v_a_46_);
v___x_51_ = v_reuseFailAlloc_52_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
return v___x_51_;
}
}
}
}
else
{
lean_object* v_a_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_69_; 
v_a_54_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_69_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_69_ == 0)
{
v___x_56_ = v___x_32_;
v_isShared_57_ = v_isSharedCheck_69_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_a_54_);
lean_dec(v___x_32_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_69_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; 
v___x_58_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_59_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_21_);
v___x_60_ = lean_string_append(v___x_58_, v___x_59_);
lean_dec_ref(v___x_59_);
v___x_61_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_62_ = lean_string_append(v___x_60_, v___x_61_);
v___x_63_ = lean_io_error_to_string(v_a_54_);
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
lean_dec_ref(v___x_63_);
v___x_65_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 0, v___x_65_);
v___x_67_ = v___x_56_;
goto v_reusejp_66_;
}
else
{
lean_object* v_reuseFailAlloc_68_; 
v_reuseFailAlloc_68_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_68_, 0, v___x_65_);
v___x_67_ = v_reuseFailAlloc_68_;
goto v_reusejp_66_;
}
v_reusejp_66_:
{
return v___x_67_;
}
}
}
}
v___jp_71_:
{
uint8_t v_construct_73_; uint64_t v___x_74_; 
v_construct_73_ = lean_ctor_get_uint8(v_b_21_, sizeof(void*)*4);
v___x_74_ = lean_uint64_lor(v___x_70_, v___y_72_);
if (v_construct_73_ == 0)
{
uint64_t v___x_75_; 
v___x_75_ = 0ULL;
v___y_26_ = v___x_74_;
v___y_27_ = v___x_75_;
goto v___jp_25_;
}
else
{
uint64_t v___x_76_; 
v___x_76_ = 4ULL;
v___y_26_ = v___x_74_;
v___y_27_ = v___x_76_;
goto v___jp_25_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___boxed(lean_object* v_b_79_, lean_object* v_args_80_, lean_object* v_await_81_, lean_object* v_a_82_){
_start:
{
uint8_t v_await_boxed_83_; lean_object* v_res_84_; 
v_await_boxed_83_ = lean_unbox(v_await_81_);
v_res_84_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0(v_b_79_, v_args_80_, v_await_boxed_83_);
lean_dec_ref(v_b_79_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_root(){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; 
v___x_95_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__2));
v___x_96_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_97_ = 1;
v___x_98_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0(v___x_95_, v___x_96_, v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_root___boxed(lean_object* v_a_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lasm_UI_Mount_Raw_root();
return v_res_100_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0(void){
_start:
{
uint8_t v___x_101_; uint64_t v___x_102_; 
v___x_101_ = 0;
v___x_102_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(lean_object* v_b_103_, lean_object* v_args_104_, uint8_t v_await_105_){
_start:
{
uint64_t v___y_108_; uint64_t v___y_109_; uint64_t v___x_149_; uint64_t v___y_151_; 
v___x_149_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_105_ == 0)
{
uint64_t v___x_156_; 
v___x_156_ = 0ULL;
v___y_151_ = v___x_156_;
goto v___jp_150_;
}
else
{
uint64_t v___x_157_; 
v___x_157_ = 2ULL;
v___y_151_ = v___x_157_;
goto v___jp_150_;
}
v___jp_107_:
{
uint64_t v_flags_110_; uint32_t v___x_111_; lean_object* v___x_112_; uint32_t v___x_113_; lean_object* v___x_114_; 
v_flags_110_ = lean_uint64_lor(v___y_108_, v___y_109_);
v___x_111_ = 214;
v___x_112_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_103_, v_args_104_);
v___x_113_ = 0;
v___x_114_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_111_, v_flags_110_, v___x_112_, v___x_113_);
lean_dec(v___x_112_);
if (lean_obj_tag(v___x_114_) == 0)
{
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_116_; 
v_a_115_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_a_115_);
lean_dec_ref_known(v___x_114_, 1);
v___x_116_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_115_);
lean_dec(v_a_115_);
if (lean_obj_tag(v___x_116_) == 0)
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_124_; 
v_a_117_ = lean_ctor_get(v___x_116_, 0);
v_isSharedCheck_124_ = !lean_is_exclusive(v___x_116_);
if (v_isSharedCheck_124_ == 0)
{
v___x_119_ = v___x_116_;
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_116_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_124_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_122_; 
if (v_isShared_120_ == 0)
{
v___x_122_ = v___x_119_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v_a_117_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
else
{
return v___x_116_;
}
}
else
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_132_; 
v_a_125_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_132_ == 0)
{
v___x_127_ = v___x_114_;
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_114_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_132_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_130_; 
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 1);
v___x_130_ = v___x_127_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v_a_125_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
else
{
lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_148_; 
v_a_133_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_148_ == 0)
{
v___x_135_ = v___x_114_;
v_isShared_136_ = v_isSharedCheck_148_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_114_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_148_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_146_; 
v___x_137_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_138_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_103_);
v___x_139_ = lean_string_append(v___x_137_, v___x_138_);
lean_dec_ref(v___x_138_);
v___x_140_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_141_ = lean_string_append(v___x_139_, v___x_140_);
v___x_142_ = lean_io_error_to_string(v_a_133_);
v___x_143_ = lean_string_append(v___x_141_, v___x_142_);
lean_dec_ref(v___x_142_);
v___x_144_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_144_, 0, v___x_143_);
if (v_isShared_136_ == 0)
{
lean_ctor_set(v___x_135_, 0, v___x_144_);
v___x_146_ = v___x_135_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v___x_144_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
v___jp_150_:
{
uint8_t v_construct_152_; uint64_t v___x_153_; 
v_construct_152_ = lean_ctor_get_uint8(v_b_103_, sizeof(void*)*4);
v___x_153_ = lean_uint64_lor(v___x_149_, v___y_151_);
if (v_construct_152_ == 0)
{
uint64_t v___x_154_; 
v___x_154_ = 0ULL;
v___y_108_ = v___x_153_;
v___y_109_ = v___x_154_;
goto v___jp_107_;
}
else
{
uint64_t v___x_155_; 
v___x_155_ = 4ULL;
v___y_108_ = v___x_153_;
v___y_109_ = v___x_155_;
goto v___jp_107_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___boxed(lean_object* v_b_158_, lean_object* v_args_159_, lean_object* v_await_160_, lean_object* v_a_161_){
_start:
{
uint8_t v_await_boxed_162_; lean_object* v_res_163_; 
v_await_boxed_162_ = lean_unbox(v_await_160_);
v_res_163_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v_b_158_, v_args_159_, v_await_boxed_162_);
lean_dec_ref(v_b_158_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_flags(){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; uint8_t v___x_173_; lean_object* v___x_174_; 
v___x_171_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_flags___closed__1));
v___x_172_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_173_ = 1;
v___x_174_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v___x_171_, v___x_172_, v___x_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_flags___boxed(lean_object* v_a_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lasm_UI_Mount_Raw_flags();
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg(lean_object* v_d_177_){
_start:
{
lean_object* v___x_179_; 
v___x_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_179_, 0, v_d_177_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg___boxed(lean_object* v_d_180_, lean_object* v_a_181_){
_start:
{
lean_object* v_res_182_; 
v_res_182_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg(v_d_180_);
return v_res_182_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0(lean_object* v_context_183_, lean_object* v_d_184_){
_start:
{
lean_object* v___x_186_; 
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v_d_184_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___boxed(lean_object* v_context_187_, lean_object* v_d_188_, lean_object* v_a_189_){
_start:
{
lean_object* v_res_190_; 
v_res_190_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0(v_context_187_, v_d_188_);
lean_dec_ref(v_context_187_);
return v_res_190_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_195_ = lean_string_utf8_byte_size(v___x_194_);
return v___x_195_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_196_; lean_object* v___x_197_; uint8_t v___x_198_; 
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3);
v___x_198_ = lean_nat_dec_eq(v___x_197_, v___x_196_);
return v___x_198_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_203_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__8));
v___x_204_ = lean_unsigned_to_nat(46u);
v___x_205_ = lean_unsigned_to_nat(193u);
v___x_206_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7));
v___x_207_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6));
v___x_208_ = l_mkPanicMessageWithDecl(v___x_207_, v___x_206_, v___x_205_, v___x_204_, v___x_203_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0(lean_object* v_context_210_, lean_object* v_d_211_){
_start:
{
lean_object* v___y_214_; lean_object* v___y_215_; 
if (lean_obj_tag(v_d_211_) == 2)
{
uint8_t v_b_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
v_b_219_ = lean_ctor_get_uint8(v_d_211_, 0);
lean_dec_ref_known(v_d_211_, 0);
v___x_220_ = lean_box(v_b_219_);
v___x_221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_221_, 0, v___x_220_);
return v___x_221_;
}
else
{
lean_object* v___x_222_; lean_object* v_received_224_; 
v___x_222_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
if (lean_obj_tag(v_d_211_) == 9)
{
lean_object* v_value_238_; lean_object* v_description_239_; uint8_t v___x_240_; 
v_value_238_ = lean_ctor_get(v_d_211_, 0);
v_description_239_ = lean_ctor_get(v_d_211_, 1);
v___x_240_ = lean_string_dec_eq(v_description_239_, v___x_222_);
if (v___x_240_ == 0)
{
goto v___jp_236_;
}
else
{
uint32_t v___x_241_; uint64_t v___x_242_; lean_object* v___x_243_; uint32_t v___x_244_; lean_object* v___x_245_; 
lean_inc_n(v_value_238_, 2);
lean_dec_ref_known(v_d_211_, 2);
v___x_241_ = 206;
v___x_242_ = 0ULL;
v___x_243_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_243_, 0, v_value_238_);
lean_ctor_set(v___x_243_, 1, v___x_222_);
v___x_244_ = lasm_js_value_handle(v_value_238_);
lean_dec(v_value_238_);
v___x_245_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_241_, v___x_242_, v___x_243_, v___x_244_);
lean_dec_ref_known(v___x_243_, 2);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; uint8_t v___x_247_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref_known(v___x_245_, 1);
v___x_247_ = lean_string_validate_utf8(v_a_246_);
if (v___x_247_ == 0)
{
lean_object* v___x_248_; lean_object* v___x_249_; 
lean_dec(v_a_246_);
v___x_248_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9);
v___x_249_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_248_);
v_received_224_ = v___x_249_;
goto v___jp_223_;
}
else
{
lean_object* v___x_250_; 
v___x_250_ = lean_string_from_utf8_unchecked(v_a_246_);
v_received_224_ = v___x_250_;
goto v___jp_223_;
}
}
else
{
lean_object* v___x_251_; 
lean_dec_ref_known(v___x_245_, 1);
v___x_251_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__10));
v_received_224_ = v___x_251_;
goto v___jp_223_;
}
}
}
else
{
goto v___jp_236_;
}
v___jp_223_:
{
lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_225_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_226_ = lean_string_append(v___x_225_, v_context_210_);
v___x_227_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_228_ = lean_string_append(v___x_226_, v___x_227_);
v___x_229_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__1));
v___x_230_ = lean_string_append(v___x_228_, v___x_229_);
v___x_231_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2));
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___x_233_ = lean_string_append(v___x_232_, v_received_224_);
lean_dec_ref(v_received_224_);
v___x_234_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; 
v___x_235_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5));
v___y_214_ = v___x_233_;
v___y_215_ = v___x_235_;
goto v___jp_213_;
}
else
{
v___y_214_ = v___x_233_;
v___y_215_ = v___x_222_;
goto v___jp_213_;
}
}
v___jp_236_:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lasm_JS_Data_describe(v_d_211_);
v_received_224_ = v___x_237_;
goto v___jp_223_;
}
}
v___jp_213_:
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
v___x_216_ = lean_string_append(v___y_214_, v___y_215_);
v___x_217_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_217_, 0, v___x_216_);
v___x_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
return v___x_218_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___boxed(lean_object* v_context_252_, lean_object* v_d_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0(v_context_252_, v_d_253_);
lean_dec_ref(v_context_252_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0(lean_object* v_b_256_, lean_object* v_args_257_, uint8_t v_await_258_){
_start:
{
uint64_t v___y_261_; uint64_t v___y_262_; uint64_t v___x_305_; uint64_t v___y_307_; 
v___x_305_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_258_ == 0)
{
uint64_t v___x_312_; 
v___x_312_ = 0ULL;
v___y_307_ = v___x_312_;
goto v___jp_306_;
}
else
{
uint64_t v___x_313_; 
v___x_313_ = 2ULL;
v___y_307_ = v___x_313_;
goto v___jp_306_;
}
v___jp_260_:
{
uint64_t v_flags_263_; uint32_t v___x_264_; lean_object* v___x_265_; uint32_t v___x_266_; lean_object* v___x_267_; 
v_flags_263_ = lean_uint64_lor(v___y_261_, v___y_262_);
v___x_264_ = 214;
v___x_265_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_256_, v_args_257_);
v___x_266_ = 0;
v___x_267_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_264_, v_flags_263_, v___x_265_, v___x_266_);
lean_dec(v___x_265_);
if (lean_obj_tag(v___x_267_) == 0)
{
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; lean_object* v___x_269_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
lean_dec_ref_known(v___x_267_, 1);
v___x_269_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_268_);
lean_dec(v_a_268_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v_a_270_; lean_object* v___x_271_; lean_object* v___x_272_; 
v_a_270_ = lean_ctor_get(v___x_269_, 0);
lean_inc(v_a_270_);
lean_dec_ref_known(v___x_269_, 1);
v___x_271_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_256_);
v___x_272_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0(v___x_271_, v_a_270_);
lean_dec_ref(v___x_271_);
return v___x_272_;
}
else
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_a_273_ = lean_ctor_get(v___x_269_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_269_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_269_);
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
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_267_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_267_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
lean_ctor_set_tag(v___x_283_, 1);
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_304_; 
v_a_289_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_304_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_304_ == 0)
{
v___x_291_ = v___x_267_;
v_isShared_292_ = v_isSharedCheck_304_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_267_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_304_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_293_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_294_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_256_);
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
lean_dec_ref(v___x_294_);
v___x_296_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_297_ = lean_string_append(v___x_295_, v___x_296_);
v___x_298_ = lean_io_error_to_string(v_a_289_);
v___x_299_ = lean_string_append(v___x_297_, v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 0, v___x_300_);
v___x_302_ = v___x_291_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_303_; 
v_reuseFailAlloc_303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_303_, 0, v___x_300_);
v___x_302_ = v_reuseFailAlloc_303_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
return v___x_302_;
}
}
}
}
v___jp_306_:
{
uint8_t v_construct_308_; uint64_t v___x_309_; 
v_construct_308_ = lean_ctor_get_uint8(v_b_256_, sizeof(void*)*4);
v___x_309_ = lean_uint64_lor(v___x_305_, v___y_307_);
if (v_construct_308_ == 0)
{
uint64_t v___x_310_; 
v___x_310_ = 0ULL;
v___y_261_ = v___x_309_;
v___y_262_ = v___x_310_;
goto v___jp_260_;
}
else
{
uint64_t v___x_311_; 
v___x_311_ = 4ULL;
v___y_261_ = v___x_309_;
v___y_262_ = v___x_311_;
goto v___jp_260_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0___boxed(lean_object* v_b_314_, lean_object* v_args_315_, lean_object* v_await_316_, lean_object* v_a_317_){
_start:
{
uint8_t v_await_boxed_318_; lean_object* v_res_319_; 
v_await_boxed_318_ = lean_unbox(v_await_316_);
v_res_319_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0(v_b_314_, v_args_315_, v_await_boxed_318_);
lean_dec_ref(v_b_314_);
return v_res_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hydrating(){
_start:
{
lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; lean_object* v___x_330_; 
v___x_327_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_hydrating___closed__1));
v___x_328_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_329_ = 1;
v___x_330_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0(v___x_327_, v___x_328_, v___x_329_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hydrating___boxed(lean_object* v_a_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l_Lasm_UI_Mount_Raw_hydrating();
return v_res_332_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0(lean_object* v_context_334_, lean_object* v_d_335_){
_start:
{
lean_object* v___y_338_; lean_object* v___y_339_; 
if (lean_obj_tag(v_d_335_) == 4)
{
lean_object* v_s_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
v_s_343_ = lean_ctor_get(v_d_335_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v_d_335_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v_d_335_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_s_343_);
lean_dec(v_d_335_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
lean_ctor_set_tag(v___x_345_, 0);
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_s_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
else
{
lean_object* v___x_351_; lean_object* v_received_353_; 
v___x_351_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
if (lean_obj_tag(v_d_335_) == 9)
{
lean_object* v_value_367_; lean_object* v_description_368_; uint8_t v___x_369_; 
v_value_367_ = lean_ctor_get(v_d_335_, 0);
v_description_368_ = lean_ctor_get(v_d_335_, 1);
v___x_369_ = lean_string_dec_eq(v_description_368_, v___x_351_);
if (v___x_369_ == 0)
{
goto v___jp_365_;
}
else
{
uint32_t v___x_370_; uint64_t v___x_371_; lean_object* v___x_372_; uint32_t v___x_373_; lean_object* v___x_374_; 
lean_inc_n(v_value_367_, 2);
lean_dec_ref_known(v_d_335_, 2);
v___x_370_ = 206;
v___x_371_ = 0ULL;
v___x_372_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_372_, 0, v_value_367_);
lean_ctor_set(v___x_372_, 1, v___x_351_);
v___x_373_ = lasm_js_value_handle(v_value_367_);
lean_dec(v_value_367_);
v___x_374_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_370_, v___x_371_, v___x_372_, v___x_373_);
lean_dec_ref_known(v___x_372_, 2);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; uint8_t v___x_376_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v___x_374_, 1);
v___x_376_ = lean_string_validate_utf8(v_a_375_);
if (v___x_376_ == 0)
{
lean_object* v___x_377_; lean_object* v___x_378_; 
lean_dec(v_a_375_);
v___x_377_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9);
v___x_378_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_377_);
v_received_353_ = v___x_378_;
goto v___jp_352_;
}
else
{
lean_object* v___x_379_; 
v___x_379_ = lean_string_from_utf8_unchecked(v_a_375_);
v_received_353_ = v___x_379_;
goto v___jp_352_;
}
}
else
{
lean_object* v___x_380_; 
lean_dec_ref_known(v___x_374_, 1);
v___x_380_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__10));
v_received_353_ = v___x_380_;
goto v___jp_352_;
}
}
}
else
{
goto v___jp_365_;
}
v___jp_352_:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; 
v___x_354_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_355_ = lean_string_append(v___x_354_, v_context_334_);
v___x_356_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_357_ = lean_string_append(v___x_355_, v___x_356_);
v___x_358_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___closed__0));
v___x_359_ = lean_string_append(v___x_357_, v___x_358_);
v___x_360_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2));
v___x_361_ = lean_string_append(v___x_359_, v___x_360_);
v___x_362_ = lean_string_append(v___x_361_, v_received_353_);
lean_dec_ref(v_received_353_);
v___x_363_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4);
if (v___x_363_ == 0)
{
lean_object* v___x_364_; 
v___x_364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5));
v___y_338_ = v___x_362_;
v___y_339_ = v___x_364_;
goto v___jp_337_;
}
else
{
v___y_338_ = v___x_362_;
v___y_339_ = v___x_351_;
goto v___jp_337_;
}
}
v___jp_365_:
{
lean_object* v___x_366_; 
v___x_366_ = l_Lasm_JS_Data_describe(v_d_335_);
v_received_353_ = v___x_366_;
goto v___jp_352_;
}
}
v___jp_337_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_string_append(v___y_338_, v___y_339_);
v___x_341_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
v___x_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
return v___x_342_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___boxed(lean_object* v_context_381_, lean_object* v_d_382_, lean_object* v_a_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0(v_context_381_, v_d_382_);
lean_dec_ref(v_context_381_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0(lean_object* v_b_385_, lean_object* v_args_386_, uint8_t v_await_387_){
_start:
{
uint64_t v___y_390_; uint64_t v___y_391_; uint64_t v___x_434_; uint64_t v___y_436_; 
v___x_434_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_387_ == 0)
{
uint64_t v___x_441_; 
v___x_441_ = 0ULL;
v___y_436_ = v___x_441_;
goto v___jp_435_;
}
else
{
uint64_t v___x_442_; 
v___x_442_ = 2ULL;
v___y_436_ = v___x_442_;
goto v___jp_435_;
}
v___jp_389_:
{
uint64_t v_flags_392_; uint32_t v___x_393_; lean_object* v___x_394_; uint32_t v___x_395_; lean_object* v___x_396_; 
v_flags_392_ = lean_uint64_lor(v___y_390_, v___y_391_);
v___x_393_ = 214;
v___x_394_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_385_, v_args_386_);
v___x_395_ = 0;
v___x_396_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_393_, v_flags_392_, v___x_394_, v___x_395_);
lean_dec(v___x_394_);
if (lean_obj_tag(v___x_396_) == 0)
{
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_398_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
lean_inc(v_a_397_);
lean_dec_ref_known(v___x_396_, 1);
v___x_398_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_397_);
lean_dec(v_a_397_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_a_399_);
lean_dec_ref_known(v___x_398_, 1);
v___x_400_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_385_);
v___x_401_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0(v___x_400_, v_a_399_);
lean_dec_ref(v___x_400_);
return v___x_401_;
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
v_a_402_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_398_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_398_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
v_a_410_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_396_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_396_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set_tag(v___x_412_, 1);
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
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
else
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_433_; 
v_a_418_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_433_ == 0)
{
v___x_420_ = v___x_396_;
v_isShared_421_ = v_isSharedCheck_433_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_396_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_433_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_422_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_423_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_385_);
v___x_424_ = lean_string_append(v___x_422_, v___x_423_);
lean_dec_ref(v___x_423_);
v___x_425_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_426_ = lean_string_append(v___x_424_, v___x_425_);
v___x_427_ = lean_io_error_to_string(v_a_418_);
v___x_428_ = lean_string_append(v___x_426_, v___x_427_);
lean_dec_ref(v___x_427_);
v___x_429_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v___x_429_);
v___x_431_ = v___x_420_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
}
}
v___jp_435_:
{
uint8_t v_construct_437_; uint64_t v___x_438_; 
v_construct_437_ = lean_ctor_get_uint8(v_b_385_, sizeof(void*)*4);
v___x_438_ = lean_uint64_lor(v___x_434_, v___y_436_);
if (v_construct_437_ == 0)
{
uint64_t v___x_439_; 
v___x_439_ = 0ULL;
v___y_390_ = v___x_438_;
v___y_391_ = v___x_439_;
goto v___jp_389_;
}
else
{
uint64_t v___x_440_; 
v___x_440_ = 4ULL;
v___y_390_ = v___x_438_;
v___y_391_ = v___x_440_;
goto v___jp_389_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0___boxed(lean_object* v_b_443_, lean_object* v_args_444_, lean_object* v_await_445_, lean_object* v_a_446_){
_start:
{
uint8_t v_await_boxed_447_; lean_object* v_res_448_; 
v_await_boxed_447_ = lean_unbox(v_await_445_);
v_res_448_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0(v_b_443_, v_args_444_, v_await_boxed_447_);
lean_dec_ref(v_b_443_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_target(){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; uint8_t v___x_458_; lean_object* v___x_459_; 
v___x_456_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_target___closed__1));
v___x_457_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_458_ = 1;
v___x_459_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0(v___x_456_, v___x_457_, v___x_458_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_target___boxed(lean_object* v_a_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lasm_UI_Mount_Raw_target();
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0(lean_object* v_context_462_, lean_object* v_d_463_){
_start:
{
lean_object* v___y_466_; lean_object* v___y_467_; 
if (lean_obj_tag(v_d_463_) == 9)
{
lean_object* v_value_471_; lean_object* v___x_472_; 
v_value_471_ = lean_ctor_get(v_d_463_, 0);
lean_inc(v_value_471_);
lean_dec_ref_known(v_d_463_, 2);
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v_value_471_);
return v___x_472_;
}
else
{
lean_object* v___x_473_; lean_object* v_received_475_; 
v___x_473_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
if (lean_obj_tag(v_d_463_) == 9)
{
lean_object* v_value_489_; lean_object* v_description_490_; uint8_t v___x_491_; 
v_value_489_ = lean_ctor_get(v_d_463_, 0);
v_description_490_ = lean_ctor_get(v_d_463_, 1);
v___x_491_ = lean_string_dec_eq(v_description_490_, v___x_473_);
if (v___x_491_ == 0)
{
goto v___jp_487_;
}
else
{
uint32_t v___x_492_; uint64_t v___x_493_; lean_object* v___x_494_; uint32_t v___x_495_; lean_object* v___x_496_; 
lean_inc_n(v_value_489_, 2);
lean_dec_ref_known(v_d_463_, 2);
v___x_492_ = 206;
v___x_493_ = 0ULL;
v___x_494_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_494_, 0, v_value_489_);
lean_ctor_set(v___x_494_, 1, v___x_473_);
v___x_495_ = lasm_js_value_handle(v_value_489_);
lean_dec(v_value_489_);
v___x_496_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_492_, v___x_493_, v___x_494_, v___x_495_);
lean_dec_ref_known(v___x_494_, 2);
if (lean_obj_tag(v___x_496_) == 0)
{
lean_object* v_a_497_; uint8_t v___x_498_; 
v_a_497_ = lean_ctor_get(v___x_496_, 0);
lean_inc(v_a_497_);
lean_dec_ref_known(v___x_496_, 1);
v___x_498_ = lean_string_validate_utf8(v_a_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; lean_object* v___x_500_; 
lean_dec(v_a_497_);
v___x_499_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__9);
v___x_500_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_499_);
v_received_475_ = v___x_500_;
goto v___jp_474_;
}
else
{
lean_object* v___x_501_; 
v___x_501_ = lean_string_from_utf8_unchecked(v_a_497_);
v_received_475_ = v___x_501_;
goto v___jp_474_;
}
}
else
{
lean_object* v___x_502_; 
lean_dec_ref_known(v___x_496_, 1);
v___x_502_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__10));
v_received_475_ = v___x_502_;
goto v___jp_474_;
}
}
}
else
{
goto v___jp_487_;
}
v___jp_474_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_476_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_477_ = lean_string_append(v___x_476_, v_context_462_);
v___x_478_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_479_ = lean_string_append(v___x_477_, v___x_478_);
v___x_480_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___closed__1));
v___x_481_ = lean_string_append(v___x_479_, v___x_480_);
v___x_482_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2));
v___x_483_ = lean_string_append(v___x_481_, v___x_482_);
v___x_484_ = lean_string_append(v___x_483_, v_received_475_);
lean_dec_ref(v_received_475_);
v___x_485_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; 
v___x_486_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5));
v___y_466_ = v___x_484_;
v___y_467_ = v___x_486_;
goto v___jp_465_;
}
else
{
v___y_466_ = v___x_484_;
v___y_467_ = v___x_473_;
goto v___jp_465_;
}
}
v___jp_487_:
{
lean_object* v___x_488_; 
v___x_488_ = l_Lasm_JS_Data_describe(v_d_463_);
v_received_475_ = v___x_488_;
goto v___jp_474_;
}
}
v___jp_465_:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_468_ = lean_string_append(v___y_466_, v___y_467_);
v___x_469_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
v___x_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_470_, 0, v___x_469_);
return v___x_470_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0___boxed(lean_object* v_context_503_, lean_object* v_d_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0(v_context_503_, v_d_504_);
lean_dec_ref(v_context_503_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0(lean_object* v_b_507_, lean_object* v_args_508_, uint8_t v_await_509_){
_start:
{
uint64_t v___y_512_; uint64_t v___y_513_; uint64_t v___x_556_; uint64_t v___y_558_; 
v___x_556_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2);
if (v_await_509_ == 0)
{
uint64_t v___x_563_; 
v___x_563_ = 0ULL;
v___y_558_ = v___x_563_;
goto v___jp_557_;
}
else
{
uint64_t v___x_564_; 
v___x_564_ = 2ULL;
v___y_558_ = v___x_564_;
goto v___jp_557_;
}
v___jp_511_:
{
uint64_t v_flags_514_; uint32_t v___x_515_; lean_object* v___x_516_; uint32_t v___x_517_; lean_object* v___x_518_; 
v_flags_514_ = lean_uint64_lor(v___y_512_, v___y_513_);
v___x_515_ = 214;
v___x_516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_507_, v_args_508_);
v___x_517_ = 0;
v___x_518_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_515_, v_flags_514_, v___x_516_, v___x_517_);
lean_dec(v___x_516_);
if (lean_obj_tag(v___x_518_) == 0)
{
if (lean_obj_tag(v___x_518_) == 0)
{
lean_object* v_a_519_; lean_object* v___x_520_; 
v_a_519_ = lean_ctor_get(v___x_518_, 0);
lean_inc(v_a_519_);
lean_dec_ref_known(v___x_518_, 1);
v___x_520_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_519_);
lean_dec(v_a_519_);
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
lean_inc(v_a_521_);
lean_dec_ref_known(v___x_520_, 1);
v___x_522_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_507_);
v___x_523_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0(v___x_522_, v_a_521_);
lean_dec_ref(v___x_522_);
return v___x_523_;
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
v_a_524_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_520_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_520_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
v_a_532_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_518_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_518_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 1);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_a_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
else
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_555_; 
v_a_540_ = lean_ctor_get(v___x_518_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_555_ == 0)
{
v___x_542_ = v___x_518_;
v_isShared_543_ = v_isSharedCheck_555_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_518_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_555_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_553_; 
v___x_544_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_545_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_507_);
v___x_546_ = lean_string_append(v___x_544_, v___x_545_);
lean_dec_ref(v___x_545_);
v___x_547_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_548_ = lean_string_append(v___x_546_, v___x_547_);
v___x_549_ = lean_io_error_to_string(v_a_540_);
v___x_550_ = lean_string_append(v___x_548_, v___x_549_);
lean_dec_ref(v___x_549_);
v___x_551_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 0, v___x_551_);
v___x_553_ = v___x_542_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v___x_551_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
v___jp_557_:
{
uint8_t v_construct_559_; uint64_t v___x_560_; 
v_construct_559_ = lean_ctor_get_uint8(v_b_507_, sizeof(void*)*4);
v___x_560_ = lean_uint64_lor(v___x_556_, v___y_558_);
if (v_construct_559_ == 0)
{
uint64_t v___x_561_; 
v___x_561_ = 0ULL;
v___y_512_ = v___x_560_;
v___y_513_ = v___x_561_;
goto v___jp_511_;
}
else
{
uint64_t v___x_562_; 
v___x_562_ = 4ULL;
v___y_512_ = v___x_560_;
v___y_513_ = v___x_562_;
goto v___jp_511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0___boxed(lean_object* v_b_565_, lean_object* v_args_566_, lean_object* v_await_567_, lean_object* v_a_568_){
_start:
{
uint8_t v_await_boxed_569_; lean_object* v_res_570_; 
v_await_boxed_569_ = lean_unbox(v_await_567_);
v_res_570_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0(v_b_565_, v_args_566_, v_await_boxed_569_);
lean_dec_ref(v_b_565_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_port(lean_object* v_a_577_){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; uint8_t v___x_583_; lean_object* v___x_584_; 
v___x_579_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_port___closed__1));
v___x_580_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_581_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_581_, 0, v_a_577_);
v___x_582_ = lean_array_push(v___x_580_, v___x_581_);
v___x_583_ = 1;
v___x_584_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0(v___x_579_, v___x_582_, v___x_583_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_port___boxed(lean_object* v_a_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lasm_UI_Mount_Raw_port(v_a_585_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_box(0);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg___boxed(lean_object* v_a_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v_res_592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(lean_object* v_b_593_, lean_object* v_args_594_, uint8_t v_await_595_){
_start:
{
uint64_t v___y_598_; uint64_t v___y_599_; uint64_t v___x_640_; uint64_t v___y_642_; 
v___x_640_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_595_ == 0)
{
uint64_t v___x_647_; 
v___x_647_ = 0ULL;
v___y_642_ = v___x_647_;
goto v___jp_641_;
}
else
{
uint64_t v___x_648_; 
v___x_648_ = 2ULL;
v___y_642_ = v___x_648_;
goto v___jp_641_;
}
v___jp_597_:
{
uint64_t v_flags_600_; uint32_t v___x_601_; lean_object* v___x_602_; uint32_t v___x_603_; lean_object* v___x_604_; 
v_flags_600_ = lean_uint64_lor(v___y_598_, v___y_599_);
v___x_601_ = 214;
v___x_602_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_593_, v_args_594_);
v___x_603_ = 0;
v___x_604_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_601_, v_flags_600_, v___x_602_, v___x_603_);
lean_dec(v___x_602_);
if (lean_obj_tag(v___x_604_) == 0)
{
if (lean_obj_tag(v___x_604_) == 0)
{
lean_object* v_a_605_; lean_object* v___x_606_; 
v_a_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_604_, 1);
v___x_606_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_605_);
lean_dec(v_a_605_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v___x_607_; 
lean_dec_ref_known(v___x_606_, 1);
v___x_607_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v___x_607_;
}
else
{
lean_object* v_a_608_; lean_object* v___x_610_; uint8_t v_isShared_611_; uint8_t v_isSharedCheck_615_; 
v_a_608_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_615_ == 0)
{
v___x_610_ = v___x_606_;
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
else
{
lean_inc(v_a_608_);
lean_dec(v___x_606_);
v___x_610_ = lean_box(0);
v_isShared_611_ = v_isSharedCheck_615_;
goto v_resetjp_609_;
}
v_resetjp_609_:
{
lean_object* v___x_613_; 
if (v_isShared_611_ == 0)
{
v___x_613_ = v___x_610_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_a_608_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
v_a_616_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_604_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_604_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set_tag(v___x_618_, 1);
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
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
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_639_; 
v_a_624_ = lean_ctor_get(v___x_604_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v___x_604_);
if (v_isSharedCheck_639_ == 0)
{
v___x_626_ = v___x_604_;
v_isShared_627_ = v_isSharedCheck_639_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_604_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_639_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
v___x_628_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_629_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_593_);
v___x_630_ = lean_string_append(v___x_628_, v___x_629_);
lean_dec_ref(v___x_629_);
v___x_631_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_632_ = lean_string_append(v___x_630_, v___x_631_);
v___x_633_ = lean_io_error_to_string(v_a_624_);
v___x_634_ = lean_string_append(v___x_632_, v___x_633_);
lean_dec_ref(v___x_633_);
v___x_635_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_635_);
v___x_637_ = v___x_626_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v___x_635_);
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
v___jp_641_:
{
uint8_t v_construct_643_; uint64_t v___x_644_; 
v_construct_643_ = lean_ctor_get_uint8(v_b_593_, sizeof(void*)*4);
v___x_644_ = lean_uint64_lor(v___x_640_, v___y_642_);
if (v_construct_643_ == 0)
{
uint64_t v___x_645_; 
v___x_645_ = 0ULL;
v___y_598_ = v___x_644_;
v___y_599_ = v___x_645_;
goto v___jp_597_;
}
else
{
uint64_t v___x_646_; 
v___x_646_ = 4ULL;
v___y_598_ = v___x_644_;
v___y_599_ = v___x_646_;
goto v___jp_597_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0___boxed(lean_object* v_b_649_, lean_object* v_args_650_, lean_object* v_await_651_, lean_object* v_a_652_){
_start:
{
uint8_t v_await_boxed_653_; lean_object* v_res_654_; 
v_await_boxed_653_ = lean_unbox(v_await_651_);
v_res_654_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v_b_649_, v_args_650_, v_await_boxed_653_);
lean_dec_ref(v_b_649_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onMessage(lean_object* v_a_661_){
_start:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; lean_object* v___x_669_; 
v___x_663_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_onMessage___closed__1));
v___x_664_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_665_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_666_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_666_, 0, v_a_661_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = lean_array_push(v___x_664_, v___x_666_);
v___x_668_ = 1;
v___x_669_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_663_, v___x_667_, v___x_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onMessage___boxed(lean_object* v_a_670_, lean_object* v_a_671_){
_start:
{
lean_object* v_res_672_; 
v_res_672_ = l_Lasm_UI_Mount_Raw_onMessage(v_a_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0(lean_object* v_context_673_, lean_object* v_d_674_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___boxed(lean_object* v_context_677_, lean_object* v_d_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0(v_context_677_, v_d_678_);
lean_dec(v_d_678_);
lean_dec_ref(v_context_677_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onUnmount(lean_object* v_a_687_){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; uint8_t v___x_694_; lean_object* v___x_695_; 
v___x_689_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_onUnmount___closed__1));
v___x_690_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_691_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_692_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_692_, 0, v_a_687_);
lean_ctor_set(v___x_692_, 1, v___x_691_);
v___x_693_ = lean_array_push(v___x_690_, v___x_692_);
v___x_694_ = 1;
v___x_695_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_689_, v___x_693_, v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onUnmount___boxed(lean_object* v_a_696_, lean_object* v_a_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l_Lasm_UI_Mount_Raw_onUnmount(v_a_696_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hotState(){
_start:
{
lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; lean_object* v___x_709_; 
v___x_706_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_hotState___closed__1));
v___x_707_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_708_ = 1;
v___x_709_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v___x_706_, v___x_707_, v___x_708_);
return v___x_709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hotState___boxed(lean_object* v_a_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lasm_UI_Mount_Raw_hotState();
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onHotSave(lean_object* v_a_718_){
_start:
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; lean_object* v___x_726_; 
v___x_720_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_onHotSave___closed__1));
v___x_721_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_722_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_723_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_723_, 0, v_a_718_);
lean_ctor_set(v___x_723_, 1, v___x_722_);
v___x_724_ = lean_array_push(v___x_721_, v___x_723_);
v___x_725_ = 1;
v___x_726_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_720_, v___x_724_, v___x_725_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onHotSave___boxed(lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lasm_UI_Mount_Raw_onHotSave(v_a_727_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0(lean_object* v_f_730_, lean_object* v_args_731_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = lean_apply_2(v_f_730_, v_args_731_, lean_box(0));
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_741_; 
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_741_ == 0)
{
lean_object* v_unused_742_; 
v_unused_742_ = lean_ctor_get(v___x_733_, 0);
lean_dec(v_unused_742_);
v___x_735_ = v___x_733_;
v_isShared_736_ = v_isSharedCheck_741_;
goto v_resetjp_734_;
}
else
{
lean_dec(v___x_733_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_741_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_737_; lean_object* v___x_739_; 
v___x_737_ = lean_box(0);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 0, v___x_737_);
v___x_739_ = v___x_735_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_737_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
return v___x_739_;
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
v_a_743_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_733_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_733_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0___boxed(lean_object* v_f_751_, lean_object* v_args_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0(v_f_751_, v_args_752_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(lean_object* v_f_755_){
_start:
{
lean_object* v___f_757_; lean_object* v___x_758_; 
v___f_757_ = lean_alloc_closure((void*)(l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0___boxed), 3, 1);
lean_closure_set(v___f_757_, 0, v_f_755_);
v___x_758_ = l_Lasm_JS_Function_ofSyncFn(v___f_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___boxed(lean_object* v_f_759_, lean_object* v_a_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v_f_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___redArg(lean_object* v_inst_763_){
_start:
{
lean_object* v___x_765_; 
v___x_765_ = l_Lasm_UI_Mount_Raw_root();
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_765_, 1);
v___x_767_ = ((lean_object*)(l_Lasm_UI_Mount_root___redArg___closed__0));
v___x_768_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_769_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_769_, 0, v_a_766_);
lean_ctor_set(v___x_769_, 1, v___x_768_);
v___x_770_ = l_Lasm_JS_decodeAs___redArg(v_inst_763_, v___x_767_, v___x_769_);
return v___x_770_;
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v_inst_763_);
v_a_771_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_765_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_765_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
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
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___redArg___boxed(lean_object* v_inst_779_, lean_object* v_a_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lasm_UI_Mount_root___redArg(v_inst_779_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root(lean_object* v_00_u03b1_782_, lean_object* v_inst_783_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = l_Lasm_UI_Mount_root___redArg(v_inst_783_);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___boxed(lean_object* v_00_u03b1_786_, lean_object* v_inst_787_, lean_object* v_a_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = l_Lasm_UI_Mount_root(v_00_u03b1_786_, v_inst_787_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___redArg(lean_object* v_inst_791_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_Lasm_UI_Mount_Raw_flags();
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_a_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_a_794_);
lean_dec_ref_known(v___x_793_, 1);
v___x_795_ = ((lean_object*)(l_Lasm_UI_Mount_flags___redArg___closed__0));
v___x_796_ = l_Lasm_JS_decodeAs___redArg(v_inst_791_, v___x_795_, v_a_794_);
return v___x_796_;
}
else
{
lean_object* v_a_797_; lean_object* v___x_799_; uint8_t v_isShared_800_; uint8_t v_isSharedCheck_804_; 
lean_dec_ref(v_inst_791_);
v_a_797_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_804_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_804_ == 0)
{
v___x_799_ = v___x_793_;
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
else
{
lean_inc(v_a_797_);
lean_dec(v___x_793_);
v___x_799_ = lean_box(0);
v_isShared_800_ = v_isSharedCheck_804_;
goto v_resetjp_798_;
}
v_resetjp_798_:
{
lean_object* v___x_802_; 
if (v_isShared_800_ == 0)
{
v___x_802_ = v___x_799_;
goto v_reusejp_801_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v_a_797_);
v___x_802_ = v_reuseFailAlloc_803_;
goto v_reusejp_801_;
}
v_reusejp_801_:
{
return v___x_802_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___redArg___boxed(lean_object* v_inst_805_, lean_object* v_a_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lasm_UI_Mount_flags___redArg(v_inst_805_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags(lean_object* v_00_u03b1_808_, lean_object* v_inst_809_){
_start:
{
lean_object* v___x_811_; 
v___x_811_ = l_Lasm_UI_Mount_flags___redArg(v_inst_809_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___boxed(lean_object* v_00_u03b1_812_, lean_object* v_inst_813_, lean_object* v_a_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l_Lasm_UI_Mount_flags(v_00_u03b1_812_, v_inst_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hydrating(){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lasm_UI_Mount_Raw_hydrating();
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hydrating___boxed(lean_object* v_a_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lasm_UI_Mount_hydrating();
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_target(){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l_Lasm_UI_Mount_Raw_target();
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_target___boxed(lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lasm_UI_Mount_target();
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_port(lean_object* v_name_824_){
_start:
{
lean_object* v___x_826_; 
v___x_826_ = l_Lasm_UI_Mount_Raw_port(v_name_824_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_port___boxed(lean_object* v_name_827_, lean_object* v_a_828_){
_start:
{
lean_object* v_res_829_; 
v_res_829_ = l_Lasm_UI_Mount_port(v_name_827_);
return v_res_829_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___redArg(lean_object* v_inst_831_, lean_object* v_p_832_, lean_object* v_value_833_){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_835_ = l_Lasm_JS_instFromJSUnit;
v___x_836_ = ((lean_object*)(l_Lasm_UI_Mount_Port_send___redArg___closed__0));
v___x_837_ = lean_apply_1(v_inst_831_, v_value_833_);
v___x_838_ = lean_unsigned_to_nat(1u);
v___x_839_ = lean_mk_empty_array_with_capacity(v___x_838_);
v___x_840_ = lean_array_push(v___x_839_, v___x_837_);
v___x_841_ = l_Lasm_JS_Value_callMethod___redArg(v_p_832_, v___x_836_, v___x_840_, v___x_835_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___redArg___boxed(lean_object* v_inst_842_, lean_object* v_p_843_, lean_object* v_value_844_, lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lasm_UI_Mount_Port_send___redArg(v_inst_842_, v_p_843_, v_value_844_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send(lean_object* v_00_u03b1_847_, lean_object* v_inst_848_, lean_object* v_p_849_, lean_object* v_value_850_){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = l_Lasm_UI_Mount_Port_send___redArg(v_inst_848_, v_p_849_, v_value_850_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___boxed(lean_object* v_00_u03b1_853_, lean_object* v_inst_854_, lean_object* v_p_855_, lean_object* v_value_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lasm_UI_Mount_Port_send(v_00_u03b1_853_, v_inst_854_, v_p_855_, v_value_856_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___lam__0(lean_object* v_f_859_, lean_object* v_args_860_){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_array_get_size(v_args_860_);
v___x_864_ = lean_nat_dec_lt(v___x_862_, v___x_863_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_865_ = lean_box(0);
v___x_866_ = lean_apply_2(v_f_859_, v___x_865_, lean_box(0));
return v___x_866_;
}
else
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_array_fget_borrowed(v_args_860_, v___x_862_);
lean_inc(v___x_867_);
v___x_868_ = lean_apply_2(v_f_859_, v___x_867_, lean_box(0));
return v___x_868_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___lam__0___boxed(lean_object* v_f_869_, lean_object* v_args_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lasm_UI_Mount_Port_subscribe___lam__0(v_f_869_, v_args_870_);
lean_dec_ref(v_args_870_);
return v_res_872_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0(uint8_t v_await_873_, uint64_t v_extra_874_){
_start:
{
uint64_t v___x_875_; uint64_t v___y_877_; 
v___x_875_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_873_ == 0)
{
uint64_t v___x_880_; 
v___x_880_ = 0ULL;
v___y_877_ = v___x_880_;
goto v___jp_876_;
}
else
{
uint64_t v___x_881_; 
v___x_881_ = 2ULL;
v___y_877_ = v___x_881_;
goto v___jp_876_;
}
v___jp_876_:
{
uint64_t v___x_878_; uint64_t v___x_879_; 
v___x_878_ = lean_uint64_lor(v___x_875_, v___y_877_);
v___x_879_ = lean_uint64_lor(v___x_878_, v_extra_874_);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0___boxed(lean_object* v_await_882_, lean_object* v_extra_883_){
_start:
{
uint8_t v_await_boxed_884_; uint64_t v_extra_boxed_885_; uint64_t v_res_886_; lean_object* v_r_887_; 
v_await_boxed_884_ = lean_unbox(v_await_882_);
v_extra_boxed_885_ = lean_unbox_uint64(v_extra_883_);
lean_dec_ref(v_extra_883_);
v_res_886_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0(v_await_boxed_884_, v_extra_boxed_885_);
v_r_887_ = lean_box_uint64(v_res_886_);
return v_r_887_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(lean_object* v_bytes_888_){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_888_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v___x_891_; 
lean_dec_ref_known(v___x_890_, 1);
v___x_891_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v___x_891_;
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
v_a_892_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_890_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_890_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_900_, lean_object* v_a_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(v_bytes_900_);
lean_dec_ref(v_bytes_900_);
return v_res_902_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0(void){
_start:
{
uint64_t v___x_903_; uint8_t v___x_904_; uint64_t v___x_905_; 
v___x_903_ = 8ULL;
v___x_904_ = 0;
v___x_905_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0(v___x_904_, v___x_903_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(lean_object* v_o_906_, lean_object* v_name_907_, lean_object* v_args_908_){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; uint64_t v___x_913_; lean_object* v___x_914_; 
v___x_910_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_911_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_911_, 0, v_o_906_);
lean_ctor_set(v___x_911_, 1, v___x_910_);
v___x_912_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_912_, 0, v_name_907_);
v___x_913_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0);
v___x_914_ = l_Lasm_JS_Value_invokeRaw(v___x_911_, v___x_912_, v_args_908_, v___x_913_);
if (lean_obj_tag(v___x_914_) == 0)
{
lean_object* v_a_915_; lean_object* v___x_916_; 
v_a_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_a_915_);
lean_dec_ref_known(v___x_914_, 1);
v___x_916_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(v_a_915_);
lean_dec(v_a_915_);
return v___x_916_;
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
v_a_917_ = lean_ctor_get(v___x_914_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_914_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_914_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_914_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___boxed(lean_object* v_o_925_, lean_object* v_name_926_, lean_object* v_args_927_, lean_object* v_a_928_){
_start:
{
lean_object* v_res_929_; 
v_res_929_ = l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(v_o_925_, v_name_926_, v_args_927_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe(lean_object* v_p_931_, lean_object* v_f_932_){
_start:
{
lean_object* v___f_934_; lean_object* v___x_935_; 
v___f_934_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_934_, 0, v_f_932_);
v___x_935_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v___f_934_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
v___x_937_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribe___closed__0));
v___x_938_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_939_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_939_, 0, v_a_936_);
lean_ctor_set(v___x_939_, 1, v___x_938_);
v___x_940_ = lean_unsigned_to_nat(1u);
v___x_941_ = lean_mk_empty_array_with_capacity(v___x_940_);
v___x_942_ = lean_array_push(v___x_941_, v___x_939_);
v___x_943_ = l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(v_p_931_, v___x_937_, v___x_942_);
return v___x_943_;
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
lean_dec(v_p_931_);
v_a_944_ = lean_ctor_get(v___x_935_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_935_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_935_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_935_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___boxed(lean_object* v_p_952_, lean_object* v_f_953_, lean_object* v_a_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lasm_UI_Mount_Port_subscribe(v_p_952_, v_f_953_);
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1(lean_object* v_context_956_, lean_object* v_bytes_957_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(v_bytes_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___boxed(lean_object* v_context_960_, lean_object* v_bytes_961_, lean_object* v_a_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1(v_context_960_, v_bytes_961_);
lean_dec_ref(v_bytes_961_);
lean_dec_ref(v_context_960_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0(lean_object* v_x_968_){
_start:
{
if (lean_obj_tag(v_x_968_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_978_; 
v_a_970_ = lean_ctor_get(v_x_968_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v_x_968_);
if (v_isSharedCheck_978_ == 0)
{
v___x_972_ = v_x_968_;
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v_x_968_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_977_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
lean_object* v___x_976_; 
v___x_976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
return v___x_976_;
}
}
}
else
{
lean_object* v___x_979_; 
lean_dec_ref_known(v_x_968_, 1);
v___x_979_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__1));
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___boxed(lean_object* v_x_980_, lean_object* v___y_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_UI_Mount_Port_subscribeAsync___lam__0(v_x_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__1(lean_object* v_f_983_, lean_object* v___f_984_, lean_object* v_args_985_){
_start:
{
lean_object* v___y_988_; lean_object* v___x_993_; lean_object* v___x_994_; uint8_t v___x_995_; 
v___x_993_ = lean_unsigned_to_nat(0u);
v___x_994_ = lean_array_get_size(v_args_985_);
v___x_995_ = lean_nat_dec_lt(v___x_993_, v___x_994_);
if (v___x_995_ == 0)
{
lean_object* v___x_996_; 
v___x_996_ = lean_box(0);
v___y_988_ = v___x_996_;
goto v___jp_987_;
}
else
{
lean_object* v___x_997_; 
v___x_997_ = lean_array_fget_borrowed(v_args_985_, v___x_993_);
lean_inc(v___x_997_);
v___y_988_ = v___x_997_;
goto v___jp_987_;
}
v___jp_987_:
{
lean_object* v___x_989_; uint8_t v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_989_ = lean_unsigned_to_nat(0u);
v___x_990_ = 0;
v___x_991_ = lean_apply_2(v_f_983_, v___y_988_, lean_box(0));
v___x_992_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_989_, v___x_990_, v___x_991_, v___f_984_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__1___boxed(lean_object* v_f_998_, lean_object* v___f_999_, lean_object* v_args_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l_Lasm_UI_Mount_Port_subscribeAsync___lam__1(v_f_998_, v___f_999_, v_args_1000_);
lean_dec_ref(v_args_1000_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync(lean_object* v_p_1004_, lean_object* v_f_1005_){
_start:
{
lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___x_1009_; 
v___f_1007_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribeAsync___closed__0));
v___f_1008_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1008_, 0, v_f_1005_);
lean_closure_set(v___f_1008_, 1, v___f_1007_);
v___x_1009_ = l_Lasm_JS_Function_ofFn(v___f_1008_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
lean_dec_ref_known(v___x_1009_, 1);
v___x_1011_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribe___closed__0));
v___x_1012_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_1013_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1013_, 0, v_a_1010_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = lean_unsigned_to_nat(1u);
v___x_1015_ = lean_mk_empty_array_with_capacity(v___x_1014_);
v___x_1016_ = lean_array_push(v___x_1015_, v___x_1013_);
v___x_1017_ = l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(v_p_1004_, v___x_1011_, v___x_1016_);
return v___x_1017_;
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
lean_dec(v_p_1004_);
v_a_1018_ = lean_ctor_get(v___x_1009_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_1009_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_1009_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_1009_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___boxed(lean_object* v_p_1026_, lean_object* v_f_1027_, lean_object* v_a_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Lasm_UI_Mount_Port_subscribeAsync(v_p_1026_, v_f_1027_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessage(lean_object* v_f_1030_){
_start:
{
lean_object* v___f_1032_; lean_object* v___x_1033_; 
v___f_1032_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1032_, 0, v_f_1030_);
v___x_1033_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v___f_1032_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1035_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref_known(v___x_1033_, 1);
v___x_1035_ = l_Lasm_UI_Mount_Raw_onMessage(v_a_1034_);
return v___x_1035_;
}
else
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1043_; 
v_a_1036_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1043_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1043_ == 0)
{
v___x_1038_ = v___x_1033_;
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1033_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1043_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v___x_1041_; 
if (v_isShared_1039_ == 0)
{
v___x_1041_ = v___x_1038_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1042_; 
v_reuseFailAlloc_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1042_, 0, v_a_1036_);
v___x_1041_ = v_reuseFailAlloc_1042_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
return v___x_1041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessage___boxed(lean_object* v_f_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_res_1046_; 
v_res_1046_ = l_Lasm_UI_Mount_onMessage(v_f_1044_);
return v_res_1046_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessageAsync(lean_object* v_f_1047_){
_start:
{
lean_object* v___f_1049_; lean_object* v___f_1050_; lean_object* v___x_1051_; 
v___f_1049_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribeAsync___closed__0));
v___f_1050_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1050_, 0, v_f_1047_);
lean_closure_set(v___f_1050_, 1, v___f_1049_);
v___x_1051_ = l_Lasm_JS_Function_ofFn(v___f_1050_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_object* v_a_1052_; lean_object* v___x_1053_; 
v_a_1052_ = lean_ctor_get(v___x_1051_, 0);
lean_inc(v_a_1052_);
lean_dec_ref_known(v___x_1051_, 1);
v___x_1053_ = l_Lasm_UI_Mount_Raw_onMessage(v_a_1052_);
return v___x_1053_;
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_a_1054_ = lean_ctor_get(v___x_1051_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1051_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1051_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1051_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessageAsync___boxed(lean_object* v_f_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lasm_UI_Mount_onMessageAsync(v_f_1062_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___lam__0(lean_object* v_f_1065_, lean_object* v_x_1066_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_apply_1(v_f_1065_, lean_box(0));
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___lam__0___boxed(lean_object* v_f_1069_, lean_object* v_x_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lasm_UI_Mount_onUnmount___lam__0(v_f_1069_, v_x_1070_);
lean_dec_ref(v_x_1070_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount(lean_object* v_f_1073_){
_start:
{
lean_object* v___f_1075_; lean_object* v___x_1076_; 
v___f_1075_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_onUnmount___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1075_, 0, v_f_1073_);
v___x_1076_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v___f_1075_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1078_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref_known(v___x_1076_, 1);
v___x_1078_ = l_Lasm_UI_Mount_Raw_onUnmount(v_a_1077_);
return v___x_1078_;
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
v_a_1079_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1076_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1076_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___boxed(lean_object* v_f_1087_, lean_object* v_a_1088_){
_start:
{
lean_object* v_res_1089_; 
v_res_1089_ = l_Lasm_UI_Mount_onUnmount(v_f_1087_);
return v_res_1089_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___redArg(lean_object* v_inst_1090_){
_start:
{
lean_object* v___x_1092_; 
v___x_1092_ = l_Lasm_UI_Mount_Raw_hotState();
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1095_; uint8_t v_isShared_1096_; uint8_t v_isSharedCheck_1118_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1118_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1118_ == 0)
{
v___x_1095_ = v___x_1092_;
v_isShared_1096_ = v_isSharedCheck_1118_;
goto v_resetjp_1094_;
}
else
{
lean_inc(v_a_1093_);
lean_dec(v___x_1092_);
v___x_1095_ = lean_box(0);
v_isShared_1096_ = v_isSharedCheck_1118_;
goto v_resetjp_1094_;
}
v_resetjp_1094_:
{
if (lean_obj_tag(v_a_1093_) == 0)
{
lean_object* v___x_1097_; lean_object* v___x_1099_; 
lean_dec_ref(v_inst_1090_);
v___x_1097_ = lean_box(0);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1097_);
v___x_1099_ = v___x_1095_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
else
{
lean_object* v_fromJS_1101_; lean_object* v___x_1102_; 
v_fromJS_1101_ = lean_ctor_get(v_inst_1090_, 0);
lean_inc_ref(v_fromJS_1101_);
lean_dec_ref(v_inst_1090_);
v___x_1102_ = lean_apply_1(v_fromJS_1101_, v_a_1093_);
if (lean_obj_tag(v___x_1102_) == 0)
{
lean_object* v___x_1103_; lean_object* v___x_1105_; 
lean_dec_ref_known(v___x_1102_, 1);
v___x_1103_ = lean_box(0);
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1103_);
v___x_1105_ = v___x_1095_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1103_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
else
{
lean_object* v_a_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1117_; 
v_a_1107_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1109_ = v___x_1102_;
v_isShared_1110_ = v_isSharedCheck_1117_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_a_1107_);
lean_dec(v___x_1102_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1117_;
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
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1107_);
v___x_1112_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1114_; 
if (v_isShared_1096_ == 0)
{
lean_ctor_set(v___x_1095_, 0, v___x_1112_);
v___x_1114_ = v___x_1095_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1126_; 
lean_dec_ref(v_inst_1090_);
v_a_1119_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1126_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1121_ = v___x_1092_;
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1092_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1126_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1124_; 
if (v_isShared_1122_ == 0)
{
v___x_1124_ = v___x_1121_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1125_; 
v_reuseFailAlloc_1125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1125_, 0, v_a_1119_);
v___x_1124_ = v_reuseFailAlloc_1125_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
return v___x_1124_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___redArg___boxed(lean_object* v_inst_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lasm_UI_Mount_hotState___redArg(v_inst_1127_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState(lean_object* v_00_u03b1_1130_, lean_object* v_inst_1131_){
_start:
{
lean_object* v___x_1133_; 
v___x_1133_ = l_Lasm_UI_Mount_hotState___redArg(v_inst_1131_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___boxed(lean_object* v_00_u03b1_1134_, lean_object* v_inst_1135_, lean_object* v_a_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lasm_UI_Mount_hotState(v_00_u03b1_1134_, v_inst_1135_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___lam__0(lean_object* v_f_1138_, lean_object* v_x_1139_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = lean_apply_1(v_f_1138_, lean_box(0));
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___lam__0___boxed(lean_object* v_f_1142_, lean_object* v_x_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_Lasm_UI_Mount_onHotSave___lam__0(v_f_1142_, v_x_1143_);
lean_dec_ref(v_x_1143_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave(lean_object* v_f_1146_){
_start:
{
lean_object* v___f_1148_; lean_object* v___x_1149_; 
v___f_1148_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_onHotSave___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1148_, 0, v_f_1146_);
v___x_1149_ = l_Lasm_JS_Function_ofSyncFn(v___f_1148_);
if (lean_obj_tag(v___x_1149_) == 0)
{
lean_object* v_a_1150_; lean_object* v___x_1151_; 
v_a_1150_ = lean_ctor_get(v___x_1149_, 0);
lean_inc(v_a_1150_);
lean_dec_ref_known(v___x_1149_, 1);
v___x_1151_ = l_Lasm_UI_Mount_Raw_onHotSave(v_a_1150_);
return v___x_1151_;
}
else
{
lean_object* v_a_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1159_; 
v_a_1152_ = lean_ctor_get(v___x_1149_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1149_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1154_ = v___x_1149_;
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_a_1152_);
lean_dec(v___x_1149_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1159_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v___x_1157_; 
if (v_isShared_1155_ == 0)
{
v___x_1157_ = v___x_1154_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_a_1152_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___boxed(lean_object* v_f_1160_, lean_object* v_a_1161_){
_start:
{
lean_object* v_res_1162_; 
v_res_1162_ = l_Lasm_UI_Mount_onHotSave(v_f_1160_);
return v_res_1162_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_UI_Mount(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
