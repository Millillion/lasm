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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_clearTimeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "clearTimeout"};
static const lean_object* l_Lasm_Web_Raw_clearTimeout___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_clearTimeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_setTimeout___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_clearTimeout___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_clearTimeout___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout(double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_162_ = lean_box(0);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___redArg___boxed(lean_object* v_a_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___redArg();
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(lean_object* v_b_166_, lean_object* v_args_167_, uint8_t v_await_168_){
_start:
{
uint64_t v___y_171_; uint64_t v___y_172_; uint64_t v___x_213_; uint64_t v___y_215_; 
v___x_213_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_168_ == 0)
{
uint64_t v___x_220_; 
v___x_220_ = 0ULL;
v___y_215_ = v___x_220_;
goto v___jp_214_;
}
else
{
uint64_t v___x_221_; 
v___x_221_ = 2ULL;
v___y_215_ = v___x_221_;
goto v___jp_214_;
}
v___jp_170_:
{
uint64_t v_flags_173_; uint32_t v___x_174_; lean_object* v___x_175_; uint32_t v___x_176_; lean_object* v___x_177_; 
v_flags_173_ = lean_uint64_lor(v___y_171_, v___y_172_);
v___x_174_ = 214;
v___x_175_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_166_, v_args_167_);
v___x_176_ = 0;
v___x_177_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_174_, v_flags_173_, v___x_175_, v___x_176_);
lean_dec(v___x_175_);
if (lean_obj_tag(v___x_177_) == 0)
{
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_179_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref_known(v___x_177_, 1);
v___x_179_ = l_Lasm_JS_Wire_decode(v_a_178_);
lean_dec(v_a_178_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v___x_180_; 
lean_dec_ref_known(v___x_179_, 1);
v___x_180_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___redArg();
return v___x_180_;
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
v_a_181_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_179_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_179_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
else
{
lean_object* v_a_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_196_; 
v_a_189_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_196_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_196_ == 0)
{
v___x_191_ = v___x_177_;
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_a_189_);
lean_dec(v___x_177_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_196_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
lean_ctor_set_tag(v___x_191_, 1);
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v_a_189_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
else
{
lean_object* v_a_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_212_; 
v_a_197_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_212_ == 0)
{
v___x_199_ = v___x_177_;
v_isShared_200_ = v_isSharedCheck_212_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_a_197_);
lean_dec(v___x_177_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_212_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_201_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_202_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_166_);
v___x_203_ = lean_string_append(v___x_201_, v___x_202_);
lean_dec_ref(v___x_202_);
v___x_204_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_205_ = lean_string_append(v___x_203_, v___x_204_);
v___x_206_ = lean_io_error_to_string(v_a_197_);
v___x_207_ = lean_string_append(v___x_205_, v___x_206_);
lean_dec_ref(v___x_206_);
v___x_208_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_208_, 0, v___x_207_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 0, v___x_208_);
v___x_210_ = v___x_199_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
v___jp_214_:
{
uint8_t v_construct_216_; uint64_t v___x_217_; 
v_construct_216_ = lean_ctor_get_uint8(v_b_166_, sizeof(void*)*4);
v___x_217_ = lean_uint64_lor(v___x_213_, v___y_215_);
if (v_construct_216_ == 0)
{
uint64_t v___x_218_; 
v___x_218_ = 0ULL;
v___y_171_ = v___x_217_;
v___y_172_ = v___x_218_;
goto v___jp_170_;
}
else
{
uint64_t v___x_219_; 
v___x_219_ = 4ULL;
v___y_171_ = v___x_217_;
v___y_172_ = v___x_219_;
goto v___jp_170_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0___boxed(lean_object* v_b_222_, lean_object* v_args_223_, lean_object* v_await_224_, lean_object* v_a_225_){
_start:
{
uint8_t v_await_boxed_226_; lean_object* v_res_227_; 
v_await_boxed_226_ = lean_unbox(v_await_224_);
v_res_227_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v_b_222_, v_args_223_, v_await_boxed_226_);
lean_dec_ref(v_b_222_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout(double v_a_234_){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; lean_object* v___x_241_; 
v___x_236_ = ((lean_object*)(l_Lasm_Web_Raw_clearTimeout___closed__1));
v___x_237_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_238_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_238_, 0, v_a_234_);
v___x_239_ = lean_array_push(v___x_237_, v___x_238_);
v___x_240_ = 1;
v___x_241_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_236_, v___x_239_, v___x_240_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearTimeout___boxed(lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
double v_a_430__boxed_244_; lean_object* v_res_245_; 
v_a_430__boxed_244_ = lean_unbox_float(v_a_242_);
lean_dec_ref(v_a_242_);
v_res_245_ = l_Lasm_Web_Raw_clearTimeout(v_a_430__boxed_244_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0(lean_object* v_context_246_, lean_object* v_d_247_){
_start:
{
lean_object* v___x_249_; 
v___x_249_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___redArg();
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0___boxed(lean_object* v_context_250_, lean_object* v_d_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0_spec__0(v_context_250_, v_d_251_);
lean_dec(v_d_251_);
lean_dec_ref(v_context_250_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval(lean_object* v_a_260_, double v_a_261_){
_start:
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; uint8_t v___x_270_; lean_object* v___x_271_; 
v___x_263_ = ((lean_object*)(l_Lasm_Web_Raw_setInterval___closed__1));
v___x_264_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_265_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_266_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_266_, 0, v_a_260_);
lean_ctor_set(v___x_266_, 1, v___x_265_);
v___x_267_ = lean_array_push(v___x_264_, v___x_266_);
v___x_268_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_268_, 0, v_a_261_);
v___x_269_ = lean_array_push(v___x_267_, v___x_268_);
v___x_270_ = 1;
v___x_271_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0(v___x_263_, v___x_269_, v___x_270_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_setInterval___boxed(lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
double v_a_131__boxed_275_; lean_object* v_res_276_; 
v_a_131__boxed_275_ = lean_unbox_float(v_a_273_);
lean_dec_ref(v_a_273_);
v_res_276_ = l_Lasm_Web_Raw_setInterval(v_a_272_, v_a_131__boxed_275_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval(double v_a_283_){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; uint8_t v___x_289_; lean_object* v___x_290_; 
v___x_285_ = ((lean_object*)(l_Lasm_Web_Raw_clearInterval___closed__1));
v___x_286_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_287_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_287_, 0, v_a_283_);
v___x_288_ = lean_array_push(v___x_286_, v___x_287_);
v___x_289_ = 1;
v___x_290_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_285_, v___x_288_, v___x_289_);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_clearInterval___boxed(lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
double v_a_86__boxed_293_; lean_object* v_res_294_; 
v_a_86__boxed_293_ = lean_unbox_float(v_a_291_);
lean_dec_ref(v_a_291_);
v_res_294_ = l_Lasm_Web_Raw_clearInterval(v_a_86__boxed_293_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(lean_object* v_context_296_, lean_object* v_d_297_){
_start:
{
lean_object* v___y_300_; lean_object* v___y_301_; 
if (lean_obj_tag(v_d_297_) == 3)
{
double v_n_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v_n_305_ = lean_ctor_get_float(v_d_297_, 0);
lean_dec_ref_known(v_d_297_, 0);
v___x_306_ = lean_box_float(v_n_305_);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v___x_306_);
return v___x_307_;
}
else
{
lean_object* v___x_308_; lean_object* v_received_310_; 
v___x_308_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_297_) == 9)
{
lean_object* v_value_324_; lean_object* v_description_325_; uint8_t v___x_326_; 
v_value_324_ = lean_ctor_get(v_d_297_, 0);
v_description_325_ = lean_ctor_get(v_d_297_, 1);
v___x_326_ = lean_string_dec_eq(v_description_325_, v___x_308_);
if (v___x_326_ == 0)
{
goto v___jp_322_;
}
else
{
uint32_t v___x_327_; uint64_t v___x_328_; lean_object* v___x_329_; uint32_t v___x_330_; lean_object* v___x_331_; 
lean_inc_n(v_value_324_, 2);
lean_dec_ref_known(v_d_297_, 2);
v___x_327_ = 206;
v___x_328_ = 0ULL;
v___x_329_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_329_, 0, v_value_324_);
lean_ctor_set(v___x_329_, 1, v___x_308_);
v___x_330_ = lasm_js_value_handle(v_value_324_);
lean_dec(v_value_324_);
v___x_331_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_327_, v___x_328_, v___x_329_, v___x_330_);
lean_dec_ref_known(v___x_329_, 2);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; uint8_t v___x_333_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref_known(v___x_331_, 1);
v___x_333_ = lean_string_validate_utf8(v_a_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec(v_a_332_);
v___x_334_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11);
v___x_335_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_334_);
v_received_310_ = v___x_335_;
goto v___jp_309_;
}
else
{
lean_object* v___x_336_; 
v___x_336_ = lean_string_from_utf8_unchecked(v_a_332_);
v_received_310_ = v___x_336_;
goto v___jp_309_;
}
}
else
{
lean_object* v___x_337_; 
lean_dec_ref_known(v___x_331_, 1);
v___x_337_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12));
v_received_310_ = v___x_337_;
goto v___jp_309_;
}
}
}
else
{
goto v___jp_322_;
}
v___jp_309_:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_311_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_312_ = lean_string_append(v___x_311_, v_context_296_);
v___x_313_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2));
v___x_314_ = lean_string_append(v___x_312_, v___x_313_);
v___x_315_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___closed__0));
v___x_316_ = lean_string_append(v___x_314_, v___x_315_);
v___x_317_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_318_ = lean_string_append(v___x_316_, v___x_317_);
v___x_319_ = lean_string_append(v___x_318_, v_received_310_);
lean_dec_ref(v_received_310_);
v___x_320_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; 
v___x_321_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7));
v___y_300_ = v___x_319_;
v___y_301_ = v___x_321_;
goto v___jp_299_;
}
else
{
v___y_300_ = v___x_319_;
v___y_301_ = v___x_308_;
goto v___jp_299_;
}
}
v___jp_322_:
{
lean_object* v___x_323_; 
v___x_323_ = l_Lasm_JS_Data_describe(v_d_297_);
v_received_310_ = v___x_323_;
goto v___jp_309_;
}
}
v___jp_299_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_string_append(v___y_300_, v___y_301_);
v___x_303_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
v___x_304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
return v___x_304_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0___boxed(lean_object* v_context_338_, lean_object* v_d_339_, lean_object* v_a_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(v_context_338_, v_d_339_);
lean_dec_ref(v_context_338_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(lean_object* v_b_342_, lean_object* v_args_343_, uint8_t v_await_344_){
_start:
{
uint64_t v___y_347_; uint64_t v___y_348_; uint64_t v___x_391_; uint64_t v___y_393_; 
v___x_391_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_344_ == 0)
{
uint64_t v___x_398_; 
v___x_398_ = 0ULL;
v___y_393_ = v___x_398_;
goto v___jp_392_;
}
else
{
uint64_t v___x_399_; 
v___x_399_ = 2ULL;
v___y_393_ = v___x_399_;
goto v___jp_392_;
}
v___jp_346_:
{
uint64_t v_flags_349_; uint32_t v___x_350_; lean_object* v___x_351_; uint32_t v___x_352_; lean_object* v___x_353_; 
v_flags_349_ = lean_uint64_lor(v___y_347_, v___y_348_);
v___x_350_ = 214;
v___x_351_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_342_, v_args_343_);
v___x_352_ = 0;
v___x_353_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_350_, v_flags_349_, v___x_351_, v___x_352_);
lean_dec(v___x_351_);
if (lean_obj_tag(v___x_353_) == 0)
{
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_355_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
lean_inc(v_a_354_);
lean_dec_ref_known(v___x_353_, 1);
v___x_355_ = l_Lasm_JS_Wire_decode(v_a_354_);
lean_dec(v_a_354_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; lean_object* v___x_357_; lean_object* v___x_358_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_355_, 1);
v___x_357_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_342_);
v___x_358_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0_spec__0(v___x_357_, v_a_356_);
lean_dec_ref(v___x_357_);
return v___x_358_;
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_366_; 
v_a_359_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_366_ == 0)
{
v___x_361_ = v___x_355_;
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_355_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_366_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_364_; 
if (v_isShared_362_ == 0)
{
v___x_364_ = v___x_361_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_a_359_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
}
}
else
{
lean_object* v_a_367_; lean_object* v___x_369_; uint8_t v_isShared_370_; uint8_t v_isSharedCheck_374_; 
v_a_367_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_374_ == 0)
{
v___x_369_ = v___x_353_;
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
else
{
lean_inc(v_a_367_);
lean_dec(v___x_353_);
v___x_369_ = lean_box(0);
v_isShared_370_ = v_isSharedCheck_374_;
goto v_resetjp_368_;
}
v_resetjp_368_:
{
lean_object* v___x_372_; 
if (v_isShared_370_ == 0)
{
lean_ctor_set_tag(v___x_369_, 1);
v___x_372_ = v___x_369_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_a_367_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_390_; 
v_a_375_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_390_ == 0)
{
v___x_377_ = v___x_353_;
v_isShared_378_ = v_isSharedCheck_390_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_353_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_390_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_379_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_380_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_342_);
v___x_381_ = lean_string_append(v___x_379_, v___x_380_);
lean_dec_ref(v___x_380_);
v___x_382_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_383_ = lean_string_append(v___x_381_, v___x_382_);
v___x_384_ = lean_io_error_to_string(v_a_375_);
v___x_385_ = lean_string_append(v___x_383_, v___x_384_);
lean_dec_ref(v___x_384_);
v___x_386_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_386_, 0, v___x_385_);
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 0, v___x_386_);
v___x_388_ = v___x_377_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
v___jp_392_:
{
uint8_t v_construct_394_; uint64_t v___x_395_; 
v_construct_394_ = lean_ctor_get_uint8(v_b_342_, sizeof(void*)*4);
v___x_395_ = lean_uint64_lor(v___x_391_, v___y_393_);
if (v_construct_394_ == 0)
{
uint64_t v___x_396_; 
v___x_396_ = 0ULL;
v___y_347_ = v___x_395_;
v___y_348_ = v___x_396_;
goto v___jp_346_;
}
else
{
uint64_t v___x_397_; 
v___x_397_ = 4ULL;
v___y_347_ = v___x_395_;
v___y_348_ = v___x_397_;
goto v___jp_346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0___boxed(lean_object* v_b_400_, lean_object* v_args_401_, lean_object* v_await_402_, lean_object* v_a_403_){
_start:
{
uint8_t v_await_boxed_404_; lean_object* v_res_405_; 
v_await_boxed_404_ = lean_unbox(v_await_402_);
v_res_405_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(v_b_400_, v_args_401_, v_await_boxed_404_);
lean_dec_ref(v_b_400_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame(lean_object* v_a_412_){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; uint8_t v___x_419_; lean_object* v___x_420_; 
v___x_414_ = ((lean_object*)(l_Lasm_Web_Raw_requestAnimationFrame___closed__1));
v___x_415_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_416_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_417_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_417_, 0, v_a_412_);
lean_ctor_set(v___x_417_, 1, v___x_416_);
v___x_418_ = lean_array_push(v___x_415_, v___x_417_);
v___x_419_ = 1;
v___x_420_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_requestAnimationFrame_spec__0(v___x_414_, v___x_418_, v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_requestAnimationFrame___boxed(lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lasm_Web_Raw_requestAnimationFrame(v_a_421_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame(double v_a_430_){
_start:
{
lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; uint8_t v___x_436_; lean_object* v___x_437_; 
v___x_432_ = ((lean_object*)(l_Lasm_Web_Raw_cancelAnimationFrame___closed__1));
v___x_433_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_434_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_434_, 0, v_a_430_);
v___x_435_ = lean_array_push(v___x_433_, v___x_434_);
v___x_436_ = 1;
v___x_437_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_432_, v___x_435_, v___x_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_cancelAnimationFrame___boxed(lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
double v_a_86__boxed_440_; lean_object* v_res_441_; 
v_a_86__boxed_440_ = lean_unbox_float(v_a_438_);
lean_dec_ref(v_a_438_);
v_res_441_ = l_Lasm_Web_Raw_cancelAnimationFrame(v_a_86__boxed_440_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask(lean_object* v_a_448_){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; uint8_t v___x_455_; lean_object* v___x_456_; 
v___x_450_ = ((lean_object*)(l_Lasm_Web_Raw_queueMicrotask___closed__1));
v___x_451_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_452_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
v___x_453_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_453_, 0, v_a_448_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = lean_array_push(v___x_451_, v___x_453_);
v___x_455_ = 1;
v___x_456_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_clearTimeout_spec__0(v___x_450_, v___x_454_, v___x_455_);
return v___x_456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_queueMicrotask___boxed(lean_object* v_a_457_, lean_object* v_a_458_){
_start:
{
lean_object* v_res_459_; 
v_res_459_ = l_Lasm_Web_Raw_queueMicrotask(v_a_457_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(lean_object* v___f_460_, lean_object* v_x_461_){
_start:
{
if (lean_obj_tag(v_x_461_) == 0)
{
lean_object* v_a_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_471_; 
lean_dec_ref(v___f_460_);
v_a_463_ = lean_ctor_get(v_x_461_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v_x_461_);
if (v_isSharedCheck_471_ == 0)
{
v___x_465_ = v_x_461_;
v_isShared_466_ = v_isSharedCheck_471_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_a_463_);
lean_dec(v_x_461_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_471_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v___x_468_; 
if (v_isShared_466_ == 0)
{
v___x_468_ = v___x_465_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_463_);
v___x_468_ = v_reuseFailAlloc_470_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_469_; 
v___x_469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_469_, 0, v___x_468_);
return v___x_469_;
}
}
}
else
{
lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_483_; 
v_isSharedCheck_483_ = !lean_is_exclusive(v_x_461_);
if (v_isSharedCheck_483_ == 0)
{
lean_object* v_unused_484_; 
v_unused_484_ = lean_ctor_get(v_x_461_, 0);
lean_dec(v_unused_484_);
v___x_473_ = v_x_461_;
v_isShared_474_ = v_isSharedCheck_483_;
goto v_resetjp_472_;
}
else
{
lean_dec(v_x_461_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_483_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_475_ = lean_unsigned_to_nat(0u);
v___x_476_ = 0;
v___x_477_ = lean_io_promise_new();
if (v_isShared_474_ == 0)
{
lean_ctor_set(v___x_473_, 0, v___x_477_);
v___x_479_ = v___x_473_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_482_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
v___x_481_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_475_, v___x_476_, v___x_480_, v___f_460_);
return v___x_481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed(lean_object* v___f_485_, lean_object* v_x_486_, lean_object* v___y_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4(v___f_485_, v_x_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(lean_object* v_a_489_, lean_object* v_x_490_){
_start:
{
if (lean_obj_tag(v_x_490_) == 0)
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_500_; 
v_a_492_ = lean_ctor_get(v_x_490_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v_x_490_);
if (v_isSharedCheck_500_ == 0)
{
v___x_494_ = v_x_490_;
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v_x_490_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_500_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_499_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
lean_object* v___x_498_; 
v___x_498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_498_, 0, v___x_497_);
return v___x_498_;
}
}
}
else
{
lean_object* v___x_501_; 
lean_dec_ref_known(v_x_490_, 1);
v___x_501_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_489_);
return v___x_501_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed(lean_object* v_a_502_, lean_object* v_x_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5(v_a_502_, v_x_503_);
lean_dec(v_a_502_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(lean_object* v_payload_506_, lean_object* v_failurePrefix_507_, lean_object* v___f_508_, lean_object* v___f_509_, uint32_t v_op_510_, uint64_t v_flags_511_, lean_object* v___f_512_, lean_object* v_x_513_){
_start:
{
if (lean_obj_tag(v_x_513_) == 0)
{
lean_object* v_a_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v___f_512_);
lean_dec_ref(v___f_509_);
lean_dec_ref(v___f_508_);
v_a_515_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_523_ == 0)
{
v___x_517_ = v_x_513_;
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_a_515_);
lean_dec(v_x_513_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_523_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
lean_object* v___x_520_; 
if (v_isShared_518_ == 0)
{
v___x_520_ = v___x_517_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_515_);
v___x_520_ = v_reuseFailAlloc_522_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
lean_object* v___x_521_; 
v___x_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
return v___x_521_;
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_565_; 
v_a_524_ = lean_ctor_get(v_x_513_, 0);
v_isSharedCheck_565_ = !lean_is_exclusive(v_x_513_);
if (v_isSharedCheck_565_ == 0)
{
v___x_526_ = v_x_513_;
v_isShared_527_ = v_isSharedCheck_565_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v_x_513_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_565_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
uint32_t v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; uint8_t v___x_532_; 
v___x_528_ = 0;
v___x_529_ = l_Lasm_JS_Wire_encode(v_payload_506_);
v___x_530_ = lean_string_utf8_byte_size(v_failurePrefix_507_);
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = lean_nat_dec_eq(v___x_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_object* v___f_533_; lean_object* v_val_535_; lean_object* v___x_540_; 
lean_dec_ref(v___f_512_);
lean_inc(v_a_524_);
v___f_533_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_533_, 0, v_a_524_);
v___x_540_ = lasm_js_call_into(v_a_524_, v_op_510_, v___x_528_, v_flags_511_, v___x_529_, v_payload_506_);
lean_dec_ref(v___x_529_);
lean_dec(v_a_524_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v___x_540_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v_a_541_);
v___x_543_ = v___x_526_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_a_541_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
v_val_535_ = v___x_543_;
goto v___jp_534_;
}
}
else
{
lean_object* v_a_545_; lean_object* v___x_547_; 
v_a_545_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_545_);
lean_dec_ref_known(v___x_540_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 0);
lean_ctor_set(v___x_526_, 0, v_a_545_);
v___x_547_ = v___x_526_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_545_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
v_val_535_ = v___x_547_;
goto v___jp_534_;
}
}
v___jp_534_:
{
lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v_val_535_);
v___x_537_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_531_, v___x_532_, v___x_536_, v___f_533_);
v___x_538_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_531_, v___x_532_, v___x_537_, v___f_508_);
v___x_539_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_531_, v___x_532_, v___x_538_, v___f_509_);
return v___x_539_;
}
}
else
{
lean_object* v___f_549_; uint8_t v___x_550_; lean_object* v_val_552_; lean_object* v___x_556_; 
lean_dec_ref(v___f_509_);
lean_dec_ref(v___f_508_);
lean_inc(v_a_524_);
v___f_549_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__5___boxed), 3, 1);
lean_closure_set(v___f_549_, 0, v_a_524_);
v___x_550_ = 0;
v___x_556_ = lasm_js_call_into(v_a_524_, v_op_510_, v___x_528_, v_flags_511_, v___x_529_, v_payload_506_);
lean_dec_ref(v___x_529_);
lean_dec(v_a_524_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_559_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_557_);
lean_dec_ref_known(v___x_556_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 0, v_a_557_);
v___x_559_ = v___x_526_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_560_; 
v_reuseFailAlloc_560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_560_, 0, v_a_557_);
v___x_559_ = v_reuseFailAlloc_560_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
v_val_552_ = v___x_559_;
goto v___jp_551_;
}
}
else
{
lean_object* v_a_561_; lean_object* v___x_563_; 
v_a_561_ = lean_ctor_get(v___x_556_, 0);
lean_inc(v_a_561_);
lean_dec_ref_known(v___x_556_, 1);
if (v_isShared_527_ == 0)
{
lean_ctor_set_tag(v___x_526_, 0);
lean_ctor_set(v___x_526_, 0, v_a_561_);
v___x_563_ = v___x_526_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_a_561_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
v_val_552_ = v___x_563_;
goto v___jp_551_;
}
}
v___jp_551_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_553_, 0, v_val_552_);
v___x_554_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_531_, v___x_550_, v___x_553_, v___f_549_);
v___x_555_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_531_, v___x_550_, v___x_554_, v___f_512_);
return v___x_555_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_566_, lean_object* v_failurePrefix_567_, lean_object* v___f_568_, lean_object* v___f_569_, lean_object* v_op_570_, lean_object* v_flags_571_, lean_object* v___f_572_, lean_object* v_x_573_, lean_object* v___y_574_){
_start:
{
uint32_t v_op_boxed_575_; uint64_t v_flags_boxed_576_; lean_object* v_res_577_; 
v_op_boxed_575_ = lean_unbox_uint32(v_op_570_);
lean_dec(v_op_570_);
v_flags_boxed_576_ = lean_unbox_uint64(v_flags_571_);
lean_dec_ref(v_flags_571_);
v_res_577_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6(v_payload_566_, v_failurePrefix_567_, v___f_568_, v___f_569_, v_op_boxed_575_, v_flags_boxed_576_, v___f_572_, v_x_573_);
lean_dec_ref(v_failurePrefix_567_);
lean_dec(v_payload_566_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(lean_object* v_context_579_, lean_object* v_d_580_){
_start:
{
lean_object* v___y_583_; lean_object* v___y_584_; 
if (lean_obj_tag(v_d_580_) == 3)
{
double v_n_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_n_588_ = lean_ctor_get_float(v_d_580_, 0);
lean_dec_ref_known(v_d_580_, 0);
v___x_589_ = lean_box_float(v_n_588_);
v___x_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_590_, 0, v___x_589_);
return v___x_590_;
}
else
{
lean_object* v___x_591_; lean_object* v_received_593_; 
v___x_591_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__0));
if (lean_obj_tag(v_d_580_) == 9)
{
lean_object* v_value_607_; lean_object* v_description_608_; uint8_t v___x_609_; 
v_value_607_ = lean_ctor_get(v_d_580_, 0);
v_description_608_ = lean_ctor_get(v_d_580_, 1);
v___x_609_ = lean_string_dec_eq(v_description_608_, v___x_591_);
if (v___x_609_ == 0)
{
goto v___jp_605_;
}
else
{
uint32_t v___x_610_; uint64_t v___x_611_; lean_object* v___x_612_; uint32_t v___x_613_; lean_object* v___x_614_; 
lean_inc_n(v_value_607_, 2);
lean_dec_ref_known(v_d_580_, 2);
v___x_610_ = 206;
v___x_611_ = 0ULL;
v___x_612_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_612_, 0, v_value_607_);
lean_ctor_set(v___x_612_, 1, v___x_591_);
v___x_613_ = lasm_js_value_handle(v_value_607_);
lean_dec(v_value_607_);
v___x_614_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_610_, v___x_611_, v___x_612_, v___x_613_);
lean_dec_ref_known(v___x_612_, 2);
if (lean_obj_tag(v___x_614_) == 0)
{
lean_object* v_a_615_; uint8_t v___x_616_; 
v_a_615_ = lean_ctor_get(v___x_614_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___x_614_, 1);
v___x_616_ = lean_string_validate_utf8(v_a_615_);
if (v___x_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; 
lean_dec(v_a_615_);
v___x_617_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__11);
v___x_618_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_617_);
v_received_593_ = v___x_618_;
goto v___jp_592_;
}
else
{
lean_object* v___x_619_; 
v___x_619_ = lean_string_from_utf8_unchecked(v_a_615_);
v_received_593_ = v___x_619_;
goto v___jp_592_;
}
}
else
{
lean_object* v___x_620_; 
lean_dec_ref_known(v___x_614_, 1);
v___x_620_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__12));
v_received_593_ = v___x_620_;
goto v___jp_592_;
}
}
}
else
{
goto v___jp_605_;
}
v___jp_592_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_594_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_595_ = lean_string_append(v___x_594_, v_context_579_);
v___x_596_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__2));
v___x_597_ = lean_string_append(v___x_595_, v___x_596_);
v___x_598_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___closed__0));
v___x_599_ = lean_string_append(v___x_597_, v___x_598_);
v___x_600_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__4));
v___x_601_ = lean_string_append(v___x_599_, v___x_600_);
v___x_602_ = lean_string_append(v___x_601_, v_received_593_);
lean_dec_ref(v_received_593_);
v___x_603_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__6);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; 
v___x_604_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__7));
v___y_583_ = v___x_602_;
v___y_584_ = v___x_604_;
goto v___jp_582_;
}
else
{
v___y_583_ = v___x_602_;
v___y_584_ = v___x_591_;
goto v___jp_582_;
}
}
v___jp_605_:
{
lean_object* v___x_606_; 
v___x_606_ = l_Lasm_JS_Data_describe(v_d_580_);
v_received_593_ = v___x_606_;
goto v___jp_592_;
}
}
v___jp_582_:
{
lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; 
v___x_585_ = lean_string_append(v___y_583_, v___y_584_);
v___x_586_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_586_, 0, v___x_585_);
v___x_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
return v___x_587_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1___boxed(lean_object* v_context_621_, lean_object* v_d_622_, lean_object* v_a_623_){
_start:
{
lean_object* v_res_624_; 
v_res_624_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_621_, v_d_622_);
lean_dec_ref(v_context_621_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(lean_object* v_context_625_, lean_object* v_x_626_){
_start:
{
lean_object* v_val_629_; 
if (lean_obj_tag(v_x_626_) == 0)
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_639_; 
v_a_631_ = lean_ctor_get(v_x_626_, 0);
v_isSharedCheck_639_ = !lean_is_exclusive(v_x_626_);
if (v_isSharedCheck_639_ == 0)
{
v___x_633_ = v_x_626_;
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v_x_626_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_639_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_638_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_637_; 
v___x_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_637_, 0, v___x_636_);
return v___x_637_;
}
}
}
else
{
lean_object* v_a_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_653_; 
v_a_640_ = lean_ctor_get(v_x_626_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v_x_626_);
if (v_isSharedCheck_653_ == 0)
{
v___x_642_ = v_x_626_;
v_isShared_643_ = v_isSharedCheck_653_;
goto v_resetjp_641_;
}
else
{
lean_inc(v_a_640_);
lean_dec(v_x_626_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_653_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_625_, v_a_640_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref_known(v___x_644_, 1);
if (v_isShared_643_ == 0)
{
lean_ctor_set(v___x_642_, 0, v_a_645_);
v___x_647_ = v___x_642_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
v_val_629_ = v___x_647_;
goto v___jp_628_;
}
}
else
{
lean_object* v_a_649_; lean_object* v___x_651_; 
v_a_649_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_649_);
lean_dec_ref_known(v___x_644_, 1);
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 0);
lean_ctor_set(v___x_642_, 0, v_a_649_);
v___x_651_ = v___x_642_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_a_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
v_val_629_ = v___x_651_;
goto v___jp_628_;
}
}
}
}
v___jp_628_:
{
lean_object* v___x_630_; 
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v_val_629_);
return v___x_630_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed(lean_object* v_context_654_, lean_object* v_x_655_, lean_object* v___y_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1(v_context_654_, v_x_655_);
lean_dec_ref(v_context_654_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(lean_object* v_failurePrefix_658_, lean_object* v_x_659_){
_start:
{
if (lean_obj_tag(v_x_659_) == 0)
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_672_; 
v_a_661_ = lean_ctor_get(v_x_659_, 0);
v_isSharedCheck_672_ = !lean_is_exclusive(v_x_659_);
if (v_isSharedCheck_672_ == 0)
{
v___x_663_ = v_x_659_;
v_isShared_664_ = v_isSharedCheck_672_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v_x_659_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_672_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_669_; 
v___x_665_ = lean_io_error_to_string(v_a_661_);
v___x_666_ = lean_string_append(v_failurePrefix_658_, v___x_665_);
lean_dec_ref(v___x_665_);
v___x_667_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_667_, 0, v___x_666_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 0, v___x_667_);
v___x_669_ = v___x_663_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_667_);
v___x_669_ = v_reuseFailAlloc_671_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
lean_object* v___x_670_; 
v___x_670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_670_, 0, v___x_669_);
return v___x_670_;
}
}
}
else
{
lean_object* v___x_673_; 
lean_dec_ref(v_failurePrefix_658_);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v_x_659_);
return v___x_673_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed(lean_object* v_failurePrefix_674_, lean_object* v_x_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_res_677_; 
v_res_677_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0(v_failurePrefix_674_, v_x_675_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(lean_object* v___f_678_, lean_object* v_bytes_679_){
_start:
{
lean_object* v___x_681_; uint8_t v___x_682_; lean_object* v_val_684_; lean_object* v___x_687_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = 0;
v___x_687_ = l_Lasm_JS_Wire_decode(v_bytes_679_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_687_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_687_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 1);
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
v_val_684_ = v___x_693_;
goto v___jp_683_;
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
v_a_696_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_687_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_687_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
lean_ctor_set_tag(v___x_698_, 0);
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
v_val_684_ = v___x_701_;
goto v___jp_683_;
}
}
}
v___jp_683_:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v_val_684_);
v___x_686_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_681_, v___x_682_, v___x_685_, v___f_678_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed(lean_object* v___f_704_, lean_object* v_bytes_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2(v___f_704_, v_bytes_705_);
lean_dec_ref(v_bytes_705_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(lean_object* v___f_708_, lean_object* v_x_709_){
_start:
{
if (lean_obj_tag(v_x_709_) == 0)
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_719_; 
lean_dec_ref(v___f_708_);
v_a_711_ = lean_ctor_get(v_x_709_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v_x_709_);
if (v_isSharedCheck_719_ == 0)
{
v___x_713_ = v_x_709_;
v_isShared_714_ = v_isSharedCheck_719_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v_x_709_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_719_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_711_);
v___x_716_ = v_reuseFailAlloc_718_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
}
}
else
{
lean_object* v_a_720_; lean_object* v___x_721_; 
v_a_720_ = lean_ctor_get(v_x_709_, 0);
lean_inc(v_a_720_);
lean_dec_ref_known(v_x_709_, 1);
v___x_721_ = lean_apply_2(v___f_708_, v_a_720_, lean_box(0));
return v___x_721_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed(lean_object* v___f_722_, lean_object* v_x_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3(v___f_722_, v_x_723_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(lean_object* v_context_726_, uint32_t v_op_727_, uint64_t v_flags_728_, lean_object* v_payload_729_, lean_object* v_failurePrefix_730_){
_start:
{
lean_object* v___f_732_; lean_object* v___f_733_; lean_object* v___f_734_; lean_object* v___f_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___f_738_; lean_object* v___f_739_; lean_object* v___x_740_; uint8_t v___x_741_; lean_object* v_val_743_; lean_object* v___x_746_; 
lean_inc_ref(v_failurePrefix_730_);
v___f_732_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_732_, 0, v_failurePrefix_730_);
v___f_733_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_733_, 0, v_context_726_);
v___f_734_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_734_, 0, v___f_733_);
v___f_735_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_735_, 0, v___f_734_);
v___x_736_ = lean_box_uint32(v_op_727_);
v___x_737_ = lean_box_uint64(v_flags_728_);
lean_inc_ref(v___f_735_);
v___f_738_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_738_, 0, v_payload_729_);
lean_closure_set(v___f_738_, 1, v_failurePrefix_730_);
lean_closure_set(v___f_738_, 2, v___f_732_);
lean_closure_set(v___f_738_, 3, v___f_735_);
lean_closure_set(v___f_738_, 4, v___x_736_);
lean_closure_set(v___f_738_, 5, v___x_737_);
lean_closure_set(v___f_738_, 6, v___f_735_);
v___f_739_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___lam__4___boxed), 3, 1);
lean_closure_set(v___f_739_, 0, v___f_738_);
v___x_740_ = lean_unsigned_to_nat(0u);
v___x_741_ = 0;
v___x_746_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_754_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_754_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_754_ == 0)
{
v___x_749_ = v___x_746_;
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_a_747_);
lean_dec(v___x_746_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_754_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_752_; 
if (v_isShared_750_ == 0)
{
lean_ctor_set_tag(v___x_749_, 1);
v___x_752_ = v___x_749_;
goto v_reusejp_751_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_a_747_);
v___x_752_ = v_reuseFailAlloc_753_;
goto v_reusejp_751_;
}
v_reusejp_751_:
{
v_val_743_ = v___x_752_;
goto v___jp_742_;
}
}
}
else
{
lean_object* v_a_755_; lean_object* v___x_757_; uint8_t v_isShared_758_; uint8_t v_isSharedCheck_762_; 
v_a_755_ = lean_ctor_get(v___x_746_, 0);
v_isSharedCheck_762_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_762_ == 0)
{
v___x_757_ = v___x_746_;
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
else
{
lean_inc(v_a_755_);
lean_dec(v___x_746_);
v___x_757_ = lean_box(0);
v_isShared_758_ = v_isSharedCheck_762_;
goto v_resetjp_756_;
}
v_resetjp_756_:
{
lean_object* v___x_760_; 
if (v_isShared_758_ == 0)
{
lean_ctor_set_tag(v___x_757_, 0);
v___x_760_ = v___x_757_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_761_; 
v_reuseFailAlloc_761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_761_, 0, v_a_755_);
v___x_760_ = v_reuseFailAlloc_761_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
v_val_743_ = v___x_760_;
goto v___jp_742_;
}
}
}
v___jp_742_:
{
lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v_val_743_);
v___x_745_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_740_, v___x_741_, v___x_744_, v___f_739_);
return v___x_745_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0___boxed(lean_object* v_context_763_, lean_object* v_op_764_, lean_object* v_flags_765_, lean_object* v_payload_766_, lean_object* v_failurePrefix_767_, lean_object* v_a_768_){
_start:
{
uint32_t v_op_boxed_769_; uint64_t v_flags_boxed_770_; lean_object* v_res_771_; 
v_op_boxed_769_ = lean_unbox_uint32(v_op_764_);
lean_dec(v_op_764_);
v_flags_boxed_770_ = lean_unbox_uint64(v_flags_765_);
lean_dec_ref(v_flags_765_);
v_res_771_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v_context_763_, v_op_boxed_769_, v_flags_boxed_770_, v_payload_766_, v_failurePrefix_767_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(lean_object* v_b_772_, lean_object* v_args_773_){
_start:
{
uint8_t v_construct_775_; lean_object* v___x_776_; uint32_t v___x_777_; uint64_t v___x_778_; uint64_t v___y_780_; 
v_construct_775_ = lean_ctor_get_uint8(v_b_772_, sizeof(void*)*4);
v___x_776_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_772_);
v___x_777_ = 214;
v___x_778_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_construct_775_ == 0)
{
uint64_t v___x_788_; 
v___x_788_ = 0ULL;
v___y_780_ = v___x_788_;
goto v___jp_779_;
}
else
{
uint64_t v___x_789_; 
v___x_789_ = 4ULL;
v___y_780_ = v___x_789_;
goto v___jp_779_;
}
v___jp_779_:
{
uint64_t v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_781_ = lean_uint64_lor(v___x_778_, v___y_780_);
v___x_782_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_772_, v_args_773_);
v___x_783_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_784_ = lean_string_append(v___x_783_, v___x_776_);
v___x_785_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_786_ = lean_string_append(v___x_784_, v___x_785_);
v___x_787_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0(v___x_776_, v___x_777_, v___x_781_, v___x_782_, v___x_786_);
return v___x_787_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0___boxed(lean_object* v_b_790_, lean_object* v_args_791_, lean_object* v_a_792_){
_start:
{
lean_object* v_res_793_; 
v_res_793_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v_b_790_, v_args_791_);
lean_dec_ref(v_b_790_);
return v_res_793_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame(){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_801_ = ((lean_object*)(l_Lasm_Web_Raw_nextFrame___closed__1));
v___x_802_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_803_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0(v___x_801_, v___x_802_);
return v___x_803_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_nextFrame___boxed(lean_object* v_a_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lasm_Web_Raw_nextFrame();
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(lean_object* v_b_806_, lean_object* v_args_807_, uint8_t v_await_808_){
_start:
{
uint64_t v___y_811_; uint64_t v___y_812_; uint64_t v___x_855_; uint64_t v___y_857_; 
v___x_855_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__1);
if (v_await_808_ == 0)
{
uint64_t v___x_862_; 
v___x_862_ = 0ULL;
v___y_857_ = v___x_862_;
goto v___jp_856_;
}
else
{
uint64_t v___x_863_; 
v___x_863_ = 2ULL;
v___y_857_ = v___x_863_;
goto v___jp_856_;
}
v___jp_810_:
{
uint64_t v_flags_813_; uint32_t v___x_814_; lean_object* v___x_815_; uint32_t v___x_816_; lean_object* v___x_817_; 
v_flags_813_ = lean_uint64_lor(v___y_811_, v___y_812_);
v___x_814_ = 214;
v___x_815_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_806_, v_args_807_);
v___x_816_ = 0;
v___x_817_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_814_, v_flags_813_, v___x_815_, v___x_816_);
lean_dec(v___x_815_);
if (lean_obj_tag(v___x_817_) == 0)
{
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_819_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref_known(v___x_817_, 1);
v___x_819_ = l_Lasm_JS_Wire_decode(v_a_818_);
lean_dec(v_a_818_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_a_820_);
lean_dec_ref_known(v___x_819_, 1);
v___x_821_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_806_);
v___x_822_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v___x_821_, v_a_820_);
lean_dec_ref(v___x_821_);
return v___x_822_;
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
v_a_823_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_819_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_819_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
v_a_831_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_817_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_817_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
lean_ctor_set_tag(v___x_833_, 1);
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_854_; 
v_a_839_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_854_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_854_ == 0)
{
v___x_841_ = v___x_817_;
v_isShared_842_ = v_isSharedCheck_854_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_817_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_854_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_843_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0_spec__0___closed__1));
v___x_844_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_806_);
v___x_845_ = lean_string_append(v___x_843_, v___x_844_);
lean_dec_ref(v___x_844_);
v___x_846_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_setTimeout_spec__0___closed__0));
v___x_847_ = lean_string_append(v___x_845_, v___x_846_);
v___x_848_ = lean_io_error_to_string(v_a_839_);
v___x_849_ = lean_string_append(v___x_847_, v___x_848_);
lean_dec_ref(v___x_848_);
v___x_850_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
if (v_isShared_842_ == 0)
{
lean_ctor_set(v___x_841_, 0, v___x_850_);
v___x_852_ = v___x_841_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_850_);
v___x_852_ = v_reuseFailAlloc_853_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
return v___x_852_;
}
}
}
}
v___jp_856_:
{
uint8_t v_construct_858_; uint64_t v___x_859_; 
v_construct_858_ = lean_ctor_get_uint8(v_b_806_, sizeof(void*)*4);
v___x_859_ = lean_uint64_lor(v___x_855_, v___y_857_);
if (v_construct_858_ == 0)
{
uint64_t v___x_860_; 
v___x_860_ = 0ULL;
v___y_811_ = v___x_859_;
v___y_812_ = v___x_860_;
goto v___jp_810_;
}
else
{
uint64_t v___x_861_; 
v___x_861_ = 4ULL;
v___y_811_ = v___x_859_;
v___y_812_ = v___x_861_;
goto v___jp_810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0___boxed(lean_object* v_b_864_, lean_object* v_args_865_, lean_object* v_await_866_, lean_object* v_a_867_){
_start:
{
uint8_t v_await_boxed_868_; lean_object* v_res_869_; 
v_await_boxed_868_ = lean_unbox(v_await_866_);
v_res_869_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v_b_864_, v_args_865_, v_await_boxed_868_);
lean_dec_ref(v_b_864_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now(){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; uint8_t v___x_879_; lean_object* v___x_880_; 
v___x_877_ = ((lean_object*)(l_Lasm_Web_Raw_now___closed__1));
v___x_878_ = ((lean_object*)(l_Lasm_Web_Raw_setTimeout___closed__3));
v___x_879_ = 1;
v___x_880_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_now_spec__0(v___x_877_, v___x_878_, v___x_879_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_now___boxed(lean_object* v_a_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lasm_Web_Raw_now();
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0(lean_object* v_f_883_, lean_object* v_x_884_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = lean_apply_1(v_f_883_, lean_box(0));
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___lam__0___boxed(lean_object* v_f_887_, lean_object* v_x_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lasm_Web_setTimeout___lam__0(v_f_887_, v_x_888_);
lean_dec_ref(v_x_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout(lean_object* v_ms_891_, lean_object* v_f_892_){
_start:
{
lean_object* v___f_894_; lean_object* v___x_895_; 
v___f_894_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_894_, 0, v_f_892_);
v___x_895_ = l_Lasm_Web_callback(v___f_894_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; double v___x_897_; lean_object* v___x_898_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
lean_inc(v_a_896_);
lean_dec_ref_known(v___x_895_, 1);
v___x_897_ = lean_float_of_nat(v_ms_891_);
v___x_898_ = l_Lasm_Web_Raw_setTimeout(v_a_896_, v___x_897_);
return v___x_898_;
}
else
{
lean_object* v_a_899_; lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_dec(v_ms_891_);
v_a_899_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_906_ == 0)
{
v___x_901_ = v___x_895_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_inc(v_a_899_);
lean_dec(v___x_895_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_899_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
return v___x_904_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setTimeout___boxed(lean_object* v_ms_907_, lean_object* v_f_908_, lean_object* v_a_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_Lasm_Web_setTimeout(v_ms_907_, v_f_908_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout(double v_t_911_){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = l_Lasm_Web_Raw_clearTimeout(v_t_911_);
return v___x_913_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearTimeout___boxed(lean_object* v_t_914_, lean_object* v_a_915_){
_start:
{
double v_t_boxed_916_; lean_object* v_res_917_; 
v_t_boxed_916_ = lean_unbox_float(v_t_914_);
lean_dec_ref(v_t_914_);
v_res_917_ = l_Lasm_Web_clearTimeout(v_t_boxed_916_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval(lean_object* v_ms_918_, lean_object* v_f_919_){
_start:
{
lean_object* v___f_921_; lean_object* v___x_922_; 
v___f_921_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_921_, 0, v_f_919_);
v___x_922_ = l_Lasm_Web_callback(v___f_921_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; double v___x_924_; lean_object* v___x_925_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
v___x_924_ = lean_float_of_nat(v_ms_918_);
v___x_925_ = l_Lasm_Web_Raw_setInterval(v_a_923_, v___x_924_);
return v___x_925_;
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
lean_dec(v_ms_918_);
v_a_926_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_922_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_922_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_setInterval___boxed(lean_object* v_ms_934_, lean_object* v_f_935_, lean_object* v_a_936_){
_start:
{
lean_object* v_res_937_; 
v_res_937_ = l_Lasm_Web_setInterval(v_ms_934_, v_f_935_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval(double v_t_938_){
_start:
{
lean_object* v___x_940_; 
v___x_940_ = l_Lasm_Web_Raw_clearInterval(v_t_938_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_clearInterval___boxed(lean_object* v_t_941_, lean_object* v_a_942_){
_start:
{
double v_t_boxed_943_; lean_object* v_res_944_; 
v_t_boxed_943_ = lean_unbox_float(v_t_941_);
lean_dec_ref(v_t_941_);
v_res_944_ = l_Lasm_Web_clearInterval(v_t_boxed_943_);
return v_res_944_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(lean_object* v_context_945_, lean_object* v_args_946_){
_start:
{
lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_948_ = lean_unsigned_to_nat(0u);
v___x_949_ = lean_array_get_size(v_args_946_);
v___x_950_ = lean_nat_dec_lt(v___x_948_, v___x_949_);
if (v___x_950_ == 0)
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_box(0);
v___x_952_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_945_, v___x_951_);
return v___x_952_;
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_953_ = lean_array_fget_borrowed(v_args_946_, v___x_948_);
lean_inc(v___x_953_);
v___x_954_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_nextFrame_spec__0_spec__0_spec__1(v_context_945_, v___x_953_);
return v___x_954_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0___boxed(lean_object* v_context_955_, lean_object* v_args_956_, lean_object* v_a_957_){
_start:
{
lean_object* v_res_958_; 
v_res_958_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v_context_955_, v_args_956_);
lean_dec_ref(v_args_956_);
lean_dec_ref(v_context_955_);
return v_res_958_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0(lean_object* v_f_960_, lean_object* v_args_961_){
_start:
{
lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_963_ = ((lean_object*)(l_Lasm_Web_requestAnimationFrame___lam__0___closed__0));
v___x_964_ = l_Lasm_Web_argument___at___00Lasm_Web_requestAnimationFrame_spec__0(v___x_963_, v_args_961_);
if (lean_obj_tag(v___x_964_) == 0)
{
lean_object* v_a_965_; lean_object* v___x_966_; 
v_a_965_ = lean_ctor_get(v___x_964_, 0);
lean_inc(v_a_965_);
lean_dec_ref_known(v___x_964_, 1);
v___x_966_ = lean_apply_2(v_f_960_, v_a_965_, lean_box(0));
return v___x_966_;
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
lean_dec_ref(v_f_960_);
v_a_967_ = lean_ctor_get(v___x_964_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_964_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_964_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_964_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___lam__0___boxed(lean_object* v_f_975_, lean_object* v_args_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lasm_Web_requestAnimationFrame___lam__0(v_f_975_, v_args_976_);
lean_dec_ref(v_args_976_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame(lean_object* v_f_979_){
_start:
{
lean_object* v___f_981_; lean_object* v___x_982_; 
v___f_981_ = lean_alloc_closure((void*)(l_Lasm_Web_requestAnimationFrame___lam__0___boxed), 3, 1);
lean_closure_set(v___f_981_, 0, v_f_979_);
v___x_982_ = l_Lasm_Web_callback(v___f_981_);
if (lean_obj_tag(v___x_982_) == 0)
{
lean_object* v_a_983_; lean_object* v___x_984_; 
v_a_983_ = lean_ctor_get(v___x_982_, 0);
lean_inc(v_a_983_);
lean_dec_ref_known(v___x_982_, 1);
v___x_984_ = l_Lasm_Web_Raw_requestAnimationFrame(v_a_983_);
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
LEAN_EXPORT lean_object* l_Lasm_Web_requestAnimationFrame___boxed(lean_object* v_f_993_, lean_object* v_a_994_){
_start:
{
lean_object* v_res_995_; 
v_res_995_ = l_Lasm_Web_requestAnimationFrame(v_f_993_);
return v_res_995_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame(double v_frame_996_){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = l_Lasm_Web_Raw_cancelAnimationFrame(v_frame_996_);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_cancelAnimationFrame___boxed(lean_object* v_frame_999_, lean_object* v_a_1000_){
_start:
{
double v_frame_boxed_1001_; lean_object* v_res_1002_; 
v_frame_boxed_1001_ = lean_unbox_float(v_frame_999_);
lean_dec_ref(v_frame_999_);
v_res_1002_ = l_Lasm_Web_cancelAnimationFrame(v_frame_boxed_1001_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask(lean_object* v_f_1003_){
_start:
{
lean_object* v___f_1005_; lean_object* v___x_1006_; 
v___f_1005_ = lean_alloc_closure((void*)(l_Lasm_Web_setTimeout___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1005_, 0, v_f_1003_);
v___x_1006_ = l_Lasm_Web_callback(v___f_1005_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v___x_1008_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
lean_dec_ref_known(v___x_1006_, 1);
v___x_1008_ = l_Lasm_Web_Raw_queueMicrotask(v_a_1007_);
return v___x_1008_;
}
else
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
v_a_1009_ = lean_ctor_get(v___x_1006_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1006_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1006_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1006_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_queueMicrotask___boxed(lean_object* v_f_1017_, lean_object* v_a_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lasm_Web_queueMicrotask(v_f_1017_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame(){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lasm_Web_Raw_nextFrame();
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_nextFrame___boxed(lean_object* v_a_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = l_Lasm_Web_nextFrame();
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now(){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Lasm_Web_Raw_now();
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_now___boxed(lean_object* v_a_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Lasm_Web_now();
return v_res_1027_;
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
