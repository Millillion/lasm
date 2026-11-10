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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringTimerHandler___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeStringTimerHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeStringTimerHandler___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeStringTimerHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeStringTimerHandler___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeStringTimerHandler = (const lean_object*)&l_Lasm_JS_Web_instCoeStringTimerHandler___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___lam__0(lean_object*);
static const lean_closure_object l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___closed__0 = (const lean_object*)&l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_JS_Web_instCoeJSFunctionTimerHandler = (const lean_object*)&l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___closed__0_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringTimerHandler___lam__0(lean_object* v_value_64_){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v_value_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___lam__0(lean_object* v_value_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_69_, 0, v_value_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSVoidFunction___lam__0(lean_object* v_x_72_){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; 
v___x_73_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_74_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_74_, 0, v_x_72_);
lean_ctor_set(v___x_74_, 1, v___x_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0(lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 9)
{
lean_object* v_value_80_; lean_object* v___x_81_; 
v_value_80_ = lean_ctor_get(v_x_79_, 0);
lean_inc(v_value_80_);
v___x_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_81_, 0, v_value_80_);
return v___x_81_;
}
else
{
lean_object* v___x_82_; 
v___x_82_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___closed__0));
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___boxed(lean_object* v_x_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lasm_JS_Web_instFromJSVoidFunction___lam__0(v_x_83_);
lean_dec(v_x_83_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0(lean_object* v_x_96_){
_start:
{
if (lean_obj_tag(v_x_96_) == 0)
{
lean_object* v_a_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
v_a_98_ = lean_ctor_get(v_x_96_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v_x_96_);
if (v_isSharedCheck_106_ == 0)
{
v___x_100_ = v_x_96_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_a_98_);
lean_dec(v_x_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_103_; 
if (v_isShared_101_ == 0)
{
v___x_103_ = v___x_100_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_a_98_);
v___x_103_ = v_reuseFailAlloc_105_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; 
v___x_104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_104_, 0, v___x_103_);
return v___x_104_;
}
}
}
else
{
lean_object* v___x_107_; 
lean_dec_ref_known(v_x_96_, 1);
v___x_107_ = ((lean_object*)(l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__1));
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___boxed(lean_object* v_x_108_, lean_object* v___y_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lasm_JS_Web_VoidFunction_ofFn___lam__0(v_x_108_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1(lean_object* v_f_111_, lean_object* v___f_112_, lean_object* v_x_113_){
_start:
{
lean_object* v___x_115_; uint8_t v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_115_ = lean_unsigned_to_nat(0u);
v___x_116_ = 0;
v___x_117_ = lean_apply_1(v_f_111_, lean_box(0));
v___x_118_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_115_, v___x_116_, v___x_117_, v___f_112_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed(lean_object* v_f_119_, lean_object* v___f_120_, lean_object* v_x_121_, lean_object* v___y_122_){
_start:
{
lean_object* v_res_123_; 
v_res_123_ = l_Lasm_JS_Web_VoidFunction_ofFn___lam__1(v_f_119_, v___f_120_, v_x_121_);
lean_dec_ref(v_x_121_);
return v_res_123_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn(lean_object* v_f_125_){
_start:
{
lean_object* v___f_127_; lean_object* v___f_128_; lean_object* v___x_129_; 
v___f_127_ = ((lean_object*)(l_Lasm_JS_Web_VoidFunction_ofFn___closed__0));
v___f_128_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_128_, 0, v_f_125_);
lean_closure_set(v___f_128_, 1, v___f_127_);
v___x_129_ = l_Lasm_JS_Function_ofFn(v___f_128_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_129_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_129_);
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
v_reuseFailAlloc_136_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_145_; 
v_a_138_ = lean_ctor_get(v___x_129_, 0);
v_isSharedCheck_145_ = !lean_is_exclusive(v___x_129_);
if (v_isSharedCheck_145_ == 0)
{
v___x_140_ = v___x_129_;
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_a_138_);
lean_dec(v___x_129_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_145_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v___x_143_; 
if (v_isShared_141_ == 0)
{
v___x_143_ = v___x_140_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_a_138_);
v___x_143_ = v_reuseFailAlloc_144_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
return v___x_143_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___boxed(lean_object* v_f_146_, lean_object* v_a_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lasm_JS_Web_VoidFunction_ofFn(v_f_146_);
return v_res_148_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(lean_object* v_f_149_, lean_object* v_x_150_){
_start:
{
lean_object* v___x_152_; 
v___x_152_ = lean_apply_1(v_f_149_, lean_box(0));
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_160_; 
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_160_ == 0)
{
lean_object* v_unused_161_; 
v_unused_161_ = lean_ctor_get(v___x_152_, 0);
lean_dec(v_unused_161_);
v___x_154_ = v___x_152_;
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
else
{
lean_dec(v___x_152_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_160_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_156_ = lean_box(0);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 0, v___x_156_);
v___x_158_ = v___x_154_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v___x_156_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
v_a_162_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_152_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_152_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_170_, lean_object* v_x_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(v_f_170_, v_x_171_);
lean_dec_ref(v_x_171_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn(lean_object* v_f_174_){
_start:
{
lean_object* v___f_176_; lean_object* v___x_177_; 
v___f_176_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_176_, 0, v_f_174_);
v___x_177_ = l_Lasm_JS_Function_ofSyncFn(v___f_176_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_177_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_177_);
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
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
v_a_186_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_177_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_177_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___boxed(lean_object* v_f_194_, lean_object* v_a_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn(v_f_194_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(lean_object* v_x_197_){
_start:
{
if (lean_obj_tag(v_x_197_) == 0)
{
lean_object* v___x_198_; 
v___x_198_ = lean_box(0);
return v___x_198_;
}
else
{
lean_object* v_val_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_211_; 
v_val_199_ = lean_ctor_get(v_x_197_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v_x_197_);
if (v_isSharedCheck_211_ == 0)
{
v___x_201_ = v_x_197_;
v_isShared_202_ = v_isSharedCheck_211_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_val_199_);
lean_dec(v_x_197_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_211_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_203_ = lean_nat_abs(v_val_199_);
v___x_204_ = lean_cstr_to_nat("9007199254740991");
v___x_205_ = lean_nat_dec_le(v___x_203_, v___x_204_);
lean_dec(v___x_203_);
if (v___x_205_ == 0)
{
lean_object* v___x_207_; 
if (v_isShared_202_ == 0)
{
lean_ctor_set_tag(v___x_201_, 5);
v___x_207_ = v___x_201_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_val_199_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
else
{
double v___x_209_; lean_object* v___x_210_; 
lean_del_object(v___x_201_);
v___x_209_ = l_Float_ofInt(v_val_199_);
lean_dec(v_val_199_);
v___x_210_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(size_t v_sz_212_, size_t v_i_213_, lean_object* v_bs_214_){
_start:
{
uint8_t v___x_215_; 
v___x_215_ = lean_usize_dec_lt(v_i_213_, v_sz_212_);
if (v___x_215_ == 0)
{
return v_bs_214_;
}
else
{
lean_object* v_v_216_; lean_object* v___x_217_; lean_object* v_bs_x27_218_; size_t v___x_219_; size_t v___x_220_; lean_object* v___x_221_; 
v_v_216_ = lean_array_uget(v_bs_214_, v_i_213_);
v___x_217_ = lean_unsigned_to_nat(0u);
v_bs_x27_218_ = lean_array_uset(v_bs_214_, v_i_213_, v___x_217_);
v___x_219_ = ((size_t)1ULL);
v___x_220_ = lean_usize_add(v_i_213_, v___x_219_);
v___x_221_ = lean_array_uset(v_bs_x27_218_, v_i_213_, v_v_216_);
v_i_213_ = v___x_220_;
v_bs_214_ = v___x_221_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1___boxed(lean_object* v_sz_223_, lean_object* v_i_224_, lean_object* v_bs_225_){
_start:
{
size_t v_sz_boxed_226_; size_t v_i_boxed_227_; lean_object* v_res_228_; 
v_sz_boxed_226_ = lean_unbox_usize(v_sz_223_);
lean_dec(v_sz_223_);
v_i_boxed_227_ = lean_unbox_usize(v_i_224_);
lean_dec(v_i_224_);
v_res_228_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_boxed_226_, v_i_boxed_227_, v_bs_225_);
return v_res_228_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_238_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__8));
v___x_239_ = lean_unsigned_to_nat(46u);
v___x_240_ = lean_unsigned_to_nat(193u);
v___x_241_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__7));
v___x_242_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__6));
v___x_243_ = l_mkPanicMessageWithDecl(v___x_242_, v___x_241_, v___x_240_, v___x_239_, v___x_238_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(lean_object* v_context_246_, lean_object* v_d_247_){
_start:
{
lean_object* v___y_250_; lean_object* v___y_251_; lean_object* v___y_256_; lean_object* v_received_257_; lean_object* v___y_276_; lean_object* v_a_279_; 
switch(lean_obj_tag(v_d_247_))
{
case 3:
{
double v_n_303_; lean_object* v___x_304_; 
v_n_303_ = lean_ctor_get_float(v_d_247_, 0);
v___x_304_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_303_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v___x_305_; 
v___x_305_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__11));
v_a_279_ = v___x_305_;
goto v___jp_278_;
}
else
{
lean_object* v_val_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec_ref_known(v_d_247_, 0);
v_val_306_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_313_ == 0)
{
v___x_308_ = v___x_304_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_val_306_);
lean_dec(v___x_304_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
lean_ctor_set_tag(v___x_308_, 0);
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_val_306_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
case 5:
{
lean_object* v_i_314_; lean_object* v___x_315_; 
v_i_314_ = lean_ctor_get(v_d_247_, 0);
lean_inc(v_i_314_);
lean_dec_ref_known(v_d_247_, 1);
v___x_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_315_, 0, v_i_314_);
return v___x_315_;
}
default: 
{
lean_object* v___x_316_; 
v___x_316_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v_a_279_ = v___x_316_;
goto v___jp_278_;
}
}
v___jp_249_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_string_append(v___y_250_, v___y_251_);
lean_dec_ref(v___y_251_);
v___x_253_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
v___x_254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
v___jp_255_:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_258_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_259_ = lean_string_append(v___x_258_, v_context_246_);
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__1));
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__2));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__3));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
v___x_266_ = lean_string_append(v___x_265_, v_received_257_);
lean_dec_ref(v_received_257_);
v___x_267_ = lean_string_utf8_byte_size(v___y_256_);
v___x_268_ = lean_unsigned_to_nat(0u);
v___x_269_ = lean_nat_dec_eq(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_270_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__4));
v___x_271_ = lean_string_append(v___x_270_, v___y_256_);
v___x_272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__5));
v___x_273_ = lean_string_append(v___x_271_, v___x_272_);
v___y_250_ = v___x_266_;
v___y_251_ = v___x_273_;
goto v___jp_249_;
}
else
{
lean_object* v___x_274_; 
v___x_274_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___y_250_ = v___x_266_;
v___y_251_ = v___x_274_;
goto v___jp_249_;
}
}
v___jp_275_:
{
lean_object* v___x_277_; 
v___x_277_ = l_Lasm_JS_Data_describe(v_d_247_);
v___y_256_ = v___y_276_;
v_received_257_ = v___x_277_;
goto v___jp_255_;
}
v___jp_278_:
{
if (lean_obj_tag(v_d_247_) == 9)
{
lean_object* v_value_280_; lean_object* v_description_281_; lean_object* v___x_282_; uint8_t v___x_283_; 
v_value_280_ = lean_ctor_get(v_d_247_, 0);
v_description_281_ = lean_ctor_get(v_d_247_, 1);
v___x_282_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_283_ = lean_string_dec_eq(v_description_281_, v___x_282_);
if (v___x_283_ == 0)
{
v___y_276_ = v_a_279_;
goto v___jp_275_;
}
else
{
lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_300_; 
lean_inc(v_value_280_);
v_isSharedCheck_300_ = !lean_is_exclusive(v_d_247_);
if (v_isSharedCheck_300_ == 0)
{
lean_object* v_unused_301_; lean_object* v_unused_302_; 
v_unused_301_ = lean_ctor_get(v_d_247_, 1);
lean_dec(v_unused_301_);
v_unused_302_ = lean_ctor_get(v_d_247_, 0);
lean_dec(v_unused_302_);
v___x_285_ = v_d_247_;
v_isShared_286_ = v_isSharedCheck_300_;
goto v_resetjp_284_;
}
else
{
lean_dec(v_d_247_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_300_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
uint32_t v___x_287_; uint64_t v___x_288_; lean_object* v___x_290_; 
v___x_287_ = 206;
v___x_288_ = 0ULL;
lean_inc(v_value_280_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 1, v___x_282_);
v___x_290_ = v___x_285_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_value_280_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_282_);
v___x_290_ = v_reuseFailAlloc_299_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
uint32_t v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lasm_js_value_handle(v_value_280_);
lean_dec(v_value_280_);
v___x_292_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_287_, v___x_288_, v___x_290_, v___x_291_);
lean_dec_ref(v___x_290_);
if (lean_obj_tag(v___x_292_) == 0)
{
lean_object* v_a_293_; uint8_t v___x_294_; 
v_a_293_ = lean_ctor_get(v___x_292_, 0);
lean_inc(v_a_293_);
lean_dec_ref_known(v___x_292_, 1);
v___x_294_ = lean_string_validate_utf8(v_a_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; 
lean_dec(v_a_293_);
v___x_295_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9);
v___x_296_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_295_);
v___y_256_ = v_a_279_;
v_received_257_ = v___x_296_;
goto v___jp_255_;
}
else
{
lean_object* v___x_297_; 
v___x_297_ = lean_string_from_utf8_unchecked(v_a_293_);
v___y_256_ = v_a_279_;
v_received_257_ = v___x_297_;
goto v___jp_255_;
}
}
else
{
lean_object* v___x_298_; 
lean_dec_ref_known(v___x_292_, 1);
v___x_298_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__10));
v___y_256_ = v_a_279_;
v_received_257_ = v___x_298_;
goto v___jp_255_;
}
}
}
}
}
else
{
v___y_276_ = v_a_279_;
goto v___jp_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___boxed(lean_object* v_context_317_, lean_object* v_d_318_, lean_object* v_a_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v_context_317_, v_d_318_);
lean_dec_ref(v_context_317_);
return v_res_320_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1(void){
_start:
{
uint8_t v___x_322_; uint64_t v___x_323_; 
v___x_322_ = 0;
v___x_323_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(lean_object* v_b_324_, lean_object* v_args_325_, uint8_t v_await_326_){
_start:
{
uint64_t v___y_329_; uint64_t v___y_330_; uint64_t v___x_373_; uint64_t v___y_375_; 
v___x_373_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_326_ == 0)
{
uint64_t v___x_380_; 
v___x_380_ = 0ULL;
v___y_375_ = v___x_380_;
goto v___jp_374_;
}
else
{
uint64_t v___x_381_; 
v___x_381_ = 2ULL;
v___y_375_ = v___x_381_;
goto v___jp_374_;
}
v___jp_328_:
{
uint64_t v_flags_331_; uint32_t v___x_332_; lean_object* v___x_333_; uint32_t v___x_334_; lean_object* v___x_335_; 
v_flags_331_ = lean_uint64_lor(v___y_329_, v___y_330_);
v___x_332_ = 214;
v___x_333_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_324_, v_args_325_);
v___x_334_ = 0;
v___x_335_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_332_, v_flags_331_, v___x_333_, v___x_334_);
lean_dec(v___x_333_);
if (lean_obj_tag(v___x_335_) == 0)
{
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_337_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_336_);
lean_dec_ref_known(v___x_335_, 1);
v___x_337_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_336_);
lean_dec(v_a_336_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_339_; lean_object* v___x_340_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_337_, 1);
v___x_339_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_324_);
v___x_340_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v___x_339_, v_a_338_);
lean_dec_ref(v___x_339_);
return v___x_340_;
}
else
{
lean_object* v_a_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_348_; 
v_a_341_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_348_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_348_ == 0)
{
v___x_343_ = v___x_337_;
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_a_341_);
lean_dec(v___x_337_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_348_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___x_346_; 
if (v_isShared_344_ == 0)
{
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
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_356_; 
v_a_349_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_356_ == 0)
{
v___x_351_ = v___x_335_;
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_335_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_354_; 
if (v_isShared_352_ == 0)
{
lean_ctor_set_tag(v___x_351_, 1);
v___x_354_ = v___x_351_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_a_349_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
else
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_372_; 
v_a_357_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_372_ == 0)
{
v___x_359_ = v___x_335_;
v_isShared_360_ = v_isSharedCheck_372_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_335_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_372_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_361_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_362_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_324_);
v___x_363_ = lean_string_append(v___x_361_, v___x_362_);
lean_dec_ref(v___x_362_);
v___x_364_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_365_ = lean_string_append(v___x_363_, v___x_364_);
v___x_366_ = lean_io_error_to_string(v_a_357_);
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
lean_dec_ref(v___x_366_);
v___x_368_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_368_, 0, v___x_367_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_368_);
v___x_370_ = v___x_359_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_368_);
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
v___jp_374_:
{
uint8_t v_construct_376_; uint64_t v___x_377_; 
v_construct_376_ = lean_ctor_get_uint8(v_b_324_, sizeof(void*)*4);
v___x_377_ = lean_uint64_lor(v___x_373_, v___y_375_);
if (v_construct_376_ == 0)
{
uint64_t v___x_378_; 
v___x_378_ = 0ULL;
v___y_329_ = v___x_377_;
v___y_330_ = v___x_378_;
goto v___jp_328_;
}
else
{
uint64_t v___x_379_; 
v___x_379_ = 4ULL;
v___y_329_ = v___x_377_;
v___y_330_ = v___x_379_;
goto v___jp_328_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___boxed(lean_object* v_b_382_, lean_object* v_args_383_, lean_object* v_await_384_, lean_object* v_a_385_){
_start:
{
uint8_t v_await_boxed_386_; lean_object* v_res_387_; 
v_await_boxed_386_ = lean_unbox(v_await_384_);
v_res_387_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v_b_382_, v_args_383_, v_await_boxed_386_);
lean_dec_ref(v_b_382_);
return v_res_387_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(lean_object* v_v_397_){
_start:
{
uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_399_ = 0;
v___x_400_ = lean_unsigned_to_nat(1u);
v___x_401_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__3));
v___x_402_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_403_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_403_, 0, v_v_397_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = lean_mk_empty_array_with_capacity(v___x_400_);
v___x_405_ = lean_array_push(v___x_404_, v___x_403_);
v___x_406_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v___x_401_, v___x_405_, v___x_399_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___boxed(lean_object* v_v_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_v_407_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout(lean_object* v_handler_418_, lean_object* v_timeout_419_, lean_object* v_arguments_420_){
_start:
{
uint8_t v___x_422_; lean_object* v___x_423_; lean_object* v___y_425_; 
v___x_422_ = 0;
v___x_423_ = ((lean_object*)(l_Lasm_JS_Web_setTimeout___closed__2));
if (lean_obj_tag(v_handler_418_) == 0)
{
lean_object* v_value_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
v_value_446_ = lean_ctor_get(v_handler_418_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v_handler_418_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v_handler_418_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_value_446_);
lean_dec(v_handler_418_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
lean_ctor_set_tag(v___x_448_, 4);
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_value_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
v___y_425_ = v___x_451_;
goto v___jp_424_;
}
}
}
else
{
lean_object* v_value_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
v_value_454_ = lean_ctor_get(v_handler_418_, 0);
lean_inc(v_value_454_);
lean_dec_ref(v_handler_418_);
v___x_455_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_456_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_456_, 0, v_value_454_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___y_425_ = v___x_456_;
goto v___jp_424_;
}
v___jp_424_:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; size_t v_sz_431_; size_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_426_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_419_);
v___x_427_ = lean_unsigned_to_nat(2u);
v___x_428_ = lean_mk_empty_array_with_capacity(v___x_427_);
v___x_429_ = lean_array_push(v___x_428_, v___y_425_);
v___x_430_ = lean_array_push(v___x_429_, v___x_426_);
v_sz_431_ = lean_array_size(v_arguments_420_);
v___x_432_ = ((size_t)0ULL);
v___x_433_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_431_, v___x_432_, v_arguments_420_);
v___x_434_ = l_Lasm_JS_Web_Support_argsWith(v___x_430_, v___x_433_);
lean_dec_ref(v___x_433_);
v___x_435_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_423_, v___x_434_, v___x_422_);
if (lean_obj_tag(v___x_435_) == 0)
{
lean_object* v_a_436_; lean_object* v___x_437_; 
v_a_436_ = lean_ctor_get(v___x_435_, 0);
lean_inc(v_a_436_);
lean_dec_ref_known(v___x_435_, 1);
v___x_437_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_436_);
return v___x_437_;
}
else
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_445_; 
v_a_438_ = lean_ctor_get(v___x_435_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_435_);
if (v_isSharedCheck_445_ == 0)
{
v___x_440_ = v___x_435_;
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_435_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_445_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_443_; 
if (v_isShared_441_ == 0)
{
v___x_443_ = v___x_440_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_a_438_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout___boxed(lean_object* v_handler_457_, lean_object* v_timeout_458_, lean_object* v_arguments_459_, lean_object* v_a_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lasm_JS_Web_setTimeout(v_handler_457_, v_timeout_458_, v_arguments_459_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(lean_object* v_b_462_, lean_object* v_args_463_, uint8_t v_await_464_){
_start:
{
uint64_t v___y_467_; uint64_t v___y_468_; uint64_t v___x_509_; uint64_t v___y_511_; 
v___x_509_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_464_ == 0)
{
uint64_t v___x_516_; 
v___x_516_ = 0ULL;
v___y_511_ = v___x_516_;
goto v___jp_510_;
}
else
{
uint64_t v___x_517_; 
v___x_517_ = 2ULL;
v___y_511_ = v___x_517_;
goto v___jp_510_;
}
v___jp_466_:
{
uint64_t v_flags_469_; uint32_t v___x_470_; lean_object* v___x_471_; uint32_t v___x_472_; lean_object* v___x_473_; 
v_flags_469_ = lean_uint64_lor(v___y_467_, v___y_468_);
v___x_470_ = 214;
v___x_471_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_462_, v_args_463_);
v___x_472_ = 0;
v___x_473_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_470_, v_flags_469_, v___x_471_, v___x_472_);
lean_dec(v___x_471_);
if (lean_obj_tag(v___x_473_) == 0)
{
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_475_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
lean_inc(v_a_474_);
lean_dec_ref_known(v___x_473_, 1);
v___x_475_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_474_);
lean_dec(v_a_474_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v___x_476_; 
lean_dec_ref_known(v___x_475_, 1);
v___x_476_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_476_;
}
else
{
lean_object* v_a_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_484_; 
v_a_477_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_484_ == 0)
{
v___x_479_ = v___x_475_;
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_a_477_);
lean_dec(v___x_475_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_484_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_482_; 
if (v_isShared_480_ == 0)
{
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
lean_object* v_a_485_; lean_object* v___x_487_; uint8_t v_isShared_488_; uint8_t v_isSharedCheck_492_; 
v_a_485_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_492_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_492_ == 0)
{
v___x_487_ = v___x_473_;
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
else
{
lean_inc(v_a_485_);
lean_dec(v___x_473_);
v___x_487_ = lean_box(0);
v_isShared_488_ = v_isSharedCheck_492_;
goto v_resetjp_486_;
}
v_resetjp_486_:
{
lean_object* v___x_490_; 
if (v_isShared_488_ == 0)
{
lean_ctor_set_tag(v___x_487_, 1);
v___x_490_ = v___x_487_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_a_485_);
v___x_490_ = v_reuseFailAlloc_491_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
return v___x_490_;
}
}
}
}
else
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_508_; 
v_a_493_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_508_ == 0)
{
v___x_495_ = v___x_473_;
v_isShared_496_ = v_isSharedCheck_508_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___x_473_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_508_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
v___x_497_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_498_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_462_);
v___x_499_ = lean_string_append(v___x_497_, v___x_498_);
lean_dec_ref(v___x_498_);
v___x_500_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_501_ = lean_string_append(v___x_499_, v___x_500_);
v___x_502_ = lean_io_error_to_string(v_a_493_);
v___x_503_ = lean_string_append(v___x_501_, v___x_502_);
lean_dec_ref(v___x_502_);
v___x_504_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_504_, 0, v___x_503_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v___x_504_);
v___x_506_ = v___x_495_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v___x_504_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
v___jp_510_:
{
uint8_t v_construct_512_; uint64_t v___x_513_; 
v_construct_512_ = lean_ctor_get_uint8(v_b_462_, sizeof(void*)*4);
v___x_513_ = lean_uint64_lor(v___x_509_, v___y_511_);
if (v_construct_512_ == 0)
{
uint64_t v___x_514_; 
v___x_514_ = 0ULL;
v___y_467_ = v___x_513_;
v___y_468_ = v___x_514_;
goto v___jp_466_;
}
else
{
uint64_t v___x_515_; 
v___x_515_ = 4ULL;
v___y_467_ = v___x_513_;
v___y_468_ = v___x_515_;
goto v___jp_466_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0___boxed(lean_object* v_b_518_, lean_object* v_args_519_, lean_object* v_await_520_, lean_object* v_a_521_){
_start:
{
uint8_t v_await_boxed_522_; lean_object* v_res_523_; 
v_await_boxed_522_ = lean_unbox(v_await_520_);
v_res_523_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v_b_518_, v_args_519_, v_await_boxed_522_);
lean_dec_ref(v_b_518_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout(lean_object* v_id_532_){
_start:
{
uint8_t v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_534_ = 0;
v___x_535_ = lean_unsigned_to_nat(1u);
v___x_536_ = ((lean_object*)(l_Lasm_JS_Web_clearTimeout___closed__2));
v___x_537_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_532_);
v___x_538_ = lean_mk_empty_array_with_capacity(v___x_535_);
v___x_539_ = lean_array_push(v___x_538_, v___x_537_);
v___x_540_ = l_Lasm_JS_Web_Support_args(v___x_539_);
v___x_541_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_536_, v___x_540_, v___x_534_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout___boxed(lean_object* v_id_542_, lean_object* v_a_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lasm_JS_Web_clearTimeout(v_id_542_);
return v_res_544_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval(lean_object* v_handler_553_, lean_object* v_timeout_554_, lean_object* v_arguments_555_){
_start:
{
uint8_t v___x_557_; lean_object* v___x_558_; lean_object* v___y_560_; 
v___x_557_ = 0;
v___x_558_ = ((lean_object*)(l_Lasm_JS_Web_setInterval___closed__2));
if (lean_obj_tag(v_handler_553_) == 0)
{
lean_object* v_value_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
v_value_581_ = lean_ctor_get(v_handler_553_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v_handler_553_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v_handler_553_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_value_581_);
lean_dec(v_handler_553_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
lean_ctor_set_tag(v___x_583_, 4);
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_value_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
v___y_560_ = v___x_586_;
goto v___jp_559_;
}
}
}
else
{
lean_object* v_value_589_; lean_object* v___x_590_; lean_object* v___x_591_; 
v_value_589_ = lean_ctor_get(v_handler_553_, 0);
lean_inc(v_value_589_);
lean_dec_ref(v_handler_553_);
v___x_590_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_591_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_591_, 0, v_value_589_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___y_560_ = v___x_591_;
goto v___jp_559_;
}
v___jp_559_:
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; size_t v_sz_566_; size_t v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_561_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_554_);
v___x_562_ = lean_unsigned_to_nat(2u);
v___x_563_ = lean_mk_empty_array_with_capacity(v___x_562_);
v___x_564_ = lean_array_push(v___x_563_, v___y_560_);
v___x_565_ = lean_array_push(v___x_564_, v___x_561_);
v_sz_566_ = lean_array_size(v_arguments_555_);
v___x_567_ = ((size_t)0ULL);
v___x_568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_566_, v___x_567_, v_arguments_555_);
v___x_569_ = l_Lasm_JS_Web_Support_argsWith(v___x_565_, v___x_568_);
lean_dec_ref(v___x_568_);
v___x_570_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_AbortSignal_abort_spec__0(v___x_558_, v___x_569_, v___x_557_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_572_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_570_, 1);
v___x_572_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_571_);
return v___x_572_;
}
else
{
lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_580_; 
v_a_573_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_580_ == 0)
{
v___x_575_ = v___x_570_;
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_dec(v___x_570_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_580_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_578_; 
if (v_isShared_576_ == 0)
{
v___x_578_ = v___x_575_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_a_573_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval___boxed(lean_object* v_handler_592_, lean_object* v_timeout_593_, lean_object* v_arguments_594_, lean_object* v_a_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l_Lasm_JS_Web_setInterval(v_handler_592_, v_timeout_593_, v_arguments_594_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval(lean_object* v_id_605_){
_start:
{
uint8_t v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_607_ = 0;
v___x_608_ = lean_unsigned_to_nat(1u);
v___x_609_ = ((lean_object*)(l_Lasm_JS_Web_clearInterval___closed__2));
v___x_610_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_605_);
v___x_611_ = lean_mk_empty_array_with_capacity(v___x_608_);
v___x_612_ = lean_array_push(v___x_611_, v___x_610_);
v___x_613_ = l_Lasm_JS_Web_Support_args(v___x_612_);
v___x_614_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_609_, v___x_613_, v___x_607_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval___boxed(lean_object* v_id_615_, lean_object* v_a_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lasm_JS_Web_clearInterval(v_id_615_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask(lean_object* v_callback_626_){
_start:
{
uint8_t v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_628_ = 0;
v___x_629_ = lean_unsigned_to_nat(1u);
v___x_630_ = ((lean_object*)(l_Lasm_JS_Web_queueMicrotask___closed__2));
v___x_631_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_632_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_632_, 0, v_callback_626_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = lean_mk_empty_array_with_capacity(v___x_629_);
v___x_634_ = lean_array_push(v___x_633_, v___x_632_);
v___x_635_ = l_Lasm_JS_Web_Support_args(v___x_634_);
v___x_636_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_630_, v___x_635_, v___x_628_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask___boxed(lean_object* v_callback_637_, lean_object* v_a_638_){
_start:
{
lean_object* v_res_639_; 
v_res_639_ = l_Lasm_JS_Web_queueMicrotask(v_callback_637_);
return v_res_639_;
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
