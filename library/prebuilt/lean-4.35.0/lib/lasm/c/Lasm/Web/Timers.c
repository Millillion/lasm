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
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
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
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* l_Lasm_JS_Wire_encodeIO(lean_object*);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__7(lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(lean_object*, uint8_t, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__8___boxed(lean_object*, lean_object*, lean_object*);
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
v___x_84_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_83_);
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
v___x_174_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_173_);
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
v___x_342_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_341_);
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
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(lean_object* v_failurePrefix_447_, lean_object* v_x_448_){
_start:
{
if (lean_obj_tag(v_x_448_) == 0)
{
lean_object* v_a_450_; lean_object* v___x_452_; uint8_t v_isShared_453_; uint8_t v_isSharedCheck_461_; 
v_a_450_ = lean_ctor_get(v_x_448_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_461_ == 0)
{
v___x_452_ = v_x_448_;
v_isShared_453_ = v_isSharedCheck_461_;
goto v_resetjp_451_;
}
else
{
lean_inc(v_a_450_);
lean_dec(v_x_448_);
v___x_452_ = lean_box(0);
v_isShared_453_ = v_isSharedCheck_461_;
goto v_resetjp_451_;
}
v_resetjp_451_:
{
lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_458_; 
v___x_454_ = lean_io_error_to_string(v_a_450_);
v___x_455_ = lean_string_append(v_failurePrefix_447_, v___x_454_);
lean_dec_ref(v___x_454_);
v___x_456_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
if (v_isShared_453_ == 0)
{
lean_ctor_set(v___x_452_, 0, v___x_456_);
v___x_458_ = v___x_452_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___x_456_);
v___x_458_ = v_reuseFailAlloc_460_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
lean_object* v___x_459_; 
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
}
}
else
{
lean_object* v___x_462_; 
lean_dec_ref(v_failurePrefix_447_);
v___x_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_462_, 0, v_x_448_);
return v___x_462_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed(lean_object* v_failurePrefix_463_, lean_object* v_x_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(v_failurePrefix_463_, v_x_464_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__7(lean_object* v___f_467_, lean_object* v_a_468_, uint32_t v_op_469_, uint64_t v_flags_470_, lean_object* v_payload_471_, lean_object* v_x_472_){
_start:
{
if (lean_obj_tag(v_x_472_) == 0)
{
lean_object* v___x_474_; 
lean_dec_ref(v___f_467_);
v___x_474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_474_, 0, v_x_472_);
return v___x_474_;
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_495_; 
v_a_475_ = lean_ctor_get(v_x_472_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v_x_472_);
if (v_isSharedCheck_495_ == 0)
{
v___x_477_ = v_x_472_;
v_isShared_478_ = v_isSharedCheck_495_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v_x_472_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_495_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
uint32_t v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; lean_object* v_val_483_; lean_object* v___x_486_; 
v___x_479_ = 0;
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = 0;
v___x_486_ = lasm_js_call_into(v_a_468_, v_op_469_, v___x_479_, v_flags_470_, v_a_475_, v_payload_471_);
lean_dec(v_a_475_);
if (lean_obj_tag(v___x_486_) == 0)
{
lean_object* v_a_487_; lean_object* v___x_489_; 
v_a_487_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_487_);
lean_dec_ref_known(v___x_486_, 1);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v_a_487_);
v___x_489_ = v___x_477_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v_a_487_);
v___x_489_ = v_reuseFailAlloc_490_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
v_val_483_ = v___x_489_;
goto v___jp_482_;
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; 
v_a_491_ = lean_ctor_get(v___x_486_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_486_, 1);
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 0);
lean_ctor_set(v___x_477_, 0, v_a_491_);
v___x_493_ = v___x_477_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_491_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
v_val_483_ = v___x_493_;
goto v___jp_482_;
}
}
v___jp_482_:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_484_, 0, v_val_483_);
v___x_485_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_480_, v___x_481_, v___x_484_, v___f_467_);
return v___x_485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__7___boxed(lean_object* v___f_496_, lean_object* v_a_497_, lean_object* v_op_498_, lean_object* v_flags_499_, lean_object* v_payload_500_, lean_object* v_x_501_, lean_object* v___y_502_){
_start:
{
uint32_t v_op_boxed_503_; uint64_t v_flags_boxed_504_; lean_object* v_res_505_; 
v_op_boxed_503_ = lean_unbox_uint32(v_op_498_);
lean_dec(v_op_498_);
v_flags_boxed_504_ = lean_unbox_uint64(v_flags_499_);
lean_dec_ref(v_flags_499_);
v_res_505_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__7(v___f_496_, v_a_497_, v_op_boxed_503_, v_flags_boxed_504_, v_payload_500_, v_x_501_);
lean_dec(v_payload_500_);
lean_dec(v_a_497_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(lean_object* v___x_506_, uint8_t v___x_507_, lean_object* v___f_508_, lean_object* v_a_509_, uint32_t v_op_510_, uint64_t v_flags_511_, lean_object* v_payload_512_, lean_object* v_x_513_){
_start:
{
lean_object* v_val_516_; 
if (lean_obj_tag(v_x_513_) == 0)
{
lean_object* v___x_519_; 
lean_dec_ref(v___f_508_);
lean_dec(v___x_506_);
v___x_519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_519_, 0, v_x_513_);
return v___x_519_;
}
else
{
lean_object* v_a_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_534_; 
v_a_520_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_534_ == 0)
{
v___x_522_ = v_x_513_;
v_isShared_523_ = v_isSharedCheck_534_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_a_520_);
lean_dec(v_x_513_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_534_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
uint32_t v___x_524_; lean_object* v___x_525_; 
v___x_524_ = 0;
v___x_525_ = lasm_js_call_into(v_a_509_, v_op_510_, v___x_524_, v_flags_511_, v_a_520_, v_payload_512_);
lean_dec(v_a_520_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_528_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_526_);
lean_dec_ref_known(v___x_525_, 1);
if (v_isShared_523_ == 0)
{
lean_ctor_set(v___x_522_, 0, v_a_526_);
v___x_528_ = v___x_522_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_a_526_);
v___x_528_ = v_reuseFailAlloc_529_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
v_val_516_ = v___x_528_;
goto v___jp_515_;
}
}
else
{
lean_object* v_a_530_; lean_object* v___x_532_; 
v_a_530_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_530_);
lean_dec_ref_known(v___x_525_, 1);
if (v_isShared_523_ == 0)
{
lean_ctor_set_tag(v___x_522_, 0);
lean_ctor_set(v___x_522_, 0, v_a_530_);
v___x_532_ = v___x_522_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
v_val_516_ = v___x_532_;
goto v___jp_515_;
}
}
}
}
v___jp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_517_, 0, v_val_516_);
v___x_518_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_506_, v___x_507_, v___x_517_, v___f_508_);
return v___x_518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed(lean_object* v___x_535_, lean_object* v___x_536_, lean_object* v___f_537_, lean_object* v_a_538_, lean_object* v_op_539_, lean_object* v_flags_540_, lean_object* v_payload_541_, lean_object* v_x_542_, lean_object* v___y_543_){
_start:
{
uint8_t v___x_1062__boxed_544_; uint32_t v_op_boxed_545_; uint64_t v_flags_boxed_546_; lean_object* v_res_547_; 
v___x_1062__boxed_544_ = lean_unbox(v___x_536_);
v_op_boxed_545_ = lean_unbox_uint32(v_op_539_);
lean_dec(v_op_539_);
v_flags_boxed_546_ = lean_unbox_uint64(v_flags_540_);
lean_dec_ref(v_flags_540_);
v_res_547_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(v___x_535_, v___x_1062__boxed_544_, v___f_537_, v_a_538_, v_op_boxed_545_, v_flags_boxed_546_, v_payload_541_, v_x_542_);
lean_dec(v_payload_541_);
lean_dec(v_a_538_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(lean_object* v_a_548_, lean_object* v_x_549_){
_start:
{
if (lean_obj_tag(v_x_549_) == 0)
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_559_; 
v_a_551_ = lean_ctor_get(v_x_549_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v_x_549_);
if (v_isSharedCheck_559_ == 0)
{
v___x_553_ = v_x_549_;
v_isShared_554_ = v_isSharedCheck_559_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v_x_549_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_559_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_558_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
lean_object* v___x_557_; 
v___x_557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
return v___x_557_;
}
}
}
else
{
lean_object* v___x_560_; 
lean_dec_ref_known(v_x_549_, 1);
v___x_560_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_548_);
return v___x_560_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed(lean_object* v_a_561_, lean_object* v_x_562_, lean_object* v___y_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(v_a_561_, v_x_562_);
lean_dec(v_a_561_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(lean_object* v_failurePrefix_565_, uint32_t v_op_566_, uint64_t v_flags_567_, lean_object* v_payload_568_, lean_object* v___f_569_, lean_object* v___f_570_, lean_object* v___f_571_, lean_object* v_x_572_){
_start:
{
if (lean_obj_tag(v_x_572_) == 0)
{
lean_object* v_a_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_582_; 
lean_dec_ref(v___f_571_);
lean_dec_ref(v___f_570_);
lean_dec_ref(v___f_569_);
lean_dec(v_payload_568_);
v_a_574_ = lean_ctor_get(v_x_572_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v_x_572_);
if (v_isSharedCheck_582_ == 0)
{
v___x_576_ = v_x_572_;
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_a_574_);
lean_dec(v_x_572_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_582_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
lean_object* v___x_579_; 
if (v_isShared_577_ == 0)
{
v___x_579_ = v___x_576_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_574_);
v___x_579_ = v_reuseFailAlloc_581_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; 
v___x_580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
return v___x_580_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_629_; 
v_a_583_ = lean_ctor_get(v_x_572_, 0);
v_isSharedCheck_629_ = !lean_is_exclusive(v_x_572_);
if (v_isSharedCheck_629_ == 0)
{
v___x_585_ = v_x_572_;
v_isShared_586_ = v_isSharedCheck_629_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v_x_572_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_629_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v___x_587_ = lean_string_utf8_byte_size(v_failurePrefix_565_);
v___x_588_ = lean_unsigned_to_nat(0u);
v___x_589_ = lean_nat_dec_eq(v___x_587_, v___x_588_);
if (v___x_589_ == 0)
{
lean_object* v___f_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___f_594_; lean_object* v_val_596_; lean_object* v___x_601_; 
lean_dec_ref(v___f_571_);
lean_inc(v_a_583_);
v___f_590_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_590_, 0, v_a_583_);
v___x_591_ = lean_box(v___x_589_);
v___x_592_ = lean_box_uint32(v_op_566_);
v___x_593_ = lean_box_uint64(v_flags_567_);
lean_inc(v_payload_568_);
v___f_594_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed), 9, 7);
lean_closure_set(v___f_594_, 0, v___x_588_);
lean_closure_set(v___f_594_, 1, v___x_591_);
lean_closure_set(v___f_594_, 2, v___f_590_);
lean_closure_set(v___f_594_, 3, v_a_583_);
lean_closure_set(v___f_594_, 4, v___x_592_);
lean_closure_set(v___f_594_, 5, v___x_593_);
lean_closure_set(v___f_594_, 6, v_payload_568_);
v___x_601_ = l_Lasm_JS_Wire_encodeIO(v_payload_568_);
lean_dec(v_payload_568_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_604_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_602_);
lean_dec_ref_known(v___x_601_, 1);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v_a_602_);
v___x_604_ = v___x_585_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_a_602_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
v_val_596_ = v___x_604_;
goto v___jp_595_;
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; 
v_a_606_ = lean_ctor_get(v___x_601_, 0);
lean_inc(v_a_606_);
lean_dec_ref_known(v___x_601_, 1);
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 0);
lean_ctor_set(v___x_585_, 0, v_a_606_);
v___x_608_ = v___x_585_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_606_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
v_val_596_ = v___x_608_;
goto v___jp_595_;
}
}
v___jp_595_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_597_, 0, v_val_596_);
v___x_598_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_588_, v___x_589_, v___x_597_, v___f_594_);
v___x_599_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_588_, v___x_589_, v___x_598_, v___f_569_);
v___x_600_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_588_, v___x_589_, v___x_599_, v___f_570_);
return v___x_600_;
}
}
else
{
lean_object* v___f_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___f_613_; uint8_t v___x_614_; lean_object* v_val_616_; lean_object* v___x_620_; 
lean_dec_ref(v___f_570_);
lean_dec_ref(v___f_569_);
lean_inc(v_a_583_);
v___f_610_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_610_, 0, v_a_583_);
v___x_611_ = lean_box_uint32(v_op_566_);
v___x_612_ = lean_box_uint64(v_flags_567_);
lean_inc(v_payload_568_);
v___f_613_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__7___boxed), 7, 5);
lean_closure_set(v___f_613_, 0, v___f_610_);
lean_closure_set(v___f_613_, 1, v_a_583_);
lean_closure_set(v___f_613_, 2, v___x_611_);
lean_closure_set(v___f_613_, 3, v___x_612_);
lean_closure_set(v___f_613_, 4, v_payload_568_);
v___x_614_ = 0;
v___x_620_ = l_Lasm_JS_Wire_encodeIO(v_payload_568_);
lean_dec(v_payload_568_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; lean_object* v___x_623_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
if (v_isShared_586_ == 0)
{
lean_ctor_set(v___x_585_, 0, v_a_621_);
v___x_623_ = v___x_585_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v_a_621_);
v___x_623_ = v_reuseFailAlloc_624_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
v_val_616_ = v___x_623_;
goto v___jp_615_;
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; 
v_a_625_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_625_);
lean_dec_ref_known(v___x_620_, 1);
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 0);
lean_ctor_set(v___x_585_, 0, v_a_625_);
v___x_627_ = v___x_585_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_a_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
v_val_616_ = v___x_627_;
goto v___jp_615_;
}
}
v___jp_615_:
{
lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_617_, 0, v_val_616_);
v___x_618_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_588_, v___x_614_, v___x_617_, v___f_613_);
v___x_619_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_588_, v___x_614_, v___x_618_, v___f_571_);
return v___x_619_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed(lean_object* v_failurePrefix_630_, lean_object* v_op_631_, lean_object* v_flags_632_, lean_object* v_payload_633_, lean_object* v___f_634_, lean_object* v___f_635_, lean_object* v___f_636_, lean_object* v_x_637_, lean_object* v___y_638_){
_start:
{
uint32_t v_op_boxed_639_; uint64_t v_flags_boxed_640_; lean_object* v_res_641_; 
v_op_boxed_639_ = lean_unbox_uint32(v_op_631_);
lean_dec(v_op_631_);
v_flags_boxed_640_ = lean_unbox_uint64(v_flags_632_);
lean_dec_ref(v_flags_632_);
v_res_641_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(v_failurePrefix_630_, v_op_boxed_639_, v_flags_boxed_640_, v_payload_633_, v___f_634_, v___f_635_, v___f_636_, v_x_637_);
lean_dec_ref(v_failurePrefix_630_);
return v_res_641_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(lean_object* v___f_642_, lean_object* v_bytes_643_){
_start:
{
lean_object* v___x_645_; uint8_t v___x_646_; lean_object* v_val_648_; lean_object* v___x_651_; 
v___x_645_ = lean_unsigned_to_nat(0u);
v___x_646_ = 0;
v___x_651_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_bytes_643_);
if (lean_obj_tag(v___x_651_) == 0)
{
lean_object* v_a_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
v_a_652_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_659_ == 0)
{
v___x_654_ = v___x_651_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_inc(v_a_652_);
lean_dec(v___x_651_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set_tag(v___x_654_, 1);
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_652_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
v_val_648_ = v___x_657_;
goto v___jp_647_;
}
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
v_a_660_ = lean_ctor_get(v___x_651_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_651_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_651_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_651_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
lean_ctor_set_tag(v___x_662_, 0);
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
v_val_648_ = v___x_665_;
goto v___jp_647_;
}
}
}
v___jp_647_:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_649_, 0, v_val_648_);
v___x_650_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_645_, v___x_646_, v___x_649_, v___f_642_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed(lean_object* v___f_668_, lean_object* v_bytes_669_, lean_object* v___y_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(v___f_668_, v_bytes_669_);
lean_dec_ref(v_bytes_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(lean_object* v_context_673_, lean_object* v_d_674_){
_start:
{
lean_object* v___y_677_; lean_object* v___y_678_; 
if (lean_obj_tag(v_d_674_) == 3)
{
double v_n_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v_n_682_ = lean_ctor_get_float(v_d_674_, 0);
lean_dec_ref_known(v_d_674_, 0);
v___x_683_ = lean_box_float(v_n_682_);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
else
{
lean_object* v___x_685_; lean_object* v_received_687_; 
v___x_685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_674_) == 9)
{
lean_object* v_value_701_; lean_object* v_description_702_; uint8_t v___x_703_; 
v_value_701_ = lean_ctor_get(v_d_674_, 0);
v_description_702_ = lean_ctor_get(v_d_674_, 1);
v___x_703_ = lean_string_dec_eq(v_description_702_, v___x_685_);
if (v___x_703_ == 0)
{
goto v___jp_699_;
}
else
{
uint32_t v___x_704_; uint64_t v___x_705_; lean_object* v___x_706_; uint32_t v___x_707_; lean_object* v___x_708_; 
lean_inc_n(v_value_701_, 2);
lean_dec_ref_known(v_d_674_, 2);
v___x_704_ = 206;
v___x_705_ = 0ULL;
v___x_706_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_706_, 0, v_value_701_);
lean_ctor_set(v___x_706_, 1, v___x_685_);
v___x_707_ = lasm_js_value_handle(v_value_701_);
lean_dec(v_value_701_);
v___x_708_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_704_, v___x_705_, v___x_706_, v___x_707_);
lean_dec_ref_known(v___x_706_, 2);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; uint8_t v___x_710_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref_known(v___x_708_, 1);
v___x_710_ = lean_string_validate_utf8(v_a_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; lean_object* v___x_712_; 
lean_dec(v_a_709_);
v___x_711_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11);
v___x_712_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_711_);
v_received_687_ = v___x_712_;
goto v___jp_686_;
}
else
{
lean_object* v___x_713_; 
v___x_713_ = lean_string_from_utf8_unchecked(v_a_709_);
v_received_687_ = v___x_713_;
goto v___jp_686_;
}
}
else
{
lean_object* v___x_714_; 
lean_dec_ref_known(v___x_708_, 1);
v___x_714_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12));
v_received_687_ = v___x_714_;
goto v___jp_686_;
}
}
}
else
{
goto v___jp_699_;
}
v___jp_686_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_688_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_689_ = lean_string_append(v___x_688_, v_context_673_);
v___x_690_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2));
v___x_691_ = lean_string_append(v___x_689_, v___x_690_);
v___x_692_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0));
v___x_693_ = lean_string_append(v___x_691_, v___x_692_);
v___x_694_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_695_ = lean_string_append(v___x_693_, v___x_694_);
v___x_696_ = lean_string_append(v___x_695_, v_received_687_);
lean_dec_ref(v_received_687_);
v___x_697_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; 
v___x_698_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7));
v___y_677_ = v___x_696_;
v___y_678_ = v___x_698_;
goto v___jp_676_;
}
else
{
v___y_677_ = v___x_696_;
v___y_678_ = v___x_685_;
goto v___jp_676_;
}
}
v___jp_699_:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lasm_JS_Data_describe(v_d_674_);
v_received_687_ = v___x_700_;
goto v___jp_686_;
}
}
v___jp_676_:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_679_ = lean_string_append(v___y_677_, v___y_678_);
v___x_680_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
v___x_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
return v___x_681_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___boxed(lean_object* v_context_715_, lean_object* v_d_716_, lean_object* v_a_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_715_, v_d_716_);
lean_dec_ref(v_context_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(lean_object* v_context_719_, lean_object* v_x_720_){
_start:
{
lean_object* v_val_723_; 
if (lean_obj_tag(v_x_720_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_733_; 
v_a_725_ = lean_ctor_get(v_x_720_, 0);
v_isSharedCheck_733_ = !lean_is_exclusive(v_x_720_);
if (v_isSharedCheck_733_ == 0)
{
v___x_727_ = v_x_720_;
v_isShared_728_ = v_isSharedCheck_733_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v_x_720_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_733_;
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
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_725_);
v___x_730_ = v_reuseFailAlloc_732_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
lean_object* v___x_731_; 
v___x_731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_731_, 0, v___x_730_);
return v___x_731_;
}
}
}
else
{
lean_object* v_a_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_747_; 
v_a_734_ = lean_ctor_get(v_x_720_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v_x_720_);
if (v_isSharedCheck_747_ == 0)
{
v___x_736_ = v_x_720_;
v_isShared_737_ = v_isSharedCheck_747_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_a_734_);
lean_dec(v_x_720_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_747_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; 
v___x_738_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_719_, v_a_734_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_741_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_739_);
lean_dec_ref_known(v___x_738_, 1);
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v_a_739_);
v___x_741_ = v___x_736_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_742_; 
v_reuseFailAlloc_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_742_, 0, v_a_739_);
v___x_741_ = v_reuseFailAlloc_742_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
v_val_723_ = v___x_741_;
goto v___jp_722_;
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; 
v_a_743_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_738_, 1);
if (v_isShared_737_ == 0)
{
lean_ctor_set_tag(v___x_736_, 0);
lean_ctor_set(v___x_736_, 0, v_a_743_);
v___x_745_ = v___x_736_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_a_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
v_val_723_ = v___x_745_;
goto v___jp_722_;
}
}
}
}
v___jp_722_:
{
lean_object* v___x_724_; 
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_val_723_);
return v___x_724_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed(lean_object* v_context_748_, lean_object* v_x_749_, lean_object* v___y_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(v_context_748_, v_x_749_);
lean_dec_ref(v_context_748_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(lean_object* v___f_752_, lean_object* v_x_753_){
_start:
{
if (lean_obj_tag(v_x_753_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_763_; 
lean_dec_ref(v___f_752_);
v_a_755_ = lean_ctor_get(v_x_753_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v_x_753_);
if (v_isSharedCheck_763_ == 0)
{
v___x_757_ = v_x_753_;
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v_x_753_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_763_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_762_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; 
v___x_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
return v___x_761_;
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_765_; 
v_a_764_ = lean_ctor_get(v_x_753_, 0);
lean_inc(v_a_764_);
lean_dec_ref_known(v_x_753_, 1);
v___x_765_ = lean_apply_2(v___f_752_, v_a_764_, lean_box(0));
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed(lean_object* v___f_766_, lean_object* v_x_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(v___f_766_, v_x_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__8(lean_object* v___f_770_, lean_object* v_x_771_){
_start:
{
if (lean_obj_tag(v_x_771_) == 0)
{
lean_object* v_a_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_781_; 
lean_dec_ref(v___f_770_);
v_a_773_ = lean_ctor_get(v_x_771_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v_x_771_);
if (v_isSharedCheck_781_ == 0)
{
v___x_775_ = v_x_771_;
v_isShared_776_ = v_isSharedCheck_781_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_a_773_);
lean_dec(v_x_771_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_781_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v___x_778_; 
if (v_isShared_776_ == 0)
{
v___x_778_ = v___x_775_;
goto v_reusejp_777_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_773_);
v___x_778_ = v_reuseFailAlloc_780_;
goto v_reusejp_777_;
}
v_reusejp_777_:
{
lean_object* v___x_779_; 
v___x_779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_779_, 0, v___x_778_);
return v___x_779_;
}
}
}
else
{
lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_793_; 
v_isSharedCheck_793_ = !lean_is_exclusive(v_x_771_);
if (v_isSharedCheck_793_ == 0)
{
lean_object* v_unused_794_; 
v_unused_794_ = lean_ctor_get(v_x_771_, 0);
lean_dec(v_unused_794_);
v___x_783_ = v_x_771_;
v_isShared_784_ = v_isSharedCheck_793_;
goto v_resetjp_782_;
}
else
{
lean_dec(v_x_771_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_793_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_785_; uint8_t v___x_786_; lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_785_ = lean_unsigned_to_nat(0u);
v___x_786_ = 0;
v___x_787_ = lean_io_promise_new();
if (v_isShared_784_ == 0)
{
lean_ctor_set(v___x_783_, 0, v___x_787_);
v___x_789_ = v___x_783_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v___x_787_);
v___x_789_ = v_reuseFailAlloc_792_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_790_, 0, v___x_789_);
v___x_791_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_785_, v___x_786_, v___x_790_, v___f_770_);
return v___x_791_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__8___boxed(lean_object* v___f_795_, lean_object* v_x_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__8(v___f_795_, v_x_796_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(lean_object* v_context_799_, uint32_t v_op_800_, uint64_t v_flags_801_, lean_object* v_payload_802_, lean_object* v_failurePrefix_803_){
_start:
{
lean_object* v___f_805_; lean_object* v___f_806_; lean_object* v___f_807_; lean_object* v___f_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___f_811_; lean_object* v___f_812_; lean_object* v___x_813_; uint8_t v___x_814_; lean_object* v_val_816_; lean_object* v___x_819_; 
v___f_805_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_805_, 0, v_context_799_);
v___f_806_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_806_, 0, v___f_805_);
v___f_807_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_807_, 0, v___f_806_);
lean_inc_ref(v_failurePrefix_803_);
v___f_808_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_808_, 0, v_failurePrefix_803_);
v___x_809_ = lean_box_uint32(v_op_800_);
v___x_810_ = lean_box_uint64(v_flags_801_);
lean_inc_ref(v___f_807_);
v___f_811_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_811_, 0, v_failurePrefix_803_);
lean_closure_set(v___f_811_, 1, v___x_809_);
lean_closure_set(v___f_811_, 2, v___x_810_);
lean_closure_set(v___f_811_, 3, v_payload_802_);
lean_closure_set(v___f_811_, 4, v___f_808_);
lean_closure_set(v___f_811_, 5, v___f_807_);
lean_closure_set(v___f_811_, 6, v___f_807_);
v___f_812_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__8___boxed), 3, 1);
lean_closure_set(v___f_812_, 0, v___f_811_);
v___x_813_ = lean_unsigned_to_nat(0u);
v___x_814_ = 0;
v___x_819_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_827_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_827_ == 0)
{
v___x_822_ = v___x_819_;
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_a_820_);
lean_dec(v___x_819_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_827_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_825_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set_tag(v___x_822_, 1);
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
v_val_816_ = v___x_825_;
goto v___jp_815_;
}
}
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_835_; 
v_a_828_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_835_ == 0)
{
v___x_830_ = v___x_819_;
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_819_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_835_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_833_; 
if (v_isShared_831_ == 0)
{
lean_ctor_set_tag(v___x_830_, 0);
v___x_833_ = v___x_830_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_828_);
v___x_833_ = v_reuseFailAlloc_834_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
v_val_816_ = v___x_833_;
goto v___jp_815_;
}
}
}
v___jp_815_:
{
lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_817_, 0, v_val_816_);
v___x_818_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_813_, v___x_814_, v___x_817_, v___f_812_);
return v___x_818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___boxed(lean_object* v_context_836_, lean_object* v_op_837_, lean_object* v_flags_838_, lean_object* v_payload_839_, lean_object* v_failurePrefix_840_, lean_object* v_a_841_){
_start:
{
uint32_t v_op_boxed_842_; uint64_t v_flags_boxed_843_; lean_object* v_res_844_; 
v_op_boxed_842_ = lean_unbox_uint32(v_op_837_);
lean_dec(v_op_837_);
v_flags_boxed_843_ = lean_unbox_uint64(v_flags_838_);
lean_dec_ref(v_flags_838_);
v_res_844_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v_context_836_, v_op_boxed_842_, v_flags_boxed_843_, v_payload_839_, v_failurePrefix_840_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(lean_object* v_b_845_, lean_object* v_args_846_){
_start:
{
uint8_t v_construct_848_; lean_object* v___x_849_; uint32_t v___x_850_; uint64_t v___x_851_; uint64_t v___y_853_; 
v_construct_848_ = lean_ctor_get_uint8(v_b_845_, sizeof(void*)*4);
v___x_849_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_845_);
v___x_850_ = 214;
v___x_851_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_construct_848_ == 0)
{
uint64_t v___x_861_; 
v___x_861_ = 0ULL;
v___y_853_ = v___x_861_;
goto v___jp_852_;
}
else
{
uint64_t v___x_862_; 
v___x_862_ = 4ULL;
v___y_853_ = v___x_862_;
goto v___jp_852_;
}
v___jp_852_:
{
uint64_t v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_854_ = lean_uint64_lor(v___x_851_, v___y_853_);
v___x_855_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_845_, v_args_846_);
v___x_856_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_857_ = lean_string_append(v___x_856_, v___x_849_);
v___x_858_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_859_ = lean_string_append(v___x_857_, v___x_858_);
v___x_860_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v___x_849_, v___x_850_, v___x_854_, v___x_855_, v___x_859_);
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0___boxed(lean_object* v_b_863_, lean_object* v_args_864_, lean_object* v_a_865_){
_start:
{
lean_object* v_res_866_; 
v_res_866_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v_b_863_, v_args_864_);
lean_dec_ref(v_b_863_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame(){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_874_ = ((lean_object*)(l_Lasm_Web_Raw_nextFrame___closed__1));
v___x_875_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_876_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v___x_874_, v___x_875_);
return v___x_876_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame___boxed(lean_object* v_a_877_){
_start:
{
lean_object* v_res_878_; 
v_res_878_ = l_Lasm_Web_Raw_nextFrame();
return v_res_878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(lean_object* v_b_879_, lean_object* v_args_880_, uint8_t v_await_881_){
_start:
{
uint64_t v___y_884_; uint64_t v___y_885_; uint64_t v___x_928_; uint64_t v___y_930_; 
v___x_928_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_881_ == 0)
{
uint64_t v___x_935_; 
v___x_935_ = 0ULL;
v___y_930_ = v___x_935_;
goto v___jp_929_;
}
else
{
uint64_t v___x_936_; 
v___x_936_ = 2ULL;
v___y_930_ = v___x_936_;
goto v___jp_929_;
}
v___jp_883_:
{
uint64_t v_flags_886_; uint32_t v___x_887_; lean_object* v___x_888_; uint32_t v___x_889_; lean_object* v___x_890_; 
v_flags_886_ = lean_uint64_lor(v___y_884_, v___y_885_);
v___x_887_ = 214;
v___x_888_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_879_, v_args_880_);
v___x_889_ = 0;
v___x_890_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_887_, v_flags_886_, v___x_888_, v___x_889_);
lean_dec(v___x_888_);
if (lean_obj_tag(v___x_890_) == 0)
{
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_892_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref_known(v___x_890_, 1);
v___x_892_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_891_);
lean_dec(v_a_891_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref_known(v___x_892_, 1);
v___x_894_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_879_);
v___x_895_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v___x_894_, v_a_893_);
lean_dec_ref(v___x_894_);
return v___x_895_;
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
v_a_896_ = lean_ctor_get(v___x_892_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_892_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_892_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_892_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
v_a_904_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_890_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_890_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
lean_ctor_set_tag(v___x_906_, 1);
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_927_; 
v_a_912_ = lean_ctor_get(v___x_890_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_890_);
if (v_isSharedCheck_927_ == 0)
{
v___x_914_ = v___x_890_;
v_isShared_915_ = v_isSharedCheck_927_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_890_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_927_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_925_; 
v___x_916_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_917_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_879_);
v___x_918_ = lean_string_append(v___x_916_, v___x_917_);
lean_dec_ref(v___x_917_);
v___x_919_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_920_ = lean_string_append(v___x_918_, v___x_919_);
v___x_921_ = lean_io_error_to_string(v_a_912_);
v___x_922_ = lean_string_append(v___x_920_, v___x_921_);
lean_dec_ref(v___x_921_);
v___x_923_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
if (v_isShared_915_ == 0)
{
lean_ctor_set(v___x_914_, 0, v___x_923_);
v___x_925_ = v___x_914_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v___x_923_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
v___jp_929_:
{
uint8_t v_construct_931_; uint64_t v___x_932_; 
v_construct_931_ = lean_ctor_get_uint8(v_b_879_, sizeof(void*)*4);
v___x_932_ = lean_uint64_lor(v___x_928_, v___y_930_);
if (v_construct_931_ == 0)
{
uint64_t v___x_933_; 
v___x_933_ = 0ULL;
v___y_884_ = v___x_932_;
v___y_885_ = v___x_933_;
goto v___jp_883_;
}
else
{
uint64_t v___x_934_; 
v___x_934_ = 4ULL;
v___y_884_ = v___x_932_;
v___y_885_ = v___x_934_;
goto v___jp_883_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0___boxed(lean_object* v_b_937_, lean_object* v_args_938_, lean_object* v_await_939_, lean_object* v_a_940_){
_start:
{
uint8_t v_await_boxed_941_; lean_object* v_res_942_; 
v_await_boxed_941_ = lean_unbox(v_await_939_);
v_res_942_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v_b_937_, v_args_938_, v_await_boxed_941_);
lean_dec_ref(v_b_937_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now(){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; lean_object* v___x_953_; 
v___x_950_ = ((lean_object*)(l_Lasm_Web_Raw_now___closed__1));
v___x_951_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_952_ = 1;
v___x_953_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v___x_950_, v___x_951_, v___x_952_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now___boxed(lean_object* v_a_954_){
_start:
{
lean_object* v_res_955_; 
v_res_955_ = l_Lasm_Web_Raw_now();
return v_res_955_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0(lean_object* v_f_956_, lean_object* v_x_957_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = lean_apply_1(v_f_956_, lean_box(0));
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0___boxed(lean_object* v_f_960_, lean_object* v_x_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lasm_Web_setTimeout___lam__0(v_f_960_, v_x_961_);
lean_dec_ref(v_x_961_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout(lean_object* v_ms_964_, lean_object* v_f_965_){
_start:
{
lean_object* v___f_967_; lean_object* v___x_968_; 
v___f_967_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_967_, 0, v_f_965_);
v___x_968_ = l_Lasm_Web_callback(v___f_967_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; double v___x_970_; lean_object* v___x_971_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
lean_dec_ref_known(v___x_968_, 1);
v___x_970_ = lean_float_of_nat(v_ms_964_);
v___x_971_ = l_Lasm_Web_Raw_setTimeout(v_a_969_, v___x_970_);
return v___x_971_;
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
lean_dec(v_ms_964_);
v_a_972_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___x_968_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_968_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___boxed(lean_object* v_ms_980_, lean_object* v_f_981_, lean_object* v_a_982_){
_start:
{
lean_object* v_res_983_; 
v_res_983_ = l_Lasm_Web_setTimeout(v_ms_980_, v_f_981_);
return v_res_983_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout(double v_t_984_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_Lasm_Web_Raw_clearTimeout(v_t_984_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout___boxed(lean_object* v_t_987_, lean_object* v_a_988_){
_start:
{
double v_t_boxed_989_; lean_object* v_res_990_; 
v_t_boxed_989_ = lean_unbox_float(v_t_987_);
lean_dec_ref(v_t_987_);
v_res_990_ = l_Lasm_Web_clearTimeout(v_t_boxed_989_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval(lean_object* v_ms_991_, lean_object* v_f_992_){
_start:
{
lean_object* v___f_994_; lean_object* v___x_995_; 
v___f_994_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_994_, 0, v_f_992_);
v___x_995_ = l_Lasm_Web_callback(v___f_994_);
if (lean_obj_tag(v___x_995_) == 0)
{
lean_object* v_a_996_; double v___x_997_; lean_object* v___x_998_; 
v_a_996_ = lean_ctor_get(v___x_995_, 0);
lean_inc(v_a_996_);
lean_dec_ref_known(v___x_995_, 1);
v___x_997_ = lean_float_of_nat(v_ms_991_);
v___x_998_ = l_Lasm_Web_Raw_setInterval(v_a_996_, v___x_997_);
return v___x_998_;
}
else
{
lean_object* v_a_999_; lean_object* v___x_1001_; uint8_t v_isShared_1002_; uint8_t v_isSharedCheck_1006_; 
lean_dec(v_ms_991_);
v_a_999_ = lean_ctor_get(v___x_995_, 0);
v_isSharedCheck_1006_ = !lean_is_exclusive(v___x_995_);
if (v_isSharedCheck_1006_ == 0)
{
v___x_1001_ = v___x_995_;
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
else
{
lean_inc(v_a_999_);
lean_dec(v___x_995_);
v___x_1001_ = lean_box(0);
v_isShared_1002_ = v_isSharedCheck_1006_;
goto v_resetjp_1000_;
}
v_resetjp_1000_:
{
lean_object* v___x_1004_; 
if (v_isShared_1002_ == 0)
{
v___x_1004_ = v___x_1001_;
goto v_reusejp_1003_;
}
else
{
lean_object* v_reuseFailAlloc_1005_; 
v_reuseFailAlloc_1005_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1005_, 0, v_a_999_);
v___x_1004_ = v_reuseFailAlloc_1005_;
goto v_reusejp_1003_;
}
v_reusejp_1003_:
{
return v___x_1004_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval___boxed(lean_object* v_ms_1007_, lean_object* v_f_1008_, lean_object* v_a_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lasm_Web_setInterval(v_ms_1007_, v_f_1008_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval(double v_t_1011_){
_start:
{
lean_object* v___x_1013_; 
v___x_1013_ = l_Lasm_Web_Raw_clearInterval(v_t_1011_);
return v___x_1013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval___boxed(lean_object* v_t_1014_, lean_object* v_a_1015_){
_start:
{
double v_t_boxed_1016_; lean_object* v_res_1017_; 
v_t_boxed_1016_ = lean_unbox_float(v_t_1014_);
lean_dec_ref(v_t_1014_);
v_res_1017_ = l_Lasm_Web_clearInterval(v_t_boxed_1016_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(lean_object* v_context_1018_, lean_object* v_args_1019_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; 
v___x_1021_ = lean_unsigned_to_nat(0u);
v___x_1022_ = lean_array_get_size(v_args_1019_);
v___x_1023_ = lean_nat_dec_lt(v___x_1021_, v___x_1022_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1024_ = lean_box(0);
v___x_1025_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_1018_, v___x_1024_);
return v___x_1025_;
}
else
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = lean_array_fget_borrowed(v_args_1019_, v___x_1021_);
lean_inc(v___x_1026_);
v___x_1027_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_1018_, v___x_1026_);
return v___x_1027_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0___boxed(lean_object* v_context_1028_, lean_object* v_args_1029_, lean_object* v_a_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v_context_1028_, v_args_1029_);
lean_dec_ref(v_args_1029_);
lean_dec_ref(v_context_1028_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0(lean_object* v_f_1033_, lean_object* v_args_1034_){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = ((lean_object*)(l_Lasm_Web_requestAnimationFrame___lam__0___closed__0));
v___x_1037_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v___x_1036_, v_args_1034_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1039_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref_known(v___x_1037_, 1);
v___x_1039_ = lean_apply_2(v_f_1033_, v_a_1038_, lean_box(0));
return v___x_1039_;
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec_ref(v_f_1033_);
v_a_1040_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1037_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1037_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0___boxed(lean_object* v_f_1048_, lean_object* v_args_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lasm_Web_requestAnimationFrame___lam__0(v_f_1048_, v_args_1049_);
lean_dec_ref(v_args_1049_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame(lean_object* v_f_1052_){
_start:
{
lean_object* v___f_1054_; lean_object* v___x_1055_; 
v___f_1054_ = lean_alloc_closure((void*)(l_Lasm_Web_requestAnimationFrame___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1054_, 0, v_f_1052_);
v___x_1055_ = l_Lasm_Web_callback(v___f_1054_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v_a_1056_; lean_object* v___x_1057_; 
v_a_1056_ = lean_ctor_get(v___x_1055_, 0);
lean_inc(v_a_1056_);
lean_dec_ref_known(v___x_1055_, 1);
v___x_1057_ = l_Lasm_Web_Raw_requestAnimationFrame(v_a_1056_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___boxed(lean_object* v_f_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lasm_Web_requestAnimationFrame(v_f_1066_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame(double v_frame_1069_){
_start:
{
lean_object* v___x_1071_; 
v___x_1071_ = l_Lasm_Web_Raw_cancelAnimationFrame(v_frame_1069_);
return v___x_1071_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame___boxed(lean_object* v_frame_1072_, lean_object* v_a_1073_){
_start:
{
double v_frame_boxed_1074_; lean_object* v_res_1075_; 
v_frame_boxed_1074_ = lean_unbox_float(v_frame_1072_);
lean_dec_ref(v_frame_1072_);
v_res_1075_ = l_Lasm_Web_cancelAnimationFrame(v_frame_boxed_1074_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask(lean_object* v_f_1076_){
_start:
{
lean_object* v___f_1078_; lean_object* v___x_1079_; 
v___f_1078_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1078_, 0, v_f_1076_);
v___x_1079_ = l_Lasm_Web_callback(v___f_1078_);
if (lean_obj_tag(v___x_1079_) == 0)
{
lean_object* v_a_1080_; lean_object* v___x_1081_; 
v_a_1080_ = lean_ctor_get(v___x_1079_, 0);
lean_inc(v_a_1080_);
lean_dec_ref_known(v___x_1079_, 1);
v___x_1081_ = l_Lasm_Web_Raw_queueMicrotask(v_a_1080_);
return v___x_1081_;
}
else
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1089_; 
v_a_1082_ = lean_ctor_get(v___x_1079_, 0);
v_isSharedCheck_1089_ = !lean_is_exclusive(v___x_1079_);
if (v_isSharedCheck_1089_ == 0)
{
v___x_1084_ = v___x_1079_;
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1079_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1089_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1087_; 
if (v_isShared_1085_ == 0)
{
v___x_1087_ = v___x_1084_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1082_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask___boxed(lean_object* v_f_1090_, lean_object* v_a_1091_){
_start:
{
lean_object* v_res_1092_; 
v_res_1092_ = l_Lasm_Web_queueMicrotask(v_f_1090_);
return v_res_1092_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame(){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lasm_Web_Raw_nextFrame();
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame___boxed(lean_object* v_a_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lasm_Web_nextFrame();
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now(){
_start:
{
lean_object* v___x_1098_; 
v___x_1098_ = l_Lasm_Web_Raw_now();
return v___x_1098_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now___boxed(lean_object* v_a_1099_){
_start:
{
lean_object* v_res_1100_; 
v_res_1100_ = l_Lasm_Web_now();
return v_res_1100_;
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
