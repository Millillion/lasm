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
lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(lean_object*, lean_object*, uint8_t);
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*, lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*, lean_object*);
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
lean_object* v___f_127_; lean_object* v___f_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v___f_127_ = ((lean_object*)(l_Lasm_JS_Web_VoidFunction_ofFn___closed__0));
v___f_128_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_128_, 0, v_f_125_);
lean_closure_set(v___f_128_, 1, v___f_127_);
v___x_129_ = lean_unsigned_to_nat(0u);
v___x_130_ = l_Lasm_JS_Function_ofFn(v___f_128_, v___x_129_);
if (lean_obj_tag(v___x_130_) == 0)
{
lean_object* v_a_131_; lean_object* v___x_133_; uint8_t v_isShared_134_; uint8_t v_isSharedCheck_138_; 
v_a_131_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_138_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_138_ == 0)
{
v___x_133_ = v___x_130_;
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
else
{
lean_inc(v_a_131_);
lean_dec(v___x_130_);
v___x_133_ = lean_box(0);
v_isShared_134_ = v_isSharedCheck_138_;
goto v_resetjp_132_;
}
v_resetjp_132_:
{
lean_object* v___x_136_; 
if (v_isShared_134_ == 0)
{
v___x_136_ = v___x_133_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v_a_131_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
v_a_139_ = lean_ctor_get(v___x_130_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_130_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_130_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_130_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___boxed(lean_object* v_f_147_, lean_object* v_a_148_){
_start:
{
lean_object* v_res_149_; 
v_res_149_ = l_Lasm_JS_Web_VoidFunction_ofFn(v_f_147_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(lean_object* v_f_150_, lean_object* v_x_151_){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_apply_1(v_f_150_, lean_box(0));
if (lean_obj_tag(v___x_153_) == 0)
{
lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_161_; 
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v___x_153_, 0);
lean_dec(v_unused_162_);
v___x_155_ = v___x_153_;
v_isShared_156_ = v_isSharedCheck_161_;
goto v_resetjp_154_;
}
else
{
lean_dec(v___x_153_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_161_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_157_; lean_object* v___x_159_; 
v___x_157_ = lean_box(0);
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 0, v___x_157_);
v___x_159_ = v___x_155_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v___x_157_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_170_; 
v_a_163_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_170_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_170_ == 0)
{
v___x_165_ = v___x_153_;
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_153_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_170_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v___x_168_; 
if (v_isShared_166_ == 0)
{
v___x_168_ = v___x_165_;
goto v_reusejp_167_;
}
else
{
lean_object* v_reuseFailAlloc_169_; 
v_reuseFailAlloc_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_169_, 0, v_a_163_);
v___x_168_ = v_reuseFailAlloc_169_;
goto v_reusejp_167_;
}
v_reusejp_167_:
{
return v___x_168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_171_, lean_object* v_x_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(v_f_171_, v_x_172_);
lean_dec_ref(v_x_172_);
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn(lean_object* v_f_175_){
_start:
{
lean_object* v___f_177_; lean_object* v___x_178_; lean_object* v___x_179_; 
v___f_177_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_177_, 0, v_f_175_);
v___x_178_ = lean_unsigned_to_nat(0u);
v___x_179_ = l_Lasm_JS_Function_ofSyncFn(v___f_177_, v___x_178_);
if (lean_obj_tag(v___x_179_) == 0)
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
v_a_180_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v___x_179_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_179_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
else
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_a_188_ = lean_ctor_get(v___x_179_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_179_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_179_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_179_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___boxed(lean_object* v_f_196_, lean_object* v_a_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn(v_f_196_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(lean_object* v_x_199_){
_start:
{
if (lean_obj_tag(v_x_199_) == 0)
{
lean_object* v___x_200_; 
v___x_200_ = lean_box(0);
return v___x_200_;
}
else
{
lean_object* v_val_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_213_; 
v_val_201_ = lean_ctor_get(v_x_199_, 0);
v_isSharedCheck_213_ = !lean_is_exclusive(v_x_199_);
if (v_isSharedCheck_213_ == 0)
{
v___x_203_ = v_x_199_;
v_isShared_204_ = v_isSharedCheck_213_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_val_201_);
lean_dec(v_x_199_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_213_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_205_ = lean_nat_abs(v_val_201_);
v___x_206_ = lean_cstr_to_nat("9007199254740991");
v___x_207_ = lean_nat_dec_le(v___x_205_, v___x_206_);
lean_dec(v___x_205_);
if (v___x_207_ == 0)
{
lean_object* v___x_209_; 
if (v_isShared_204_ == 0)
{
lean_ctor_set_tag(v___x_203_, 5);
v___x_209_ = v___x_203_;
goto v_reusejp_208_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_val_201_);
v___x_209_ = v_reuseFailAlloc_210_;
goto v_reusejp_208_;
}
v_reusejp_208_:
{
return v___x_209_;
}
}
else
{
double v___x_211_; lean_object* v___x_212_; 
lean_del_object(v___x_203_);
v___x_211_ = l_Float_ofInt(v_val_201_);
lean_dec(v_val_201_);
v___x_212_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_212_, 0, v___x_211_);
return v___x_212_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(size_t v_sz_214_, size_t v_i_215_, lean_object* v_bs_216_){
_start:
{
uint8_t v___x_217_; 
v___x_217_ = lean_usize_dec_lt(v_i_215_, v_sz_214_);
if (v___x_217_ == 0)
{
return v_bs_216_;
}
else
{
lean_object* v_v_218_; lean_object* v___x_219_; lean_object* v_bs_x27_220_; size_t v___x_221_; size_t v___x_222_; lean_object* v___x_223_; 
v_v_218_ = lean_array_uget(v_bs_216_, v_i_215_);
v___x_219_ = lean_unsigned_to_nat(0u);
v_bs_x27_220_ = lean_array_uset(v_bs_216_, v_i_215_, v___x_219_);
v___x_221_ = ((size_t)1ULL);
v___x_222_ = lean_usize_add(v_i_215_, v___x_221_);
v___x_223_ = lean_array_uset(v_bs_x27_220_, v_i_215_, v_v_218_);
v_i_215_ = v___x_222_;
v_bs_216_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1___boxed(lean_object* v_sz_225_, lean_object* v_i_226_, lean_object* v_bs_227_){
_start:
{
size_t v_sz_boxed_228_; size_t v_i_boxed_229_; lean_object* v_res_230_; 
v_sz_boxed_228_ = lean_unbox_usize(v_sz_225_);
lean_dec(v_sz_225_);
v_i_boxed_229_ = lean_unbox_usize(v_i_226_);
lean_dec(v_i_226_);
v_res_230_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_boxed_228_, v_i_boxed_229_, v_bs_227_);
return v_res_230_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__8));
v___x_241_ = lean_unsigned_to_nat(46u);
v___x_242_ = lean_unsigned_to_nat(193u);
v___x_243_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__7));
v___x_244_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__6));
v___x_245_ = l_mkPanicMessageWithDecl(v___x_244_, v___x_243_, v___x_242_, v___x_241_, v___x_240_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(lean_object* v_context_248_, lean_object* v_d_249_){
_start:
{
lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_258_; lean_object* v_received_259_; lean_object* v___y_278_; lean_object* v_a_281_; 
switch(lean_obj_tag(v_d_249_))
{
case 3:
{
double v_n_305_; lean_object* v___x_306_; 
v_n_305_ = lean_ctor_get_float(v_d_249_, 0);
v___x_306_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_305_);
if (lean_obj_tag(v___x_306_) == 0)
{
lean_object* v___x_307_; 
v___x_307_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__11));
v_a_281_ = v___x_307_;
goto v___jp_280_;
}
else
{
lean_object* v_val_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref_known(v_d_249_, 0);
v_val_308_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_306_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_val_308_);
lean_dec(v___x_306_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
lean_ctor_set_tag(v___x_310_, 0);
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_val_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
case 5:
{
lean_object* v_i_316_; lean_object* v___x_317_; 
v_i_316_ = lean_ctor_get(v_d_249_, 0);
lean_inc(v_i_316_);
lean_dec_ref_known(v_d_249_, 1);
v___x_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_317_, 0, v_i_316_);
return v___x_317_;
}
default: 
{
lean_object* v___x_318_; 
v___x_318_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v_a_281_ = v___x_318_;
goto v___jp_280_;
}
}
v___jp_251_:
{
lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_254_ = lean_string_append(v___y_252_, v___y_253_);
lean_dec_ref(v___y_253_);
v___x_255_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_255_, 0, v___x_254_);
v___x_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
return v___x_256_;
}
v___jp_257_:
{
lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; uint8_t v___x_271_; 
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_261_ = lean_string_append(v___x_260_, v_context_248_);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__1));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___x_264_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__2));
v___x_265_ = lean_string_append(v___x_263_, v___x_264_);
v___x_266_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__3));
v___x_267_ = lean_string_append(v___x_265_, v___x_266_);
v___x_268_ = lean_string_append(v___x_267_, v_received_259_);
lean_dec_ref(v_received_259_);
v___x_269_ = lean_string_utf8_byte_size(v___y_258_);
v___x_270_ = lean_unsigned_to_nat(0u);
v___x_271_ = lean_nat_dec_eq(v___x_269_, v___x_270_);
if (v___x_271_ == 0)
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_272_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__4));
v___x_273_ = lean_string_append(v___x_272_, v___y_258_);
v___x_274_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__5));
v___x_275_ = lean_string_append(v___x_273_, v___x_274_);
v___y_252_ = v___x_268_;
v___y_253_ = v___x_275_;
goto v___jp_251_;
}
else
{
lean_object* v___x_276_; 
v___x_276_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___y_252_ = v___x_268_;
v___y_253_ = v___x_276_;
goto v___jp_251_;
}
}
v___jp_277_:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lasm_JS_Data_describe(v_d_249_);
v___y_258_ = v___y_278_;
v_received_259_ = v___x_279_;
goto v___jp_257_;
}
v___jp_280_:
{
if (lean_obj_tag(v_d_249_) == 9)
{
lean_object* v_value_282_; lean_object* v_description_283_; lean_object* v___x_284_; uint8_t v___x_285_; 
v_value_282_ = lean_ctor_get(v_d_249_, 0);
v_description_283_ = lean_ctor_get(v_d_249_, 1);
v___x_284_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_285_ = lean_string_dec_eq(v_description_283_, v___x_284_);
if (v___x_285_ == 0)
{
v___y_278_ = v_a_281_;
goto v___jp_277_;
}
else
{
lean_object* v___x_287_; uint8_t v_isShared_288_; uint8_t v_isSharedCheck_302_; 
lean_inc(v_value_282_);
v_isSharedCheck_302_ = !lean_is_exclusive(v_d_249_);
if (v_isSharedCheck_302_ == 0)
{
lean_object* v_unused_303_; lean_object* v_unused_304_; 
v_unused_303_ = lean_ctor_get(v_d_249_, 1);
lean_dec(v_unused_303_);
v_unused_304_ = lean_ctor_get(v_d_249_, 0);
lean_dec(v_unused_304_);
v___x_287_ = v_d_249_;
v_isShared_288_ = v_isSharedCheck_302_;
goto v_resetjp_286_;
}
else
{
lean_dec(v_d_249_);
v___x_287_ = lean_box(0);
v_isShared_288_ = v_isSharedCheck_302_;
goto v_resetjp_286_;
}
v_resetjp_286_:
{
uint32_t v___x_289_; uint64_t v___x_290_; lean_object* v___x_292_; 
v___x_289_ = 206;
v___x_290_ = 0ULL;
lean_inc(v_value_282_);
if (v_isShared_288_ == 0)
{
lean_ctor_set(v___x_287_, 1, v___x_284_);
v___x_292_ = v___x_287_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_value_282_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v___x_284_);
v___x_292_ = v_reuseFailAlloc_301_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
uint32_t v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lasm_js_value_handle(v_value_282_);
lean_dec(v_value_282_);
v___x_294_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_289_, v___x_290_, v___x_292_, v___x_293_);
lean_dec_ref(v___x_292_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; uint8_t v___x_296_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
lean_inc(v_a_295_);
lean_dec_ref_known(v___x_294_, 1);
v___x_296_ = lean_string_validate_utf8(v_a_295_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; 
lean_dec(v_a_295_);
v___x_297_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9);
v___x_298_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_297_);
v___y_258_ = v_a_281_;
v_received_259_ = v___x_298_;
goto v___jp_257_;
}
else
{
lean_object* v___x_299_; 
v___x_299_ = lean_string_from_utf8_unchecked(v_a_295_);
v___y_258_ = v_a_281_;
v_received_259_ = v___x_299_;
goto v___jp_257_;
}
}
else
{
lean_object* v___x_300_; 
lean_dec_ref_known(v___x_294_, 1);
v___x_300_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__10));
v___y_258_ = v_a_281_;
v_received_259_ = v___x_300_;
goto v___jp_257_;
}
}
}
}
}
else
{
v___y_278_ = v_a_281_;
goto v___jp_277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___boxed(lean_object* v_context_319_, lean_object* v_d_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v_context_319_, v_d_320_);
lean_dec_ref(v_context_319_);
return v_res_322_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1(void){
_start:
{
uint8_t v___x_324_; uint64_t v___x_325_; 
v___x_324_ = 0;
v___x_325_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_324_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(lean_object* v_b_326_, lean_object* v_args_327_, uint8_t v_await_328_){
_start:
{
uint64_t v___y_331_; uint64_t v___y_332_; uint64_t v___x_375_; uint64_t v___y_377_; 
v___x_375_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_328_ == 0)
{
uint64_t v___x_382_; 
v___x_382_ = 0ULL;
v___y_377_ = v___x_382_;
goto v___jp_376_;
}
else
{
uint64_t v___x_383_; 
v___x_383_ = 2ULL;
v___y_377_ = v___x_383_;
goto v___jp_376_;
}
v___jp_330_:
{
uint64_t v_flags_333_; uint32_t v___x_334_; lean_object* v___x_335_; uint32_t v___x_336_; lean_object* v___x_337_; 
v_flags_333_ = lean_uint64_lor(v___y_331_, v___y_332_);
v___x_334_ = 214;
v___x_335_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_326_, v_args_327_);
v___x_336_ = 0;
v___x_337_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_334_, v_flags_333_, v___x_335_, v___x_336_);
lean_dec(v___x_335_);
if (lean_obj_tag(v___x_337_) == 0)
{
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_339_; 
v_a_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_338_);
lean_dec_ref_known(v___x_337_, 1);
v___x_339_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_338_);
lean_dec(v_a_338_);
if (lean_obj_tag(v___x_339_) == 0)
{
lean_object* v_a_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_340_);
lean_dec_ref_known(v___x_339_, 1);
v___x_341_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_326_);
v___x_342_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v___x_341_, v_a_340_);
lean_dec_ref(v___x_341_);
return v___x_342_;
}
else
{
lean_object* v_a_343_; lean_object* v___x_345_; uint8_t v_isShared_346_; uint8_t v_isSharedCheck_350_; 
v_a_343_ = lean_ctor_get(v___x_339_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_339_);
if (v_isSharedCheck_350_ == 0)
{
v___x_345_ = v___x_339_;
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
else
{
lean_inc(v_a_343_);
lean_dec(v___x_339_);
v___x_345_ = lean_box(0);
v_isShared_346_ = v_isSharedCheck_350_;
goto v_resetjp_344_;
}
v_resetjp_344_:
{
lean_object* v___x_348_; 
if (v_isShared_346_ == 0)
{
v___x_348_ = v___x_345_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_349_; 
v_reuseFailAlloc_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_349_, 0, v_a_343_);
v___x_348_ = v_reuseFailAlloc_349_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
return v___x_348_;
}
}
}
}
else
{
lean_object* v_a_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_358_; 
v_a_351_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_358_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_358_ == 0)
{
v___x_353_ = v___x_337_;
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_a_351_);
lean_dec(v___x_337_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_358_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v___x_356_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set_tag(v___x_353_, 1);
v___x_356_ = v___x_353_;
goto v_reusejp_355_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v_a_351_);
v___x_356_ = v_reuseFailAlloc_357_;
goto v_reusejp_355_;
}
v_reusejp_355_:
{
return v___x_356_;
}
}
}
}
else
{
lean_object* v_a_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_374_; 
v_a_359_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_374_ == 0)
{
v___x_361_ = v___x_337_;
v_isShared_362_ = v_isSharedCheck_374_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_a_359_);
lean_dec(v___x_337_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_374_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_363_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_364_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_326_);
v___x_365_ = lean_string_append(v___x_363_, v___x_364_);
lean_dec_ref(v___x_364_);
v___x_366_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
v___x_368_ = lean_io_error_to_string(v_a_359_);
v___x_369_ = lean_string_append(v___x_367_, v___x_368_);
lean_dec_ref(v___x_368_);
v___x_370_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 0, v___x_370_);
v___x_372_ = v___x_361_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
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
v___jp_376_:
{
uint8_t v_construct_378_; uint64_t v___x_379_; 
v_construct_378_ = lean_ctor_get_uint8(v_b_326_, sizeof(void*)*4);
v___x_379_ = lean_uint64_lor(v___x_375_, v___y_377_);
if (v_construct_378_ == 0)
{
uint64_t v___x_380_; 
v___x_380_ = 0ULL;
v___y_331_ = v___x_379_;
v___y_332_ = v___x_380_;
goto v___jp_330_;
}
else
{
uint64_t v___x_381_; 
v___x_381_ = 4ULL;
v___y_331_ = v___x_379_;
v___y_332_ = v___x_381_;
goto v___jp_330_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___boxed(lean_object* v_b_384_, lean_object* v_args_385_, lean_object* v_await_386_, lean_object* v_a_387_){
_start:
{
uint8_t v_await_boxed_388_; lean_object* v_res_389_; 
v_await_boxed_388_ = lean_unbox(v_await_386_);
v_res_389_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v_b_384_, v_args_385_, v_await_boxed_388_);
lean_dec_ref(v_b_384_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(lean_object* v_v_399_){
_start:
{
uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; 
v___x_401_ = 0;
v___x_402_ = lean_unsigned_to_nat(1u);
v___x_403_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__3));
v___x_404_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_405_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_405_, 0, v_v_399_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = lean_mk_empty_array_with_capacity(v___x_402_);
v___x_407_ = lean_array_push(v___x_406_, v___x_405_);
v___x_408_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v___x_403_, v___x_407_, v___x_401_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___boxed(lean_object* v_v_409_, lean_object* v_a_410_){
_start:
{
lean_object* v_res_411_; 
v_res_411_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_v_409_);
return v_res_411_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout(lean_object* v_handler_420_, lean_object* v_timeout_421_, lean_object* v_arguments_422_){
_start:
{
uint8_t v___x_424_; lean_object* v___x_425_; lean_object* v___y_427_; 
v___x_424_ = 0;
v___x_425_ = ((lean_object*)(l_Lasm_JS_Web_setTimeout___closed__2));
if (lean_obj_tag(v_handler_420_) == 0)
{
lean_object* v_value_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_455_; 
v_value_448_ = lean_ctor_get(v_handler_420_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v_handler_420_);
if (v_isSharedCheck_455_ == 0)
{
v___x_450_ = v_handler_420_;
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_value_448_);
lean_dec(v_handler_420_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_455_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v___x_453_; 
if (v_isShared_451_ == 0)
{
lean_ctor_set_tag(v___x_450_, 4);
v___x_453_ = v___x_450_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_value_448_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
v___y_427_ = v___x_453_;
goto v___jp_426_;
}
}
}
else
{
lean_object* v_value_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v_value_456_ = lean_ctor_get(v_handler_420_, 0);
lean_inc(v_value_456_);
lean_dec_ref(v_handler_420_);
v___x_457_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_458_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_458_, 0, v_value_456_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___y_427_ = v___x_458_;
goto v___jp_426_;
}
v___jp_426_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; size_t v_sz_433_; size_t v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_428_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_421_);
v___x_429_ = lean_unsigned_to_nat(2u);
v___x_430_ = lean_mk_empty_array_with_capacity(v___x_429_);
v___x_431_ = lean_array_push(v___x_430_, v___y_427_);
v___x_432_ = lean_array_push(v___x_431_, v___x_428_);
v_sz_433_ = lean_array_size(v_arguments_422_);
v___x_434_ = ((size_t)0ULL);
v___x_435_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_433_, v___x_434_, v_arguments_422_);
v___x_436_ = l_Lasm_JS_Web_Support_argsWith(v___x_432_, v___x_435_);
lean_dec_ref(v___x_435_);
v___x_437_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_425_, v___x_436_, v___x_424_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v___x_439_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_438_);
lean_dec_ref_known(v___x_437_, 1);
v___x_439_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_438_);
return v___x_439_;
}
else
{
lean_object* v_a_440_; lean_object* v___x_442_; uint8_t v_isShared_443_; uint8_t v_isSharedCheck_447_; 
v_a_440_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_447_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_447_ == 0)
{
v___x_442_ = v___x_437_;
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
else
{
lean_inc(v_a_440_);
lean_dec(v___x_437_);
v___x_442_ = lean_box(0);
v_isShared_443_ = v_isSharedCheck_447_;
goto v_resetjp_441_;
}
v_resetjp_441_:
{
lean_object* v___x_445_; 
if (v_isShared_443_ == 0)
{
v___x_445_ = v___x_442_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v_a_440_);
v___x_445_ = v_reuseFailAlloc_446_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
return v___x_445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout___boxed(lean_object* v_handler_459_, lean_object* v_timeout_460_, lean_object* v_arguments_461_, lean_object* v_a_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lasm_JS_Web_setTimeout(v_handler_459_, v_timeout_460_, v_arguments_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(lean_object* v_b_464_, lean_object* v_args_465_, uint8_t v_await_466_){
_start:
{
uint64_t v___y_469_; uint64_t v___y_470_; uint64_t v___x_511_; uint64_t v___y_513_; 
v___x_511_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_466_ == 0)
{
uint64_t v___x_518_; 
v___x_518_ = 0ULL;
v___y_513_ = v___x_518_;
goto v___jp_512_;
}
else
{
uint64_t v___x_519_; 
v___x_519_ = 2ULL;
v___y_513_ = v___x_519_;
goto v___jp_512_;
}
v___jp_468_:
{
uint64_t v_flags_471_; uint32_t v___x_472_; lean_object* v___x_473_; uint32_t v___x_474_; lean_object* v___x_475_; 
v_flags_471_ = lean_uint64_lor(v___y_469_, v___y_470_);
v___x_472_ = 214;
v___x_473_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_464_, v_args_465_);
v___x_474_ = 0;
v___x_475_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_472_, v_flags_471_, v___x_473_, v___x_474_);
lean_dec(v___x_473_);
if (lean_obj_tag(v___x_475_) == 0)
{
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_477_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
lean_inc(v_a_476_);
lean_dec_ref_known(v___x_475_, 1);
v___x_477_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_476_);
lean_dec(v_a_476_);
if (lean_obj_tag(v___x_477_) == 0)
{
lean_object* v___x_478_; 
lean_dec_ref_known(v___x_477_, 1);
v___x_478_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_478_;
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
v_a_479_ = lean_ctor_get(v___x_477_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_477_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_477_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_477_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
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
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
v_a_487_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_475_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_475_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
lean_ctor_set_tag(v___x_489_, 1);
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
else
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_510_; 
v_a_495_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_510_ == 0)
{
v___x_497_ = v___x_475_;
v_isShared_498_ = v_isSharedCheck_510_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_475_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_510_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_508_; 
v___x_499_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_500_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_464_);
v___x_501_ = lean_string_append(v___x_499_, v___x_500_);
lean_dec_ref(v___x_500_);
v___x_502_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_503_ = lean_string_append(v___x_501_, v___x_502_);
v___x_504_ = lean_io_error_to_string(v_a_495_);
v___x_505_ = lean_string_append(v___x_503_, v___x_504_);
lean_dec_ref(v___x_504_);
v___x_506_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_506_, 0, v___x_505_);
if (v_isShared_498_ == 0)
{
lean_ctor_set(v___x_497_, 0, v___x_506_);
v___x_508_ = v___x_497_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
}
v___jp_512_:
{
uint8_t v_construct_514_; uint64_t v___x_515_; 
v_construct_514_ = lean_ctor_get_uint8(v_b_464_, sizeof(void*)*4);
v___x_515_ = lean_uint64_lor(v___x_511_, v___y_513_);
if (v_construct_514_ == 0)
{
uint64_t v___x_516_; 
v___x_516_ = 0ULL;
v___y_469_ = v___x_515_;
v___y_470_ = v___x_516_;
goto v___jp_468_;
}
else
{
uint64_t v___x_517_; 
v___x_517_ = 4ULL;
v___y_469_ = v___x_515_;
v___y_470_ = v___x_517_;
goto v___jp_468_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0___boxed(lean_object* v_b_520_, lean_object* v_args_521_, lean_object* v_await_522_, lean_object* v_a_523_){
_start:
{
uint8_t v_await_boxed_524_; lean_object* v_res_525_; 
v_await_boxed_524_ = lean_unbox(v_await_522_);
v_res_525_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v_b_520_, v_args_521_, v_await_boxed_524_);
lean_dec_ref(v_b_520_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout(lean_object* v_id_534_){
_start:
{
uint8_t v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_536_ = 0;
v___x_537_ = lean_unsigned_to_nat(1u);
v___x_538_ = ((lean_object*)(l_Lasm_JS_Web_clearTimeout___closed__2));
v___x_539_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_534_);
v___x_540_ = lean_mk_empty_array_with_capacity(v___x_537_);
v___x_541_ = lean_array_push(v___x_540_, v___x_539_);
v___x_542_ = l_Lasm_JS_Web_Support_args(v___x_541_);
v___x_543_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_538_, v___x_542_, v___x_536_);
return v___x_543_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout___boxed(lean_object* v_id_544_, lean_object* v_a_545_){
_start:
{
lean_object* v_res_546_; 
v_res_546_ = l_Lasm_JS_Web_clearTimeout(v_id_544_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval(lean_object* v_handler_555_, lean_object* v_timeout_556_, lean_object* v_arguments_557_){
_start:
{
uint8_t v___x_559_; lean_object* v___x_560_; lean_object* v___y_562_; 
v___x_559_ = 0;
v___x_560_ = ((lean_object*)(l_Lasm_JS_Web_setInterval___closed__2));
if (lean_obj_tag(v_handler_555_) == 0)
{
lean_object* v_value_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
v_value_583_ = lean_ctor_get(v_handler_555_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_handler_555_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v_handler_555_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_value_583_);
lean_dec(v_handler_555_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
lean_ctor_set_tag(v___x_585_, 4);
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_value_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
v___y_562_ = v___x_588_;
goto v___jp_561_;
}
}
}
else
{
lean_object* v_value_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_value_591_ = lean_ctor_get(v_handler_555_, 0);
lean_inc(v_value_591_);
lean_dec_ref(v_handler_555_);
v___x_592_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_593_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_593_, 0, v_value_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___y_562_ = v___x_593_;
goto v___jp_561_;
}
v___jp_561_:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; size_t v_sz_568_; size_t v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_563_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_556_);
v___x_564_ = lean_unsigned_to_nat(2u);
v___x_565_ = lean_mk_empty_array_with_capacity(v___x_564_);
v___x_566_ = lean_array_push(v___x_565_, v___y_562_);
v___x_567_ = lean_array_push(v___x_566_, v___x_563_);
v_sz_568_ = lean_array_size(v_arguments_557_);
v___x_569_ = ((size_t)0ULL);
v___x_570_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_568_, v___x_569_, v_arguments_557_);
v___x_571_ = l_Lasm_JS_Web_Support_argsWith(v___x_567_, v___x_570_);
lean_dec_ref(v___x_570_);
v___x_572_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_560_, v___x_571_, v___x_559_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_574_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_572_, 1);
v___x_574_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_573_);
return v___x_574_;
}
else
{
lean_object* v_a_575_; lean_object* v___x_577_; uint8_t v_isShared_578_; uint8_t v_isSharedCheck_582_; 
v_a_575_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_582_ == 0)
{
v___x_577_ = v___x_572_;
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
else
{
lean_inc(v_a_575_);
lean_dec(v___x_572_);
v___x_577_ = lean_box(0);
v_isShared_578_ = v_isSharedCheck_582_;
goto v_resetjp_576_;
}
v_resetjp_576_:
{
lean_object* v___x_580_; 
if (v_isShared_578_ == 0)
{
v___x_580_ = v___x_577_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_a_575_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval___boxed(lean_object* v_handler_594_, lean_object* v_timeout_595_, lean_object* v_arguments_596_, lean_object* v_a_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lasm_JS_Web_setInterval(v_handler_594_, v_timeout_595_, v_arguments_596_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval(lean_object* v_id_607_){
_start:
{
uint8_t v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_609_ = 0;
v___x_610_ = lean_unsigned_to_nat(1u);
v___x_611_ = ((lean_object*)(l_Lasm_JS_Web_clearInterval___closed__2));
v___x_612_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_607_);
v___x_613_ = lean_mk_empty_array_with_capacity(v___x_610_);
v___x_614_ = lean_array_push(v___x_613_, v___x_612_);
v___x_615_ = l_Lasm_JS_Web_Support_args(v___x_614_);
v___x_616_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_611_, v___x_615_, v___x_609_);
return v___x_616_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval___boxed(lean_object* v_id_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lasm_JS_Web_clearInterval(v_id_617_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask(lean_object* v_callback_628_){
_start:
{
uint8_t v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___x_630_ = 0;
v___x_631_ = lean_unsigned_to_nat(1u);
v___x_632_ = ((lean_object*)(l_Lasm_JS_Web_queueMicrotask___closed__2));
v___x_633_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_634_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_634_, 0, v_callback_628_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = lean_mk_empty_array_with_capacity(v___x_631_);
v___x_636_ = lean_array_push(v___x_635_, v___x_634_);
v___x_637_ = l_Lasm_JS_Web_Support_args(v___x_636_);
v___x_638_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_632_, v___x_637_, v___x_630_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask___boxed(lean_object* v_callback_639_, lean_object* v_a_640_){
_start:
{
lean_object* v_res_641_; 
v_res_641_ = l_Lasm_JS_Web_queueMicrotask(v_callback_639_);
return v_res_641_;
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
