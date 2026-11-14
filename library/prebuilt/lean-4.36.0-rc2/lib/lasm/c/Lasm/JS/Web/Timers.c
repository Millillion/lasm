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
lean_object* lean_obj_tag_nat(lean_object*);
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
lean_object* l_Lasm_JS_Function_ofSyncFn(lean_object*);
lean_object* l_Lasm_JS_Function_ofFn(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx___impl___boxed(lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_JS_Web_TimerHandler_ctorIdx___impl(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
if (lean_obj_tag(v_t_5_) == 0)
{
lean_object* v_value_7_; lean_object* v___x_8_; 
v_value_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_value_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_value_7_);
return v___x_8_;
}
else
{
lean_object* v_value_9_; lean_object* v___x_10_; 
v_value_9_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_value_9_);
lean_dec_ref(v_t_5_);
v___x_10_ = lean_apply_1(v_k_6_, v_value_9_);
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lasm_JS_Web_TimerHandler_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_domString_elim___redArg(lean_object* v_t_23_, lean_object* v_domString_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_23_, v_domString_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_domString_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_domString_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_27_, v_domString_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_jsFunction_elim___redArg(lean_object* v_t_31_, lean_object* v_jsFunction_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_31_, v_jsFunction_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_jsFunction_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_jsFunction_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_35_, v_jsFunction_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_trustedScript_elim___redArg(lean_object* v_t_39_, lean_object* v_trustedScript_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_39_, v_trustedScript_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_TimerHandler_trustedScript_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_trustedScript_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lasm_JS_Web_TimerHandler_ctorElim___redArg(v_t_43_, v_trustedScript_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSTimerHandler___lam__0(lean_object* v_x_48_){
_start:
{
if (lean_obj_tag(v_x_48_) == 0)
{
lean_object* v_value_49_; lean_object* v___x_51_; uint8_t v_isShared_52_; uint8_t v_isSharedCheck_56_; 
v_value_49_ = lean_ctor_get(v_x_48_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v_x_48_);
if (v_isSharedCheck_56_ == 0)
{
v___x_51_ = v_x_48_;
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
else
{
lean_inc(v_value_49_);
lean_dec(v_x_48_);
v___x_51_ = lean_box(0);
v_isShared_52_ = v_isSharedCheck_56_;
goto v_resetjp_50_;
}
v_resetjp_50_:
{
lean_object* v___x_54_; 
if (v_isShared_52_ == 0)
{
lean_ctor_set_tag(v___x_51_, 4);
v___x_54_ = v___x_51_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v_value_49_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
else
{
lean_object* v_value_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v_value_57_ = lean_ctor_get(v_x_48_, 0);
lean_inc(v_value_57_);
lean_dec_ref(v_x_48_);
v___x_58_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_59_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_59_, 0, v_value_57_);
lean_ctor_set(v___x_59_, 1, v___x_58_);
return v___x_59_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeStringTimerHandler___lam__0(lean_object* v_value_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v_value_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instCoeJSFunctionTimerHandler___lam__0(lean_object* v_value_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_67_, 0, v_value_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instToJSVoidFunction___lam__0(lean_object* v_x_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_72_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_72_, 0, v_x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0(lean_object* v_x_77_){
_start:
{
if (lean_obj_tag(v_x_77_) == 9)
{
lean_object* v_value_78_; lean_object* v___x_79_; 
v_value_78_ = lean_ctor_get(v_x_77_, 0);
lean_inc(v_value_78_);
v___x_79_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_79_, 0, v_value_78_);
return v___x_79_;
}
else
{
lean_object* v___x_80_; 
v___x_80_ = ((lean_object*)(l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___closed__0));
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_instFromJSVoidFunction___lam__0___boxed(lean_object* v_x_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l_Lasm_JS_Web_instFromJSVoidFunction___lam__0(v_x_81_);
lean_dec(v_x_81_);
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0(lean_object* v_x_94_){
_start:
{
if (lean_obj_tag(v_x_94_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_104_; 
v_a_96_ = lean_ctor_get(v_x_94_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v_x_94_);
if (v_isSharedCheck_104_ == 0)
{
v___x_98_ = v_x_94_;
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v_x_94_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_101_; 
if (v_isShared_99_ == 0)
{
v___x_101_ = v___x_98_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_a_96_);
v___x_101_ = v_reuseFailAlloc_103_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
lean_object* v___x_102_; 
v___x_102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_102_, 0, v___x_101_);
return v___x_102_;
}
}
}
else
{
lean_object* v___x_105_; 
lean_dec_ref_known(v_x_94_, 1);
v___x_105_ = ((lean_object*)(l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___closed__1));
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__0___boxed(lean_object* v_x_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lasm_JS_Web_VoidFunction_ofFn___lam__0(v_x_106_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1(lean_object* v_f_109_, lean_object* v___f_110_, lean_object* v_x_111_){
_start:
{
lean_object* v___x_113_; uint8_t v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_113_ = lean_unsigned_to_nat(0u);
v___x_114_ = 0;
v___x_115_ = lean_apply_1(v_f_109_, lean_box(0));
v___x_116_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_113_, v___x_114_, v___x_115_, v___f_110_);
return v___x_116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed(lean_object* v_f_117_, lean_object* v___f_118_, lean_object* v_x_119_, lean_object* v___y_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Lasm_JS_Web_VoidFunction_ofFn___lam__1(v_f_117_, v___f_118_, v_x_119_);
lean_dec_ref(v_x_119_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn(lean_object* v_f_123_){
_start:
{
lean_object* v___f_125_; lean_object* v___f_126_; lean_object* v___x_127_; 
v___f_125_ = ((lean_object*)(l_Lasm_JS_Web_VoidFunction_ofFn___closed__0));
v___f_126_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofFn___lam__1___boxed), 4, 2);
lean_closure_set(v___f_126_, 0, v_f_123_);
lean_closure_set(v___f_126_, 1, v___f_125_);
v___x_127_ = l_Lasm_JS_Function_ofFn(v___f_126_);
if (lean_obj_tag(v___x_127_) == 0)
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
v_a_128_ = lean_ctor_get(v___x_127_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_127_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_127_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
else
{
lean_object* v_a_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_143_; 
v_a_136_ = lean_ctor_get(v___x_127_, 0);
v_isSharedCheck_143_ = !lean_is_exclusive(v___x_127_);
if (v_isSharedCheck_143_ == 0)
{
v___x_138_ = v___x_127_;
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_a_136_);
lean_dec(v___x_127_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_143_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___x_141_; 
if (v_isShared_139_ == 0)
{
v___x_141_ = v___x_138_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_142_; 
v_reuseFailAlloc_142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_142_, 0, v_a_136_);
v___x_141_ = v_reuseFailAlloc_142_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofFn___boxed(lean_object* v_f_144_, lean_object* v_a_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lasm_JS_Web_VoidFunction_ofFn(v_f_144_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(lean_object* v_f_147_, lean_object* v_x_148_){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_apply_1(v_f_147_, lean_box(0));
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_158_; 
v_isSharedCheck_158_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_158_ == 0)
{
lean_object* v_unused_159_; 
v_unused_159_ = lean_ctor_get(v___x_150_, 0);
lean_dec(v_unused_159_);
v___x_152_ = v___x_150_;
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
else
{
lean_dec(v___x_150_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_158_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_156_; 
v___x_154_ = lean_box(0);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 0, v___x_154_);
v___x_156_ = v___x_152_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_157_; 
v_reuseFailAlloc_157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_157_, 0, v___x_154_);
v___x_156_ = v_reuseFailAlloc_157_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
return v___x_156_;
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
v_a_160_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_150_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_150_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed(lean_object* v_f_168_, lean_object* v_x_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0(v_f_168_, v_x_169_);
lean_dec_ref(v_x_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn(lean_object* v_f_172_){
_start:
{
lean_object* v___f_174_; lean_object* v___x_175_; 
v___f_174_ = lean_alloc_closure((void*)(l_Lasm_JS_Web_VoidFunction_ofSyncFn___lam__0___boxed), 3, 1);
lean_closure_set(v___f_174_, 0, v_f_172_);
v___x_175_ = l_Lasm_JS_Function_ofSyncFn(v___f_174_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_183_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_183_ == 0)
{
v___x_178_ = v___x_175_;
v_isShared_179_ = v_isSharedCheck_183_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_a_176_);
lean_dec(v___x_175_);
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
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
v_a_184_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_175_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_175_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
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
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_VoidFunction_ofSyncFn___boxed(lean_object* v_f_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lasm_JS_Web_VoidFunction_ofSyncFn(v_f_192_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(lean_object* v_x_195_){
_start:
{
if (lean_obj_tag(v_x_195_) == 0)
{
lean_object* v___x_196_; 
v___x_196_ = lean_box(0);
return v___x_196_;
}
else
{
lean_object* v_val_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_209_; 
v_val_197_ = lean_ctor_get(v_x_195_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v_x_195_);
if (v_isSharedCheck_209_ == 0)
{
v___x_199_ = v_x_195_;
v_isShared_200_ = v_isSharedCheck_209_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_val_197_);
lean_dec(v_x_195_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_209_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_202_; uint8_t v___x_203_; 
v___x_201_ = lean_nat_abs(v_val_197_);
v___x_202_ = lean_cstr_to_nat("9007199254740991");
v___x_203_ = lean_nat_dec_le(v___x_201_, v___x_202_);
lean_dec(v___x_201_);
if (v___x_203_ == 0)
{
lean_object* v___x_205_; 
if (v_isShared_200_ == 0)
{
lean_ctor_set_tag(v___x_199_, 5);
v___x_205_ = v___x_199_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v_val_197_);
v___x_205_ = v_reuseFailAlloc_206_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
return v___x_205_;
}
}
else
{
double v___x_207_; lean_object* v___x_208_; 
lean_del_object(v___x_199_);
v___x_207_ = l_Float_ofInt(v_val_197_);
lean_dec(v_val_197_);
v___x_208_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_208_, 0, v___x_207_);
return v___x_208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(size_t v_sz_210_, size_t v_i_211_, lean_object* v_bs_212_){
_start:
{
uint8_t v___x_213_; 
v___x_213_ = lean_usize_dec_lt(v_i_211_, v_sz_210_);
if (v___x_213_ == 0)
{
return v_bs_212_;
}
else
{
lean_object* v_v_214_; lean_object* v___x_215_; lean_object* v_bs_x27_216_; size_t v___x_217_; size_t v___x_218_; lean_object* v___x_219_; 
v_v_214_ = lean_array_uget(v_bs_212_, v_i_211_);
v___x_215_ = lean_unsigned_to_nat(0u);
v_bs_x27_216_ = lean_array_uset(v_bs_212_, v_i_211_, v___x_215_);
v___x_217_ = ((size_t)1ULL);
v___x_218_ = lean_usize_add(v_i_211_, v___x_217_);
v___x_219_ = lean_array_uset(v_bs_x27_216_, v_i_211_, v_v_214_);
v_i_211_ = v___x_218_;
v_bs_212_ = v___x_219_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1___boxed(lean_object* v_sz_221_, lean_object* v_i_222_, lean_object* v_bs_223_){
_start:
{
size_t v_sz_boxed_224_; size_t v_i_boxed_225_; lean_object* v_res_226_; 
v_sz_boxed_224_ = lean_unbox_usize(v_sz_221_);
lean_dec(v_sz_221_);
v_i_boxed_225_ = lean_unbox_usize(v_i_222_);
lean_dec(v_i_222_);
v_res_226_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_boxed_224_, v_i_boxed_225_, v_bs_223_);
return v_res_226_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_236_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__8));
v___x_237_ = lean_unsigned_to_nat(46u);
v___x_238_ = lean_unsigned_to_nat(193u);
v___x_239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__7));
v___x_240_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__6));
v___x_241_ = l_mkPanicMessageWithDecl(v___x_240_, v___x_239_, v___x_238_, v___x_237_, v___x_236_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(lean_object* v_context_244_, lean_object* v_d_245_){
_start:
{
lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_254_; lean_object* v_received_255_; lean_object* v___y_274_; lean_object* v_a_277_; 
switch(lean_obj_tag(v_d_245_))
{
case 3:
{
double v_n_301_; lean_object* v___x_302_; 
v_n_301_ = lean_ctor_get_float(v_d_245_, 0);
v___x_302_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_301_);
if (lean_obj_tag(v___x_302_) == 0)
{
lean_object* v___x_303_; 
v___x_303_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__11));
v_a_277_ = v___x_303_;
goto v___jp_276_;
}
else
{
lean_object* v_val_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_311_; 
lean_dec_ref_known(v_d_245_, 0);
v_val_304_ = lean_ctor_get(v___x_302_, 0);
v_isSharedCheck_311_ = !lean_is_exclusive(v___x_302_);
if (v_isSharedCheck_311_ == 0)
{
v___x_306_ = v___x_302_;
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_val_304_);
lean_dec(v___x_302_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_311_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_309_; 
if (v_isShared_307_ == 0)
{
lean_ctor_set_tag(v___x_306_, 0);
v___x_309_ = v___x_306_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_310_; 
v_reuseFailAlloc_310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_310_, 0, v_val_304_);
v___x_309_ = v_reuseFailAlloc_310_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
return v___x_309_;
}
}
}
}
case 5:
{
lean_object* v_i_312_; lean_object* v___x_313_; 
v_i_312_ = lean_ctor_get(v_d_245_, 0);
lean_inc(v_i_312_);
lean_dec_ref_known(v_d_245_, 1);
v___x_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_313_, 0, v_i_312_);
return v___x_313_;
}
default: 
{
lean_object* v___x_314_; 
v___x_314_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v_a_277_ = v___x_314_;
goto v___jp_276_;
}
}
v___jp_247_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_250_ = lean_string_append(v___y_248_, v___y_249_);
lean_dec_ref(v___y_249_);
v___x_251_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
v___x_252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
return v___x_252_;
}
v___jp_253_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_256_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_257_ = lean_string_append(v___x_256_, v_context_244_);
v___x_258_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__1));
v___x_259_ = lean_string_append(v___x_257_, v___x_258_);
v___x_260_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__2));
v___x_261_ = lean_string_append(v___x_259_, v___x_260_);
v___x_262_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__3));
v___x_263_ = lean_string_append(v___x_261_, v___x_262_);
v___x_264_ = lean_string_append(v___x_263_, v_received_255_);
lean_dec_ref(v_received_255_);
v___x_265_ = lean_string_utf8_byte_size(v___y_254_);
v___x_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = lean_nat_dec_eq(v___x_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_268_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__4));
v___x_269_ = lean_string_append(v___x_268_, v___y_254_);
v___x_270_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__5));
v___x_271_ = lean_string_append(v___x_269_, v___x_270_);
v___y_248_ = v___x_264_;
v___y_249_ = v___x_271_;
goto v___jp_247_;
}
else
{
lean_object* v___x_272_; 
v___x_272_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___y_248_ = v___x_264_;
v___y_249_ = v___x_272_;
goto v___jp_247_;
}
}
v___jp_273_:
{
lean_object* v___x_275_; 
v___x_275_ = l_Lasm_JS_Data_describe(v_d_245_);
v___y_254_ = v___y_274_;
v_received_255_ = v___x_275_;
goto v___jp_253_;
}
v___jp_276_:
{
if (lean_obj_tag(v_d_245_) == 9)
{
lean_object* v_value_278_; lean_object* v_description_279_; lean_object* v___x_280_; uint8_t v___x_281_; 
v_value_278_ = lean_ctor_get(v_d_245_, 0);
v_description_279_ = lean_ctor_get(v_d_245_, 1);
v___x_280_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_281_ = lean_string_dec_eq(v_description_279_, v___x_280_);
if (v___x_281_ == 0)
{
v___y_274_ = v_a_277_;
goto v___jp_273_;
}
else
{
lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_298_; 
lean_inc(v_value_278_);
v_isSharedCheck_298_ = !lean_is_exclusive(v_d_245_);
if (v_isSharedCheck_298_ == 0)
{
lean_object* v_unused_299_; lean_object* v_unused_300_; 
v_unused_299_ = lean_ctor_get(v_d_245_, 1);
lean_dec(v_unused_299_);
v_unused_300_ = lean_ctor_get(v_d_245_, 0);
lean_dec(v_unused_300_);
v___x_283_ = v_d_245_;
v_isShared_284_ = v_isSharedCheck_298_;
goto v_resetjp_282_;
}
else
{
lean_dec(v_d_245_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_298_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
uint32_t v___x_285_; uint64_t v___x_286_; lean_object* v___x_288_; 
v___x_285_ = 206;
v___x_286_ = 0ULL;
lean_inc(v_value_278_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v___x_280_);
v___x_288_ = v___x_283_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_value_278_);
lean_ctor_set(v_reuseFailAlloc_297_, 1, v___x_280_);
v___x_288_ = v_reuseFailAlloc_297_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
uint32_t v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lasm_js_value_handle(v_value_278_);
lean_dec(v_value_278_);
v___x_290_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_285_, v___x_286_, v___x_288_, v___x_289_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v_a_291_; uint8_t v___x_292_; 
v_a_291_ = lean_ctor_get(v___x_290_, 0);
lean_inc(v_a_291_);
lean_dec_ref_known(v___x_290_, 1);
v___x_292_ = lean_string_validate_utf8(v_a_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; 
lean_dec(v_a_291_);
v___x_293_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9, &l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9_once, _init_l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__9);
v___x_294_ = l_panic___at___00System_Uri_UriEscape_decodeUri_spec__1(v___x_293_);
v___y_254_ = v_a_277_;
v_received_255_ = v___x_294_;
goto v___jp_253_;
}
else
{
lean_object* v___x_295_; 
v___x_295_ = lean_string_from_utf8_unchecked(v_a_291_);
v___y_254_ = v_a_277_;
v_received_255_ = v___x_295_;
goto v___jp_253_;
}
}
else
{
lean_object* v___x_296_; 
lean_dec_ref_known(v___x_290_, 1);
v___x_296_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__10));
v___y_254_ = v_a_277_;
v_received_255_ = v___x_296_;
goto v___jp_253_;
}
}
}
}
}
else
{
v___y_274_ = v_a_277_;
goto v___jp_273_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___boxed(lean_object* v_context_315_, lean_object* v_d_316_, lean_object* v_a_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v_context_315_, v_d_316_);
lean_dec_ref(v_context_315_);
return v_res_318_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1(void){
_start:
{
uint8_t v___x_320_; uint64_t v___x_321_; 
v___x_320_ = 0;
v___x_321_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(lean_object* v_b_322_, lean_object* v_args_323_, uint8_t v_await_324_){
_start:
{
uint64_t v___y_327_; uint64_t v___y_328_; uint64_t v___x_363_; uint64_t v___y_365_; 
v___x_363_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_324_ == 0)
{
uint64_t v___x_370_; 
v___x_370_ = 0ULL;
v___y_365_ = v___x_370_;
goto v___jp_364_;
}
else
{
uint64_t v___x_371_; 
v___x_371_ = 2ULL;
v___y_365_ = v___x_371_;
goto v___jp_364_;
}
v___jp_326_:
{
uint64_t v_flags_329_; uint32_t v___x_330_; lean_object* v___x_331_; uint32_t v___x_332_; lean_object* v___x_333_; 
v_flags_329_ = lean_uint64_lor(v___y_327_, v___y_328_);
v___x_330_ = 214;
v___x_331_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_322_, v_args_323_);
v___x_332_ = 0;
v___x_333_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_330_, v_flags_329_, v___x_331_, v___x_332_);
if (lean_obj_tag(v___x_333_) == 0)
{
lean_object* v_a_334_; lean_object* v___x_335_; 
v_a_334_ = lean_ctor_get(v___x_333_, 0);
lean_inc(v_a_334_);
lean_dec_ref_known(v___x_333_, 1);
v___x_335_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_334_);
lean_dec(v_a_334_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_a_336_);
lean_dec_ref_known(v___x_335_, 1);
v___x_337_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_322_);
v___x_338_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3(v___x_337_, v_a_336_);
lean_dec_ref(v___x_337_);
return v___x_338_;
}
else
{
lean_object* v_a_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_346_; 
v_a_339_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_346_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_346_ == 0)
{
v___x_341_ = v___x_335_;
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_a_339_);
lean_dec(v___x_335_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_346_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
lean_object* v___x_344_; 
if (v_isShared_342_ == 0)
{
v___x_344_ = v___x_341_;
goto v_reusejp_343_;
}
else
{
lean_object* v_reuseFailAlloc_345_; 
v_reuseFailAlloc_345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_345_, 0, v_a_339_);
v___x_344_ = v_reuseFailAlloc_345_;
goto v_reusejp_343_;
}
v_reusejp_343_:
{
return v___x_344_;
}
}
}
}
else
{
lean_object* v_a_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_362_; 
v_a_347_ = lean_ctor_get(v___x_333_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_333_);
if (v_isSharedCheck_362_ == 0)
{
v___x_349_ = v___x_333_;
v_isShared_350_ = v_isSharedCheck_362_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_a_347_);
lean_dec(v___x_333_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_362_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_360_; 
v___x_351_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_352_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_322_);
v___x_353_ = lean_string_append(v___x_351_, v___x_352_);
lean_dec_ref(v___x_352_);
v___x_354_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_355_ = lean_string_append(v___x_353_, v___x_354_);
v___x_356_ = lean_io_error_to_string(v_a_347_);
v___x_357_ = lean_string_append(v___x_355_, v___x_356_);
lean_dec_ref(v___x_356_);
v___x_358_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_358_, 0, v___x_357_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_358_);
v___x_360_ = v___x_349_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v___x_358_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
v___jp_364_:
{
uint8_t v_construct_366_; uint64_t v___x_367_; 
v_construct_366_ = lean_ctor_get_uint8(v_b_322_, sizeof(void*)*4);
v___x_367_ = lean_uint64_lor(v___x_363_, v___y_365_);
if (v_construct_366_ == 0)
{
uint64_t v___x_368_; 
v___x_368_ = 0ULL;
v___y_327_ = v___x_367_;
v___y_328_ = v___x_368_;
goto v___jp_326_;
}
else
{
uint64_t v___x_369_; 
v___x_369_ = 4ULL;
v___y_327_ = v___x_367_;
v___y_328_ = v___x_369_;
goto v___jp_326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___boxed(lean_object* v_b_372_, lean_object* v_args_373_, lean_object* v_await_374_, lean_object* v_a_375_){
_start:
{
uint8_t v_await_boxed_376_; lean_object* v_res_377_; 
v_await_boxed_376_ = lean_unbox(v_await_374_);
v_res_377_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v_b_372_, v_args_373_, v_await_boxed_376_);
lean_dec_ref(v_b_372_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(lean_object* v_v_387_){
_start:
{
uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_389_ = 0;
v___x_390_ = lean_unsigned_to_nat(1u);
v___x_391_ = ((lean_object*)(l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___closed__3));
v___x_392_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_393_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_393_, 0, v_v_387_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = lean_mk_empty_array_with_capacity(v___x_390_);
v___x_395_ = lean_array_push(v___x_394_, v___x_393_);
v___x_396_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2(v___x_391_, v___x_395_, v___x_389_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2___boxed(lean_object* v_v_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_res_399_; 
v_res_399_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_v_397_);
return v_res_399_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout(lean_object* v_handler_408_, lean_object* v_timeout_409_, lean_object* v_arguments_410_){
_start:
{
uint8_t v___x_412_; lean_object* v___x_413_; lean_object* v___y_415_; 
v___x_412_ = 0;
v___x_413_ = ((lean_object*)(l_Lasm_JS_Web_setTimeout___closed__2));
if (lean_obj_tag(v_handler_408_) == 0)
{
lean_object* v_value_436_; lean_object* v___x_438_; uint8_t v_isShared_439_; uint8_t v_isSharedCheck_443_; 
v_value_436_ = lean_ctor_get(v_handler_408_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v_handler_408_);
if (v_isSharedCheck_443_ == 0)
{
v___x_438_ = v_handler_408_;
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
else
{
lean_inc(v_value_436_);
lean_dec(v_handler_408_);
v___x_438_ = lean_box(0);
v_isShared_439_ = v_isSharedCheck_443_;
goto v_resetjp_437_;
}
v_resetjp_437_:
{
lean_object* v___x_441_; 
if (v_isShared_439_ == 0)
{
lean_ctor_set_tag(v___x_438_, 4);
v___x_441_ = v___x_438_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v_value_436_);
v___x_441_ = v_reuseFailAlloc_442_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
v___y_415_ = v___x_441_;
goto v___jp_414_;
}
}
}
else
{
lean_object* v_value_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_value_444_ = lean_ctor_get(v_handler_408_, 0);
lean_inc(v_value_444_);
lean_dec_ref(v_handler_408_);
v___x_445_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_446_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_446_, 0, v_value_444_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
v___y_415_ = v___x_446_;
goto v___jp_414_;
}
v___jp_414_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; size_t v_sz_421_; size_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v___x_416_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_409_);
v___x_417_ = lean_unsigned_to_nat(2u);
v___x_418_ = lean_mk_empty_array_with_capacity(v___x_417_);
v___x_419_ = lean_array_push(v___x_418_, v___y_415_);
v___x_420_ = lean_array_push(v___x_419_, v___x_416_);
v_sz_421_ = lean_array_size(v_arguments_410_);
v___x_422_ = ((size_t)0ULL);
v___x_423_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_421_, v___x_422_, v_arguments_410_);
v___x_424_ = l_Lasm_JS_Web_Support_argsWith(v___x_420_, v___x_423_);
lean_dec_ref(v___x_423_);
v___x_425_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_413_, v___x_424_, v___x_412_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_object* v_a_426_; lean_object* v___x_427_; 
v_a_426_ = lean_ctor_get(v___x_425_, 0);
lean_inc(v_a_426_);
lean_dec_ref_known(v___x_425_, 1);
v___x_427_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_426_);
return v___x_427_;
}
else
{
lean_object* v_a_428_; lean_object* v___x_430_; uint8_t v_isShared_431_; uint8_t v_isSharedCheck_435_; 
v_a_428_ = lean_ctor_get(v___x_425_, 0);
v_isSharedCheck_435_ = !lean_is_exclusive(v___x_425_);
if (v_isSharedCheck_435_ == 0)
{
v___x_430_ = v___x_425_;
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
else
{
lean_inc(v_a_428_);
lean_dec(v___x_425_);
v___x_430_ = lean_box(0);
v_isShared_431_ = v_isSharedCheck_435_;
goto v_resetjp_429_;
}
v_resetjp_429_:
{
lean_object* v___x_433_; 
if (v_isShared_431_ == 0)
{
v___x_433_ = v___x_430_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_434_; 
v_reuseFailAlloc_434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_434_, 0, v_a_428_);
v___x_433_ = v_reuseFailAlloc_434_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
return v___x_433_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setTimeout___boxed(lean_object* v_handler_447_, lean_object* v_timeout_448_, lean_object* v_arguments_449_, lean_object* v_a_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lasm_JS_Web_setTimeout(v_handler_447_, v_timeout_448_, v_arguments_449_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(lean_object* v_b_452_, lean_object* v_args_453_, uint8_t v_await_454_){
_start:
{
uint64_t v___y_457_; uint64_t v___y_458_; uint64_t v___x_491_; uint64_t v___y_493_; 
v___x_491_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1, &l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__1);
if (v_await_454_ == 0)
{
uint64_t v___x_498_; 
v___x_498_ = 0ULL;
v___y_493_ = v___x_498_;
goto v___jp_492_;
}
else
{
uint64_t v___x_499_; 
v___x_499_ = 2ULL;
v___y_493_ = v___x_499_;
goto v___jp_492_;
}
v___jp_456_:
{
uint64_t v_flags_459_; uint32_t v___x_460_; lean_object* v___x_461_; uint32_t v___x_462_; lean_object* v___x_463_; 
v_flags_459_ = lean_uint64_lor(v___y_457_, v___y_458_);
v___x_460_ = 214;
v___x_461_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_452_, v_args_453_);
v___x_462_ = 0;
v___x_463_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_460_, v_flags_459_, v___x_461_, v___x_462_);
if (lean_obj_tag(v___x_463_) == 0)
{
lean_object* v_a_464_; lean_object* v___x_465_; 
v_a_464_ = lean_ctor_get(v___x_463_, 0);
lean_inc(v_a_464_);
lean_dec_ref_known(v___x_463_, 1);
v___x_465_ = l_Lasm_JS_Wire_decodeWith___at___00Lasm_JS_Wire_decode_spec__0(v_a_464_);
lean_dec(v_a_464_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v___x_466_; 
lean_dec_ref_known(v___x_465_, 1);
v___x_466_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_JS_Web_EventTarget_addEventListener_spec__1_spec__4_spec__5___redArg();
return v___x_466_;
}
else
{
lean_object* v_a_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_474_; 
v_a_467_ = lean_ctor_get(v___x_465_, 0);
v_isSharedCheck_474_ = !lean_is_exclusive(v___x_465_);
if (v_isSharedCheck_474_ == 0)
{
v___x_469_ = v___x_465_;
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_a_467_);
lean_dec(v___x_465_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_474_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
if (v_isShared_470_ == 0)
{
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_a_467_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
}
}
else
{
lean_object* v_a_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_490_; 
v_a_475_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_490_ == 0)
{
v___x_477_ = v___x_463_;
v_isShared_478_ = v_isSharedCheck_490_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_a_475_);
lean_dec(v___x_463_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_490_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_488_; 
v___x_479_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2_spec__3___closed__0));
v___x_480_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_452_);
v___x_481_ = lean_string_append(v___x_479_, v___x_480_);
lean_dec_ref(v___x_480_);
v___x_482_ = ((lean_object*)(l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2_spec__2___closed__0));
v___x_483_ = lean_string_append(v___x_481_, v___x_482_);
v___x_484_ = lean_io_error_to_string(v_a_475_);
v___x_485_ = lean_string_append(v___x_483_, v___x_484_);
lean_dec_ref(v___x_484_);
v___x_486_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
if (v_isShared_478_ == 0)
{
lean_ctor_set(v___x_477_, 0, v___x_486_);
v___x_488_ = v___x_477_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
}
v___jp_492_:
{
uint8_t v_construct_494_; uint64_t v___x_495_; 
v_construct_494_ = lean_ctor_get_uint8(v_b_452_, sizeof(void*)*4);
v___x_495_ = lean_uint64_lor(v___x_491_, v___y_493_);
if (v_construct_494_ == 0)
{
uint64_t v___x_496_; 
v___x_496_ = 0ULL;
v___y_457_ = v___x_495_;
v___y_458_ = v___x_496_;
goto v___jp_456_;
}
else
{
uint64_t v___x_497_; 
v___x_497_ = 4ULL;
v___y_457_ = v___x_495_;
v___y_458_ = v___x_497_;
goto v___jp_456_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0___boxed(lean_object* v_b_500_, lean_object* v_args_501_, lean_object* v_await_502_, lean_object* v_a_503_){
_start:
{
uint8_t v_await_boxed_504_; lean_object* v_res_505_; 
v_await_boxed_504_ = lean_unbox(v_await_502_);
v_res_505_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v_b_500_, v_args_501_, v_await_boxed_504_);
lean_dec_ref(v_b_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout(lean_object* v_id_514_){
_start:
{
uint8_t v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_516_ = 0;
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = ((lean_object*)(l_Lasm_JS_Web_clearTimeout___closed__2));
v___x_519_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_514_);
v___x_520_ = lean_mk_empty_array_with_capacity(v___x_517_);
v___x_521_ = lean_array_push(v___x_520_, v___x_519_);
v___x_522_ = l_Lasm_JS_Web_Support_args(v___x_521_);
v___x_523_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_518_, v___x_522_, v___x_516_);
return v___x_523_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearTimeout___boxed(lean_object* v_id_524_, lean_object* v_a_525_){
_start:
{
lean_object* v_res_526_; 
v_res_526_ = l_Lasm_JS_Web_clearTimeout(v_id_524_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval(lean_object* v_handler_535_, lean_object* v_timeout_536_, lean_object* v_arguments_537_){
_start:
{
uint8_t v___x_539_; lean_object* v___x_540_; lean_object* v___y_542_; 
v___x_539_ = 0;
v___x_540_ = ((lean_object*)(l_Lasm_JS_Web_setInterval___closed__2));
if (lean_obj_tag(v_handler_535_) == 0)
{
lean_object* v_value_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
v_value_563_ = lean_ctor_get(v_handler_535_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v_handler_535_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v_handler_535_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_value_563_);
lean_dec(v_handler_535_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
lean_ctor_set_tag(v___x_565_, 4);
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_value_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
v___y_542_ = v___x_568_;
goto v___jp_541_;
}
}
}
else
{
lean_object* v_value_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v_value_571_ = lean_ctor_get(v_handler_535_, 0);
lean_inc(v_value_571_);
lean_dec_ref(v_handler_535_);
v___x_572_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_573_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_573_, 0, v_value_571_);
lean_ctor_set(v___x_573_, 1, v___x_572_);
v___y_542_ = v___x_573_;
goto v___jp_541_;
}
v___jp_541_:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; size_t v_sz_548_; size_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_543_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_timeout_536_);
v___x_544_ = lean_unsigned_to_nat(2u);
v___x_545_ = lean_mk_empty_array_with_capacity(v___x_544_);
v___x_546_ = lean_array_push(v___x_545_, v___y_542_);
v___x_547_ = lean_array_push(v___x_546_, v___x_543_);
v_sz_548_ = lean_array_size(v_arguments_537_);
v___x_549_ = ((size_t)0ULL);
v___x_550_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_Web_setTimeout_spec__1(v_sz_548_, v___x_549_, v_arguments_537_);
v___x_551_ = l_Lasm_JS_Web_Support_argsWith(v___x_547_, v___x_550_);
lean_dec_ref(v___x_550_);
v___x_552_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_Support_typedArray_spec__0(v___x_540_, v___x_551_, v___x_539_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_554_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
lean_inc(v_a_553_);
lean_dec_ref_known(v___x_552_, 1);
v___x_554_ = l_Lasm_JS_Web_Support_number___at___00Lasm_JS_Web_setTimeout_spec__2(v_a_553_);
return v___x_554_;
}
else
{
lean_object* v_a_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_562_; 
v_a_555_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_562_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_562_ == 0)
{
v___x_557_ = v___x_552_;
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_a_555_);
lean_dec(v___x_552_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_562_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_560_; 
if (v_isShared_558_ == 0)
{
v___x_560_ = v___x_557_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v_a_555_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_setInterval___boxed(lean_object* v_handler_574_, lean_object* v_timeout_575_, lean_object* v_arguments_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lasm_JS_Web_setInterval(v_handler_574_, v_timeout_575_, v_arguments_576_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval(lean_object* v_id_587_){
_start:
{
uint8_t v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_589_ = 0;
v___x_590_ = lean_unsigned_to_nat(1u);
v___x_591_ = ((lean_object*)(l_Lasm_JS_Web_clearInterval___closed__2));
v___x_592_ = l_Lasm_JS_Web_Support_optional___at___00Lasm_JS_Web_setTimeout_spec__0(v_id_587_);
v___x_593_ = lean_mk_empty_array_with_capacity(v___x_590_);
v___x_594_ = lean_array_push(v___x_593_, v___x_592_);
v___x_595_ = l_Lasm_JS_Web_Support_args(v___x_594_);
v___x_596_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_591_, v___x_595_, v___x_589_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_clearInterval___boxed(lean_object* v_id_597_, lean_object* v_a_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = l_Lasm_JS_Web_clearInterval(v_id_597_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask(lean_object* v_callback_608_){
_start:
{
uint8_t v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_610_ = 0;
v___x_611_ = lean_unsigned_to_nat(1u);
v___x_612_ = ((lean_object*)(l_Lasm_JS_Web_queueMicrotask___closed__2));
v___x_613_ = ((lean_object*)(l_Lasm_JS_Web_instToJSTimerHandler___lam__0___closed__0));
v___x_614_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_614_, 0, v_callback_608_);
lean_ctor_set(v___x_614_, 1, v___x_613_);
v___x_615_ = lean_mk_empty_array_with_capacity(v___x_611_);
v___x_616_ = lean_array_push(v___x_615_, v___x_614_);
v___x_617_ = l_Lasm_JS_Web_Support_args(v___x_616_);
v___x_618_ = l_Lasm_JS_Binding_invoke___at___00Lasm_JS_Web_clearTimeout_spec__0(v___x_612_, v___x_617_, v___x_610_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Web_queueMicrotask___boxed(lean_object* v_callback_619_, lean_object* v_a_620_){
_start:
{
lean_object* v_res_621_; 
v_res_621_ = l_Lasm_JS_Web_queueMicrotask(v_callback_619_);
return v_res_621_;
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
