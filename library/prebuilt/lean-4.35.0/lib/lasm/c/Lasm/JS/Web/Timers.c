// Lean compiler output
// Module: Lasm.JS.Web.Timers
// Imports: public import Init public meta import Init public import Lasm.JS.Web.Support public import Lasm.JS.Web.Streams
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
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
double l_Float_ofInt(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lasm_JS_Web_Support_argsWith(lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_domString_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_domString_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_jsFunction_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_jsFunction_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_trustedScript_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_trustedScript_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTimerHandler___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSTimerHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSTimerHandler___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSTimerHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSTimerHandler___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSTimerHandler = (const lean_object*)&l_Lasm_JS_Web_instToJSTimerHandler___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSVoidFunction___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instToJSVoidFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instToJSVoidFunction___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instToJSVoidFunction___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instToJSVoidFunction___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instToJSVoidFunction = (const lean_object*)&l_Lasm_JS_Web_instToJSVoidFunction___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instFromJSVoidFunction___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instFromJSVoidFunction___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_instFromJSVoidFunction___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.VoidFunction"};
static const lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___closed__1 = (const lean_object*)&l_Lasm_JS_Web_instFromJSVoidFunction___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_instFromJSVoidFunction___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_instFromJSVoidFunction___closed__0_value),((lean_object*)&l_Lasm_JS_Web_instFromJSVoidFunction___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___closed__2 = (const lean_object*)&l_Lasm_JS_Web_instFromJSVoidFunction___closed__2_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instFromJSVoidFunction = (const lean_object*)&l_Lasm_JS_Web_instFromJSVoidFunction___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__0 = (const lean_object*)&l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__1 = (const lean_object*)&l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lasm_JS_Web_VoidFunction_ofFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___closed__0 = (const lean_object*)&l_Lasm_JS_Web_VoidFunction_ofFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__7_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__8;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__9_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__10_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.Support.number"};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Number"};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_setTimeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.setTimeout"};
static const lean_object* l_Lasm_JS_Web_setTimeout___closed__0 = (const lean_object*)&l_Lasm_JS_Web_setTimeout___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_setTimeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "setTimeout"};
static const lean_object* l_Lasm_JS_Web_setTimeout___closed__1 = (const lean_object*)&l_Lasm_JS_Web_setTimeout___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_setTimeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_setTimeout___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value),((lean_object*)&l_Lasm_JS_Web_setTimeout___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_setTimeout___closed__2 = (const lean_object*)&l_Lasm_JS_Web_setTimeout___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_clearTimeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.clearTimeout"};
static const lean_object* l_Lasm_JS_Web_clearTimeout___closed__0 = (const lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_clearTimeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "clearTimeout"};
static const lean_object* l_Lasm_JS_Web_clearTimeout___closed__1 = (const lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_clearTimeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value),((lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_clearTimeout___closed__2 = (const lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_setInterval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.setInterval"};
static const lean_object* l_Lasm_JS_Web_setInterval___closed__0 = (const lean_object*)&l_Lasm_JS_Web_setInterval___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_setInterval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "setInterval"};
static const lean_object* l_Lasm_JS_Web_setInterval___closed__1 = (const lean_object*)&l_Lasm_JS_Web_setInterval___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_setInterval___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_setInterval___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value),((lean_object*)&l_Lasm_JS_Web_setInterval___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_setInterval___closed__2 = (const lean_object*)&l_Lasm_JS_Web_setInterval___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_clearInterval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.clearInterval"};
static const lean_object* l_Lasm_JS_Web_clearInterval___closed__0 = (const lean_object*)&l_Lasm_JS_Web_clearInterval___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_clearInterval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "clearInterval"};
static const lean_object* l_Lasm_JS_Web_clearInterval___closed__1 = (const lean_object*)&l_Lasm_JS_Web_clearInterval___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_clearInterval___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_clearInterval___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value),((lean_object*)&l_Lasm_JS_Web_clearInterval___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_clearInterval___closed__2 = (const lean_object*)&l_Lasm_JS_Web_clearInterval___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_queueMicrotask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.queueMicrotask"};
static const lean_object* l_Lasm_JS_Web_queueMicrotask___closed__0 = (const lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_queueMicrotask___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "queueMicrotask"};
static const lean_object* l_Lasm_JS_Web_queueMicrotask___closed__1 = (const lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_queueMicrotask___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__1_value),((lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_queueMicrotask___closed__2 = (const lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lasm_JS_Web_TimerHandler_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 0)
{
lean_object* v_value_9_; lean_object* v___x_10_; 
v_value_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_value_9_);
lean_dec_ref_known(v_t_7_, 1);
v___x_10_ = lean_apply_1(v_k_8_, v_value_9_);
return v___x_10_;
}
else
{
lean_object* v_value_11_; lean_object* v___x_12_; 
v_value_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_value_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_value_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_JS_Web_TimerHandler_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_domString_elim___redArg(lean_object* v_t_25_, lean_object* v_domString_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_25_, v_domString_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_domString_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_domString_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_29_, v_domString_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_jsFunction_elim___redArg(lean_object* v_t_33_, lean_object* v_jsFunction_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_33_, v_jsFunction_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_jsFunction_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_jsFunction_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_37_, v_jsFunction_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_trustedScript_elim___redArg(lean_object* v_t_41_, lean_object* v_trustedScript_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_41_, v_trustedScript_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_trustedScript_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_trustedScript_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_45_, v_trustedScript_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTimerHandler___lam__0(lean_object* v_x_50_){
_start:
{
if (lean_obj_tag(v_x_50_) == 0)
{
lean_object* v_value_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_58_; 
v_value_51_ = lean_ctor_get(v_x_50_, 0);
v_isSharedCheck_58_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_58_ == 0)
{
v___x_53_ = v_x_50_;
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_value_51_);
lean_dec(v_x_50_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_58_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_56_; 
if (v_isShared_54_ == 0)
{
lean_ctor_set_tag(v___x_53_, 4);
v___x_56_ = v___x_53_;
goto v_reusejp_55_;
}
else
{
lean_object* v_reuseFailAlloc_57_; 
v_reuseFailAlloc_57_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_57_, 0, v_value_51_);
v___x_56_ = v_reuseFailAlloc_57_;
goto v_reusejp_55_;
}
v_reusejp_55_:
{
return v___x_56_;
}
}
}
else
{
lean_object* v_value_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v_value_59_ = lean_ctor_get(v_x_50_, 0);
lean_inc(v_value_59_);
lean_dec_ref(v_x_50_);
v___x_60_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_61_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_61_, 0, v_value_59_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSVoidFunction___lam__0(lean_object* v_x_64_){
_start:
{
lean_object* v___x_65_; lean_object* v___x_66_; 
v___x_65_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_66_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_66_, 0, v_x_64_);
lean_ctor_set(v___x_66_, 1, v___x_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0(lean_object* v_x_71_){
_start:
{
if (lean_obj_tag(v_x_71_) == 9)
{
lean_object* v_value_72_; lean_object* v___x_73_; 
v_value_72_ = lean_ctor_get(v_x_71_, 0);
lean_inc(v_value_72_);
v___x_73_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_73_, 0, v_value_72_);
return v___x_73_;
}
else
{
lean_object* v___x_74_; 
v___x_74_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___closed__0));
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___boxed(lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lasm_JS_Web_instFromJSVoidFunction___lam__0(v_x_75_);
lean_dec(v_x_75_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0(lean_object* v_x_88_){
_start:
{
if (lean_obj_tag(v_x_88_) == 0)
{
lean_object* v_a_90_; lean_object* v___x_92_; uint8_t v_isShared_93_; uint8_t v_isSharedCheck_98_; 
v_a_90_ = lean_ctor_get(v_x_88_, 0);
v_isSharedCheck_98_ = !lean_is_exclusive(v_x_88_);
if (v_isSharedCheck_98_ == 0)
{
v___x_92_ = v_x_88_;
v_isShared_93_ = v_isSharedCheck_98_;
goto v_resetjp_91_;
}
else
{
lean_inc(v_a_90_);
lean_dec(v_x_88_);
v___x_92_ = lean_box(0);
v_isShared_93_ = v_isSharedCheck_98_;
goto v_resetjp_91_;
}
v_resetjp_91_:
{
lean_object* v___x_95_; 
if (v_isShared_93_ == 0)
{
v___x_95_ = v___x_92_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_97_; 
v_reuseFailAlloc_97_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_97_, 0, v_a_90_);
v___x_95_ = v_reuseFailAlloc_97_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; 
v___x_96_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_96_, 0, v___x_95_);
return v___x_96_;
}
}
}
else
{
lean_object* v___x_99_; 
lean_dec_ref_known(v_x_88_, 1);
v___x_99_ = ((lean_object*)(l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__1));
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___boxed(lean_object* v_x_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lasm_JS_Web_VoidFunction_ofFn___lam__0(v_x_100_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1(lean_object* v_f_103_, lean_object* v___f_104_, lean_object* v_x_105_){
_start:
{
lean_object* v___x_107_; uint8_t v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_107_ = lean_unsigned_to_nat(0u);
v___x_108_ = 0;
v___x_109_ = lean_apply_1(v_f_103_, lean_box(0));
v___x_110_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_107_, v___x_108_, v___x_109_, v___f_104_);
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed(lean_object* v_f_111_, lean_object* v___f_112_, lean_object* v_x_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lasm_JS_Web_VoidFunction_ofFn___lam__1(v_f_111_, v___f_112_, v_x_113_);
lean_dec_ref(v_x_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn(lean_object* v_f_117_){
_start:
{
lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___x_121_; 
v___f_119_ = ((lean_object*)(l_Lasm_JS_Web_VoidFunction_ofFn___closed__0));
v___f_120_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_120_, 0, v_f_117_);
lean_closure_set(v___f_120_, 1, v___f_119_);
v___x_121_ = l_Lasm_JS_Function_ofFn(v___f_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_121_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_121_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___boxed(lean_object* v_f_138_, lean_object* v_a_139_){
_start:
{
lean_object* v_res_140_; 
v_res_140_ = l_Lasm_JS_Web_VoidFunction_ofFn(v_f_138_);
return v_res_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(lean_object* v_f_141_, lean_object* v_x_142_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = lean_apply_1(v_f_141_, lean_box(0));
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_152_; 
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; 
v_unused_153_ = lean_ctor_get(v___x_144_, 0);
lean_dec(v_unused_153_);
v___x_146_ = v___x_144_;
v_isShared_147_ = v_isSharedCheck_152_;
goto v_resetjp_145_;
}
else
{
lean_dec(v___x_144_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_152_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_148_; lean_object* v___x_150_; 
v___x_148_ = lean_box(0);
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 0, v___x_148_);
v___x_150_ = v___x_146_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v___x_148_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_a_154_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v___x_144_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v___x_144_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_162_, lean_object* v_x_163_, lean_object* v___y_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(v_f_162_, v_x_163_);
lean_dec_ref(v_x_163_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn(lean_object* v_f_166_){
_start:
{
lean_object* v___f_168_; lean_object* v___x_169_; 
v___f_168_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_168_, 0, v_f_166_);
v___x_169_ = l_Lasm_JS_Function_ofSyncFn(v___f_168_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v___x_172_; uint8_t v_isShared_173_; uint8_t v_isSharedCheck_177_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_177_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_177_ == 0)
{
v___x_172_ = v___x_169_;
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
else
{
lean_inc(v_a_170_);
lean_dec(v___x_169_);
v___x_172_ = lean_box(0);
v_isShared_173_ = v_isSharedCheck_177_;
goto v_resetjp_171_;
}
v_resetjp_171_:
{
lean_object* v___x_175_; 
if (v_isShared_173_ == 0)
{
v___x_175_ = v___x_172_;
goto v_reusejp_174_;
}
else
{
lean_object* v_reuseFailAlloc_176_; 
v_reuseFailAlloc_176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_176_, 0, v_a_170_);
v___x_175_ = v_reuseFailAlloc_176_;
goto v_reusejp_174_;
}
v_reusejp_174_:
{
return v___x_175_;
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
v_a_178_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_169_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_169_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___boxed(lean_object* v_f_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn(v_f_186_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(lean_object* v_x_189_){
_start:
{
if (lean_obj_tag(v_x_189_) == 0)
{
lean_object* v___x_190_; 
v___x_190_ = lean_box(0);
return v___x_190_;
}
else
{
lean_object* v_val_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_203_; 
v_val_191_ = lean_ctor_get(v_x_189_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v_x_189_);
if (v_isSharedCheck_203_ == 0)
{
v___x_193_ = v_x_189_;
v_isShared_194_ = v_isSharedCheck_203_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_val_191_);
lean_dec(v_x_189_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_203_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_195_; lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_195_ = lean_nat_abs(v_val_191_);
v___x_196_ = lean_cstr_to_nat("9007199254740991");
v___x_197_ = lean_nat_dec_le(v___x_195_, v___x_196_);
lean_dec(v___x_195_);
if (v___x_197_ == 0)
{
lean_object* v___x_199_; 
if (v_isShared_194_ == 0)
{
lean_ctor_set_tag(v___x_193_, 5);
v___x_199_ = v___x_193_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_val_191_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
else
{
double v___x_201_; lean_object* v___x_202_; 
lean_del_object(v___x_193_);
v___x_201_ = l_Float_ofInt(v_val_191_);
lean_dec(v_val_191_);
v___x_202_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
}
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2(void){
_start:
{
uint8_t v___x_206_; uint64_t v___x_207_; 
v___x_206_ = 1;
v___x_207_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2(lean_object* v_b_208_, lean_object* v_args_209_, uint8_t v_await_210_){
_start:
{
uint64_t v___y_213_; uint64_t v___y_214_; uint64_t v___x_257_; uint64_t v___y_259_; 
v___x_257_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2);
if (v_await_210_ == 0)
{
uint64_t v___x_264_; 
v___x_264_ = 0ULL;
v___y_259_ = v___x_264_;
goto v___jp_258_;
}
else
{
uint64_t v___x_265_; 
v___x_265_ = 2ULL;
v___y_259_ = v___x_265_;
goto v___jp_258_;
}
v___jp_212_:
{
uint64_t v_flags_215_; uint32_t v___x_216_; lean_object* v___x_217_; uint32_t v___x_218_; lean_object* v___x_219_; 
v_flags_215_ = lean_uint64_lor(v___y_213_, v___y_214_);
v___x_216_ = 214;
v___x_217_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_208_, v_args_209_);
v___x_218_ = 0;
v___x_219_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_216_, v_flags_215_, v___x_217_, v___x_218_);
lean_dec(v___x_217_);
if (lean_obj_tag(v___x_219_) == 0)
{
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v___x_221_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
lean_inc(v_a_220_);
lean_dec_ref_known(v___x_219_, 1);
v___x_221_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_220_);
lean_dec(v_a_220_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v___x_223_; lean_object* v___x_224_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_a_222_);
lean_dec_ref_known(v___x_221_, 1);
v___x_223_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_208_);
v___x_224_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0_spec__0(v___x_223_, v_a_222_);
lean_dec_ref(v___x_223_);
return v___x_224_;
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
v_a_225_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_221_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_221_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
else
{
lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_240_; 
v_a_233_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_240_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_240_ == 0)
{
v___x_235_ = v___x_219_;
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_dec(v___x_219_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_240_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set_tag(v___x_235_, 1);
v___x_238_ = v___x_235_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_a_233_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
}
}
else
{
lean_object* v_a_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_256_; 
v_a_241_ = lean_ctor_get(v___x_219_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_256_ == 0)
{
v___x_243_ = v___x_219_;
v_isShared_244_ = v_isSharedCheck_256_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_a_241_);
lean_dec(v___x_219_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_256_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_254_; 
v___x_245_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0));
v___x_246_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_208_);
v___x_247_ = lean_string_append(v___x_245_, v___x_246_);
lean_dec_ref(v___x_246_);
v___x_248_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1));
v___x_249_ = lean_string_append(v___x_247_, v___x_248_);
v___x_250_ = lean_io_error_to_string(v_a_241_);
v___x_251_ = lean_string_append(v___x_249_, v___x_250_);
lean_dec_ref(v___x_250_);
v___x_252_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 0, v___x_252_);
v___x_254_ = v___x_243_;
goto v_reusejp_253_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(1, 1, 0);
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
v___jp_258_:
{
uint8_t v_construct_260_; uint64_t v___x_261_; 
v_construct_260_ = lean_ctor_get_uint8(v_b_208_, sizeof(void*)*4);
v___x_261_ = lean_uint64_lor(v___x_257_, v___y_259_);
if (v_construct_260_ == 0)
{
uint64_t v___x_262_; 
v___x_262_ = 0ULL;
v___y_213_ = v___x_261_;
v___y_214_ = v___x_262_;
goto v___jp_212_;
}
else
{
uint64_t v___x_263_; 
v___x_263_ = 4ULL;
v___y_213_ = v___x_261_;
v___y_214_ = v___x_263_;
goto v___jp_212_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___boxed(lean_object* v_b_266_, lean_object* v_args_267_, lean_object* v_await_268_, lean_object* v_a_269_){
_start:
{
uint8_t v_await_boxed_270_; lean_object* v_res_271_; 
v_await_boxed_270_ = lean_unbox(v_await_268_);
v_res_271_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2(v_b_266_, v_args_267_, v_await_boxed_270_);
lean_dec_ref(v_b_266_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(size_t v_sz_272_, size_t v_i_273_, lean_object* v_bs_274_){
_start:
{
uint8_t v___x_275_; 
v___x_275_ = lean_usize_dec_lt(v_i_273_, v_sz_272_);
if (v___x_275_ == 0)
{
return v_bs_274_;
}
else
{
lean_object* v_v_276_; lean_object* v___x_277_; lean_object* v_bs_x27_278_; size_t v___x_279_; size_t v___x_280_; lean_object* v___x_281_; 
v_v_276_ = lean_array_uget(v_bs_274_, v_i_273_);
v___x_277_ = lean_unsigned_to_nat(0u);
v_bs_x27_278_ = lean_array_uset(v_bs_274_, v_i_273_, v___x_277_);
v___x_279_ = ((size_t)1ULL);
v___x_280_ = lean_usize_add(v_i_273_, v___x_279_);
v___x_281_ = lean_array_uset(v_bs_x27_278_, v_i_273_, v_v_276_);
v_i_273_ = v___x_280_;
v_bs_274_ = v___x_281_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1___boxed(lean_object* v_sz_283_, lean_object* v_i_284_, lean_object* v_bs_285_){
_start:
{
size_t v_sz_boxed_286_; size_t v_i_boxed_287_; lean_object* v_res_288_; 
v_sz_boxed_286_ = lean_unbox_usize(v_sz_283_);
lean_dec(v_sz_283_);
v_i_boxed_287_ = lean_unbox_usize(v_i_284_);
lean_dec(v_i_284_);
v_res_288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_boxed_286_, v_i_boxed_287_, v_bs_285_);
return v_res_288_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__8(void){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_297_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__7));
v___x_298_ = lean_unsigned_to_nat(46u);
v___x_299_ = lean_unsigned_to_nat(193u);
v___x_300_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__6));
v___x_301_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__5));
v___x_302_ = l_mkPanicMessageWithDecl(v___x_301_, v___x_300_, v___x_299_, v___x_298_, v___x_297_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4(lean_object* v_context_305_, lean_object* v_d_306_){
_start:
{
lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_315_; lean_object* v_received_316_; lean_object* v___y_335_; lean_object* v_a_338_; 
switch(lean_obj_tag(v_d_306_))
{
case 3:
{
double v_n_362_; lean_object* v___x_363_; 
v_n_362_ = lean_ctor_get_float(v_d_306_, 0);
v___x_363_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v___x_364_; 
v___x_364_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__10));
v_a_338_ = v___x_364_;
goto v___jp_337_;
}
else
{
lean_object* v_val_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_372_; 
lean_dec_ref_known(v_d_306_, 0);
v_val_365_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_372_ == 0)
{
v___x_367_ = v___x_363_;
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_val_365_);
lean_dec(v___x_363_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_372_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v___x_370_; 
if (v_isShared_368_ == 0)
{
lean_ctor_set_tag(v___x_367_, 0);
v___x_370_ = v___x_367_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v_val_365_);
v___x_370_ = v_reuseFailAlloc_371_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
return v___x_370_;
}
}
}
}
case 5:
{
lean_object* v_i_373_; lean_object* v___x_374_; 
v_i_373_ = lean_ctor_get(v_d_306_, 0);
lean_inc(v_i_373_);
lean_dec_ref_known(v_d_306_, 1);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_i_373_);
return v___x_374_;
}
default: 
{
lean_object* v___x_375_; 
v___x_375_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v_a_338_ = v___x_375_;
goto v___jp_337_;
}
}
v___jp_308_:
{
lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_311_ = lean_string_append(v___y_309_, v___y_310_);
lean_dec_ref(v___y_310_);
v___x_312_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_312_, 0, v___x_311_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
return v___x_313_;
}
v___jp_314_:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v___x_317_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0));
v___x_318_ = lean_string_append(v___x_317_, v_context_305_);
v___x_319_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__0));
v___x_320_ = lean_string_append(v___x_318_, v___x_319_);
v___x_321_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__1));
v___x_322_ = lean_string_append(v___x_320_, v___x_321_);
v___x_323_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__2));
v___x_324_ = lean_string_append(v___x_322_, v___x_323_);
v___x_325_ = lean_string_append(v___x_324_, v_received_316_);
lean_dec_ref(v_received_316_);
v___x_326_ = lean_string_utf8_byte_size(v___y_315_);
v___x_327_ = lean_unsigned_to_nat(0u);
v___x_328_ = lean_nat_dec_eq(v___x_326_, v___x_327_);
if (v___x_328_ == 0)
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_329_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__3));
v___x_330_ = lean_string_append(v___x_329_, v___y_315_);
v___x_331_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__4));
v___x_332_ = lean_string_append(v___x_330_, v___x_331_);
v___y_309_ = v___x_325_;
v___y_310_ = v___x_332_;
goto v___jp_308_;
}
else
{
lean_object* v___x_333_; 
v___x_333_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___y_309_ = v___x_325_;
v___y_310_ = v___x_333_;
goto v___jp_308_;
}
}
v___jp_334_:
{
lean_object* v___x_336_; 
v___x_336_ = l_Lasm_JS_Data_describe(v_d_306_);
v___y_315_ = v___y_335_;
v_received_316_ = v___x_336_;
goto v___jp_314_;
}
v___jp_337_:
{
if (lean_obj_tag(v_d_306_) == 9)
{
lean_object* v_value_339_; lean_object* v_description_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v_value_339_ = lean_ctor_get(v_d_306_, 0);
v_description_340_ = lean_ctor_get(v_d_306_, 1);
v___x_341_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_342_ = lean_string_dec_eq(v_description_340_, v___x_341_);
if (v___x_342_ == 0)
{
v___y_335_ = v_a_338_;
goto v___jp_334_;
}
else
{
lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_359_; 
lean_inc(v_value_339_);
v_isSharedCheck_359_ = !lean_is_exclusive(v_d_306_);
if (v_isSharedCheck_359_ == 0)
{
lean_object* v_unused_360_; lean_object* v_unused_361_; 
v_unused_360_ = lean_ctor_get(v_d_306_, 1);
lean_dec(v_unused_360_);
v_unused_361_ = lean_ctor_get(v_d_306_, 0);
lean_dec(v_unused_361_);
v___x_344_ = v_d_306_;
v_isShared_345_ = v_isSharedCheck_359_;
goto v_resetjp_343_;
}
else
{
lean_dec(v_d_306_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_359_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
uint32_t v___x_346_; uint64_t v___x_347_; lean_object* v___x_349_; 
v___x_346_ = 206;
v___x_347_ = 0ULL;
lean_inc(v_value_339_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 1, v___x_341_);
v___x_349_ = v___x_344_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_value_339_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v___x_341_);
v___x_349_ = v_reuseFailAlloc_358_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
uint32_t v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lasm_js_value_handle(v_value_339_);
lean_dec(v_value_339_);
v___x_351_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_346_, v___x_347_, v___x_349_, v___x_350_);
lean_dec_ref(v___x_349_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v_a_352_; uint8_t v___x_353_; 
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref_known(v___x_351_, 1);
v___x_353_ = lean_string_validate_utf8(v_a_352_);
if (v___x_353_ == 0)
{
lean_object* v___x_354_; lean_object* v___x_355_; 
lean_dec(v_a_352_);
v___x_354_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__8, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__8_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__8);
v___x_355_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_354_);
v___y_315_ = v_a_338_;
v_received_316_ = v___x_355_;
goto v___jp_314_;
}
else
{
lean_object* v___x_356_; 
v___x_356_ = lean_string_from_utf8_unchecked(v_a_352_);
v___y_315_ = v_a_338_;
v_received_316_ = v___x_356_;
goto v___jp_314_;
}
}
else
{
lean_object* v___x_357_; 
lean_dec_ref_known(v___x_351_, 1);
v___x_357_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___closed__9));
v___y_315_ = v_a_338_;
v_received_316_ = v___x_357_;
goto v___jp_314_;
}
}
}
}
}
else
{
v___y_335_ = v_a_338_;
goto v___jp_334_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4___boxed(lean_object* v_context_376_, lean_object* v_d_377_, lean_object* v_a_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4(v_context_376_, v_d_377_);
lean_dec_ref(v_context_376_);
return v_res_379_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0(void){
_start:
{
uint8_t v___x_380_; uint64_t v___x_381_; 
v___x_380_ = 0;
v___x_381_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3(lean_object* v_b_382_, lean_object* v_args_383_, uint8_t v_await_384_){
_start:
{
uint64_t v___y_387_; uint64_t v___y_388_; uint64_t v___x_431_; uint64_t v___y_433_; 
v___x_431_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0);
if (v_await_384_ == 0)
{
uint64_t v___x_438_; 
v___x_438_ = 0ULL;
v___y_433_ = v___x_438_;
goto v___jp_432_;
}
else
{
uint64_t v___x_439_; 
v___x_439_ = 2ULL;
v___y_433_ = v___x_439_;
goto v___jp_432_;
}
v___jp_386_:
{
uint64_t v_flags_389_; uint32_t v___x_390_; lean_object* v___x_391_; uint32_t v___x_392_; lean_object* v___x_393_; 
v_flags_389_ = lean_uint64_lor(v___y_387_, v___y_388_);
v___x_390_ = 214;
v___x_391_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_382_, v_args_383_);
v___x_392_ = 0;
v___x_393_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_390_, v_flags_389_, v___x_391_, v___x_392_);
lean_dec(v___x_391_);
if (lean_obj_tag(v___x_393_) == 0)
{
if (lean_obj_tag(v___x_393_) == 0)
{
lean_object* v_a_394_; lean_object* v___x_395_; 
v_a_394_ = lean_ctor_get(v___x_393_, 0);
lean_inc(v_a_394_);
lean_dec_ref_known(v___x_393_, 1);
v___x_395_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_394_);
lean_dec(v_a_394_);
if (lean_obj_tag(v___x_395_) == 0)
{
lean_object* v_a_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v_a_396_ = lean_ctor_get(v___x_395_, 0);
lean_inc(v_a_396_);
lean_dec_ref_known(v___x_395_, 1);
v___x_397_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_382_);
v___x_398_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3_spec__4(v___x_397_, v_a_396_);
lean_dec_ref(v___x_397_);
return v___x_398_;
}
else
{
lean_object* v_a_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
v_a_399_ = lean_ctor_get(v___x_395_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_395_);
if (v_isSharedCheck_406_ == 0)
{
v___x_401_ = v___x_395_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_inc(v_a_399_);
lean_dec(v___x_395_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_399_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
else
{
lean_object* v_a_407_; lean_object* v___x_409_; uint8_t v_isShared_410_; uint8_t v_isSharedCheck_414_; 
v_a_407_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_414_ == 0)
{
v___x_409_ = v___x_393_;
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
else
{
lean_inc(v_a_407_);
lean_dec(v___x_393_);
v___x_409_ = lean_box(0);
v_isShared_410_ = v_isSharedCheck_414_;
goto v_resetjp_408_;
}
v_resetjp_408_:
{
lean_object* v___x_412_; 
if (v_isShared_410_ == 0)
{
lean_ctor_set_tag(v___x_409_, 1);
v___x_412_ = v___x_409_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_a_407_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
}
else
{
lean_object* v_a_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_430_; 
v_a_415_ = lean_ctor_get(v___x_393_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_393_);
if (v_isSharedCheck_430_ == 0)
{
v___x_417_ = v___x_393_;
v_isShared_418_ = v_isSharedCheck_430_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_a_415_);
lean_dec(v___x_393_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_430_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_428_; 
v___x_419_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0));
v___x_420_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_382_);
v___x_421_ = lean_string_append(v___x_419_, v___x_420_);
lean_dec_ref(v___x_420_);
v___x_422_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1));
v___x_423_ = lean_string_append(v___x_421_, v___x_422_);
v___x_424_ = lean_io_error_to_string(v_a_415_);
v___x_425_ = lean_string_append(v___x_423_, v___x_424_);
lean_dec_ref(v___x_424_);
v___x_426_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_426_, 0, v___x_425_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_426_);
v___x_428_ = v___x_417_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_426_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
v___jp_432_:
{
uint8_t v_construct_434_; uint64_t v___x_435_; 
v_construct_434_ = lean_ctor_get_uint8(v_b_382_, sizeof(void*)*4);
v___x_435_ = lean_uint64_lor(v___x_431_, v___y_433_);
if (v_construct_434_ == 0)
{
uint64_t v___x_436_; 
v___x_436_ = 0ULL;
v___y_387_ = v___x_435_;
v___y_388_ = v___x_436_;
goto v___jp_386_;
}
else
{
uint64_t v___x_437_; 
v___x_437_ = 4ULL;
v___y_387_ = v___x_435_;
v___y_388_ = v___x_437_;
goto v___jp_386_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___boxed(lean_object* v_b_440_, lean_object* v_args_441_, lean_object* v_await_442_, lean_object* v_a_443_){
_start:
{
uint8_t v_await_boxed_444_; lean_object* v_res_445_; 
v_await_boxed_444_ = lean_unbox(v_await_442_);
v_res_445_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3(v_b_440_, v_args_441_, v_await_boxed_444_);
lean_dec_ref(v_b_440_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3(lean_object* v_v_455_){
_start:
{
uint8_t v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_457_ = 0;
v___x_458_ = lean_unsigned_to_nat(1u);
v___x_459_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___closed__3));
v___x_460_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_461_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_461_, 0, v_v_455_);
lean_ctor_set(v___x_461_, 1, v___x_460_);
v___x_462_ = lean_mk_empty_array_with_capacity(v___x_458_);
v___x_463_ = lean_array_push(v___x_462_, v___x_461_);
v___x_464_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3(v___x_459_, v___x_463_, v___x_457_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3___boxed(lean_object* v_v_465_, lean_object* v_a_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3(v_v_465_);
return v_res_467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout(lean_object* v_handler_476_, lean_object* v_timeout_477_, lean_object* v_arguments_478_){
_start:
{
uint8_t v___x_480_; lean_object* v___x_481_; lean_object* v___y_483_; 
v___x_480_ = 0;
v___x_481_ = ((lean_object*)(l_Lasm_JS_Web_setTimeout___closed__2));
if (lean_obj_tag(v_handler_476_) == 0)
{
lean_object* v_value_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_511_; 
v_value_504_ = lean_ctor_get(v_handler_476_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v_handler_476_);
if (v_isSharedCheck_511_ == 0)
{
v___x_506_ = v_handler_476_;
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_value_504_);
lean_dec(v_handler_476_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_511_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
lean_object* v___x_509_; 
if (v_isShared_507_ == 0)
{
lean_ctor_set_tag(v___x_506_, 4);
v___x_509_ = v___x_506_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_value_504_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
v___y_483_ = v___x_509_;
goto v___jp_482_;
}
}
}
else
{
lean_object* v_value_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v_value_512_ = lean_ctor_get(v_handler_476_, 0);
lean_inc(v_value_512_);
lean_dec_ref(v_handler_476_);
v___x_513_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_514_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_514_, 0, v_value_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
v___y_483_ = v___x_514_;
goto v___jp_482_;
}
v___jp_482_:
{
lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; size_t v_sz_489_; size_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_484_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_477_);
v___x_485_ = lean_unsigned_to_nat(2u);
v___x_486_ = lean_mk_empty_array_with_capacity(v___x_485_);
v___x_487_ = lean_array_push(v___x_486_, v___y_483_);
v___x_488_ = lean_array_push(v___x_487_, v___x_484_);
v_sz_489_ = lean_array_size(v_arguments_478_);
v___x_490_ = ((size_t)0ULL);
v___x_491_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_489_, v___x_490_, v_arguments_478_);
v___x_492_ = l_Lasm_JS_Web_Support_argsWith(v___x_488_, v___x_491_);
lean_dec_ref(v___x_491_);
v___x_493_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2(v___x_481_, v___x_492_, v___x_480_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v_a_494_; lean_object* v___x_495_; 
v_a_494_ = lean_ctor_get(v___x_493_, 0);
lean_inc(v_a_494_);
lean_dec_ref_known(v___x_493_, 1);
v___x_495_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3(v_a_494_);
return v___x_495_;
}
else
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_503_; 
v_a_496_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_503_ == 0)
{
v___x_498_ = v___x_493_;
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_493_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_503_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_496_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout___boxed(lean_object* v_handler_515_, lean_object* v_timeout_516_, lean_object* v_arguments_517_, lean_object* v_a_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lasm_JS_Web_setTimeout(v_handler_515_, v_timeout_516_, v_arguments_517_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(lean_object* v_b_520_, lean_object* v_args_521_, uint8_t v_await_522_){
_start:
{
uint64_t v___y_525_; uint64_t v___y_526_; uint64_t v___x_567_; uint64_t v___y_569_; 
v___x_567_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3_spec__3___closed__0);
if (v_await_522_ == 0)
{
uint64_t v___x_574_; 
v___x_574_ = 0ULL;
v___y_569_ = v___x_574_;
goto v___jp_568_;
}
else
{
uint64_t v___x_575_; 
v___x_575_ = 2ULL;
v___y_569_ = v___x_575_;
goto v___jp_568_;
}
v___jp_524_:
{
uint64_t v_flags_527_; uint32_t v___x_528_; lean_object* v___x_529_; uint32_t v___x_530_; lean_object* v___x_531_; 
v_flags_527_ = lean_uint64_lor(v___y_525_, v___y_526_);
v___x_528_ = 214;
v___x_529_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_520_, v_args_521_);
v___x_530_ = 0;
v___x_531_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_528_, v_flags_527_, v___x_529_, v___x_530_);
lean_dec(v___x_529_);
if (lean_obj_tag(v___x_531_) == 0)
{
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_533_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref_known(v___x_531_, 1);
v___x_533_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_532_);
lean_dec(v_a_532_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v___x_534_; 
lean_dec_ref_known(v___x_533_, 1);
v___x_534_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_534_;
}
else
{
lean_object* v_a_535_; lean_object* v___x_537_; uint8_t v_isShared_538_; uint8_t v_isSharedCheck_542_; 
v_a_535_ = lean_ctor_get(v___x_533_, 0);
v_isSharedCheck_542_ = !lean_is_exclusive(v___x_533_);
if (v_isSharedCheck_542_ == 0)
{
v___x_537_ = v___x_533_;
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
else
{
lean_inc(v_a_535_);
lean_dec(v___x_533_);
v___x_537_ = lean_box(0);
v_isShared_538_ = v_isSharedCheck_542_;
goto v_resetjp_536_;
}
v_resetjp_536_:
{
lean_object* v___x_540_; 
if (v_isShared_538_ == 0)
{
v___x_540_ = v___x_537_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_a_535_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
}
}
else
{
lean_object* v_a_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_550_; 
v_a_543_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_550_ == 0)
{
v___x_545_ = v___x_531_;
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_a_543_);
lean_dec(v___x_531_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_550_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v___x_548_; 
if (v_isShared_546_ == 0)
{
lean_ctor_set_tag(v___x_545_, 1);
v___x_548_ = v___x_545_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_a_543_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_566_; 
v_a_551_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_566_ == 0)
{
v___x_553_ = v___x_531_;
v_isShared_554_ = v_isSharedCheck_566_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_531_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_566_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_564_; 
v___x_555_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0));
v___x_556_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_520_);
v___x_557_ = lean_string_append(v___x_555_, v___x_556_);
lean_dec_ref(v___x_556_);
v___x_558_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1));
v___x_559_ = lean_string_append(v___x_557_, v___x_558_);
v___x_560_ = lean_io_error_to_string(v_a_551_);
v___x_561_ = lean_string_append(v___x_559_, v___x_560_);
lean_dec_ref(v___x_560_);
v___x_562_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 0, v___x_562_);
v___x_564_ = v___x_553_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_562_);
v___x_564_ = v_reuseFailAlloc_565_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
return v___x_564_;
}
}
}
}
v___jp_568_:
{
uint8_t v_construct_570_; uint64_t v___x_571_; 
v_construct_570_ = lean_ctor_get_uint8(v_b_520_, sizeof(void*)*4);
v___x_571_ = lean_uint64_lor(v___x_567_, v___y_569_);
if (v_construct_570_ == 0)
{
uint64_t v___x_572_; 
v___x_572_ = 0ULL;
v___y_525_ = v___x_571_;
v___y_526_ = v___x_572_;
goto v___jp_524_;
}
else
{
uint64_t v___x_573_; 
v___x_573_ = 4ULL;
v___y_525_ = v___x_571_;
v___y_526_ = v___x_573_;
goto v___jp_524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0___boxed(lean_object* v_b_576_, lean_object* v_args_577_, lean_object* v_await_578_, lean_object* v_a_579_){
_start:
{
uint8_t v_await_boxed_580_; lean_object* v_res_581_; 
v_await_boxed_580_ = lean_unbox(v_await_578_);
v_res_581_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v_b_576_, v_args_577_, v_await_boxed_580_);
lean_dec_ref(v_b_576_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout(lean_object* v_id_590_){
_start:
{
uint8_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_592_ = 0;
v___x_593_ = lean_unsigned_to_nat(1u);
v___x_594_ = ((lean_object*)(l_Lasm_JS_Web_clearTimeout___closed__2));
v___x_595_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_590_);
v___x_596_ = lean_mk_empty_array_with_capacity(v___x_593_);
v___x_597_ = lean_array_push(v___x_596_, v___x_595_);
v___x_598_ = l_Lasm_JS_Web_Support_args(v___x_597_);
v___x_599_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_594_, v___x_598_, v___x_592_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout___boxed(lean_object* v_id_600_, lean_object* v_a_601_){
_start:
{
lean_object* v_res_602_; 
v_res_602_ = l_Lasm_JS_Web_clearTimeout(v_id_600_);
return v_res_602_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval(lean_object* v_handler_611_, lean_object* v_timeout_612_, lean_object* v_arguments_613_){
_start:
{
uint8_t v___x_615_; lean_object* v___x_616_; lean_object* v___y_618_; 
v___x_615_ = 0;
v___x_616_ = ((lean_object*)(l_Lasm_JS_Web_setInterval___closed__2));
if (lean_obj_tag(v_handler_611_) == 0)
{
lean_object* v_value_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_value_639_ = lean_ctor_get(v_handler_611_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v_handler_611_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v_handler_611_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_value_639_);
lean_dec(v_handler_611_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
lean_ctor_set_tag(v___x_641_, 4);
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_value_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
v___y_618_ = v___x_644_;
goto v___jp_617_;
}
}
}
else
{
lean_object* v_value_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
v_value_647_ = lean_ctor_get(v_handler_611_, 0);
lean_inc(v_value_647_);
lean_dec_ref(v_handler_611_);
v___x_648_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_649_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_649_, 0, v_value_647_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
v___y_618_ = v___x_649_;
goto v___jp_617_;
}
v___jp_617_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; size_t v_sz_624_; size_t v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_619_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_612_);
v___x_620_ = lean_unsigned_to_nat(2u);
v___x_621_ = lean_mk_empty_array_with_capacity(v___x_620_);
v___x_622_ = lean_array_push(v___x_621_, v___y_618_);
v___x_623_ = lean_array_push(v___x_622_, v___x_619_);
v_sz_624_ = lean_array_size(v_arguments_613_);
v___x_625_ = ((size_t)0ULL);
v___x_626_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_624_, v___x_625_, v_arguments_613_);
v___x_627_ = l_Lasm_JS_Web_Support_argsWith(v___x_623_, v___x_626_);
lean_dec_ref(v___x_626_);
v___x_628_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_setTimeout_spec__2(v___x_616_, v___x_627_, v___x_615_);
if (lean_obj_tag(v___x_628_) == 0)
{
lean_object* v_a_629_; lean_object* v___x_630_; 
v_a_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_a_629_);
lean_dec_ref_known(v___x_628_, 1);
v___x_630_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__3(v_a_629_);
return v___x_630_;
}
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
v_a_631_ = lean_ctor_get(v___x_628_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_628_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_628_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_628_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
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
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval___boxed(lean_object* v_handler_650_, lean_object* v_timeout_651_, lean_object* v_arguments_652_, lean_object* v_a_653_){
_start:
{
lean_object* v_res_654_; 
v_res_654_ = l_Lasm_JS_Web_setInterval(v_handler_650_, v_timeout_651_, v_arguments_652_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval(lean_object* v_id_663_){
_start:
{
uint8_t v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_665_ = 0;
v___x_666_ = lean_unsigned_to_nat(1u);
v___x_667_ = ((lean_object*)(l_Lasm_JS_Web_clearInterval___closed__2));
v___x_668_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_663_);
v___x_669_ = lean_mk_empty_array_with_capacity(v___x_666_);
v___x_670_ = lean_array_push(v___x_669_, v___x_668_);
v___x_671_ = l_Lasm_JS_Web_Support_args(v___x_670_);
v___x_672_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_667_, v___x_671_, v___x_665_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval___boxed(lean_object* v_id_673_, lean_object* v_a_674_){
_start:
{
lean_object* v_res_675_; 
v_res_675_ = l_Lasm_JS_Web_clearInterval(v_id_673_);
return v_res_675_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask(lean_object* v_callback_684_){
_start:
{
uint8_t v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_686_ = 0;
v___x_687_ = lean_unsigned_to_nat(1u);
v___x_688_ = ((lean_object*)(l_Lasm_JS_Web_queueMicrotask___closed__2));
v___x_689_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_690_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_690_, 0, v_callback_684_);
lean_ctor_set(v___x_690_, 1, v___x_689_);
v___x_691_ = lean_mk_empty_array_with_capacity(v___x_687_);
v___x_692_ = lean_array_push(v___x_691_, v___x_690_);
v___x_693_ = l_Lasm_JS_Web_Support_args(v___x_692_);
v___x_694_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_688_, v___x_693_, v___x_686_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask___boxed(lean_object* v_callback_695_, lean_object* v_a_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lasm_JS_Web_queueMicrotask(v_callback_695_);
return v_res_697_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Support(uint8_t builtin);
lean_object* initialize_Lasm_JS_Web_Streams(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_JS_Web_Timers(uint8_t builtin) {
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
res = initialize_Lasm_JS_Web_Streams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
