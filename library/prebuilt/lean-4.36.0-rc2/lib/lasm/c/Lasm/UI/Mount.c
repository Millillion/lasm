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
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7_value;
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
uint64_t v___y_26_; uint64_t v___y_27_; uint64_t v___x_62_; uint64_t v___y_64_; 
v___x_62_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2);
if (v_await_23_ == 0)
{
uint64_t v___x_69_; 
v___x_69_ = 0ULL;
v___y_64_ = v___x_69_;
goto v___jp_63_;
}
else
{
uint64_t v___x_70_; 
v___x_70_ = 2ULL;
v___y_64_ = v___x_70_;
goto v___jp_63_;
}
v___jp_25_:
{
uint64_t v_flags_28_; uint32_t v___x_29_; lean_object* v___x_30_; uint32_t v___x_31_; lean_object* v___x_32_; 
v_flags_28_ = lean_uint64_lor(v___y_26_, v___y_27_);
v___x_29_ = 214;
v___x_30_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_21_, v_args_22_);
v___x_31_ = 0;
v___x_32_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_29_, v_flags_28_, v___x_30_, v___x_31_);
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
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_61_; 
v_a_46_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_61_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_61_ == 0)
{
v___x_48_ = v___x_32_;
v_isShared_49_ = v_isSharedCheck_61_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_32_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_61_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_59_; 
v___x_50_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_51_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_21_);
v___x_52_ = lean_string_append(v___x_50_, v___x_51_);
lean_dec_ref(v___x_51_);
v___x_53_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_54_ = lean_string_append(v___x_52_, v___x_53_);
v___x_55_ = lean_io_error_to_string(v_a_46_);
v___x_56_ = lean_string_append(v___x_54_, v___x_55_);
lean_dec_ref(v___x_55_);
v___x_57_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v___x_57_);
v___x_59_ = v___x_48_;
goto v_reusejp_58_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_57_);
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
v___jp_63_:
{
uint8_t v_construct_65_; uint64_t v___x_66_; 
v_construct_65_ = lean_ctor_get_uint8(v_b_21_, sizeof(void*)*4);
v___x_66_ = lean_uint64_lor(v___x_62_, v___y_64_);
if (v_construct_65_ == 0)
{
uint64_t v___x_67_; 
v___x_67_ = 0ULL;
v___y_26_ = v___x_66_;
v___y_27_ = v___x_67_;
goto v___jp_25_;
}
else
{
uint64_t v___x_68_; 
v___x_68_ = 4ULL;
v___y_26_ = v___x_66_;
v___y_27_ = v___x_68_;
goto v___jp_25_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___boxed(lean_object* v_b_71_, lean_object* v_args_72_, lean_object* v_await_73_, lean_object* v_a_74_){
_start:
{
uint8_t v_await_boxed_75_; lean_object* v_res_76_; 
v_await_boxed_75_ = lean_unbox(v_await_73_);
v_res_76_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0(v_b_71_, v_args_72_, v_await_boxed_75_);
lean_dec_ref(v_b_71_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_root(){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; uint8_t v___x_89_; lean_object* v___x_90_; 
v___x_87_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__2));
v___x_88_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_89_ = 1;
v___x_90_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0(v___x_87_, v___x_88_, v___x_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_root___boxed(lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lasm_UI_Mount_Raw_root();
return v_res_92_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0(void){
_start:
{
uint8_t v___x_93_; uint64_t v___x_94_; 
v___x_93_ = 0;
v___x_94_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(lean_object* v_b_95_, lean_object* v_args_96_, uint8_t v_await_97_){
_start:
{
uint64_t v___y_100_; uint64_t v___y_101_; uint64_t v___x_133_; uint64_t v___y_135_; 
v___x_133_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_97_ == 0)
{
uint64_t v___x_140_; 
v___x_140_ = 0ULL;
v___y_135_ = v___x_140_;
goto v___jp_134_;
}
else
{
uint64_t v___x_141_; 
v___x_141_ = 2ULL;
v___y_135_ = v___x_141_;
goto v___jp_134_;
}
v___jp_99_:
{
uint64_t v_flags_102_; uint32_t v___x_103_; lean_object* v___x_104_; uint32_t v___x_105_; lean_object* v___x_106_; 
v_flags_102_ = lean_uint64_lor(v___y_100_, v___y_101_);
v___x_103_ = 214;
v___x_104_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_95_, v_args_96_);
v___x_105_ = 0;
v___x_106_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_103_, v_flags_102_, v___x_104_, v___x_105_);
if (lean_obj_tag(v___x_106_) == 0)
{
lean_object* v_a_107_; lean_object* v___x_108_; 
v_a_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc(v_a_107_);
lean_dec_ref_known(v___x_106_, 1);
v___x_108_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_107_);
lean_dec(v_a_107_);
if (lean_obj_tag(v___x_108_) == 0)
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
v_a_109_ = lean_ctor_get(v___x_108_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_108_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_108_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_108_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
else
{
return v___x_108_;
}
}
else
{
lean_object* v_a_117_; lean_object* v___x_119_; uint8_t v_isShared_120_; uint8_t v_isSharedCheck_132_; 
v_a_117_ = lean_ctor_get(v___x_106_, 0);
v_isSharedCheck_132_ = !lean_is_exclusive(v___x_106_);
if (v_isSharedCheck_132_ == 0)
{
v___x_119_ = v___x_106_;
v_isShared_120_ = v_isSharedCheck_132_;
goto v_resetjp_118_;
}
else
{
lean_inc(v_a_117_);
lean_dec(v___x_106_);
v___x_119_ = lean_box(0);
v_isShared_120_ = v_isSharedCheck_132_;
goto v_resetjp_118_;
}
v_resetjp_118_:
{
lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_121_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_122_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_95_);
v___x_123_ = lean_string_append(v___x_121_, v___x_122_);
lean_dec_ref(v___x_122_);
v___x_124_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_125_ = lean_string_append(v___x_123_, v___x_124_);
v___x_126_ = lean_io_error_to_string(v_a_117_);
v___x_127_ = lean_string_append(v___x_125_, v___x_126_);
lean_dec_ref(v___x_126_);
v___x_128_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
if (v_isShared_120_ == 0)
{
lean_ctor_set(v___x_119_, 0, v___x_128_);
v___x_130_ = v___x_119_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_128_);
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
v___jp_134_:
{
uint8_t v_construct_136_; uint64_t v___x_137_; 
v_construct_136_ = lean_ctor_get_uint8(v_b_95_, sizeof(void*)*4);
v___x_137_ = lean_uint64_lor(v___x_133_, v___y_135_);
if (v_construct_136_ == 0)
{
uint64_t v___x_138_; 
v___x_138_ = 0ULL;
v___y_100_ = v___x_137_;
v___y_101_ = v___x_138_;
goto v___jp_99_;
}
else
{
uint64_t v___x_139_; 
v___x_139_ = 4ULL;
v___y_100_ = v___x_137_;
v___y_101_ = v___x_139_;
goto v___jp_99_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___boxed(lean_object* v_b_142_, lean_object* v_args_143_, lean_object* v_await_144_, lean_object* v_a_145_){
_start:
{
uint8_t v_await_boxed_146_; lean_object* v_res_147_; 
v_await_boxed_146_ = lean_unbox(v_await_144_);
v_res_147_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v_b_142_, v_args_143_, v_await_boxed_146_);
lean_dec_ref(v_b_142_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_flags(){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; uint8_t v___x_157_; lean_object* v___x_158_; 
v___x_155_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_flags___closed__1));
v___x_156_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_157_ = 1;
v___x_158_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v___x_155_, v___x_156_, v___x_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_flags___boxed(lean_object* v_a_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lasm_UI_Mount_Raw_flags();
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg(lean_object* v_d_161_){
_start:
{
lean_object* v___x_163_; 
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v_d_161_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg___boxed(lean_object* v_d_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___redArg(v_d_164_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0(lean_object* v_context_167_, lean_object* v_d_168_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v_d_168_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0___boxed(lean_object* v_context_171_, lean_object* v_d_172_, lean_object* v_a_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0_spec__0(v_context_171_, v_d_172_);
lean_dec_ref(v_context_171_);
return v_res_174_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_181_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__5));
v___x_182_ = lean_unsigned_to_nat(46u);
v___x_183_ = lean_unsigned_to_nat(193u);
v___x_184_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__4));
v___x_185_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__3));
v___x_186_ = l_mkPanicMessageWithDecl(v___x_185_, v___x_184_, v___x_183_, v___x_182_, v___x_181_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0(lean_object* v_context_188_, lean_object* v_d_189_){
_start:
{
lean_object* v_received_192_; 
if (lean_obj_tag(v_d_189_) == 2)
{
uint8_t v_b_206_; lean_object* v___x_207_; lean_object* v___x_208_; 
v_b_206_ = lean_ctor_get_uint8(v_d_189_, 0);
lean_dec_ref_known(v_d_189_, 0);
v___x_207_ = lean_box(v_b_206_);
v___x_208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
else
{
if (lean_obj_tag(v_d_189_) == 9)
{
lean_object* v_value_209_; lean_object* v_description_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v_value_209_ = lean_ctor_get(v_d_189_, 0);
v_description_210_ = lean_ctor_get(v_d_189_, 1);
v___x_211_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_212_ = lean_string_dec_eq(v_description_210_, v___x_211_);
if (v___x_212_ == 0)
{
goto v___jp_204_;
}
else
{
uint32_t v___x_213_; uint64_t v___x_214_; lean_object* v___x_215_; uint32_t v___x_216_; lean_object* v___x_217_; 
lean_inc_n(v_value_209_, 2);
lean_dec_ref_known(v_d_189_, 2);
v___x_213_ = 206;
v___x_214_ = 0ULL;
v___x_215_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_215_, 0, v_value_209_);
lean_ctor_set(v___x_215_, 1, v___x_211_);
v___x_216_ = lasm_js_value_handle(v_value_209_);
lean_dec(v_value_209_);
v___x_217_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_213_, v___x_214_, v___x_215_, v___x_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; uint8_t v___x_219_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
lean_inc(v_a_218_);
lean_dec_ref_known(v___x_217_, 1);
v___x_219_ = lean_string_validate_utf8(v_a_218_);
if (v___x_219_ == 0)
{
lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec(v_a_218_);
v___x_220_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6);
v___x_221_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_220_);
v_received_192_ = v___x_221_;
goto v___jp_191_;
}
else
{
lean_object* v___x_222_; 
v___x_222_ = lean_string_from_utf8_unchecked(v_a_218_);
v_received_192_ = v___x_222_;
goto v___jp_191_;
}
}
else
{
lean_object* v___x_223_; 
lean_dec_ref_known(v___x_217_, 1);
v___x_223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7));
v_received_192_ = v___x_223_;
goto v___jp_191_;
}
}
}
else
{
goto v___jp_204_;
}
}
v___jp_191_:
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_193_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_194_ = lean_string_append(v___x_193_, v_context_188_);
v___x_195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_196_ = lean_string_append(v___x_194_, v___x_195_);
v___x_197_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__1));
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
v___x_199_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2));
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
v___x_201_ = lean_string_append(v___x_200_, v_received_192_);
lean_dec_ref(v_received_192_);
v___x_202_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
v___x_203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
return v___x_203_;
}
v___jp_204_:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lasm_JS_Data_describe(v_d_189_);
v_received_192_ = v___x_205_;
goto v___jp_191_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___boxed(lean_object* v_context_224_, lean_object* v_d_225_, lean_object* v_a_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0(v_context_224_, v_d_225_);
lean_dec_ref(v_context_224_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0(lean_object* v_b_228_, lean_object* v_args_229_, uint8_t v_await_230_){
_start:
{
uint64_t v___y_233_; uint64_t v___y_234_; uint64_t v___x_269_; uint64_t v___y_271_; 
v___x_269_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_230_ == 0)
{
uint64_t v___x_276_; 
v___x_276_ = 0ULL;
v___y_271_ = v___x_276_;
goto v___jp_270_;
}
else
{
uint64_t v___x_277_; 
v___x_277_ = 2ULL;
v___y_271_ = v___x_277_;
goto v___jp_270_;
}
v___jp_232_:
{
uint64_t v_flags_235_; uint32_t v___x_236_; lean_object* v___x_237_; uint32_t v___x_238_; lean_object* v___x_239_; 
v_flags_235_ = lean_uint64_lor(v___y_233_, v___y_234_);
v___x_236_ = 214;
v___x_237_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_228_, v_args_229_);
v___x_238_ = 0;
v___x_239_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_236_, v_flags_235_, v___x_237_, v___x_238_);
if (lean_obj_tag(v___x_239_) == 0)
{
lean_object* v_a_240_; lean_object* v___x_241_; 
v_a_240_ = lean_ctor_get(v___x_239_, 0);
lean_inc(v_a_240_);
lean_dec_ref_known(v___x_239_, 1);
v___x_241_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_240_);
lean_dec(v_a_240_);
if (lean_obj_tag(v___x_241_) == 0)
{
lean_object* v_a_242_; lean_object* v___x_243_; lean_object* v___x_244_; 
v_a_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_a_242_);
lean_dec_ref_known(v___x_241_, 1);
v___x_243_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_228_);
v___x_244_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0(v___x_243_, v_a_242_);
lean_dec_ref(v___x_243_);
return v___x_244_;
}
else
{
lean_object* v_a_245_; lean_object* v___x_247_; uint8_t v_isShared_248_; uint8_t v_isSharedCheck_252_; 
v_a_245_ = lean_ctor_get(v___x_241_, 0);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_241_);
if (v_isSharedCheck_252_ == 0)
{
v___x_247_ = v___x_241_;
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
else
{
lean_inc(v_a_245_);
lean_dec(v___x_241_);
v___x_247_ = lean_box(0);
v_isShared_248_ = v_isSharedCheck_252_;
goto v_resetjp_246_;
}
v_resetjp_246_:
{
lean_object* v___x_250_; 
if (v_isShared_248_ == 0)
{
v___x_250_ = v___x_247_;
goto v_reusejp_249_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v_a_245_);
v___x_250_ = v_reuseFailAlloc_251_;
goto v_reusejp_249_;
}
v_reusejp_249_:
{
return v___x_250_;
}
}
}
}
else
{
lean_object* v_a_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_268_; 
v_a_253_ = lean_ctor_get(v___x_239_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_239_);
if (v_isSharedCheck_268_ == 0)
{
v___x_255_ = v___x_239_;
v_isShared_256_ = v_isSharedCheck_268_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_a_253_);
lean_dec(v___x_239_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_268_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_266_; 
v___x_257_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_258_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_228_);
v___x_259_ = lean_string_append(v___x_257_, v___x_258_);
lean_dec_ref(v___x_258_);
v___x_260_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
v___x_262_ = lean_io_error_to_string(v_a_253_);
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
lean_dec_ref(v___x_262_);
v___x_264_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_264_, 0, v___x_263_);
if (v_isShared_256_ == 0)
{
lean_ctor_set(v___x_255_, 0, v___x_264_);
v___x_266_ = v___x_255_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_264_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
v___jp_270_:
{
uint8_t v_construct_272_; uint64_t v___x_273_; 
v_construct_272_ = lean_ctor_get_uint8(v_b_228_, sizeof(void*)*4);
v___x_273_ = lean_uint64_lor(v___x_269_, v___y_271_);
if (v_construct_272_ == 0)
{
uint64_t v___x_274_; 
v___x_274_ = 0ULL;
v___y_233_ = v___x_273_;
v___y_234_ = v___x_274_;
goto v___jp_232_;
}
else
{
uint64_t v___x_275_; 
v___x_275_ = 4ULL;
v___y_233_ = v___x_273_;
v___y_234_ = v___x_275_;
goto v___jp_232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0___boxed(lean_object* v_b_278_, lean_object* v_args_279_, lean_object* v_await_280_, lean_object* v_a_281_){
_start:
{
uint8_t v_await_boxed_282_; lean_object* v_res_283_; 
v_await_boxed_282_ = lean_unbox(v_await_280_);
v_res_283_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0(v_b_278_, v_args_279_, v_await_boxed_282_);
lean_dec_ref(v_b_278_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hydrating(){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; lean_object* v___x_294_; 
v___x_291_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_hydrating___closed__1));
v___x_292_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_293_ = 1;
v___x_294_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0(v___x_291_, v___x_292_, v___x_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hydrating___boxed(lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lasm_UI_Mount_Raw_hydrating();
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0(lean_object* v_context_298_, lean_object* v_d_299_){
_start:
{
lean_object* v_received_302_; 
if (lean_obj_tag(v_d_299_) == 4)
{
lean_object* v_s_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
v_s_316_ = lean_ctor_get(v_d_299_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v_d_299_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v_d_299_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_s_316_);
lean_dec(v_d_299_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
lean_ctor_set_tag(v___x_318_, 0);
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_s_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
if (lean_obj_tag(v_d_299_) == 9)
{
lean_object* v_value_324_; lean_object* v_description_325_; lean_object* v___x_326_; uint8_t v___x_327_; 
v_value_324_ = lean_ctor_get(v_d_299_, 0);
v_description_325_ = lean_ctor_get(v_d_299_, 1);
v___x_326_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_327_ = lean_string_dec_eq(v_description_325_, v___x_326_);
if (v___x_327_ == 0)
{
goto v___jp_314_;
}
else
{
uint32_t v___x_328_; uint64_t v___x_329_; lean_object* v___x_330_; uint32_t v___x_331_; lean_object* v___x_332_; 
lean_inc_n(v_value_324_, 2);
lean_dec_ref_known(v_d_299_, 2);
v___x_328_ = 206;
v___x_329_ = 0ULL;
v___x_330_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_330_, 0, v_value_324_);
lean_ctor_set(v___x_330_, 1, v___x_326_);
v___x_331_ = lasm_js_value_handle(v_value_324_);
lean_dec(v_value_324_);
v___x_332_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_328_, v___x_329_, v___x_330_, v___x_331_);
if (lean_obj_tag(v___x_332_) == 0)
{
lean_object* v_a_333_; uint8_t v___x_334_; 
v_a_333_ = lean_ctor_get(v___x_332_, 0);
lean_inc(v_a_333_);
lean_dec_ref_known(v___x_332_, 1);
v___x_334_ = lean_string_validate_utf8(v_a_333_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; lean_object* v___x_336_; 
lean_dec(v_a_333_);
v___x_335_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6);
v___x_336_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_335_);
v_received_302_ = v___x_336_;
goto v___jp_301_;
}
else
{
lean_object* v___x_337_; 
v___x_337_ = lean_string_from_utf8_unchecked(v_a_333_);
v_received_302_ = v___x_337_;
goto v___jp_301_;
}
}
else
{
lean_object* v___x_338_; 
lean_dec_ref_known(v___x_332_, 1);
v___x_338_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7));
v_received_302_ = v___x_338_;
goto v___jp_301_;
}
}
}
else
{
goto v___jp_314_;
}
}
v___jp_301_:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_303_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_304_ = lean_string_append(v___x_303_, v_context_298_);
v___x_305_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_306_ = lean_string_append(v___x_304_, v___x_305_);
v___x_307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___closed__0));
v___x_308_ = lean_string_append(v___x_306_, v___x_307_);
v___x_309_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2));
v___x_310_ = lean_string_append(v___x_308_, v___x_309_);
v___x_311_ = lean_string_append(v___x_310_, v_received_302_);
lean_dec_ref(v_received_302_);
v___x_312_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
v___jp_314_:
{
lean_object* v___x_315_; 
v___x_315_ = l_Lasm_JS_Data_describe(v_d_299_);
v_received_302_ = v___x_315_;
goto v___jp_301_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0___boxed(lean_object* v_context_339_, lean_object* v_d_340_, lean_object* v_a_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0(v_context_339_, v_d_340_);
lean_dec_ref(v_context_339_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0(lean_object* v_b_343_, lean_object* v_args_344_, uint8_t v_await_345_){
_start:
{
uint64_t v___y_348_; uint64_t v___y_349_; uint64_t v___x_384_; uint64_t v___y_386_; 
v___x_384_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_345_ == 0)
{
uint64_t v___x_391_; 
v___x_391_ = 0ULL;
v___y_386_ = v___x_391_;
goto v___jp_385_;
}
else
{
uint64_t v___x_392_; 
v___x_392_ = 2ULL;
v___y_386_ = v___x_392_;
goto v___jp_385_;
}
v___jp_347_:
{
uint64_t v_flags_350_; uint32_t v___x_351_; lean_object* v___x_352_; uint32_t v___x_353_; lean_object* v___x_354_; 
v_flags_350_ = lean_uint64_lor(v___y_348_, v___y_349_);
v___x_351_ = 214;
v___x_352_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_343_, v_args_344_);
v___x_353_ = 0;
v___x_354_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_351_, v_flags_350_, v___x_352_, v___x_353_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_356_; 
v_a_355_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_355_);
lean_dec_ref_known(v___x_354_, 1);
v___x_356_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_355_);
lean_dec(v_a_355_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
lean_inc(v_a_357_);
lean_dec_ref_known(v___x_356_, 1);
v___x_358_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_343_);
v___x_359_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0_spec__0(v___x_358_, v_a_357_);
lean_dec_ref(v___x_358_);
return v___x_359_;
}
else
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
v_a_360_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_356_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_356_);
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
else
{
lean_object* v_a_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_383_; 
v_a_368_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_383_ == 0)
{
v___x_370_ = v___x_354_;
v_isShared_371_ = v_isSharedCheck_383_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_a_368_);
lean_dec(v___x_354_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_383_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_381_; 
v___x_372_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_373_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_343_);
v___x_374_ = lean_string_append(v___x_372_, v___x_373_);
lean_dec_ref(v___x_373_);
v___x_375_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_376_ = lean_string_append(v___x_374_, v___x_375_);
v___x_377_ = lean_io_error_to_string(v_a_368_);
v___x_378_ = lean_string_append(v___x_376_, v___x_377_);
lean_dec_ref(v___x_377_);
v___x_379_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_379_, 0, v___x_378_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 0, v___x_379_);
v___x_381_ = v___x_370_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v___x_379_);
v___x_381_ = v_reuseFailAlloc_382_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
return v___x_381_;
}
}
}
}
v___jp_385_:
{
uint8_t v_construct_387_; uint64_t v___x_388_; 
v_construct_387_ = lean_ctor_get_uint8(v_b_343_, sizeof(void*)*4);
v___x_388_ = lean_uint64_lor(v___x_384_, v___y_386_);
if (v_construct_387_ == 0)
{
uint64_t v___x_389_; 
v___x_389_ = 0ULL;
v___y_348_ = v___x_388_;
v___y_349_ = v___x_389_;
goto v___jp_347_;
}
else
{
uint64_t v___x_390_; 
v___x_390_ = 4ULL;
v___y_348_ = v___x_388_;
v___y_349_ = v___x_390_;
goto v___jp_347_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0___boxed(lean_object* v_b_393_, lean_object* v_args_394_, lean_object* v_await_395_, lean_object* v_a_396_){
_start:
{
uint8_t v_await_boxed_397_; lean_object* v_res_398_; 
v_await_boxed_397_ = lean_unbox(v_await_395_);
v_res_398_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0(v_b_393_, v_args_394_, v_await_boxed_397_);
lean_dec_ref(v_b_393_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_target(){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; lean_object* v___x_409_; 
v___x_406_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_target___closed__1));
v___x_407_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_408_ = 1;
v___x_409_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_target_spec__0(v___x_406_, v___x_407_, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_target___boxed(lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lasm_UI_Mount_Raw_target();
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0(lean_object* v_context_412_, lean_object* v_d_413_){
_start:
{
lean_object* v_received_416_; 
if (lean_obj_tag(v_d_413_) == 9)
{
lean_object* v_value_430_; lean_object* v___x_431_; 
v_value_430_ = lean_ctor_get(v_d_413_, 0);
lean_inc(v_value_430_);
lean_dec_ref_known(v_d_413_, 2);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v_value_430_);
return v___x_431_;
}
else
{
if (lean_obj_tag(v_d_413_) == 9)
{
lean_object* v_value_432_; lean_object* v_description_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v_value_432_ = lean_ctor_get(v_d_413_, 0);
v_description_433_ = lean_ctor_get(v_d_413_, 1);
v___x_434_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_435_ = lean_string_dec_eq(v_description_433_, v___x_434_);
if (v___x_435_ == 0)
{
goto v___jp_428_;
}
else
{
uint32_t v___x_436_; uint64_t v___x_437_; lean_object* v___x_438_; uint32_t v___x_439_; lean_object* v___x_440_; 
lean_inc_n(v_value_432_, 2);
lean_dec_ref_known(v_d_413_, 2);
v___x_436_ = 206;
v___x_437_ = 0ULL;
v___x_438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_438_, 0, v_value_432_);
lean_ctor_set(v___x_438_, 1, v___x_434_);
v___x_439_ = lasm_js_value_handle(v_value_432_);
lean_dec(v_value_432_);
v___x_440_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_436_, v___x_437_, v___x_438_, v___x_439_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; uint8_t v___x_442_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = lean_string_validate_utf8(v_a_441_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v___x_444_; 
lean_dec(v_a_441_);
v___x_443_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__6);
v___x_444_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_443_);
v_received_416_ = v___x_444_;
goto v___jp_415_;
}
else
{
lean_object* v___x_445_; 
v___x_445_ = lean_string_from_utf8_unchecked(v_a_441_);
v_received_416_ = v___x_445_;
goto v___jp_415_;
}
}
else
{
lean_object* v___x_446_; 
lean_dec_ref_known(v___x_440_, 1);
v___x_446_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__7));
v_received_416_ = v___x_446_;
goto v___jp_415_;
}
}
}
else
{
goto v___jp_428_;
}
}
v___jp_415_:
{
lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_417_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_418_ = lean_string_append(v___x_417_, v_context_412_);
v___x_419_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__0));
v___x_420_ = lean_string_append(v___x_418_, v___x_419_);
v___x_421_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___closed__1));
v___x_422_ = lean_string_append(v___x_420_, v___x_421_);
v___x_423_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_hydrating_spec__0_spec__0___closed__2));
v___x_424_ = lean_string_append(v___x_422_, v___x_423_);
v___x_425_ = lean_string_append(v___x_424_, v_received_416_);
lean_dec_ref(v_received_416_);
v___x_426_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
v___x_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
return v___x_427_;
}
v___jp_428_:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lasm_JS_Data_describe(v_d_413_);
v_received_416_ = v___x_429_;
goto v___jp_415_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0___boxed(lean_object* v_context_447_, lean_object* v_d_448_, lean_object* v_a_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0(v_context_447_, v_d_448_);
lean_dec_ref(v_context_447_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0(lean_object* v_b_451_, lean_object* v_args_452_, uint8_t v_await_453_){
_start:
{
uint64_t v___y_456_; uint64_t v___y_457_; uint64_t v___x_492_; uint64_t v___y_494_; 
v___x_492_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__2);
if (v_await_453_ == 0)
{
uint64_t v___x_499_; 
v___x_499_ = 0ULL;
v___y_494_ = v___x_499_;
goto v___jp_493_;
}
else
{
uint64_t v___x_500_; 
v___x_500_ = 2ULL;
v___y_494_ = v___x_500_;
goto v___jp_493_;
}
v___jp_455_:
{
uint64_t v_flags_458_; uint32_t v___x_459_; lean_object* v___x_460_; uint32_t v___x_461_; lean_object* v___x_462_; 
v_flags_458_ = lean_uint64_lor(v___y_456_, v___y_457_);
v___x_459_ = 214;
v___x_460_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_451_, v_args_452_);
v___x_461_ = 0;
v___x_462_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_459_, v_flags_458_, v___x_460_, v___x_461_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_464_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref_known(v___x_462_, 1);
v___x_464_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_463_);
lean_dec(v_a_463_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___x_466_; lean_object* v___x_467_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref_known(v___x_464_, 1);
v___x_466_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_451_);
v___x_467_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0_spec__0(v___x_466_, v_a_465_);
lean_dec_ref(v___x_466_);
return v___x_467_;
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
v_a_468_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_464_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_464_);
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
else
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_491_; 
v_a_476_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_491_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_491_ == 0)
{
v___x_478_ = v___x_462_;
v_isShared_479_ = v_isSharedCheck_491_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_462_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_491_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_489_; 
v___x_480_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_481_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_451_);
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
lean_dec_ref(v___x_481_);
v___x_483_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_484_ = lean_string_append(v___x_482_, v___x_483_);
v___x_485_ = lean_io_error_to_string(v_a_476_);
v___x_486_ = lean_string_append(v___x_484_, v___x_485_);
lean_dec_ref(v___x_485_);
v___x_487_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v___x_487_);
v___x_489_ = v___x_478_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
return v___x_489_;
}
}
}
}
v___jp_493_:
{
uint8_t v_construct_495_; uint64_t v___x_496_; 
v_construct_495_ = lean_ctor_get_uint8(v_b_451_, sizeof(void*)*4);
v___x_496_ = lean_uint64_lor(v___x_492_, v___y_494_);
if (v_construct_495_ == 0)
{
uint64_t v___x_497_; 
v___x_497_ = 0ULL;
v___y_456_ = v___x_496_;
v___y_457_ = v___x_497_;
goto v___jp_455_;
}
else
{
uint64_t v___x_498_; 
v___x_498_ = 4ULL;
v___y_456_ = v___x_496_;
v___y_457_ = v___x_498_;
goto v___jp_455_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0___boxed(lean_object* v_b_501_, lean_object* v_args_502_, lean_object* v_await_503_, lean_object* v_a_504_){
_start:
{
uint8_t v_await_boxed_505_; lean_object* v_res_506_; 
v_await_boxed_505_ = lean_unbox(v_await_503_);
v_res_506_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0(v_b_501_, v_args_502_, v_await_boxed_505_);
lean_dec_ref(v_b_501_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_port(lean_object* v_a_513_){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; lean_object* v___x_520_; 
v___x_515_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_port___closed__1));
v___x_516_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_517_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_517_, 0, v_a_513_);
v___x_518_ = lean_array_push(v___x_516_, v___x_517_);
v___x_519_ = 1;
v___x_520_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_port_spec__0(v___x_515_, v___x_518_, v___x_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_port___boxed(lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l_Lasm_UI_Mount_Raw_port(v_a_521_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_box(0);
v___x_526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg___boxed(lean_object* v_a_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(lean_object* v_b_529_, lean_object* v_args_530_, uint8_t v_await_531_){
_start:
{
uint64_t v___y_534_; uint64_t v___y_535_; uint64_t v___x_568_; uint64_t v___y_570_; 
v___x_568_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_531_ == 0)
{
uint64_t v___x_575_; 
v___x_575_ = 0ULL;
v___y_570_ = v___x_575_;
goto v___jp_569_;
}
else
{
uint64_t v___x_576_; 
v___x_576_ = 2ULL;
v___y_570_ = v___x_576_;
goto v___jp_569_;
}
v___jp_533_:
{
uint64_t v_flags_536_; uint32_t v___x_537_; lean_object* v___x_538_; uint32_t v___x_539_; lean_object* v___x_540_; 
v_flags_536_ = lean_uint64_lor(v___y_534_, v___y_535_);
v___x_537_ = 214;
v___x_538_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_529_, v_args_530_);
v___x_539_ = 0;
v___x_540_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_537_, v_flags_536_, v___x_538_, v___x_539_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_542_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v___x_540_, 1);
v___x_542_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_541_);
lean_dec(v_a_541_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v___x_543_; 
lean_dec_ref_known(v___x_542_, 1);
v___x_543_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v___x_543_;
}
else
{
lean_object* v_a_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_551_; 
v_a_544_ = lean_ctor_get(v___x_542_, 0);
v_isSharedCheck_551_ = !lean_is_exclusive(v___x_542_);
if (v_isSharedCheck_551_ == 0)
{
v___x_546_ = v___x_542_;
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_a_544_);
lean_dec(v___x_542_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_551_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_550_; 
v_reuseFailAlloc_550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_550_, 0, v_a_544_);
v___x_549_ = v_reuseFailAlloc_550_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
return v___x_549_;
}
}
}
}
else
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_567_; 
v_a_552_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_567_ == 0)
{
v___x_554_ = v___x_540_;
v_isShared_555_ = v_isSharedCheck_567_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_540_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_567_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_565_; 
v___x_556_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__0));
v___x_557_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_529_);
v___x_558_ = lean_string_append(v___x_556_, v___x_557_);
lean_dec_ref(v___x_557_);
v___x_559_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_root_spec__0___closed__1));
v___x_560_ = lean_string_append(v___x_558_, v___x_559_);
v___x_561_ = lean_io_error_to_string(v_a_552_);
v___x_562_ = lean_string_append(v___x_560_, v___x_561_);
lean_dec_ref(v___x_561_);
v___x_563_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
if (v_isShared_555_ == 0)
{
lean_ctor_set(v___x_554_, 0, v___x_563_);
v___x_565_ = v___x_554_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v___x_563_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
v___jp_569_:
{
uint8_t v_construct_571_; uint64_t v___x_572_; 
v_construct_571_ = lean_ctor_get_uint8(v_b_529_, sizeof(void*)*4);
v___x_572_ = lean_uint64_lor(v___x_568_, v___y_570_);
if (v_construct_571_ == 0)
{
uint64_t v___x_573_; 
v___x_573_ = 0ULL;
v___y_534_ = v___x_572_;
v___y_535_ = v___x_573_;
goto v___jp_533_;
}
else
{
uint64_t v___x_574_; 
v___x_574_ = 4ULL;
v___y_534_ = v___x_572_;
v___y_535_ = v___x_574_;
goto v___jp_533_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0___boxed(lean_object* v_b_577_, lean_object* v_args_578_, lean_object* v_await_579_, lean_object* v_a_580_){
_start:
{
uint8_t v_await_boxed_581_; lean_object* v_res_582_; 
v_await_boxed_581_ = lean_unbox(v_await_579_);
v_res_582_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v_b_577_, v_args_578_, v_await_boxed_581_);
lean_dec_ref(v_b_577_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onMessage(lean_object* v_a_589_){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; lean_object* v___x_597_; 
v___x_591_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_onMessage___closed__1));
v___x_592_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_593_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_594_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_594_, 0, v_a_589_);
lean_ctor_set(v___x_594_, 1, v___x_593_);
v___x_595_ = lean_array_push(v___x_592_, v___x_594_);
v___x_596_ = 1;
v___x_597_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_591_, v___x_595_, v___x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onMessage___boxed(lean_object* v_a_598_, lean_object* v_a_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lasm_UI_Mount_Raw_onMessage(v_a_598_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0(lean_object* v_context_601_, lean_object* v_d_602_){
_start:
{
lean_object* v___x_604_; 
v___x_604_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v___x_604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___boxed(lean_object* v_context_605_, lean_object* v_d_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0(v_context_605_, v_d_606_);
lean_dec(v_d_606_);
lean_dec_ref(v_context_605_);
return v_res_608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onUnmount(lean_object* v_a_615_){
_start:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; 
v___x_617_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_onUnmount___closed__1));
v___x_618_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_619_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_620_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_620_, 0, v_a_615_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_array_push(v___x_618_, v___x_620_);
v___x_622_ = 1;
v___x_623_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_617_, v___x_621_, v___x_622_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onUnmount___boxed(lean_object* v_a_624_, lean_object* v_a_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lasm_UI_Mount_Raw_onUnmount(v_a_624_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hotState(){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; lean_object* v___x_637_; 
v___x_634_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_hotState___closed__1));
v___x_635_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_636_ = 1;
v___x_637_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0(v___x_634_, v___x_635_, v___x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_hotState___boxed(lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lasm_UI_Mount_Raw_hotState();
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onHotSave(lean_object* v_a_646_){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; uint8_t v___x_653_; lean_object* v___x_654_; 
v___x_648_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_onHotSave___closed__1));
v___x_649_ = ((lean_object*)(l_Lasm_UI_Mount_Raw_root___closed__3));
v___x_650_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_651_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_651_, 0, v_a_646_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = lean_array_push(v___x_649_, v___x_651_);
v___x_653_ = 1;
v___x_654_ = l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0(v___x_648_, v___x_652_, v___x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Raw_onHotSave___boxed(lean_object* v_a_655_, lean_object* v_a_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l_Lasm_UI_Mount_Raw_onHotSave(v_a_655_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0(lean_object* v_f_658_, lean_object* v_args_659_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = lean_apply_2(v_f_658_, v_args_659_, lean_box(0));
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_669_; 
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_669_ == 0)
{
lean_object* v_unused_670_; 
v_unused_670_ = lean_ctor_get(v___x_661_, 0);
lean_dec(v_unused_670_);
v___x_663_ = v___x_661_;
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
else
{
lean_dec(v___x_661_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_669_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_667_; 
v___x_665_ = lean_box(0);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v___x_665_);
v___x_667_ = v___x_663_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v___x_665_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_a_671_ = lean_ctor_get(v___x_661_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_661_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_661_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_661_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0___boxed(lean_object* v_f_679_, lean_object* v_args_680_, lean_object* v___y_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0(v_f_679_, v_args_680_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(lean_object* v_f_683_){
_start:
{
lean_object* v___f_685_; lean_object* v___x_686_; 
v___f_685_ = lean_alloc_closure((void*)(l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___lam__0___boxed), 3, 1);
lean_closure_set(v___f_685_, 0, v_f_683_);
v___x_686_ = l_Lasm_JS_Function_ofSyncFn(v___f_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback___boxed(lean_object* v_f_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v_f_687_);
return v_res_689_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___redArg(lean_object* v_inst_691_){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = l_Lasm_UI_Mount_Raw_root();
if (lean_obj_tag(v___x_693_) == 0)
{
lean_object* v_a_694_; lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
lean_inc(v_a_694_);
lean_dec_ref_known(v___x_693_, 1);
v___x_695_ = ((lean_object*)(l_Lasm_UI_Mount_root___redArg___closed__0));
v___x_696_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_697_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_697_, 0, v_a_694_);
lean_ctor_set(v___x_697_, 1, v___x_696_);
v___x_698_ = l_Lasm_JS_decodeAs___redArg(v_inst_691_, v___x_695_, v___x_697_);
return v___x_698_;
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
lean_dec_ref(v_inst_691_);
v_a_699_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_693_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_693_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___redArg___boxed(lean_object* v_inst_707_, lean_object* v_a_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l_Lasm_UI_Mount_root___redArg(v_inst_707_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root(lean_object* v_00_u03b1_710_, lean_object* v_inst_711_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lasm_UI_Mount_root___redArg(v_inst_711_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_root___boxed(lean_object* v_00_u03b1_714_, lean_object* v_inst_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lasm_UI_Mount_root(v_00_u03b1_714_, v_inst_715_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___redArg(lean_object* v_inst_719_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l_Lasm_UI_Mount_Raw_flags();
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_721_, 1);
v___x_723_ = ((lean_object*)(l_Lasm_UI_Mount_flags___redArg___closed__0));
v___x_724_ = l_Lasm_JS_decodeAs___redArg(v_inst_719_, v___x_723_, v_a_722_);
return v___x_724_;
}
else
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_732_; 
lean_dec_ref(v_inst_719_);
v_a_725_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_732_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_732_ == 0)
{
v___x_727_ = v___x_721_;
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_721_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_732_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v___x_730_; 
if (v_isShared_728_ == 0)
{
v___x_730_ = v___x_727_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
return v___x_730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___redArg___boxed(lean_object* v_inst_733_, lean_object* v_a_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lasm_UI_Mount_flags___redArg(v_inst_733_);
return v_res_735_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags(lean_object* v_00_u03b1_736_, lean_object* v_inst_737_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_Lasm_UI_Mount_flags___redArg(v_inst_737_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_flags___boxed(lean_object* v_00_u03b1_740_, lean_object* v_inst_741_, lean_object* v_a_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lasm_UI_Mount_flags(v_00_u03b1_740_, v_inst_741_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hydrating(){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l_Lasm_UI_Mount_Raw_hydrating();
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hydrating___boxed(lean_object* v_a_746_){
_start:
{
lean_object* v_res_747_; 
v_res_747_ = l_Lasm_UI_Mount_hydrating();
return v_res_747_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_target(){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Lasm_UI_Mount_Raw_target();
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_target___boxed(lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l_Lasm_UI_Mount_target();
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_port(lean_object* v_name_752_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_Lasm_UI_Mount_Raw_port(v_name_752_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_port___boxed(lean_object* v_name_755_, lean_object* v_a_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lasm_UI_Mount_port(v_name_755_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___redArg(lean_object* v_inst_759_, lean_object* v_p_760_, lean_object* v_value_761_){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_763_ = l_Lasm_JS_instFromJSUnit;
v___x_764_ = ((lean_object*)(l_Lasm_UI_Mount_Port_send___redArg___closed__0));
v___x_765_ = lean_apply_1(v_inst_759_, v_value_761_);
v___x_766_ = lean_unsigned_to_nat(1u);
v___x_767_ = lean_mk_empty_array_with_capacity(v___x_766_);
v___x_768_ = lean_array_push(v___x_767_, v___x_765_);
v___x_769_ = l_Lasm_JS_Value_callMethod___redArg(v_p_760_, v___x_764_, v___x_768_, v___x_763_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___redArg___boxed(lean_object* v_inst_770_, lean_object* v_p_771_, lean_object* v_value_772_, lean_object* v_a_773_){
_start:
{
lean_object* v_res_774_; 
v_res_774_ = l_Lasm_UI_Mount_Port_send___redArg(v_inst_770_, v_p_771_, v_value_772_);
return v_res_774_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send(lean_object* v_00_u03b1_775_, lean_object* v_inst_776_, lean_object* v_p_777_, lean_object* v_value_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lasm_UI_Mount_Port_send___redArg(v_inst_776_, v_p_777_, v_value_778_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_send___boxed(lean_object* v_00_u03b1_781_, lean_object* v_inst_782_, lean_object* v_p_783_, lean_object* v_value_784_, lean_object* v_a_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lasm_UI_Mount_Port_send(v_00_u03b1_781_, v_inst_782_, v_p_783_, v_value_784_);
return v_res_786_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___lam__0(lean_object* v_f_787_, lean_object* v_args_788_){
_start:
{
lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = lean_array_get_size(v_args_788_);
v___x_792_ = lean_nat_dec_lt(v___x_790_, v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_793_ = lean_box(0);
v___x_794_ = lean_apply_2(v_f_787_, v___x_793_, lean_box(0));
return v___x_794_;
}
else
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = lean_array_fget_borrowed(v_args_788_, v___x_790_);
lean_inc(v___x_795_);
v___x_796_ = lean_apply_2(v_f_787_, v___x_795_, lean_box(0));
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___lam__0___boxed(lean_object* v_f_797_, lean_object* v_args_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lasm_UI_Mount_Port_subscribe___lam__0(v_f_797_, v_args_798_);
lean_dec_ref(v_args_798_);
return v_res_800_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0(uint8_t v_await_801_, uint64_t v_extra_802_){
_start:
{
uint64_t v___x_803_; uint64_t v___y_805_; 
v___x_803_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_flags_spec__0___closed__0);
if (v_await_801_ == 0)
{
uint64_t v___x_808_; 
v___x_808_ = 0ULL;
v___y_805_ = v___x_808_;
goto v___jp_804_;
}
else
{
uint64_t v___x_809_; 
v___x_809_ = 2ULL;
v___y_805_ = v___x_809_;
goto v___jp_804_;
}
v___jp_804_:
{
uint64_t v___x_806_; uint64_t v___x_807_; 
v___x_806_ = lean_uint64_lor(v___x_803_, v___y_805_);
v___x_807_ = lean_uint64_lor(v___x_806_, v_extra_802_);
return v___x_807_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0___boxed(lean_object* v_await_810_, lean_object* v_extra_811_){
_start:
{
uint8_t v_await_boxed_812_; uint64_t v_extra_boxed_813_; uint64_t v_res_814_; lean_object* v_r_815_; 
v_await_boxed_812_ = lean_unbox(v_await_810_);
v_extra_boxed_813_ = lean_unbox_uint64(v_extra_811_);
lean_dec_ref(v_extra_811_);
v_res_814_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0(v_await_boxed_812_, v_extra_boxed_813_);
v_r_815_ = lean_box_uint64(v_res_814_);
return v_r_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(lean_object* v_bytes_816_){
_start:
{
lean_object* v___x_818_; 
v___x_818_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_816_);
if (lean_obj_tag(v___x_818_) == 0)
{
lean_object* v___x_819_; 
lean_dec_ref_known(v___x_818_, 1);
v___x_819_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_UI_Mount_Raw_onMessage_spec__0_spec__0___redArg();
return v___x_819_;
}
else
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
v_a_820_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_818_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_818_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
v___x_825_ = v___x_822_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_820_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg___boxed(lean_object* v_bytes_828_, lean_object* v_a_829_){
_start:
{
lean_object* v_res_830_; 
v_res_830_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(v_bytes_828_);
lean_dec_ref(v_bytes_828_);
return v_res_830_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0(void){
_start:
{
uint64_t v___x_831_; uint8_t v___x_832_; uint64_t v___x_833_; 
v___x_831_ = 8ULL;
v___x_832_ = 0;
v___x_833_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__0(v___x_832_, v___x_831_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(lean_object* v_o_834_, lean_object* v_name_835_, lean_object* v_args_836_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; uint64_t v___x_841_; lean_object* v___x_842_; 
v___x_838_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_839_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_839_, 0, v_o_834_);
lean_ctor_set(v___x_839_, 1, v___x_838_);
v___x_840_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_840_, 0, v_name_835_);
v___x_841_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___closed__0);
v___x_842_ = l_Lasm_JS_Value_invokeRaw(v___x_839_, v___x_840_, v_args_836_, v___x_841_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_844_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_842_, 1);
v___x_844_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(v_a_843_);
lean_dec(v_a_843_);
return v___x_844_;
}
else
{
lean_object* v_a_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_852_; 
v_a_845_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_852_ == 0)
{
v___x_847_ = v___x_842_;
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_a_845_);
lean_dec(v___x_842_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_852_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_850_; 
if (v_isShared_848_ == 0)
{
v___x_850_ = v___x_847_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v_a_845_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
return v___x_850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0___boxed(lean_object* v_o_853_, lean_object* v_name_854_, lean_object* v_args_855_, lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(v_o_853_, v_name_854_, v_args_855_);
return v_res_857_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe(lean_object* v_p_859_, lean_object* v_f_860_){
_start:
{
lean_object* v___f_862_; lean_object* v___x_863_; 
v___f_862_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_862_, 0, v_f_860_);
v___x_863_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v___f_862_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref_known(v___x_863_, 1);
v___x_865_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribe___closed__0));
v___x_866_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_867_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_867_, 0, v_a_864_);
lean_ctor_set(v___x_867_, 1, v___x_866_);
v___x_868_ = lean_unsigned_to_nat(1u);
v___x_869_ = lean_mk_empty_array_with_capacity(v___x_868_);
v___x_870_ = lean_array_push(v___x_869_, v___x_867_);
v___x_871_ = l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(v_p_859_, v___x_865_, v___x_870_);
return v___x_871_;
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec(v_p_859_);
v_a_872_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_863_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_863_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
v___x_877_ = v_reuseFailAlloc_878_;
goto v_reusejp_876_;
}
v_reusejp_876_:
{
return v___x_877_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribe___boxed(lean_object* v_p_880_, lean_object* v_f_881_, lean_object* v_a_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lasm_UI_Mount_Port_subscribe(v_p_880_, v_f_881_);
return v_res_883_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1(lean_object* v_context_884_, lean_object* v_bytes_885_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___redArg(v_bytes_885_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1___boxed(lean_object* v_context_888_, lean_object* v_bytes_889_, lean_object* v_a_890_){
_start:
{
lean_object* v_res_891_; 
v_res_891_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0_spec__1(v_context_888_, v_bytes_889_);
lean_dec_ref(v_bytes_889_);
lean_dec_ref(v_context_888_);
return v_res_891_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0(lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_896_) == 0)
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_906_; 
v_a_898_ = lean_ctor_get(v_x_896_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v_x_896_);
if (v_isSharedCheck_906_ == 0)
{
v___x_900_ = v_x_896_;
v_isShared_901_ = v_isSharedCheck_906_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v_x_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_906_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_905_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
lean_object* v___x_904_; 
v___x_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_904_, 0, v___x_903_);
return v___x_904_;
}
}
}
else
{
lean_object* v___x_907_; 
lean_dec_ref_known(v_x_896_, 1);
v___x_907_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___closed__1));
return v___x_907_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__0___boxed(lean_object* v_x_908_, lean_object* v___y_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Lasm_UI_Mount_Port_subscribeAsync___lam__0(v_x_908_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__1(lean_object* v_f_911_, lean_object* v___f_912_, lean_object* v_args_913_){
_start:
{
lean_object* v___y_916_; lean_object* v___x_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v___x_921_ = lean_unsigned_to_nat(0u);
v___x_922_ = lean_array_get_size(v_args_913_);
v___x_923_ = lean_nat_dec_lt(v___x_921_, v___x_922_);
if (v___x_923_ == 0)
{
lean_object* v___x_924_; 
v___x_924_ = lean_box(0);
v___y_916_ = v___x_924_;
goto v___jp_915_;
}
else
{
lean_object* v___x_925_; 
v___x_925_ = lean_array_fget_borrowed(v_args_913_, v___x_921_);
lean_inc(v___x_925_);
v___y_916_ = v___x_925_;
goto v___jp_915_;
}
v___jp_915_:
{
lean_object* v___x_917_; uint8_t v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; 
v___x_917_ = lean_unsigned_to_nat(0u);
v___x_918_ = 0;
v___x_919_ = lean_apply_2(v_f_911_, v___y_916_, lean_box(0));
v___x_920_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_917_, v___x_918_, v___x_919_, v___f_912_);
return v___x_920_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___lam__1___boxed(lean_object* v_f_926_, lean_object* v___f_927_, lean_object* v_args_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lasm_UI_Mount_Port_subscribeAsync___lam__1(v_f_926_, v___f_927_, v_args_928_);
lean_dec_ref(v_args_928_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync(lean_object* v_p_932_, lean_object* v_f_933_){
_start:
{
lean_object* v___f_935_; lean_object* v___f_936_; lean_object* v___x_937_; 
v___f_935_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribeAsync___closed__0));
v___f_936_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_936_, 0, v_f_933_);
lean_closure_set(v___f_936_, 1, v___f_935_);
v___x_937_ = l_Lasm_JS_Function_ofFn(v___f_936_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___x_939_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribe___closed__0));
v___x_940_ = ((lean_object*)(l_Lasm_UI_Mount_instFromJSPort___lam__0___closed__0));
v___x_941_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_941_, 0, v_a_938_);
lean_ctor_set(v___x_941_, 1, v___x_940_);
v___x_942_ = lean_unsigned_to_nat(1u);
v___x_943_ = lean_mk_empty_array_with_capacity(v___x_942_);
v___x_944_ = lean_array_push(v___x_943_, v___x_941_);
v___x_945_ = l_Lasm_JS_Value_callMethod___at___00Lasm_UI_Mount_Port_subscribe_spec__0(v_p_932_, v___x_939_, v___x_944_);
return v___x_945_;
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v_p_932_);
v_a_946_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_937_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_937_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_Port_subscribeAsync___boxed(lean_object* v_p_954_, lean_object* v_f_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lasm_UI_Mount_Port_subscribeAsync(v_p_954_, v_f_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessage(lean_object* v_f_958_){
_start:
{
lean_object* v___f_960_; lean_object* v___x_961_; 
v___f_960_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribe___lam__0___boxed), 3, 1);
lean_closure_set(v___f_960_, 0, v_f_958_);
v___x_961_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v___f_960_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v___x_963_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v___x_963_ = l_Lasm_UI_Mount_Raw_onMessage(v_a_962_);
return v___x_963_;
}
else
{
lean_object* v_a_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_971_; 
v_a_964_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_971_ == 0)
{
v___x_966_ = v___x_961_;
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_a_964_);
lean_dec(v___x_961_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_971_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_969_; 
if (v_isShared_967_ == 0)
{
v___x_969_ = v___x_966_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_964_);
v___x_969_ = v_reuseFailAlloc_970_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
return v___x_969_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessage___boxed(lean_object* v_f_972_, lean_object* v_a_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lasm_UI_Mount_onMessage(v_f_972_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessageAsync(lean_object* v_f_975_){
_start:
{
lean_object* v___f_977_; lean_object* v___f_978_; lean_object* v___x_979_; 
v___f_977_ = ((lean_object*)(l_Lasm_UI_Mount_Port_subscribeAsync___closed__0));
v___f_978_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_Port_subscribeAsync___lam__1___boxed), 4, 2);
lean_closure_set(v___f_978_, 0, v_f_975_);
lean_closure_set(v___f_978_, 1, v___f_977_);
v___x_979_ = l_Lasm_JS_Function_ofFn(v___f_978_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_981_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
lean_inc(v_a_980_);
lean_dec_ref_known(v___x_979_, 1);
v___x_981_ = l_Lasm_UI_Mount_Raw_onMessage(v_a_980_);
return v___x_981_;
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
v_a_982_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_979_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_979_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onMessageAsync___boxed(lean_object* v_f_990_, lean_object* v_a_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lasm_UI_Mount_onMessageAsync(v_f_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___lam__0(lean_object* v_f_993_, lean_object* v_x_994_){
_start:
{
lean_object* v___x_996_; 
v___x_996_ = lean_apply_1(v_f_993_, lean_box(0));
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___lam__0___boxed(lean_object* v_f_997_, lean_object* v_x_998_, lean_object* v___y_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = l_Lasm_UI_Mount_onUnmount___lam__0(v_f_997_, v_x_998_);
lean_dec_ref(v_x_998_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount(lean_object* v_f_1001_){
_start:
{
lean_object* v___f_1003_; lean_object* v___x_1004_; 
v___f_1003_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_onUnmount___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1003_, 0, v_f_1001_);
v___x_1004_ = l___private_Lasm_UI_Mount_0__Lasm_UI_Mount_callback(v___f_1003_);
if (lean_obj_tag(v___x_1004_) == 0)
{
lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1004_, 1);
v___x_1006_ = l_Lasm_UI_Mount_Raw_onUnmount(v_a_1005_);
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
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onUnmount___boxed(lean_object* v_f_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_Lasm_UI_Mount_onUnmount(v_f_1015_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___redArg(lean_object* v_inst_1018_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lasm_UI_Mount_Raw_hotState();
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1046_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1046_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1046_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
if (lean_obj_tag(v_a_1021_) == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1027_; 
lean_dec_ref(v_inst_1018_);
v___x_1025_ = lean_box(0);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1025_);
v___x_1027_ = v___x_1023_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v___x_1025_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
else
{
lean_object* v_fromJS_1029_; lean_object* v___x_1030_; 
v_fromJS_1029_ = lean_ctor_get(v_inst_1018_, 0);
lean_inc_ref(v_fromJS_1029_);
lean_dec_ref(v_inst_1018_);
v___x_1030_ = lean_apply_1(v_fromJS_1029_, v_a_1021_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1033_; 
lean_dec_ref_known(v___x_1030_, 1);
v___x_1031_ = lean_box(0);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1031_);
v___x_1033_ = v___x_1023_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1034_; 
v_reuseFailAlloc_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1034_, 0, v___x_1031_);
v___x_1033_ = v_reuseFailAlloc_1034_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
return v___x_1033_;
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1045_; 
v_a_1035_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1037_ = v___x_1030_;
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1030_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1045_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
lean_object* v___x_1042_; 
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v___x_1040_);
v___x_1042_ = v___x_1023_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1043_; 
v_reuseFailAlloc_1043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1043_, 0, v___x_1040_);
v___x_1042_ = v_reuseFailAlloc_1043_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
return v___x_1042_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec_ref(v_inst_1018_);
v_a_1047_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1020_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1020_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___redArg___boxed(lean_object* v_inst_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lasm_UI_Mount_hotState___redArg(v_inst_1055_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState(lean_object* v_00_u03b1_1058_, lean_object* v_inst_1059_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l_Lasm_UI_Mount_hotState___redArg(v_inst_1059_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_hotState___boxed(lean_object* v_00_u03b1_1062_, lean_object* v_inst_1063_, lean_object* v_a_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lasm_UI_Mount_hotState(v_00_u03b1_1062_, v_inst_1063_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___lam__0(lean_object* v_f_1066_, lean_object* v_x_1067_){
_start:
{
lean_object* v___x_1069_; 
v___x_1069_ = lean_apply_1(v_f_1066_, lean_box(0));
return v___x_1069_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___lam__0___boxed(lean_object* v_f_1070_, lean_object* v_x_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l_Lasm_UI_Mount_onHotSave___lam__0(v_f_1070_, v_x_1071_);
lean_dec_ref(v_x_1071_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave(lean_object* v_f_1074_){
_start:
{
lean_object* v___f_1076_; lean_object* v___x_1077_; 
v___f_1076_ = lean_alloc_closure((void*)(l_Lasm_UI_Mount_onHotSave___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1076_, 0, v_f_1074_);
v___x_1077_ = l_Lasm_JS_Function_ofSyncFn(v___f_1076_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1079_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1079_ = l_Lasm_UI_Mount_Raw_onHotSave(v_a_1078_);
return v___x_1079_;
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
v_a_1080_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1077_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1077_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_UI_Mount_onHotSave___boxed(lean_object* v_f_1088_, lean_object* v_a_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lasm_UI_Mount_onHotSave(v_f_1088_);
return v_res_1090_;
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
