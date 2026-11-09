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
lean_object* l_Lasm_JS_Web_Support_args(lean_object*);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
lean_object* l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
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
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(lean_object*, lean_object*, uint8_t);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__8_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__10 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__10_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0_value;
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.Support.number"};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "globalThis"};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Number"};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2_value;
static const lean_ctor_object l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_setTimeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lasm.JS.Web.setTimeout"};
static const lean_object* l_Lasm_JS_Web_setTimeout___closed__0 = (const lean_object*)&l_Lasm_JS_Web_setTimeout___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_setTimeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "setTimeout"};
static const lean_object* l_Lasm_JS_Web_setTimeout___closed__1 = (const lean_object*)&l_Lasm_JS_Web_setTimeout___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_setTimeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_setTimeout___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value),((lean_object*)&l_Lasm_JS_Web_setTimeout___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_setTimeout___closed__2 = (const lean_object*)&l_Lasm_JS_Web_setTimeout___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_clearTimeout___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.JS.Web.clearTimeout"};
static const lean_object* l_Lasm_JS_Web_clearTimeout___closed__0 = (const lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_clearTimeout___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "clearTimeout"};
static const lean_object* l_Lasm_JS_Web_clearTimeout___closed__1 = (const lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_clearTimeout___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value),((lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_clearTimeout___closed__2 = (const lean_object*)&l_Lasm_JS_Web_clearTimeout___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_setInterval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lasm.JS.Web.setInterval"};
static const lean_object* l_Lasm_JS_Web_setInterval___closed__0 = (const lean_object*)&l_Lasm_JS_Web_setInterval___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_setInterval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "setInterval"};
static const lean_object* l_Lasm_JS_Web_setInterval___closed__1 = (const lean_object*)&l_Lasm_JS_Web_setInterval___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_setInterval___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_setInterval___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value),((lean_object*)&l_Lasm_JS_Web_setInterval___closed__1_value),((lean_object*)(((size_t)(3) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_setInterval___closed__2 = (const lean_object*)&l_Lasm_JS_Web_setInterval___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_clearInterval___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lasm.JS.Web.clearInterval"};
static const lean_object* l_Lasm_JS_Web_clearInterval___closed__0 = (const lean_object*)&l_Lasm_JS_Web_clearInterval___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_clearInterval___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "clearInterval"};
static const lean_object* l_Lasm_JS_Web_clearInterval___closed__1 = (const lean_object*)&l_Lasm_JS_Web_clearInterval___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_clearInterval___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_clearInterval___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value),((lean_object*)&l_Lasm_JS_Web_clearInterval___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_JS_Web_clearInterval___closed__2 = (const lean_object*)&l_Lasm_JS_Web_clearInterval___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Web_queueMicrotask___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lasm.JS.Web.queueMicrotask"};
static const lean_object* l_Lasm_JS_Web_queueMicrotask___closed__0 = (const lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__0_value;
static const lean_string_object l_Lasm_JS_Web_queueMicrotask___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "queueMicrotask"};
static const lean_object* l_Lasm_JS_Web_queueMicrotask___closed__1 = (const lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__1_value;
static const lean_ctor_object l_Lasm_JS_Web_queueMicrotask___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__0_value),((lean_object*)&l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__1_value),((lean_object*)&l_Lasm_JS_Web_queueMicrotask___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(size_t v_sz_204_, size_t v_i_205_, lean_object* v_bs_206_){
_start:
{
uint8_t v___x_207_; 
v___x_207_ = lean_usize_dec_lt(v_i_205_, v_sz_204_);
if (v___x_207_ == 0)
{
return v_bs_206_;
}
else
{
lean_object* v_v_208_; lean_object* v___x_209_; lean_object* v_bs_x27_210_; size_t v___x_211_; size_t v___x_212_; lean_object* v___x_213_; 
v_v_208_ = lean_array_uget(v_bs_206_, v_i_205_);
v___x_209_ = lean_unsigned_to_nat(0u);
v_bs_x27_210_ = lean_array_uset(v_bs_206_, v_i_205_, v___x_209_);
v___x_211_ = ((size_t)1ULL);
v___x_212_ = lean_usize_add(v_i_205_, v___x_211_);
v___x_213_ = lean_array_uset(v_bs_x27_210_, v_i_205_, v_v_208_);
v_i_205_ = v___x_212_;
v_bs_206_ = v___x_213_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1___boxed(lean_object* v_sz_215_, lean_object* v_i_216_, lean_object* v_bs_217_){
_start:
{
size_t v_sz_boxed_218_; size_t v_i_boxed_219_; lean_object* v_res_220_; 
v_sz_boxed_218_ = lean_unbox_usize(v_sz_215_);
lean_dec(v_sz_215_);
v_i_boxed_219_ = lean_unbox_usize(v_i_216_);
lean_dec(v_i_216_);
v_res_220_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_boxed_218_, v_i_boxed_219_, v_bs_217_);
return v_res_220_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_230_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__8));
v___x_231_ = lean_unsigned_to_nat(46u);
v___x_232_ = lean_unsigned_to_nat(193u);
v___x_233_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__7));
v___x_234_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__6));
v___x_235_ = l_mkPanicMessageWithDecl(v___x_234_, v___x_233_, v___x_232_, v___x_231_, v___x_230_);
return v___x_235_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(lean_object* v_context_238_, lean_object* v_d_239_){
_start:
{
lean_object* v___y_242_; lean_object* v___y_243_; lean_object* v___y_248_; lean_object* v_received_249_; lean_object* v___y_268_; lean_object* v_a_271_; 
switch(lean_obj_tag(v_d_239_))
{
case 3:
{
double v_n_295_; lean_object* v___x_296_; 
v_n_295_ = lean_ctor_get_float(v_d_239_, 0);
v___x_296_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_295_);
if (lean_obj_tag(v___x_296_) == 0)
{
lean_object* v___x_297_; 
v___x_297_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__11));
v_a_271_ = v___x_297_;
goto v___jp_270_;
}
else
{
lean_object* v_val_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_dec_ref_known(v_d_239_, 0);
v_val_298_ = lean_ctor_get(v___x_296_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_296_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_296_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_val_298_);
lean_dec(v___x_296_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set_tag(v___x_300_, 0);
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_val_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
case 5:
{
lean_object* v_i_306_; lean_object* v___x_307_; 
v_i_306_ = lean_ctor_get(v_d_239_, 0);
lean_inc(v_i_306_);
lean_dec_ref_known(v_d_239_, 1);
v___x_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_307_, 0, v_i_306_);
return v___x_307_;
}
default: 
{
lean_object* v___x_308_; 
v___x_308_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v_a_271_ = v___x_308_;
goto v___jp_270_;
}
}
v___jp_241_:
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_244_ = lean_string_append(v___y_242_, v___y_243_);
lean_dec_ref(v___y_243_);
v___x_245_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
v___x_246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
return v___x_246_;
}
v___jp_247_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_250_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_251_ = lean_string_append(v___x_250_, v_context_238_);
v___x_252_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__1));
v___x_253_ = lean_string_append(v___x_251_, v___x_252_);
v___x_254_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__2));
v___x_255_ = lean_string_append(v___x_253_, v___x_254_);
v___x_256_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__3));
v___x_257_ = lean_string_append(v___x_255_, v___x_256_);
v___x_258_ = lean_string_append(v___x_257_, v_received_249_);
lean_dec_ref(v_received_249_);
v___x_259_ = lean_string_utf8_byte_size(v___y_248_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__4));
v___x_263_ = lean_string_append(v___x_262_, v___y_248_);
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__5));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
v___y_242_ = v___x_258_;
v___y_243_ = v___x_265_;
goto v___jp_241_;
}
else
{
lean_object* v___x_266_; 
v___x_266_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___y_242_ = v___x_258_;
v___y_243_ = v___x_266_;
goto v___jp_241_;
}
}
v___jp_267_:
{
lean_object* v___x_269_; 
v___x_269_ = l_Lasm_JS_Data_describe(v_d_239_);
v___y_248_ = v___y_268_;
v_received_249_ = v___x_269_;
goto v___jp_247_;
}
v___jp_270_:
{
if (lean_obj_tag(v_d_239_) == 9)
{
lean_object* v_value_272_; lean_object* v_description_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v_value_272_ = lean_ctor_get(v_d_239_, 0);
v_description_273_ = lean_ctor_get(v_d_239_, 1);
v___x_274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_275_ = lean_string_dec_eq(v_description_273_, v___x_274_);
if (v___x_275_ == 0)
{
v___y_268_ = v_a_271_;
goto v___jp_267_;
}
else
{
lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_292_; 
lean_inc(v_value_272_);
v_isSharedCheck_292_ = !lean_is_exclusive(v_d_239_);
if (v_isSharedCheck_292_ == 0)
{
lean_object* v_unused_293_; lean_object* v_unused_294_; 
v_unused_293_ = lean_ctor_get(v_d_239_, 1);
lean_dec(v_unused_293_);
v_unused_294_ = lean_ctor_get(v_d_239_, 0);
lean_dec(v_unused_294_);
v___x_277_ = v_d_239_;
v_isShared_278_ = v_isSharedCheck_292_;
goto v_resetjp_276_;
}
else
{
lean_dec(v_d_239_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_292_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
uint32_t v___x_279_; uint64_t v___x_280_; lean_object* v___x_282_; 
v___x_279_ = 206;
v___x_280_ = 0ULL;
lean_inc(v_value_272_);
if (v_isShared_278_ == 0)
{
lean_ctor_set(v___x_277_, 1, v___x_274_);
v___x_282_ = v___x_277_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_value_272_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v___x_274_);
v___x_282_ = v_reuseFailAlloc_291_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
uint32_t v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lasm_js_value_handle(v_value_272_);
lean_dec(v_value_272_);
v___x_284_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_279_, v___x_280_, v___x_282_, v___x_283_);
lean_dec_ref(v___x_282_);
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
v___x_287_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9);
v___x_288_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_287_);
v___y_248_ = v_a_271_;
v_received_249_ = v___x_288_;
goto v___jp_247_;
}
else
{
lean_object* v___x_289_; 
v___x_289_ = lean_string_from_utf8_unchecked(v_a_285_);
v___y_248_ = v_a_271_;
v_received_249_ = v___x_289_;
goto v___jp_247_;
}
}
else
{
lean_object* v___x_290_; 
lean_dec_ref_known(v___x_284_, 1);
v___x_290_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__10));
v___y_248_ = v_a_271_;
v_received_249_ = v___x_290_;
goto v___jp_247_;
}
}
}
}
}
else
{
v___y_268_ = v_a_271_;
goto v___jp_267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___boxed(lean_object* v_context_309_, lean_object* v_d_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v_context_309_, v_d_310_);
lean_dec_ref(v_context_309_);
return v_res_312_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1(void){
_start:
{
uint8_t v___x_314_; uint64_t v___x_315_; 
v___x_314_ = 0;
v___x_315_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_314_);
return v___x_315_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(lean_object* v_b_316_, lean_object* v_args_317_, uint8_t v_await_318_){
_start:
{
uint64_t v___y_321_; uint64_t v___y_322_; uint64_t v___x_365_; uint64_t v___y_367_; 
v___x_365_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_318_ == 0)
{
uint64_t v___x_372_; 
v___x_372_ = 0ULL;
v___y_367_ = v___x_372_;
goto v___jp_366_;
}
else
{
uint64_t v___x_373_; 
v___x_373_ = 2ULL;
v___y_367_ = v___x_373_;
goto v___jp_366_;
}
v___jp_320_:
{
uint64_t v_flags_323_; uint32_t v___x_324_; lean_object* v___x_325_; uint32_t v___x_326_; lean_object* v___x_327_; 
v_flags_323_ = lean_uint64_lor(v___y_321_, v___y_322_);
v___x_324_ = 214;
v___x_325_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_316_, v_args_317_);
v___x_326_ = 0;
v___x_327_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_324_, v_flags_323_, v___x_325_, v___x_326_);
lean_dec(v___x_325_);
if (lean_obj_tag(v___x_327_) == 0)
{
if (lean_obj_tag(v___x_327_) == 0)
{
lean_object* v_a_328_; lean_object* v___x_329_; 
v_a_328_ = lean_ctor_get(v___x_327_, 0);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_327_, 1);
v___x_329_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_328_);
lean_dec(v_a_328_);
if (lean_obj_tag(v___x_329_) == 0)
{
lean_object* v_a_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v_a_330_ = lean_ctor_get(v___x_329_, 0);
lean_inc(v_a_330_);
lean_dec_ref_known(v___x_329_, 1);
v___x_331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_316_);
v___x_332_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v___x_331_, v_a_330_);
lean_dec_ref(v___x_331_);
return v___x_332_;
}
else
{
lean_object* v_a_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_340_; 
v_a_333_ = lean_ctor_get(v___x_329_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v___x_329_);
if (v_isSharedCheck_340_ == 0)
{
v___x_335_ = v___x_329_;
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_a_333_);
lean_dec(v___x_329_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_340_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_a_333_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
}
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
v_a_341_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_327_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_327_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
lean_ctor_set_tag(v___x_343_, 1);
v___x_346_ = v___x_343_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v_a_341_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
return v___x_346_;
}
}
}
}
else
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_364_; 
v_a_349_ = lean_ctor_get(v___x_327_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_327_);
if (v_isSharedCheck_364_ == 0)
{
v___x_351_ = v___x_327_;
v_isShared_352_ = v_isSharedCheck_364_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_327_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_364_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_353_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_354_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_316_);
v___x_355_ = lean_string_append(v___x_353_, v___x_354_);
lean_dec_ref(v___x_354_);
v___x_356_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_357_ = lean_string_append(v___x_355_, v___x_356_);
v___x_358_ = lean_io_error_to_string(v_a_349_);
v___x_359_ = lean_string_append(v___x_357_, v___x_358_);
lean_dec_ref(v___x_358_);
v___x_360_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
if (v_isShared_352_ == 0)
{
lean_ctor_set(v___x_351_, 0, v___x_360_);
v___x_362_ = v___x_351_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
v___jp_366_:
{
uint8_t v_construct_368_; uint64_t v___x_369_; 
v_construct_368_ = lean_ctor_get_uint8(v_b_316_, sizeof(void*)*4);
v___x_369_ = lean_uint64_lor(v___x_365_, v___y_367_);
if (v_construct_368_ == 0)
{
uint64_t v___x_370_; 
v___x_370_ = 0ULL;
v___y_321_ = v___x_369_;
v___y_322_ = v___x_370_;
goto v___jp_320_;
}
else
{
uint64_t v___x_371_; 
v___x_371_ = 4ULL;
v___y_321_ = v___x_369_;
v___y_322_ = v___x_371_;
goto v___jp_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___boxed(lean_object* v_b_374_, lean_object* v_args_375_, lean_object* v_await_376_, lean_object* v_a_377_){
_start:
{
uint8_t v_await_boxed_378_; lean_object* v_res_379_; 
v_await_boxed_378_ = lean_unbox(v_await_376_);
v_res_379_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v_b_374_, v_args_375_, v_await_boxed_378_);
lean_dec_ref(v_b_374_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(lean_object* v_v_389_){
_start:
{
uint8_t v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_391_ = 0;
v___x_392_ = lean_unsigned_to_nat(1u);
v___x_393_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__3));
v___x_394_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_395_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_395_, 0, v_v_389_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_mk_empty_array_with_capacity(v___x_392_);
v___x_397_ = lean_array_push(v___x_396_, v___x_395_);
v___x_398_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v___x_393_, v___x_397_, v___x_391_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___boxed(lean_object* v_v_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_v_399_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout(lean_object* v_handler_410_, lean_object* v_timeout_411_, lean_object* v_arguments_412_){
_start:
{
uint8_t v___x_414_; lean_object* v___x_415_; lean_object* v___y_417_; 
v___x_414_ = 0;
v___x_415_ = ((lean_object*)(l_Lasm_JS_Web_setTimeout___closed__2));
if (lean_obj_tag(v_handler_410_) == 0)
{
lean_object* v_value_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
v_value_438_ = lean_ctor_get(v_handler_410_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v_handler_410_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v_handler_410_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_value_438_);
lean_dec(v_handler_410_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set_tag(v___x_440_, 4);
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_value_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
v___y_417_ = v___x_443_;
goto v___jp_416_;
}
}
}
else
{
lean_object* v_value_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_value_446_ = lean_ctor_get(v_handler_410_, 0);
lean_inc(v_value_446_);
lean_dec_ref(v_handler_410_);
v___x_447_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_448_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_448_, 0, v_value_446_);
lean_ctor_set(v___x_448_, 1, v___x_447_);
v___y_417_ = v___x_448_;
goto v___jp_416_;
}
v___jp_416_:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; size_t v_sz_423_; size_t v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_418_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_411_);
v___x_419_ = lean_unsigned_to_nat(2u);
v___x_420_ = lean_mk_empty_array_with_capacity(v___x_419_);
v___x_421_ = lean_array_push(v___x_420_, v___y_417_);
v___x_422_ = lean_array_push(v___x_421_, v___x_418_);
v_sz_423_ = lean_array_size(v_arguments_412_);
v___x_424_ = ((size_t)0ULL);
v___x_425_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_423_, v___x_424_, v_arguments_412_);
v___x_426_ = l_Lasm_JS_Web_Support_argsWith(v___x_422_, v___x_425_);
lean_dec_ref(v___x_425_);
v___x_427_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_415_, v___x_426_, v___x_414_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_429_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_427_, 1);
v___x_429_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_428_);
return v___x_429_;
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
v_a_430_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_427_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_427_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout___boxed(lean_object* v_handler_449_, lean_object* v_timeout_450_, lean_object* v_arguments_451_, lean_object* v_a_452_){
_start:
{
lean_object* v_res_453_; 
v_res_453_ = l_Lasm_JS_Web_setTimeout(v_handler_449_, v_timeout_450_, v_arguments_451_);
return v_res_453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(lean_object* v_b_454_, lean_object* v_args_455_, uint8_t v_await_456_){
_start:
{
uint64_t v___y_459_; uint64_t v___y_460_; uint64_t v___x_501_; uint64_t v___y_503_; 
v___x_501_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_456_ == 0)
{
uint64_t v___x_508_; 
v___x_508_ = 0ULL;
v___y_503_ = v___x_508_;
goto v___jp_502_;
}
else
{
uint64_t v___x_509_; 
v___x_509_ = 2ULL;
v___y_503_ = v___x_509_;
goto v___jp_502_;
}
v___jp_458_:
{
uint64_t v_flags_461_; uint32_t v___x_462_; lean_object* v___x_463_; uint32_t v___x_464_; lean_object* v___x_465_; 
v_flags_461_ = lean_uint64_lor(v___y_459_, v___y_460_);
v___x_462_ = 214;
v___x_463_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_454_, v_args_455_);
v___x_464_ = 0;
v___x_465_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_462_, v_flags_461_, v___x_463_, v___x_464_);
lean_dec(v___x_463_);
if (lean_obj_tag(v___x_465_) == 0)
{
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v_a_466_; lean_object* v___x_467_; 
v_a_466_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_466_);
lean_dec_ref_known(v___x_465_, 1);
v___x_467_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_466_);
lean_dec(v_a_466_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v___x_468_; 
lean_dec_ref_known(v___x_467_, 1);
v___x_468_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_468_;
}
else
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_476_; 
v_a_469_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_476_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_476_ == 0)
{
v___x_471_ = v___x_467_;
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_467_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_476_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_474_; 
if (v_isShared_472_ == 0)
{
v___x_474_ = v___x_471_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v_a_469_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
v_a_477_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_465_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_465_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
lean_ctor_set_tag(v___x_479_, 1);
v___x_482_ = v___x_479_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_a_477_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
}
}
else
{
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_500_; 
v_a_485_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_500_ == 0)
{
v___x_487_ = v___x_465_;
v_isShared_488_ = v_isSharedCheck_500_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_465_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_500_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_498_; 
v___x_489_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_490_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_454_);
v___x_491_ = lean_string_append(v___x_489_, v___x_490_);
lean_dec_ref(v___x_490_);
v___x_492_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_493_ = lean_string_append(v___x_491_, v___x_492_);
v___x_494_ = lean_io_error_to_string(v_a_485_);
v___x_495_ = lean_string_append(v___x_493_, v___x_494_);
lean_dec_ref(v___x_494_);
v___x_496_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_496_, 0, v___x_495_);
if (v_isShared_488_ == 0)
{
lean_ctor_set(v___x_487_, 0, v___x_496_);
v___x_498_ = v___x_487_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
}
}
v___jp_502_:
{
uint8_t v_construct_504_; uint64_t v___x_505_; 
v_construct_504_ = lean_ctor_get_uint8(v_b_454_, sizeof(void*)*4);
v___x_505_ = lean_uint64_lor(v___x_501_, v___y_503_);
if (v_construct_504_ == 0)
{
uint64_t v___x_506_; 
v___x_506_ = 0ULL;
v___y_459_ = v___x_505_;
v___y_460_ = v___x_506_;
goto v___jp_458_;
}
else
{
uint64_t v___x_507_; 
v___x_507_ = 4ULL;
v___y_459_ = v___x_505_;
v___y_460_ = v___x_507_;
goto v___jp_458_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0___boxed(lean_object* v_b_510_, lean_object* v_args_511_, lean_object* v_await_512_, lean_object* v_a_513_){
_start:
{
uint8_t v_await_boxed_514_; lean_object* v_res_515_; 
v_await_boxed_514_ = lean_unbox(v_await_512_);
v_res_515_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v_b_510_, v_args_511_, v_await_boxed_514_);
lean_dec_ref(v_b_510_);
return v_res_515_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout(lean_object* v_id_524_){
_start:
{
uint8_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
v___x_526_ = 0;
v___x_527_ = lean_unsigned_to_nat(1u);
v___x_528_ = ((lean_object*)(l_Lasm_JS_Web_clearTimeout___closed__2));
v___x_529_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_524_);
v___x_530_ = lean_mk_empty_array_with_capacity(v___x_527_);
v___x_531_ = lean_array_push(v___x_530_, v___x_529_);
v___x_532_ = l_Lasm_JS_Web_Support_args(v___x_531_);
v___x_533_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_528_, v___x_532_, v___x_526_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout___boxed(lean_object* v_id_534_, lean_object* v_a_535_){
_start:
{
lean_object* v_res_536_; 
v_res_536_ = l_Lasm_JS_Web_clearTimeout(v_id_534_);
return v_res_536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval(lean_object* v_handler_545_, lean_object* v_timeout_546_, lean_object* v_arguments_547_){
_start:
{
uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___y_552_; 
v___x_549_ = 0;
v___x_550_ = ((lean_object*)(l_Lasm_JS_Web_setInterval___closed__2));
if (lean_obj_tag(v_handler_545_) == 0)
{
lean_object* v_value_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_value_573_ = lean_ctor_get(v_handler_545_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v_handler_545_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v_handler_545_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_value_573_);
lean_dec(v_handler_545_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
lean_ctor_set_tag(v___x_575_, 4);
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_value_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
v___y_552_ = v___x_578_;
goto v___jp_551_;
}
}
}
else
{
lean_object* v_value_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_value_581_ = lean_ctor_get(v_handler_545_, 0);
lean_inc(v_value_581_);
lean_dec_ref(v_handler_545_);
v___x_582_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_583_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_583_, 0, v_value_581_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___y_552_ = v___x_583_;
goto v___jp_551_;
}
v___jp_551_:
{
lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; size_t v_sz_558_; size_t v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_553_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_546_);
v___x_554_ = lean_unsigned_to_nat(2u);
v___x_555_ = lean_mk_empty_array_with_capacity(v___x_554_);
v___x_556_ = lean_array_push(v___x_555_, v___y_552_);
v___x_557_ = lean_array_push(v___x_556_, v___x_553_);
v_sz_558_ = lean_array_size(v_arguments_547_);
v___x_559_ = ((size_t)0ULL);
v___x_560_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_558_, v___x_559_, v_arguments_547_);
v___x_561_ = l_Lasm_JS_Web_Support_argsWith(v___x_557_, v___x_560_);
lean_dec_ref(v___x_560_);
v___x_562_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_550_, v___x_561_, v___x_549_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_564_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref_known(v___x_562_, 1);
v___x_564_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_563_);
return v___x_564_;
}
else
{
lean_object* v_a_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_572_; 
v_a_565_ = lean_ctor_get(v___x_562_, 0);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_562_);
if (v_isSharedCheck_572_ == 0)
{
v___x_567_ = v___x_562_;
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_a_565_);
lean_dec(v___x_562_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_572_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_570_; 
if (v_isShared_568_ == 0)
{
v___x_570_ = v___x_567_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_a_565_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval___boxed(lean_object* v_handler_584_, lean_object* v_timeout_585_, lean_object* v_arguments_586_, lean_object* v_a_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lasm_JS_Web_setInterval(v_handler_584_, v_timeout_585_, v_arguments_586_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval(lean_object* v_id_597_){
_start:
{
uint8_t v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_599_ = 0;
v___x_600_ = lean_unsigned_to_nat(1u);
v___x_601_ = ((lean_object*)(l_Lasm_JS_Web_clearInterval___closed__2));
v___x_602_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_597_);
v___x_603_ = lean_mk_empty_array_with_capacity(v___x_600_);
v___x_604_ = lean_array_push(v___x_603_, v___x_602_);
v___x_605_ = l_Lasm_JS_Web_Support_args(v___x_604_);
v___x_606_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_601_, v___x_605_, v___x_599_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval___boxed(lean_object* v_id_607_, lean_object* v_a_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lasm_JS_Web_clearInterval(v_id_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask(lean_object* v_callback_618_){
_start:
{
uint8_t v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_620_ = 0;
v___x_621_ = lean_unsigned_to_nat(1u);
v___x_622_ = ((lean_object*)(l_Lasm_JS_Web_queueMicrotask___closed__2));
v___x_623_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_624_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_624_, 0, v_callback_618_);
lean_ctor_set(v___x_624_, 1, v___x_623_);
v___x_625_ = lean_mk_empty_array_with_capacity(v___x_621_);
v___x_626_ = lean_array_push(v___x_625_, v___x_624_);
v___x_627_ = l_Lasm_JS_Web_Support_args(v___x_626_);
v___x_628_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_622_, v___x_627_, v___x_620_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask___boxed(lean_object* v_callback_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lasm_JS_Web_queueMicrotask(v_callback_629_);
return v_res_631_;
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
