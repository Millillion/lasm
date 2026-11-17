// Lean compiler output
// Module: Lasm.JS.Web.Console
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_assert_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_assert_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_assert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.console.assert"};
static const lean_object* l_Lasm_JS_Web_console_assert___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_assert___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_assert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_console_assert___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_console_assert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "console.assert"};
static const lean_object* l_Lasm_JS_Web_console_assert___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_assert___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_console_assert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_assert___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__2_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_assert___closed__3 = (const lean_object*)&l_Lasm_JS_Web_console_assert___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_assert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_assert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_clear___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.console.clear"};
static const lean_object* l_Lasm_JS_Web_console_clear___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_clear___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_clear___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "console.clear"};
static const lean_object* l_Lasm_JS_Web_console_clear___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_clear___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_clear___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_clear___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_clear___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_clear___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_clear___closed__2_value;
static const lean_array_object l_Lasm_JS_Web_console_clear___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_JS_Web_console_clear___closed__3 = (const lean_object*)&l_Lasm_JS_Web_console_clear___closed__3_value;
static lean_once_cell_t l_Lasm_JS_Web_console_clear___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_Web_console_clear___closed__4;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_clear();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_clear___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_debug___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.console.debug"};
static const lean_object* l_Lasm_JS_Web_console_debug___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_debug___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_debug___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "console.debug"};
static const lean_object* l_Lasm_JS_Web_console_debug___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_debug___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_debug___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_debug___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_debug___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_debug___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_debug___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_debug(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_debug___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_error___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.console.error"};
static const lean_object* l_Lasm_JS_Web_console_error___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_error___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_error___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "console.error"};
static const lean_object* l_Lasm_JS_Web_console_error___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_error___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_error___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_error___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_error___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_error___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_error___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_error(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_error___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_info___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.console.info"};
static const lean_object* l_Lasm_JS_Web_console_info___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_info___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_info___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "console.info"};
static const lean_object* l_Lasm_JS_Web_console_info___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_info___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_info___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_info___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_info___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_info___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_info___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_info(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_info___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_log___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.console.log"};
static const lean_object* l_Lasm_JS_Web_console_log___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_log___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_log___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "console.log"};
static const lean_object* l_Lasm_JS_Web_console_log___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_log___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_log___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_log___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_log___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_log___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_log___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_log(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_log___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_table___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.console.table"};
static const lean_object* l_Lasm_JS_Web_console_table___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_table___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_table___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "console.table"};
static const lean_object* l_Lasm_JS_Web_console_table___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_table___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_table___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_table___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_table___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_table___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_table___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_table(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_table___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_trace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.console.trace"};
static const lean_object* l_Lasm_JS_Web_console_trace___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_trace___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_trace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "console.trace"};
static const lean_object* l_Lasm_JS_Web_console_trace___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_trace___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_trace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_trace___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_trace___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_trace___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_trace___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_trace(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_trace___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_warn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.console.warn"};
static const lean_object* l_Lasm_JS_Web_console_warn___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_warn___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_warn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "console.warn"};
static const lean_object* l_Lasm_JS_Web_console_warn___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_warn___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_warn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_warn___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_warn___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_warn___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_warn___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_warn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_warn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_dir___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.console.dir"};
static const lean_object* l_Lasm_JS_Web_console_dir___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_dir___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_dir___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "console.dir"};
static const lean_object* l_Lasm_JS_Web_console_dir___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_dir___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_dir___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_dir___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_dir___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_dir___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_dir___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dir(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dir___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_dirxml___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.console.dirxml"};
static const lean_object* l_Lasm_JS_Web_console_dirxml___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_dirxml___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_dirxml___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "console.dirxml"};
static const lean_object* l_Lasm_JS_Web_console_dirxml___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_dirxml___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_dirxml___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_dirxml___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_dirxml___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_dirxml___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_dirxml___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dirxml(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dirxml___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_count___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.console.count"};
static const lean_object* l_Lasm_JS_Web_console_count___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_count___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_count___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "console.count"};
static const lean_object* l_Lasm_JS_Web_console_count___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_count___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_count___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_count___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_count___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_count___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_count___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_count(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_count___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_countReset___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lasm.JS.Web.console.countReset"};
static const lean_object* l_Lasm_JS_Web_console_countReset___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_countReset___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_countReset___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "console.countReset"};
static const lean_object* l_Lasm_JS_Web_console_countReset___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_countReset___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_countReset___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_countReset___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_countReset___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_countReset___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_countReset___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_countReset(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_countReset___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_group___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.console.group"};
static const lean_object* l_Lasm_JS_Web_console_group___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_group___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_group___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "console.group"};
static const lean_object* l_Lasm_JS_Web_console_group___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_group___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_group___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_group___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_group___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_group___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_group___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_group(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_group___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_groupCollapsed___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lasm.JS.Web.console.groupCollapsed"};
static const lean_object* l_Lasm_JS_Web_console_groupCollapsed___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_groupCollapsed___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_groupCollapsed___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "console.groupCollapsed"};
static const lean_object* l_Lasm_JS_Web_console_groupCollapsed___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_groupCollapsed___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_groupCollapsed___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_groupCollapsed___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_groupCollapsed___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_groupCollapsed___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_groupCollapsed___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupCollapsed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupCollapsed___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_groupEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lasm.JS.Web.console.groupEnd"};
static const lean_object* l_Lasm_JS_Web_console_groupEnd___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_groupEnd___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_groupEnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "console.groupEnd"};
static const lean_object* l_Lasm_JS_Web_console_groupEnd___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_groupEnd___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_groupEnd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_groupEnd___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_groupEnd___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_groupEnd___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_groupEnd___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupEnd();
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupEnd___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_time___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.console.time"};
static const lean_object* l_Lasm_JS_Web_console_time___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_time___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_time___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "console.time"};
static const lean_object* l_Lasm_JS_Web_console_time___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_time___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_time___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_time___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_time___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_time___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_time___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_time(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_time___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_timeLog___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.console.timeLog"};
static const lean_object* l_Lasm_JS_Web_console_timeLog___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_timeLog___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_timeLog___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "console.timeLog"};
static const lean_object* l_Lasm_JS_Web_console_timeLog___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_timeLog___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_timeLog___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_timeLog___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_timeLog___closed__1_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_timeLog___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_timeLog___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeLog(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeLog___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_console_timeEnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lasm.JS.Web.console.timeEnd"};
static const lean_object* l_Lasm_JS_Web_console_timeEnd___closed__0 = (const lean_object*)&l_Lasm_JS_Web_console_timeEnd___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_console_timeEnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "console.timeEnd"};
static const lean_object* l_Lasm_JS_Web_console_timeEnd___closed__1 = (const lean_object*)&l_Lasm_JS_Web_console_timeEnd___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_console_timeEnd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_console_timeEnd___closed__0_value),((lean_object*)&l_Lasm_JS_Web_console_assert___closed__1_value),((lean_object*)&l_Lasm_JS_Web_console_timeEnd___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_console_timeEnd___closed__2 = (const lean_object*)&l_Lasm_JS_Web_console_timeEnd___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeEnd(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_assert_spec__0(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_box(0);
return v___x_2_;
}
else
{
lean_object* v_val_3_; lean_object* v___x_4_; uint8_t v___x_5_; 
v_val_3_ = lean_ctor_get(v_x_1_, 0);
v___x_4_ = lean_alloc_ctor(2, 0, 1);
v___x_5_ = lean_unbox(v_val_3_);
lean_ctor_set_uint8(v___x_4_, 0, v___x_5_);
return v___x_4_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_assert_spec__0___boxed(lean_object* v_x_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_assert_spec__0(v_x_6_);
lean_dec(v_x_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(size_t v_sz_8_, size_t v_i_9_, lean_object* v_bs_10_){
_start:
{
uint8_t v___x_11_; 
v___x_11_ = lean_usize_dec_lt(v_i_9_, v_sz_8_);
if (v___x_11_ == 0)
{
return v_bs_10_;
}
else
{
lean_object* v_v_12_; lean_object* v___x_13_; lean_object* v_bs_x27_14_; size_t v___x_15_; size_t v___x_16_; lean_object* v___x_17_; 
v_v_12_ = lean_array_uget(v_bs_10_, v_i_9_);
v___x_13_ = lean_unsigned_to_nat(0u);
v_bs_x27_14_ = lean_array_uset(v_bs_10_, v_i_9_, v___x_13_);
v___x_15_ = ((size_t)1ULL);
v___x_16_ = lean_usize_add(v_i_9_, v___x_15_);
v___x_17_ = lean_array_uset(v_bs_x27_14_, v_i_9_, v_v_12_);
v_i_9_ = v___x_16_;
v_bs_10_ = v___x_17_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1___boxed(lean_object* v_sz_19_, lean_object* v_i_20_, lean_object* v_bs_21_){
_start:
{
size_t v_sz_boxed_22_; size_t v_i_boxed_23_; lean_object* v_res_24_; 
v_sz_boxed_22_ = lean_unbox_usize(v_sz_19_);
lean_dec(v_sz_19_);
v_i_boxed_23_ = lean_unbox_usize(v_i_20_);
lean_dec(v_i_20_);
v_res_24_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_boxed_22_, v_i_boxed_23_, v_bs_21_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg(){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_box(0);
v___x_27_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_27_, 0, v___x_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg___boxed(lean_object* v_a_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg();
return v_res_29_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2(void){
_start:
{
uint8_t v___x_32_; uint64_t v___x_33_; 
v___x_32_ = 0;
v___x_33_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(lean_object* v_b_34_, lean_object* v_args_35_, uint8_t v_await_36_){
_start:
{
uint64_t v___y_39_; uint64_t v___y_40_; uint64_t v___x_81_; uint64_t v___y_83_; 
v___x_81_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2);
if (v_await_36_ == 0)
{
uint64_t v___x_88_; 
v___x_88_ = 0ULL;
v___y_83_ = v___x_88_;
goto v___jp_82_;
}
else
{
uint64_t v___x_89_; 
v___x_89_ = 2ULL;
v___y_83_ = v___x_89_;
goto v___jp_82_;
}
v___jp_38_:
{
uint64_t v_flags_41_; uint32_t v___x_42_; lean_object* v___x_43_; uint32_t v___x_44_; lean_object* v___x_45_; 
v_flags_41_ = lean_uint64_lor(v___y_39_, v___y_40_);
v___x_42_ = 214;
v___x_43_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_34_, v_args_35_);
v___x_44_ = 0;
v___x_45_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_42_, v_flags_41_, v___x_43_, v___x_44_);
lean_dec(v___x_43_);
if (lean_obj_tag(v___x_45_) == 0)
{
if (lean_obj_tag(v___x_45_) == 0)
{
lean_object* v_a_46_; lean_object* v___x_47_; 
v_a_46_ = lean_ctor_get(v___x_45_, 0);
lean_inc(v_a_46_);
lean_dec_ref_known(v___x_45_, 1);
v___x_47_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_46_);
lean_dec(v_a_46_);
if (lean_obj_tag(v___x_47_) == 0)
{
lean_object* v___x_48_; 
lean_dec_ref_known(v___x_47_, 1);
v___x_48_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg();
return v___x_48_;
}
else
{
lean_object* v_a_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_56_; 
v_a_49_ = lean_ctor_get(v___x_47_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_47_);
if (v_isSharedCheck_56_ == 0)
{
v___x_51_ = v___x_47_;
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_a_49_);
lean_dec(v___x_47_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_a_49_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
else
{
lean_object* v_a_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_64_; 
v_a_57_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_64_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_64_ == 0)
{
v___x_59_ = v___x_45_;
v_isShared_60_ = v_isSharedCheck_64_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_a_57_);
lean_dec(v___x_45_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_64_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_62_; 
if (v_isShared_60_ == 0)
{
lean_ctor_set_tag(v___x_59_, 1);
v___x_62_ = v___x_59_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_a_57_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
else
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_80_; 
v_a_65_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_80_ == 0)
{
v___x_67_ = v___x_45_;
v_isShared_68_ = v_isSharedCheck_80_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_45_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_80_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_69_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__0));
v___x_70_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_34_);
v___x_71_ = lean_string_append(v___x_69_, v___x_70_);
lean_dec_ref(v___x_70_);
v___x_72_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__1));
v___x_73_ = lean_string_append(v___x_71_, v___x_72_);
v___x_74_ = lean_io_error_to_string(v_a_65_);
v___x_75_ = lean_string_append(v___x_73_, v___x_74_);
lean_dec_ref(v___x_74_);
v___x_76_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_75_);
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_76_);
v___x_78_ = v___x_67_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
v___jp_82_:
{
uint8_t v_construct_84_; uint64_t v___x_85_; 
v_construct_84_ = lean_ctor_get_uint8(v_b_34_, sizeof(void*)*4);
v___x_85_ = lean_uint64_lor(v___x_81_, v___y_83_);
if (v_construct_84_ == 0)
{
uint64_t v___x_86_; 
v___x_86_ = 0ULL;
v___y_39_ = v___x_85_;
v___y_40_ = v___x_86_;
goto v___jp_38_;
}
else
{
uint64_t v___x_87_; 
v___x_87_ = 4ULL;
v___y_39_ = v___x_85_;
v___y_40_ = v___x_87_;
goto v___jp_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___boxed(lean_object* v_b_90_, lean_object* v_args_91_, lean_object* v_await_92_, lean_object* v_a_93_){
_start:
{
uint8_t v_await_boxed_94_; lean_object* v_res_95_; 
v_await_boxed_94_ = lean_unbox(v_await_92_);
v_res_95_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v_b_90_, v_args_91_, v_await_boxed_94_);
lean_dec_ref(v_b_90_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_assert(lean_object* v_condition_105_, lean_object* v_data_106_){
_start:
{
uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; size_t v_sz_114_; size_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_108_ = 0;
v___x_109_ = ((lean_object*)(l_Lasm_JS_Web_console_assert___closed__3));
v___x_110_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_assert_spec__0(v_condition_105_);
v___x_111_ = lean_unsigned_to_nat(1u);
v___x_112_ = lean_mk_empty_array_with_capacity(v___x_111_);
v___x_113_ = lean_array_push(v___x_112_, v___x_110_);
v_sz_114_ = lean_array_size(v_data_106_);
v___x_115_ = ((size_t)0ULL);
v___x_116_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_114_, v___x_115_, v_data_106_);
v___x_117_ = l_Lasm_JS_Web_Support_argsWith(v___x_113_, v___x_116_);
lean_dec_ref(v___x_116_);
v___x_118_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_109_, v___x_117_, v___x_108_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_assert___boxed(lean_object* v_condition_119_, lean_object* v_data_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lasm_JS_Web_console_assert(v_condition_119_, v_data_120_);
lean_dec(v_condition_119_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2(lean_object* v_context_123_, lean_object* v_d_124_){
_start:
{
lean_object* v___x_126_; 
v___x_126_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg();
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___boxed(lean_object* v_context_127_, lean_object* v_d_128_, lean_object* v_a_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2(v_context_127_, v_d_128_);
lean_dec(v_d_128_);
lean_dec_ref(v_context_127_);
return v_res_130_;
}
}
static lean_object* _init_l_Lasm_JS_Web_console_clear___closed__4(void){
_start:
{
lean_object* v___x_141_; lean_object* v___x_142_; 
v___x_141_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v___x_142_ = l_Lasm_JS_Web_Support_args(v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_clear(){
_start:
{
uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_144_ = 0;
v___x_145_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__2));
v___x_146_ = lean_obj_once(&l_Lasm_JS_Web_console_clear___closed__4, &l_Lasm_JS_Web_console_clear___closed__4_once, _init_l_Lasm_JS_Web_console_clear___closed__4);
v___x_147_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_145_, v___x_146_, v___x_144_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_clear___boxed(lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lasm_JS_Web_console_clear();
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_debug(lean_object* v_data_158_){
_start:
{
uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; size_t v_sz_163_; size_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_160_ = 0;
v___x_161_ = ((lean_object*)(l_Lasm_JS_Web_console_debug___closed__2));
v___x_162_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_163_ = lean_array_size(v_data_158_);
v___x_164_ = ((size_t)0ULL);
v___x_165_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_163_, v___x_164_, v_data_158_);
v___x_166_ = l_Lasm_JS_Web_Support_argsWith(v___x_162_, v___x_165_);
lean_dec_ref(v___x_165_);
v___x_167_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_161_, v___x_166_, v___x_160_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_debug___boxed(lean_object* v_data_168_, lean_object* v_a_169_){
_start:
{
lean_object* v_res_170_; 
v_res_170_ = l_Lasm_JS_Web_console_debug(v_data_168_);
return v_res_170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_error(lean_object* v_data_179_){
_start:
{
uint8_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; size_t v_sz_184_; size_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_181_ = 0;
v___x_182_ = ((lean_object*)(l_Lasm_JS_Web_console_error___closed__2));
v___x_183_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_184_ = lean_array_size(v_data_179_);
v___x_185_ = ((size_t)0ULL);
v___x_186_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_184_, v___x_185_, v_data_179_);
v___x_187_ = l_Lasm_JS_Web_Support_argsWith(v___x_183_, v___x_186_);
lean_dec_ref(v___x_186_);
v___x_188_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_182_, v___x_187_, v___x_181_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_error___boxed(lean_object* v_data_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_res_191_; 
v_res_191_ = l_Lasm_JS_Web_console_error(v_data_189_);
return v_res_191_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_info(lean_object* v_data_200_){
_start:
{
uint8_t v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; size_t v_sz_205_; size_t v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_202_ = 0;
v___x_203_ = ((lean_object*)(l_Lasm_JS_Web_console_info___closed__2));
v___x_204_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_205_ = lean_array_size(v_data_200_);
v___x_206_ = ((size_t)0ULL);
v___x_207_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_205_, v___x_206_, v_data_200_);
v___x_208_ = l_Lasm_JS_Web_Support_argsWith(v___x_204_, v___x_207_);
lean_dec_ref(v___x_207_);
v___x_209_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_203_, v___x_208_, v___x_202_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_info___boxed(lean_object* v_data_210_, lean_object* v_a_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l_Lasm_JS_Web_console_info(v_data_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_log(lean_object* v_data_221_){
_start:
{
uint8_t v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; size_t v_sz_226_; size_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v___x_223_ = 0;
v___x_224_ = ((lean_object*)(l_Lasm_JS_Web_console_log___closed__2));
v___x_225_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_226_ = lean_array_size(v_data_221_);
v___x_227_ = ((size_t)0ULL);
v___x_228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_226_, v___x_227_, v_data_221_);
v___x_229_ = l_Lasm_JS_Web_Support_argsWith(v___x_225_, v___x_228_);
lean_dec_ref(v___x_228_);
v___x_230_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_224_, v___x_229_, v___x_223_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_log___boxed(lean_object* v_data_231_, lean_object* v_a_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lasm_JS_Web_console_log(v_data_231_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0(size_t v_sz_234_, size_t v_i_235_, lean_object* v_bs_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = lean_usize_dec_lt(v_i_235_, v_sz_234_);
if (v___x_237_ == 0)
{
return v_bs_236_;
}
else
{
lean_object* v_v_238_; lean_object* v___x_239_; lean_object* v_bs_x27_240_; lean_object* v___x_241_; size_t v___x_242_; size_t v___x_243_; lean_object* v___x_244_; 
v_v_238_ = lean_array_uget(v_bs_236_, v_i_235_);
v___x_239_ = lean_unsigned_to_nat(0u);
v_bs_x27_240_ = lean_array_uset(v_bs_236_, v_i_235_, v___x_239_);
v___x_241_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_241_, 0, v_v_238_);
v___x_242_ = ((size_t)1ULL);
v___x_243_ = lean_usize_add(v_i_235_, v___x_242_);
v___x_244_ = lean_array_uset(v_bs_x27_240_, v_i_235_, v___x_241_);
v_i_235_ = v___x_243_;
v_bs_236_ = v___x_244_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0___boxed(lean_object* v_sz_246_, lean_object* v_i_247_, lean_object* v_bs_248_){
_start:
{
size_t v_sz_boxed_249_; size_t v_i_boxed_250_; lean_object* v_res_251_; 
v_sz_boxed_249_ = lean_unbox_usize(v_sz_246_);
lean_dec(v_sz_246_);
v_i_boxed_250_ = lean_unbox_usize(v_i_247_);
lean_dec(v_i_247_);
v_res_251_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0(v_sz_boxed_249_, v_i_boxed_250_, v_bs_248_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0(lean_object* v_x_252_){
_start:
{
if (lean_obj_tag(v_x_252_) == 0)
{
lean_object* v___x_253_; 
v___x_253_ = lean_box(0);
return v___x_253_;
}
else
{
lean_object* v_val_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_264_; 
v_val_254_ = lean_ctor_get(v_x_252_, 0);
v_isSharedCheck_264_ = !lean_is_exclusive(v_x_252_);
if (v_isSharedCheck_264_ == 0)
{
v___x_256_ = v_x_252_;
v_isShared_257_ = v_isSharedCheck_264_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_val_254_);
lean_dec(v_x_252_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_264_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
size_t v_sz_258_; size_t v___x_259_; lean_object* v___x_260_; lean_object* v___x_262_; 
v_sz_258_ = lean_array_size(v_val_254_);
v___x_259_ = ((size_t)0ULL);
v___x_260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0(v_sz_258_, v___x_259_, v_val_254_);
if (v_isShared_257_ == 0)
{
lean_ctor_set_tag(v___x_256_, 7);
lean_ctor_set(v___x_256_, 0, v___x_260_);
v___x_262_ = v___x_256_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_table(lean_object* v_tabularData_273_, lean_object* v_properties_274_){
_start:
{
uint8_t v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_276_ = 0;
v___x_277_ = lean_unsigned_to_nat(2u);
v___x_278_ = ((lean_object*)(l_Lasm_JS_Web_console_table___closed__2));
v___x_279_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0(v_properties_274_);
v___x_280_ = lean_mk_empty_array_with_capacity(v___x_277_);
v___x_281_ = lean_array_push(v___x_280_, v_tabularData_273_);
v___x_282_ = lean_array_push(v___x_281_, v___x_279_);
v___x_283_ = l_Lasm_JS_Web_Support_args(v___x_282_);
v___x_284_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_278_, v___x_283_, v___x_276_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_table___boxed(lean_object* v_tabularData_285_, lean_object* v_properties_286_, lean_object* v_a_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lasm_JS_Web_console_table(v_tabularData_285_, v_properties_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_trace(lean_object* v_data_297_){
_start:
{
uint8_t v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; size_t v_sz_302_; size_t v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_299_ = 0;
v___x_300_ = ((lean_object*)(l_Lasm_JS_Web_console_trace___closed__2));
v___x_301_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_302_ = lean_array_size(v_data_297_);
v___x_303_ = ((size_t)0ULL);
v___x_304_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_302_, v___x_303_, v_data_297_);
v___x_305_ = l_Lasm_JS_Web_Support_argsWith(v___x_301_, v___x_304_);
lean_dec_ref(v___x_304_);
v___x_306_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_300_, v___x_305_, v___x_299_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_trace___boxed(lean_object* v_data_307_, lean_object* v_a_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lasm_JS_Web_console_trace(v_data_307_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_warn(lean_object* v_data_318_){
_start:
{
uint8_t v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; size_t v_sz_323_; size_t v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_320_ = 0;
v___x_321_ = ((lean_object*)(l_Lasm_JS_Web_console_warn___closed__2));
v___x_322_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_323_ = lean_array_size(v_data_318_);
v___x_324_ = ((size_t)0ULL);
v___x_325_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_323_, v___x_324_, v_data_318_);
v___x_326_ = l_Lasm_JS_Web_Support_argsWith(v___x_322_, v___x_325_);
lean_dec_ref(v___x_325_);
v___x_327_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_321_, v___x_326_, v___x_320_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_warn___boxed(lean_object* v_data_328_, lean_object* v_a_329_){
_start:
{
lean_object* v_res_330_; 
v_res_330_ = l_Lasm_JS_Web_console_warn(v_data_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dir(lean_object* v_item_339_, lean_object* v_options_340_){
_start:
{
uint8_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_342_ = 0;
v___x_343_ = lean_unsigned_to_nat(2u);
v___x_344_ = ((lean_object*)(l_Lasm_JS_Web_console_dir___closed__2));
v___x_345_ = lean_mk_empty_array_with_capacity(v___x_343_);
v___x_346_ = lean_array_push(v___x_345_, v_item_339_);
v___x_347_ = lean_array_push(v___x_346_, v_options_340_);
v___x_348_ = l_Lasm_JS_Web_Support_args(v___x_347_);
v___x_349_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_344_, v___x_348_, v___x_342_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dir___boxed(lean_object* v_item_350_, lean_object* v_options_351_, lean_object* v_a_352_){
_start:
{
lean_object* v_res_353_; 
v_res_353_ = l_Lasm_JS_Web_console_dir(v_item_350_, v_options_351_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dirxml(lean_object* v_data_362_){
_start:
{
uint8_t v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; size_t v_sz_367_; size_t v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_364_ = 0;
v___x_365_ = ((lean_object*)(l_Lasm_JS_Web_console_dirxml___closed__2));
v___x_366_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_367_ = lean_array_size(v_data_362_);
v___x_368_ = ((size_t)0ULL);
v___x_369_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_367_, v___x_368_, v_data_362_);
v___x_370_ = l_Lasm_JS_Web_Support_argsWith(v___x_366_, v___x_369_);
lean_dec_ref(v___x_369_);
v___x_371_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_365_, v___x_370_, v___x_364_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dirxml___boxed(lean_object* v_data_372_, lean_object* v_a_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lasm_JS_Web_console_dirxml(v_data_372_);
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(lean_object* v_x_375_){
_start:
{
if (lean_obj_tag(v_x_375_) == 0)
{
lean_object* v___x_376_; 
v___x_376_ = lean_box(0);
return v___x_376_;
}
else
{
lean_object* v_val_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_val_377_ = lean_ctor_get(v_x_375_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v_x_375_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v_x_375_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_val_377_);
lean_dec(v_x_375_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
lean_ctor_set_tag(v___x_379_, 4);
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_val_377_);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_count(lean_object* v_label_393_){
_start:
{
uint8_t v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_395_ = 0;
v___x_396_ = lean_unsigned_to_nat(1u);
v___x_397_ = ((lean_object*)(l_Lasm_JS_Web_console_count___closed__2));
v___x_398_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_393_);
v___x_399_ = lean_mk_empty_array_with_capacity(v___x_396_);
v___x_400_ = lean_array_push(v___x_399_, v___x_398_);
v___x_401_ = l_Lasm_JS_Web_Support_args(v___x_400_);
v___x_402_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_397_, v___x_401_, v___x_395_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_count___boxed(lean_object* v_label_403_, lean_object* v_a_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lasm_JS_Web_console_count(v_label_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_countReset(lean_object* v_label_414_){
_start:
{
uint8_t v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_416_ = 0;
v___x_417_ = lean_unsigned_to_nat(1u);
v___x_418_ = ((lean_object*)(l_Lasm_JS_Web_console_countReset___closed__2));
v___x_419_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_414_);
v___x_420_ = lean_mk_empty_array_with_capacity(v___x_417_);
v___x_421_ = lean_array_push(v___x_420_, v___x_419_);
v___x_422_ = l_Lasm_JS_Web_Support_args(v___x_421_);
v___x_423_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_418_, v___x_422_, v___x_416_);
return v___x_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_countReset___boxed(lean_object* v_label_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lasm_JS_Web_console_countReset(v_label_424_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_group(lean_object* v_data_435_){
_start:
{
uint8_t v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; size_t v_sz_440_; size_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_437_ = 0;
v___x_438_ = ((lean_object*)(l_Lasm_JS_Web_console_group___closed__2));
v___x_439_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_440_ = lean_array_size(v_data_435_);
v___x_441_ = ((size_t)0ULL);
v___x_442_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_440_, v___x_441_, v_data_435_);
v___x_443_ = l_Lasm_JS_Web_Support_argsWith(v___x_439_, v___x_442_);
lean_dec_ref(v___x_442_);
v___x_444_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_438_, v___x_443_, v___x_437_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_group___boxed(lean_object* v_data_445_, lean_object* v_a_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lasm_JS_Web_console_group(v_data_445_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupCollapsed(lean_object* v_data_456_){
_start:
{
uint8_t v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; size_t v_sz_461_; size_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_458_ = 0;
v___x_459_ = ((lean_object*)(l_Lasm_JS_Web_console_groupCollapsed___closed__2));
v___x_460_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_461_ = lean_array_size(v_data_456_);
v___x_462_ = ((size_t)0ULL);
v___x_463_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_461_, v___x_462_, v_data_456_);
v___x_464_ = l_Lasm_JS_Web_Support_argsWith(v___x_460_, v___x_463_);
lean_dec_ref(v___x_463_);
v___x_465_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_459_, v___x_464_, v___x_458_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupCollapsed___boxed(lean_object* v_data_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_res_468_; 
v_res_468_ = l_Lasm_JS_Web_console_groupCollapsed(v_data_466_);
return v_res_468_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupEnd(){
_start:
{
uint8_t v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_478_ = 0;
v___x_479_ = ((lean_object*)(l_Lasm_JS_Web_console_groupEnd___closed__2));
v___x_480_ = lean_obj_once(&l_Lasm_JS_Web_console_clear___closed__4, &l_Lasm_JS_Web_console_clear___closed__4_once, _init_l_Lasm_JS_Web_console_clear___closed__4);
v___x_481_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_479_, v___x_480_, v___x_478_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupEnd___boxed(lean_object* v_a_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = l_Lasm_JS_Web_console_groupEnd();
return v_res_483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_time(lean_object* v_label_492_){
_start:
{
uint8_t v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
v___x_494_ = 0;
v___x_495_ = lean_unsigned_to_nat(1u);
v___x_496_ = ((lean_object*)(l_Lasm_JS_Web_console_time___closed__2));
v___x_497_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_492_);
v___x_498_ = lean_mk_empty_array_with_capacity(v___x_495_);
v___x_499_ = lean_array_push(v___x_498_, v___x_497_);
v___x_500_ = l_Lasm_JS_Web_Support_args(v___x_499_);
v___x_501_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_496_, v___x_500_, v___x_494_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_time___boxed(lean_object* v_label_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_Lasm_JS_Web_console_time(v_label_502_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeLog(lean_object* v_label_513_, lean_object* v_data_514_){
_start:
{
uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; size_t v_sz_522_; size_t v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_516_ = 0;
v___x_517_ = ((lean_object*)(l_Lasm_JS_Web_console_timeLog___closed__2));
v___x_518_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_513_);
v___x_519_ = lean_unsigned_to_nat(1u);
v___x_520_ = lean_mk_empty_array_with_capacity(v___x_519_);
v___x_521_ = lean_array_push(v___x_520_, v___x_518_);
v_sz_522_ = lean_array_size(v_data_514_);
v___x_523_ = ((size_t)0ULL);
v___x_524_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_522_, v___x_523_, v_data_514_);
v___x_525_ = l_Lasm_JS_Web_Support_argsWith(v___x_521_, v___x_524_);
lean_dec_ref(v___x_524_);
v___x_526_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_517_, v___x_525_, v___x_516_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeLog___boxed(lean_object* v_label_527_, lean_object* v_data_528_, lean_object* v_a_529_){
_start:
{
lean_object* v_res_530_; 
v_res_530_ = l_Lasm_JS_Web_console_timeLog(v_label_527_, v_data_528_);
return v_res_530_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeEnd(lean_object* v_label_539_){
_start:
{
uint8_t v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_541_ = 0;
v___x_542_ = lean_unsigned_to_nat(1u);
v___x_543_ = ((lean_object*)(l_Lasm_JS_Web_console_timeEnd___closed__2));
v___x_544_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_539_);
v___x_545_ = lean_mk_empty_array_with_capacity(v___x_542_);
v___x_546_ = lean_array_push(v___x_545_, v___x_544_);
v___x_547_ = l_Lasm_JS_Web_Support_args(v___x_546_);
v___x_548_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_543_, v___x_547_, v___x_541_);
return v___x_548_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeEnd___boxed(lean_object* v_label_549_, lean_object* v_a_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lasm_JS_Web_console_timeEnd(v_label_549_);
return v_res_551_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Console(uint8_t builtin) {
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
