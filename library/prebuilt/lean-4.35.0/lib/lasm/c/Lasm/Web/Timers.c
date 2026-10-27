// Lean compiler output
// Module: Lasm.Web.Timers
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
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
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_Web_callback(lean_object*);
double lean_float_of_nat(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.TimerId"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__10_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setTimeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "setTimeout"};
static const lean_object* l_Lasm_Web_Raw_setTimeout___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_setTimeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_setTimeout___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_setTimeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setTimeout___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_setTimeout___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_setTimeout___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setTimeout(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setTimeout___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_clearTimeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "clearTimeout"};
static const lean_object* l_Lasm_Web_Raw_clearTimeout___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_clearTimeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_clearTimeout___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout(double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_setInterval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "setInterval"};
static const lean_object* l_Lasm_Web_Raw_setInterval___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_setInterval___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_setInterval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_setInterval___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_setInterval___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_setInterval___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_setInterval___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval(lean_object*, double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_clearInterval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "clearInterval"};
static const lean_object* l_Lasm_Web_Raw_clearInterval___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_clearInterval___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_clearInterval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_clearInterval___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_clearInterval___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_clearInterval___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_clearInterval___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval(double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.FrameId"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_requestAnimationFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "requestAnimationFrame"};
static const lean_object* l_Lasm_Web_Raw_requestAnimationFrame___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_requestAnimationFrame___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_requestAnimationFrame___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_requestAnimationFrame___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_requestAnimationFrame___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_requestAnimationFrame___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_requestAnimationFrame___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_cancelAnimationFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "cancelAnimationFrame"};
static const lean_object* l_Lasm_Web_Raw_cancelAnimationFrame___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_cancelAnimationFrame___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_cancelAnimationFrame___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_cancelAnimationFrame___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_cancelAnimationFrame___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_cancelAnimationFrame___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_cancelAnimationFrame___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame(double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_queueMicrotask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "queueMicrotask"};
static const lean_object* l_Lasm_Web_Raw_queueMicrotask___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_queueMicrotask___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_queueMicrotask___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_queueMicrotask___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_queueMicrotask___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_queueMicrotask___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_queueMicrotask___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_nextFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "nextFrame"};
static const lean_object* l_Lasm_Web_Raw_nextFrame___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_nextFrame___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_nextFrame___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_nextFrame___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_nextFrame___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_nextFrame___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_nextFrame___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame();
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_now___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "now"};
static const lean_object* l_Lasm_Web_Raw_now___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_now___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_now___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_now___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_now___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_now___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_now___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now();
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout(double);
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval(double);
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_requestAnimationFrame___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "animation frame time"};
static const lean_object* l_Lasm_Web_requestAnimationFrame___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_requestAnimationFrame___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame(double);
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame();
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_now();
LEAN_EXPORT lean_object* l_Lasm_Web_now___boxed(lean_object*);
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_6_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_7_ = lean_string_utf8_byte_size(v___x_6_);
return v___x_7_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; 
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5);
v___x_10_ = lean_nat_dec_eq(v___x_9_, v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_15_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__10));
v___x_16_ = lean_unsigned_to_nat(46u);
v___x_17_ = lean_unsigned_to_nat(193u);
v___x_18_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9));
v___x_19_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8));
v___x_20_ = l_mkPanicMessageWithDecl(v___x_19_, v___x_18_, v___x_17_, v___x_16_, v___x_15_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0(lean_object* v_context_22_, lean_object* v_d_23_){
_start:
{
lean_object* v___y_26_; lean_object* v___y_27_; 
if (lean_obj_tag(v_d_23_) == 3)
{
double v_n_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v_n_31_ = lean_ctor_get_float(v_d_23_, 0);
lean_dec_ref_known(v_d_23_, 0);
v___x_32_ = lean_box_float(v_n_31_);
v___x_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
return v___x_33_;
}
else
{
lean_object* v___x_34_; lean_object* v_received_36_; 
v___x_34_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_23_) == 9)
{
lean_object* v_value_50_; lean_object* v_description_51_; uint8_t v___x_52_; 
v_value_50_ = lean_ctor_get(v_d_23_, 0);
v_description_51_ = lean_ctor_get(v_d_23_, 1);
v___x_52_ = lean_string_dec_eq(v_description_51_, v___x_34_);
if (v___x_52_ == 0)
{
goto v___jp_48_;
}
else
{
uint32_t v___x_53_; uint64_t v___x_54_; lean_object* v___x_55_; uint32_t v___x_56_; lean_object* v___x_57_; 
lean_inc_n(v_value_50_, 2);
lean_dec_ref_known(v_d_23_, 2);
v___x_53_ = 206;
v___x_54_ = 0ULL;
v___x_55_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_55_, 0, v_value_50_);
lean_ctor_set(v___x_55_, 1, v___x_34_);
v___x_56_ = lasm_js_value_handle(v_value_50_);
lean_dec(v_value_50_);
v___x_57_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_53_, v___x_54_, v___x_55_, v___x_56_);
lean_dec_ref_known(v___x_55_, 2);
if (lean_obj_tag(v___x_57_) == 0)
{
lean_object* v_a_58_; uint8_t v___x_59_; 
v_a_58_ = lean_ctor_get(v___x_57_, 0);
lean_inc(v_a_58_);
lean_dec_ref_known(v___x_57_, 1);
v___x_59_ = lean_string_validate_utf8(v_a_58_);
if (v___x_59_ == 0)
{
lean_object* v___x_60_; lean_object* v___x_61_; 
lean_dec(v_a_58_);
v___x_60_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11);
v___x_61_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_60_);
v_received_36_ = v___x_61_;
goto v___jp_35_;
}
else
{
lean_object* v___x_62_; 
v___x_62_ = lean_string_from_utf8_unchecked(v_a_58_);
v_received_36_ = v___x_62_;
goto v___jp_35_;
}
}
else
{
lean_object* v___x_63_; 
lean_dec_ref_known(v___x_57_, 1);
v___x_63_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12));
v_received_36_ = v___x_63_;
goto v___jp_35_;
}
}
}
else
{
goto v___jp_48_;
}
v___jp_35_:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; 
v___x_37_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_38_ = lean_string_append(v___x_37_, v_context_22_);
v___x_39_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2));
v___x_40_ = lean_string_append(v___x_38_, v___x_39_);
v___x_41_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3));
v___x_42_ = lean_string_append(v___x_40_, v___x_41_);
v___x_43_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_44_ = lean_string_append(v___x_42_, v___x_43_);
v___x_45_ = lean_string_append(v___x_44_, v_received_36_);
lean_dec_ref(v_received_36_);
v___x_46_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6);
if (v___x_46_ == 0)
{
lean_object* v___x_47_; 
v___x_47_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7));
v___y_26_ = v___x_45_;
v___y_27_ = v___x_47_;
goto v___jp_25_;
}
else
{
v___y_26_ = v___x_45_;
v___y_27_ = v___x_34_;
goto v___jp_25_;
}
}
v___jp_48_:
{
lean_object* v___x_49_; 
v___x_49_ = l_Lasm_JS_Data_describe(v_d_23_);
v_received_36_ = v___x_49_;
goto v___jp_35_;
}
}
v___jp_25_:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_string_append(v___y_26_, v___y_27_);
v___x_29_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
v___x_30_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___boxed(lean_object* v_context_64_, lean_object* v_d_65_, lean_object* v_a_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0(v_context_64_, v_d_65_);
lean_dec_ref(v_context_64_);
return v_res_67_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1(void){
_start:
{
uint8_t v___x_69_; uint64_t v___x_70_; 
v___x_69_ = 0;
v___x_70_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(lean_object* v_b_71_, lean_object* v_args_72_, uint8_t v_await_73_){
_start:
{
uint64_t v___y_76_; uint64_t v___y_77_; uint64_t v___x_120_; uint64_t v___y_122_; 
v___x_120_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_73_ == 0)
{
uint64_t v___x_127_; 
v___x_127_ = 0ULL;
v___y_122_ = v___x_127_;
goto v___jp_121_;
}
else
{
uint64_t v___x_128_; 
v___x_128_ = 2ULL;
v___y_122_ = v___x_128_;
goto v___jp_121_;
}
v___jp_75_:
{
uint64_t v_flags_78_; uint32_t v___x_79_; lean_object* v___x_80_; uint32_t v___x_81_; lean_object* v___x_82_; 
v_flags_78_ = lean_uint64_lor(v___y_76_, v___y_77_);
v___x_79_ = 214;
v___x_80_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_71_, v_args_72_);
v___x_81_ = 0;
v___x_82_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_79_, v_flags_78_, v___x_80_, v___x_81_);
lean_dec(v___x_80_);
if (lean_obj_tag(v___x_82_) == 0)
{
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_84_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
lean_inc(v_a_83_);
lean_dec_ref_known(v___x_82_, 1);
v___x_84_ = l_Lasm_JS_Wire_decode(v_a_83_);
lean_dec(v_a_83_);
if (lean_obj_tag(v___x_84_) == 0)
{
lean_object* v_a_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v_a_85_ = lean_ctor_get(v___x_84_, 0);
lean_inc(v_a_85_);
lean_dec_ref_known(v___x_84_, 1);
v___x_86_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_71_);
v___x_87_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0(v___x_86_, v_a_85_);
lean_dec_ref(v___x_86_);
return v___x_87_;
}
else
{
lean_object* v_a_88_; lean_object* v___x_90_; uint8_t v_isShared_91_; uint8_t v_isSharedCheck_95_; 
v_a_88_ = lean_ctor_get(v___x_84_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_84_);
if (v_isSharedCheck_95_ == 0)
{
v___x_90_ = v___x_84_;
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
else
{
lean_inc(v_a_88_);
lean_dec(v___x_84_);
v___x_90_ = lean_box(0);
v_isShared_91_ = v_isSharedCheck_95_;
goto v_resetjp_89_;
}
v_resetjp_89_:
{
lean_object* v___x_93_; 
if (v_isShared_91_ == 0)
{
v___x_93_ = v___x_90_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v_a_88_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
else
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_103_; 
v_a_96_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_103_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_103_ == 0)
{
v___x_98_ = v___x_82_;
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_82_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_103_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
lean_ctor_set_tag(v___x_98_, 1);
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
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_119_; 
v_a_104_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_119_ == 0)
{
v___x_106_ = v___x_82_;
v_isShared_107_ = v_isSharedCheck_119_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_82_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_119_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
v___x_108_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_109_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_71_);
v___x_110_ = lean_string_append(v___x_108_, v___x_109_);
lean_dec_ref(v___x_109_);
v___x_111_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_112_ = lean_string_append(v___x_110_, v___x_111_);
v___x_113_ = lean_io_error_to_string(v_a_104_);
v___x_114_ = lean_string_append(v___x_112_, v___x_113_);
lean_dec_ref(v___x_113_);
v___x_115_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_115_, 0, v___x_114_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 0, v___x_115_);
v___x_117_ = v___x_106_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
}
v___jp_121_:
{
uint8_t v_construct_123_; uint64_t v___x_124_; 
v_construct_123_ = lean_ctor_get_uint8(v_b_71_, sizeof(void*)*4);
v___x_124_ = lean_uint64_lor(v___x_120_, v___y_122_);
if (v_construct_123_ == 0)
{
uint64_t v___x_125_; 
v___x_125_ = 0ULL;
v___y_76_ = v___x_124_;
v___y_77_ = v___x_125_;
goto v___jp_75_;
}
else
{
uint64_t v___x_126_; 
v___x_126_ = 4ULL;
v___y_76_ = v___x_124_;
v___y_77_ = v___x_126_;
goto v___jp_75_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___boxed(lean_object* v_b_129_, lean_object* v_args_130_, lean_object* v_await_131_, lean_object* v_a_132_){
_start:
{
uint8_t v_await_boxed_133_; lean_object* v_res_134_; 
v_await_boxed_133_ = lean_unbox(v_await_131_);
v_res_134_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(v_b_129_, v_args_130_, v_await_boxed_133_);
lean_dec_ref(v_b_129_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setTimeout(lean_object* v_a_144_, double v_a_145_){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; uint8_t v___x_154_; lean_object* v___x_155_; 
v___x_147_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__2));
v___x_148_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_149_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_150_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_150_, 0, v_a_144_);
lean_ctor_set(v___x_150_, 1, v___x_149_);
v___x_151_ = lean_array_push(v___x_148_, v___x_150_);
v___x_152_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_152_, 0, v_a_145_);
v___x_153_ = lean_array_push(v___x_151_, v___x_152_);
v___x_154_ = 1;
v___x_155_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(v___x_147_, v___x_153_, v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setTimeout___boxed(lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
double v_a_770__boxed_159_; lean_object* v_res_160_; 
v_a_770__boxed_159_ = lean_unbox_float(v_a_157_);
lean_dec_ref(v_a_157_);
v_res_160_ = l_Lasm_Web_Raw_setTimeout(v_a_156_, v_a_770__boxed_159_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(lean_object* v_b_161_, lean_object* v_args_162_, uint8_t v_await_163_){
_start:
{
uint64_t v___y_166_; uint64_t v___y_167_; uint64_t v___x_208_; uint64_t v___y_210_; 
v___x_208_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_163_ == 0)
{
uint64_t v___x_215_; 
v___x_215_ = 0ULL;
v___y_210_ = v___x_215_;
goto v___jp_209_;
}
else
{
uint64_t v___x_216_; 
v___x_216_ = 2ULL;
v___y_210_ = v___x_216_;
goto v___jp_209_;
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
lean_object* v___x_175_; 
lean_dec_ref_known(v___x_174_, 1);
v___x_175_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_175_;
}
else
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_183_; 
v_a_176_ = lean_ctor_get(v___x_174_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_174_);
if (v_isSharedCheck_183_ == 0)
{
v___x_178_ = v___x_174_;
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v___x_174_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
lean_object* v___x_181_; 
if (v_isShared_179_ == 0)
{
v___x_181_ = v___x_178_;
goto v_reusejp_180_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_a_176_);
v___x_181_ = v_reuseFailAlloc_182_;
goto v_reusejp_180_;
}
v_reusejp_180_:
{
return v___x_181_;
}
}
}
}
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
v_a_184_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_172_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_172_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set_tag(v___x_186_, 1);
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
else
{
lean_object* v_a_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_207_; 
v_a_192_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_207_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_207_ == 0)
{
v___x_194_ = v___x_172_;
v_isShared_195_ = v_isSharedCheck_207_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_a_192_);
lean_dec(v___x_172_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_207_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_205_; 
v___x_196_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_197_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_161_);
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
v___x_201_ = lean_io_error_to_string(v_a_192_);
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
lean_dec_ref(v___x_201_);
v___x_203_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_203_, 0, v___x_202_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 0, v___x_203_);
v___x_205_ = v___x_194_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___x_203_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
}
}
v___jp_209_:
{
uint8_t v_construct_211_; uint64_t v___x_212_; 
v_construct_211_ = lean_ctor_get_uint8(v_b_161_, sizeof(void*)*4);
v___x_212_ = lean_uint64_lor(v___x_208_, v___y_210_);
if (v_construct_211_ == 0)
{
uint64_t v___x_213_; 
v___x_213_ = 0ULL;
v___y_166_ = v___x_212_;
v___y_167_ = v___x_213_;
goto v___jp_165_;
}
else
{
uint64_t v___x_214_; 
v___x_214_ = 4ULL;
v___y_166_ = v___x_212_;
v___y_167_ = v___x_214_;
goto v___jp_165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0___boxed(lean_object* v_b_217_, lean_object* v_args_218_, lean_object* v_await_219_, lean_object* v_a_220_){
_start:
{
uint8_t v_await_boxed_221_; lean_object* v_res_222_; 
v_await_boxed_221_ = lean_unbox(v_await_219_);
v_res_222_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v_b_217_, v_args_218_, v_await_boxed_221_);
lean_dec_ref(v_b_217_);
return v_res_222_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout(double v_a_229_){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; lean_object* v___x_236_; 
v___x_231_ = ((lean_object*)(l_Lasm_Web_Raw_clearTimeout___closed__1));
v___x_232_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_233_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_233_, 0, v_a_229_);
v___x_234_ = lean_array_push(v___x_232_, v___x_233_);
v___x_235_ = 1;
v___x_236_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_231_, v___x_234_, v___x_235_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout___boxed(lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
double v_a_292__boxed_239_; lean_object* v_res_240_; 
v_a_292__boxed_239_ = lean_unbox_float(v_a_237_);
lean_dec_ref(v_a_237_);
v_res_240_ = l_Lasm_Web_Raw_clearTimeout(v_a_292__boxed_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval(lean_object* v_a_247_, double v_a_248_){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; uint8_t v___x_257_; lean_object* v___x_258_; 
v___x_250_ = ((lean_object*)(l_Lasm_Web_Raw_setInterval___closed__1));
v___x_251_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_252_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_253_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_253_, 0, v_a_247_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_array_push(v___x_251_, v___x_253_);
v___x_255_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_255_, 0, v_a_248_);
v___x_256_ = lean_array_push(v___x_254_, v___x_255_);
v___x_257_ = 1;
v___x_258_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(v___x_250_, v___x_256_, v___x_257_);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval___boxed(lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_){
_start:
{
double v_a_131__boxed_262_; lean_object* v_res_263_; 
v_a_131__boxed_262_ = lean_unbox_float(v_a_260_);
lean_dec_ref(v_a_260_);
v_res_263_ = l_Lasm_Web_Raw_setInterval(v_a_259_, v_a_131__boxed_262_);
return v_res_263_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval(double v_a_270_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; uint8_t v___x_276_; lean_object* v___x_277_; 
v___x_272_ = ((lean_object*)(l_Lasm_Web_Raw_clearInterval___closed__1));
v___x_273_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_274_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_274_, 0, v_a_270_);
v___x_275_ = lean_array_push(v___x_273_, v___x_274_);
v___x_276_ = 1;
v___x_277_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_272_, v___x_275_, v___x_276_);
return v___x_277_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval___boxed(lean_object* v_a_278_, lean_object* v_a_279_){
_start:
{
double v_a_86__boxed_280_; lean_object* v_res_281_; 
v_a_86__boxed_280_ = lean_unbox_float(v_a_278_);
lean_dec_ref(v_a_278_);
v_res_281_ = l_Lasm_Web_Raw_clearInterval(v_a_86__boxed_280_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(lean_object* v_context_283_, lean_object* v_d_284_){
_start:
{
lean_object* v___y_287_; lean_object* v___y_288_; 
if (lean_obj_tag(v_d_284_) == 3)
{
double v_n_292_; lean_object* v___x_293_; lean_object* v___x_294_; 
v_n_292_ = lean_ctor_get_float(v_d_284_, 0);
lean_dec_ref_known(v_d_284_, 0);
v___x_293_ = lean_box_float(v_n_292_);
v___x_294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_294_, 0, v___x_293_);
return v___x_294_;
}
else
{
lean_object* v___x_295_; lean_object* v_received_297_; 
v___x_295_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_284_) == 9)
{
lean_object* v_value_311_; lean_object* v_description_312_; uint8_t v___x_313_; 
v_value_311_ = lean_ctor_get(v_d_284_, 0);
v_description_312_ = lean_ctor_get(v_d_284_, 1);
v___x_313_ = lean_string_dec_eq(v_description_312_, v___x_295_);
if (v___x_313_ == 0)
{
goto v___jp_309_;
}
else
{
uint32_t v___x_314_; uint64_t v___x_315_; lean_object* v___x_316_; uint32_t v___x_317_; lean_object* v___x_318_; 
lean_inc_n(v_value_311_, 2);
lean_dec_ref_known(v_d_284_, 2);
v___x_314_ = 206;
v___x_315_ = 0ULL;
v___x_316_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_316_, 0, v_value_311_);
lean_ctor_set(v___x_316_, 1, v___x_295_);
v___x_317_ = lasm_js_value_handle(v_value_311_);
lean_dec(v_value_311_);
v___x_318_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_314_, v___x_315_, v___x_316_, v___x_317_);
lean_dec_ref_known(v___x_316_, 2);
if (lean_obj_tag(v___x_318_) == 0)
{
lean_object* v_a_319_; uint8_t v___x_320_; 
v_a_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_a_319_);
lean_dec_ref_known(v___x_318_, 1);
v___x_320_ = lean_string_validate_utf8(v_a_319_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; 
lean_dec(v_a_319_);
v___x_321_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11);
v___x_322_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_321_);
v_received_297_ = v___x_322_;
goto v___jp_296_;
}
else
{
lean_object* v___x_323_; 
v___x_323_ = lean_string_from_utf8_unchecked(v_a_319_);
v_received_297_ = v___x_323_;
goto v___jp_296_;
}
}
else
{
lean_object* v___x_324_; 
lean_dec_ref_known(v___x_318_, 1);
v___x_324_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12));
v_received_297_ = v___x_324_;
goto v___jp_296_;
}
}
}
else
{
goto v___jp_309_;
}
v___jp_296_:
{
lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_298_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_299_ = lean_string_append(v___x_298_, v_context_283_);
v___x_300_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2));
v___x_301_ = lean_string_append(v___x_299_, v___x_300_);
v___x_302_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___closed__0));
v___x_303_ = lean_string_append(v___x_301_, v___x_302_);
v___x_304_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_305_ = lean_string_append(v___x_303_, v___x_304_);
v___x_306_ = lean_string_append(v___x_305_, v_received_297_);
lean_dec_ref(v_received_297_);
v___x_307_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; 
v___x_308_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7));
v___y_287_ = v___x_306_;
v___y_288_ = v___x_308_;
goto v___jp_286_;
}
else
{
v___y_287_ = v___x_306_;
v___y_288_ = v___x_295_;
goto v___jp_286_;
}
}
v___jp_309_:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lasm_JS_Data_describe(v_d_284_);
v_received_297_ = v___x_310_;
goto v___jp_296_;
}
}
v___jp_286_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_289_ = lean_string_append(v___y_287_, v___y_288_);
v___x_290_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
v___x_291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_291_, 0, v___x_290_);
return v___x_291_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___boxed(lean_object* v_context_325_, lean_object* v_d_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(v_context_325_, v_d_326_);
lean_dec_ref(v_context_325_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(lean_object* v_b_329_, lean_object* v_args_330_, uint8_t v_await_331_){
_start:
{
uint64_t v___y_334_; uint64_t v___y_335_; uint64_t v___x_378_; uint64_t v___y_380_; 
v___x_378_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_331_ == 0)
{
uint64_t v___x_385_; 
v___x_385_ = 0ULL;
v___y_380_ = v___x_385_;
goto v___jp_379_;
}
else
{
uint64_t v___x_386_; 
v___x_386_ = 2ULL;
v___y_380_ = v___x_386_;
goto v___jp_379_;
}
v___jp_333_:
{
uint64_t v_flags_336_; uint32_t v___x_337_; lean_object* v___x_338_; uint32_t v___x_339_; lean_object* v___x_340_; 
v_flags_336_ = lean_uint64_lor(v___y_334_, v___y_335_);
v___x_337_ = 214;
v___x_338_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_329_, v_args_330_);
v___x_339_ = 0;
v___x_340_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_337_, v_flags_336_, v___x_338_, v___x_339_);
lean_dec(v___x_338_);
if (lean_obj_tag(v___x_340_) == 0)
{
if (lean_obj_tag(v___x_340_) == 0)
{
lean_object* v_a_341_; lean_object* v___x_342_; 
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref_known(v___x_340_, 1);
v___x_342_ = l_Lasm_JS_Wire_decode(v_a_341_);
lean_dec(v_a_341_);
if (lean_obj_tag(v___x_342_) == 0)
{
lean_object* v_a_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_a_343_ = lean_ctor_get(v___x_342_, 0);
lean_inc(v_a_343_);
lean_dec_ref_known(v___x_342_, 1);
v___x_344_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_329_);
v___x_345_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(v___x_344_, v_a_343_);
lean_dec_ref(v___x_344_);
return v___x_345_;
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
v_a_346_ = lean_ctor_get(v___x_342_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_342_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_342_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_342_);
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
else
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_361_; 
v_a_354_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_361_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_361_ == 0)
{
v___x_356_ = v___x_340_;
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_340_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_361_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
if (v_isShared_357_ == 0)
{
lean_ctor_set_tag(v___x_356_, 1);
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_377_; 
v_a_362_ = lean_ctor_get(v___x_340_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_377_ == 0)
{
v___x_364_ = v___x_340_;
v_isShared_365_ = v_isSharedCheck_377_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_340_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_377_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; 
v___x_366_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_367_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_329_);
v___x_368_ = lean_string_append(v___x_366_, v___x_367_);
lean_dec_ref(v___x_367_);
v___x_369_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_370_ = lean_string_append(v___x_368_, v___x_369_);
v___x_371_ = lean_io_error_to_string(v_a_362_);
v___x_372_ = lean_string_append(v___x_370_, v___x_371_);
lean_dec_ref(v___x_371_);
v___x_373_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_373_, 0, v___x_372_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 0, v___x_373_);
v___x_375_ = v___x_364_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v___x_373_);
v___x_375_ = v_reuseFailAlloc_376_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
return v___x_375_;
}
}
}
}
v___jp_379_:
{
uint8_t v_construct_381_; uint64_t v___x_382_; 
v_construct_381_ = lean_ctor_get_uint8(v_b_329_, sizeof(void*)*4);
v___x_382_ = lean_uint64_lor(v___x_378_, v___y_380_);
if (v_construct_381_ == 0)
{
uint64_t v___x_383_; 
v___x_383_ = 0ULL;
v___y_334_ = v___x_382_;
v___y_335_ = v___x_383_;
goto v___jp_333_;
}
else
{
uint64_t v___x_384_; 
v___x_384_ = 4ULL;
v___y_334_ = v___x_382_;
v___y_335_ = v___x_384_;
goto v___jp_333_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0___boxed(lean_object* v_b_387_, lean_object* v_args_388_, lean_object* v_await_389_, lean_object* v_a_390_){
_start:
{
uint8_t v_await_boxed_391_; lean_object* v_res_392_; 
v_await_boxed_391_ = lean_unbox(v_await_389_);
v_res_392_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(v_b_387_, v_args_388_, v_await_boxed_391_);
lean_dec_ref(v_b_387_);
return v_res_392_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame(lean_object* v_a_399_){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; lean_object* v___x_407_; 
v___x_401_ = ((lean_object*)(l_Lasm_Web_Raw_requestAnimationFrame___closed__1));
v___x_402_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_404_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_404_, 0, v_a_399_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_array_push(v___x_402_, v___x_404_);
v___x_406_ = 1;
v___x_407_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(v___x_401_, v___x_405_, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame___boxed(lean_object* v_a_408_, lean_object* v_a_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l_Lasm_Web_Raw_requestAnimationFrame(v_a_408_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame(double v_a_417_){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; 
v___x_419_ = ((lean_object*)(l_Lasm_Web_Raw_cancelAnimationFrame___closed__1));
v___x_420_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_421_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_421_, 0, v_a_417_);
v___x_422_ = lean_array_push(v___x_420_, v___x_421_);
v___x_423_ = 1;
v___x_424_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_419_, v___x_422_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame___boxed(lean_object* v_a_425_, lean_object* v_a_426_){
_start:
{
double v_a_86__boxed_427_; lean_object* v_res_428_; 
v_a_86__boxed_427_ = lean_unbox_float(v_a_425_);
lean_dec_ref(v_a_425_);
v_res_428_ = l_Lasm_Web_Raw_cancelAnimationFrame(v_a_86__boxed_427_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask(lean_object* v_a_435_){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; uint8_t v___x_442_; lean_object* v___x_443_; 
v___x_437_ = ((lean_object*)(l_Lasm_Web_Raw_queueMicrotask___closed__1));
v___x_438_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_439_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_440_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_440_, 0, v_a_435_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = lean_array_push(v___x_438_, v___x_440_);
v___x_442_ = 1;
v___x_443_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_437_, v___x_441_, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask___boxed(lean_object* v_a_444_, lean_object* v_a_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lasm_Web_Raw_queueMicrotask(v_a_444_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(lean_object* v___f_447_, lean_object* v_x_448_){
_start:
{
if (lean_obj_tag(v_x_448_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_458_; 
lean_dec_ref(v___f_447_);
v_a_450_ = lean_ctor_get(v_x_448_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_458_ == 0)
{
v___x_452_ = v_x_448_;
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v_x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_458_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_455_; 
if (v_isShared_453_ == 0)
{
v___x_455_ = v___x_452_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_450_);
v___x_455_ = v_reuseFailAlloc_457_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
lean_object* v___x_456_; 
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
}
}
else
{
lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_470_; 
v_isSharedCheck_470_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_470_ == 0)
{
lean_object* v_unused_471_; 
v_unused_471_ = lean_ctor_get(v_x_448_, 0);
lean_dec(v_unused_471_);
v___x_460_ = v_x_448_;
v_isShared_461_ = v_isSharedCheck_470_;
goto v_resetjp_459_;
}
else
{
lean_dec(v_x_448_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_470_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_462_; uint8_t v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_462_ = lean_unsigned_to_nat(0u);
v___x_463_ = 0;
v___x_464_ = lean_io_promise_new();
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_464_);
v___x_466_ = v___x_460_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_464_);
v___x_466_ = v_reuseFailAlloc_469_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_467_, 0, v___x_466_);
v___x_468_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_462_, v___x_463_, v___x_467_, v___f_447_);
return v___x_468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed(lean_object* v___f_472_, lean_object* v_x_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(v___f_472_, v_x_473_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(lean_object* v_a_476_, lean_object* v_x_477_){
_start:
{
if (lean_obj_tag(v_x_477_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_487_; 
v_a_479_ = lean_ctor_get(v_x_477_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v_x_477_);
if (v_isSharedCheck_487_ == 0)
{
v___x_481_ = v_x_477_;
v_isShared_482_ = v_isSharedCheck_487_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v_x_477_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_487_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_486_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_485_; 
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
}
else
{
lean_object* v___x_488_; 
lean_dec_ref_known(v_x_477_, 1);
v___x_488_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_476_);
return v___x_488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed(lean_object* v_a_489_, lean_object* v_x_490_, lean_object* v___y_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(v_a_489_, v_x_490_);
lean_dec(v_a_489_);
return v_res_492_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(lean_object* v_payload_493_, lean_object* v_failurePrefix_494_, lean_object* v___f_495_, lean_object* v___f_496_, uint32_t v_op_497_, uint64_t v_flags_498_, lean_object* v___f_499_, lean_object* v_x_500_){
_start:
{
if (lean_obj_tag(v_x_500_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_504_; uint8_t v_isShared_505_; uint8_t v_isSharedCheck_510_; 
lean_dec_ref(v___f_499_);
lean_dec_ref(v___f_496_);
lean_dec_ref(v___f_495_);
v_a_502_ = lean_ctor_get(v_x_500_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_x_500_);
if (v_isSharedCheck_510_ == 0)
{
v___x_504_ = v_x_500_;
v_isShared_505_ = v_isSharedCheck_510_;
goto v_resetjp_503_;
}
else
{
lean_inc(v_a_502_);
lean_dec(v_x_500_);
v___x_504_ = lean_box(0);
v_isShared_505_ = v_isSharedCheck_510_;
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
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_502_);
v___x_507_ = v_reuseFailAlloc_509_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
lean_object* v___x_508_; 
v___x_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_508_, 0, v___x_507_);
return v___x_508_;
}
}
}
else
{
lean_object* v_a_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_552_; 
v_a_511_ = lean_ctor_get(v_x_500_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v_x_500_);
if (v_isSharedCheck_552_ == 0)
{
v___x_513_ = v_x_500_;
v_isShared_514_ = v_isSharedCheck_552_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_a_511_);
lean_dec(v_x_500_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_552_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
uint32_t v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_515_ = 0;
v___x_516_ = l_Lasm_JS_Wire_encode(v_payload_493_);
v___x_517_ = lean_string_utf8_byte_size(v_failurePrefix_494_);
v___x_518_ = lean_unsigned_to_nat(0u);
v___x_519_ = lean_nat_dec_eq(v___x_517_, v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___f_520_; lean_object* v_val_522_; lean_object* v___x_527_; 
lean_dec_ref(v___f_499_);
lean_inc(v_a_511_);
v___f_520_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_520_, 0, v_a_511_);
v___x_527_ = lasm_js_call_into(v_a_511_, v_op_497_, v___x_515_, v_flags_498_, v___x_516_, v_payload_493_);
lean_dec_ref(v___x_516_);
lean_dec(v_a_511_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v_a_528_; lean_object* v___x_530_; 
v_a_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_527_, 1);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v_a_528_);
v___x_530_ = v___x_513_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v_a_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
v_val_522_ = v___x_530_;
goto v___jp_521_;
}
}
else
{
lean_object* v_a_532_; lean_object* v___x_534_; 
v_a_532_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_527_, 1);
if (v_isShared_514_ == 0)
{
lean_ctor_set_tag(v___x_513_, 0);
lean_ctor_set(v___x_513_, 0, v_a_532_);
v___x_534_ = v___x_513_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
v_val_522_ = v___x_534_;
goto v___jp_521_;
}
}
v___jp_521_:
{
lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_523_, 0, v_val_522_);
v___x_524_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_518_, v___x_519_, v___x_523_, v___f_520_);
v___x_525_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_518_, v___x_519_, v___x_524_, v___f_495_);
v___x_526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_518_, v___x_519_, v___x_525_, v___f_496_);
return v___x_526_;
}
}
else
{
lean_object* v___f_536_; uint8_t v___x_537_; lean_object* v_val_539_; lean_object* v___x_543_; 
lean_dec_ref(v___f_496_);
lean_dec_ref(v___f_495_);
lean_inc(v_a_511_);
v___f_536_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_536_, 0, v_a_511_);
v___x_537_ = 0;
v___x_543_ = lasm_js_call_into(v_a_511_, v_op_497_, v___x_515_, v_flags_498_, v___x_516_, v_payload_493_);
lean_dec_ref(v___x_516_);
lean_dec(v_a_511_);
if (lean_obj_tag(v___x_543_) == 0)
{
lean_object* v_a_544_; lean_object* v___x_546_; 
v_a_544_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_544_);
lean_dec_ref_known(v___x_543_, 1);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v_a_544_);
v___x_546_ = v___x_513_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
v_val_539_ = v___x_546_;
goto v___jp_538_;
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; 
v_a_548_ = lean_ctor_get(v___x_543_, 0);
lean_inc(v_a_548_);
lean_dec_ref_known(v___x_543_, 1);
if (v_isShared_514_ == 0)
{
lean_ctor_set_tag(v___x_513_, 0);
lean_ctor_set(v___x_513_, 0, v_a_548_);
v___x_550_ = v___x_513_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_a_548_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
v_val_539_ = v___x_550_;
goto v___jp_538_;
}
}
v___jp_538_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_540_, 0, v_val_539_);
v___x_541_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_518_, v___x_537_, v___x_540_, v___f_536_);
v___x_542_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_518_, v___x_537_, v___x_541_, v___f_499_);
return v___x_542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_553_, lean_object* v_failurePrefix_554_, lean_object* v___f_555_, lean_object* v___f_556_, lean_object* v_op_557_, lean_object* v_flags_558_, lean_object* v___f_559_, lean_object* v_x_560_, lean_object* v___y_561_){
_start:
{
uint32_t v_op_boxed_562_; uint64_t v_flags_boxed_563_; lean_object* v_res_564_; 
v_op_boxed_562_ = lean_unbox_uint32(v_op_557_);
lean_dec(v_op_557_);
v_flags_boxed_563_ = lean_unbox_uint64(v_flags_558_);
lean_dec_ref(v_flags_558_);
v_res_564_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(v_payload_553_, v_failurePrefix_554_, v___f_555_, v___f_556_, v_op_boxed_562_, v_flags_boxed_563_, v___f_559_, v_x_560_);
lean_dec_ref(v_failurePrefix_554_);
lean_dec(v_payload_553_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(lean_object* v_context_566_, lean_object* v_d_567_){
_start:
{
lean_object* v___y_570_; lean_object* v___y_571_; 
if (lean_obj_tag(v_d_567_) == 3)
{
double v_n_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_n_575_ = lean_ctor_get_float(v_d_567_, 0);
lean_dec_ref_known(v_d_567_, 0);
v___x_576_ = lean_box_float(v_n_575_);
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
else
{
lean_object* v___x_578_; lean_object* v_received_580_; 
v___x_578_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_567_) == 9)
{
lean_object* v_value_594_; lean_object* v_description_595_; uint8_t v___x_596_; 
v_value_594_ = lean_ctor_get(v_d_567_, 0);
v_description_595_ = lean_ctor_get(v_d_567_, 1);
v___x_596_ = lean_string_dec_eq(v_description_595_, v___x_578_);
if (v___x_596_ == 0)
{
goto v___jp_592_;
}
else
{
uint32_t v___x_597_; uint64_t v___x_598_; lean_object* v___x_599_; uint32_t v___x_600_; lean_object* v___x_601_; 
lean_inc_n(v_value_594_, 2);
lean_dec_ref_known(v_d_567_, 2);
v___x_597_ = 206;
v___x_598_ = 0ULL;
v___x_599_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_599_, 0, v_value_594_);
lean_ctor_set(v___x_599_, 1, v___x_578_);
v___x_600_ = lasm_js_value_handle(v_value_594_);
lean_dec(v_value_594_);
v___x_601_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_597_, v___x_598_, v___x_599_, v___x_600_);
lean_dec_ref_known(v___x_599_, 2);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; uint8_t v___x_603_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
v___x_603_ = lean_string_validate_utf8(v_a_602_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; 
lean_dec(v_a_602_);
v___x_604_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11);
v___x_605_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_604_);
v_received_580_ = v___x_605_;
goto v___jp_579_;
}
else
{
lean_object* v___x_606_; 
v___x_606_ = lean_string_from_utf8_unchecked(v_a_602_);
v_received_580_ = v___x_606_;
goto v___jp_579_;
}
}
else
{
lean_object* v___x_607_; 
lean_dec_ref_known(v___x_601_, 1);
v___x_607_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12));
v_received_580_ = v___x_607_;
goto v___jp_579_;
}
}
}
else
{
goto v___jp_592_;
}
v___jp_579_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; uint8_t v___x_590_; 
v___x_581_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_582_ = lean_string_append(v___x_581_, v_context_566_);
v___x_583_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2));
v___x_584_ = lean_string_append(v___x_582_, v___x_583_);
v___x_585_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0));
v___x_586_ = lean_string_append(v___x_584_, v___x_585_);
v___x_587_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
v___x_589_ = lean_string_append(v___x_588_, v_received_580_);
lean_dec_ref(v_received_580_);
v___x_590_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6);
if (v___x_590_ == 0)
{
lean_object* v___x_591_; 
v___x_591_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7));
v___y_570_ = v___x_589_;
v___y_571_ = v___x_591_;
goto v___jp_569_;
}
else
{
v___y_570_ = v___x_589_;
v___y_571_ = v___x_578_;
goto v___jp_569_;
}
}
v___jp_592_:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lasm_JS_Data_describe(v_d_567_);
v_received_580_ = v___x_593_;
goto v___jp_579_;
}
}
v___jp_569_:
{
lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_572_ = lean_string_append(v___y_570_, v___y_571_);
v___x_573_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
v___x_574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_574_, 0, v___x_573_);
return v___x_574_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___boxed(lean_object* v_context_608_, lean_object* v_d_609_, lean_object* v_a_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_608_, v_d_609_);
lean_dec_ref(v_context_608_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(lean_object* v_context_612_, lean_object* v_x_613_){
_start:
{
lean_object* v_val_616_; 
if (lean_obj_tag(v_x_613_) == 0)
{
lean_object* v_a_618_; lean_object* v___x_620_; uint8_t v_isShared_621_; uint8_t v_isSharedCheck_626_; 
v_a_618_ = lean_ctor_get(v_x_613_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v_x_613_);
if (v_isSharedCheck_626_ == 0)
{
v___x_620_ = v_x_613_;
v_isShared_621_ = v_isSharedCheck_626_;
goto v_resetjp_619_;
}
else
{
lean_inc(v_a_618_);
lean_dec(v_x_613_);
v___x_620_ = lean_box(0);
v_isShared_621_ = v_isSharedCheck_626_;
goto v_resetjp_619_;
}
v_resetjp_619_:
{
lean_object* v___x_623_; 
if (v_isShared_621_ == 0)
{
v___x_623_ = v___x_620_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_618_);
v___x_623_ = v_reuseFailAlloc_625_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; 
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
return v___x_624_;
}
}
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_640_; 
v_a_627_ = lean_ctor_get(v_x_613_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v_x_613_);
if (v_isSharedCheck_640_ == 0)
{
v___x_629_ = v_x_613_;
v_isShared_630_ = v_isSharedCheck_640_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v_x_613_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_640_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_631_; 
v___x_631_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_612_, v_a_627_);
if (lean_obj_tag(v___x_631_) == 0)
{
lean_object* v_a_632_; lean_object* v___x_634_; 
v_a_632_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_632_);
lean_dec_ref_known(v___x_631_, 1);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 0, v_a_632_);
v___x_634_ = v___x_629_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_632_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
v_val_616_ = v___x_634_;
goto v___jp_615_;
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; 
v_a_636_ = lean_ctor_get(v___x_631_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_631_, 1);
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 0);
lean_ctor_set(v___x_629_, 0, v_a_636_);
v___x_638_ = v___x_629_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
v_val_616_ = v___x_638_;
goto v___jp_615_;
}
}
}
}
v___jp_615_:
{
lean_object* v___x_617_; 
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v_val_616_);
return v___x_617_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed(lean_object* v_context_641_, lean_object* v_x_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(v_context_641_, v_x_642_);
lean_dec_ref(v_context_641_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(lean_object* v_failurePrefix_645_, lean_object* v_x_646_){
_start:
{
if (lean_obj_tag(v_x_646_) == 0)
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_659_; 
v_a_648_ = lean_ctor_get(v_x_646_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v_x_646_);
if (v_isSharedCheck_659_ == 0)
{
v___x_650_ = v_x_646_;
v_isShared_651_ = v_isSharedCheck_659_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v_x_646_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_659_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_656_; 
v___x_652_ = lean_io_error_to_string(v_a_648_);
v___x_653_ = lean_string_append(v_failurePrefix_645_, v___x_652_);
lean_dec_ref(v___x_652_);
v___x_654_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_654_);
v___x_656_ = v___x_650_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_654_);
v___x_656_ = v_reuseFailAlloc_658_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
lean_object* v___x_657_; 
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_656_);
return v___x_657_;
}
}
}
else
{
lean_object* v___x_660_; 
lean_dec_ref(v_failurePrefix_645_);
v___x_660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_660_, 0, v_x_646_);
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed(lean_object* v_failurePrefix_661_, lean_object* v_x_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(v_failurePrefix_661_, v_x_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(lean_object* v___f_665_, lean_object* v_bytes_666_){
_start:
{
lean_object* v___x_668_; uint8_t v___x_669_; lean_object* v_val_671_; lean_object* v___x_674_; 
v___x_668_ = lean_unsigned_to_nat(0u);
v___x_669_ = 0;
v___x_674_ = l_Lasm_JS_Wire_decode(v_bytes_666_);
if (lean_obj_tag(v___x_674_) == 0)
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
lean_ctor_set_tag(v___x_677_, 1);
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
v_val_671_ = v___x_680_;
goto v___jp_670_;
}
}
}
else
{
lean_object* v_a_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_690_; 
v_a_683_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_690_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_690_ == 0)
{
v___x_685_ = v___x_674_;
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_a_683_);
lean_dec(v___x_674_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_690_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_688_; 
if (v_isShared_686_ == 0)
{
lean_ctor_set_tag(v___x_685_, 0);
v___x_688_ = v___x_685_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v_a_683_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
v_val_671_ = v___x_688_;
goto v___jp_670_;
}
}
}
v___jp_670_:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_672_, 0, v_val_671_);
v___x_673_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_668_, v___x_669_, v___x_672_, v___f_665_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed(lean_object* v___f_691_, lean_object* v_bytes_692_, lean_object* v___y_693_){
_start:
{
lean_object* v_res_694_; 
v_res_694_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(v___f_691_, v_bytes_692_);
lean_dec_ref(v_bytes_692_);
return v_res_694_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(lean_object* v___f_695_, lean_object* v_x_696_){
_start:
{
if (lean_obj_tag(v_x_696_) == 0)
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_706_; 
lean_dec_ref(v___f_695_);
v_a_698_ = lean_ctor_get(v_x_696_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v_x_696_);
if (v_isSharedCheck_706_ == 0)
{
v___x_700_ = v_x_696_;
v_isShared_701_ = v_isSharedCheck_706_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v_x_696_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_706_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_705_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; 
v___x_704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_704_, 0, v___x_703_);
return v___x_704_;
}
}
}
else
{
lean_object* v_a_707_; lean_object* v___x_708_; 
v_a_707_ = lean_ctor_get(v_x_696_, 0);
lean_inc(v_a_707_);
lean_dec_ref_known(v_x_696_, 1);
v___x_708_ = lean_apply_2(v___f_695_, v_a_707_, lean_box(0));
return v___x_708_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed(lean_object* v___f_709_, lean_object* v_x_710_, lean_object* v___y_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(v___f_709_, v_x_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(lean_object* v_context_713_, uint32_t v_op_714_, uint64_t v_flags_715_, lean_object* v_payload_716_, lean_object* v_failurePrefix_717_){
_start:
{
lean_object* v___f_719_; lean_object* v___f_720_; lean_object* v___f_721_; lean_object* v___f_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___f_725_; lean_object* v___f_726_; lean_object* v___x_727_; uint8_t v___x_728_; lean_object* v_val_730_; lean_object* v___x_733_; 
lean_inc_ref(v_failurePrefix_717_);
v___f_719_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_719_, 0, v_failurePrefix_717_);
v___f_720_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_720_, 0, v_context_713_);
v___f_721_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_721_, 0, v___f_720_);
v___f_722_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_722_, 0, v___f_721_);
v___x_723_ = lean_box_uint32(v_op_714_);
v___x_724_ = lean_box_uint64(v_flags_715_);
lean_inc_ref(v___f_722_);
v___f_725_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_725_, 0, v_payload_716_);
lean_closure_set(v___f_725_, 1, v_failurePrefix_717_);
lean_closure_set(v___f_725_, 2, v___f_719_);
lean_closure_set(v___f_725_, 3, v___f_722_);
lean_closure_set(v___f_725_, 4, v___x_723_);
lean_closure_set(v___f_725_, 5, v___x_724_);
lean_closure_set(v___f_725_, 6, v___f_722_);
v___f_726_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_726_, 0, v___f_725_);
v___x_727_ = lean_unsigned_to_nat(0u);
v___x_728_ = 0;
v___x_733_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_741_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_741_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_741_ == 0)
{
v___x_736_ = v___x_733_;
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_741_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_739_; 
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 1);
v___x_739_ = v___x_736_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_a_734_);
v___x_739_ = v_reuseFailAlloc_740_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
v_val_730_ = v___x_739_;
goto v___jp_729_;
}
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; uint8_t v_isShared_745_; uint8_t v_isSharedCheck_749_; 
v_a_742_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_749_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_749_ == 0)
{
v___x_744_ = v___x_733_;
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
else
{
lean_inc(v_a_742_);
lean_dec(v___x_733_);
v___x_744_ = lean_box(0);
v_isShared_745_ = v_isSharedCheck_749_;
goto v_resetjp_743_;
}
v_resetjp_743_:
{
lean_object* v___x_747_; 
if (v_isShared_745_ == 0)
{
lean_ctor_set_tag(v___x_744_, 0);
v___x_747_ = v___x_744_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_742_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
v_val_730_ = v___x_747_;
goto v___jp_729_;
}
}
}
v___jp_729_:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v_val_730_);
v___x_732_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_727_, v___x_728_, v___x_731_, v___f_726_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___boxed(lean_object* v_context_750_, lean_object* v_op_751_, lean_object* v_flags_752_, lean_object* v_payload_753_, lean_object* v_failurePrefix_754_, lean_object* v_a_755_){
_start:
{
uint32_t v_op_boxed_756_; uint64_t v_flags_boxed_757_; lean_object* v_res_758_; 
v_op_boxed_756_ = lean_unbox_uint32(v_op_751_);
lean_dec(v_op_751_);
v_flags_boxed_757_ = lean_unbox_uint64(v_flags_752_);
lean_dec_ref(v_flags_752_);
v_res_758_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v_context_750_, v_op_boxed_756_, v_flags_boxed_757_, v_payload_753_, v_failurePrefix_754_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(lean_object* v_b_759_, lean_object* v_args_760_){
_start:
{
uint8_t v_construct_762_; lean_object* v___x_763_; uint32_t v___x_764_; uint64_t v___x_765_; uint64_t v___y_767_; 
v_construct_762_ = lean_ctor_get_uint8(v_b_759_, sizeof(void*)*4);
v___x_763_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_759_);
v___x_764_ = 214;
v___x_765_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_construct_762_ == 0)
{
uint64_t v___x_775_; 
v___x_775_ = 0ULL;
v___y_767_ = v___x_775_;
goto v___jp_766_;
}
else
{
uint64_t v___x_776_; 
v___x_776_ = 4ULL;
v___y_767_ = v___x_776_;
goto v___jp_766_;
}
v___jp_766_:
{
uint64_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_768_ = lean_uint64_lor(v___x_765_, v___y_767_);
v___x_769_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_759_, v_args_760_);
v___x_770_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_771_ = lean_string_append(v___x_770_, v___x_763_);
v___x_772_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_773_ = lean_string_append(v___x_771_, v___x_772_);
v___x_774_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v___x_763_, v___x_764_, v___x_768_, v___x_769_, v___x_773_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0___boxed(lean_object* v_b_777_, lean_object* v_args_778_, lean_object* v_a_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v_b_777_, v_args_778_);
lean_dec_ref(v_b_777_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame(){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_788_ = ((lean_object*)(l_Lasm_Web_Raw_nextFrame___closed__1));
v___x_789_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_790_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v___x_788_, v___x_789_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame___boxed(lean_object* v_a_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lasm_Web_Raw_nextFrame();
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(lean_object* v_b_793_, lean_object* v_args_794_, uint8_t v_await_795_){
_start:
{
uint64_t v___y_798_; uint64_t v___y_799_; uint64_t v___x_842_; uint64_t v___y_844_; 
v___x_842_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_795_ == 0)
{
uint64_t v___x_849_; 
v___x_849_ = 0ULL;
v___y_844_ = v___x_849_;
goto v___jp_843_;
}
else
{
uint64_t v___x_850_; 
v___x_850_ = 2ULL;
v___y_844_ = v___x_850_;
goto v___jp_843_;
}
v___jp_797_:
{
uint64_t v_flags_800_; uint32_t v___x_801_; lean_object* v___x_802_; uint32_t v___x_803_; lean_object* v___x_804_; 
v_flags_800_ = lean_uint64_lor(v___y_798_, v___y_799_);
v___x_801_ = 214;
v___x_802_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_793_, v_args_794_);
v___x_803_ = 0;
v___x_804_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_801_, v_flags_800_, v___x_802_, v___x_803_);
lean_dec(v___x_802_);
if (lean_obj_tag(v___x_804_) == 0)
{
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_806_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_805_);
lean_dec_ref_known(v___x_804_, 1);
v___x_806_ = l_Lasm_JS_Wire_decode(v_a_805_);
lean_dec(v_a_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_807_);
lean_dec_ref_known(v___x_806_, 1);
v___x_808_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_793_);
v___x_809_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v___x_808_, v_a_807_);
lean_dec_ref(v___x_808_);
return v___x_809_;
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
v_a_810_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_806_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_806_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
else
{
lean_object* v_a_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_825_; 
v_a_818_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_825_ == 0)
{
v___x_820_ = v___x_804_;
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_a_818_);
lean_dec(v___x_804_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_825_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
if (v_isShared_821_ == 0)
{
lean_ctor_set_tag(v___x_820_, 1);
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v_a_818_);
v___x_823_ = v_reuseFailAlloc_824_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
return v___x_823_;
}
}
}
}
else
{
lean_object* v_a_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_841_; 
v_a_826_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_841_ == 0)
{
v___x_828_ = v___x_804_;
v_isShared_829_ = v_isSharedCheck_841_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_a_826_);
lean_dec(v___x_804_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_841_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_830_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_831_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_793_);
v___x_832_ = lean_string_append(v___x_830_, v___x_831_);
lean_dec_ref(v___x_831_);
v___x_833_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_834_ = lean_string_append(v___x_832_, v___x_833_);
v___x_835_ = lean_io_error_to_string(v_a_826_);
v___x_836_ = lean_string_append(v___x_834_, v___x_835_);
lean_dec_ref(v___x_835_);
v___x_837_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_837_, 0, v___x_836_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_837_);
v___x_839_ = v___x_828_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_840_; 
v_reuseFailAlloc_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_840_, 0, v___x_837_);
v___x_839_ = v_reuseFailAlloc_840_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
return v___x_839_;
}
}
}
}
v___jp_843_:
{
uint8_t v_construct_845_; uint64_t v___x_846_; 
v_construct_845_ = lean_ctor_get_uint8(v_b_793_, sizeof(void*)*4);
v___x_846_ = lean_uint64_lor(v___x_842_, v___y_844_);
if (v_construct_845_ == 0)
{
uint64_t v___x_847_; 
v___x_847_ = 0ULL;
v___y_798_ = v___x_846_;
v___y_799_ = v___x_847_;
goto v___jp_797_;
}
else
{
uint64_t v___x_848_; 
v___x_848_ = 4ULL;
v___y_798_ = v___x_846_;
v___y_799_ = v___x_848_;
goto v___jp_797_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0___boxed(lean_object* v_b_851_, lean_object* v_args_852_, lean_object* v_await_853_, lean_object* v_a_854_){
_start:
{
uint8_t v_await_boxed_855_; lean_object* v_res_856_; 
v_await_boxed_855_ = lean_unbox(v_await_853_);
v_res_856_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v_b_851_, v_args_852_, v_await_boxed_855_);
lean_dec_ref(v_b_851_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now(){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; uint8_t v___x_866_; lean_object* v___x_867_; 
v___x_864_ = ((lean_object*)(l_Lasm_Web_Raw_now___closed__1));
v___x_865_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_866_ = 1;
v___x_867_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v___x_864_, v___x_865_, v___x_866_);
return v___x_867_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now___boxed(lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Lasm_Web_Raw_now();
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0(lean_object* v_f_870_, lean_object* v_x_871_){
_start:
{
lean_object* v___x_873_; 
v___x_873_ = lean_apply_1(v_f_870_, lean_box(0));
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0___boxed(lean_object* v_f_874_, lean_object* v_x_875_, lean_object* v___y_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Lasm_Web_setTimeout___lam__0(v_f_874_, v_x_875_);
lean_dec_ref(v_x_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout(lean_object* v_ms_878_, lean_object* v_f_879_){
_start:
{
lean_object* v___f_881_; lean_object* v___x_882_; 
v___f_881_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_881_, 0, v_f_879_);
v___x_882_ = l_Lasm_Web_callback(v___f_881_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v_a_883_; double v___x_884_; lean_object* v___x_885_; 
v_a_883_ = lean_ctor_get(v___x_882_, 0);
lean_inc(v_a_883_);
lean_dec_ref_known(v___x_882_, 1);
v___x_884_ = lean_float_of_nat(v_ms_878_);
v___x_885_ = l_Lasm_Web_Raw_setTimeout(v_a_883_, v___x_884_);
return v___x_885_;
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec(v_ms_878_);
v_a_886_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_882_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_882_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___boxed(lean_object* v_ms_894_, lean_object* v_f_895_, lean_object* v_a_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lasm_Web_setTimeout(v_ms_894_, v_f_895_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout(double v_t_898_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Lasm_Web_Raw_clearTimeout(v_t_898_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout___boxed(lean_object* v_t_901_, lean_object* v_a_902_){
_start:
{
double v_t_boxed_903_; lean_object* v_res_904_; 
v_t_boxed_903_ = lean_unbox_float(v_t_901_);
lean_dec_ref(v_t_901_);
v_res_904_ = l_Lasm_Web_clearTimeout(v_t_boxed_903_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval(lean_object* v_ms_905_, lean_object* v_f_906_){
_start:
{
lean_object* v___f_908_; lean_object* v___x_909_; 
v___f_908_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_908_, 0, v_f_906_);
v___x_909_ = l_Lasm_Web_callback(v___f_908_);
if (lean_obj_tag(v___x_909_) == 0)
{
lean_object* v_a_910_; double v___x_911_; lean_object* v___x_912_; 
v_a_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc(v_a_910_);
lean_dec_ref_known(v___x_909_, 1);
v___x_911_ = lean_float_of_nat(v_ms_905_);
v___x_912_ = l_Lasm_Web_Raw_setInterval(v_a_910_, v___x_911_);
return v___x_912_;
}
else
{
lean_object* v_a_913_; lean_object* v___x_915_; uint8_t v_isShared_916_; uint8_t v_isSharedCheck_920_; 
lean_dec(v_ms_905_);
v_a_913_ = lean_ctor_get(v___x_909_, 0);
v_isSharedCheck_920_ = !lean_is_exclusive(v___x_909_);
if (v_isSharedCheck_920_ == 0)
{
v___x_915_ = v___x_909_;
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
else
{
lean_inc(v_a_913_);
lean_dec(v___x_909_);
v___x_915_ = lean_box(0);
v_isShared_916_ = v_isSharedCheck_920_;
goto v_resetjp_914_;
}
v_resetjp_914_:
{
lean_object* v___x_918_; 
if (v_isShared_916_ == 0)
{
v___x_918_ = v___x_915_;
goto v_reusejp_917_;
}
else
{
lean_object* v_reuseFailAlloc_919_; 
v_reuseFailAlloc_919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_919_, 0, v_a_913_);
v___x_918_ = v_reuseFailAlloc_919_;
goto v_reusejp_917_;
}
v_reusejp_917_:
{
return v___x_918_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval___boxed(lean_object* v_ms_921_, lean_object* v_f_922_, lean_object* v_a_923_){
_start:
{
lean_object* v_res_924_; 
v_res_924_ = l_Lasm_Web_setInterval(v_ms_921_, v_f_922_);
return v_res_924_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval(double v_t_925_){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = l_Lasm_Web_Raw_clearInterval(v_t_925_);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval___boxed(lean_object* v_t_928_, lean_object* v_a_929_){
_start:
{
double v_t_boxed_930_; lean_object* v_res_931_; 
v_t_boxed_930_ = lean_unbox_float(v_t_928_);
lean_dec_ref(v_t_928_);
v_res_931_ = l_Lasm_Web_clearInterval(v_t_boxed_930_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(lean_object* v_context_932_, lean_object* v_args_933_){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v___x_935_ = lean_unsigned_to_nat(0u);
v___x_936_ = lean_array_get_size(v_args_933_);
v___x_937_ = lean_nat_dec_lt(v___x_935_, v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = lean_box(0);
v___x_939_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_932_, v___x_938_);
return v___x_939_;
}
else
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_array_fget_borrowed(v_args_933_, v___x_935_);
lean_inc(v___x_940_);
v___x_941_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_932_, v___x_940_);
return v___x_941_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0___boxed(lean_object* v_context_942_, lean_object* v_args_943_, lean_object* v_a_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v_context_942_, v_args_943_);
lean_dec_ref(v_args_943_);
lean_dec_ref(v_context_942_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0(lean_object* v_f_947_, lean_object* v_args_948_){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = ((lean_object*)(l_Lasm_Web_requestAnimationFrame___lam__0___closed__0));
v___x_951_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v___x_950_, v_args_948_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_object* v_a_952_; lean_object* v___x_953_; 
v_a_952_ = lean_ctor_get(v___x_951_, 0);
lean_inc(v_a_952_);
lean_dec_ref_known(v___x_951_, 1);
v___x_953_ = lean_apply_2(v_f_947_, v_a_952_, lean_box(0));
return v___x_953_;
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec_ref(v_f_947_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0___boxed(lean_object* v_f_962_, lean_object* v_args_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lasm_Web_requestAnimationFrame___lam__0(v_f_962_, v_args_963_);
lean_dec_ref(v_args_963_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame(lean_object* v_f_966_){
_start:
{
lean_object* v___f_968_; lean_object* v___x_969_; 
v___f_968_ = lean_alloc_closure((void*)(l_Lasm_Web_requestAnimationFrame___lam__0___boxed), 3, 1);
lean_closure_set(v___f_968_, 0, v_f_966_);
v___x_969_ = l_Lasm_Web_callback(v___f_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = l_Lasm_Web_Raw_requestAnimationFrame(v_a_970_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_a_972_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_969_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_969_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___boxed(lean_object* v_f_980_, lean_object* v_a_981_){
_start:
{
lean_object* v_res_982_; 
v_res_982_ = l_Lasm_Web_requestAnimationFrame(v_f_980_);
return v_res_982_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame(double v_frame_983_){
_start:
{
lean_object* v___x_985_; 
v___x_985_ = l_Lasm_Web_Raw_cancelAnimationFrame(v_frame_983_);
return v___x_985_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame___boxed(lean_object* v_frame_986_, lean_object* v_a_987_){
_start:
{
double v_frame_boxed_988_; lean_object* v_res_989_; 
v_frame_boxed_988_ = lean_unbox_float(v_frame_986_);
lean_dec_ref(v_frame_986_);
v_res_989_ = l_Lasm_Web_cancelAnimationFrame(v_frame_boxed_988_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask(lean_object* v_f_990_){
_start:
{
lean_object* v___f_992_; lean_object* v___x_993_; 
v___f_992_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_992_, 0, v_f_990_);
v___x_993_ = l_Lasm_Web_callback(v___f_992_);
if (lean_obj_tag(v___x_993_) == 0)
{
lean_object* v_a_994_; lean_object* v___x_995_; 
v_a_994_ = lean_ctor_get(v___x_993_, 0);
lean_inc(v_a_994_);
lean_dec_ref_known(v___x_993_, 1);
v___x_995_ = l_Lasm_Web_Raw_queueMicrotask(v_a_994_);
return v___x_995_;
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
v_a_996_ = lean_ctor_get(v___x_993_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_993_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_993_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_993_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask___boxed(lean_object* v_f_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l_Lasm_Web_queueMicrotask(v_f_1004_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame(){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l_Lasm_Web_Raw_nextFrame();
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame___boxed(lean_object* v_a_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lasm_Web_nextFrame();
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now(){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Lasm_Web_Raw_now();
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now___boxed(lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lasm_Web_now();
return v_res_1014_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Timers(uint8_t builtin) {
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
