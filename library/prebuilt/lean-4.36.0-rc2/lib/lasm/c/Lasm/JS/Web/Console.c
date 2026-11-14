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
uint64_t v___y_39_; uint64_t v___y_40_; uint64_t v___x_73_; uint64_t v___y_75_; 
v___x_73_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__2);
if (v_await_36_ == 0)
{
uint64_t v___x_80_; 
v___x_80_ = 0ULL;
v___y_75_ = v___x_80_;
goto v___jp_74_;
}
else
{
uint64_t v___x_81_; 
v___x_81_ = 2ULL;
v___y_75_ = v___x_81_;
goto v___jp_74_;
}
v___jp_38_:
{
uint64_t v_flags_41_; uint32_t v___x_42_; lean_object* v___x_43_; uint32_t v___x_44_; lean_object* v___x_45_; 
v_flags_41_ = lean_uint64_lor(v___y_39_, v___y_40_);
v___x_42_ = 214;
v___x_43_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_34_, v_args_35_);
v___x_44_ = 0;
v___x_45_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_42_, v_flags_41_, v___x_43_, v___x_44_);
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
lean_object* v_a_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_72_; 
v_a_57_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_72_ == 0)
{
v___x_59_ = v___x_45_;
v_isShared_60_ = v_isSharedCheck_72_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_a_57_);
lean_dec(v___x_45_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_72_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v___x_61_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__0));
v___x_62_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_34_);
v___x_63_ = lean_string_append(v___x_61_, v___x_62_);
lean_dec_ref(v___x_62_);
v___x_64_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___closed__1));
v___x_65_ = lean_string_append(v___x_63_, v___x_64_);
v___x_66_ = lean_io_error_to_string(v_a_57_);
v___x_67_ = lean_string_append(v___x_65_, v___x_66_);
lean_dec_ref(v___x_66_);
v___x_68_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_68_, 0, v___x_67_);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 0, v___x_68_);
v___x_70_ = v___x_59_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v___x_68_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
v___jp_74_:
{
uint8_t v_construct_76_; uint64_t v___x_77_; 
v_construct_76_ = lean_ctor_get_uint8(v_b_34_, sizeof(void*)*4);
v___x_77_ = lean_uint64_lor(v___x_73_, v___y_75_);
if (v_construct_76_ == 0)
{
uint64_t v___x_78_; 
v___x_78_ = 0ULL;
v___y_39_ = v___x_77_;
v___y_40_ = v___x_78_;
goto v___jp_38_;
}
else
{
uint64_t v___x_79_; 
v___x_79_ = 4ULL;
v___y_39_ = v___x_77_;
v___y_40_ = v___x_79_;
goto v___jp_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2___boxed(lean_object* v_b_82_, lean_object* v_args_83_, lean_object* v_await_84_, lean_object* v_a_85_){
_start:
{
uint8_t v_await_boxed_86_; lean_object* v_res_87_; 
v_await_boxed_86_ = lean_unbox(v_await_84_);
v_res_87_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v_b_82_, v_args_83_, v_await_boxed_86_);
lean_dec_ref(v_b_82_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_assert(lean_object* v_condition_97_, lean_object* v_data_98_){
_start:
{
uint8_t v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; size_t v_sz_106_; size_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_100_ = 0;
v___x_101_ = ((lean_object*)(l_Lasm_JS_Web_console_assert___closed__3));
v___x_102_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_assert_spec__0(v_condition_97_);
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_mk_empty_array_with_capacity(v___x_103_);
v___x_105_ = lean_array_push(v___x_104_, v___x_102_);
v_sz_106_ = lean_array_size(v_data_98_);
v___x_107_ = ((size_t)0ULL);
v___x_108_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_106_, v___x_107_, v_data_98_);
v___x_109_ = l_Lasm_JS_Web_Support_argsWith(v___x_105_, v___x_108_);
lean_dec_ref(v___x_108_);
v___x_110_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_101_, v___x_109_, v___x_100_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_assert___boxed(lean_object* v_condition_111_, lean_object* v_data_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Lasm_JS_Web_console_assert(v_condition_111_, v_data_112_);
lean_dec(v_condition_111_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2(lean_object* v_context_115_, lean_object* v_d_116_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___redArg();
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2___boxed(lean_object* v_context_119_, lean_object* v_d_120_, lean_object* v_a_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2_spec__2(v_context_119_, v_d_120_);
lean_dec(v_d_120_);
lean_dec_ref(v_context_119_);
return v_res_122_;
}
}
static lean_object* _init_l_Lasm_JS_Web_console_clear___closed__4(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_133_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v___x_134_ = l_Lasm_JS_Web_Support_args(v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_clear(){
_start:
{
uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; 
v___x_136_ = 0;
v___x_137_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__2));
v___x_138_ = lean_obj_once(&l_Lasm_JS_Web_console_clear___closed__4, &l_Lasm_JS_Web_console_clear___closed__4_once, _init_l_Lasm_JS_Web_console_clear___closed__4);
v___x_139_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_137_, v___x_138_, v___x_136_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_clear___boxed(lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lasm_JS_Web_console_clear();
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_debug(lean_object* v_data_150_){
_start:
{
uint8_t v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; size_t v_sz_155_; size_t v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_152_ = 0;
v___x_153_ = ((lean_object*)(l_Lasm_JS_Web_console_debug___closed__2));
v___x_154_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_155_ = lean_array_size(v_data_150_);
v___x_156_ = ((size_t)0ULL);
v___x_157_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_155_, v___x_156_, v_data_150_);
v___x_158_ = l_Lasm_JS_Web_Support_argsWith(v___x_154_, v___x_157_);
lean_dec_ref(v___x_157_);
v___x_159_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_153_, v___x_158_, v___x_152_);
return v___x_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_debug___boxed(lean_object* v_data_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lasm_JS_Web_console_debug(v_data_160_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_error(lean_object* v_data_171_){
_start:
{
uint8_t v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; size_t v_sz_176_; size_t v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_173_ = 0;
v___x_174_ = ((lean_object*)(l_Lasm_JS_Web_console_error___closed__2));
v___x_175_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_176_ = lean_array_size(v_data_171_);
v___x_177_ = ((size_t)0ULL);
v___x_178_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_176_, v___x_177_, v_data_171_);
v___x_179_ = l_Lasm_JS_Web_Support_argsWith(v___x_175_, v___x_178_);
lean_dec_ref(v___x_178_);
v___x_180_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_174_, v___x_179_, v___x_173_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_error___boxed(lean_object* v_data_181_, lean_object* v_a_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = l_Lasm_JS_Web_console_error(v_data_181_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_info(lean_object* v_data_192_){
_start:
{
uint8_t v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; size_t v_sz_197_; size_t v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_194_ = 0;
v___x_195_ = ((lean_object*)(l_Lasm_JS_Web_console_info___closed__2));
v___x_196_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_197_ = lean_array_size(v_data_192_);
v___x_198_ = ((size_t)0ULL);
v___x_199_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_197_, v___x_198_, v_data_192_);
v___x_200_ = l_Lasm_JS_Web_Support_argsWith(v___x_196_, v___x_199_);
lean_dec_ref(v___x_199_);
v___x_201_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_195_, v___x_200_, v___x_194_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_info___boxed(lean_object* v_data_202_, lean_object* v_a_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Lasm_JS_Web_console_info(v_data_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_log(lean_object* v_data_213_){
_start:
{
uint8_t v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; size_t v_sz_218_; size_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_215_ = 0;
v___x_216_ = ((lean_object*)(l_Lasm_JS_Web_console_log___closed__2));
v___x_217_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_218_ = lean_array_size(v_data_213_);
v___x_219_ = ((size_t)0ULL);
v___x_220_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_218_, v___x_219_, v_data_213_);
v___x_221_ = l_Lasm_JS_Web_Support_argsWith(v___x_217_, v___x_220_);
lean_dec_ref(v___x_220_);
v___x_222_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_216_, v___x_221_, v___x_215_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_log___boxed(lean_object* v_data_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = l_Lasm_JS_Web_console_log(v_data_223_);
return v_res_225_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0(size_t v_sz_226_, size_t v_i_227_, lean_object* v_bs_228_){
_start:
{
uint8_t v___x_229_; 
v___x_229_ = lean_usize_dec_lt(v_i_227_, v_sz_226_);
if (v___x_229_ == 0)
{
return v_bs_228_;
}
else
{
lean_object* v_v_230_; lean_object* v___x_231_; lean_object* v_bs_x27_232_; lean_object* v___x_233_; size_t v___x_234_; size_t v___x_235_; lean_object* v___x_236_; 
v_v_230_ = lean_array_uget(v_bs_228_, v_i_227_);
v___x_231_ = lean_unsigned_to_nat(0u);
v_bs_x27_232_ = lean_array_uset(v_bs_228_, v_i_227_, v___x_231_);
v___x_233_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_233_, 0, v_v_230_);
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_add(v_i_227_, v___x_234_);
v___x_236_ = lean_array_uset(v_bs_x27_232_, v_i_227_, v___x_233_);
v_i_227_ = v___x_235_;
v_bs_228_ = v___x_236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0___boxed(lean_object* v_sz_238_, lean_object* v_i_239_, lean_object* v_bs_240_){
_start:
{
size_t v_sz_boxed_241_; size_t v_i_boxed_242_; lean_object* v_res_243_; 
v_sz_boxed_241_ = lean_unbox_usize(v_sz_238_);
lean_dec(v_sz_238_);
v_i_boxed_242_ = lean_unbox_usize(v_i_239_);
lean_dec(v_i_239_);
v_res_243_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0(v_sz_boxed_241_, v_i_boxed_242_, v_bs_240_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0(lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
lean_object* v___x_245_; 
v___x_245_ = lean_box(0);
return v___x_245_;
}
else
{
lean_object* v_val_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_256_; 
v_val_246_ = lean_ctor_get(v_x_244_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v_x_244_);
if (v_isSharedCheck_256_ == 0)
{
v___x_248_ = v_x_244_;
v_isShared_249_ = v_isSharedCheck_256_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_val_246_);
lean_dec(v_x_244_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_256_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
size_t v_sz_250_; size_t v___x_251_; lean_object* v___x_252_; lean_object* v___x_254_; 
v_sz_250_ = lean_array_size(v_val_246_);
v___x_251_ = ((size_t)0ULL);
v___x_252_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0_spec__0(v_sz_250_, v___x_251_, v_val_246_);
if (v_isShared_249_ == 0)
{
lean_ctor_set_tag(v___x_248_, 7);
lean_ctor_set(v___x_248_, 0, v___x_252_);
v___x_254_ = v___x_248_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v___x_252_);
v___x_254_ = v_reuseFailAlloc_255_;
goto v_reusejp_253_;
}
v_reusejp_253_:
{
return v___x_254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_table(lean_object* v_tabularData_265_, lean_object* v_properties_266_){
_start:
{
uint8_t v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_268_ = 0;
v___x_269_ = lean_unsigned_to_nat(2u);
v___x_270_ = ((lean_object*)(l_Lasm_JS_Web_console_table___closed__2));
v___x_271_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_table_spec__0(v_properties_266_);
v___x_272_ = lean_mk_empty_array_with_capacity(v___x_269_);
v___x_273_ = lean_array_push(v___x_272_, v_tabularData_265_);
v___x_274_ = lean_array_push(v___x_273_, v___x_271_);
v___x_275_ = l_Lasm_JS_Web_Support_args(v___x_274_);
v___x_276_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_270_, v___x_275_, v___x_268_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_table___boxed(lean_object* v_tabularData_277_, lean_object* v_properties_278_, lean_object* v_a_279_){
_start:
{
lean_object* v_res_280_; 
v_res_280_ = l_Lasm_JS_Web_console_table(v_tabularData_277_, v_properties_278_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_trace(lean_object* v_data_289_){
_start:
{
uint8_t v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; size_t v_sz_294_; size_t v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_291_ = 0;
v___x_292_ = ((lean_object*)(l_Lasm_JS_Web_console_trace___closed__2));
v___x_293_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_294_ = lean_array_size(v_data_289_);
v___x_295_ = ((size_t)0ULL);
v___x_296_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_294_, v___x_295_, v_data_289_);
v___x_297_ = l_Lasm_JS_Web_Support_argsWith(v___x_293_, v___x_296_);
lean_dec_ref(v___x_296_);
v___x_298_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_292_, v___x_297_, v___x_291_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_trace___boxed(lean_object* v_data_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = l_Lasm_JS_Web_console_trace(v_data_299_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_warn(lean_object* v_data_310_){
_start:
{
uint8_t v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; size_t v_sz_315_; size_t v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_312_ = 0;
v___x_313_ = ((lean_object*)(l_Lasm_JS_Web_console_warn___closed__2));
v___x_314_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_315_ = lean_array_size(v_data_310_);
v___x_316_ = ((size_t)0ULL);
v___x_317_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_315_, v___x_316_, v_data_310_);
v___x_318_ = l_Lasm_JS_Web_Support_argsWith(v___x_314_, v___x_317_);
lean_dec_ref(v___x_317_);
v___x_319_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_313_, v___x_318_, v___x_312_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_warn___boxed(lean_object* v_data_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lasm_JS_Web_console_warn(v_data_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dir(lean_object* v_item_331_, lean_object* v_options_332_){
_start:
{
uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_334_ = 0;
v___x_335_ = lean_unsigned_to_nat(2u);
v___x_336_ = ((lean_object*)(l_Lasm_JS_Web_console_dir___closed__2));
v___x_337_ = lean_mk_empty_array_with_capacity(v___x_335_);
v___x_338_ = lean_array_push(v___x_337_, v_item_331_);
v___x_339_ = lean_array_push(v___x_338_, v_options_332_);
v___x_340_ = l_Lasm_JS_Web_Support_args(v___x_339_);
v___x_341_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_336_, v___x_340_, v___x_334_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dir___boxed(lean_object* v_item_342_, lean_object* v_options_343_, lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l_Lasm_JS_Web_console_dir(v_item_342_, v_options_343_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dirxml(lean_object* v_data_354_){
_start:
{
uint8_t v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; size_t v_sz_359_; size_t v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_356_ = 0;
v___x_357_ = ((lean_object*)(l_Lasm_JS_Web_console_dirxml___closed__2));
v___x_358_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_359_ = lean_array_size(v_data_354_);
v___x_360_ = ((size_t)0ULL);
v___x_361_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_359_, v___x_360_, v_data_354_);
v___x_362_ = l_Lasm_JS_Web_Support_argsWith(v___x_358_, v___x_361_);
lean_dec_ref(v___x_361_);
v___x_363_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_357_, v___x_362_, v___x_356_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_dirxml___boxed(lean_object* v_data_364_, lean_object* v_a_365_){
_start:
{
lean_object* v_res_366_; 
v_res_366_ = l_Lasm_JS_Web_console_dirxml(v_data_364_);
return v_res_366_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(lean_object* v_x_367_){
_start:
{
if (lean_obj_tag(v_x_367_) == 0)
{
lean_object* v___x_368_; 
v___x_368_ = lean_box(0);
return v___x_368_;
}
else
{
lean_object* v_val_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
v_val_369_ = lean_ctor_get(v_x_367_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v_x_367_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v_x_367_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_val_369_);
lean_dec(v_x_367_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
lean_ctor_set_tag(v___x_371_, 4);
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_val_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_count(lean_object* v_label_385_){
_start:
{
uint8_t v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; 
v___x_387_ = 0;
v___x_388_ = lean_unsigned_to_nat(1u);
v___x_389_ = ((lean_object*)(l_Lasm_JS_Web_console_count___closed__2));
v___x_390_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_385_);
v___x_391_ = lean_mk_empty_array_with_capacity(v___x_388_);
v___x_392_ = lean_array_push(v___x_391_, v___x_390_);
v___x_393_ = l_Lasm_JS_Web_Support_args(v___x_392_);
v___x_394_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_389_, v___x_393_, v___x_387_);
return v___x_394_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_count___boxed(lean_object* v_label_395_, lean_object* v_a_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lasm_JS_Web_console_count(v_label_395_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_countReset(lean_object* v_label_406_){
_start:
{
uint8_t v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_408_ = 0;
v___x_409_ = lean_unsigned_to_nat(1u);
v___x_410_ = ((lean_object*)(l_Lasm_JS_Web_console_countReset___closed__2));
v___x_411_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_406_);
v___x_412_ = lean_mk_empty_array_with_capacity(v___x_409_);
v___x_413_ = lean_array_push(v___x_412_, v___x_411_);
v___x_414_ = l_Lasm_JS_Web_Support_args(v___x_413_);
v___x_415_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_410_, v___x_414_, v___x_408_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_countReset___boxed(lean_object* v_label_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lasm_JS_Web_console_countReset(v_label_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_group(lean_object* v_data_427_){
_start:
{
uint8_t v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; size_t v_sz_432_; size_t v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_429_ = 0;
v___x_430_ = ((lean_object*)(l_Lasm_JS_Web_console_group___closed__2));
v___x_431_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_432_ = lean_array_size(v_data_427_);
v___x_433_ = ((size_t)0ULL);
v___x_434_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_432_, v___x_433_, v_data_427_);
v___x_435_ = l_Lasm_JS_Web_Support_argsWith(v___x_431_, v___x_434_);
lean_dec_ref(v___x_434_);
v___x_436_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_430_, v___x_435_, v___x_429_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_group___boxed(lean_object* v_data_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lasm_JS_Web_console_group(v_data_437_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupCollapsed(lean_object* v_data_448_){
_start:
{
uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; size_t v_sz_453_; size_t v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_450_ = 0;
v___x_451_ = ((lean_object*)(l_Lasm_JS_Web_console_groupCollapsed___closed__2));
v___x_452_ = ((lean_object*)(l_Lasm_JS_Web_console_clear___closed__3));
v_sz_453_ = lean_array_size(v_data_448_);
v___x_454_ = ((size_t)0ULL);
v___x_455_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_453_, v___x_454_, v_data_448_);
v___x_456_ = l_Lasm_JS_Web_Support_argsWith(v___x_452_, v___x_455_);
lean_dec_ref(v___x_455_);
v___x_457_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_451_, v___x_456_, v___x_450_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupCollapsed___boxed(lean_object* v_data_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lasm_JS_Web_console_groupCollapsed(v_data_458_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupEnd(){
_start:
{
uint8_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_470_ = 0;
v___x_471_ = ((lean_object*)(l_Lasm_JS_Web_console_groupEnd___closed__2));
v___x_472_ = lean_obj_once(&l_Lasm_JS_Web_console_clear___closed__4, &l_Lasm_JS_Web_console_clear___closed__4_once, _init_l_Lasm_JS_Web_console_clear___closed__4);
v___x_473_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_471_, v___x_472_, v___x_470_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_groupEnd___boxed(lean_object* v_a_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lasm_JS_Web_console_groupEnd();
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_time(lean_object* v_label_484_){
_start:
{
uint8_t v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_486_ = 0;
v___x_487_ = lean_unsigned_to_nat(1u);
v___x_488_ = ((lean_object*)(l_Lasm_JS_Web_console_time___closed__2));
v___x_489_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_484_);
v___x_490_ = lean_mk_empty_array_with_capacity(v___x_487_);
v___x_491_ = lean_array_push(v___x_490_, v___x_489_);
v___x_492_ = l_Lasm_JS_Web_Support_args(v___x_491_);
v___x_493_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_488_, v___x_492_, v___x_486_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_time___boxed(lean_object* v_label_494_, lean_object* v_a_495_){
_start:
{
lean_object* v_res_496_; 
v_res_496_ = l_Lasm_JS_Web_console_time(v_label_494_);
return v_res_496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeLog(lean_object* v_label_505_, lean_object* v_data_506_){
_start:
{
uint8_t v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; size_t v_sz_514_; size_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_508_ = 0;
v___x_509_ = ((lean_object*)(l_Lasm_JS_Web_console_timeLog___closed__2));
v___x_510_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_505_);
v___x_511_ = lean_unsigned_to_nat(1u);
v___x_512_ = lean_mk_empty_array_with_capacity(v___x_511_);
v___x_513_ = lean_array_push(v___x_512_, v___x_510_);
v_sz_514_ = lean_array_size(v_data_506_);
v___x_515_ = ((size_t)0ULL);
v___x_516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_console_assert_spec__1(v_sz_514_, v___x_515_, v_data_506_);
v___x_517_ = l_Lasm_JS_Web_Support_argsWith(v___x_513_, v___x_516_);
lean_dec_ref(v___x_516_);
v___x_518_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_509_, v___x_517_, v___x_508_);
return v___x_518_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeLog___boxed(lean_object* v_label_519_, lean_object* v_data_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lasm_JS_Web_console_timeLog(v_label_519_, v_data_520_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeEnd(lean_object* v_label_531_){
_start:
{
uint8_t v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_533_ = 0;
v___x_534_ = lean_unsigned_to_nat(1u);
v___x_535_ = ((lean_object*)(l_Lasm_JS_Web_console_timeEnd___closed__2));
v___x_536_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_console_count_spec__0(v_label_531_);
v___x_537_ = lean_mk_empty_array_with_capacity(v___x_534_);
v___x_538_ = lean_array_push(v___x_537_, v___x_536_);
v___x_539_ = l_Lasm_JS_Web_Support_args(v___x_538_);
v___x_540_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_console_assert_spec__2(v___x_535_, v___x_539_, v___x_533_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_console_timeEnd___boxed(lean_object* v_label_541_, lean_object* v_a_542_){
_start:
{
lean_object* v_res_543_; 
v_res_543_ = l_Lasm_JS_Web_console_timeEnd(v_label_541_);
return v_res_543_;
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
