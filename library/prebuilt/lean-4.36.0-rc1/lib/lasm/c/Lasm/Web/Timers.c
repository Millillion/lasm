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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Lasm_Web_callback(lean_object*);
double lean_float_of_nat(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Lasm.Web.TimerId"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9_value;
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
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_9_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7));
v___x_10_ = lean_unsigned_to_nat(46u);
v___x_11_ = lean_unsigned_to_nat(193u);
v___x_12_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6));
v___x_13_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__5));
v___x_14_ = l_mkPanicMessageWithDecl(v___x_13_, v___x_12_, v___x_11_, v___x_10_, v___x_9_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0(lean_object* v_context_16_, lean_object* v_d_17_){
_start:
{
lean_object* v_received_20_; 
if (lean_obj_tag(v_d_17_) == 3)
{
double v_n_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v_n_34_ = lean_ctor_get_float(v_d_17_, 0);
lean_dec_ref_known(v_d_17_, 0);
v___x_35_ = lean_box_float(v_n_34_);
v___x_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
return v___x_36_;
}
else
{
if (lean_obj_tag(v_d_17_) == 9)
{
lean_object* v_value_37_; lean_object* v_description_38_; lean_object* v___x_39_; uint8_t v___x_40_; 
v_value_37_ = lean_ctor_get(v_d_17_, 0);
v_description_38_ = lean_ctor_get(v_d_17_, 1);
v___x_39_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_40_ = lean_string_dec_eq(v_description_38_, v___x_39_);
if (v___x_40_ == 0)
{
goto v___jp_32_;
}
else
{
uint32_t v___x_41_; uint64_t v___x_42_; lean_object* v___x_43_; uint32_t v___x_44_; lean_object* v___x_45_; 
lean_inc_n(v_value_37_, 2);
lean_dec_ref_known(v_d_17_, 2);
v___x_41_ = 206;
v___x_42_ = 0ULL;
v___x_43_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_43_, 0, v_value_37_);
lean_ctor_set(v___x_43_, 1, v___x_39_);
v___x_44_ = lasm_js_value_handle(v_value_37_);
lean_dec(v_value_37_);
v___x_45_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_41_, v___x_42_, v___x_43_, v___x_44_);
if (lean_obj_tag(v___x_45_) == 0)
{
lean_object* v_a_46_; uint8_t v___x_47_; 
v_a_46_ = lean_ctor_get(v___x_45_, 0);
lean_inc(v_a_46_);
lean_dec_ref_known(v___x_45_, 1);
v___x_47_ = lean_string_validate_utf8(v_a_46_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; lean_object* v___x_49_; 
lean_dec(v_a_46_);
v___x_48_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8);
v___x_49_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_48_);
v_received_20_ = v___x_49_;
goto v___jp_19_;
}
else
{
lean_object* v___x_50_; 
v___x_50_ = lean_string_from_utf8_unchecked(v_a_46_);
v_received_20_ = v___x_50_;
goto v___jp_19_;
}
}
else
{
lean_object* v___x_51_; 
lean_dec_ref_known(v___x_45_, 1);
v___x_51_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9));
v_received_20_ = v___x_51_;
goto v___jp_19_;
}
}
}
else
{
goto v___jp_32_;
}
}
v___jp_19_:
{
lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_21_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_22_ = lean_string_append(v___x_21_, v_context_16_);
v___x_23_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_24_ = lean_string_append(v___x_22_, v___x_23_);
v___x_25_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2));
v___x_26_ = lean_string_append(v___x_24_, v___x_25_);
v___x_27_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3));
v___x_28_ = lean_string_append(v___x_26_, v___x_27_);
v___x_29_ = lean_string_append(v___x_28_, v_received_20_);
lean_dec_ref(v_received_20_);
v___x_30_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
v___x_31_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
v___jp_32_:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_JS_Data_describe(v_d_17_);
v_received_20_ = v___x_33_;
goto v___jp_19_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___boxed(lean_object* v_context_52_, lean_object* v_d_53_, lean_object* v_a_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0(v_context_52_, v_d_53_);
lean_dec_ref(v_context_52_);
return v_res_55_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1(void){
_start:
{
uint8_t v___x_57_; uint64_t v___x_58_; 
v___x_57_ = 0;
v___x_58_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(lean_object* v_b_59_, lean_object* v_args_60_, uint8_t v_await_61_){
_start:
{
uint64_t v___y_64_; uint64_t v___y_65_; uint64_t v___x_100_; uint64_t v___y_102_; 
v___x_100_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_61_ == 0)
{
uint64_t v___x_107_; 
v___x_107_ = 0ULL;
v___y_102_ = v___x_107_;
goto v___jp_101_;
}
else
{
uint64_t v___x_108_; 
v___x_108_ = 2ULL;
v___y_102_ = v___x_108_;
goto v___jp_101_;
}
v___jp_63_:
{
uint64_t v_flags_66_; uint32_t v___x_67_; lean_object* v___x_68_; uint32_t v___x_69_; lean_object* v___x_70_; 
v_flags_66_ = lean_uint64_lor(v___y_64_, v___y_65_);
v___x_67_ = 214;
v___x_68_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_59_, v_args_60_);
v___x_69_ = 0;
v___x_70_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_67_, v_flags_66_, v___x_68_, v___x_69_);
if (lean_obj_tag(v___x_70_) == 0)
{
lean_object* v_a_71_; lean_object* v___x_72_; 
v_a_71_ = lean_ctor_get(v___x_70_, 0);
lean_inc(v_a_71_);
lean_dec_ref_known(v___x_70_, 1);
v___x_72_ = l_Lasm_JS_Wire_decode(v_a_71_);
lean_dec(v_a_71_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
lean_inc(v_a_73_);
lean_dec_ref_known(v___x_72_, 1);
v___x_74_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_59_);
v___x_75_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0(v___x_74_, v_a_73_);
lean_dec_ref(v___x_74_);
return v___x_75_;
}
else
{
lean_object* v_a_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_83_; 
v_a_76_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_83_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_83_ == 0)
{
v___x_78_ = v___x_72_;
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_a_76_);
lean_dec(v___x_72_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_83_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_81_; 
if (v_isShared_79_ == 0)
{
v___x_81_ = v___x_78_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v_a_76_);
v___x_81_ = v_reuseFailAlloc_82_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
return v___x_81_;
}
}
}
}
else
{
lean_object* v_a_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_99_; 
v_a_84_ = lean_ctor_get(v___x_70_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_70_);
if (v_isSharedCheck_99_ == 0)
{
v___x_86_ = v___x_70_;
v_isShared_87_ = v_isSharedCheck_99_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_a_84_);
lean_dec(v___x_70_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_99_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_97_; 
v___x_88_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_89_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_59_);
v___x_90_ = lean_string_append(v___x_88_, v___x_89_);
lean_dec_ref(v___x_89_);
v___x_91_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_92_ = lean_string_append(v___x_90_, v___x_91_);
v___x_93_ = lean_io_error_to_string(v_a_84_);
v___x_94_ = lean_string_append(v___x_92_, v___x_93_);
lean_dec_ref(v___x_93_);
v___x_95_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_95_);
v___x_97_ = v___x_86_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v___x_95_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
v___jp_101_:
{
uint8_t v_construct_103_; uint64_t v___x_104_; 
v_construct_103_ = lean_ctor_get_uint8(v_b_59_, sizeof(void*)*4);
v___x_104_ = lean_uint64_lor(v___x_100_, v___y_102_);
if (v_construct_103_ == 0)
{
uint64_t v___x_105_; 
v___x_105_ = 0ULL;
v___y_64_ = v___x_104_;
v___y_65_ = v___x_105_;
goto v___jp_63_;
}
else
{
uint64_t v___x_106_; 
v___x_106_ = 4ULL;
v___y_64_ = v___x_104_;
v___y_65_ = v___x_106_;
goto v___jp_63_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___boxed(lean_object* v_b_109_, lean_object* v_args_110_, lean_object* v_await_111_, lean_object* v_a_112_){
_start:
{
uint8_t v_await_boxed_113_; lean_object* v_res_114_; 
v_await_boxed_113_ = lean_unbox(v_await_111_);
v_res_114_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(v_b_109_, v_args_110_, v_await_boxed_113_);
lean_dec_ref(v_b_109_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setTimeout(lean_object* v_a_124_, double v_a_125_){
_start:
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; lean_object* v___x_135_; 
v___x_127_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__2));
v___x_128_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_129_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_130_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_130_, 0, v_a_124_);
lean_ctor_set(v___x_130_, 1, v___x_129_);
v___x_131_ = lean_array_push(v___x_128_, v___x_130_);
v___x_132_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_132_, 0, v_a_125_);
v___x_133_ = lean_array_push(v___x_131_, v___x_132_);
v___x_134_ = 1;
v___x_135_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(v___x_127_, v___x_133_, v___x_134_);
return v___x_135_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setTimeout___boxed(lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_){
_start:
{
double v_a_715__boxed_139_; lean_object* v_res_140_; 
v_a_715__boxed_139_ = lean_unbox_float(v_a_137_);
lean_dec_ref(v_a_137_);
v_res_140_ = l_Lasm_Web_Raw_setTimeout(v_a_136_, v_a_715__boxed_139_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(lean_object* v_b_141_, lean_object* v_args_142_, uint8_t v_await_143_){
_start:
{
uint64_t v___y_146_; uint64_t v___y_147_; uint64_t v___x_180_; uint64_t v___y_182_; 
v___x_180_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_143_ == 0)
{
uint64_t v___x_187_; 
v___x_187_ = 0ULL;
v___y_182_ = v___x_187_;
goto v___jp_181_;
}
else
{
uint64_t v___x_188_; 
v___x_188_ = 2ULL;
v___y_182_ = v___x_188_;
goto v___jp_181_;
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
lean_object* v___x_155_; 
lean_dec_ref_known(v___x_154_, 1);
v___x_155_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_155_;
}
else
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v_a_156_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_154_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_154_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_179_; 
v_a_164_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_179_ == 0)
{
v___x_166_ = v___x_152_;
v_isShared_167_ = v_isSharedCheck_179_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_152_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_179_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_177_; 
v___x_168_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_169_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_141_);
v___x_170_ = lean_string_append(v___x_168_, v___x_169_);
lean_dec_ref(v___x_169_);
v___x_171_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_172_ = lean_string_append(v___x_170_, v___x_171_);
v___x_173_ = lean_io_error_to_string(v_a_164_);
v___x_174_ = lean_string_append(v___x_172_, v___x_173_);
lean_dec_ref(v___x_173_);
v___x_175_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_175_, 0, v___x_174_);
if (v_isShared_167_ == 0)
{
lean_ctor_set(v___x_166_, 0, v___x_175_);
v___x_177_ = v___x_166_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_175_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
v___jp_181_:
{
uint8_t v_construct_183_; uint64_t v___x_184_; 
v_construct_183_ = lean_ctor_get_uint8(v_b_141_, sizeof(void*)*4);
v___x_184_ = lean_uint64_lor(v___x_180_, v___y_182_);
if (v_construct_183_ == 0)
{
uint64_t v___x_185_; 
v___x_185_ = 0ULL;
v___y_146_ = v___x_184_;
v___y_147_ = v___x_185_;
goto v___jp_145_;
}
else
{
uint64_t v___x_186_; 
v___x_186_ = 4ULL;
v___y_146_ = v___x_184_;
v___y_147_ = v___x_186_;
goto v___jp_145_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0___boxed(lean_object* v_b_189_, lean_object* v_args_190_, lean_object* v_await_191_, lean_object* v_a_192_){
_start:
{
uint8_t v_await_boxed_193_; lean_object* v_res_194_; 
v_await_boxed_193_ = lean_unbox(v_await_191_);
v_res_194_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v_b_189_, v_args_190_, v_await_boxed_193_);
lean_dec_ref(v_b_189_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout(double v_a_201_){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; lean_object* v___x_208_; 
v___x_203_ = ((lean_object*)(l_Lasm_Web_Raw_clearTimeout___closed__1));
v___x_204_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_205_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_205_, 0, v_a_201_);
v___x_206_ = lean_array_push(v___x_204_, v___x_205_);
v___x_207_ = 1;
v___x_208_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_203_, v___x_206_, v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout___boxed(lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
double v_a_266__boxed_211_; lean_object* v_res_212_; 
v_a_266__boxed_211_ = lean_unbox_float(v_a_209_);
lean_dec_ref(v_a_209_);
v_res_212_ = l_Lasm_Web_Raw_clearTimeout(v_a_266__boxed_211_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval(lean_object* v_a_219_, double v_a_220_){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; uint8_t v___x_229_; lean_object* v___x_230_; 
v___x_222_ = ((lean_object*)(l_Lasm_Web_Raw_setInterval___closed__1));
v___x_223_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_224_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_225_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_225_, 0, v_a_219_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = lean_array_push(v___x_223_, v___x_225_);
v___x_227_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_227_, 0, v_a_220_);
v___x_228_ = lean_array_push(v___x_226_, v___x_227_);
v___x_229_ = 1;
v___x_230_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(v___x_222_, v___x_228_, v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval___boxed(lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_){
_start:
{
double v_a_131__boxed_234_; lean_object* v_res_235_; 
v_a_131__boxed_234_ = lean_unbox_float(v_a_232_);
lean_dec_ref(v_a_232_);
v_res_235_ = l_Lasm_Web_Raw_setInterval(v_a_231_, v_a_131__boxed_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval(double v_a_242_){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; uint8_t v___x_248_; lean_object* v___x_249_; 
v___x_244_ = ((lean_object*)(l_Lasm_Web_Raw_clearInterval___closed__1));
v___x_245_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_246_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_246_, 0, v_a_242_);
v___x_247_ = lean_array_push(v___x_245_, v___x_246_);
v___x_248_ = 1;
v___x_249_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_244_, v___x_247_, v___x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval___boxed(lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
double v_a_86__boxed_252_; lean_object* v_res_253_; 
v_a_86__boxed_252_ = lean_unbox_float(v_a_250_);
lean_dec_ref(v_a_250_);
v_res_253_ = l_Lasm_Web_Raw_clearInterval(v_a_86__boxed_252_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(lean_object* v_context_255_, lean_object* v_d_256_){
_start:
{
lean_object* v_received_259_; 
if (lean_obj_tag(v_d_256_) == 3)
{
double v_n_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v_n_273_ = lean_ctor_get_float(v_d_256_, 0);
lean_dec_ref_known(v_d_256_, 0);
v___x_274_ = lean_box_float(v_n_273_);
v___x_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
return v___x_275_;
}
else
{
if (lean_obj_tag(v_d_256_) == 9)
{
lean_object* v_value_276_; lean_object* v_description_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
v_value_276_ = lean_ctor_get(v_d_256_, 0);
v_description_277_ = lean_ctor_get(v_d_256_, 1);
v___x_278_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_279_ = lean_string_dec_eq(v_description_277_, v___x_278_);
if (v___x_279_ == 0)
{
goto v___jp_271_;
}
else
{
uint32_t v___x_280_; uint64_t v___x_281_; lean_object* v___x_282_; uint32_t v___x_283_; lean_object* v___x_284_; 
lean_inc_n(v_value_276_, 2);
lean_dec_ref_known(v_d_256_, 2);
v___x_280_ = 206;
v___x_281_ = 0ULL;
v___x_282_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_282_, 0, v_value_276_);
lean_ctor_set(v___x_282_, 1, v___x_278_);
v___x_283_ = lasm_js_value_handle(v_value_276_);
lean_dec(v_value_276_);
v___x_284_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_280_, v___x_281_, v___x_282_, v___x_283_);
if (lean_obj_tag(v___x_284_) == 0)
{
lean_object* v_a_285_; uint8_t v___x_286_; 
v_a_285_ = lean_ctor_get(v___x_284_, 0);
lean_inc(v_a_285_);
lean_dec_ref_known(v___x_284_, 1);
v___x_286_ = lean_string_validate_utf8(v_a_285_);
if (v___x_286_ == 0)
{
lean_object* v___x_287_; lean_object* v___x_288_; 
lean_dec(v_a_285_);
v___x_287_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8);
v___x_288_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_287_);
v_received_259_ = v___x_288_;
goto v___jp_258_;
}
else
{
lean_object* v___x_289_; 
v___x_289_ = lean_string_from_utf8_unchecked(v_a_285_);
v_received_259_ = v___x_289_;
goto v___jp_258_;
}
}
else
{
lean_object* v___x_290_; 
lean_dec_ref_known(v___x_284_, 1);
v___x_290_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9));
v_received_259_ = v___x_290_;
goto v___jp_258_;
}
}
}
else
{
goto v___jp_271_;
}
}
v___jp_258_:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_261_ = lean_string_append(v___x_260_, v_context_255_);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___closed__0));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
v___x_266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
v___x_268_ = lean_string_append(v___x_267_, v_received_259_);
lean_dec_ref(v_received_259_);
v___x_269_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_269_, 0, v___x_268_);
v___x_270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
return v___x_270_;
}
v___jp_271_:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lasm_JS_Data_describe(v_d_256_);
v_received_259_ = v___x_272_;
goto v___jp_258_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___boxed(lean_object* v_context_291_, lean_object* v_d_292_, lean_object* v_a_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(v_context_291_, v_d_292_);
lean_dec_ref(v_context_291_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(lean_object* v_b_295_, lean_object* v_args_296_, uint8_t v_await_297_){
_start:
{
uint64_t v___y_300_; uint64_t v___y_301_; uint64_t v___x_336_; uint64_t v___y_338_; 
v___x_336_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_297_ == 0)
{
uint64_t v___x_343_; 
v___x_343_ = 0ULL;
v___y_338_ = v___x_343_;
goto v___jp_337_;
}
else
{
uint64_t v___x_344_; 
v___x_344_ = 2ULL;
v___y_338_ = v___x_344_;
goto v___jp_337_;
}
v___jp_299_:
{
uint64_t v_flags_302_; uint32_t v___x_303_; lean_object* v___x_304_; uint32_t v___x_305_; lean_object* v___x_306_; 
v_flags_302_ = lean_uint64_lor(v___y_300_, v___y_301_);
v___x_303_ = 214;
v___x_304_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_295_, v_args_296_);
v___x_305_ = 0;
v___x_306_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_303_, v_flags_302_, v___x_304_, v___x_305_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v_a_307_; lean_object* v___x_308_; 
v_a_307_ = lean_ctor_get(v___x_306_, 0);
lean_inc(v_a_307_);
lean_dec_ref_known(v___x_306_, 1);
v___x_308_ = l_Lasm_JS_Wire_decode(v_a_307_);
lean_dec(v_a_307_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_310_; lean_object* v___x_311_; 
v_a_309_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_309_);
lean_dec_ref_known(v___x_308_, 1);
v___x_310_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_295_);
v___x_311_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(v___x_310_, v_a_309_);
lean_dec_ref(v___x_310_);
return v___x_311_;
}
else
{
lean_object* v_a_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
v_a_312_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_319_ == 0)
{
v___x_314_ = v___x_308_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_a_312_);
lean_dec(v___x_308_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_312_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
}
else
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_335_; 
v_a_320_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_335_ == 0)
{
v___x_322_ = v___x_306_;
v_isShared_323_ = v_isSharedCheck_335_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_306_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_335_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_333_; 
v___x_324_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_325_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_295_);
v___x_326_ = lean_string_append(v___x_324_, v___x_325_);
lean_dec_ref(v___x_325_);
v___x_327_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_328_ = lean_string_append(v___x_326_, v___x_327_);
v___x_329_ = lean_io_error_to_string(v_a_320_);
v___x_330_ = lean_string_append(v___x_328_, v___x_329_);
lean_dec_ref(v___x_329_);
v___x_331_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_331_, 0, v___x_330_);
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v___x_331_);
v___x_333_ = v___x_322_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v___x_331_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
v___jp_337_:
{
uint8_t v_construct_339_; uint64_t v___x_340_; 
v_construct_339_ = lean_ctor_get_uint8(v_b_295_, sizeof(void*)*4);
v___x_340_ = lean_uint64_lor(v___x_336_, v___y_338_);
if (v_construct_339_ == 0)
{
uint64_t v___x_341_; 
v___x_341_ = 0ULL;
v___y_300_ = v___x_340_;
v___y_301_ = v___x_341_;
goto v___jp_299_;
}
else
{
uint64_t v___x_342_; 
v___x_342_ = 4ULL;
v___y_300_ = v___x_340_;
v___y_301_ = v___x_342_;
goto v___jp_299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0___boxed(lean_object* v_b_345_, lean_object* v_args_346_, lean_object* v_await_347_, lean_object* v_a_348_){
_start:
{
uint8_t v_await_boxed_349_; lean_object* v_res_350_; 
v_await_boxed_349_ = lean_unbox(v_await_347_);
v_res_350_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(v_b_345_, v_args_346_, v_await_boxed_349_);
lean_dec_ref(v_b_345_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame(lean_object* v_a_357_){
_start:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; uint8_t v___x_364_; lean_object* v___x_365_; 
v___x_359_ = ((lean_object*)(l_Lasm_Web_Raw_requestAnimationFrame___closed__1));
v___x_360_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_361_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_362_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_362_, 0, v_a_357_);
lean_ctor_set(v___x_362_, 1, v___x_361_);
v___x_363_ = lean_array_push(v___x_360_, v___x_362_);
v___x_364_ = 1;
v___x_365_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(v___x_359_, v___x_363_, v___x_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame___boxed(lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lasm_Web_Raw_requestAnimationFrame(v_a_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame(double v_a_375_){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; lean_object* v___x_382_; 
v___x_377_ = ((lean_object*)(l_Lasm_Web_Raw_cancelAnimationFrame___closed__1));
v___x_378_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_379_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_379_, 0, v_a_375_);
v___x_380_ = lean_array_push(v___x_378_, v___x_379_);
v___x_381_ = 1;
v___x_382_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_377_, v___x_380_, v___x_381_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame___boxed(lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
double v_a_86__boxed_385_; lean_object* v_res_386_; 
v_a_86__boxed_385_ = lean_unbox_float(v_a_383_);
lean_dec_ref(v_a_383_);
v_res_386_ = l_Lasm_Web_Raw_cancelAnimationFrame(v_a_86__boxed_385_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask(lean_object* v_a_393_){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; uint8_t v___x_400_; lean_object* v___x_401_; 
v___x_395_ = ((lean_object*)(l_Lasm_Web_Raw_queueMicrotask___closed__1));
v___x_396_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_398_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_398_, 0, v_a_393_);
lean_ctor_set(v___x_398_, 1, v___x_397_);
v___x_399_ = lean_array_push(v___x_396_, v___x_398_);
v___x_400_ = 1;
v___x_401_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_395_, v___x_399_, v___x_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask___boxed(lean_object* v_a_402_, lean_object* v_a_403_){
_start:
{
lean_object* v_res_404_; 
v_res_404_ = l_Lasm_Web_Raw_queueMicrotask(v_a_402_);
return v_res_404_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(lean_object* v___f_405_, lean_object* v_x_406_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_410_; uint8_t v_isShared_411_; uint8_t v_isSharedCheck_416_; 
lean_dec_ref(v___f_405_);
v_a_408_ = lean_ctor_get(v_x_406_, 0);
v_isSharedCheck_416_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_416_ == 0)
{
v___x_410_ = v_x_406_;
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
else
{
lean_inc(v_a_408_);
lean_dec(v_x_406_);
v___x_410_ = lean_box(0);
v_isShared_411_ = v_isSharedCheck_416_;
goto v_resetjp_409_;
}
v_resetjp_409_:
{
lean_object* v___x_413_; 
if (v_isShared_411_ == 0)
{
v___x_413_ = v___x_410_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_408_);
v___x_413_ = v_reuseFailAlloc_415_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; 
v___x_414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
return v___x_414_;
}
}
}
else
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_428_; 
v_isSharedCheck_428_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_428_ == 0)
{
lean_object* v_unused_429_; 
v_unused_429_ = lean_ctor_get(v_x_406_, 0);
lean_dec(v_unused_429_);
v___x_418_ = v_x_406_;
v_isShared_419_ = v_isSharedCheck_428_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_x_406_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_428_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; uint8_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_424_; 
v___x_420_ = lean_unsigned_to_nat(0u);
v___x_421_ = 0;
v___x_422_ = lean_io_promise_new();
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_422_);
v___x_424_ = v___x_418_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v___x_422_);
v___x_424_ = v_reuseFailAlloc_427_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v___x_424_);
v___x_426_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_420_, v___x_421_, v___x_425_, v___f_405_);
return v___x_426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed(lean_object* v___f_430_, lean_object* v_x_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(v___f_430_, v_x_431_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(lean_object* v_a_434_, lean_object* v_x_435_){
_start:
{
if (lean_obj_tag(v_x_435_) == 0)
{
lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_445_; 
v_a_437_ = lean_ctor_get(v_x_435_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v_x_435_);
if (v_isSharedCheck_445_ == 0)
{
v___x_439_ = v_x_435_;
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v_x_435_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_445_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_442_; 
if (v_isShared_440_ == 0)
{
v___x_442_ = v___x_439_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_437_);
v___x_442_ = v_reuseFailAlloc_444_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
lean_object* v___x_443_; 
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
}
}
else
{
lean_object* v___x_446_; 
lean_dec_ref_known(v_x_435_, 1);
v___x_446_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_434_);
return v___x_446_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed(lean_object* v_a_447_, lean_object* v_x_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(v_a_447_, v_x_448_);
lean_dec(v_a_447_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(lean_object* v_payload_451_, lean_object* v_failurePrefix_452_, lean_object* v___f_453_, lean_object* v___f_454_, uint32_t v_op_455_, uint64_t v_flags_456_, lean_object* v___f_457_, lean_object* v_x_458_){
_start:
{
if (lean_obj_tag(v_x_458_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_468_; 
lean_dec_ref(v___f_457_);
lean_dec_ref(v___f_454_);
lean_dec_ref(v___f_453_);
lean_dec(v_payload_451_);
v_a_460_ = lean_ctor_get(v_x_458_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v_x_458_);
if (v_isSharedCheck_468_ == 0)
{
v___x_462_ = v_x_458_;
v_isShared_463_ = v_isSharedCheck_468_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v_x_458_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_468_;
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
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_467_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; 
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v___x_465_);
return v___x_466_;
}
}
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_510_; 
v_a_469_ = lean_ctor_get(v_x_458_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_x_458_);
if (v_isSharedCheck_510_ == 0)
{
v___x_471_ = v_x_458_;
v_isShared_472_ = v_isSharedCheck_510_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v_x_458_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_510_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
uint32_t v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; uint8_t v___x_477_; 
v___x_473_ = 0;
lean_inc(v_payload_451_);
v___x_474_ = l_Lasm_JS_Wire_encode(v_payload_451_);
v___x_475_ = lean_string_utf8_byte_size(v_failurePrefix_452_);
v___x_476_ = lean_unsigned_to_nat(0u);
v___x_477_ = lean_nat_dec_eq(v___x_475_, v___x_476_);
if (v___x_477_ == 0)
{
lean_object* v___f_478_; lean_object* v_val_480_; lean_object* v___x_485_; 
lean_dec_ref(v___f_457_);
lean_inc(v_a_469_);
v___f_478_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_478_, 0, v_a_469_);
v___x_485_ = lasm_js_call_into(v_a_469_, v_op_455_, v___x_473_, v_flags_456_, v___x_474_, v_payload_451_);
lean_dec(v_payload_451_);
lean_dec_ref(v___x_474_);
lean_dec(v_a_469_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; lean_object* v___x_488_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_485_, 1);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v_a_486_);
v___x_488_ = v___x_471_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
v_val_480_ = v___x_488_;
goto v___jp_479_;
}
}
else
{
lean_object* v_a_490_; lean_object* v___x_492_; 
v_a_490_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_485_, 1);
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 0);
lean_ctor_set(v___x_471_, 0, v_a_490_);
v___x_492_ = v___x_471_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
v_val_480_ = v___x_492_;
goto v___jp_479_;
}
}
v___jp_479_:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; 
v___x_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_481_, 0, v_val_480_);
v___x_482_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_476_, v___x_477_, v___x_481_, v___f_478_);
v___x_483_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_476_, v___x_477_, v___x_482_, v___f_453_);
v___x_484_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_476_, v___x_477_, v___x_483_, v___f_454_);
return v___x_484_;
}
}
else
{
lean_object* v___f_494_; uint8_t v___x_495_; lean_object* v_val_497_; lean_object* v___x_501_; 
lean_dec_ref(v___f_454_);
lean_dec_ref(v___f_453_);
lean_inc(v_a_469_);
v___f_494_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_494_, 0, v_a_469_);
v___x_495_ = 0;
v___x_501_ = lasm_js_call_into(v_a_469_, v_op_455_, v___x_473_, v_flags_456_, v___x_474_, v_payload_451_);
lean_dec(v_payload_451_);
lean_dec_ref(v___x_474_);
lean_dec(v_a_469_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v___x_504_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___x_501_, 1);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v_a_502_);
v___x_504_ = v___x_471_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v_a_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
v_val_497_ = v___x_504_;
goto v___jp_496_;
}
}
else
{
lean_object* v_a_506_; lean_object* v___x_508_; 
v_a_506_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_506_);
lean_dec_ref_known(v___x_501_, 1);
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 0);
lean_ctor_set(v___x_471_, 0, v_a_506_);
v___x_508_ = v___x_471_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v_a_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
v_val_497_ = v___x_508_;
goto v___jp_496_;
}
}
v___jp_496_:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v_val_497_);
v___x_499_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_476_, v___x_495_, v___x_498_, v___f_494_);
v___x_500_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_476_, v___x_495_, v___x_499_, v___f_457_);
return v___x_500_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_511_, lean_object* v_failurePrefix_512_, lean_object* v___f_513_, lean_object* v___f_514_, lean_object* v_op_515_, lean_object* v_flags_516_, lean_object* v___f_517_, lean_object* v_x_518_, lean_object* v___y_519_){
_start:
{
uint32_t v_op_boxed_520_; uint64_t v_flags_boxed_521_; lean_object* v_res_522_; 
v_op_boxed_520_ = lean_unbox_uint32(v_op_515_);
lean_dec(v_op_515_);
v_flags_boxed_521_ = lean_unbox_uint64(v_flags_516_);
lean_dec_ref(v_flags_516_);
v_res_522_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(v_payload_511_, v_failurePrefix_512_, v___f_513_, v___f_514_, v_op_boxed_520_, v_flags_boxed_521_, v___f_517_, v_x_518_);
lean_dec_ref(v_failurePrefix_512_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(lean_object* v_context_524_, lean_object* v_d_525_){
_start:
{
lean_object* v_received_528_; 
if (lean_obj_tag(v_d_525_) == 3)
{
double v_n_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_n_542_ = lean_ctor_get_float(v_d_525_, 0);
lean_dec_ref_known(v_d_525_, 0);
v___x_543_ = lean_box_float(v_n_542_);
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
else
{
if (lean_obj_tag(v_d_525_) == 9)
{
lean_object* v_value_545_; lean_object* v_description_546_; lean_object* v___x_547_; uint8_t v___x_548_; 
v_value_545_ = lean_ctor_get(v_d_525_, 0);
v_description_546_ = lean_ctor_get(v_d_525_, 1);
v___x_547_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_548_ = lean_string_dec_eq(v_description_546_, v___x_547_);
if (v___x_548_ == 0)
{
goto v___jp_540_;
}
else
{
uint32_t v___x_549_; uint64_t v___x_550_; lean_object* v___x_551_; uint32_t v___x_552_; lean_object* v___x_553_; 
lean_inc_n(v_value_545_, 2);
lean_dec_ref_known(v_d_525_, 2);
v___x_549_ = 206;
v___x_550_ = 0ULL;
v___x_551_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_551_, 0, v_value_545_);
lean_ctor_set(v___x_551_, 1, v___x_547_);
v___x_552_ = lasm_js_value_handle(v_value_545_);
lean_dec(v_value_545_);
v___x_553_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_549_, v___x_550_, v___x_551_, v___x_552_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; uint8_t v___x_555_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc(v_a_554_);
lean_dec_ref_known(v___x_553_, 1);
v___x_555_ = lean_string_validate_utf8(v_a_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; lean_object* v___x_557_; 
lean_dec(v_a_554_);
v___x_556_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__8);
v___x_557_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_556_);
v_received_528_ = v___x_557_;
goto v___jp_527_;
}
else
{
lean_object* v___x_558_; 
v___x_558_ = lean_string_from_utf8_unchecked(v_a_554_);
v_received_528_ = v___x_558_;
goto v___jp_527_;
}
}
else
{
lean_object* v___x_559_; 
lean_dec_ref_known(v___x_553_, 1);
v___x_559_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__9));
v_received_528_ = v___x_559_;
goto v___jp_527_;
}
}
}
else
{
goto v___jp_540_;
}
}
v___jp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_529_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_530_ = lean_string_append(v___x_529_, v_context_524_);
v___x_531_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_532_ = lean_string_append(v___x_530_, v___x_531_);
v___x_533_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0));
v___x_534_ = lean_string_append(v___x_532_, v___x_533_);
v___x_535_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__3));
v___x_536_ = lean_string_append(v___x_534_, v___x_535_);
v___x_537_ = lean_string_append(v___x_536_, v_received_528_);
lean_dec_ref(v_received_528_);
v___x_538_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
return v___x_539_;
}
v___jp_540_:
{
lean_object* v___x_541_; 
v___x_541_ = l_Lasm_JS_Data_describe(v_d_525_);
v_received_528_ = v___x_541_;
goto v___jp_527_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___boxed(lean_object* v_context_560_, lean_object* v_d_561_, lean_object* v_a_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_560_, v_d_561_);
lean_dec_ref(v_context_560_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(lean_object* v_context_564_, lean_object* v_x_565_){
_start:
{
lean_object* v_val_568_; 
if (lean_obj_tag(v_x_565_) == 0)
{
lean_object* v_a_570_; lean_object* v___x_572_; uint8_t v_isShared_573_; uint8_t v_isSharedCheck_578_; 
v_a_570_ = lean_ctor_get(v_x_565_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v_x_565_);
if (v_isSharedCheck_578_ == 0)
{
v___x_572_ = v_x_565_;
v_isShared_573_ = v_isSharedCheck_578_;
goto v_resetjp_571_;
}
else
{
lean_inc(v_a_570_);
lean_dec(v_x_565_);
v___x_572_ = lean_box(0);
v_isShared_573_ = v_isSharedCheck_578_;
goto v_resetjp_571_;
}
v_resetjp_571_:
{
lean_object* v___x_575_; 
if (v_isShared_573_ == 0)
{
v___x_575_ = v___x_572_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_570_);
v___x_575_ = v_reuseFailAlloc_577_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_576_; 
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
return v___x_576_;
}
}
}
else
{
lean_object* v_a_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_592_; 
v_a_579_ = lean_ctor_get(v_x_565_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v_x_565_);
if (v_isSharedCheck_592_ == 0)
{
v___x_581_ = v_x_565_;
v_isShared_582_ = v_isSharedCheck_592_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_a_579_);
lean_dec(v_x_565_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_592_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_583_; 
v___x_583_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_564_, v_a_579_);
if (lean_obj_tag(v___x_583_) == 0)
{
lean_object* v_a_584_; lean_object* v___x_586_; 
v_a_584_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_584_);
lean_dec_ref_known(v___x_583_, 1);
if (v_isShared_582_ == 0)
{
lean_ctor_set(v___x_581_, 0, v_a_584_);
v___x_586_ = v___x_581_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
v_val_568_ = v___x_586_;
goto v___jp_567_;
}
}
else
{
lean_object* v_a_588_; lean_object* v___x_590_; 
v_a_588_ = lean_ctor_get(v___x_583_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_583_, 1);
if (v_isShared_582_ == 0)
{
lean_ctor_set_tag(v___x_581_, 0);
lean_ctor_set(v___x_581_, 0, v_a_588_);
v___x_590_ = v___x_581_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v_a_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
v_val_568_ = v___x_590_;
goto v___jp_567_;
}
}
}
}
v___jp_567_:
{
lean_object* v___x_569_; 
v___x_569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_569_, 0, v_val_568_);
return v___x_569_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed(lean_object* v_context_593_, lean_object* v_x_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(v_context_593_, v_x_594_);
lean_dec_ref(v_context_593_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(lean_object* v_failurePrefix_597_, lean_object* v_x_598_){
_start:
{
if (lean_obj_tag(v_x_598_) == 0)
{
lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_611_; 
v_a_600_ = lean_ctor_get(v_x_598_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v_x_598_);
if (v_isSharedCheck_611_ == 0)
{
v___x_602_ = v_x_598_;
v_isShared_603_ = v_isSharedCheck_611_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v_x_598_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_611_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_608_; 
v___x_604_ = lean_io_error_to_string(v_a_600_);
v___x_605_ = lean_string_append(v_failurePrefix_597_, v___x_604_);
lean_dec_ref(v___x_604_);
v___x_606_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 0, v___x_606_);
v___x_608_ = v___x_602_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v___x_606_);
v___x_608_ = v_reuseFailAlloc_610_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
lean_object* v___x_609_; 
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
return v___x_609_;
}
}
}
else
{
lean_object* v___x_612_; 
lean_dec_ref(v_failurePrefix_597_);
v___x_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_612_, 0, v_x_598_);
return v___x_612_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed(lean_object* v_failurePrefix_613_, lean_object* v_x_614_, lean_object* v___y_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(v_failurePrefix_613_, v_x_614_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(lean_object* v___f_617_, lean_object* v_bytes_618_){
_start:
{
lean_object* v___x_620_; uint8_t v___x_621_; lean_object* v_val_623_; lean_object* v___x_626_; 
v___x_620_ = lean_unsigned_to_nat(0u);
v___x_621_ = 0;
v___x_626_ = l_Lasm_JS_Wire_decode(v_bytes_618_);
if (lean_obj_tag(v___x_626_) == 0)
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_626_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
lean_ctor_set_tag(v___x_629_, 1);
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
v_val_623_ = v___x_632_;
goto v___jp_622_;
}
}
}
else
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_642_; 
v_a_635_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_642_ == 0)
{
v___x_637_ = v___x_626_;
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_626_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_642_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v___x_640_; 
if (v_isShared_638_ == 0)
{
lean_ctor_set_tag(v___x_637_, 0);
v___x_640_ = v___x_637_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_a_635_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
v_val_623_ = v___x_640_;
goto v___jp_622_;
}
}
}
v___jp_622_:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_624_, 0, v_val_623_);
v___x_625_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_620_, v___x_621_, v___x_624_, v___f_617_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed(lean_object* v___f_643_, lean_object* v_bytes_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(v___f_643_, v_bytes_644_);
lean_dec_ref(v_bytes_644_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(lean_object* v___f_647_, lean_object* v_x_648_){
_start:
{
if (lean_obj_tag(v_x_648_) == 0)
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v___f_647_);
v_a_650_ = lean_ctor_get(v_x_648_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_658_ == 0)
{
v___x_652_ = v_x_648_;
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v_x_648_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_658_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_657_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; 
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
}
else
{
lean_object* v_a_659_; lean_object* v___x_660_; 
v_a_659_ = lean_ctor_get(v_x_648_, 0);
lean_inc(v_a_659_);
lean_dec_ref_known(v_x_648_, 1);
v___x_660_ = lean_apply_2(v___f_647_, v_a_659_, lean_box(0));
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed(lean_object* v___f_661_, lean_object* v_x_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(v___f_661_, v_x_662_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(lean_object* v_context_665_, uint32_t v_op_666_, uint64_t v_flags_667_, lean_object* v_payload_668_, lean_object* v_failurePrefix_669_){
_start:
{
lean_object* v___f_671_; lean_object* v___f_672_; lean_object* v___f_673_; lean_object* v___f_674_; lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___f_677_; lean_object* v___f_678_; lean_object* v___x_679_; uint8_t v___x_680_; lean_object* v_val_682_; lean_object* v___x_685_; 
lean_inc_ref(v_failurePrefix_669_);
v___f_671_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_671_, 0, v_failurePrefix_669_);
v___f_672_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_672_, 0, v_context_665_);
v___f_673_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_673_, 0, v___f_672_);
v___f_674_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_674_, 0, v___f_673_);
v___x_675_ = lean_box_uint32(v_op_666_);
v___x_676_ = lean_box_uint64(v_flags_667_);
lean_inc_ref(v___f_674_);
v___f_677_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_677_, 0, v_payload_668_);
lean_closure_set(v___f_677_, 1, v_failurePrefix_669_);
lean_closure_set(v___f_677_, 2, v___f_671_);
lean_closure_set(v___f_677_, 3, v___f_674_);
lean_closure_set(v___f_677_, 4, v___x_675_);
lean_closure_set(v___f_677_, 5, v___x_676_);
lean_closure_set(v___f_677_, 6, v___f_674_);
v___f_678_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_678_, 0, v___f_677_);
v___x_679_ = lean_unsigned_to_nat(0u);
v___x_680_ = 0;
v___x_685_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_685_) == 0)
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
v_a_686_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_685_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_685_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
lean_ctor_set_tag(v___x_688_, 1);
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
v_val_682_ = v___x_691_;
goto v___jp_681_;
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
v_a_694_ = lean_ctor_get(v___x_685_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_685_);
if (v_isSharedCheck_701_ == 0)
{
v___x_696_ = v___x_685_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_685_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
lean_ctor_set_tag(v___x_696_, 0);
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_694_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
v_val_682_ = v___x_699_;
goto v___jp_681_;
}
}
}
v___jp_681_:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v_val_682_);
v___x_684_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_679_, v___x_680_, v___x_683_, v___f_678_);
return v___x_684_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___boxed(lean_object* v_context_702_, lean_object* v_op_703_, lean_object* v_flags_704_, lean_object* v_payload_705_, lean_object* v_failurePrefix_706_, lean_object* v_a_707_){
_start:
{
uint32_t v_op_boxed_708_; uint64_t v_flags_boxed_709_; lean_object* v_res_710_; 
v_op_boxed_708_ = lean_unbox_uint32(v_op_703_);
lean_dec(v_op_703_);
v_flags_boxed_709_ = lean_unbox_uint64(v_flags_704_);
lean_dec_ref(v_flags_704_);
v_res_710_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v_context_702_, v_op_boxed_708_, v_flags_boxed_709_, v_payload_705_, v_failurePrefix_706_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(lean_object* v_b_711_, lean_object* v_args_712_){
_start:
{
uint8_t v_construct_714_; lean_object* v___x_715_; uint32_t v___x_716_; uint64_t v___x_717_; uint64_t v___y_719_; 
v_construct_714_ = lean_ctor_get_uint8(v_b_711_, sizeof(void*)*4);
v___x_715_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_711_);
v___x_716_ = 214;
v___x_717_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_construct_714_ == 0)
{
uint64_t v___x_727_; 
v___x_727_ = 0ULL;
v___y_719_ = v___x_727_;
goto v___jp_718_;
}
else
{
uint64_t v___x_728_; 
v___x_728_ = 4ULL;
v___y_719_ = v___x_728_;
goto v___jp_718_;
}
v___jp_718_:
{
uint64_t v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_720_ = lean_uint64_lor(v___x_717_, v___y_719_);
v___x_721_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_711_, v_args_712_);
v___x_722_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_723_ = lean_string_append(v___x_722_, v___x_715_);
v___x_724_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_725_ = lean_string_append(v___x_723_, v___x_724_);
v___x_726_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v___x_715_, v___x_716_, v___x_720_, v___x_721_, v___x_725_);
return v___x_726_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0___boxed(lean_object* v_b_729_, lean_object* v_args_730_, lean_object* v_a_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v_b_729_, v_args_730_);
lean_dec_ref(v_b_729_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame(){
_start:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_740_ = ((lean_object*)(l_Lasm_Web_Raw_nextFrame___closed__1));
v___x_741_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_742_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v___x_740_, v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame___boxed(lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_Lasm_Web_Raw_nextFrame();
return v_res_744_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(lean_object* v_b_745_, lean_object* v_args_746_, uint8_t v_await_747_){
_start:
{
uint64_t v___y_750_; uint64_t v___y_751_; uint64_t v___x_786_; uint64_t v___y_788_; 
v___x_786_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_747_ == 0)
{
uint64_t v___x_793_; 
v___x_793_ = 0ULL;
v___y_788_ = v___x_793_;
goto v___jp_787_;
}
else
{
uint64_t v___x_794_; 
v___x_794_ = 2ULL;
v___y_788_ = v___x_794_;
goto v___jp_787_;
}
v___jp_749_:
{
uint64_t v_flags_752_; uint32_t v___x_753_; lean_object* v___x_754_; uint32_t v___x_755_; lean_object* v___x_756_; 
v_flags_752_ = lean_uint64_lor(v___y_750_, v___y_751_);
v___x_753_ = 214;
v___x_754_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_745_, v_args_746_);
v___x_755_ = 0;
v___x_756_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_753_, v_flags_752_, v___x_754_, v___x_755_);
if (lean_obj_tag(v___x_756_) == 0)
{
lean_object* v_a_757_; lean_object* v___x_758_; 
v_a_757_ = lean_ctor_get(v___x_756_, 0);
lean_inc(v_a_757_);
lean_dec_ref_known(v___x_756_, 1);
v___x_758_ = l_Lasm_JS_Wire_decode(v_a_757_);
lean_dec(v_a_757_);
if (lean_obj_tag(v___x_758_) == 0)
{
lean_object* v_a_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_758_, 1);
v___x_760_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_745_);
v___x_761_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v___x_760_, v_a_759_);
lean_dec_ref(v___x_760_);
return v___x_761_;
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
v_a_762_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_758_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_758_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
else
{
lean_object* v_a_770_; lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_785_; 
v_a_770_ = lean_ctor_get(v___x_756_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_756_);
if (v_isSharedCheck_785_ == 0)
{
v___x_772_ = v___x_756_;
v_isShared_773_ = v_isSharedCheck_785_;
goto v_resetjp_771_;
}
else
{
lean_inc(v_a_770_);
lean_dec(v___x_756_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_785_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
v___x_774_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_775_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_745_);
v___x_776_ = lean_string_append(v___x_774_, v___x_775_);
lean_dec_ref(v___x_775_);
v___x_777_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_778_ = lean_string_append(v___x_776_, v___x_777_);
v___x_779_ = lean_io_error_to_string(v_a_770_);
v___x_780_ = lean_string_append(v___x_778_, v___x_779_);
lean_dec_ref(v___x_779_);
v___x_781_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_781_, 0, v___x_780_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 0, v___x_781_);
v___x_783_ = v___x_772_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
v___jp_787_:
{
uint8_t v_construct_789_; uint64_t v___x_790_; 
v_construct_789_ = lean_ctor_get_uint8(v_b_745_, sizeof(void*)*4);
v___x_790_ = lean_uint64_lor(v___x_786_, v___y_788_);
if (v_construct_789_ == 0)
{
uint64_t v___x_791_; 
v___x_791_ = 0ULL;
v___y_750_ = v___x_790_;
v___y_751_ = v___x_791_;
goto v___jp_749_;
}
else
{
uint64_t v___x_792_; 
v___x_792_ = 4ULL;
v___y_750_ = v___x_790_;
v___y_751_ = v___x_792_;
goto v___jp_749_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0___boxed(lean_object* v_b_795_, lean_object* v_args_796_, lean_object* v_await_797_, lean_object* v_a_798_){
_start:
{
uint8_t v_await_boxed_799_; lean_object* v_res_800_; 
v_await_boxed_799_ = lean_unbox(v_await_797_);
v_res_800_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v_b_795_, v_args_796_, v_await_boxed_799_);
lean_dec_ref(v_b_795_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now(){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; uint8_t v___x_810_; lean_object* v___x_811_; 
v___x_808_ = ((lean_object*)(l_Lasm_Web_Raw_now___closed__1));
v___x_809_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_810_ = 1;
v___x_811_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v___x_808_, v___x_809_, v___x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now___boxed(lean_object* v_a_812_){
_start:
{
lean_object* v_res_813_; 
v_res_813_ = l_Lasm_Web_Raw_now();
return v_res_813_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0(lean_object* v_f_814_, lean_object* v_x_815_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = lean_apply_1(v_f_814_, lean_box(0));
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0___boxed(lean_object* v_f_818_, lean_object* v_x_819_, lean_object* v___y_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lasm_Web_setTimeout___lam__0(v_f_818_, v_x_819_);
lean_dec_ref(v_x_819_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout(lean_object* v_ms_822_, lean_object* v_f_823_){
_start:
{
lean_object* v___f_825_; lean_object* v___x_826_; 
v___f_825_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_825_, 0, v_f_823_);
v___x_826_ = l_Lasm_Web_callback(v___f_825_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_object* v_a_827_; double v___x_828_; lean_object* v___x_829_; 
v_a_827_ = lean_ctor_get(v___x_826_, 0);
lean_inc(v_a_827_);
lean_dec_ref_known(v___x_826_, 1);
v___x_828_ = lean_float_of_nat(v_ms_822_);
v___x_829_ = l_Lasm_Web_Raw_setTimeout(v_a_827_, v___x_828_);
return v___x_829_;
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_dec(v_ms_822_);
v_a_830_ = lean_ctor_get(v___x_826_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_826_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_826_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_826_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___boxed(lean_object* v_ms_838_, lean_object* v_f_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l_Lasm_Web_setTimeout(v_ms_838_, v_f_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout(double v_t_842_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lasm_Web_Raw_clearTimeout(v_t_842_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout___boxed(lean_object* v_t_845_, lean_object* v_a_846_){
_start:
{
double v_t_boxed_847_; lean_object* v_res_848_; 
v_t_boxed_847_ = lean_unbox_float(v_t_845_);
lean_dec_ref(v_t_845_);
v_res_848_ = l_Lasm_Web_clearTimeout(v_t_boxed_847_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval(lean_object* v_ms_849_, lean_object* v_f_850_){
_start:
{
lean_object* v___f_852_; lean_object* v___x_853_; 
v___f_852_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_852_, 0, v_f_850_);
v___x_853_ = l_Lasm_Web_callback(v___f_852_);
if (lean_obj_tag(v___x_853_) == 0)
{
lean_object* v_a_854_; double v___x_855_; lean_object* v___x_856_; 
v_a_854_ = lean_ctor_get(v___x_853_, 0);
lean_inc(v_a_854_);
lean_dec_ref_known(v___x_853_, 1);
v___x_855_ = lean_float_of_nat(v_ms_849_);
v___x_856_ = l_Lasm_Web_Raw_setInterval(v_a_854_, v___x_855_);
return v___x_856_;
}
else
{
lean_object* v_a_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_864_; 
lean_dec(v_ms_849_);
v_a_857_ = lean_ctor_get(v___x_853_, 0);
v_isSharedCheck_864_ = !lean_is_exclusive(v___x_853_);
if (v_isSharedCheck_864_ == 0)
{
v___x_859_ = v___x_853_;
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_a_857_);
lean_dec(v___x_853_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_864_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v_a_857_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval___boxed(lean_object* v_ms_865_, lean_object* v_f_866_, lean_object* v_a_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lasm_Web_setInterval(v_ms_865_, v_f_866_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval(double v_t_869_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lasm_Web_Raw_clearInterval(v_t_869_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval___boxed(lean_object* v_t_872_, lean_object* v_a_873_){
_start:
{
double v_t_boxed_874_; lean_object* v_res_875_; 
v_t_boxed_874_ = lean_unbox_float(v_t_872_);
lean_dec_ref(v_t_872_);
v_res_875_ = l_Lasm_Web_clearInterval(v_t_boxed_874_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(lean_object* v_context_876_, lean_object* v_args_877_){
_start:
{
lean_object* v___x_879_; lean_object* v___x_880_; uint8_t v___x_881_; 
v___x_879_ = lean_unsigned_to_nat(0u);
v___x_880_ = lean_array_get_size(v_args_877_);
v___x_881_ = lean_nat_dec_lt(v___x_879_, v___x_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_882_ = lean_box(0);
v___x_883_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_876_, v___x_882_);
return v___x_883_;
}
else
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = lean_array_fget_borrowed(v_args_877_, v___x_879_);
lean_inc(v___x_884_);
v___x_885_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_876_, v___x_884_);
return v___x_885_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0___boxed(lean_object* v_context_886_, lean_object* v_args_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v_context_886_, v_args_887_);
lean_dec_ref(v_args_887_);
lean_dec_ref(v_context_886_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0(lean_object* v_f_891_, lean_object* v_args_892_){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = ((lean_object*)(l_Lasm_Web_requestAnimationFrame___lam__0___closed__0));
v___x_895_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v___x_894_, v_args_892_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v___x_897_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
v___x_897_ = lean_apply_2(v_f_891_, v_a_896_, lean_box(0));
return v___x_897_;
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_dec_ref(v_f_891_);
v_a_898_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_895_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_895_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
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
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0___boxed(lean_object* v_f_906_, lean_object* v_args_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_Lasm_Web_requestAnimationFrame___lam__0(v_f_906_, v_args_907_);
lean_dec_ref(v_args_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame(lean_object* v_f_910_){
_start:
{
lean_object* v___f_912_; lean_object* v___x_913_; 
v___f_912_ = lean_alloc_closure((void*)(l_Lasm_Web_requestAnimationFrame___lam__0___boxed), 3, 1);
lean_closure_set(v___f_912_, 0, v_f_910_);
v___x_913_ = l_Lasm_Web_callback(v___f_912_);
if (lean_obj_tag(v___x_913_) == 0)
{
lean_object* v_a_914_; lean_object* v___x_915_; 
v_a_914_ = lean_ctor_get(v___x_913_, 0);
lean_inc(v_a_914_);
lean_dec_ref_known(v___x_913_, 1);
v___x_915_ = l_Lasm_Web_Raw_requestAnimationFrame(v_a_914_);
return v___x_915_;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
v_a_916_ = lean_ctor_get(v___x_913_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_913_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_913_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_913_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___boxed(lean_object* v_f_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lasm_Web_requestAnimationFrame(v_f_924_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame(double v_frame_927_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = l_Lasm_Web_Raw_cancelAnimationFrame(v_frame_927_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame___boxed(lean_object* v_frame_930_, lean_object* v_a_931_){
_start:
{
double v_frame_boxed_932_; lean_object* v_res_933_; 
v_frame_boxed_932_ = lean_unbox_float(v_frame_930_);
lean_dec_ref(v_frame_930_);
v_res_933_ = l_Lasm_Web_cancelAnimationFrame(v_frame_boxed_932_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask(lean_object* v_f_934_){
_start:
{
lean_object* v___f_936_; lean_object* v___x_937_; 
v___f_936_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_936_, 0, v_f_934_);
v___x_937_ = l_Lasm_Web_callback(v___f_936_);
if (lean_obj_tag(v___x_937_) == 0)
{
lean_object* v_a_938_; lean_object* v___x_939_; 
v_a_938_ = lean_ctor_get(v___x_937_, 0);
lean_inc(v_a_938_);
lean_dec_ref_known(v___x_937_, 1);
v___x_939_ = l_Lasm_Web_Raw_queueMicrotask(v_a_938_);
return v___x_939_;
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_947_; 
v_a_940_ = lean_ctor_get(v___x_937_, 0);
v_isSharedCheck_947_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_947_ == 0)
{
v___x_942_ = v___x_937_;
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_937_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_947_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_945_; 
if (v_isShared_943_ == 0)
{
v___x_945_ = v___x_942_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_a_940_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask___boxed(lean_object* v_f_948_, lean_object* v_a_949_){
_start:
{
lean_object* v_res_950_; 
v_res_950_ = l_Lasm_Web_queueMicrotask(v_f_948_);
return v_res_950_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame(){
_start:
{
lean_object* v___x_952_; 
v___x_952_ = l_Lasm_Web_Raw_nextFrame();
return v___x_952_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame___boxed(lean_object* v_a_953_){
_start:
{
lean_object* v_res_954_; 
v_res_954_ = l_Lasm_Web_nextFrame();
return v_res_954_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now(){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lasm_Web_Raw_now();
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now___boxed(lean_object* v_a_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lasm_Web_now();
return v_res_958_;
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
