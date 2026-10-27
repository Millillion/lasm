// Lean compiler output
// Module: Lasm.Web.Fetch
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_quote(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lasm_JS_Data_describe(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint32_t lasm_js_value_handle(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(uint32_t, uint64_t, lean_object*, uint32_t);
uint8_t lean_string_validate_utf8(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(lean_object*);
lean_object* lean_string_from_utf8_unchecked(lean_object*);
lean_object* l_Lasm_JS_Data_field(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(double);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(lean_object*);
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Wire_decode(lean_object*);
lean_object* l_Lasm_JS_Wire_encode(lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(lean_object*);
lean_object* lasm_js_call_into(lean_object*, uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* lean_io_promise_new();
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_obj(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint32_t lean_uint32_add(uint32_t, uint32_t);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSProd___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_none_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_none_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_text_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_text_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_bytes_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_bytes_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_json_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_json_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_form_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_form_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_params_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_params_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedBody_default;
LEAN_EXPORT lean_object* l_Lasm_Web_instInhabitedBody;
static const lean_string_object l_Lasm_Web_instInhabitedRequestInit_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "GET"};
static const lean_object* l_Lasm_Web_instInhabitedRequestInit_default___closed__0 = (const lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__0_value;
static const lean_array_object l_Lasm_Web_instInhabitedRequestInit_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_instInhabitedRequestInit_default___closed__1 = (const lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__1_value;
static const lean_string_object l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lasm_Web_instInhabitedRequestInit_default___closed__2 = (const lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value;
static const lean_ctor_object l_Lasm_Web_instInhabitedRequestInit_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__0_value),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lasm_Web_instInhabitedRequestInit_default___closed__3 = (const lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedRequestInit_default = (const lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__3_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedRequestInit = (const lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__3_value;
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "content-type"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__0___boxed(lean_object*);
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "method"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__0_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "headers"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__1 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__1_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__2 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__2_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__3 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__3_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__4 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__4_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__5 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__5_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__6 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__6_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__7 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__7_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__8 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__8_value;
static const lean_ctor_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__2_value),((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__3_value)}};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__9 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__9_value;
static const lean_ctor_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__9_value),((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__4_value),((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__5_value),((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__6_value),((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__7_value)}};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__10 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__10_value;
static const lean_ctor_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__10_value),((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__8_value)}};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__11 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__11_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "credentials"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__12 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__12_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mode"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__13 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__13_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cache"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__14 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__14_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "redirect"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__15 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__15_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "signal"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__16 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__16_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "body"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__17 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__17_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "json"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__18 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__18_value;
static const lean_string_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "application/json"};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__19 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__19_value;
static const lean_ctor_object l_Lasm_Web_instToJSRequestInit___lam__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___closed__0_value),((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__19_value)}};
static const lean_object* l_Lasm_Web_instToJSRequestInit___lam__1___closed__20 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__20_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__1(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instToJSRequestInit___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___closed__0 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___closed__0_value;
static const lean_closure_object l_Lasm_Web_instToJSRequestInit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instToJSRequestInit___lam__1, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSRequestInit___closed__0_value)} };
static const lean_object* l_Lasm_Web_instToJSRequestInit___closed__1 = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instToJSRequestInit = (const lean_object*)&l_Lasm_Web_instToJSRequestInit___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "status"};
static const lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0 = (const lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0_value;
static const lean_string_object l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "statusText"};
static const lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1 = (const lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1_value;
static const lean_string_object l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ok"};
static const lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2 = (const lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2_value;
static const lean_string_object l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3 = (const lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3_value;
static const lean_string_object l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "redirected"};
static const lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4 = (const lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4_value;
static const lean_string_object l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5 = (const lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_Web_instFromJSResponseInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSResponseInfo___closed__0;
static lean_once_cell_t l_Lasm_Web_instFromJSResponseInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSResponseInfo___closed__1;
static lean_once_cell_t l_Lasm_Web_instFromJSResponseInfo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSResponseInfo___closed__2;
static const lean_string_object l_Lasm_Web_instFromJSResponseInfo___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Lasm.Web.ResponseInfo"};
static const lean_object* l_Lasm_Web_instFromJSResponseInfo___closed__3 = (const lean_object*)&l_Lasm_Web_instFromJSResponseInfo___closed__3_value;
static lean_once_cell_t l_Lasm_Web_instFromJSResponseInfo___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instFromJSResponseInfo___closed__4;
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponseInfo;
static const lean_array_object l_Lasm_Web_instInhabitedResponseInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_instInhabitedResponseInfo_default___closed__0 = (const lean_object*)&l_Lasm_Web_instInhabitedResponseInfo_default___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instInhabitedResponseInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 8, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value),((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value),((lean_object*)&l_Lasm_Web_instInhabitedResponseInfo_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_instInhabitedResponseInfo_default___closed__1 = (const lean_object*)&l_Lasm_Web_instInhabitedResponseInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedResponseInfo_default = (const lean_object*)&l_Lasm_Web_instInhabitedResponseInfo_default___closed__1_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instInhabitedResponseInfo = (const lean_object*)&l_Lasm_Web_instInhabitedResponseInfo_default___closed__1_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__0_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__1_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__2_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__3 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__3_value;
static const lean_string_object l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4_value;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5;
static lean_once_cell_t l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__7 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__7_value;
static const lean_ctor_object l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4_value)}};
static const lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__8 = (const lean_object*)&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__8_value;
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__0 = (const lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__0_value;
static const lean_string_object l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__1 = (const lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__1_value;
static lean_once_cell_t l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2;
static lean_once_cell_t l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3;
static const lean_ctor_object l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__0_value)}};
static const lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__4 = (const lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__4_value;
static const lean_ctor_object l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__1_value)}};
static const lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__5 = (const lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__5_value;
static const lean_string_object l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__6 = (const lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__6_value;
static const lean_ctor_object l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__6_value)}};
static const lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__7 = (const lean_object*)&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__7_value;
LEAN_EXPORT lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0(lean_object*);
static const lean_string_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__0 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__0_value;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__1 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__2 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__2_value;
static const lean_string_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__3 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__3_value;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__4 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__2_value),((lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__5 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__5_value;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__7 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__7_value;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__9 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__9_value;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__11 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__11_value;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__13 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__13_value;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__14 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__14_value;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instToJSRequestInit___lam__1___closed__1_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__16 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__16_value;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17;
static const lean_string_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__18 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__18_value;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19;
static lean_once_cell_t l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__0_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__21 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__21_value;
static const lean_ctor_object l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__18_value)}};
static const lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__22 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lasm_Web_instReprResponseInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lasm_Web_instReprResponseInfo_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lasm_Web_instReprResponseInfo___closed__0 = (const lean_object*)&l_Lasm_Web_instReprResponseInfo___closed__0_value;
LEAN_EXPORT const lean_object* l_Lasm_Web_instReprResponseInfo = (const lean_object*)&l_Lasm_Web_instReprResponseInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Lasm.JS "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ": expected Lean type "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lasm.Web.Response"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__2_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ", received JavaScript "};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_fetch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fetch"};
static const lean_object* l_Lasm_Web_Raw_fetch___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_fetch___closed__0_value;
static const lean_string_object l_Lasm_Web_Raw_fetch___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "lasm:web"};
static const lean_object* l_Lasm_Web_Raw_fetch___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value;
static const lean_ctor_object l_Lasm_Web_Raw_fetch___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_fetch___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_fetch___closed__2 = (const lean_object*)&l_Lasm_Web_Raw_fetch___closed__2_value;
static const lean_array_object l_Lasm_Web_Raw_fetch___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lasm_Web_Raw_fetch___closed__3 = (const lean_object*)&l_Lasm_Web_Raw_fetch___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "field "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ": expected "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", received "};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "expected an object"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__4_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__5 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__5_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "expected a two-element array"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__1_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_instInhabitedRequestInit_default___closed__2_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 25, .m_data = "Array ((String × String))"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__0_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ("};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 35, .m_data = "an element is not (String × String)"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__2_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__3_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0_value;
static lean_once_cell_t l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "negative"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2_value;
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "not an integer"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0_value;
static const lean_ctor_object l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__4_value)}};
static const lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__1 = (const lean_object*)&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_responseInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "responseInfo"};
static const lean_object* l_Lasm_Web_Raw_responseInfo___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_responseInfo___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_responseInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_responseInfo___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_responseInfo___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_responseInfo___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_responseInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_responseText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "responseText"};
static const lean_object* l_Lasm_Web_Raw_responseText___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_responseText___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_responseText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_responseText___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_responseText___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_responseText___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_responseText___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__0_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__1_value;
static const lean_closure_object l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__1_value)} };
static const lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_responseJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "responseJson"};
static const lean_object* l_Lasm_Web_Raw_responseJson___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_responseJson___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_responseJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_responseJson___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_responseJson___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_responseJson___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_responseJson___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(lean_object*, uint32_t, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_responseBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "responseBytes"};
static const lean_object* l_Lasm_Web_Raw_responseBytes___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_responseBytes___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_responseBytes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_responseBytes___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_responseBytes___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_responseBytes___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_responseBytes___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lasm.Web.AbortController"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_abortController___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "abortController"};
static const lean_object* l_Lasm_Web_Raw_abortController___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_abortController___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_abortController___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_abortController___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_abortController___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_abortController___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_abortController___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController();
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController___boxed(lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Lasm.Web.AbortSignal"};
static const lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_abortSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "abortSignal"};
static const lean_object* l_Lasm_Web_Raw_abortSignal___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_abortSignal___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_abortSignal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_abortSignal___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_abortSignal___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_abortSignal___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_abortSignal___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_Web_Raw_abort___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_abort___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_abort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_abort___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_abort___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_abort___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_abort___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_timeoutSignal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "timeoutSignal"};
static const lean_object* l_Lasm_Web_Raw_timeoutSignal___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_timeoutSignal___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_timeoutSignal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_timeoutSignal___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_timeoutSignal___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_timeoutSignal___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_timeoutSignal___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal(double);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetch___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "get "};
static const lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0 = (const lean_object*)&l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Response_header___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lasm_Web_Response_header___closed__0 = (const lean_object*)&l_Lasm_Web_Response_header___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_fetchText___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "fetch "};
static const lean_object* l_Lasm_Web_fetchText___lam__1___closed__0 = (const lean_object*)&l_Lasm_Web_fetchText___lam__1___closed__0_value;
static const lean_string_object l_Lasm_Web_fetchText___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ": HTTP "};
static const lean_object* l_Lasm_Web_fetchText___lam__1___closed__1 = (const lean_object*)&l_Lasm_Web_fetchText___lam__1___closed__1_value;
static const lean_string_object l_Lasm_Web_fetchText___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lasm_Web_fetchText___lam__1___closed__2 = (const lean_object*)&l_Lasm_Web_fetchText___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create();
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx___impl(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx___impl___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lasm_Web_Body_ctorIdx___impl(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim___redArg(lean_object* v_t_5_, lean_object* v_k_6_){
_start:
{
switch(lean_obj_tag(v_t_5_))
{
case 0:
{
return v_k_6_;
}
case 1:
{
lean_object* v_text_7_; lean_object* v___x_8_; 
v_text_7_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_text_7_);
lean_dec_ref_known(v_t_5_, 1);
v___x_8_ = lean_apply_1(v_k_6_, v_text_7_);
return v___x_8_;
}
case 2:
{
lean_object* v_bytes_9_; lean_object* v___x_10_; 
v_bytes_9_ = lean_ctor_get(v_t_5_, 0);
lean_inc_ref(v_bytes_9_);
lean_dec_ref_known(v_t_5_, 1);
v___x_10_ = lean_apply_1(v_k_6_, v_bytes_9_);
return v___x_10_;
}
default: 
{
lean_object* v_value_11_; lean_object* v___x_12_; 
v_value_11_ = lean_ctor_get(v_t_5_, 0);
lean_inc(v_value_11_);
lean_dec(v_t_5_);
v___x_12_ = lean_apply_1(v_k_6_, v_value_11_);
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lasm_Web_Body_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_none_elim___redArg(lean_object* v_t_25_, lean_object* v_none_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_25_, v_none_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_none_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_none_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_29_, v_none_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_text_elim___redArg(lean_object* v_t_33_, lean_object* v_text_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_33_, v_text_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_text_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_text_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_37_, v_text_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_bytes_elim___redArg(lean_object* v_t_41_, lean_object* v_bytes_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_41_, v_bytes_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_bytes_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_bytes_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_45_, v_bytes_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_json_elim___redArg(lean_object* v_t_49_, lean_object* v_json_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_49_, v_json_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_json_elim(lean_object* v_motive_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_json_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_53_, v_json_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_form_elim___redArg(lean_object* v_t_57_, lean_object* v_form_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_57_, v_form_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_form_elim(lean_object* v_motive_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_form_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_61_, v_form_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_params_elim___redArg(lean_object* v_t_65_, lean_object* v_params_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_65_, v_params_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_params_elim(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_params_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_69_, v_params_71_);
return v___x_72_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedBody_default(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = lean_box(0);
return v___x_73_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedBody(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_box(0);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__0(lean_object* v_s_87_, lean_object* v_p_88_){
_start:
{
lean_object* v___y_90_; lean_object* v___y_91_; uint32_t v___y_95_; lean_object* v___x_107_; uint8_t v_decide_108_; 
v___x_107_ = lean_string_utf8_byte_size(v_s_87_);
v_decide_108_ = lean_nat_dec_eq(v_p_88_, v___x_107_);
if (v_decide_108_ == 0)
{
uint32_t v___x_109_; uint32_t v___x_110_; uint8_t v___x_111_; 
v___x_109_ = lean_string_utf8_get_fast(v_s_87_, v_p_88_);
v___x_110_ = 65;
v___x_111_ = lean_uint32_dec_le(v___x_110_, v___x_109_);
if (v___x_111_ == 0)
{
v___y_95_ = v___x_109_;
goto v___jp_94_;
}
else
{
uint32_t v___x_112_; uint8_t v___x_113_; 
v___x_112_ = 90;
v___x_113_ = lean_uint32_dec_le(v___x_109_, v___x_112_);
if (v___x_113_ == 0)
{
v___y_95_ = v___x_109_;
goto v___jp_94_;
}
else
{
uint32_t v___x_114_; uint32_t v___x_115_; 
v___x_114_ = 32;
v___x_115_ = lean_uint32_add(v___x_109_, v___x_114_);
v___y_95_ = v___x_115_;
goto v___jp_94_;
}
}
}
else
{
lean_dec(v_p_88_);
return v_s_87_;
}
v___jp_89_:
{
lean_object* v___x_92_; 
v___x_92_ = lean_nat_add(v_p_88_, v___y_91_);
lean_dec(v_p_88_);
v_s_87_ = v___y_90_;
v_p_88_ = v___x_92_;
goto _start;
}
v___jp_94_:
{
lean_object* v___x_96_; uint32_t v___x_97_; uint8_t v___x_98_; 
lean_inc(v_p_88_);
v___x_96_ = lean_string_utf8_set(v_s_87_, v_p_88_, v___y_95_);
v___x_97_ = 127;
v___x_98_ = lean_uint32_dec_le(v___y_95_, v___x_97_);
if (v___x_98_ == 0)
{
uint32_t v___x_99_; uint8_t v___x_100_; 
v___x_99_ = 2047;
v___x_100_ = lean_uint32_dec_le(v___y_95_, v___x_99_);
if (v___x_100_ == 0)
{
uint32_t v___x_101_; uint8_t v___x_102_; 
v___x_101_ = 65535;
v___x_102_ = lean_uint32_dec_le(v___y_95_, v___x_101_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
v___x_103_ = lean_unsigned_to_nat(4u);
v___y_90_ = v___x_96_;
v___y_91_ = v___x_103_;
goto v___jp_89_;
}
else
{
lean_object* v___x_104_; 
v___x_104_ = lean_unsigned_to_nat(3u);
v___y_90_ = v___x_96_;
v___y_91_ = v___x_104_;
goto v___jp_89_;
}
}
else
{
lean_object* v___x_105_; 
v___x_105_ = lean_unsigned_to_nat(2u);
v___y_90_ = v___x_96_;
v___y_91_ = v___x_105_;
goto v___jp_89_;
}
}
else
{
lean_object* v___x_106_; 
v___x_106_ = lean_unsigned_to_nat(1u);
v___y_90_ = v___x_96_;
v___y_91_ = v___x_106_;
goto v___jp_89_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1(lean_object* v_as_117_, size_t v_i_118_, size_t v_stop_119_){
_start:
{
uint8_t v___x_120_; 
v___x_120_ = lean_usize_dec_eq(v_i_118_, v_stop_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; lean_object* v_fst_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v___x_121_ = lean_array_uget_borrowed(v_as_117_, v_i_118_);
v_fst_122_ = lean_ctor_get(v___x_121_, 0);
v___x_123_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_122_);
v___x_124_ = l_String_mapAux___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__0(v_fst_122_, v___x_123_);
v___x_125_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___closed__0));
v___x_126_ = lean_string_dec_eq(v___x_124_, v___x_125_);
lean_dec_ref(v___x_124_);
if (v___x_126_ == 0)
{
size_t v___x_127_; size_t v___x_128_; 
v___x_127_ = ((size_t)1ULL);
v___x_128_ = lean_usize_add(v_i_118_, v___x_127_);
v_i_118_ = v___x_128_;
goto _start;
}
else
{
return v___x_126_;
}
}
else
{
uint8_t v___x_130_; 
v___x_130_ = 0;
return v___x_130_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___boxed(lean_object* v_as_131_, lean_object* v_i_132_, lean_object* v_stop_133_){
_start:
{
size_t v_i_boxed_134_; size_t v_stop_boxed_135_; uint8_t v_res_136_; lean_object* v_r_137_; 
v_i_boxed_134_ = lean_unbox_usize(v_i_132_);
lean_dec(v_i_132_);
v_stop_boxed_135_ = lean_unbox_usize(v_stop_133_);
lean_dec(v_stop_133_);
v_res_136_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1(v_as_131_, v_i_boxed_134_, v_stop_boxed_135_);
lean_dec_ref(v_as_131_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(lean_object* v_headers_138_){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_139_ = lean_unsigned_to_nat(0u);
v___x_140_ = lean_array_get_size(v_headers_138_);
v___x_141_ = lean_nat_dec_lt(v___x_139_, v___x_140_);
if (v___x_141_ == 0)
{
return v___x_141_;
}
else
{
if (v___x_141_ == 0)
{
return v___x_141_;
}
else
{
size_t v___x_142_; size_t v___x_143_; uint8_t v___x_144_; 
v___x_142_ = ((size_t)0ULL);
v___x_143_ = lean_usize_of_nat(v___x_140_);
v___x_144_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1(v_headers_138_, v___x_142_, v___x_143_);
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType___boxed(lean_object* v_headers_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(v_headers_145_);
lean_dec_ref(v_headers_145_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__0(lean_object* v_x_148_){
_start:
{
lean_object* v_fst_149_; lean_object* v_snd_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v_fst_149_ = lean_ctor_get(v_x_148_, 0);
v_snd_150_ = lean_ctor_get(v_x_148_, 1);
lean_inc(v_fst_149_);
v___x_151_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_151_, 0, v_fst_149_);
lean_inc(v_snd_150_);
v___x_152_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_152_, 0, v_snd_150_);
v___x_153_ = lean_unsigned_to_nat(2u);
v___x_154_ = lean_mk_empty_array_with_capacity(v___x_153_);
v___x_155_ = lean_array_push(v___x_154_, v___x_151_);
v___x_156_ = lean_array_push(v___x_155_, v___x_152_);
v___x_157_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__0___boxed(lean_object* v_x_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lasm_Web_instToJSRequestInit___lam__0(v_x_158_);
lean_dec_ref(v_x_158_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__1(lean_object* v___f_192_, lean_object* v_r_193_){
_start:
{
lean_object* v___y_195_; lean_object* v___y_196_; lean_object* v_method_199_; lean_object* v_headers_200_; lean_object* v_body_201_; lean_object* v_credentials_202_; lean_object* v_mode_203_; lean_object* v_cache_204_; lean_object* v_redirect_205_; lean_object* v_signal_206_; lean_object* v___y_208_; lean_object* v___y_209_; lean_object* v___y_247_; 
v_method_199_ = lean_ctor_get(v_r_193_, 0);
lean_inc_ref(v_method_199_);
v_headers_200_ = lean_ctor_get(v_r_193_, 1);
lean_inc_ref(v_headers_200_);
v_body_201_ = lean_ctor_get(v_r_193_, 2);
lean_inc(v_body_201_);
v_credentials_202_ = lean_ctor_get(v_r_193_, 3);
lean_inc_ref(v_credentials_202_);
v_mode_203_ = lean_ctor_get(v_r_193_, 4);
lean_inc_ref(v_mode_203_);
v_cache_204_ = lean_ctor_get(v_r_193_, 5);
lean_inc_ref(v_cache_204_);
v_redirect_205_ = lean_ctor_get(v_r_193_, 6);
lean_inc_ref(v_redirect_205_);
v_signal_206_ = lean_ctor_get(v_r_193_, 7);
lean_inc(v_signal_206_);
lean_dec_ref(v_r_193_);
if (lean_obj_tag(v_body_201_) == 3)
{
uint8_t v___x_285_; 
v___x_285_ = l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(v_headers_200_);
if (v___x_285_ == 0)
{
lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_286_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__20));
v___x_287_ = lean_array_push(v_headers_200_, v___x_286_);
v___y_247_ = v___x_287_;
goto v___jp_246_;
}
else
{
v___y_247_ = v_headers_200_;
goto v___jp_246_;
}
}
else
{
v___y_247_ = v_headers_200_;
goto v___jp_246_;
}
v___jp_194_:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = l_List_appendTR___redArg(v___y_195_, v___y_196_);
v___x_198_ = l_Lasm_JS_obj(v___x_197_);
return v___x_198_;
}
v___jp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; size_t v_sz_215_; size_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_210_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__0));
v___x_211_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_211_, 0, v_method_199_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_210_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v___x_214_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__11));
v_sz_215_ = lean_array_size(v___y_208_);
v___x_216_ = ((size_t)0ULL);
v___x_217_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_214_, v___f_192_, v_sz_215_, v___x_216_, v___y_208_);
v___x_218_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_213_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
v___x_220_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__12));
v___x_221_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_221_, 0, v_credentials_202_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___x_220_);
lean_ctor_set(v___x_222_, 1, v___x_221_);
v___x_223_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__13));
v___x_224_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_224_, 0, v_mode_203_);
v___x_225_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_225_, 0, v___x_223_);
lean_ctor_set(v___x_225_, 1, v___x_224_);
v___x_226_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__14));
v___x_227_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_227_, 0, v_cache_204_);
v___x_228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_226_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__15));
v___x_230_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_230_, 0, v_redirect_205_);
v___x_231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_229_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = lean_box(0);
v___x_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_233_, 0, v___x_231_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_228_);
lean_ctor_set(v___x_234_, 1, v___x_233_);
v___x_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_225_);
lean_ctor_set(v___x_235_, 1, v___x_234_);
v___x_236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_236_, 0, v___x_222_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_219_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_212_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = l_List_appendTR___redArg(v___x_238_, v___y_209_);
if (lean_obj_tag(v_signal_206_) == 0)
{
v___y_195_ = v___x_239_;
v___y_196_ = v___x_232_;
goto v___jp_194_;
}
else
{
lean_object* v_val_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; 
v_val_240_ = lean_ctor_get(v_signal_206_, 0);
lean_inc(v_val_240_);
lean_dec_ref_known(v_signal_206_, 1);
v___x_241_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__16));
v___x_242_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_243_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_243_, 0, v_val_240_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v___x_241_);
lean_ctor_set(v___x_244_, 1, v___x_243_);
v___x_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_244_);
lean_ctor_set(v___x_245_, 1, v___x_232_);
v___y_195_ = v___x_239_;
v___y_196_ = v___x_245_;
goto v___jp_194_;
}
}
v___jp_246_:
{
switch(lean_obj_tag(v_body_201_))
{
case 0:
{
lean_object* v___x_248_; 
v___x_248_ = lean_box(0);
v___y_208_ = v___y_247_;
v___y_209_ = v___x_248_;
goto v___jp_207_;
}
case 1:
{
lean_object* v_text_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_260_; 
v_text_249_ = lean_ctor_get(v_body_201_, 0);
v_isSharedCheck_260_ = !lean_is_exclusive(v_body_201_);
if (v_isSharedCheck_260_ == 0)
{
v___x_251_ = v_body_201_;
v_isShared_252_ = v_isSharedCheck_260_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_text_249_);
lean_dec(v_body_201_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_260_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; lean_object* v___x_255_; 
v___x_253_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_252_ == 0)
{
lean_ctor_set_tag(v___x_251_, 4);
v___x_255_ = v___x_251_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_259_; 
v_reuseFailAlloc_259_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_259_, 0, v_text_249_);
v___x_255_ = v_reuseFailAlloc_259_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_253_);
lean_ctor_set(v___x_256_, 1, v___x_255_);
v___x_257_ = lean_box(0);
v___x_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___y_208_ = v___y_247_;
v___y_209_ = v___x_258_;
goto v___jp_207_;
}
}
}
case 2:
{
lean_object* v_bytes_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_272_; 
v_bytes_261_ = lean_ctor_get(v_body_201_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v_body_201_);
if (v_isSharedCheck_272_ == 0)
{
v___x_263_ = v_body_201_;
v_isShared_264_ = v_isSharedCheck_272_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_bytes_261_);
lean_dec(v_body_201_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_272_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_265_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_264_ == 0)
{
lean_ctor_set_tag(v___x_263_, 6);
v___x_267_ = v___x_263_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_271_; 
v_reuseFailAlloc_271_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_271_, 0, v_bytes_261_);
v___x_267_ = v_reuseFailAlloc_271_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_265_);
lean_ctor_set(v___x_268_, 1, v___x_267_);
v___x_269_ = lean_box(0);
v___x_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___y_208_ = v___y_247_;
v___y_209_ = v___x_270_;
goto v___jp_207_;
}
}
}
case 3:
{
lean_object* v_value_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_value_273_ = lean_ctor_get(v_body_201_, 0);
lean_inc(v_value_273_);
lean_dec_ref_known(v_body_201_, 1);
v___x_274_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__18));
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_274_);
lean_ctor_set(v___x_275_, 1, v_value_273_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_275_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___y_208_ = v___y_247_;
v___y_209_ = v___x_277_;
goto v___jp_207_;
}
default: 
{
lean_object* v_data_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v_data_278_ = lean_ctor_get(v_body_201_, 0);
lean_inc(v_data_278_);
lean_dec(v_body_201_);
v___x_279_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
v___x_280_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_281_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_281_, 0, v_data_278_);
lean_ctor_set(v___x_281_, 1, v___x_280_);
v___x_282_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_282_, 0, v___x_279_);
lean_ctor_set(v___x_282_, 1, v___x_281_);
v___x_283_ = lean_box(0);
v___x_284_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_284_, 0, v___x_282_);
lean_ctor_set(v___x_284_, 1, v___x_283_);
v___y_208_ = v___y_247_;
v___y_209_ = v___x_284_;
goto v___jp_207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0(lean_object* v___x_298_, lean_object* v___x_299_, lean_object* v___x_300_, lean_object* v___x_301_, lean_object* v_d_302_){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_303_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
v___x_304_ = l_Lasm_JS_readField___redArg(v___x_298_, v_d_302_, v___x_303_);
if (lean_obj_tag(v___x_304_) == 0)
{
lean_object* v_a_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_312_; 
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_300_);
lean_dec_ref(v___x_299_);
v_a_305_ = lean_ctor_get(v___x_304_, 0);
v_isSharedCheck_312_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_312_ == 0)
{
v___x_307_ = v___x_304_;
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_a_305_);
lean_dec(v___x_304_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_312_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v___x_310_; 
if (v_isShared_308_ == 0)
{
v___x_310_ = v___x_307_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_a_305_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
else
{
lean_object* v_a_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v_a_313_ = lean_ctor_get(v___x_304_, 0);
lean_inc(v_a_313_);
lean_dec_ref_known(v___x_304_, 1);
v___x_314_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1));
lean_inc_ref(v___x_299_);
v___x_315_ = l_Lasm_JS_readField___redArg(v___x_299_, v_d_302_, v___x_314_);
if (lean_obj_tag(v___x_315_) == 0)
{
lean_object* v_a_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_323_; 
lean_dec(v_a_313_);
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_300_);
lean_dec_ref(v___x_299_);
v_a_316_ = lean_ctor_get(v___x_315_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_315_);
if (v_isSharedCheck_323_ == 0)
{
v___x_318_ = v___x_315_;
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_a_316_);
lean_dec(v___x_315_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_323_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_321_; 
if (v_isShared_319_ == 0)
{
v___x_321_ = v___x_318_;
goto v_reusejp_320_;
}
else
{
lean_object* v_reuseFailAlloc_322_; 
v_reuseFailAlloc_322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_322_, 0, v_a_316_);
v___x_321_ = v_reuseFailAlloc_322_;
goto v_reusejp_320_;
}
v_reusejp_320_:
{
return v___x_321_;
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_325_; lean_object* v___x_326_; 
v_a_324_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_a_324_);
lean_dec_ref_known(v___x_315_, 1);
v___x_325_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
lean_inc_ref(v___x_300_);
v___x_326_ = l_Lasm_JS_readField___redArg(v___x_300_, v_d_302_, v___x_325_);
if (lean_obj_tag(v___x_326_) == 0)
{
lean_object* v_a_327_; lean_object* v___x_329_; uint8_t v_isShared_330_; uint8_t v_isSharedCheck_334_; 
lean_dec(v_a_324_);
lean_dec(v_a_313_);
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_300_);
lean_dec_ref(v___x_299_);
v_a_327_ = lean_ctor_get(v___x_326_, 0);
v_isSharedCheck_334_ = !lean_is_exclusive(v___x_326_);
if (v_isSharedCheck_334_ == 0)
{
v___x_329_ = v___x_326_;
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
else
{
lean_inc(v_a_327_);
lean_dec(v___x_326_);
v___x_329_ = lean_box(0);
v_isShared_330_ = v_isSharedCheck_334_;
goto v_resetjp_328_;
}
v_resetjp_328_:
{
lean_object* v___x_332_; 
if (v_isShared_330_ == 0)
{
v___x_332_ = v___x_329_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v_a_327_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
}
else
{
lean_object* v_a_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
v_a_335_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_a_335_);
lean_dec_ref_known(v___x_326_, 1);
v___x_336_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3));
lean_inc_ref(v___x_299_);
v___x_337_ = l_Lasm_JS_readField___redArg(v___x_299_, v_d_302_, v___x_336_);
if (lean_obj_tag(v___x_337_) == 0)
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v_a_335_);
lean_dec(v_a_324_);
lean_dec(v_a_313_);
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_300_);
lean_dec_ref(v___x_299_);
v_a_338_ = lean_ctor_get(v___x_337_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_337_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_337_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_337_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v_a_346_ = lean_ctor_get(v___x_337_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_337_, 1);
v___x_347_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4));
v___x_348_ = l_Lasm_JS_readField___redArg(v___x_300_, v_d_302_, v___x_347_);
if (lean_obj_tag(v___x_348_) == 0)
{
lean_object* v_a_349_; lean_object* v___x_351_; uint8_t v_isShared_352_; uint8_t v_isSharedCheck_356_; 
lean_dec(v_a_346_);
lean_dec(v_a_335_);
lean_dec(v_a_324_);
lean_dec(v_a_313_);
lean_dec_ref(v___x_301_);
lean_dec_ref(v___x_299_);
v_a_349_ = lean_ctor_get(v___x_348_, 0);
v_isSharedCheck_356_ = !lean_is_exclusive(v___x_348_);
if (v_isSharedCheck_356_ == 0)
{
v___x_351_ = v___x_348_;
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
else
{
lean_inc(v_a_349_);
lean_dec(v___x_348_);
v___x_351_ = lean_box(0);
v_isShared_352_ = v_isSharedCheck_356_;
goto v_resetjp_350_;
}
v_resetjp_350_:
{
lean_object* v___x_354_; 
if (v_isShared_352_ == 0)
{
v___x_354_ = v___x_351_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_a_357_ = lean_ctor_get(v___x_348_, 0);
lean_inc(v_a_357_);
lean_dec_ref_known(v___x_348_, 1);
v___x_358_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5));
v___x_359_ = l_Lasm_JS_readField___redArg(v___x_299_, v_d_302_, v___x_358_);
if (lean_obj_tag(v___x_359_) == 0)
{
lean_object* v_a_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
lean_dec(v_a_357_);
lean_dec(v_a_346_);
lean_dec(v_a_335_);
lean_dec(v_a_324_);
lean_dec(v_a_313_);
lean_dec_ref(v___x_301_);
v_a_360_ = lean_ctor_get(v___x_359_, 0);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_359_);
if (v_isSharedCheck_367_ == 0)
{
v___x_362_ = v___x_359_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_inc(v_a_360_);
lean_dec(v___x_359_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_360_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
else
{
lean_object* v_a_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_a_368_ = lean_ctor_get(v___x_359_, 0);
lean_inc(v_a_368_);
lean_dec_ref_known(v___x_359_, 1);
v___x_369_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v___x_370_ = l_Lasm_JS_readField___redArg(v___x_301_, v_d_302_, v___x_369_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_378_; 
lean_dec(v_a_368_);
lean_dec(v_a_357_);
lean_dec(v_a_346_);
lean_dec(v_a_335_);
lean_dec(v_a_324_);
lean_dec(v_a_313_);
v_a_371_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_378_ == 0)
{
v___x_373_ = v___x_370_;
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_370_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_389_; 
v_a_379_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_389_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_389_ == 0)
{
v___x_381_ = v___x_370_;
v_isShared_382_ = v_isSharedCheck_389_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_370_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_389_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; uint8_t v___x_384_; uint8_t v___x_385_; lean_object* v___x_387_; 
v___x_383_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_383_, 0, v_a_313_);
lean_ctor_set(v___x_383_, 1, v_a_324_);
lean_ctor_set(v___x_383_, 2, v_a_346_);
lean_ctor_set(v___x_383_, 3, v_a_368_);
lean_ctor_set(v___x_383_, 4, v_a_379_);
v___x_384_ = lean_unbox(v_a_335_);
lean_dec(v_a_335_);
lean_ctor_set_uint8(v___x_383_, sizeof(void*)*5, v___x_384_);
v___x_385_ = lean_unbox(v_a_357_);
lean_dec(v_a_357_);
lean_ctor_set_uint8(v___x_383_, sizeof(void*)*5 + 1, v___x_385_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_383_);
v___x_387_ = v___x_381_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_383_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___boxed(lean_object* v___x_390_, lean_object* v___x_391_, lean_object* v___x_392_, lean_object* v___x_393_, lean_object* v_d_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lasm_Web_instFromJSResponseInfo___lam__0(v___x_390_, v___x_391_, v___x_392_, v___x_393_, v_d_394_);
lean_dec(v_d_394_);
return v_res_395_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__0(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_396_ = l_Lasm_JS_instFromJSString;
v___x_397_ = l_Lasm_JS_instFromJSProd___redArg(v___x_396_, v___x_396_);
return v___x_397_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__1(void){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_398_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__0, &l_Lasm_Web_instFromJSResponseInfo___closed__0_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__0);
v___x_399_ = l_Lasm_JS_instFromJSArray___redArg(v___x_398_);
return v___x_399_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__2(void){
_start:
{
lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___f_404_; 
v___x_400_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__1, &l_Lasm_Web_instFromJSResponseInfo___closed__1_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__1);
v___x_401_ = l_Lasm_JS_instFromJSBool;
v___x_402_ = l_Lasm_JS_instFromJSString;
v___x_403_ = l_Lasm_JS_instFromJSNat;
v___f_404_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___boxed), 5, 4);
lean_closure_set(v___f_404_, 0, v___x_403_);
lean_closure_set(v___f_404_, 1, v___x_402_);
lean_closure_set(v___f_404_, 2, v___x_401_);
lean_closure_set(v___f_404_, 3, v___x_400_);
return v___f_404_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__4(void){
_start:
{
uint8_t v___x_406_; lean_object* v___x_407_; lean_object* v___f_408_; lean_object* v___x_409_; 
v___x_406_ = 0;
v___x_407_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___closed__3));
v___f_408_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__2, &l_Lasm_Web_instFromJSResponseInfo___closed__2_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__2);
v___x_409_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_409_, 0, v___f_408_);
lean_ctor_set(v___x_409_, 1, v___x_407_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*2, v___x_406_);
return v___x_409_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo(void){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__4, &l_Lasm_Web_instFromJSResponseInfo___closed__4_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__4);
return v___x_410_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__0));
v___x_429_ = lean_string_length(v___x_428_);
return v___x_429_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_430_; lean_object* v___x_431_; 
v___x_430_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5, &l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5_once, _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5);
v___x_431_ = lean_nat_to_int(v___x_430_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(lean_object* v_x_436_){
_start:
{
lean_object* v_fst_437_; lean_object* v_snd_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_462_; 
v_fst_437_ = lean_ctor_get(v_x_436_, 0);
v_snd_438_ = lean_ctor_get(v_x_436_, 1);
v_isSharedCheck_462_ = !lean_is_exclusive(v_x_436_);
if (v_isSharedCheck_462_ == 0)
{
v___x_440_ = v_x_436_;
v_isShared_441_ = v_isSharedCheck_462_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_snd_438_);
lean_inc(v_fst_437_);
lean_dec(v_x_436_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_462_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_446_; 
v___x_442_ = l_String_quote(v_fst_437_);
v___x_443_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
v___x_444_ = lean_box(0);
if (v_isShared_441_ == 0)
{
lean_ctor_set_tag(v___x_440_, 1);
lean_ctor_set(v___x_440_, 1, v___x_444_);
lean_ctor_set(v___x_440_, 0, v___x_443_);
v___x_446_ = v___x_440_;
goto v_reusejp_445_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v___x_444_);
v___x_446_ = v_reuseFailAlloc_461_;
goto v_reusejp_445_;
}
v_reusejp_445_:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; uint8_t v___x_459_; lean_object* v___x_460_; 
v___x_447_ = l_String_quote(v_snd_438_);
v___x_448_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
v___x_449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
lean_ctor_set(v___x_449_, 1, v___x_446_);
v___x_450_ = l_List_reverse___redArg(v___x_449_);
v___x_451_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__3));
v___x_452_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(v___x_450_, v___x_451_);
v___x_453_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6, &l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6_once, _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6);
v___x_454_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__7));
v___x_455_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_452_);
v___x_456_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__8));
v___x_457_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_455_);
lean_ctor_set(v___x_457_, 1, v___x_456_);
v___x_458_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_453_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
v___x_459_ = 0;
v___x_460_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_460_, 0, v___x_458_);
lean_ctor_set_uint8(v___x_460_, sizeof(void*)*1, v___x_459_);
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_463_, lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_465_) == 0)
{
lean_dec(v_x_463_);
return v_x_464_;
}
else
{
lean_object* v_head_466_; lean_object* v_tail_467_; lean_object* v___x_469_; uint8_t v_isShared_470_; uint8_t v_isSharedCheck_477_; 
v_head_466_ = lean_ctor_get(v_x_465_, 0);
v_tail_467_ = lean_ctor_get(v_x_465_, 1);
v_isSharedCheck_477_ = !lean_is_exclusive(v_x_465_);
if (v_isSharedCheck_477_ == 0)
{
v___x_469_ = v_x_465_;
v_isShared_470_ = v_isSharedCheck_477_;
goto v_resetjp_468_;
}
else
{
lean_inc(v_tail_467_);
lean_inc(v_head_466_);
lean_dec(v_x_465_);
v___x_469_ = lean_box(0);
v_isShared_470_ = v_isSharedCheck_477_;
goto v_resetjp_468_;
}
v_resetjp_468_:
{
lean_object* v___x_472_; 
lean_inc(v_x_463_);
if (v_isShared_470_ == 0)
{
lean_ctor_set_tag(v___x_469_, 5);
lean_ctor_set(v___x_469_, 1, v_x_463_);
lean_ctor_set(v___x_469_, 0, v_x_464_);
v___x_472_ = v___x_469_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v_x_464_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v_x_463_);
v___x_472_ = v_reuseFailAlloc_476_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_466_);
v___x_474_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_474_, 0, v___x_472_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
v_x_464_ = v___x_474_;
v_x_465_ = v_tail_467_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2(lean_object* v_x_478_, lean_object* v_x_479_, lean_object* v_x_480_){
_start:
{
if (lean_obj_tag(v_x_480_) == 0)
{
lean_dec(v_x_478_);
return v_x_479_;
}
else
{
lean_object* v_head_481_; lean_object* v_tail_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_492_; 
v_head_481_ = lean_ctor_get(v_x_480_, 0);
v_tail_482_ = lean_ctor_get(v_x_480_, 1);
v_isSharedCheck_492_ = !lean_is_exclusive(v_x_480_);
if (v_isSharedCheck_492_ == 0)
{
v___x_484_ = v_x_480_;
v_isShared_485_ = v_isSharedCheck_492_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_tail_482_);
lean_inc(v_head_481_);
lean_dec(v_x_480_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_492_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
lean_inc(v_x_478_);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 5);
lean_ctor_set(v___x_484_, 1, v_x_478_);
lean_ctor_set(v___x_484_, 0, v_x_479_);
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_491_; 
v_reuseFailAlloc_491_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_491_, 0, v_x_479_);
lean_ctor_set(v_reuseFailAlloc_491_, 1, v_x_478_);
v___x_487_ = v_reuseFailAlloc_491_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_481_);
v___x_489_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2_spec__3(v_x_478_, v___x_489_, v_tail_482_);
return v___x_490_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1(lean_object* v_x_493_, lean_object* v_x_494_){
_start:
{
if (lean_obj_tag(v_x_493_) == 0)
{
lean_object* v___x_495_; 
lean_dec(v_x_494_);
v___x_495_ = lean_box(0);
return v___x_495_;
}
else
{
lean_object* v_tail_496_; 
v_tail_496_ = lean_ctor_get(v_x_493_, 1);
if (lean_obj_tag(v_tail_496_) == 0)
{
lean_object* v_head_497_; lean_object* v___x_498_; 
lean_dec(v_x_494_);
v_head_497_ = lean_ctor_get(v_x_493_, 0);
lean_inc(v_head_497_);
lean_dec_ref_known(v_x_493_, 2);
v___x_498_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_497_);
return v___x_498_;
}
else
{
lean_object* v_head_499_; lean_object* v___x_500_; lean_object* v___x_501_; 
lean_inc(v_tail_496_);
v_head_499_ = lean_ctor_get(v_x_493_, 0);
lean_inc(v_head_499_);
lean_dec_ref_known(v_x_493_, 2);
v___x_500_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_499_);
v___x_501_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2(v_x_494_, v___x_500_, v_tail_496_);
return v___x_501_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_504_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__0));
v___x_505_ = lean_string_length(v___x_504_);
return v___x_505_;
}
}
static lean_object* _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_506_; lean_object* v___x_507_; 
v___x_506_ = lean_obj_once(&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2, &l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2);
v___x_507_ = lean_nat_to_int(v___x_506_);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0(lean_object* v_xs_515_){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; uint8_t v___x_518_; 
v___x_516_ = lean_array_get_size(v_xs_515_);
v___x_517_ = lean_unsigned_to_nat(0u);
v___x_518_ = lean_nat_dec_eq(v___x_516_, v___x_517_);
if (v___x_518_ == 0)
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_519_ = lean_array_to_list(v_xs_515_);
v___x_520_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__3));
v___x_521_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1(v___x_519_, v___x_520_);
v___x_522_ = lean_obj_once(&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3, &l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3);
v___x_523_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__4));
v___x_524_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_524_, 0, v___x_523_);
lean_ctor_set(v___x_524_, 1, v___x_521_);
v___x_525_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__5));
v___x_526_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_526_, 0, v___x_524_);
lean_ctor_set(v___x_526_, 1, v___x_525_);
v___x_527_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_527_, 0, v___x_522_);
lean_ctor_set(v___x_527_, 1, v___x_526_);
v___x_528_ = l_Std_Format_fill(v___x_527_);
return v___x_528_;
}
else
{
lean_object* v___x_529_; 
lean_dec_ref(v_xs_515_);
v___x_529_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__7));
return v___x_529_;
}
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_unsigned_to_nat(10u);
v___x_543_ = lean_nat_to_int(v___x_542_);
return v___x_543_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_546_ = lean_unsigned_to_nat(14u);
v___x_547_ = lean_nat_to_int(v___x_546_);
return v___x_547_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_unsigned_to_nat(6u);
v___x_551_ = lean_nat_to_int(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_554_ = lean_unsigned_to_nat(7u);
v___x_555_ = lean_nat_to_int(v___x_554_);
return v___x_555_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_unsigned_to_nat(8u);
v___x_561_ = lean_nat_to_int(v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = lean_unsigned_to_nat(11u);
v___x_565_ = lean_nat_to_int(v___x_564_);
return v___x_565_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__0));
v___x_568_ = lean_string_length(v___x_567_);
return v___x_568_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_569_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19);
v___x_570_ = lean_nat_to_int(v___x_569_);
return v___x_570_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg(lean_object* v_x_575_){
_start:
{
lean_object* v_status_576_; lean_object* v_statusText_577_; uint8_t v_ok_578_; lean_object* v_url_579_; uint8_t v_redirected_580_; lean_object* v_type_581_; lean_object* v_headers_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; 
v_status_576_ = lean_ctor_get(v_x_575_, 0);
lean_inc(v_status_576_);
v_statusText_577_ = lean_ctor_get(v_x_575_, 1);
lean_inc_ref(v_statusText_577_);
v_ok_578_ = lean_ctor_get_uint8(v_x_575_, sizeof(void*)*5);
v_url_579_ = lean_ctor_get(v_x_575_, 2);
lean_inc_ref(v_url_579_);
v_redirected_580_ = lean_ctor_get_uint8(v_x_575_, sizeof(void*)*5 + 1);
v_type_581_ = lean_ctor_get(v_x_575_, 3);
lean_inc_ref(v_type_581_);
v_headers_582_ = lean_ctor_get(v_x_575_, 4);
lean_inc_ref(v_headers_582_);
lean_dec_ref(v_x_575_);
v___x_583_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__4));
v___x_584_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__5));
v___x_585_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6);
v___x_586_ = l_Nat_reprFast(v_status_576_);
v___x_587_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_587_, 0, v___x_586_);
v___x_588_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_585_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = 0;
v___x_590_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_590_, 0, v___x_588_);
lean_ctor_set_uint8(v___x_590_, sizeof(void*)*1, v___x_589_);
v___x_591_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_584_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__2));
v___x_593_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_593_, 0, v___x_591_);
lean_ctor_set(v___x_593_, 1, v___x_592_);
v___x_594_ = lean_box(1);
v___x_595_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__7));
v___x_597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_595_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
lean_ctor_set(v___x_598_, 1, v___x_583_);
v___x_599_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8);
v___x_600_ = l_String_quote(v_statusText_577_);
v___x_601_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_601_, 0, v___x_600_);
v___x_602_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_599_);
lean_ctor_set(v___x_602_, 1, v___x_601_);
v___x_603_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_603_, 0, v___x_602_);
lean_ctor_set_uint8(v___x_603_, sizeof(void*)*1, v___x_589_);
v___x_604_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_598_);
lean_ctor_set(v___x_604_, 1, v___x_603_);
v___x_605_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_604_);
lean_ctor_set(v___x_605_, 1, v___x_592_);
v___x_606_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_606_, 0, v___x_605_);
lean_ctor_set(v___x_606_, 1, v___x_594_);
v___x_607_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__9));
v___x_608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_606_);
lean_ctor_set(v___x_608_, 1, v___x_607_);
v___x_609_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
lean_ctor_set(v___x_609_, 1, v___x_583_);
v___x_610_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10);
v___x_611_ = l_Bool_repr___redArg(v_ok_578_);
v___x_612_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_610_);
lean_ctor_set(v___x_612_, 1, v___x_611_);
v___x_613_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_613_, 0, v___x_612_);
lean_ctor_set_uint8(v___x_613_, sizeof(void*)*1, v___x_589_);
v___x_614_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_614_, 0, v___x_609_);
lean_ctor_set(v___x_614_, 1, v___x_613_);
v___x_615_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
lean_ctor_set(v___x_615_, 1, v___x_592_);
v___x_616_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
lean_ctor_set(v___x_616_, 1, v___x_594_);
v___x_617_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__11));
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_616_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___x_583_);
v___x_620_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12);
v___x_621_ = l_String_quote(v_url_579_);
v___x_622_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_622_, 0, v___x_621_);
v___x_623_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_620_);
lean_ctor_set(v___x_623_, 1, v___x_622_);
v___x_624_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set_uint8(v___x_624_, sizeof(void*)*1, v___x_589_);
v___x_625_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_619_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set(v___x_626_, 1, v___x_592_);
v___x_627_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
lean_ctor_set(v___x_627_, 1, v___x_594_);
v___x_628_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__13));
v___x_629_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_627_);
lean_ctor_set(v___x_629_, 1, v___x_628_);
v___x_630_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v___x_583_);
v___x_631_ = l_Bool_repr___redArg(v_redirected_580_);
v___x_632_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_599_);
lean_ctor_set(v___x_632_, 1, v___x_631_);
v___x_633_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_633_, 0, v___x_632_);
lean_ctor_set_uint8(v___x_633_, sizeof(void*)*1, v___x_589_);
v___x_634_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_634_, 0, v___x_630_);
lean_ctor_set(v___x_634_, 1, v___x_633_);
v___x_635_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
lean_ctor_set(v___x_635_, 1, v___x_592_);
v___x_636_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_635_);
lean_ctor_set(v___x_636_, 1, v___x_594_);
v___x_637_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__14));
v___x_638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_636_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
lean_ctor_set(v___x_639_, 1, v___x_583_);
v___x_640_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15);
v___x_641_ = l_String_quote(v_type_581_);
v___x_642_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
v___x_643_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_640_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_644_, 0, v___x_643_);
lean_ctor_set_uint8(v___x_644_, sizeof(void*)*1, v___x_589_);
v___x_645_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_645_, 0, v___x_639_);
lean_ctor_set(v___x_645_, 1, v___x_644_);
v___x_646_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
lean_ctor_set(v___x_646_, 1, v___x_592_);
v___x_647_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set(v___x_647_, 1, v___x_594_);
v___x_648_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__16));
v___x_649_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_647_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
v___x_650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
lean_ctor_set(v___x_650_, 1, v___x_583_);
v___x_651_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17);
v___x_652_ = l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0(v_headers_582_);
v___x_653_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_654_, 0, v___x_653_);
lean_ctor_set_uint8(v___x_654_, sizeof(void*)*1, v___x_589_);
v___x_655_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_650_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v___x_656_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20);
v___x_657_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__21));
v___x_658_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_658_, 0, v___x_657_);
lean_ctor_set(v___x_658_, 1, v___x_655_);
v___x_659_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__22));
v___x_660_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_660_, 0, v___x_658_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
v___x_661_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_661_, 0, v___x_656_);
lean_ctor_set(v___x_661_, 1, v___x_660_);
v___x_662_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_662_, 0, v___x_661_);
lean_ctor_set_uint8(v___x_662_, sizeof(void*)*1, v___x_589_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr(lean_object* v_x_663_, lean_object* v_prec_664_){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = l_Lasm_Web_instReprResponseInfo_repr___redArg(v_x_663_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr___boxed(lean_object* v_x_666_, lean_object* v_prec_667_){
_start:
{
lean_object* v_res_668_; 
v_res_668_ = l_Lasm_Web_instReprResponseInfo_repr(v_x_666_, v_prec_667_);
lean_dec(v_prec_667_);
return v_res_668_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0(lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
lean_object* v___x_671_; 
v___x_671_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_x_669_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___boxed(lean_object* v_x_672_, lean_object* v_x_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0(v_x_672_, v_x_673_);
lean_dec(v_x_673_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(lean_object* v_a_677_, lean_object* v_x_678_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_688_; 
v_a_680_ = lean_ctor_get(v_x_678_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v_x_678_);
if (v_isSharedCheck_688_ == 0)
{
v___x_682_ = v_x_678_;
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v_x_678_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_688_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_687_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
lean_object* v___x_686_; 
v___x_686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_686_, 0, v___x_685_);
return v___x_686_;
}
}
}
else
{
lean_object* v___x_689_; 
lean_dec_ref_known(v_x_678_, 1);
v___x_689_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_677_);
return v___x_689_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed(lean_object* v_a_690_, lean_object* v_x_691_, lean_object* v___y_692_){
_start:
{
lean_object* v_res_693_; 
v_res_693_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(v_a_690_, v_x_691_);
lean_dec(v_a_690_);
return v_res_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(lean_object* v_payload_694_, lean_object* v_failurePrefix_695_, lean_object* v___f_696_, lean_object* v___f_697_, uint32_t v_op_698_, uint64_t v_flags_699_, lean_object* v___f_700_, lean_object* v_x_701_){
_start:
{
if (lean_obj_tag(v_x_701_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_711_; 
lean_dec_ref(v___f_700_);
lean_dec_ref(v___f_697_);
lean_dec_ref(v___f_696_);
lean_dec(v_payload_694_);
v_a_703_ = lean_ctor_get(v_x_701_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v_x_701_);
if (v_isSharedCheck_711_ == 0)
{
v___x_705_ = v_x_701_;
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v_x_701_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_711_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v___x_708_; 
if (v_isShared_706_ == 0)
{
v___x_708_ = v___x_705_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_a_703_);
v___x_708_ = v_reuseFailAlloc_710_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_709_; 
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v___x_708_);
return v___x_709_;
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_753_; 
v_a_712_ = lean_ctor_get(v_x_701_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v_x_701_);
if (v_isSharedCheck_753_ == 0)
{
v___x_714_ = v_x_701_;
v_isShared_715_ = v_isSharedCheck_753_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v_x_701_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_753_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
uint32_t v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_716_ = 0;
lean_inc(v_payload_694_);
v___x_717_ = l_Lasm_JS_Wire_encode(v_payload_694_);
v___x_718_ = lean_string_utf8_byte_size(v_failurePrefix_695_);
v___x_719_ = lean_unsigned_to_nat(0u);
v___x_720_ = lean_nat_dec_eq(v___x_718_, v___x_719_);
if (v___x_720_ == 0)
{
lean_object* v___f_721_; lean_object* v_val_723_; lean_object* v___x_728_; 
lean_dec_ref(v___f_700_);
lean_inc(v_a_712_);
v___f_721_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_721_, 0, v_a_712_);
v___x_728_ = lasm_js_call_into(v_a_712_, v_op_698_, v___x_716_, v_flags_699_, v___x_717_, v_payload_694_);
lean_dec(v_payload_694_);
lean_dec_ref(v___x_717_);
lean_dec(v_a_712_);
if (lean_obj_tag(v___x_728_) == 0)
{
lean_object* v_a_729_; lean_object* v___x_731_; 
v_a_729_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_729_);
lean_dec_ref_known(v___x_728_, 1);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v_a_729_);
v___x_731_ = v___x_714_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_a_729_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
v_val_723_ = v___x_731_;
goto v___jp_722_;
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; 
v_a_733_ = lean_ctor_get(v___x_728_, 0);
lean_inc(v_a_733_);
lean_dec_ref_known(v___x_728_, 1);
if (v_isShared_715_ == 0)
{
lean_ctor_set_tag(v___x_714_, 0);
lean_ctor_set(v___x_714_, 0, v_a_733_);
v___x_735_ = v___x_714_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_733_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
v_val_723_ = v___x_735_;
goto v___jp_722_;
}
}
v___jp_722_:
{
lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_val_723_);
v___x_725_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_720_, v___x_724_, v___f_721_);
v___x_726_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_720_, v___x_725_, v___f_696_);
v___x_727_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_720_, v___x_726_, v___f_697_);
return v___x_727_;
}
}
else
{
lean_object* v___f_737_; uint8_t v___x_738_; lean_object* v_val_740_; lean_object* v___x_744_; 
lean_dec_ref(v___f_697_);
lean_dec_ref(v___f_696_);
lean_inc(v_a_712_);
v___f_737_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_737_, 0, v_a_712_);
v___x_738_ = 0;
v___x_744_ = lasm_js_call_into(v_a_712_, v_op_698_, v___x_716_, v_flags_699_, v___x_717_, v_payload_694_);
lean_dec(v_payload_694_);
lean_dec_ref(v___x_717_);
lean_dec(v_a_712_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v___x_747_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v_a_745_);
v___x_747_ = v___x_714_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v_a_745_);
v___x_747_ = v_reuseFailAlloc_748_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
v_val_740_ = v___x_747_;
goto v___jp_739_;
}
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; 
v_a_749_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_744_, 1);
if (v_isShared_715_ == 0)
{
lean_ctor_set_tag(v___x_714_, 0);
lean_ctor_set(v___x_714_, 0, v_a_749_);
v___x_751_ = v___x_714_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
v_val_740_ = v___x_751_;
goto v___jp_739_;
}
}
v___jp_739_:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
v___x_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_741_, 0, v_val_740_);
v___x_742_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_738_, v___x_741_, v___f_737_);
v___x_743_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_719_, v___x_738_, v___x_742_, v___f_700_);
return v___x_743_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed(lean_object* v_payload_754_, lean_object* v_failurePrefix_755_, lean_object* v___f_756_, lean_object* v___f_757_, lean_object* v_op_758_, lean_object* v_flags_759_, lean_object* v___f_760_, lean_object* v_x_761_, lean_object* v___y_762_){
_start:
{
uint32_t v_op_boxed_763_; uint64_t v_flags_boxed_764_; lean_object* v_res_765_; 
v_op_boxed_763_ = lean_unbox_uint32(v_op_758_);
lean_dec(v_op_758_);
v_flags_boxed_764_ = lean_unbox_uint64(v_flags_759_);
lean_dec_ref(v_flags_759_);
v_res_765_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(v_payload_754_, v_failurePrefix_755_, v___f_756_, v___f_757_, v_op_boxed_763_, v_flags_boxed_764_, v___f_760_, v_x_761_);
lean_dec_ref(v_failurePrefix_755_);
return v_res_765_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(lean_object* v___f_766_, lean_object* v_bytes_767_){
_start:
{
lean_object* v___x_769_; uint8_t v___x_770_; lean_object* v_val_772_; lean_object* v___x_775_; 
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = 0;
v___x_775_ = l_Lasm_JS_Wire_decode(v_bytes_767_);
if (lean_obj_tag(v___x_775_) == 0)
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_775_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_775_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
lean_ctor_set_tag(v___x_778_, 1);
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
v_val_772_ = v___x_781_;
goto v___jp_771_;
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
v_a_784_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_775_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_775_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
lean_ctor_set_tag(v___x_786_, 0);
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
v_val_772_ = v___x_789_;
goto v___jp_771_;
}
}
}
v___jp_771_:
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v_val_772_);
v___x_774_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_769_, v___x_770_, v___x_773_, v___f_766_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed(lean_object* v___f_792_, lean_object* v_bytes_793_, lean_object* v___y_794_){
_start:
{
lean_object* v_res_795_; 
v_res_795_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(v___f_792_, v_bytes_793_);
lean_dec_ref(v_bytes_793_);
return v_res_795_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(lean_object* v_failurePrefix_796_, lean_object* v_x_797_){
_start:
{
if (lean_obj_tag(v_x_797_) == 0)
{
lean_object* v_a_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_810_; 
v_a_799_ = lean_ctor_get(v_x_797_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v_x_797_);
if (v_isSharedCheck_810_ == 0)
{
v___x_801_ = v_x_797_;
v_isShared_802_ = v_isSharedCheck_810_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_a_799_);
lean_dec(v_x_797_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_810_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_803_ = lean_io_error_to_string(v_a_799_);
v___x_804_ = lean_string_append(v_failurePrefix_796_, v___x_803_);
lean_dec_ref(v___x_803_);
v___x_805_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
if (v_isShared_802_ == 0)
{
lean_ctor_set(v___x_801_, 0, v___x_805_);
v___x_807_ = v___x_801_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_809_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; 
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
}
}
else
{
lean_object* v___x_811_; 
lean_dec_ref(v_failurePrefix_796_);
v___x_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_811_, 0, v_x_797_);
return v___x_811_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed(lean_object* v_failurePrefix_812_, lean_object* v_x_813_, lean_object* v___y_814_){
_start:
{
lean_object* v_res_815_; 
v_res_815_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(v_failurePrefix_812_, v_x_813_);
return v_res_815_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(lean_object* v___f_816_, lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_827_; 
lean_dec_ref(v___f_816_);
v_a_819_ = lean_ctor_get(v_x_817_, 0);
v_isSharedCheck_827_ = !lean_is_exclusive(v_x_817_);
if (v_isSharedCheck_827_ == 0)
{
v___x_821_ = v_x_817_;
v_isShared_822_ = v_isSharedCheck_827_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v_x_817_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_827_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_826_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
lean_object* v___x_825_; 
v___x_825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_825_, 0, v___x_824_);
return v___x_825_;
}
}
}
else
{
lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_839_; 
v_isSharedCheck_839_ = !lean_is_exclusive(v_x_817_);
if (v_isSharedCheck_839_ == 0)
{
lean_object* v_unused_840_; 
v_unused_840_ = lean_ctor_get(v_x_817_, 0);
lean_dec(v_unused_840_);
v___x_829_ = v_x_817_;
v_isShared_830_ = v_isSharedCheck_839_;
goto v_resetjp_828_;
}
else
{
lean_dec(v_x_817_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_839_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_831_; uint8_t v___x_832_; lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_831_ = lean_unsigned_to_nat(0u);
v___x_832_ = 0;
v___x_833_ = lean_io_promise_new();
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 0, v___x_833_);
v___x_835_ = v___x_829_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v___x_833_);
v___x_835_ = v_reuseFailAlloc_838_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
v___x_837_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_831_, v___x_832_, v___x_836_, v___f_816_);
return v___x_837_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed(lean_object* v___f_841_, lean_object* v_x_842_, lean_object* v___y_843_){
_start:
{
lean_object* v_res_844_; 
v_res_844_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(v___f_841_, v_x_842_);
return v_res_844_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(lean_object* v___f_845_, lean_object* v_x_846_){
_start:
{
if (lean_obj_tag(v_x_846_) == 0)
{
lean_object* v_a_848_; lean_object* v___x_850_; uint8_t v_isShared_851_; uint8_t v_isSharedCheck_856_; 
lean_dec_ref(v___f_845_);
v_a_848_ = lean_ctor_get(v_x_846_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v_x_846_);
if (v_isSharedCheck_856_ == 0)
{
v___x_850_ = v_x_846_;
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
else
{
lean_inc(v_a_848_);
lean_dec(v_x_846_);
v___x_850_ = lean_box(0);
v_isShared_851_ = v_isSharedCheck_856_;
goto v_resetjp_849_;
}
v_resetjp_849_:
{
lean_object* v___x_853_; 
if (v_isShared_851_ == 0)
{
v___x_853_ = v___x_850_;
goto v_reusejp_852_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_a_848_);
v___x_853_ = v_reuseFailAlloc_855_;
goto v_reusejp_852_;
}
v_reusejp_852_:
{
lean_object* v___x_854_; 
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_853_);
return v___x_854_;
}
}
}
else
{
lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_857_ = lean_ctor_get(v_x_846_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v_x_846_, 1);
v___x_858_ = lean_apply_2(v___f_845_, v_a_857_, lean_box(0));
return v___x_858_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed(lean_object* v___f_859_, lean_object* v_x_860_, lean_object* v___y_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(v___f_859_, v_x_860_);
return v_res_862_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7(void){
_start:
{
lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_870_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___x_871_ = lean_unsigned_to_nat(46u);
v___x_872_ = lean_unsigned_to_nat(193u);
v___x_873_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5));
v___x_874_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4));
v___x_875_ = l_mkPanicMessageWithDecl(v___x_874_, v___x_873_, v___x_872_, v___x_871_, v___x_870_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(lean_object* v_context_877_, lean_object* v_d_878_){
_start:
{
lean_object* v_received_881_; 
if (lean_obj_tag(v_d_878_) == 9)
{
lean_object* v_value_895_; lean_object* v___x_896_; 
v_value_895_ = lean_ctor_get(v_d_878_, 0);
lean_inc(v_value_895_);
lean_dec_ref_known(v_d_878_, 2);
v___x_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_896_, 0, v_value_895_);
return v___x_896_;
}
else
{
if (lean_obj_tag(v_d_878_) == 9)
{
lean_object* v_value_897_; lean_object* v_description_898_; lean_object* v___x_899_; uint8_t v___x_900_; 
v_value_897_ = lean_ctor_get(v_d_878_, 0);
v_description_898_ = lean_ctor_get(v_d_878_, 1);
v___x_899_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_900_ = lean_string_dec_eq(v_description_898_, v___x_899_);
if (v___x_900_ == 0)
{
goto v___jp_893_;
}
else
{
uint32_t v___x_901_; uint64_t v___x_902_; lean_object* v___x_903_; uint32_t v___x_904_; lean_object* v___x_905_; 
lean_inc_n(v_value_897_, 2);
lean_dec_ref_known(v_d_878_, 2);
v___x_901_ = 206;
v___x_902_ = 0ULL;
v___x_903_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_903_, 0, v_value_897_);
lean_ctor_set(v___x_903_, 1, v___x_899_);
v___x_904_ = lasm_js_value_handle(v_value_897_);
lean_dec(v_value_897_);
v___x_905_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_901_, v___x_902_, v___x_903_, v___x_904_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v_a_906_; uint8_t v___x_907_; 
v_a_906_ = lean_ctor_get(v___x_905_, 0);
lean_inc(v_a_906_);
lean_dec_ref_known(v___x_905_, 1);
v___x_907_ = lean_string_validate_utf8(v_a_906_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; lean_object* v___x_909_; 
lean_dec(v_a_906_);
v___x_908_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_909_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_908_);
v_received_881_ = v___x_909_;
goto v___jp_880_;
}
else
{
lean_object* v___x_910_; 
v___x_910_ = lean_string_from_utf8_unchecked(v_a_906_);
v_received_881_ = v___x_910_;
goto v___jp_880_;
}
}
else
{
lean_object* v___x_911_; 
lean_dec_ref_known(v___x_905_, 1);
v___x_911_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v_received_881_ = v___x_911_;
goto v___jp_880_;
}
}
}
else
{
goto v___jp_893_;
}
}
v___jp_880_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_882_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_883_ = lean_string_append(v___x_882_, v_context_877_);
v___x_884_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_885_ = lean_string_append(v___x_883_, v___x_884_);
v___x_886_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__2));
v___x_887_ = lean_string_append(v___x_885_, v___x_886_);
v___x_888_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_889_ = lean_string_append(v___x_887_, v___x_888_);
v___x_890_ = lean_string_append(v___x_889_, v_received_881_);
lean_dec_ref(v_received_881_);
v___x_891_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
v___x_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
return v___x_892_;
}
v___jp_893_:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lasm_JS_Data_describe(v_d_878_);
v_received_881_ = v___x_894_;
goto v___jp_880_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___boxed(lean_object* v_context_912_, lean_object* v_d_913_, lean_object* v_a_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(v_context_912_, v_d_913_);
lean_dec_ref(v_context_912_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1(lean_object* v_context_916_, lean_object* v_x_917_){
_start:
{
lean_object* v_val_920_; 
if (lean_obj_tag(v_x_917_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_930_; 
v_a_922_ = lean_ctor_get(v_x_917_, 0);
v_isSharedCheck_930_ = !lean_is_exclusive(v_x_917_);
if (v_isSharedCheck_930_ == 0)
{
v___x_924_ = v_x_917_;
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v_x_917_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_930_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v___x_927_; 
if (v_isShared_925_ == 0)
{
v___x_927_ = v___x_924_;
goto v_reusejp_926_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_922_);
v___x_927_ = v_reuseFailAlloc_929_;
goto v_reusejp_926_;
}
v_reusejp_926_:
{
lean_object* v___x_928_; 
v___x_928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_928_, 0, v___x_927_);
return v___x_928_;
}
}
}
else
{
lean_object* v_a_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_944_; 
v_a_931_ = lean_ctor_get(v_x_917_, 0);
v_isSharedCheck_944_ = !lean_is_exclusive(v_x_917_);
if (v_isSharedCheck_944_ == 0)
{
v___x_933_ = v_x_917_;
v_isShared_934_ = v_isSharedCheck_944_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_a_931_);
lean_dec(v_x_917_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_944_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; 
v___x_935_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(v_context_916_, v_a_931_);
if (lean_obj_tag(v___x_935_) == 0)
{
lean_object* v_a_936_; lean_object* v___x_938_; 
v_a_936_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_936_);
lean_dec_ref_known(v___x_935_, 1);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v_a_936_);
v___x_938_ = v___x_933_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_936_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
v_val_920_ = v___x_938_;
goto v___jp_919_;
}
}
else
{
lean_object* v_a_940_; lean_object* v___x_942_; 
v_a_940_ = lean_ctor_get(v___x_935_, 0);
lean_inc(v_a_940_);
lean_dec_ref_known(v___x_935_, 1);
if (v_isShared_934_ == 0)
{
lean_ctor_set_tag(v___x_933_, 0);
lean_ctor_set(v___x_933_, 0, v_a_940_);
v___x_942_ = v___x_933_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_943_; 
v_reuseFailAlloc_943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_943_, 0, v_a_940_);
v___x_942_ = v_reuseFailAlloc_943_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
v_val_920_ = v___x_942_;
goto v___jp_919_;
}
}
}
}
v___jp_919_:
{
lean_object* v___x_921_; 
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v_val_920_);
return v___x_921_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1___boxed(lean_object* v_context_945_, lean_object* v_x_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1(v_context_945_, v_x_946_);
lean_dec_ref(v_context_945_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(lean_object* v_context_949_, uint32_t v_op_950_, uint64_t v_flags_951_, lean_object* v_payload_952_, lean_object* v_failurePrefix_953_){
_start:
{
lean_object* v___f_955_; lean_object* v___f_956_; lean_object* v___f_957_; lean_object* v___f_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___f_961_; lean_object* v___f_962_; lean_object* v___x_963_; uint8_t v___x_964_; lean_object* v_val_966_; lean_object* v___x_969_; 
lean_inc_ref(v_failurePrefix_953_);
v___f_955_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_955_, 0, v_failurePrefix_953_);
v___f_956_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_956_, 0, v_context_949_);
v___f_957_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_957_, 0, v___f_956_);
v___f_958_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_958_, 0, v___f_957_);
v___x_959_ = lean_box_uint32(v_op_950_);
v___x_960_ = lean_box_uint64(v_flags_951_);
lean_inc_ref(v___f_958_);
v___f_961_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_961_, 0, v_payload_952_);
lean_closure_set(v___f_961_, 1, v_failurePrefix_953_);
lean_closure_set(v___f_961_, 2, v___f_955_);
lean_closure_set(v___f_961_, 3, v___f_958_);
lean_closure_set(v___f_961_, 4, v___x_959_);
lean_closure_set(v___f_961_, 5, v___x_960_);
lean_closure_set(v___f_961_, 6, v___f_958_);
v___f_962_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_962_, 0, v___f_961_);
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = 0;
v___x_969_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_977_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_977_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_977_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_977_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_975_; 
if (v_isShared_973_ == 0)
{
lean_ctor_set_tag(v___x_972_, 1);
v___x_975_ = v___x_972_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_a_970_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
v_val_966_ = v___x_975_;
goto v___jp_965_;
}
}
}
else
{
lean_object* v_a_978_; lean_object* v___x_980_; uint8_t v_isShared_981_; uint8_t v_isSharedCheck_985_; 
v_a_978_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_985_ == 0)
{
v___x_980_ = v___x_969_;
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
else
{
lean_inc(v_a_978_);
lean_dec(v___x_969_);
v___x_980_ = lean_box(0);
v_isShared_981_ = v_isSharedCheck_985_;
goto v_resetjp_979_;
}
v_resetjp_979_:
{
lean_object* v___x_983_; 
if (v_isShared_981_ == 0)
{
lean_ctor_set_tag(v___x_980_, 0);
v___x_983_ = v___x_980_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_a_978_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
v_val_966_ = v___x_983_;
goto v___jp_965_;
}
}
}
v___jp_965_:
{
lean_object* v___x_967_; lean_object* v___x_968_; 
v___x_967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_967_, 0, v_val_966_);
v___x_968_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_963_, v___x_964_, v___x_967_, v___f_962_);
return v___x_968_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___boxed(lean_object* v_context_986_, lean_object* v_op_987_, lean_object* v_flags_988_, lean_object* v_payload_989_, lean_object* v_failurePrefix_990_, lean_object* v_a_991_){
_start:
{
uint32_t v_op_boxed_992_; uint64_t v_flags_boxed_993_; lean_object* v_res_994_; 
v_op_boxed_992_ = lean_unbox_uint32(v_op_987_);
lean_dec(v_op_987_);
v_flags_boxed_993_ = lean_unbox_uint64(v_flags_988_);
lean_dec_ref(v_flags_988_);
v_res_994_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(v_context_986_, v_op_boxed_992_, v_flags_boxed_993_, v_payload_989_, v_failurePrefix_990_);
return v_res_994_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0(void){
_start:
{
uint8_t v___x_995_; uint64_t v___x_996_; 
v___x_995_ = 1;
v___x_996_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_995_);
return v___x_996_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(lean_object* v_b_998_, lean_object* v_args_999_){
_start:
{
uint8_t v_construct_1001_; lean_object* v___x_1002_; uint32_t v___x_1003_; uint64_t v___x_1004_; uint64_t v___y_1006_; 
v_construct_1001_ = lean_ctor_get_uint8(v_b_998_, sizeof(void*)*4);
v___x_1002_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_998_);
v___x_1003_ = 214;
v___x_1004_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_construct_1001_ == 0)
{
uint64_t v___x_1014_; 
v___x_1014_ = 0ULL;
v___y_1006_ = v___x_1014_;
goto v___jp_1005_;
}
else
{
uint64_t v___x_1015_; 
v___x_1015_ = 4ULL;
v___y_1006_ = v___x_1015_;
goto v___jp_1005_;
}
v___jp_1005_:
{
uint64_t v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1007_ = lean_uint64_lor(v___x_1004_, v___y_1006_);
v___x_1008_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_998_, v_args_999_);
v___x_1009_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1010_ = lean_string_append(v___x_1009_, v___x_1002_);
v___x_1011_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1012_ = lean_string_append(v___x_1010_, v___x_1011_);
v___x_1013_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(v___x_1002_, v___x_1003_, v___x_1007_, v___x_1008_, v___x_1012_);
return v___x_1013_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___boxed(lean_object* v_b_1016_, lean_object* v_args_1017_, lean_object* v_a_1018_){
_start:
{
lean_object* v_res_1019_; 
v_res_1019_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(v_b_1016_, v_args_1017_);
lean_dec_ref(v_b_1016_);
return v_res_1019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(size_t v_sz_1020_, size_t v_i_1021_, lean_object* v_bs_1022_){
_start:
{
uint8_t v___x_1023_; 
v___x_1023_ = lean_usize_dec_lt(v_i_1021_, v_sz_1020_);
if (v___x_1023_ == 0)
{
return v_bs_1022_;
}
else
{
lean_object* v_v_1024_; lean_object* v_fst_1025_; lean_object* v_snd_1026_; lean_object* v___x_1027_; lean_object* v_bs_x27_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; size_t v___x_1036_; size_t v___x_1037_; lean_object* v___x_1038_; 
v_v_1024_ = lean_array_uget_borrowed(v_bs_1022_, v_i_1021_);
v_fst_1025_ = lean_ctor_get(v_v_1024_, 0);
lean_inc(v_fst_1025_);
v_snd_1026_ = lean_ctor_get(v_v_1024_, 1);
lean_inc(v_snd_1026_);
v___x_1027_ = lean_unsigned_to_nat(0u);
v_bs_x27_1028_ = lean_array_uset(v_bs_1022_, v_i_1021_, v___x_1027_);
v___x_1029_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1029_, 0, v_fst_1025_);
v___x_1030_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1030_, 0, v_snd_1026_);
v___x_1031_ = lean_unsigned_to_nat(2u);
v___x_1032_ = lean_mk_empty_array_with_capacity(v___x_1031_);
v___x_1033_ = lean_array_push(v___x_1032_, v___x_1029_);
v___x_1034_ = lean_array_push(v___x_1033_, v___x_1030_);
v___x_1035_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
v___x_1036_ = ((size_t)1ULL);
v___x_1037_ = lean_usize_add(v_i_1021_, v___x_1036_);
v___x_1038_ = lean_array_uset(v_bs_x27_1028_, v_i_1021_, v___x_1035_);
v_i_1021_ = v___x_1037_;
v_bs_1022_ = v___x_1038_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0___boxed(lean_object* v_sz_1040_, lean_object* v_i_1041_, lean_object* v_bs_1042_){
_start:
{
size_t v_sz_boxed_1043_; size_t v_i_boxed_1044_; lean_object* v_res_1045_; 
v_sz_boxed_1043_ = lean_unbox_usize(v_sz_1040_);
lean_dec(v_sz_1040_);
v_i_boxed_1044_ = lean_unbox_usize(v_i_1041_);
lean_dec(v_i_1041_);
v_res_1045_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(v_sz_boxed_1043_, v_i_boxed_1044_, v_bs_1042_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch(lean_object* v_a_1055_, lean_object* v_a_1056_){
_start:
{
lean_object* v___x_1058_; lean_object* v_method_1059_; lean_object* v_headers_1060_; lean_object* v_body_1061_; lean_object* v_credentials_1062_; lean_object* v_mode_1063_; lean_object* v_cache_1064_; lean_object* v_redirect_1065_; lean_object* v_signal_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1078_; lean_object* v___y_1079_; lean_object* v___y_1116_; 
v___x_1058_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__2));
v_method_1059_ = lean_ctor_get(v_a_1056_, 0);
lean_inc_ref(v_method_1059_);
v_headers_1060_ = lean_ctor_get(v_a_1056_, 1);
lean_inc_ref(v_headers_1060_);
v_body_1061_ = lean_ctor_get(v_a_1056_, 2);
lean_inc(v_body_1061_);
v_credentials_1062_ = lean_ctor_get(v_a_1056_, 3);
lean_inc_ref(v_credentials_1062_);
v_mode_1063_ = lean_ctor_get(v_a_1056_, 4);
lean_inc_ref(v_mode_1063_);
v_cache_1064_ = lean_ctor_get(v_a_1056_, 5);
lean_inc_ref(v_cache_1064_);
v_redirect_1065_ = lean_ctor_get(v_a_1056_, 6);
lean_inc_ref(v_redirect_1065_);
v_signal_1066_ = lean_ctor_get(v_a_1056_, 7);
lean_inc(v_signal_1066_);
lean_dec_ref(v_a_1056_);
v___x_1067_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1068_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1068_, 0, v_a_1055_);
v___x_1069_ = lean_array_push(v___x_1067_, v___x_1068_);
if (lean_obj_tag(v_body_1061_) == 3)
{
uint8_t v___x_1154_; 
v___x_1154_ = l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(v_headers_1060_);
if (v___x_1154_ == 0)
{
lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1155_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__20));
v___x_1156_ = lean_array_push(v_headers_1060_, v___x_1155_);
v___y_1116_ = v___x_1156_;
goto v___jp_1115_;
}
else
{
v___y_1116_ = v_headers_1060_;
goto v___jp_1115_;
}
}
else
{
v___y_1116_ = v_headers_1060_;
goto v___jp_1115_;
}
v___jp_1070_:
{
lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1073_ = l_List_appendTR___redArg(v___y_1071_, v___y_1072_);
v___x_1074_ = l_Lasm_JS_obj(v___x_1073_);
v___x_1075_ = lean_array_push(v___x_1069_, v___x_1074_);
v___x_1076_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(v___x_1058_, v___x_1075_);
return v___x_1076_;
}
v___jp_1077_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; size_t v_sz_1084_; size_t v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1080_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__0));
v___x_1081_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1081_, 0, v_method_1059_);
v___x_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1080_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v_sz_1084_ = lean_array_size(v___y_1078_);
v___x_1085_ = ((size_t)0ULL);
v___x_1086_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(v_sz_1084_, v___x_1085_, v___y_1078_);
v___x_1087_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1086_);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1083_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__12));
v___x_1090_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1090_, 0, v_credentials_1062_);
v___x_1091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1089_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__13));
v___x_1093_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1093_, 0, v_mode_1063_);
v___x_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1094_, 0, v___x_1092_);
lean_ctor_set(v___x_1094_, 1, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__14));
v___x_1096_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1096_, 0, v_cache_1064_);
v___x_1097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1095_);
lean_ctor_set(v___x_1097_, 1, v___x_1096_);
v___x_1098_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__15));
v___x_1099_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1099_, 0, v_redirect_1065_);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = lean_box(0);
v___x_1102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1097_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1094_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1091_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1088_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1082_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = l_List_appendTR___redArg(v___x_1107_, v___y_1079_);
if (lean_obj_tag(v_signal_1066_) == 0)
{
v___y_1071_ = v___x_1108_;
v___y_1072_ = v___x_1101_;
goto v___jp_1070_;
}
else
{
lean_object* v_val_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v_val_1109_ = lean_ctor_get(v_signal_1066_, 0);
lean_inc(v_val_1109_);
lean_dec_ref_known(v_signal_1066_, 1);
v___x_1110_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__16));
v___x_1111_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1112_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1112_, 0, v_val_1109_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1110_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
v___x_1114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1114_, 0, v___x_1113_);
lean_ctor_set(v___x_1114_, 1, v___x_1101_);
v___y_1071_ = v___x_1108_;
v___y_1072_ = v___x_1114_;
goto v___jp_1070_;
}
}
v___jp_1115_:
{
switch(lean_obj_tag(v_body_1061_))
{
case 0:
{
lean_object* v___x_1117_; 
v___x_1117_ = lean_box(0);
v___y_1078_ = v___y_1116_;
v___y_1079_ = v___x_1117_;
goto v___jp_1077_;
}
case 1:
{
lean_object* v_text_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1129_; 
v_text_1118_ = lean_ctor_get(v_body_1061_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v_body_1061_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1120_ = v_body_1061_;
v_isShared_1121_ = v_isSharedCheck_1129_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_text_1118_);
lean_dec(v_body_1061_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1129_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1122_; lean_object* v___x_1124_; 
v___x_1122_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_1121_ == 0)
{
lean_ctor_set_tag(v___x_1120_, 4);
v___x_1124_ = v___x_1120_;
goto v_reusejp_1123_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_text_1118_);
v___x_1124_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1123_;
}
v_reusejp_1123_:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1125_, 0, v___x_1122_);
lean_ctor_set(v___x_1125_, 1, v___x_1124_);
v___x_1126_ = lean_box(0);
v___x_1127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1125_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___y_1078_ = v___y_1116_;
v___y_1079_ = v___x_1127_;
goto v___jp_1077_;
}
}
}
case 2:
{
lean_object* v_bytes_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1141_; 
v_bytes_1130_ = lean_ctor_get(v_body_1061_, 0);
v_isSharedCheck_1141_ = !lean_is_exclusive(v_body_1061_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1132_ = v_body_1061_;
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_bytes_1130_);
lean_dec(v_body_1061_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1141_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1134_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_1133_ == 0)
{
lean_ctor_set_tag(v___x_1132_, 6);
v___x_1136_ = v___x_1132_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1140_; 
v_reuseFailAlloc_1140_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1140_, 0, v_bytes_1130_);
v___x_1136_ = v_reuseFailAlloc_1140_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1134_);
lean_ctor_set(v___x_1137_, 1, v___x_1136_);
v___x_1138_ = lean_box(0);
v___x_1139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1137_);
lean_ctor_set(v___x_1139_, 1, v___x_1138_);
v___y_1078_ = v___y_1116_;
v___y_1079_ = v___x_1139_;
goto v___jp_1077_;
}
}
}
case 3:
{
lean_object* v_value_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v_value_1142_ = lean_ctor_get(v_body_1061_, 0);
lean_inc(v_value_1142_);
lean_dec_ref_known(v_body_1061_, 1);
v___x_1143_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__18));
v___x_1144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
lean_ctor_set(v___x_1144_, 1, v_value_1142_);
v___x_1145_ = lean_box(0);
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set(v___x_1146_, 1, v___x_1145_);
v___y_1078_ = v___y_1116_;
v___y_1079_ = v___x_1146_;
goto v___jp_1077_;
}
default: 
{
lean_object* v_data_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v_data_1147_ = lean_ctor_get(v_body_1061_, 0);
lean_inc(v_data_1147_);
lean_dec(v_body_1061_);
v___x_1148_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
v___x_1149_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1150_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1150_, 0, v_data_1147_);
lean_ctor_set(v___x_1150_, 1, v___x_1149_);
v___x_1151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1148_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___x_1152_ = lean_box(0);
v___x_1153_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1151_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___y_1078_ = v___y_1116_;
v___y_1079_ = v___x_1153_;
goto v___jp_1077_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch___boxed(lean_object* v_a_1157_, lean_object* v_a_1158_, lean_object* v_a_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lasm_Web_Raw_fetch(v_a_1157_, v_a_1158_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(lean_object* v_d_1168_, lean_object* v_key_1169_){
_start:
{
if (lean_obj_tag(v_d_1168_) == 8)
{
lean_object* v___x_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1192_; 
v___x_1170_ = l_Lasm_JS_Data_field(v_d_1168_, v_key_1169_);
v_isSharedCheck_1192_ = !lean_is_exclusive(v_d_1168_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; 
v_unused_1193_ = lean_ctor_get(v_d_1168_, 0);
lean_dec(v_unused_1193_);
v___x_1172_ = v_d_1168_;
v_isShared_1173_ = v_isSharedCheck_1192_;
goto v_resetjp_1171_;
}
else
{
lean_dec(v_d_1168_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1192_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
if (lean_obj_tag(v___x_1170_) == 2)
{
uint8_t v_b_1174_; lean_object* v___x_1175_; lean_object* v___x_1177_; 
v_b_1174_ = lean_ctor_get_uint8(v___x_1170_, 0);
lean_dec_ref_known(v___x_1170_, 0);
v___x_1175_ = lean_box(v_b_1174_);
if (v_isShared_1173_ == 0)
{
lean_ctor_set_tag(v___x_1172_, 1);
lean_ctor_set(v___x_1172_, 0, v___x_1175_);
v___x_1177_ = v___x_1172_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v___x_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
else
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1190_; 
v___x_1179_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1180_ = lean_string_append(v___x_1179_, v_key_1169_);
v___x_1181_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1182_ = lean_string_append(v___x_1180_, v___x_1181_);
v___x_1183_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2));
v___x_1184_ = lean_string_append(v___x_1182_, v___x_1183_);
v___x_1185_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1186_ = lean_string_append(v___x_1184_, v___x_1185_);
v___x_1187_ = l_Lasm_JS_Data_describe(v___x_1170_);
v___x_1188_ = lean_string_append(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1187_);
if (v_isShared_1173_ == 0)
{
lean_ctor_set_tag(v___x_1172_, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1188_);
v___x_1190_ = v___x_1172_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
else
{
lean_object* v___x_1194_; 
lean_dec(v_d_1168_);
v___x_1194_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__5));
return v___x_1194_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___boxed(lean_object* v_d_1195_, lean_object* v_key_1196_){
_start:
{
lean_object* v_res_1197_; 
v_res_1197_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1195_, v_key_1196_);
lean_dec_ref(v_key_1196_);
return v_res_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(size_t v_sz_1203_, size_t v_i_1204_, lean_object* v_bs_1205_){
_start:
{
uint8_t v___x_1208_; 
v___x_1208_ = lean_usize_dec_lt(v_i_1204_, v_sz_1203_);
if (v___x_1208_ == 0)
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1209_, 0, v_bs_1205_);
return v___x_1209_;
}
else
{
lean_object* v_v_1210_; 
v_v_1210_ = lean_array_uget_borrowed(v_bs_1205_, v_i_1204_);
if (lean_obj_tag(v_v_1210_) == 7)
{
lean_object* v_items_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; uint8_t v___x_1214_; 
v_items_1211_ = lean_ctor_get(v_v_1210_, 0);
v___x_1212_ = lean_array_get_size(v_items_1211_);
v___x_1213_ = lean_unsigned_to_nat(2u);
v___x_1214_ = lean_nat_dec_eq(v___x_1212_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_dec_ref(v_bs_1205_);
goto v___jp_1206_;
}
else
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = lean_unsigned_to_nat(0u);
v___x_1216_ = lean_array_fget_borrowed(v_items_1211_, v___x_1215_);
if (lean_obj_tag(v___x_1216_) == 4)
{
lean_object* v_s_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v_s_1217_ = lean_ctor_get(v___x_1216_, 0);
lean_inc_ref(v_s_1217_);
v___x_1218_ = lean_unsigned_to_nat(1u);
v___x_1219_ = lean_array_fget_borrowed(v_items_1211_, v___x_1218_);
if (lean_obj_tag(v___x_1219_) == 4)
{
lean_object* v_s_1220_; lean_object* v_bs_x27_1221_; lean_object* v___x_1222_; size_t v___x_1223_; size_t v___x_1224_; lean_object* v___x_1225_; 
v_s_1220_ = lean_ctor_get(v___x_1219_, 0);
lean_inc_ref(v_s_1220_);
v_bs_x27_1221_ = lean_array_uset(v_bs_1205_, v_i_1204_, v___x_1215_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v_s_1217_);
lean_ctor_set(v___x_1222_, 1, v_s_1220_);
v___x_1223_ = ((size_t)1ULL);
v___x_1224_ = lean_usize_add(v_i_1204_, v___x_1223_);
v___x_1225_ = lean_array_uset(v_bs_x27_1221_, v_i_1204_, v___x_1222_);
v_i_1204_ = v___x_1224_;
v_bs_1205_ = v___x_1225_;
goto _start;
}
else
{
lean_object* v___x_1227_; 
lean_dec_ref(v_s_1217_);
lean_dec_ref(v_bs_1205_);
v___x_1227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2));
return v___x_1227_;
}
}
else
{
lean_object* v___x_1228_; 
lean_dec_ref(v_bs_1205_);
v___x_1228_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2));
return v___x_1228_;
}
}
}
else
{
lean_dec_ref(v_bs_1205_);
goto v___jp_1206_;
}
}
v___jp_1206_:
{
lean_object* v___x_1207_; 
v___x_1207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__1));
return v___x_1207_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_sz_1229_, lean_object* v_i_1230_, lean_object* v_bs_1231_){
_start:
{
size_t v_sz_boxed_1232_; size_t v_i_boxed_1233_; lean_object* v_res_1234_; 
v_sz_boxed_1232_ = lean_unbox_usize(v_sz_1229_);
lean_dec(v_sz_1229_);
v_i_boxed_1233_ = lean_unbox_usize(v_i_1230_);
lean_dec(v_i_1230_);
v_res_1234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(v_sz_boxed_1232_, v_i_boxed_1233_, v_bs_1231_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(lean_object* v_d_1240_, lean_object* v_key_1241_){
_start:
{
if (lean_obj_tag(v_d_1240_) == 8)
{
lean_object* v___x_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1285_; 
v___x_1242_ = l_Lasm_JS_Data_field(v_d_1240_, v_key_1241_);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_d_1240_);
if (v_isSharedCheck_1285_ == 0)
{
lean_object* v_unused_1286_; 
v_unused_1286_ = lean_ctor_get(v_d_1240_, 0);
lean_dec(v_unused_1286_);
v___x_1244_ = v_d_1240_;
v_isShared_1245_ = v_isSharedCheck_1285_;
goto v_resetjp_1243_;
}
else
{
lean_dec(v_d_1240_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1285_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v_a_1247_; 
if (lean_obj_tag(v___x_1242_) == 7)
{
lean_object* v_items_1272_; size_t v_sz_1273_; size_t v___x_1274_; lean_object* v___x_1275_; 
v_items_1272_ = lean_ctor_get(v___x_1242_, 0);
v_sz_1273_ = lean_array_size(v_items_1272_);
v___x_1274_ = ((size_t)0ULL);
lean_inc_ref(v_items_1272_);
v___x_1275_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(v_sz_1273_, v___x_1274_, v_items_1272_);
if (lean_obj_tag(v___x_1275_) == 0)
{
lean_object* v_a_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; uint8_t v___x_1280_; 
v_a_1276_ = lean_ctor_get(v___x_1275_, 0);
lean_inc(v_a_1276_);
lean_dec_ref_known(v___x_1275_, 1);
v___x_1277_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__2));
v___x_1278_ = lean_string_utf8_byte_size(v_a_1276_);
v___x_1279_ = lean_unsigned_to_nat(0u);
v___x_1280_ = lean_nat_dec_eq(v___x_1278_, v___x_1279_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; 
v___x_1281_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1282_ = lean_string_append(v___x_1281_, v_a_1276_);
lean_dec(v_a_1276_);
v___x_1283_ = lean_string_append(v___x_1277_, v___x_1282_);
lean_dec_ref(v___x_1282_);
v_a_1247_ = v___x_1283_;
goto v___jp_1246_;
}
else
{
lean_dec(v_a_1276_);
v_a_1247_ = v___x_1277_;
goto v___jp_1246_;
}
}
else
{
lean_dec_ref_known(v___x_1242_, 1);
lean_del_object(v___x_1244_);
return v___x_1275_;
}
}
else
{
lean_object* v___x_1284_; 
v___x_1284_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_1247_ = v___x_1284_;
goto v___jp_1246_;
}
v___jp_1246_:
{
lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; uint8_t v___x_1260_; 
v___x_1248_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1249_ = lean_string_append(v___x_1248_, v_key_1241_);
v___x_1250_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1251_ = lean_string_append(v___x_1249_, v___x_1250_);
v___x_1252_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__0));
v___x_1253_ = lean_string_append(v___x_1251_, v___x_1252_);
v___x_1254_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1255_ = lean_string_append(v___x_1253_, v___x_1254_);
v___x_1256_ = l_Lasm_JS_Data_describe(v___x_1242_);
v___x_1257_ = lean_string_append(v___x_1255_, v___x_1256_);
lean_dec_ref(v___x_1256_);
v___x_1258_ = lean_string_utf8_byte_size(v_a_1247_);
v___x_1259_ = lean_unsigned_to_nat(0u);
v___x_1260_ = lean_nat_dec_eq(v___x_1258_, v___x_1259_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1261_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1262_ = lean_string_append(v___x_1261_, v_a_1247_);
lean_dec_ref(v_a_1247_);
v___x_1263_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1264_ = lean_string_append(v___x_1262_, v___x_1263_);
v___x_1265_ = lean_string_append(v___x_1257_, v___x_1264_);
lean_dec_ref(v___x_1264_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set_tag(v___x_1244_, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1265_);
v___x_1267_ = v___x_1244_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
else
{
lean_object* v___x_1270_; 
lean_dec_ref(v_a_1247_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set_tag(v___x_1244_, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1257_);
v___x_1270_ = v___x_1244_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1257_);
v___x_1270_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
return v___x_1270_;
}
}
}
}
}
else
{
lean_object* v___x_1287_; 
lean_dec(v_d_1240_);
v___x_1287_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__3));
return v___x_1287_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___boxed(lean_object* v_d_1288_, lean_object* v_key_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(v_d_1288_, v_key_1289_);
lean_dec_ref(v_key_1289_);
return v_res_1290_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; 
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = lean_nat_to_int(v___x_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(lean_object* v_d_1298_, lean_object* v_key_1299_){
_start:
{
if (lean_obj_tag(v_d_1298_) == 8)
{
lean_object* v___x_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1343_; 
v___x_1300_ = l_Lasm_JS_Data_field(v_d_1298_, v_key_1299_);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_d_1298_);
if (v_isSharedCheck_1343_ == 0)
{
lean_object* v_unused_1344_; 
v_unused_1344_ = lean_ctor_get(v_d_1298_, 0);
lean_dec(v_unused_1344_);
v___x_1302_ = v_d_1298_;
v_isShared_1303_ = v_isSharedCheck_1343_;
goto v_resetjp_1301_;
}
else
{
lean_dec(v_d_1298_);
v___x_1302_ = lean_box(0);
v_isShared_1303_ = v_isSharedCheck_1343_;
goto v_resetjp_1301_;
}
v_resetjp_1301_:
{
lean_object* v_a_1305_; lean_object* v_a_1331_; 
switch(lean_obj_tag(v___x_1300_))
{
case 3:
{
double v_n_1337_; lean_object* v___x_1338_; 
v_n_1337_ = lean_ctor_get_float(v___x_1300_, 0);
v___x_1338_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1337_);
if (lean_obj_tag(v___x_1338_) == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3));
v_a_1305_ = v___x_1339_;
goto v___jp_1304_;
}
else
{
lean_object* v_val_1340_; 
v_val_1340_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_val_1340_);
lean_dec_ref_known(v___x_1338_, 1);
v_a_1331_ = v_val_1340_;
goto v___jp_1330_;
}
}
case 5:
{
lean_object* v_i_1341_; 
v_i_1341_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_i_1341_);
v_a_1331_ = v_i_1341_;
goto v___jp_1330_;
}
default: 
{
lean_object* v___x_1342_; 
v___x_1342_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_1305_ = v___x_1342_;
goto v___jp_1304_;
}
}
v___jp_1304_:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v___x_1306_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1307_ = lean_string_append(v___x_1306_, v_key_1299_);
v___x_1308_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1309_ = lean_string_append(v___x_1307_, v___x_1308_);
v___x_1310_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0));
v___x_1311_ = lean_string_append(v___x_1309_, v___x_1310_);
v___x_1312_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1313_ = lean_string_append(v___x_1311_, v___x_1312_);
v___x_1314_ = l_Lasm_JS_Data_describe(v___x_1300_);
v___x_1315_ = lean_string_append(v___x_1313_, v___x_1314_);
lean_dec_ref(v___x_1314_);
v___x_1316_ = lean_string_utf8_byte_size(v_a_1305_);
v___x_1317_ = lean_unsigned_to_nat(0u);
v___x_1318_ = lean_nat_dec_eq(v___x_1316_, v___x_1317_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1325_; 
v___x_1319_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1320_ = lean_string_append(v___x_1319_, v_a_1305_);
v___x_1321_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1322_ = lean_string_append(v___x_1320_, v___x_1321_);
v___x_1323_ = lean_string_append(v___x_1315_, v___x_1322_);
lean_dec_ref(v___x_1322_);
if (v_isShared_1303_ == 0)
{
lean_ctor_set_tag(v___x_1302_, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1323_);
v___x_1325_ = v___x_1302_;
goto v_reusejp_1324_;
}
else
{
lean_object* v_reuseFailAlloc_1326_; 
v_reuseFailAlloc_1326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1326_, 0, v___x_1323_);
v___x_1325_ = v_reuseFailAlloc_1326_;
goto v_reusejp_1324_;
}
v_reusejp_1324_:
{
return v___x_1325_;
}
}
else
{
lean_object* v___x_1328_; 
if (v_isShared_1303_ == 0)
{
lean_ctor_set_tag(v___x_1302_, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1315_);
v___x_1328_ = v___x_1302_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1315_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
v___jp_1330_:
{
lean_object* v___x_1332_; uint8_t v___x_1333_; 
v___x_1332_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1);
v___x_1333_ = lean_int_dec_le(v___x_1332_, v_a_1331_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; 
lean_dec(v_a_1331_);
v___x_1334_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2));
v_a_1305_ = v___x_1334_;
goto v___jp_1304_;
}
else
{
lean_object* v___x_1335_; lean_object* v___x_1336_; 
lean_del_object(v___x_1302_);
lean_dec(v___x_1300_);
v___x_1335_ = l_Int_toNat(v_a_1331_);
lean_dec(v_a_1331_);
v___x_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1336_, 0, v___x_1335_);
return v___x_1336_;
}
}
}
}
else
{
lean_object* v___x_1345_; 
lean_dec(v_d_1298_);
v___x_1345_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__4));
return v___x_1345_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1346_, lean_object* v_key_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(v_d_1346_, v_key_1347_);
lean_dec_ref(v_key_1347_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(lean_object* v_d_1352_, lean_object* v_key_1353_){
_start:
{
if (lean_obj_tag(v_d_1352_) == 8)
{
lean_object* v___x_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1379_; 
v___x_1354_ = l_Lasm_JS_Data_field(v_d_1352_, v_key_1353_);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_d_1352_);
if (v_isSharedCheck_1379_ == 0)
{
lean_object* v_unused_1380_; 
v_unused_1380_ = lean_ctor_get(v_d_1352_, 0);
lean_dec(v_unused_1380_);
v___x_1356_ = v_d_1352_;
v_isShared_1357_ = v_isSharedCheck_1379_;
goto v_resetjp_1355_;
}
else
{
lean_dec(v_d_1352_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1379_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
if (lean_obj_tag(v___x_1354_) == 4)
{
lean_object* v_s_1358_; lean_object* v___x_1360_; uint8_t v_isShared_1361_; uint8_t v_isSharedCheck_1365_; 
lean_del_object(v___x_1356_);
v_s_1358_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1365_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1360_ = v___x_1354_;
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
else
{
lean_inc(v_s_1358_);
lean_dec(v___x_1354_);
v___x_1360_ = lean_box(0);
v_isShared_1361_ = v_isSharedCheck_1365_;
goto v_resetjp_1359_;
}
v_resetjp_1359_:
{
lean_object* v___x_1363_; 
if (v_isShared_1361_ == 0)
{
lean_ctor_set_tag(v___x_1360_, 1);
v___x_1363_ = v___x_1360_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v_s_1358_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
}
else
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1366_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1367_ = lean_string_append(v___x_1366_, v_key_1353_);
v___x_1368_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1369_ = lean_string_append(v___x_1367_, v___x_1368_);
v___x_1370_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0));
v___x_1371_ = lean_string_append(v___x_1369_, v___x_1370_);
v___x_1372_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1373_ = lean_string_append(v___x_1371_, v___x_1372_);
v___x_1374_ = l_Lasm_JS_Data_describe(v___x_1354_);
v___x_1375_ = lean_string_append(v___x_1373_, v___x_1374_);
lean_dec_ref(v___x_1374_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set_tag(v___x_1356_, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1375_);
v___x_1377_ = v___x_1356_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
else
{
lean_object* v___x_1381_; 
lean_dec(v_d_1352_);
v___x_1381_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__1));
return v___x_1381_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1382_, lean_object* v_key_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1382_, v_key_1383_);
lean_dec_ref(v_key_1383_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(lean_object* v_context_1385_, lean_object* v_d_1386_){
_start:
{
lean_object* v___y_1389_; lean_object* v___y_1390_; lean_object* v___y_1395_; lean_object* v_received_1396_; lean_object* v___y_1415_; lean_object* v_a_1418_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1442_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
lean_inc(v_d_1386_);
v___x_1443_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(v_d_1386_, v___x_1442_);
if (lean_obj_tag(v___x_1443_) == 0)
{
lean_object* v_a_1444_; 
v_a_1444_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1444_);
lean_dec_ref_known(v___x_1443_, 1);
v_a_1418_ = v_a_1444_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; 
v_a_1445_ = lean_ctor_get(v___x_1443_, 0);
lean_inc(v_a_1445_);
lean_dec_ref_known(v___x_1443_, 1);
v___x_1446_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1));
lean_inc(v_d_1386_);
v___x_1447_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1386_, v___x_1446_);
if (lean_obj_tag(v___x_1447_) == 0)
{
lean_object* v_a_1448_; 
lean_dec(v_a_1445_);
v_a_1448_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_a_1448_);
lean_dec_ref_known(v___x_1447_, 1);
v_a_1418_ = v_a_1448_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v_a_1449_ = lean_ctor_get(v___x_1447_, 0);
lean_inc(v_a_1449_);
lean_dec_ref_known(v___x_1447_, 1);
v___x_1450_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
lean_inc(v_d_1386_);
v___x_1451_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1386_, v___x_1450_);
if (lean_obj_tag(v___x_1451_) == 0)
{
lean_object* v_a_1452_; 
lean_dec(v_a_1449_);
lean_dec(v_a_1445_);
v_a_1452_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1452_);
lean_dec_ref_known(v___x_1451_, 1);
v_a_1418_ = v_a_1452_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_a_1453_ = lean_ctor_get(v___x_1451_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1451_, 1);
v___x_1454_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3));
lean_inc(v_d_1386_);
v___x_1455_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1386_, v___x_1454_);
if (lean_obj_tag(v___x_1455_) == 0)
{
lean_object* v_a_1456_; 
lean_dec(v_a_1453_);
lean_dec(v_a_1449_);
lean_dec(v_a_1445_);
v_a_1456_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1456_);
lean_dec_ref_known(v___x_1455_, 1);
v_a_1418_ = v_a_1456_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v_a_1457_ = lean_ctor_get(v___x_1455_, 0);
lean_inc(v_a_1457_);
lean_dec_ref_known(v___x_1455_, 1);
v___x_1458_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4));
lean_inc(v_d_1386_);
v___x_1459_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1386_, v___x_1458_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_object* v_a_1460_; 
lean_dec(v_a_1457_);
lean_dec(v_a_1453_);
lean_dec(v_a_1449_);
lean_dec(v_a_1445_);
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
lean_dec_ref_known(v___x_1459_, 1);
v_a_1418_ = v_a_1460_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; 
v_a_1461_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1461_);
lean_dec_ref_known(v___x_1459_, 1);
v___x_1462_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5));
lean_inc(v_d_1386_);
v___x_1463_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1386_, v___x_1462_);
if (lean_obj_tag(v___x_1463_) == 0)
{
lean_object* v_a_1464_; 
lean_dec(v_a_1461_);
lean_dec(v_a_1457_);
lean_dec(v_a_1453_);
lean_dec(v_a_1449_);
lean_dec(v_a_1445_);
v_a_1464_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1464_);
lean_dec_ref_known(v___x_1463_, 1);
v_a_1418_ = v_a_1464_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v_a_1465_ = lean_ctor_get(v___x_1463_, 0);
lean_inc(v_a_1465_);
lean_dec_ref_known(v___x_1463_, 1);
v___x_1466_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
lean_inc(v_d_1386_);
v___x_1467_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(v_d_1386_, v___x_1466_);
if (lean_obj_tag(v___x_1467_) == 0)
{
lean_object* v_a_1468_; 
lean_dec(v_a_1465_);
lean_dec(v_a_1461_);
lean_dec(v_a_1457_);
lean_dec(v_a_1453_);
lean_dec(v_a_1449_);
lean_dec(v_a_1445_);
v_a_1468_ = lean_ctor_get(v___x_1467_, 0);
lean_inc(v_a_1468_);
lean_dec_ref_known(v___x_1467_, 1);
v_a_1418_ = v_a_1468_;
goto v___jp_1417_;
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1479_; 
lean_dec(v_d_1386_);
v_a_1469_ = lean_ctor_get(v___x_1467_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1467_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1471_ = v___x_1467_;
v_isShared_1472_ = v_isSharedCheck_1479_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1467_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1479_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1473_; uint8_t v___x_1474_; uint8_t v___x_1475_; lean_object* v___x_1477_; 
v___x_1473_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1473_, 0, v_a_1445_);
lean_ctor_set(v___x_1473_, 1, v_a_1449_);
lean_ctor_set(v___x_1473_, 2, v_a_1457_);
lean_ctor_set(v___x_1473_, 3, v_a_1465_);
lean_ctor_set(v___x_1473_, 4, v_a_1469_);
v___x_1474_ = lean_unbox(v_a_1453_);
lean_dec(v_a_1453_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*5, v___x_1474_);
v___x_1475_ = lean_unbox(v_a_1461_);
lean_dec(v_a_1461_);
lean_ctor_set_uint8(v___x_1473_, sizeof(void*)*5 + 1, v___x_1475_);
if (v_isShared_1472_ == 0)
{
lean_ctor_set_tag(v___x_1471_, 0);
lean_ctor_set(v___x_1471_, 0, v___x_1473_);
v___x_1477_ = v___x_1471_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1473_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
}
}
}
}
}
}
}
}
}
v___jp_1388_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; 
v___x_1391_ = lean_string_append(v___y_1389_, v___y_1390_);
lean_dec_ref(v___y_1390_);
v___x_1392_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1392_, 0, v___x_1391_);
v___x_1393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1393_, 0, v___x_1392_);
return v___x_1393_;
}
v___jp_1394_:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v___x_1397_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1398_ = lean_string_append(v___x_1397_, v_context_1385_);
v___x_1399_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_1400_ = lean_string_append(v___x_1398_, v___x_1399_);
v___x_1401_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___closed__3));
v___x_1402_ = lean_string_append(v___x_1400_, v___x_1401_);
v___x_1403_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_1404_ = lean_string_append(v___x_1402_, v___x_1403_);
v___x_1405_ = lean_string_append(v___x_1404_, v_received_1396_);
lean_dec_ref(v_received_1396_);
v___x_1406_ = lean_string_utf8_byte_size(v___y_1395_);
v___x_1407_ = lean_unsigned_to_nat(0u);
v___x_1408_ = lean_nat_dec_eq(v___x_1406_, v___x_1407_);
if (v___x_1408_ == 0)
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v___x_1409_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1410_ = lean_string_append(v___x_1409_, v___y_1395_);
lean_dec_ref(v___y_1395_);
v___x_1411_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1412_ = lean_string_append(v___x_1410_, v___x_1411_);
v___y_1389_ = v___x_1405_;
v___y_1390_ = v___x_1412_;
goto v___jp_1388_;
}
else
{
lean_object* v___x_1413_; 
lean_dec_ref(v___y_1395_);
v___x_1413_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___y_1389_ = v___x_1405_;
v___y_1390_ = v___x_1413_;
goto v___jp_1388_;
}
}
v___jp_1414_:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_Lasm_JS_Data_describe(v_d_1386_);
v___y_1395_ = v___y_1415_;
v_received_1396_ = v___x_1416_;
goto v___jp_1394_;
}
v___jp_1417_:
{
if (lean_obj_tag(v_d_1386_) == 9)
{
lean_object* v_value_1419_; lean_object* v_description_1420_; lean_object* v___x_1421_; uint8_t v___x_1422_; 
v_value_1419_ = lean_ctor_get(v_d_1386_, 0);
v_description_1420_ = lean_ctor_get(v_d_1386_, 1);
v___x_1421_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1422_ = lean_string_dec_eq(v_description_1420_, v___x_1421_);
if (v___x_1422_ == 0)
{
v___y_1415_ = v_a_1418_;
goto v___jp_1414_;
}
else
{
lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1439_; 
lean_inc(v_value_1419_);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_d_1386_);
if (v_isSharedCheck_1439_ == 0)
{
lean_object* v_unused_1440_; lean_object* v_unused_1441_; 
v_unused_1440_ = lean_ctor_get(v_d_1386_, 1);
lean_dec(v_unused_1440_);
v_unused_1441_ = lean_ctor_get(v_d_1386_, 0);
lean_dec(v_unused_1441_);
v___x_1424_ = v_d_1386_;
v_isShared_1425_ = v_isSharedCheck_1439_;
goto v_resetjp_1423_;
}
else
{
lean_dec(v_d_1386_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1439_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
uint32_t v___x_1426_; uint64_t v___x_1427_; lean_object* v___x_1429_; 
v___x_1426_ = 206;
v___x_1427_ = 0ULL;
lean_inc(v_value_1419_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 1, v___x_1421_);
v___x_1429_ = v___x_1424_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_value_1419_);
lean_ctor_set(v_reuseFailAlloc_1438_, 1, v___x_1421_);
v___x_1429_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
uint32_t v___x_1430_; lean_object* v___x_1431_; 
v___x_1430_ = lasm_js_value_handle(v_value_1419_);
lean_dec(v_value_1419_);
v___x_1431_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1426_, v___x_1427_, v___x_1429_, v___x_1430_);
if (lean_obj_tag(v___x_1431_) == 0)
{
lean_object* v_a_1432_; uint8_t v___x_1433_; 
v_a_1432_ = lean_ctor_get(v___x_1431_, 0);
lean_inc(v_a_1432_);
lean_dec_ref_known(v___x_1431_, 1);
v___x_1433_ = lean_string_validate_utf8(v_a_1432_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1435_; 
lean_dec(v_a_1432_);
v___x_1434_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_1435_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1434_);
v___y_1395_ = v_a_1418_;
v_received_1396_ = v___x_1435_;
goto v___jp_1394_;
}
else
{
lean_object* v___x_1436_; 
v___x_1436_ = lean_string_from_utf8_unchecked(v_a_1432_);
v___y_1395_ = v_a_1418_;
v_received_1396_ = v___x_1436_;
goto v___jp_1394_;
}
}
else
{
lean_object* v___x_1437_; 
lean_dec_ref_known(v___x_1431_, 1);
v___x_1437_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v___y_1395_ = v_a_1418_;
v_received_1396_ = v___x_1437_;
goto v___jp_1394_;
}
}
}
}
}
else
{
v___y_1415_ = v_a_1418_;
goto v___jp_1414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0___boxed(lean_object* v_context_1480_, lean_object* v_d_1481_, lean_object* v_a_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(v_context_1480_, v_d_1481_);
lean_dec_ref(v_context_1480_);
return v_res_1483_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1484_; uint64_t v___x_1485_; 
v___x_1484_ = 0;
v___x_1485_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(lean_object* v_b_1486_, lean_object* v_args_1487_, uint8_t v_await_1488_){
_start:
{
uint64_t v___y_1491_; uint64_t v___y_1492_; uint64_t v___x_1527_; uint64_t v___y_1529_; 
v___x_1527_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_1488_ == 0)
{
uint64_t v___x_1534_; 
v___x_1534_ = 0ULL;
v___y_1529_ = v___x_1534_;
goto v___jp_1528_;
}
else
{
uint64_t v___x_1535_; 
v___x_1535_ = 2ULL;
v___y_1529_ = v___x_1535_;
goto v___jp_1528_;
}
v___jp_1490_:
{
uint64_t v_flags_1493_; uint32_t v___x_1494_; lean_object* v___x_1495_; uint32_t v___x_1496_; lean_object* v___x_1497_; 
v_flags_1493_ = lean_uint64_lor(v___y_1491_, v___y_1492_);
v___x_1494_ = 214;
v___x_1495_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1486_, v_args_1487_);
v___x_1496_ = 0;
v___x_1497_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1494_, v_flags_1493_, v___x_1495_, v___x_1496_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1499_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = l_Lasm_JS_Wire_decode(v_a_1498_);
lean_dec(v_a_1498_);
if (lean_obj_tag(v___x_1499_) == 0)
{
lean_object* v_a_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v_a_1500_ = lean_ctor_get(v___x_1499_, 0);
lean_inc(v_a_1500_);
lean_dec_ref_known(v___x_1499_, 1);
v___x_1501_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1486_);
v___x_1502_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(v___x_1501_, v_a_1500_);
lean_dec_ref(v___x_1501_);
return v___x_1502_;
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
v_a_1503_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1499_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1499_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1526_; 
v_a_1511_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1526_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1526_ == 0)
{
v___x_1513_ = v___x_1497_;
v_isShared_1514_ = v_isSharedCheck_1526_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1497_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1526_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1524_; 
v___x_1515_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1516_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1486_);
v___x_1517_ = lean_string_append(v___x_1515_, v___x_1516_);
lean_dec_ref(v___x_1516_);
v___x_1518_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1519_ = lean_string_append(v___x_1517_, v___x_1518_);
v___x_1520_ = lean_io_error_to_string(v_a_1511_);
v___x_1521_ = lean_string_append(v___x_1519_, v___x_1520_);
lean_dec_ref(v___x_1520_);
v___x_1522_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v___x_1522_);
v___x_1524_ = v___x_1513_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1522_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
}
}
v___jp_1528_:
{
uint8_t v_construct_1530_; uint64_t v___x_1531_; 
v_construct_1530_ = lean_ctor_get_uint8(v_b_1486_, sizeof(void*)*4);
v___x_1531_ = lean_uint64_lor(v___x_1527_, v___y_1529_);
if (v_construct_1530_ == 0)
{
uint64_t v___x_1532_; 
v___x_1532_ = 0ULL;
v___y_1491_ = v___x_1531_;
v___y_1492_ = v___x_1532_;
goto v___jp_1490_;
}
else
{
uint64_t v___x_1533_; 
v___x_1533_ = 4ULL;
v___y_1491_ = v___x_1531_;
v___y_1492_ = v___x_1533_;
goto v___jp_1490_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___boxed(lean_object* v_b_1536_, lean_object* v_args_1537_, lean_object* v_await_1538_, lean_object* v_a_1539_){
_start:
{
uint8_t v_await_boxed_1540_; lean_object* v_res_1541_; 
v_await_boxed_1540_ = lean_unbox(v_await_1538_);
v_res_1541_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(v_b_1536_, v_args_1537_, v_await_boxed_1540_);
lean_dec_ref(v_b_1536_);
return v_res_1541_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo(lean_object* v_a_1548_){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; 
v___x_1550_ = ((lean_object*)(l_Lasm_Web_Raw_responseInfo___closed__1));
v___x_1551_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1552_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1553_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1553_, 0, v_a_1548_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = lean_array_push(v___x_1551_, v___x_1553_);
v___x_1555_ = 1;
v___x_1556_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(v___x_1550_, v___x_1554_, v___x_1555_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo___boxed(lean_object* v_a_1557_, lean_object* v_a_1558_){
_start:
{
lean_object* v_res_1559_; 
v_res_1559_ = l_Lasm_Web_Raw_responseInfo(v_a_1557_);
return v_res_1559_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2(lean_object* v___f_1560_, lean_object* v_x_1561_){
_start:
{
if (lean_obj_tag(v_x_1561_) == 0)
{
lean_object* v_a_1563_; lean_object* v___x_1565_; uint8_t v_isShared_1566_; uint8_t v_isSharedCheck_1571_; 
lean_dec_ref(v___f_1560_);
v_a_1563_ = lean_ctor_get(v_x_1561_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_x_1561_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1565_ = v_x_1561_;
v_isShared_1566_ = v_isSharedCheck_1571_;
goto v_resetjp_1564_;
}
else
{
lean_inc(v_a_1563_);
lean_dec(v_x_1561_);
v___x_1565_ = lean_box(0);
v_isShared_1566_ = v_isSharedCheck_1571_;
goto v_resetjp_1564_;
}
v_resetjp_1564_:
{
lean_object* v___x_1568_; 
if (v_isShared_1566_ == 0)
{
v___x_1568_ = v___x_1565_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_a_1563_);
v___x_1568_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
lean_object* v___x_1569_; 
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
return v___x_1569_;
}
}
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1573_; 
v_a_1572_ = lean_ctor_get(v_x_1561_, 0);
lean_inc(v_a_1572_);
lean_dec_ref_known(v_x_1561_, 1);
v___x_1573_ = lean_apply_2(v___f_1560_, v_a_1572_, lean_box(0));
return v___x_1573_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2___boxed(lean_object* v___f_1574_, lean_object* v_x_1575_, lean_object* v___y_1576_){
_start:
{
lean_object* v_res_1577_; 
v_res_1577_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2(v___f_1574_, v_x_1575_);
return v_res_1577_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6(lean_object* v_payload_1578_, lean_object* v_failurePrefix_1579_, lean_object* v___f_1580_, lean_object* v___f_1581_, uint32_t v_op_1582_, uint64_t v_flags_1583_, lean_object* v___f_1584_, lean_object* v_x_1585_){
_start:
{
if (lean_obj_tag(v_x_1585_) == 0)
{
lean_object* v_a_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1595_; 
lean_dec_ref(v___f_1584_);
lean_dec_ref(v___f_1581_);
lean_dec_ref(v___f_1580_);
lean_dec(v_payload_1578_);
v_a_1587_ = lean_ctor_get(v_x_1585_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v_x_1585_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1589_ = v_x_1585_;
v_isShared_1590_ = v_isSharedCheck_1595_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_a_1587_);
lean_dec(v_x_1585_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1595_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v___x_1592_; 
if (v_isShared_1590_ == 0)
{
v___x_1592_ = v___x_1589_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_a_1587_);
v___x_1592_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1591_;
}
v_reusejp_1591_:
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
return v___x_1593_;
}
}
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1637_; 
v_a_1596_ = lean_ctor_get(v_x_1585_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v_x_1585_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1598_ = v_x_1585_;
v_isShared_1599_ = v_isSharedCheck_1637_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v_x_1585_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1637_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
uint32_t v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; uint8_t v___x_1604_; 
v___x_1600_ = 0;
lean_inc(v_payload_1578_);
v___x_1601_ = l_Lasm_JS_Wire_encode(v_payload_1578_);
v___x_1602_ = lean_string_utf8_byte_size(v_failurePrefix_1579_);
v___x_1603_ = lean_unsigned_to_nat(0u);
v___x_1604_ = lean_nat_dec_eq(v___x_1602_, v___x_1603_);
if (v___x_1604_ == 0)
{
lean_object* v___f_1605_; lean_object* v_val_1607_; lean_object* v___x_1612_; 
lean_dec_ref(v___f_1584_);
lean_inc(v_a_1596_);
v___f_1605_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1605_, 0, v_a_1596_);
v___x_1612_ = lasm_js_call_into(v_a_1596_, v_op_1582_, v___x_1600_, v_flags_1583_, v___x_1601_, v_payload_1578_);
lean_dec(v_payload_1578_);
lean_dec_ref(v___x_1601_);
lean_dec(v_a_1596_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1615_; 
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1613_);
lean_dec_ref_known(v___x_1612_, 1);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v_a_1613_);
v___x_1615_ = v___x_1598_;
goto v_reusejp_1614_;
}
else
{
lean_object* v_reuseFailAlloc_1616_; 
v_reuseFailAlloc_1616_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1616_, 0, v_a_1613_);
v___x_1615_ = v_reuseFailAlloc_1616_;
goto v_reusejp_1614_;
}
v_reusejp_1614_:
{
v_val_1607_ = v___x_1615_;
goto v___jp_1606_;
}
}
else
{
lean_object* v_a_1617_; lean_object* v___x_1619_; 
v_a_1617_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1617_);
lean_dec_ref_known(v___x_1612_, 1);
if (v_isShared_1599_ == 0)
{
lean_ctor_set_tag(v___x_1598_, 0);
lean_ctor_set(v___x_1598_, 0, v_a_1617_);
v___x_1619_ = v___x_1598_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1617_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
v_val_1607_ = v___x_1619_;
goto v___jp_1606_;
}
}
v___jp_1606_:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v_val_1607_);
v___x_1609_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1603_, v___x_1604_, v___x_1608_, v___f_1605_);
v___x_1610_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1603_, v___x_1604_, v___x_1609_, v___f_1580_);
v___x_1611_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1603_, v___x_1604_, v___x_1610_, v___f_1581_);
return v___x_1611_;
}
}
else
{
lean_object* v___f_1621_; uint8_t v___x_1622_; lean_object* v_val_1624_; lean_object* v___x_1628_; 
lean_dec_ref(v___f_1581_);
lean_dec_ref(v___f_1580_);
lean_inc(v_a_1596_);
v___f_1621_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1621_, 0, v_a_1596_);
v___x_1622_ = 0;
v___x_1628_ = lasm_js_call_into(v_a_1596_, v_op_1582_, v___x_1600_, v_flags_1583_, v___x_1601_, v_payload_1578_);
lean_dec(v_payload_1578_);
lean_dec_ref(v___x_1601_);
lean_dec(v_a_1596_);
if (lean_obj_tag(v___x_1628_) == 0)
{
lean_object* v_a_1629_; lean_object* v___x_1631_; 
v_a_1629_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1629_);
lean_dec_ref_known(v___x_1628_, 1);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 0, v_a_1629_);
v___x_1631_ = v___x_1598_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1629_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
v_val_1624_ = v___x_1631_;
goto v___jp_1623_;
}
}
else
{
lean_object* v_a_1633_; lean_object* v___x_1635_; 
v_a_1633_ = lean_ctor_get(v___x_1628_, 0);
lean_inc(v_a_1633_);
lean_dec_ref_known(v___x_1628_, 1);
if (v_isShared_1599_ == 0)
{
lean_ctor_set_tag(v___x_1598_, 0);
lean_ctor_set(v___x_1598_, 0, v_a_1633_);
v___x_1635_ = v___x_1598_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_a_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
v_val_1624_ = v___x_1635_;
goto v___jp_1623_;
}
}
v___jp_1623_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; 
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v_val_1624_);
v___x_1626_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1603_, v___x_1622_, v___x_1625_, v___f_1621_);
v___x_1627_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1603_, v___x_1622_, v___x_1626_, v___f_1584_);
return v___x_1627_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_1638_, lean_object* v_failurePrefix_1639_, lean_object* v___f_1640_, lean_object* v___f_1641_, lean_object* v_op_1642_, lean_object* v_flags_1643_, lean_object* v___f_1644_, lean_object* v_x_1645_, lean_object* v___y_1646_){
_start:
{
uint32_t v_op_boxed_1647_; uint64_t v_flags_boxed_1648_; lean_object* v_res_1649_; 
v_op_boxed_1647_ = lean_unbox_uint32(v_op_1642_);
lean_dec(v_op_1642_);
v_flags_boxed_1648_ = lean_unbox_uint64(v_flags_1643_);
lean_dec_ref(v_flags_1643_);
v_res_1649_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6(v_payload_1638_, v_failurePrefix_1639_, v___f_1640_, v___f_1641_, v_op_boxed_1647_, v_flags_boxed_1648_, v___f_1644_, v_x_1645_);
lean_dec_ref(v_failurePrefix_1639_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(lean_object* v___f_1650_, lean_object* v_bytes_1651_){
_start:
{
lean_object* v___x_1653_; uint8_t v___x_1654_; lean_object* v_val_1656_; lean_object* v___x_1659_; 
v___x_1653_ = lean_unsigned_to_nat(0u);
v___x_1654_ = 0;
v___x_1659_ = l_Lasm_JS_Wire_decode(v_bytes_1651_);
if (lean_obj_tag(v___x_1659_) == 0)
{
lean_object* v_a_1660_; lean_object* v___x_1662_; uint8_t v_isShared_1663_; uint8_t v_isSharedCheck_1667_; 
v_a_1660_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1667_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1667_ == 0)
{
v___x_1662_ = v___x_1659_;
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
else
{
lean_inc(v_a_1660_);
lean_dec(v___x_1659_);
v___x_1662_ = lean_box(0);
v_isShared_1663_ = v_isSharedCheck_1667_;
goto v_resetjp_1661_;
}
v_resetjp_1661_:
{
lean_object* v___x_1665_; 
if (v_isShared_1663_ == 0)
{
lean_ctor_set_tag(v___x_1662_, 1);
v___x_1665_ = v___x_1662_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v_a_1660_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
v_val_1656_ = v___x_1665_;
goto v___jp_1655_;
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
v_a_1668_ = lean_ctor_get(v___x_1659_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1659_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1659_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1659_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
lean_ctor_set_tag(v___x_1670_, 0);
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
v_val_1656_ = v___x_1673_;
goto v___jp_1655_;
}
}
}
v___jp_1655_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v_val_1656_);
v___x_1658_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1653_, v___x_1654_, v___x_1657_, v___f_1650_);
return v___x_1658_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed(lean_object* v___f_1676_, lean_object* v_bytes_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(v___f_1676_, v_bytes_1677_);
lean_dec_ref(v_bytes_1677_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(lean_object* v_context_1680_, lean_object* v_d_1681_){
_start:
{
lean_object* v_received_1684_; 
if (lean_obj_tag(v_d_1681_) == 4)
{
lean_object* v_s_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
v_s_1698_ = lean_ctor_get(v_d_1681_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v_d_1681_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v_d_1681_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_s_1698_);
lean_dec(v_d_1681_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
lean_ctor_set_tag(v___x_1700_, 0);
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_s_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
else
{
if (lean_obj_tag(v_d_1681_) == 9)
{
lean_object* v_value_1706_; lean_object* v_description_1707_; lean_object* v___x_1708_; uint8_t v___x_1709_; 
v_value_1706_ = lean_ctor_get(v_d_1681_, 0);
v_description_1707_ = lean_ctor_get(v_d_1681_, 1);
v___x_1708_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1709_ = lean_string_dec_eq(v_description_1707_, v___x_1708_);
if (v___x_1709_ == 0)
{
goto v___jp_1696_;
}
else
{
uint32_t v___x_1710_; uint64_t v___x_1711_; lean_object* v___x_1712_; uint32_t v___x_1713_; lean_object* v___x_1714_; 
lean_inc_n(v_value_1706_, 2);
lean_dec_ref_known(v_d_1681_, 2);
v___x_1710_ = 206;
v___x_1711_ = 0ULL;
v___x_1712_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1712_, 0, v_value_1706_);
lean_ctor_set(v___x_1712_, 1, v___x_1708_);
v___x_1713_ = lasm_js_value_handle(v_value_1706_);
lean_dec(v_value_1706_);
v___x_1714_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1710_, v___x_1711_, v___x_1712_, v___x_1713_);
if (lean_obj_tag(v___x_1714_) == 0)
{
lean_object* v_a_1715_; uint8_t v___x_1716_; 
v_a_1715_ = lean_ctor_get(v___x_1714_, 0);
lean_inc(v_a_1715_);
lean_dec_ref_known(v___x_1714_, 1);
v___x_1716_ = lean_string_validate_utf8(v_a_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_dec(v_a_1715_);
v___x_1717_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_1718_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1717_);
v_received_1684_ = v___x_1718_;
goto v___jp_1683_;
}
else
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_string_from_utf8_unchecked(v_a_1715_);
v_received_1684_ = v___x_1719_;
goto v___jp_1683_;
}
}
else
{
lean_object* v___x_1720_; 
lean_dec_ref_known(v___x_1714_, 1);
v___x_1720_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v_received_1684_ = v___x_1720_;
goto v___jp_1683_;
}
}
}
else
{
goto v___jp_1696_;
}
}
v___jp_1683_:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1685_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1686_ = lean_string_append(v___x_1685_, v_context_1680_);
v___x_1687_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_1688_ = lean_string_append(v___x_1686_, v___x_1687_);
v___x_1689_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0));
v___x_1690_ = lean_string_append(v___x_1688_, v___x_1689_);
v___x_1691_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_1692_ = lean_string_append(v___x_1690_, v___x_1691_);
v___x_1693_ = lean_string_append(v___x_1692_, v_received_1684_);
lean_dec_ref(v_received_1684_);
v___x_1694_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1693_);
v___x_1695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1695_, 0, v___x_1694_);
return v___x_1695_;
}
v___jp_1696_:
{
lean_object* v___x_1697_; 
v___x_1697_ = l_Lasm_JS_Data_describe(v_d_1681_);
v_received_1684_ = v___x_1697_;
goto v___jp_1683_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1721_, lean_object* v_d_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(v_context_1721_, v_d_1722_);
lean_dec_ref(v_context_1721_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(lean_object* v_context_1725_, lean_object* v_x_1726_){
_start:
{
lean_object* v_val_1729_; 
if (lean_obj_tag(v_x_1726_) == 0)
{
lean_object* v_a_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1739_; 
v_a_1731_ = lean_ctor_get(v_x_1726_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_x_1726_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1733_ = v_x_1726_;
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
else
{
lean_inc(v_a_1731_);
lean_dec(v_x_1726_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1739_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1731_);
v___x_1736_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1737_, 0, v___x_1736_);
return v___x_1737_;
}
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1753_; 
v_a_1740_ = lean_ctor_get(v_x_1726_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v_x_1726_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1742_ = v_x_1726_;
v_isShared_1743_ = v_isSharedCheck_1753_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v_x_1726_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1753_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; 
v___x_1744_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(v_context_1725_, v_a_1740_);
if (lean_obj_tag(v___x_1744_) == 0)
{
lean_object* v_a_1745_; lean_object* v___x_1747_; 
v_a_1745_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1745_);
lean_dec_ref_known(v___x_1744_, 1);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 0, v_a_1745_);
v___x_1747_ = v___x_1742_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_a_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
v_val_1729_ = v___x_1747_;
goto v___jp_1728_;
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1744_, 0);
lean_inc(v_a_1749_);
lean_dec_ref_known(v___x_1744_, 1);
if (v_isShared_1743_ == 0)
{
lean_ctor_set_tag(v___x_1742_, 0);
lean_ctor_set(v___x_1742_, 0, v_a_1749_);
v___x_1751_ = v___x_1742_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1749_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
v_val_1729_ = v___x_1751_;
goto v___jp_1728_;
}
}
}
}
v___jp_1728_:
{
lean_object* v___x_1730_; 
v___x_1730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1730_, 0, v_val_1729_);
return v___x_1730_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed(lean_object* v_context_1754_, lean_object* v_x_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_res_1757_; 
v_res_1757_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(v_context_1754_, v_x_1755_);
lean_dec_ref(v_context_1754_);
return v_res_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3(lean_object* v___f_1758_, lean_object* v_x_1759_){
_start:
{
if (lean_obj_tag(v_x_1759_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v___f_1758_);
v_a_1761_ = lean_ctor_get(v_x_1759_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1763_ = v_x_1759_;
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v_x_1759_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1769_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; 
v___x_1767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1766_);
return v___x_1767_;
}
}
}
else
{
lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1781_; 
v_isSharedCheck_1781_ = !lean_is_exclusive(v_x_1759_);
if (v_isSharedCheck_1781_ == 0)
{
lean_object* v_unused_1782_; 
v_unused_1782_ = lean_ctor_get(v_x_1759_, 0);
lean_dec(v_unused_1782_);
v___x_1771_ = v_x_1759_;
v_isShared_1772_ = v_isSharedCheck_1781_;
goto v_resetjp_1770_;
}
else
{
lean_dec(v_x_1759_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1781_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1773_; uint8_t v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1777_; 
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = 0;
v___x_1775_ = lean_io_promise_new();
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 0, v___x_1775_);
v___x_1777_ = v___x_1771_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v___x_1775_);
v___x_1777_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
v___x_1779_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1773_, v___x_1774_, v___x_1778_, v___f_1758_);
return v___x_1779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3___boxed(lean_object* v___f_1783_, lean_object* v_x_1784_, lean_object* v___y_1785_){
_start:
{
lean_object* v_res_1786_; 
v_res_1786_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3(v___f_1783_, v_x_1784_);
return v_res_1786_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(lean_object* v_context_1787_, uint32_t v_op_1788_, uint64_t v_flags_1789_, lean_object* v_payload_1790_, lean_object* v_failurePrefix_1791_){
_start:
{
lean_object* v___f_1793_; lean_object* v___f_1794_; lean_object* v___f_1795_; lean_object* v___f_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___f_1799_; lean_object* v___f_1800_; lean_object* v___x_1801_; uint8_t v___x_1802_; lean_object* v_val_1804_; lean_object* v___x_1807_; 
lean_inc_ref(v_failurePrefix_1791_);
v___f_1793_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1793_, 0, v_failurePrefix_1791_);
v___f_1794_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1794_, 0, v_context_1787_);
v___f_1795_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1795_, 0, v___f_1794_);
v___f_1796_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1796_, 0, v___f_1795_);
v___x_1797_ = lean_box_uint32(v_op_1788_);
v___x_1798_ = lean_box_uint64(v_flags_1789_);
lean_inc_ref(v___f_1796_);
v___f_1799_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1799_, 0, v_payload_1790_);
lean_closure_set(v___f_1799_, 1, v_failurePrefix_1791_);
lean_closure_set(v___f_1799_, 2, v___f_1793_);
lean_closure_set(v___f_1799_, 3, v___f_1796_);
lean_closure_set(v___f_1799_, 4, v___x_1797_);
lean_closure_set(v___f_1799_, 5, v___x_1798_);
lean_closure_set(v___f_1799_, 6, v___f_1796_);
v___f_1800_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1800_, 0, v___f_1799_);
v___x_1801_ = lean_unsigned_to_nat(0u);
v___x_1802_ = 0;
v___x_1807_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1807_) == 0)
{
lean_object* v_a_1808_; lean_object* v___x_1810_; uint8_t v_isShared_1811_; uint8_t v_isSharedCheck_1815_; 
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1815_ == 0)
{
v___x_1810_ = v___x_1807_;
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
else
{
lean_inc(v_a_1808_);
lean_dec(v___x_1807_);
v___x_1810_ = lean_box(0);
v_isShared_1811_ = v_isSharedCheck_1815_;
goto v_resetjp_1809_;
}
v_resetjp_1809_:
{
lean_object* v___x_1813_; 
if (v_isShared_1811_ == 0)
{
lean_ctor_set_tag(v___x_1810_, 1);
v___x_1813_ = v___x_1810_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_a_1808_);
v___x_1813_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
v_val_1804_ = v___x_1813_;
goto v___jp_1803_;
}
}
}
else
{
lean_object* v_a_1816_; lean_object* v___x_1818_; uint8_t v_isShared_1819_; uint8_t v_isSharedCheck_1823_; 
v_a_1816_ = lean_ctor_get(v___x_1807_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v___x_1807_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1818_ = v___x_1807_;
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
else
{
lean_inc(v_a_1816_);
lean_dec(v___x_1807_);
v___x_1818_ = lean_box(0);
v_isShared_1819_ = v_isSharedCheck_1823_;
goto v_resetjp_1817_;
}
v_resetjp_1817_:
{
lean_object* v___x_1821_; 
if (v_isShared_1819_ == 0)
{
lean_ctor_set_tag(v___x_1818_, 0);
v___x_1821_ = v___x_1818_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_a_1816_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
v_val_1804_ = v___x_1821_;
goto v___jp_1803_;
}
}
}
v___jp_1803_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1805_, 0, v_val_1804_);
v___x_1806_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1801_, v___x_1802_, v___x_1805_, v___f_1800_);
return v___x_1806_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___boxed(lean_object* v_context_1824_, lean_object* v_op_1825_, lean_object* v_flags_1826_, lean_object* v_payload_1827_, lean_object* v_failurePrefix_1828_, lean_object* v_a_1829_){
_start:
{
uint32_t v_op_boxed_1830_; uint64_t v_flags_boxed_1831_; lean_object* v_res_1832_; 
v_op_boxed_1830_ = lean_unbox_uint32(v_op_1825_);
lean_dec(v_op_1825_);
v_flags_boxed_1831_ = lean_unbox_uint64(v_flags_1826_);
lean_dec_ref(v_flags_1826_);
v_res_1832_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(v_context_1824_, v_op_boxed_1830_, v_flags_boxed_1831_, v_payload_1827_, v_failurePrefix_1828_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(lean_object* v_b_1833_, lean_object* v_args_1834_){
_start:
{
uint8_t v_construct_1836_; lean_object* v___x_1837_; uint32_t v___x_1838_; uint64_t v___x_1839_; uint64_t v___y_1841_; 
v_construct_1836_ = lean_ctor_get_uint8(v_b_1833_, sizeof(void*)*4);
v___x_1837_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1833_);
v___x_1838_ = 214;
v___x_1839_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_1836_ == 0)
{
uint64_t v___x_1849_; 
v___x_1849_ = 0ULL;
v___y_1841_ = v___x_1849_;
goto v___jp_1840_;
}
else
{
uint64_t v___x_1850_; 
v___x_1850_ = 4ULL;
v___y_1841_ = v___x_1850_;
goto v___jp_1840_;
}
v___jp_1840_:
{
uint64_t v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1842_ = lean_uint64_lor(v___x_1839_, v___y_1841_);
v___x_1843_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1833_, v_args_1834_);
v___x_1844_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1845_ = lean_string_append(v___x_1844_, v___x_1837_);
v___x_1846_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1847_ = lean_string_append(v___x_1845_, v___x_1846_);
v___x_1848_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(v___x_1837_, v___x_1838_, v___x_1842_, v___x_1843_, v___x_1847_);
return v___x_1848_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0___boxed(lean_object* v_b_1851_, lean_object* v_args_1852_, lean_object* v_a_1853_){
_start:
{
lean_object* v_res_1854_; 
v_res_1854_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(v_b_1851_, v_args_1852_);
lean_dec_ref(v_b_1851_);
return v_res_1854_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText(lean_object* v_a_1861_){
_start:
{
lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; 
v___x_1863_ = ((lean_object*)(l_Lasm_Web_Raw_responseText___closed__1));
v___x_1864_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1865_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1866_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1866_, 0, v_a_1861_);
lean_ctor_set(v___x_1866_, 1, v___x_1865_);
v___x_1867_ = lean_array_push(v___x_1864_, v___x_1866_);
v___x_1868_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(v___x_1863_, v___x_1867_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText___boxed(lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l_Lasm_Web_Raw_responseText(v_a_1869_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(lean_object* v___f_1872_, lean_object* v_bytes_1873_){
_start:
{
lean_object* v___x_1875_; uint8_t v___x_1876_; lean_object* v_val_1878_; lean_object* v___x_1881_; 
v___x_1875_ = lean_unsigned_to_nat(0u);
v___x_1876_ = 0;
v___x_1881_ = l_Lasm_JS_Wire_decode(v_bytes_1873_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1889_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1889_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1889_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1889_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v___x_1887_; 
if (v_isShared_1885_ == 0)
{
lean_ctor_set_tag(v___x_1884_, 1);
v___x_1887_ = v___x_1884_;
goto v_reusejp_1886_;
}
else
{
lean_object* v_reuseFailAlloc_1888_; 
v_reuseFailAlloc_1888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1888_, 0, v_a_1882_);
v___x_1887_ = v_reuseFailAlloc_1888_;
goto v_reusejp_1886_;
}
v_reusejp_1886_:
{
v_val_1878_ = v___x_1887_;
goto v___jp_1877_;
}
}
}
else
{
lean_object* v_a_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1897_; 
v_a_1890_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1897_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1897_ == 0)
{
v___x_1892_ = v___x_1881_;
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_a_1890_);
lean_dec(v___x_1881_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1897_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1895_; 
if (v_isShared_1893_ == 0)
{
lean_ctor_set_tag(v___x_1892_, 0);
v___x_1895_ = v___x_1892_;
goto v_reusejp_1894_;
}
else
{
lean_object* v_reuseFailAlloc_1896_; 
v_reuseFailAlloc_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1896_, 0, v_a_1890_);
v___x_1895_ = v_reuseFailAlloc_1896_;
goto v_reusejp_1894_;
}
v_reusejp_1894_:
{
v_val_1878_ = v___x_1895_;
goto v___jp_1877_;
}
}
}
v___jp_1877_:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1879_, 0, v_val_1878_);
v___x_1880_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1875_, v___x_1876_, v___x_1879_, v___f_1872_);
return v___x_1880_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v___f_1898_, lean_object* v_bytes_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(v___f_1898_, v_bytes_1899_);
lean_dec_ref(v_bytes_1899_);
return v_res_1901_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6(lean_object* v_payload_1902_, lean_object* v_failurePrefix_1903_, lean_object* v___f_1904_, lean_object* v___f_1905_, uint32_t v_op_1906_, uint64_t v_flags_1907_, lean_object* v___f_1908_, lean_object* v_x_1909_){
_start:
{
if (lean_obj_tag(v_x_1909_) == 0)
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1919_; 
lean_dec_ref(v___f_1908_);
lean_dec_ref(v___f_1905_);
lean_dec_ref(v___f_1904_);
lean_dec(v_payload_1902_);
v_a_1911_ = lean_ctor_get(v_x_1909_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_x_1909_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1913_ = v_x_1909_;
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v_x_1909_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1919_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
lean_object* v___x_1917_; 
v___x_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
return v___x_1917_;
}
}
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1961_; 
v_a_1920_ = lean_ctor_get(v_x_1909_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v_x_1909_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1922_ = v_x_1909_;
v_isShared_1923_ = v_isSharedCheck_1961_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v_x_1909_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1961_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
uint32_t v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; uint8_t v___x_1928_; 
v___x_1924_ = 0;
lean_inc(v_payload_1902_);
v___x_1925_ = l_Lasm_JS_Wire_encode(v_payload_1902_);
v___x_1926_ = lean_string_utf8_byte_size(v_failurePrefix_1903_);
v___x_1927_ = lean_unsigned_to_nat(0u);
v___x_1928_ = lean_nat_dec_eq(v___x_1926_, v___x_1927_);
if (v___x_1928_ == 0)
{
lean_object* v___f_1929_; lean_object* v_val_1931_; lean_object* v___x_1936_; 
lean_dec_ref(v___f_1908_);
lean_inc(v_a_1920_);
v___f_1929_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1929_, 0, v_a_1920_);
v___x_1936_ = lasm_js_call_into(v_a_1920_, v_op_1906_, v___x_1924_, v_flags_1907_, v___x_1925_, v_payload_1902_);
lean_dec(v_payload_1902_);
lean_dec_ref(v___x_1925_);
lean_dec(v_a_1920_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; lean_object* v___x_1939_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref_known(v___x_1936_, 1);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v_a_1937_);
v___x_1939_ = v___x_1922_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
v_val_1931_ = v___x_1939_;
goto v___jp_1930_;
}
}
else
{
lean_object* v_a_1941_; lean_object* v___x_1943_; 
v_a_1941_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1941_);
lean_dec_ref_known(v___x_1936_, 1);
if (v_isShared_1923_ == 0)
{
lean_ctor_set_tag(v___x_1922_, 0);
lean_ctor_set(v___x_1922_, 0, v_a_1941_);
v___x_1943_ = v___x_1922_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_a_1941_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
v_val_1931_ = v___x_1943_;
goto v___jp_1930_;
}
}
v___jp_1930_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1932_, 0, v_val_1931_);
v___x_1933_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1927_, v___x_1928_, v___x_1932_, v___f_1929_);
v___x_1934_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1927_, v___x_1928_, v___x_1933_, v___f_1904_);
v___x_1935_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1927_, v___x_1928_, v___x_1934_, v___f_1905_);
return v___x_1935_;
}
}
else
{
lean_object* v___f_1945_; uint8_t v___x_1946_; lean_object* v_val_1948_; lean_object* v___x_1952_; 
lean_dec_ref(v___f_1905_);
lean_dec_ref(v___f_1904_);
lean_inc(v_a_1920_);
v___f_1945_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1945_, 0, v_a_1920_);
v___x_1946_ = 0;
v___x_1952_ = lasm_js_call_into(v_a_1920_, v_op_1906_, v___x_1924_, v_flags_1907_, v___x_1925_, v_payload_1902_);
lean_dec(v_payload_1902_);
lean_dec_ref(v___x_1925_);
lean_dec(v_a_1920_);
if (lean_obj_tag(v___x_1952_) == 0)
{
lean_object* v_a_1953_; lean_object* v___x_1955_; 
v_a_1953_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1953_);
lean_dec_ref_known(v___x_1952_, 1);
if (v_isShared_1923_ == 0)
{
lean_ctor_set(v___x_1922_, 0, v_a_1953_);
v___x_1955_ = v___x_1922_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1953_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
v_val_1948_ = v___x_1955_;
goto v___jp_1947_;
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; 
v_a_1957_ = lean_ctor_get(v___x_1952_, 0);
lean_inc(v_a_1957_);
lean_dec_ref_known(v___x_1952_, 1);
if (v_isShared_1923_ == 0)
{
lean_ctor_set_tag(v___x_1922_, 0);
lean_ctor_set(v___x_1922_, 0, v_a_1957_);
v___x_1959_ = v___x_1922_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1957_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
v_val_1948_ = v___x_1959_;
goto v___jp_1947_;
}
}
v___jp_1947_:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1949_, 0, v_val_1948_);
v___x_1950_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1927_, v___x_1946_, v___x_1949_, v___f_1945_);
v___x_1951_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1927_, v___x_1946_, v___x_1950_, v___f_1908_);
return v___x_1951_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_payload_1962_, lean_object* v_failurePrefix_1963_, lean_object* v___f_1964_, lean_object* v___f_1965_, lean_object* v_op_1966_, lean_object* v_flags_1967_, lean_object* v___f_1968_, lean_object* v_x_1969_, lean_object* v___y_1970_){
_start:
{
uint32_t v_op_boxed_1971_; uint64_t v_flags_boxed_1972_; lean_object* v_res_1973_; 
v_op_boxed_1971_ = lean_unbox_uint32(v_op_1966_);
lean_dec(v_op_1966_);
v_flags_boxed_1972_ = lean_unbox_uint64(v_flags_1967_);
lean_dec_ref(v_flags_1967_);
v_res_1973_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6(v_payload_1962_, v_failurePrefix_1963_, v___f_1964_, v___f_1965_, v_op_boxed_1971_, v_flags_boxed_1972_, v___f_1968_, v_x_1969_);
lean_dec_ref(v_failurePrefix_1963_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(lean_object* v___f_1974_, lean_object* v_x_1975_){
_start:
{
if (lean_obj_tag(v_x_1975_) == 0)
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1985_; 
lean_dec_ref(v___f_1974_);
v_a_1977_ = lean_ctor_get(v_x_1975_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v_x_1975_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1979_ = v_x_1975_;
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v_x_1975_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1985_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
lean_object* v___x_1983_; 
v___x_1983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
return v___x_1983_;
}
}
}
else
{
lean_object* v_a_1986_; lean_object* v___x_1987_; 
v_a_1986_ = lean_ctor_get(v_x_1975_, 0);
lean_inc(v_a_1986_);
lean_dec_ref_known(v_x_1975_, 1);
v___x_1987_ = lean_apply_2(v___f_1974_, v_a_1986_, lean_box(0));
return v___x_1987_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_1988_, lean_object* v_x_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v_res_1991_; 
v_res_1991_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(v___f_1988_, v_x_1989_);
return v_res_1991_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(lean_object* v_x_1992_){
_start:
{
if (lean_obj_tag(v_x_1992_) == 0)
{
lean_object* v___x_1994_; 
v___x_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1994_, 0, v_x_1992_);
return v___x_1994_;
}
else
{
lean_object* v_a_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2003_; 
v_a_1995_ = lean_ctor_get(v_x_1992_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v_x_1992_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1997_ = v_x_1992_;
v_isShared_1998_ = v_isSharedCheck_2003_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_a_1995_);
lean_dec(v_x_1992_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2003_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_2000_; 
if (v_isShared_1998_ == 0)
{
v___x_2000_ = v___x_1997_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1995_);
v___x_2000_ = v_reuseFailAlloc_2002_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
lean_object* v___x_2001_; 
v___x_2001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2001_, 0, v___x_2000_);
return v___x_2001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v_x_2004_, lean_object* v___y_2005_){
_start:
{
lean_object* v_res_2006_; 
v_res_2006_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(v_x_2004_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(lean_object* v___f_2007_, lean_object* v_x_2008_){
_start:
{
if (lean_obj_tag(v_x_2008_) == 0)
{
lean_object* v_a_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2018_; 
lean_dec_ref(v___f_2007_);
v_a_2010_ = lean_ctor_get(v_x_2008_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v_x_2008_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2012_ = v_x_2008_;
v_isShared_2013_ = v_isSharedCheck_2018_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_a_2010_);
lean_dec(v_x_2008_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2018_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2015_; 
if (v_isShared_2013_ == 0)
{
v___x_2015_ = v___x_2012_;
goto v_reusejp_2014_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2010_);
v___x_2015_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2014_;
}
v_reusejp_2014_:
{
lean_object* v___x_2016_; 
v___x_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2016_, 0, v___x_2015_);
return v___x_2016_;
}
}
}
else
{
lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2030_; 
v_isSharedCheck_2030_ = !lean_is_exclusive(v_x_2008_);
if (v_isSharedCheck_2030_ == 0)
{
lean_object* v_unused_2031_; 
v_unused_2031_ = lean_ctor_get(v_x_2008_, 0);
lean_dec(v_unused_2031_);
v___x_2020_ = v_x_2008_;
v_isShared_2021_ = v_isSharedCheck_2030_;
goto v_resetjp_2019_;
}
else
{
lean_dec(v_x_2008_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2030_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2022_; uint8_t v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2026_; 
v___x_2022_ = lean_unsigned_to_nat(0u);
v___x_2023_ = 0;
v___x_2024_ = lean_io_promise_new();
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 0, v___x_2024_);
v___x_2026_ = v___x_2020_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2024_);
v___x_2026_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
lean_object* v___x_2027_; lean_object* v___x_2028_; 
v___x_2027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
v___x_2028_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2022_, v___x_2023_, v___x_2027_, v___f_2007_);
return v___x_2028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v___f_2032_, lean_object* v_x_2033_, lean_object* v___y_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(v___f_2032_, v_x_2033_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(uint32_t v_op_2041_, uint64_t v_flags_2042_, lean_object* v_payload_2043_, lean_object* v_failurePrefix_2044_){
_start:
{
lean_object* v___f_2046_; lean_object* v___f_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___f_2050_; lean_object* v___f_2051_; lean_object* v___x_2052_; uint8_t v___x_2053_; lean_object* v_val_2055_; lean_object* v___x_2058_; 
lean_inc_ref(v_failurePrefix_2044_);
v___f_2046_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2046_, 0, v_failurePrefix_2044_);
v___f_2047_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__2));
v___x_2048_ = lean_box_uint32(v_op_2041_);
v___x_2049_ = lean_box_uint64(v_flags_2042_);
v___f_2050_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2050_, 0, v_payload_2043_);
lean_closure_set(v___f_2050_, 1, v_failurePrefix_2044_);
lean_closure_set(v___f_2050_, 2, v___f_2046_);
lean_closure_set(v___f_2050_, 3, v___f_2047_);
lean_closure_set(v___f_2050_, 4, v___x_2048_);
lean_closure_set(v___f_2050_, 5, v___x_2049_);
lean_closure_set(v___f_2050_, 6, v___f_2047_);
v___f_2051_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2051_, 0, v___f_2050_);
v___x_2052_ = lean_unsigned_to_nat(0u);
v___x_2053_ = 0;
v___x_2058_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v_a_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2066_; 
v_a_2059_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2066_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2066_ == 0)
{
v___x_2061_ = v___x_2058_;
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_a_2059_);
lean_dec(v___x_2058_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2066_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2064_; 
if (v_isShared_2062_ == 0)
{
lean_ctor_set_tag(v___x_2061_, 1);
v___x_2064_ = v___x_2061_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2065_; 
v_reuseFailAlloc_2065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2065_, 0, v_a_2059_);
v___x_2064_ = v_reuseFailAlloc_2065_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
v_val_2055_ = v___x_2064_;
goto v___jp_2054_;
}
}
}
else
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2074_; 
v_a_2067_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2069_ = v___x_2058_;
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2058_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2074_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2072_; 
if (v_isShared_2070_ == 0)
{
lean_ctor_set_tag(v___x_2069_, 0);
v___x_2072_ = v___x_2069_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_a_2067_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
v_val_2055_ = v___x_2072_;
goto v___jp_2054_;
}
}
}
v___jp_2054_:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v_val_2055_);
v___x_2057_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2052_, v___x_2053_, v___x_2056_, v___f_2051_);
return v___x_2057_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___boxed(lean_object* v_op_2075_, lean_object* v_flags_2076_, lean_object* v_payload_2077_, lean_object* v_failurePrefix_2078_, lean_object* v_a_2079_){
_start:
{
uint32_t v_op_boxed_2080_; uint64_t v_flags_boxed_2081_; lean_object* v_res_2082_; 
v_op_boxed_2080_ = lean_unbox_uint32(v_op_2075_);
lean_dec(v_op_2075_);
v_flags_boxed_2081_ = lean_unbox_uint64(v_flags_2076_);
lean_dec_ref(v_flags_2076_);
v_res_2082_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v_op_boxed_2080_, v_flags_boxed_2081_, v_payload_2077_, v_failurePrefix_2078_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(lean_object* v_b_2083_, lean_object* v_args_2084_){
_start:
{
uint8_t v_construct_2086_; lean_object* v___x_2087_; uint32_t v___x_2088_; uint64_t v___x_2089_; uint64_t v___y_2091_; 
v_construct_2086_ = lean_ctor_get_uint8(v_b_2083_, sizeof(void*)*4);
v___x_2087_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2083_);
v___x_2088_ = 214;
v___x_2089_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_2086_ == 0)
{
uint64_t v___x_2099_; 
v___x_2099_ = 0ULL;
v___y_2091_ = v___x_2099_;
goto v___jp_2090_;
}
else
{
uint64_t v___x_2100_; 
v___x_2100_ = 4ULL;
v___y_2091_ = v___x_2100_;
goto v___jp_2090_;
}
v___jp_2090_:
{
uint64_t v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2092_ = lean_uint64_lor(v___x_2089_, v___y_2091_);
v___x_2093_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2083_, v_args_2084_);
v___x_2094_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2095_ = lean_string_append(v___x_2094_, v___x_2087_);
lean_dec_ref(v___x_2087_);
v___x_2096_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2097_ = lean_string_append(v___x_2095_, v___x_2096_);
v___x_2098_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v___x_2088_, v___x_2092_, v___x_2093_, v___x_2097_);
return v___x_2098_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0___boxed(lean_object* v_b_2101_, lean_object* v_args_2102_, lean_object* v_a_2103_){
_start:
{
lean_object* v_res_2104_; 
v_res_2104_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(v_b_2101_, v_args_2102_);
lean_dec_ref(v_b_2101_);
return v_res_2104_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson(lean_object* v_a_2111_){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___x_2113_ = ((lean_object*)(l_Lasm_Web_Raw_responseJson___closed__1));
v___x_2114_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2115_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2116_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2116_, 0, v_a_2111_);
lean_ctor_set(v___x_2116_, 1, v___x_2115_);
v___x_2117_ = lean_array_push(v___x_2114_, v___x_2116_);
v___x_2118_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(v___x_2113_, v___x_2117_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson___boxed(lean_object* v_a_2119_, lean_object* v_a_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l_Lasm_Web_Raw_responseJson(v_a_2119_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg(lean_object* v_d_2122_){
_start:
{
lean_object* v___x_2124_; 
v___x_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2124_, 0, v_d_2122_);
return v___x_2124_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_d_2125_, lean_object* v_a_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg(v_d_2125_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1(lean_object* v_context_2128_, lean_object* v_d_2129_){
_start:
{
lean_object* v___x_2131_; 
v___x_2131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2131_, 0, v_d_2129_);
return v___x_2131_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2132_, lean_object* v_d_2133_, lean_object* v_a_2134_){
_start:
{
lean_object* v_res_2135_; 
v_res_2135_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1(v_context_2132_, v_d_2133_);
lean_dec_ref(v_context_2132_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0(lean_object* v_context_2136_, uint32_t v_op_2137_, uint64_t v_flags_2138_, lean_object* v_payload_2139_, lean_object* v_failurePrefix_2140_){
_start:
{
lean_object* v___x_2142_; 
v___x_2142_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v_op_2137_, v_flags_2138_, v_payload_2139_, v_failurePrefix_2140_);
return v___x_2142_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___boxed(lean_object* v_context_2143_, lean_object* v_op_2144_, lean_object* v_flags_2145_, lean_object* v_payload_2146_, lean_object* v_failurePrefix_2147_, lean_object* v_a_2148_){
_start:
{
uint32_t v_op_boxed_2149_; uint64_t v_flags_boxed_2150_; lean_object* v_res_2151_; 
v_op_boxed_2149_ = lean_unbox_uint32(v_op_2144_);
lean_dec(v_op_2144_);
v_flags_boxed_2150_ = lean_unbox_uint64(v_flags_2145_);
lean_dec_ref(v_flags_2145_);
v_res_2151_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0(v_context_2143_, v_op_boxed_2149_, v_flags_boxed_2150_, v_payload_2146_, v_failurePrefix_2147_);
lean_dec_ref(v_context_2143_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(lean_object* v___f_2152_, lean_object* v_bytes_2153_){
_start:
{
lean_object* v___x_2155_; uint8_t v___x_2156_; lean_object* v_val_2158_; lean_object* v___x_2161_; 
v___x_2155_ = lean_unsigned_to_nat(0u);
v___x_2156_ = 0;
v___x_2161_ = l_Lasm_JS_Wire_decode(v_bytes_2153_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2161_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2161_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
lean_ctor_set_tag(v___x_2164_, 1);
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
v_val_2158_ = v___x_2167_;
goto v___jp_2157_;
}
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
v_a_2170_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2161_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2161_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
lean_ctor_set_tag(v___x_2172_, 0);
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
v_val_2158_ = v___x_2175_;
goto v___jp_2157_;
}
}
}
v___jp_2157_:
{
lean_object* v___x_2159_; lean_object* v___x_2160_; 
v___x_2159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2159_, 0, v_val_2158_);
v___x_2160_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2155_, v___x_2156_, v___x_2159_, v___f_2152_);
return v___x_2160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed(lean_object* v___f_2178_, lean_object* v_bytes_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(v___f_2178_, v_bytes_2179_);
lean_dec_ref(v_bytes_2179_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(lean_object* v_context_2183_, lean_object* v_d_2184_){
_start:
{
lean_object* v_received_2187_; 
if (lean_obj_tag(v_d_2184_) == 6)
{
lean_object* v_b_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2208_; 
v_b_2201_ = lean_ctor_get(v_d_2184_, 0);
v_isSharedCheck_2208_ = !lean_is_exclusive(v_d_2184_);
if (v_isSharedCheck_2208_ == 0)
{
v___x_2203_ = v_d_2184_;
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_b_2201_);
lean_dec(v_d_2184_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2208_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2206_; 
if (v_isShared_2204_ == 0)
{
lean_ctor_set_tag(v___x_2203_, 0);
v___x_2206_ = v___x_2203_;
goto v_reusejp_2205_;
}
else
{
lean_object* v_reuseFailAlloc_2207_; 
v_reuseFailAlloc_2207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2207_, 0, v_b_2201_);
v___x_2206_ = v_reuseFailAlloc_2207_;
goto v_reusejp_2205_;
}
v_reusejp_2205_:
{
return v___x_2206_;
}
}
}
else
{
if (lean_obj_tag(v_d_2184_) == 9)
{
lean_object* v_value_2209_; lean_object* v_description_2210_; lean_object* v___x_2211_; uint8_t v___x_2212_; 
v_value_2209_ = lean_ctor_get(v_d_2184_, 0);
v_description_2210_ = lean_ctor_get(v_d_2184_, 1);
v___x_2211_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2212_ = lean_string_dec_eq(v_description_2210_, v___x_2211_);
if (v___x_2212_ == 0)
{
goto v___jp_2199_;
}
else
{
uint32_t v___x_2213_; uint64_t v___x_2214_; lean_object* v___x_2215_; uint32_t v___x_2216_; lean_object* v___x_2217_; 
lean_inc_n(v_value_2209_, 2);
lean_dec_ref_known(v_d_2184_, 2);
v___x_2213_ = 206;
v___x_2214_ = 0ULL;
v___x_2215_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2215_, 0, v_value_2209_);
lean_ctor_set(v___x_2215_, 1, v___x_2211_);
v___x_2216_ = lasm_js_value_handle(v_value_2209_);
lean_dec(v_value_2209_);
v___x_2217_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2213_, v___x_2214_, v___x_2215_, v___x_2216_);
if (lean_obj_tag(v___x_2217_) == 0)
{
lean_object* v_a_2218_; uint8_t v___x_2219_; 
v_a_2218_ = lean_ctor_get(v___x_2217_, 0);
lean_inc(v_a_2218_);
lean_dec_ref_known(v___x_2217_, 1);
v___x_2219_ = lean_string_validate_utf8(v_a_2218_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
lean_dec(v_a_2218_);
v___x_2220_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_2221_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2220_);
v_received_2187_ = v___x_2221_;
goto v___jp_2186_;
}
else
{
lean_object* v___x_2222_; 
v___x_2222_ = lean_string_from_utf8_unchecked(v_a_2218_);
v_received_2187_ = v___x_2222_;
goto v___jp_2186_;
}
}
else
{
lean_object* v___x_2223_; 
lean_dec_ref_known(v___x_2217_, 1);
v___x_2223_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v_received_2187_ = v___x_2223_;
goto v___jp_2186_;
}
}
}
else
{
goto v___jp_2199_;
}
}
v___jp_2186_:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; 
v___x_2188_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2189_ = lean_string_append(v___x_2188_, v_context_2183_);
v___x_2190_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2191_ = lean_string_append(v___x_2189_, v___x_2190_);
v___x_2192_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0));
v___x_2193_ = lean_string_append(v___x_2191_, v___x_2192_);
v___x_2194_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2195_ = lean_string_append(v___x_2193_, v___x_2194_);
v___x_2196_ = lean_string_append(v___x_2195_, v_received_2187_);
lean_dec_ref(v_received_2187_);
v___x_2197_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
v___x_2198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2197_);
return v___x_2198_;
}
v___jp_2199_:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lasm_JS_Data_describe(v_d_2184_);
v_received_2187_ = v___x_2200_;
goto v___jp_2186_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2224_, lean_object* v_d_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(v_context_2224_, v_d_2225_);
lean_dec_ref(v_context_2224_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(lean_object* v_context_2228_, lean_object* v_x_2229_){
_start:
{
lean_object* v_val_2232_; 
if (lean_obj_tag(v_x_2229_) == 0)
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2242_; 
v_a_2234_ = lean_ctor_get(v_x_2229_, 0);
v_isSharedCheck_2242_ = !lean_is_exclusive(v_x_2229_);
if (v_isSharedCheck_2242_ == 0)
{
v___x_2236_ = v_x_2229_;
v_isShared_2237_ = v_isSharedCheck_2242_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v_x_2229_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2242_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v___x_2239_; 
if (v_isShared_2237_ == 0)
{
v___x_2239_ = v___x_2236_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2234_);
v___x_2239_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
lean_object* v___x_2240_; 
v___x_2240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2239_);
return v___x_2240_;
}
}
}
else
{
lean_object* v_a_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2256_; 
v_a_2243_ = lean_ctor_get(v_x_2229_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v_x_2229_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2245_ = v_x_2229_;
v_isShared_2246_ = v_isSharedCheck_2256_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_a_2243_);
lean_dec(v_x_2229_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2256_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(v_context_2228_, v_a_2243_);
if (lean_obj_tag(v___x_2247_) == 0)
{
lean_object* v_a_2248_; lean_object* v___x_2250_; 
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_a_2248_);
lean_dec_ref_known(v___x_2247_, 1);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 0, v_a_2248_);
v___x_2250_ = v___x_2245_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v_a_2248_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
v_val_2232_ = v___x_2250_;
goto v___jp_2231_;
}
}
else
{
lean_object* v_a_2252_; lean_object* v___x_2254_; 
v_a_2252_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2247_, 1);
if (v_isShared_2246_ == 0)
{
lean_ctor_set_tag(v___x_2245_, 0);
lean_ctor_set(v___x_2245_, 0, v_a_2252_);
v___x_2254_ = v___x_2245_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_a_2252_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
v_val_2232_ = v___x_2254_;
goto v___jp_2231_;
}
}
}
}
v___jp_2231_:
{
lean_object* v___x_2233_; 
v___x_2233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2233_, 0, v_val_2232_);
return v___x_2233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed(lean_object* v_context_2257_, lean_object* v_x_2258_, lean_object* v___y_2259_){
_start:
{
lean_object* v_res_2260_; 
v_res_2260_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(v_context_2257_, v_x_2258_);
lean_dec_ref(v_context_2257_);
return v_res_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(lean_object* v___f_2261_, lean_object* v_x_2262_){
_start:
{
if (lean_obj_tag(v_x_2262_) == 0)
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2272_; 
lean_dec_ref(v___f_2261_);
v_a_2264_ = lean_ctor_get(v_x_2262_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v_x_2262_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2266_ = v_x_2262_;
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v_x_2262_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2272_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
lean_object* v___x_2270_; 
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2269_);
return v___x_2270_;
}
}
}
else
{
lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2284_; 
v_isSharedCheck_2284_ = !lean_is_exclusive(v_x_2262_);
if (v_isSharedCheck_2284_ == 0)
{
lean_object* v_unused_2285_; 
v_unused_2285_ = lean_ctor_get(v_x_2262_, 0);
lean_dec(v_unused_2285_);
v___x_2274_ = v_x_2262_;
v_isShared_2275_ = v_isSharedCheck_2284_;
goto v_resetjp_2273_;
}
else
{
lean_dec(v_x_2262_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2284_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2276_; uint8_t v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2280_; 
v___x_2276_ = lean_unsigned_to_nat(0u);
v___x_2277_ = 0;
v___x_2278_ = lean_io_promise_new();
if (v_isShared_2275_ == 0)
{
lean_ctor_set(v___x_2274_, 0, v___x_2278_);
v___x_2280_ = v___x_2274_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v___x_2278_);
v___x_2280_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
v___x_2282_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2276_, v___x_2277_, v___x_2281_, v___f_2261_);
return v___x_2282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed(lean_object* v___f_2286_, lean_object* v_x_2287_, lean_object* v___y_2288_){
_start:
{
lean_object* v_res_2289_; 
v_res_2289_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(v___f_2286_, v_x_2287_);
return v_res_2289_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(lean_object* v___f_2290_, lean_object* v_x_2291_){
_start:
{
if (lean_obj_tag(v_x_2291_) == 0)
{
lean_object* v___x_2293_; 
lean_dec_ref(v___f_2290_);
v___x_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2293_, 0, v_x_2291_);
return v___x_2293_;
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2295_; 
v_a_2294_ = lean_ctor_get(v_x_2291_, 0);
lean_inc(v_a_2294_);
lean_dec_ref_known(v_x_2291_, 1);
v___x_2295_ = lean_apply_2(v___f_2290_, v_a_2294_, lean_box(0));
return v___x_2295_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed(lean_object* v___f_2296_, lean_object* v_x_2297_, lean_object* v___y_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(v___f_2296_, v_x_2297_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6(lean_object* v_payload_2300_, lean_object* v_failurePrefix_2301_, lean_object* v___f_2302_, lean_object* v___f_2303_, uint32_t v_op_2304_, uint64_t v_flags_2305_, lean_object* v___f_2306_, lean_object* v_x_2307_){
_start:
{
if (lean_obj_tag(v_x_2307_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2317_; 
lean_dec_ref(v___f_2306_);
lean_dec_ref(v___f_2303_);
lean_dec_ref(v___f_2302_);
lean_dec(v_payload_2300_);
v_a_2309_ = lean_ctor_get(v_x_2307_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v_x_2307_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2311_ = v_x_2307_;
v_isShared_2312_ = v_isSharedCheck_2317_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_a_2309_);
lean_dec(v_x_2307_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2317_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2309_);
v___x_2314_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2315_; 
v___x_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2315_, 0, v___x_2314_);
return v___x_2315_;
}
}
}
else
{
lean_object* v_a_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2359_; 
v_a_2318_ = lean_ctor_get(v_x_2307_, 0);
v_isSharedCheck_2359_ = !lean_is_exclusive(v_x_2307_);
if (v_isSharedCheck_2359_ == 0)
{
v___x_2320_ = v_x_2307_;
v_isShared_2321_ = v_isSharedCheck_2359_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_a_2318_);
lean_dec(v_x_2307_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2359_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
uint32_t v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; uint8_t v___x_2326_; 
v___x_2322_ = 0;
lean_inc(v_payload_2300_);
v___x_2323_ = l_Lasm_JS_Wire_encode(v_payload_2300_);
v___x_2324_ = lean_string_utf8_byte_size(v_failurePrefix_2301_);
v___x_2325_ = lean_unsigned_to_nat(0u);
v___x_2326_ = lean_nat_dec_eq(v___x_2324_, v___x_2325_);
if (v___x_2326_ == 0)
{
lean_object* v___f_2327_; lean_object* v_val_2329_; lean_object* v___x_2334_; 
lean_dec_ref(v___f_2306_);
lean_inc(v_a_2318_);
v___f_2327_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2327_, 0, v_a_2318_);
v___x_2334_ = lasm_js_call_into(v_a_2318_, v_op_2304_, v___x_2322_, v_flags_2305_, v___x_2323_, v_payload_2300_);
lean_dec(v_payload_2300_);
lean_dec_ref(v___x_2323_);
lean_dec(v_a_2318_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v___x_2337_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_a_2335_);
lean_dec_ref_known(v___x_2334_, 1);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v_a_2335_);
v___x_2337_ = v___x_2320_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2335_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
v_val_2329_ = v___x_2337_;
goto v___jp_2328_;
}
}
else
{
lean_object* v_a_2339_; lean_object* v___x_2341_; 
v_a_2339_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_a_2339_);
lean_dec_ref_known(v___x_2334_, 1);
if (v_isShared_2321_ == 0)
{
lean_ctor_set_tag(v___x_2320_, 0);
lean_ctor_set(v___x_2320_, 0, v_a_2339_);
v___x_2341_ = v___x_2320_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2339_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
v_val_2329_ = v___x_2341_;
goto v___jp_2328_;
}
}
v___jp_2328_:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2330_, 0, v_val_2329_);
v___x_2331_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2325_, v___x_2326_, v___x_2330_, v___f_2327_);
v___x_2332_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2325_, v___x_2326_, v___x_2331_, v___f_2302_);
v___x_2333_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2325_, v___x_2326_, v___x_2332_, v___f_2303_);
return v___x_2333_;
}
}
else
{
lean_object* v___f_2343_; uint8_t v___x_2344_; lean_object* v_val_2346_; lean_object* v___x_2350_; 
lean_dec_ref(v___f_2303_);
lean_dec_ref(v___f_2302_);
lean_inc(v_a_2318_);
v___f_2343_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2343_, 0, v_a_2318_);
v___x_2344_ = 0;
v___x_2350_ = lasm_js_call_into(v_a_2318_, v_op_2304_, v___x_2322_, v_flags_2305_, v___x_2323_, v_payload_2300_);
lean_dec(v_payload_2300_);
lean_dec_ref(v___x_2323_);
lean_dec(v_a_2318_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; lean_object* v___x_2353_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
lean_inc(v_a_2351_);
lean_dec_ref_known(v___x_2350_, 1);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 0, v_a_2351_);
v___x_2353_ = v___x_2320_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2351_);
v___x_2353_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
v_val_2346_ = v___x_2353_;
goto v___jp_2345_;
}
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2357_; 
v_a_2355_ = lean_ctor_get(v___x_2350_, 0);
lean_inc(v_a_2355_);
lean_dec_ref_known(v___x_2350_, 1);
if (v_isShared_2321_ == 0)
{
lean_ctor_set_tag(v___x_2320_, 0);
lean_ctor_set(v___x_2320_, 0, v_a_2355_);
v___x_2357_ = v___x_2320_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2358_; 
v_reuseFailAlloc_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2358_, 0, v_a_2355_);
v___x_2357_ = v_reuseFailAlloc_2358_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
v_val_2346_ = v___x_2357_;
goto v___jp_2345_;
}
}
v___jp_2345_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2347_, 0, v_val_2346_);
v___x_2348_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2325_, v___x_2344_, v___x_2347_, v___f_2343_);
v___x_2349_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2325_, v___x_2344_, v___x_2348_, v___f_2306_);
return v___x_2349_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_2360_, lean_object* v_failurePrefix_2361_, lean_object* v___f_2362_, lean_object* v___f_2363_, lean_object* v_op_2364_, lean_object* v_flags_2365_, lean_object* v___f_2366_, lean_object* v_x_2367_, lean_object* v___y_2368_){
_start:
{
uint32_t v_op_boxed_2369_; uint64_t v_flags_boxed_2370_; lean_object* v_res_2371_; 
v_op_boxed_2369_ = lean_unbox_uint32(v_op_2364_);
lean_dec(v_op_2364_);
v_flags_boxed_2370_ = lean_unbox_uint64(v_flags_2365_);
lean_dec_ref(v_flags_2365_);
v_res_2371_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6(v_payload_2360_, v_failurePrefix_2361_, v___f_2362_, v___f_2363_, v_op_boxed_2369_, v_flags_boxed_2370_, v___f_2366_, v_x_2367_);
lean_dec_ref(v_failurePrefix_2361_);
return v_res_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(lean_object* v_context_2372_, uint32_t v_op_2373_, uint64_t v_flags_2374_, lean_object* v_payload_2375_, lean_object* v_failurePrefix_2376_){
_start:
{
lean_object* v___f_2378_; lean_object* v___f_2379_; lean_object* v___f_2380_; lean_object* v___f_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___f_2384_; lean_object* v___f_2385_; lean_object* v___x_2386_; uint8_t v___x_2387_; lean_object* v_val_2389_; lean_object* v___x_2392_; 
lean_inc_ref(v_failurePrefix_2376_);
v___f_2378_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2378_, 0, v_failurePrefix_2376_);
v___f_2379_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2379_, 0, v_context_2372_);
v___f_2380_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2380_, 0, v___f_2379_);
v___f_2381_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2381_, 0, v___f_2380_);
v___x_2382_ = lean_box_uint32(v_op_2373_);
v___x_2383_ = lean_box_uint64(v_flags_2374_);
lean_inc_ref(v___f_2381_);
v___f_2384_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2384_, 0, v_payload_2375_);
lean_closure_set(v___f_2384_, 1, v_failurePrefix_2376_);
lean_closure_set(v___f_2384_, 2, v___f_2378_);
lean_closure_set(v___f_2384_, 3, v___f_2381_);
lean_closure_set(v___f_2384_, 4, v___x_2382_);
lean_closure_set(v___f_2384_, 5, v___x_2383_);
lean_closure_set(v___f_2384_, 6, v___f_2381_);
v___f_2385_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2385_, 0, v___f_2384_);
v___x_2386_ = lean_unsigned_to_nat(0u);
v___x_2387_ = 0;
v___x_2392_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2392_) == 0)
{
lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2400_; 
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2395_ = v___x_2392_;
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2392_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2400_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2398_; 
if (v_isShared_2396_ == 0)
{
lean_ctor_set_tag(v___x_2395_, 1);
v___x_2398_ = v___x_2395_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_a_2393_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
v_val_2389_ = v___x_2398_;
goto v___jp_2388_;
}
}
}
else
{
lean_object* v_a_2401_; lean_object* v___x_2403_; uint8_t v_isShared_2404_; uint8_t v_isSharedCheck_2408_; 
v_a_2401_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2408_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2408_ == 0)
{
v___x_2403_ = v___x_2392_;
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
else
{
lean_inc(v_a_2401_);
lean_dec(v___x_2392_);
v___x_2403_ = lean_box(0);
v_isShared_2404_ = v_isSharedCheck_2408_;
goto v_resetjp_2402_;
}
v_resetjp_2402_:
{
lean_object* v___x_2406_; 
if (v_isShared_2404_ == 0)
{
lean_ctor_set_tag(v___x_2403_, 0);
v___x_2406_ = v___x_2403_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2407_; 
v_reuseFailAlloc_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2407_, 0, v_a_2401_);
v___x_2406_ = v_reuseFailAlloc_2407_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
v_val_2389_ = v___x_2406_;
goto v___jp_2388_;
}
}
}
v___jp_2388_:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2390_, 0, v_val_2389_);
v___x_2391_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2386_, v___x_2387_, v___x_2390_, v___f_2385_);
return v___x_2391_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___boxed(lean_object* v_context_2409_, lean_object* v_op_2410_, lean_object* v_flags_2411_, lean_object* v_payload_2412_, lean_object* v_failurePrefix_2413_, lean_object* v_a_2414_){
_start:
{
uint32_t v_op_boxed_2415_; uint64_t v_flags_boxed_2416_; lean_object* v_res_2417_; 
v_op_boxed_2415_ = lean_unbox_uint32(v_op_2410_);
lean_dec(v_op_2410_);
v_flags_boxed_2416_ = lean_unbox_uint64(v_flags_2411_);
lean_dec_ref(v_flags_2411_);
v_res_2417_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(v_context_2409_, v_op_boxed_2415_, v_flags_boxed_2416_, v_payload_2412_, v_failurePrefix_2413_);
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(lean_object* v_b_2418_, lean_object* v_args_2419_){
_start:
{
uint8_t v_construct_2421_; lean_object* v___x_2422_; uint32_t v___x_2423_; uint64_t v___x_2424_; uint64_t v___y_2426_; 
v_construct_2421_ = lean_ctor_get_uint8(v_b_2418_, sizeof(void*)*4);
v___x_2422_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2418_);
v___x_2423_ = 214;
v___x_2424_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_2421_ == 0)
{
uint64_t v___x_2434_; 
v___x_2434_ = 0ULL;
v___y_2426_ = v___x_2434_;
goto v___jp_2425_;
}
else
{
uint64_t v___x_2435_; 
v___x_2435_ = 4ULL;
v___y_2426_ = v___x_2435_;
goto v___jp_2425_;
}
v___jp_2425_:
{
uint64_t v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; 
v___x_2427_ = lean_uint64_lor(v___x_2424_, v___y_2426_);
v___x_2428_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2418_, v_args_2419_);
v___x_2429_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2430_ = lean_string_append(v___x_2429_, v___x_2422_);
v___x_2431_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2432_ = lean_string_append(v___x_2430_, v___x_2431_);
v___x_2433_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(v___x_2422_, v___x_2423_, v___x_2427_, v___x_2428_, v___x_2432_);
return v___x_2433_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0___boxed(lean_object* v_b_2436_, lean_object* v_args_2437_, lean_object* v_a_2438_){
_start:
{
lean_object* v_res_2439_; 
v_res_2439_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(v_b_2436_, v_args_2437_);
lean_dec_ref(v_b_2436_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes(lean_object* v_a_2446_){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2448_ = ((lean_object*)(l_Lasm_Web_Raw_responseBytes___closed__1));
v___x_2449_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2450_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2451_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2451_, 0, v_a_2446_);
lean_ctor_set(v___x_2451_, 1, v___x_2450_);
v___x_2452_ = lean_array_push(v___x_2449_, v___x_2451_);
v___x_2453_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(v___x_2448_, v___x_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes___boxed(lean_object* v_a_2454_, lean_object* v_a_2455_){
_start:
{
lean_object* v_res_2456_; 
v_res_2456_ = l_Lasm_Web_Raw_responseBytes(v_a_2454_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(lean_object* v_context_2458_, lean_object* v_d_2459_){
_start:
{
lean_object* v_received_2462_; 
if (lean_obj_tag(v_d_2459_) == 9)
{
lean_object* v_value_2476_; lean_object* v___x_2477_; 
v_value_2476_ = lean_ctor_get(v_d_2459_, 0);
lean_inc(v_value_2476_);
lean_dec_ref_known(v_d_2459_, 2);
v___x_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2477_, 0, v_value_2476_);
return v___x_2477_;
}
else
{
if (lean_obj_tag(v_d_2459_) == 9)
{
lean_object* v_value_2478_; lean_object* v_description_2479_; lean_object* v___x_2480_; uint8_t v___x_2481_; 
v_value_2478_ = lean_ctor_get(v_d_2459_, 0);
v_description_2479_ = lean_ctor_get(v_d_2459_, 1);
v___x_2480_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2481_ = lean_string_dec_eq(v_description_2479_, v___x_2480_);
if (v___x_2481_ == 0)
{
goto v___jp_2474_;
}
else
{
uint32_t v___x_2482_; uint64_t v___x_2483_; lean_object* v___x_2484_; uint32_t v___x_2485_; lean_object* v___x_2486_; 
lean_inc_n(v_value_2478_, 2);
lean_dec_ref_known(v_d_2459_, 2);
v___x_2482_ = 206;
v___x_2483_ = 0ULL;
v___x_2484_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2484_, 0, v_value_2478_);
lean_ctor_set(v___x_2484_, 1, v___x_2480_);
v___x_2485_ = lasm_js_value_handle(v_value_2478_);
lean_dec(v_value_2478_);
v___x_2486_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2482_, v___x_2483_, v___x_2484_, v___x_2485_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; uint8_t v___x_2488_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_a_2487_);
lean_dec_ref_known(v___x_2486_, 1);
v___x_2488_ = lean_string_validate_utf8(v_a_2487_);
if (v___x_2488_ == 0)
{
lean_object* v___x_2489_; lean_object* v___x_2490_; 
lean_dec(v_a_2487_);
v___x_2489_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_2490_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2489_);
v_received_2462_ = v___x_2490_;
goto v___jp_2461_;
}
else
{
lean_object* v___x_2491_; 
v___x_2491_ = lean_string_from_utf8_unchecked(v_a_2487_);
v_received_2462_ = v___x_2491_;
goto v___jp_2461_;
}
}
else
{
lean_object* v___x_2492_; 
lean_dec_ref_known(v___x_2486_, 1);
v___x_2492_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v_received_2462_ = v___x_2492_;
goto v___jp_2461_;
}
}
}
else
{
goto v___jp_2474_;
}
}
v___jp_2461_:
{
lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; 
v___x_2463_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2464_ = lean_string_append(v___x_2463_, v_context_2458_);
v___x_2465_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2466_ = lean_string_append(v___x_2464_, v___x_2465_);
v___x_2467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___closed__0));
v___x_2468_ = lean_string_append(v___x_2466_, v___x_2467_);
v___x_2469_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2470_ = lean_string_append(v___x_2468_, v___x_2469_);
v___x_2471_ = lean_string_append(v___x_2470_, v_received_2462_);
lean_dec_ref(v_received_2462_);
v___x_2472_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2472_, 0, v___x_2471_);
v___x_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2472_);
return v___x_2473_;
}
v___jp_2474_:
{
lean_object* v___x_2475_; 
v___x_2475_ = l_Lasm_JS_Data_describe(v_d_2459_);
v_received_2462_ = v___x_2475_;
goto v___jp_2461_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___boxed(lean_object* v_context_2493_, lean_object* v_d_2494_, lean_object* v_a_2495_){
_start:
{
lean_object* v_res_2496_; 
v_res_2496_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(v_context_2493_, v_d_2494_);
lean_dec_ref(v_context_2493_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(lean_object* v_b_2497_, lean_object* v_args_2498_, uint8_t v_await_2499_){
_start:
{
uint64_t v___y_2502_; uint64_t v___y_2503_; uint64_t v___x_2538_; uint64_t v___y_2540_; 
v___x_2538_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_await_2499_ == 0)
{
uint64_t v___x_2545_; 
v___x_2545_ = 0ULL;
v___y_2540_ = v___x_2545_;
goto v___jp_2539_;
}
else
{
uint64_t v___x_2546_; 
v___x_2546_ = 2ULL;
v___y_2540_ = v___x_2546_;
goto v___jp_2539_;
}
v___jp_2501_:
{
uint64_t v_flags_2504_; uint32_t v___x_2505_; lean_object* v___x_2506_; uint32_t v___x_2507_; lean_object* v___x_2508_; 
v_flags_2504_ = lean_uint64_lor(v___y_2502_, v___y_2503_);
v___x_2505_ = 214;
v___x_2506_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2497_, v_args_2498_);
v___x_2507_ = 0;
v___x_2508_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2505_, v_flags_2504_, v___x_2506_, v___x_2507_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v_a_2509_; lean_object* v___x_2510_; 
v_a_2509_ = lean_ctor_get(v___x_2508_, 0);
lean_inc(v_a_2509_);
lean_dec_ref_known(v___x_2508_, 1);
v___x_2510_ = l_Lasm_JS_Wire_decode(v_a_2509_);
lean_dec(v_a_2509_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref_known(v___x_2510_, 1);
v___x_2512_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2497_);
v___x_2513_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(v___x_2512_, v_a_2511_);
lean_dec_ref(v___x_2512_);
return v___x_2513_;
}
else
{
lean_object* v_a_2514_; lean_object* v___x_2516_; uint8_t v_isShared_2517_; uint8_t v_isSharedCheck_2521_; 
v_a_2514_ = lean_ctor_get(v___x_2510_, 0);
v_isSharedCheck_2521_ = !lean_is_exclusive(v___x_2510_);
if (v_isSharedCheck_2521_ == 0)
{
v___x_2516_ = v___x_2510_;
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
else
{
lean_inc(v_a_2514_);
lean_dec(v___x_2510_);
v___x_2516_ = lean_box(0);
v_isShared_2517_ = v_isSharedCheck_2521_;
goto v_resetjp_2515_;
}
v_resetjp_2515_:
{
lean_object* v___x_2519_; 
if (v_isShared_2517_ == 0)
{
v___x_2519_ = v___x_2516_;
goto v_reusejp_2518_;
}
else
{
lean_object* v_reuseFailAlloc_2520_; 
v_reuseFailAlloc_2520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2520_, 0, v_a_2514_);
v___x_2519_ = v_reuseFailAlloc_2520_;
goto v_reusejp_2518_;
}
v_reusejp_2518_:
{
return v___x_2519_;
}
}
}
}
else
{
lean_object* v_a_2522_; lean_object* v___x_2524_; uint8_t v_isShared_2525_; uint8_t v_isSharedCheck_2537_; 
v_a_2522_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2537_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2524_ = v___x_2508_;
v_isShared_2525_ = v_isSharedCheck_2537_;
goto v_resetjp_2523_;
}
else
{
lean_inc(v_a_2522_);
lean_dec(v___x_2508_);
v___x_2524_ = lean_box(0);
v_isShared_2525_ = v_isSharedCheck_2537_;
goto v_resetjp_2523_;
}
v_resetjp_2523_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2535_; 
v___x_2526_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2527_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2497_);
v___x_2528_ = lean_string_append(v___x_2526_, v___x_2527_);
lean_dec_ref(v___x_2527_);
v___x_2529_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2530_ = lean_string_append(v___x_2528_, v___x_2529_);
v___x_2531_ = lean_io_error_to_string(v_a_2522_);
v___x_2532_ = lean_string_append(v___x_2530_, v___x_2531_);
lean_dec_ref(v___x_2531_);
v___x_2533_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2533_, 0, v___x_2532_);
if (v_isShared_2525_ == 0)
{
lean_ctor_set(v___x_2524_, 0, v___x_2533_);
v___x_2535_ = v___x_2524_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2533_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
v___jp_2539_:
{
uint8_t v_construct_2541_; uint64_t v___x_2542_; 
v_construct_2541_ = lean_ctor_get_uint8(v_b_2497_, sizeof(void*)*4);
v___x_2542_ = lean_uint64_lor(v___x_2538_, v___y_2540_);
if (v_construct_2541_ == 0)
{
uint64_t v___x_2543_; 
v___x_2543_ = 0ULL;
v___y_2502_ = v___x_2542_;
v___y_2503_ = v___x_2543_;
goto v___jp_2501_;
}
else
{
uint64_t v___x_2544_; 
v___x_2544_ = 4ULL;
v___y_2502_ = v___x_2542_;
v___y_2503_ = v___x_2544_;
goto v___jp_2501_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0___boxed(lean_object* v_b_2547_, lean_object* v_args_2548_, lean_object* v_await_2549_, lean_object* v_a_2550_){
_start:
{
uint8_t v_await_boxed_2551_; lean_object* v_res_2552_; 
v_await_boxed_2551_ = lean_unbox(v_await_2549_);
v_res_2552_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(v_b_2547_, v_args_2548_, v_await_boxed_2551_);
lean_dec_ref(v_b_2547_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController(){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; uint8_t v___x_2562_; lean_object* v___x_2563_; 
v___x_2560_ = ((lean_object*)(l_Lasm_Web_Raw_abortController___closed__1));
v___x_2561_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2562_ = 1;
v___x_2563_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(v___x_2560_, v___x_2561_, v___x_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController___boxed(lean_object* v_a_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l_Lasm_Web_Raw_abortController();
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(lean_object* v_context_2567_, lean_object* v_d_2568_){
_start:
{
lean_object* v_received_2571_; 
if (lean_obj_tag(v_d_2568_) == 9)
{
lean_object* v_value_2585_; lean_object* v___x_2586_; 
v_value_2585_ = lean_ctor_get(v_d_2568_, 0);
lean_inc(v_value_2585_);
lean_dec_ref_known(v_d_2568_, 2);
v___x_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_value_2585_);
return v___x_2586_;
}
else
{
if (lean_obj_tag(v_d_2568_) == 9)
{
lean_object* v_value_2587_; lean_object* v_description_2588_; lean_object* v___x_2589_; uint8_t v___x_2590_; 
v_value_2587_ = lean_ctor_get(v_d_2568_, 0);
v_description_2588_ = lean_ctor_get(v_d_2568_, 1);
v___x_2589_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2590_ = lean_string_dec_eq(v_description_2588_, v___x_2589_);
if (v___x_2590_ == 0)
{
goto v___jp_2583_;
}
else
{
uint32_t v___x_2591_; uint64_t v___x_2592_; lean_object* v___x_2593_; uint32_t v___x_2594_; lean_object* v___x_2595_; 
lean_inc_n(v_value_2587_, 2);
lean_dec_ref_known(v_d_2568_, 2);
v___x_2591_ = 206;
v___x_2592_ = 0ULL;
v___x_2593_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2593_, 0, v_value_2587_);
lean_ctor_set(v___x_2593_, 1, v___x_2589_);
v___x_2594_ = lasm_js_value_handle(v_value_2587_);
lean_dec(v_value_2587_);
v___x_2595_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2591_, v___x_2592_, v___x_2593_, v___x_2594_);
if (lean_obj_tag(v___x_2595_) == 0)
{
lean_object* v_a_2596_; uint8_t v___x_2597_; 
v_a_2596_ = lean_ctor_get(v___x_2595_, 0);
lean_inc(v_a_2596_);
lean_dec_ref_known(v___x_2595_, 1);
v___x_2597_ = lean_string_validate_utf8(v_a_2596_);
if (v___x_2597_ == 0)
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
lean_dec(v_a_2596_);
v___x_2598_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_2599_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2598_);
v_received_2571_ = v___x_2599_;
goto v___jp_2570_;
}
else
{
lean_object* v___x_2600_; 
v___x_2600_ = lean_string_from_utf8_unchecked(v_a_2596_);
v_received_2571_ = v___x_2600_;
goto v___jp_2570_;
}
}
else
{
lean_object* v___x_2601_; 
lean_dec_ref_known(v___x_2595_, 1);
v___x_2601_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v_received_2571_ = v___x_2601_;
goto v___jp_2570_;
}
}
}
else
{
goto v___jp_2583_;
}
}
v___jp_2570_:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2572_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2573_ = lean_string_append(v___x_2572_, v_context_2567_);
v___x_2574_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2575_ = lean_string_append(v___x_2573_, v___x_2574_);
v___x_2576_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___closed__0));
v___x_2577_ = lean_string_append(v___x_2575_, v___x_2576_);
v___x_2578_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2579_ = lean_string_append(v___x_2577_, v___x_2578_);
v___x_2580_ = lean_string_append(v___x_2579_, v_received_2571_);
lean_dec_ref(v_received_2571_);
v___x_2581_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
v___x_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2581_);
return v___x_2582_;
}
v___jp_2583_:
{
lean_object* v___x_2584_; 
v___x_2584_ = l_Lasm_JS_Data_describe(v_d_2568_);
v_received_2571_ = v___x_2584_;
goto v___jp_2570_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___boxed(lean_object* v_context_2602_, lean_object* v_d_2603_, lean_object* v_a_2604_){
_start:
{
lean_object* v_res_2605_; 
v_res_2605_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(v_context_2602_, v_d_2603_);
lean_dec_ref(v_context_2602_);
return v_res_2605_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(lean_object* v_b_2606_, lean_object* v_args_2607_, uint8_t v_await_2608_){
_start:
{
uint64_t v___y_2611_; uint64_t v___y_2612_; uint64_t v___x_2647_; uint64_t v___y_2649_; 
v___x_2647_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_await_2608_ == 0)
{
uint64_t v___x_2654_; 
v___x_2654_ = 0ULL;
v___y_2649_ = v___x_2654_;
goto v___jp_2648_;
}
else
{
uint64_t v___x_2655_; 
v___x_2655_ = 2ULL;
v___y_2649_ = v___x_2655_;
goto v___jp_2648_;
}
v___jp_2610_:
{
uint64_t v_flags_2613_; uint32_t v___x_2614_; lean_object* v___x_2615_; uint32_t v___x_2616_; lean_object* v___x_2617_; 
v_flags_2613_ = lean_uint64_lor(v___y_2611_, v___y_2612_);
v___x_2614_ = 214;
v___x_2615_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2606_, v_args_2607_);
v___x_2616_ = 0;
v___x_2617_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2614_, v_flags_2613_, v___x_2615_, v___x_2616_);
if (lean_obj_tag(v___x_2617_) == 0)
{
lean_object* v_a_2618_; lean_object* v___x_2619_; 
v_a_2618_ = lean_ctor_get(v___x_2617_, 0);
lean_inc(v_a_2618_);
lean_dec_ref_known(v___x_2617_, 1);
v___x_2619_ = l_Lasm_JS_Wire_decode(v_a_2618_);
lean_dec(v_a_2618_);
if (lean_obj_tag(v___x_2619_) == 0)
{
lean_object* v_a_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v_a_2620_ = lean_ctor_get(v___x_2619_, 0);
lean_inc(v_a_2620_);
lean_dec_ref_known(v___x_2619_, 1);
v___x_2621_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2606_);
v___x_2622_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(v___x_2621_, v_a_2620_);
lean_dec_ref(v___x_2621_);
return v___x_2622_;
}
else
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2630_; 
v_a_2623_ = lean_ctor_get(v___x_2619_, 0);
v_isSharedCheck_2630_ = !lean_is_exclusive(v___x_2619_);
if (v_isSharedCheck_2630_ == 0)
{
v___x_2625_ = v___x_2619_;
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2619_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2630_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v___x_2628_; 
if (v_isShared_2626_ == 0)
{
v___x_2628_ = v___x_2625_;
goto v_reusejp_2627_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v_a_2623_);
v___x_2628_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2627_;
}
v_reusejp_2627_:
{
return v___x_2628_;
}
}
}
}
else
{
lean_object* v_a_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2646_; 
v_a_2631_ = lean_ctor_get(v___x_2617_, 0);
v_isSharedCheck_2646_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2646_ == 0)
{
v___x_2633_ = v___x_2617_;
v_isShared_2634_ = v_isSharedCheck_2646_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_a_2631_);
lean_dec(v___x_2617_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2646_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2644_; 
v___x_2635_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2636_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2606_);
v___x_2637_ = lean_string_append(v___x_2635_, v___x_2636_);
lean_dec_ref(v___x_2636_);
v___x_2638_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2639_ = lean_string_append(v___x_2637_, v___x_2638_);
v___x_2640_ = lean_io_error_to_string(v_a_2631_);
v___x_2641_ = lean_string_append(v___x_2639_, v___x_2640_);
lean_dec_ref(v___x_2640_);
v___x_2642_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2641_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v___x_2642_);
v___x_2644_ = v___x_2633_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2645_; 
v_reuseFailAlloc_2645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2645_, 0, v___x_2642_);
v___x_2644_ = v_reuseFailAlloc_2645_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
return v___x_2644_;
}
}
}
}
v___jp_2648_:
{
uint8_t v_construct_2650_; uint64_t v___x_2651_; 
v_construct_2650_ = lean_ctor_get_uint8(v_b_2606_, sizeof(void*)*4);
v___x_2651_ = lean_uint64_lor(v___x_2647_, v___y_2649_);
if (v_construct_2650_ == 0)
{
uint64_t v___x_2652_; 
v___x_2652_ = 0ULL;
v___y_2611_ = v___x_2651_;
v___y_2612_ = v___x_2652_;
goto v___jp_2610_;
}
else
{
uint64_t v___x_2653_; 
v___x_2653_ = 4ULL;
v___y_2611_ = v___x_2651_;
v___y_2612_ = v___x_2653_;
goto v___jp_2610_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0___boxed(lean_object* v_b_2656_, lean_object* v_args_2657_, lean_object* v_await_2658_, lean_object* v_a_2659_){
_start:
{
uint8_t v_await_boxed_2660_; lean_object* v_res_2661_; 
v_await_boxed_2660_ = lean_unbox(v_await_2658_);
v_res_2661_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v_b_2656_, v_args_2657_, v_await_boxed_2660_);
lean_dec_ref(v_b_2656_);
return v_res_2661_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal(lean_object* v_a_2668_){
_start:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; uint8_t v___x_2675_; lean_object* v___x_2676_; 
v___x_2670_ = ((lean_object*)(l_Lasm_Web_Raw_abortSignal___closed__1));
v___x_2671_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2672_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2673_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2673_, 0, v_a_2668_);
lean_ctor_set(v___x_2673_, 1, v___x_2672_);
v___x_2674_ = lean_array_push(v___x_2671_, v___x_2673_);
v___x_2675_ = 1;
v___x_2676_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v___x_2670_, v___x_2674_, v___x_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal___boxed(lean_object* v_a_2677_, lean_object* v_a_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Lasm_Web_Raw_abortSignal(v_a_2677_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(lean_object* v_b_2680_, lean_object* v_args_2681_, uint8_t v_await_2682_){
_start:
{
uint64_t v___y_2685_; uint64_t v___y_2686_; uint64_t v___x_2719_; uint64_t v___y_2721_; 
v___x_2719_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_2682_ == 0)
{
uint64_t v___x_2726_; 
v___x_2726_ = 0ULL;
v___y_2721_ = v___x_2726_;
goto v___jp_2720_;
}
else
{
uint64_t v___x_2727_; 
v___x_2727_ = 2ULL;
v___y_2721_ = v___x_2727_;
goto v___jp_2720_;
}
v___jp_2684_:
{
uint64_t v_flags_2687_; uint32_t v___x_2688_; lean_object* v___x_2689_; uint32_t v___x_2690_; lean_object* v___x_2691_; 
v_flags_2687_ = lean_uint64_lor(v___y_2685_, v___y_2686_);
v___x_2688_ = 214;
v___x_2689_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2680_, v_args_2681_);
v___x_2690_ = 0;
v___x_2691_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2688_, v_flags_2687_, v___x_2689_, v___x_2690_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2693_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
lean_inc(v_a_2692_);
lean_dec_ref_known(v___x_2691_, 1);
v___x_2693_ = l_Lasm_JS_Wire_decode(v_a_2692_);
lean_dec(v_a_2692_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v___x_2694_; 
lean_dec_ref_known(v___x_2693_, 1);
v___x_2694_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_background_spec__1_spec__2_spec__3___redArg();
return v___x_2694_;
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
v_a_2695_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2693_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2693_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2718_; 
v_a_2703_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2705_ = v___x_2691_;
v_isShared_2706_ = v_isSharedCheck_2718_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2691_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2718_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2716_; 
v___x_2707_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2708_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2680_);
v___x_2709_ = lean_string_append(v___x_2707_, v___x_2708_);
lean_dec_ref(v___x_2708_);
v___x_2710_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2711_ = lean_string_append(v___x_2709_, v___x_2710_);
v___x_2712_ = lean_io_error_to_string(v_a_2703_);
v___x_2713_ = lean_string_append(v___x_2711_, v___x_2712_);
lean_dec_ref(v___x_2712_);
v___x_2714_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2714_, 0, v___x_2713_);
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 0, v___x_2714_);
v___x_2716_ = v___x_2705_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2714_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
v___jp_2720_:
{
uint8_t v_construct_2722_; uint64_t v___x_2723_; 
v_construct_2722_ = lean_ctor_get_uint8(v_b_2680_, sizeof(void*)*4);
v___x_2723_ = lean_uint64_lor(v___x_2719_, v___y_2721_);
if (v_construct_2722_ == 0)
{
uint64_t v___x_2724_; 
v___x_2724_ = 0ULL;
v___y_2685_ = v___x_2723_;
v___y_2686_ = v___x_2724_;
goto v___jp_2684_;
}
else
{
uint64_t v___x_2725_; 
v___x_2725_ = 4ULL;
v___y_2685_ = v___x_2723_;
v___y_2686_ = v___x_2725_;
goto v___jp_2684_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0___boxed(lean_object* v_b_2728_, lean_object* v_args_2729_, lean_object* v_await_2730_, lean_object* v_a_2731_){
_start:
{
uint8_t v_await_boxed_2732_; lean_object* v_res_2733_; 
v_await_boxed_2732_ = lean_unbox(v_await_2730_);
v_res_2733_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(v_b_2728_, v_args_2729_, v_await_boxed_2732_);
lean_dec_ref(v_b_2728_);
return v_res_2733_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort(lean_object* v_a_2740_, lean_object* v_a_2741_){
_start:
{
lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___y_2749_; 
v___x_2743_ = ((lean_object*)(l_Lasm_Web_Raw_abort___closed__1));
v___x_2744_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2745_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2746_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2746_, 0, v_a_2740_);
lean_ctor_set(v___x_2746_, 1, v___x_2745_);
v___x_2747_ = lean_array_push(v___x_2744_, v___x_2746_);
if (lean_obj_tag(v_a_2741_) == 0)
{
lean_object* v___x_2753_; 
v___x_2753_ = lean_box(1);
v___y_2749_ = v___x_2753_;
goto v___jp_2748_;
}
else
{
lean_object* v_val_2754_; lean_object* v___x_2756_; uint8_t v_isShared_2757_; uint8_t v_isSharedCheck_2761_; 
v_val_2754_ = lean_ctor_get(v_a_2741_, 0);
v_isSharedCheck_2761_ = !lean_is_exclusive(v_a_2741_);
if (v_isSharedCheck_2761_ == 0)
{
v___x_2756_ = v_a_2741_;
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
else
{
lean_inc(v_val_2754_);
lean_dec(v_a_2741_);
v___x_2756_ = lean_box(0);
v_isShared_2757_ = v_isSharedCheck_2761_;
goto v_resetjp_2755_;
}
v_resetjp_2755_:
{
lean_object* v___x_2759_; 
if (v_isShared_2757_ == 0)
{
lean_ctor_set_tag(v___x_2756_, 4);
v___x_2759_ = v___x_2756_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_val_2754_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
v___y_2749_ = v___x_2759_;
goto v___jp_2748_;
}
}
}
v___jp_2748_:
{
lean_object* v___x_2750_; uint8_t v___x_2751_; lean_object* v___x_2752_; 
v___x_2750_ = lean_array_push(v___x_2747_, v___y_2749_);
v___x_2751_ = 1;
v___x_2752_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(v___x_2743_, v___x_2750_, v___x_2751_);
return v___x_2752_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort___boxed(lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lasm_Web_Raw_abort(v_a_2762_, v_a_2763_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal(double v_a_2772_){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; uint8_t v___x_2778_; lean_object* v___x_2779_; 
v___x_2774_ = ((lean_object*)(l_Lasm_Web_Raw_timeoutSignal___closed__1));
v___x_2775_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2776_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2776_, 0, v_a_2772_);
v___x_2777_ = lean_array_push(v___x_2775_, v___x_2776_);
v___x_2778_ = 1;
v___x_2779_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v___x_2774_, v___x_2777_, v___x_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal___boxed(lean_object* v_a_2780_, lean_object* v_a_2781_){
_start:
{
double v_a_84__boxed_2782_; lean_object* v_res_2783_; 
v_a_84__boxed_2782_ = lean_unbox_float(v_a_2780_);
lean_dec_ref(v_a_2780_);
v_res_2783_ = l_Lasm_Web_Raw_timeoutSignal(v_a_84__boxed_2782_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetch(lean_object* v_url_2784_, lean_object* v_init_2785_){
_start:
{
lean_object* v___x_2787_; 
v___x_2787_ = l_Lasm_Web_Raw_fetch(v_url_2784_, v_init_2785_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetch___boxed(lean_object* v_url_2788_, lean_object* v_init_2789_, lean_object* v_a_2790_){
_start:
{
lean_object* v_res_2791_; 
v_res_2791_ = l_Lasm_Web_fetch(v_url_2788_, v_init_2789_);
return v_res_2791_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info(lean_object* v_r_2792_){
_start:
{
lean_object* v___x_2794_; 
v___x_2794_ = l_Lasm_Web_Raw_responseInfo(v_r_2792_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info___boxed(lean_object* v_r_2795_, lean_object* v_a_2796_){
_start:
{
lean_object* v_res_2797_; 
v_res_2797_ = l_Lasm_Web_Response_info(v_r_2795_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(lean_object* v_context_2798_, lean_object* v_d_2799_){
_start:
{
lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2808_; lean_object* v_received_2809_; lean_object* v___y_2828_; lean_object* v_a_2831_; lean_object* v_a_2856_; 
switch(lean_obj_tag(v_d_2799_))
{
case 3:
{
double v_n_2862_; lean_object* v___x_2863_; 
v_n_2862_ = lean_ctor_get_float(v_d_2799_, 0);
v___x_2863_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2862_);
if (lean_obj_tag(v___x_2863_) == 0)
{
lean_object* v___x_2864_; 
v___x_2864_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3));
v_a_2831_ = v___x_2864_;
goto v___jp_2830_;
}
else
{
lean_object* v_val_2865_; 
v_val_2865_ = lean_ctor_get(v___x_2863_, 0);
lean_inc(v_val_2865_);
lean_dec_ref_known(v___x_2863_, 1);
v_a_2856_ = v_val_2865_;
goto v___jp_2855_;
}
}
case 5:
{
lean_object* v_i_2866_; 
v_i_2866_ = lean_ctor_get(v_d_2799_, 0);
lean_inc(v_i_2866_);
v_a_2856_ = v_i_2866_;
goto v___jp_2855_;
}
default: 
{
lean_object* v___x_2867_; 
v___x_2867_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_2831_ = v___x_2867_;
goto v___jp_2830_;
}
}
v___jp_2801_:
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v___x_2804_ = lean_string_append(v___y_2802_, v___y_2803_);
lean_dec_ref(v___y_2803_);
v___x_2805_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2804_);
v___x_2806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2805_);
return v___x_2806_;
}
v___jp_2807_:
{
lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; uint8_t v___x_2821_; 
v___x_2810_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2811_ = lean_string_append(v___x_2810_, v_context_2798_);
v___x_2812_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2813_ = lean_string_append(v___x_2811_, v___x_2812_);
v___x_2814_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0));
v___x_2815_ = lean_string_append(v___x_2813_, v___x_2814_);
v___x_2816_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2817_ = lean_string_append(v___x_2815_, v___x_2816_);
v___x_2818_ = lean_string_append(v___x_2817_, v_received_2809_);
lean_dec_ref(v_received_2809_);
v___x_2819_ = lean_string_utf8_byte_size(v___y_2808_);
v___x_2820_ = lean_unsigned_to_nat(0u);
v___x_2821_ = lean_nat_dec_eq(v___x_2819_, v___x_2820_);
if (v___x_2821_ == 0)
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2822_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_2823_ = lean_string_append(v___x_2822_, v___y_2808_);
v___x_2824_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_2825_ = lean_string_append(v___x_2823_, v___x_2824_);
v___y_2802_ = v___x_2818_;
v___y_2803_ = v___x_2825_;
goto v___jp_2801_;
}
else
{
lean_object* v___x_2826_; 
v___x_2826_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___y_2802_ = v___x_2818_;
v___y_2803_ = v___x_2826_;
goto v___jp_2801_;
}
}
v___jp_2827_:
{
lean_object* v___x_2829_; 
v___x_2829_ = l_Lasm_JS_Data_describe(v_d_2799_);
v___y_2808_ = v___y_2828_;
v_received_2809_ = v___x_2829_;
goto v___jp_2807_;
}
v___jp_2830_:
{
if (lean_obj_tag(v_d_2799_) == 9)
{
lean_object* v_value_2832_; lean_object* v_description_2833_; lean_object* v___x_2834_; uint8_t v___x_2835_; 
v_value_2832_ = lean_ctor_get(v_d_2799_, 0);
v_description_2833_ = lean_ctor_get(v_d_2799_, 1);
v___x_2834_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2835_ = lean_string_dec_eq(v_description_2833_, v___x_2834_);
if (v___x_2835_ == 0)
{
v___y_2828_ = v_a_2831_;
goto v___jp_2827_;
}
else
{
lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2852_; 
lean_inc(v_value_2832_);
v_isSharedCheck_2852_ = !lean_is_exclusive(v_d_2799_);
if (v_isSharedCheck_2852_ == 0)
{
lean_object* v_unused_2853_; lean_object* v_unused_2854_; 
v_unused_2853_ = lean_ctor_get(v_d_2799_, 1);
lean_dec(v_unused_2853_);
v_unused_2854_ = lean_ctor_get(v_d_2799_, 0);
lean_dec(v_unused_2854_);
v___x_2837_ = v_d_2799_;
v_isShared_2838_ = v_isSharedCheck_2852_;
goto v_resetjp_2836_;
}
else
{
lean_dec(v_d_2799_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2852_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
uint32_t v___x_2839_; uint64_t v___x_2840_; lean_object* v___x_2842_; 
v___x_2839_ = 206;
v___x_2840_ = 0ULL;
lean_inc(v_value_2832_);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 1, v___x_2834_);
v___x_2842_ = v___x_2837_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v_value_2832_);
lean_ctor_set(v_reuseFailAlloc_2851_, 1, v___x_2834_);
v___x_2842_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
uint32_t v___x_2843_; lean_object* v___x_2844_; 
v___x_2843_ = lasm_js_value_handle(v_value_2832_);
lean_dec(v_value_2832_);
v___x_2844_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2839_, v___x_2840_, v___x_2842_, v___x_2843_);
if (lean_obj_tag(v___x_2844_) == 0)
{
lean_object* v_a_2845_; uint8_t v___x_2846_; 
v_a_2845_ = lean_ctor_get(v___x_2844_, 0);
lean_inc(v_a_2845_);
lean_dec_ref_known(v___x_2844_, 1);
v___x_2846_ = lean_string_validate_utf8(v_a_2845_);
if (v___x_2846_ == 0)
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
lean_dec(v_a_2845_);
v___x_2847_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_2848_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2847_);
v___y_2808_ = v_a_2831_;
v_received_2809_ = v___x_2848_;
goto v___jp_2807_;
}
else
{
lean_object* v___x_2849_; 
v___x_2849_ = lean_string_from_utf8_unchecked(v_a_2845_);
v___y_2808_ = v_a_2831_;
v_received_2809_ = v___x_2849_;
goto v___jp_2807_;
}
}
else
{
lean_object* v___x_2850_; 
lean_dec_ref_known(v___x_2844_, 1);
v___x_2850_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v___y_2808_ = v_a_2831_;
v_received_2809_ = v___x_2850_;
goto v___jp_2807_;
}
}
}
}
}
else
{
v___y_2828_ = v_a_2831_;
goto v___jp_2827_;
}
}
v___jp_2855_:
{
lean_object* v___x_2857_; uint8_t v___x_2858_; 
v___x_2857_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1);
v___x_2858_ = lean_int_dec_le(v___x_2857_, v_a_2856_);
if (v___x_2858_ == 0)
{
lean_object* v___x_2859_; 
lean_dec(v_a_2856_);
v___x_2859_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2));
v_a_2831_ = v___x_2859_;
goto v___jp_2830_;
}
else
{
lean_object* v___x_2860_; lean_object* v___x_2861_; 
lean_dec(v_d_2799_);
v___x_2860_ = l_Int_toNat(v_a_2856_);
lean_dec(v_a_2856_);
v___x_2861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2861_, 0, v___x_2860_);
return v___x_2861_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2868_, lean_object* v_d_2869_, lean_object* v_a_2870_){
_start:
{
lean_object* v_res_2871_; 
v_res_2871_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(v_context_2868_, v_d_2869_);
lean_dec_ref(v_context_2868_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(lean_object* v_context_2872_, lean_object* v_bytes_2873_){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lasm_JS_Wire_decode(v_bytes_2873_);
if (lean_obj_tag(v___x_2875_) == 0)
{
lean_object* v_a_2876_; lean_object* v___x_2877_; 
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc(v_a_2876_);
lean_dec_ref_known(v___x_2875_, 1);
v___x_2877_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(v_context_2872_, v_a_2876_);
return v___x_2877_;
}
else
{
lean_object* v_a_2878_; lean_object* v___x_2880_; uint8_t v_isShared_2881_; uint8_t v_isSharedCheck_2885_; 
v_a_2878_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_2885_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_2885_ == 0)
{
v___x_2880_ = v___x_2875_;
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
else
{
lean_inc(v_a_2878_);
lean_dec(v___x_2875_);
v___x_2880_ = lean_box(0);
v_isShared_2881_ = v_isSharedCheck_2885_;
goto v_resetjp_2879_;
}
v_resetjp_2879_:
{
lean_object* v___x_2883_; 
if (v_isShared_2881_ == 0)
{
v___x_2883_ = v___x_2880_;
goto v_reusejp_2882_;
}
else
{
lean_object* v_reuseFailAlloc_2884_; 
v_reuseFailAlloc_2884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2884_, 0, v_a_2878_);
v___x_2883_ = v_reuseFailAlloc_2884_;
goto v_reusejp_2882_;
}
v_reusejp_2882_:
{
return v___x_2883_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0___boxed(lean_object* v_context_2886_, lean_object* v_bytes_2887_, lean_object* v_a_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(v_context_2886_, v_bytes_2887_);
lean_dec_ref(v_bytes_2887_);
lean_dec_ref(v_context_2886_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(lean_object* v_o_2891_, lean_object* v_key_2892_){
_start:
{
uint32_t v___x_2894_; uint32_t v___x_2895_; uint64_t v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v___x_2894_ = 203;
v___x_2895_ = lasm_js_value_handle(v_o_2891_);
v___x_2896_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
lean_inc_ref(v_key_2892_);
v___x_2897_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2897_, 0, v_key_2892_);
v___x_2898_ = l_Lasm_JS_Wire_encode(v___x_2897_);
v___x_2899_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2900_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2900_, 0, v_o_2891_);
lean_ctor_set(v___x_2900_, 1, v___x_2899_);
v___x_2901_ = lasm_js_call(v___x_2894_, v___x_2895_, v___x_2896_, v___x_2898_, v___x_2900_);
lean_dec_ref_known(v___x_2900_, 2);
lean_dec_ref(v___x_2898_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
lean_inc(v_a_2902_);
lean_dec_ref_known(v___x_2901_, 1);
v___x_2903_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0));
v___x_2904_ = l_String_quote(v_key_2892_);
v___x_2905_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
v___x_2906_ = lean_unsigned_to_nat(120u);
v___x_2907_ = lean_unsigned_to_nat(0u);
v___x_2908_ = l_Std_Format_pretty(v___x_2905_, v___x_2906_, v___x_2907_, v___x_2907_);
v___x_2909_ = lean_string_append(v___x_2903_, v___x_2908_);
lean_dec_ref(v___x_2908_);
v___x_2910_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(v___x_2909_, v_a_2902_);
lean_dec(v_a_2902_);
lean_dec_ref(v___x_2909_);
return v___x_2910_;
}
else
{
lean_object* v_a_2911_; lean_object* v___x_2913_; uint8_t v_isShared_2914_; uint8_t v_isSharedCheck_2918_; 
lean_dec_ref(v_key_2892_);
v_a_2911_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2913_ = v___x_2901_;
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
else
{
lean_inc(v_a_2911_);
lean_dec(v___x_2901_);
v___x_2913_ = lean_box(0);
v_isShared_2914_ = v_isSharedCheck_2918_;
goto v_resetjp_2912_;
}
v_resetjp_2912_:
{
lean_object* v___x_2916_; 
if (v_isShared_2914_ == 0)
{
v___x_2916_ = v___x_2913_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_a_2911_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___boxed(lean_object* v_o_2919_, lean_object* v_key_2920_, lean_object* v_a_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(v_o_2919_, v_key_2920_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status(lean_object* v_r_2923_){
_start:
{
lean_object* v___x_2925_; lean_object* v___x_2926_; 
v___x_2925_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
v___x_2926_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(v_r_2923_, v___x_2925_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status___boxed(lean_object* v_r_2927_, lean_object* v_a_2928_){
_start:
{
lean_object* v_res_2929_; 
v_res_2929_ = l_Lasm_Web_Response_status(v_r_2927_);
return v_res_2929_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(lean_object* v_context_2930_, lean_object* v_d_2931_){
_start:
{
lean_object* v_received_2934_; 
if (lean_obj_tag(v_d_2931_) == 2)
{
uint8_t v_b_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v_b_2948_ = lean_ctor_get_uint8(v_d_2931_, 0);
lean_dec_ref_known(v_d_2931_, 0);
v___x_2949_ = lean_box(v_b_2948_);
v___x_2950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2949_);
return v___x_2950_;
}
else
{
if (lean_obj_tag(v_d_2931_) == 9)
{
lean_object* v_value_2951_; lean_object* v_description_2952_; lean_object* v___x_2953_; uint8_t v___x_2954_; 
v_value_2951_ = lean_ctor_get(v_d_2931_, 0);
v_description_2952_ = lean_ctor_get(v_d_2931_, 1);
v___x_2953_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2954_ = lean_string_dec_eq(v_description_2952_, v___x_2953_);
if (v___x_2954_ == 0)
{
goto v___jp_2946_;
}
else
{
uint32_t v___x_2955_; uint64_t v___x_2956_; lean_object* v___x_2957_; uint32_t v___x_2958_; lean_object* v___x_2959_; 
lean_inc_n(v_value_2951_, 2);
lean_dec_ref_known(v_d_2931_, 2);
v___x_2955_ = 206;
v___x_2956_ = 0ULL;
v___x_2957_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2957_, 0, v_value_2951_);
lean_ctor_set(v___x_2957_, 1, v___x_2953_);
v___x_2958_ = lasm_js_value_handle(v_value_2951_);
lean_dec(v_value_2951_);
v___x_2959_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2955_, v___x_2956_, v___x_2957_, v___x_2958_);
if (lean_obj_tag(v___x_2959_) == 0)
{
lean_object* v_a_2960_; uint8_t v___x_2961_; 
v_a_2960_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_a_2960_);
lean_dec_ref_known(v___x_2959_, 1);
v___x_2961_ = lean_string_validate_utf8(v_a_2960_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; lean_object* v___x_2963_; 
lean_dec(v_a_2960_);
v___x_2962_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_2963_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2962_);
v_received_2934_ = v___x_2963_;
goto v___jp_2933_;
}
else
{
lean_object* v___x_2964_; 
v___x_2964_ = lean_string_from_utf8_unchecked(v_a_2960_);
v_received_2934_ = v___x_2964_;
goto v___jp_2933_;
}
}
else
{
lean_object* v___x_2965_; 
lean_dec_ref_known(v___x_2959_, 1);
v___x_2965_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v_received_2934_ = v___x_2965_;
goto v___jp_2933_;
}
}
}
else
{
goto v___jp_2946_;
}
}
v___jp_2933_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2935_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2936_ = lean_string_append(v___x_2935_, v_context_2930_);
v___x_2937_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2938_ = lean_string_append(v___x_2936_, v___x_2937_);
v___x_2939_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2));
v___x_2940_ = lean_string_append(v___x_2938_, v___x_2939_);
v___x_2941_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2942_ = lean_string_append(v___x_2940_, v___x_2941_);
v___x_2943_ = lean_string_append(v___x_2942_, v_received_2934_);
lean_dec_ref(v_received_2934_);
v___x_2944_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2943_);
v___x_2945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2944_);
return v___x_2945_;
}
v___jp_2946_:
{
lean_object* v___x_2947_; 
v___x_2947_ = l_Lasm_JS_Data_describe(v_d_2931_);
v_received_2934_ = v___x_2947_;
goto v___jp_2933_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2966_, lean_object* v_d_2967_, lean_object* v_a_2968_){
_start:
{
lean_object* v_res_2969_; 
v_res_2969_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(v_context_2966_, v_d_2967_);
lean_dec_ref(v_context_2966_);
return v_res_2969_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(lean_object* v_context_2970_, lean_object* v_bytes_2971_){
_start:
{
lean_object* v___x_2973_; 
v___x_2973_ = l_Lasm_JS_Wire_decode(v_bytes_2971_);
if (lean_obj_tag(v___x_2973_) == 0)
{
lean_object* v_a_2974_; lean_object* v___x_2975_; 
v_a_2974_ = lean_ctor_get(v___x_2973_, 0);
lean_inc(v_a_2974_);
lean_dec_ref_known(v___x_2973_, 1);
v___x_2975_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(v_context_2970_, v_a_2974_);
return v___x_2975_;
}
else
{
lean_object* v_a_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2983_; 
v_a_2976_ = lean_ctor_get(v___x_2973_, 0);
v_isSharedCheck_2983_ = !lean_is_exclusive(v___x_2973_);
if (v_isSharedCheck_2983_ == 0)
{
v___x_2978_ = v___x_2973_;
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_a_2976_);
lean_dec(v___x_2973_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2983_;
goto v_resetjp_2977_;
}
v_resetjp_2977_:
{
lean_object* v___x_2981_; 
if (v_isShared_2979_ == 0)
{
v___x_2981_ = v___x_2978_;
goto v_reusejp_2980_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_a_2976_);
v___x_2981_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2980_;
}
v_reusejp_2980_:
{
return v___x_2981_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0___boxed(lean_object* v_context_2984_, lean_object* v_bytes_2985_, lean_object* v_a_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(v_context_2984_, v_bytes_2985_);
lean_dec_ref(v_bytes_2985_);
lean_dec_ref(v_context_2984_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(lean_object* v_o_2988_, lean_object* v_key_2989_){
_start:
{
uint32_t v___x_2991_; uint32_t v___x_2992_; uint64_t v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2991_ = 203;
v___x_2992_ = lasm_js_value_handle(v_o_2988_);
v___x_2993_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
lean_inc_ref(v_key_2989_);
v___x_2994_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2994_, 0, v_key_2989_);
v___x_2995_ = l_Lasm_JS_Wire_encode(v___x_2994_);
v___x_2996_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2997_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2997_, 0, v_o_2988_);
lean_ctor_set(v___x_2997_, 1, v___x_2996_);
v___x_2998_ = lasm_js_call(v___x_2991_, v___x_2992_, v___x_2993_, v___x_2995_, v___x_2997_);
lean_dec_ref_known(v___x_2997_, 2);
lean_dec_ref(v___x_2995_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v_a_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v_a_2999_ = lean_ctor_get(v___x_2998_, 0);
lean_inc(v_a_2999_);
lean_dec_ref_known(v___x_2998_, 1);
v___x_3000_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0));
v___x_3001_ = l_String_quote(v_key_2989_);
v___x_3002_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3002_, 0, v___x_3001_);
v___x_3003_ = lean_unsigned_to_nat(120u);
v___x_3004_ = lean_unsigned_to_nat(0u);
v___x_3005_ = l_Std_Format_pretty(v___x_3002_, v___x_3003_, v___x_3004_, v___x_3004_);
v___x_3006_ = lean_string_append(v___x_3000_, v___x_3005_);
lean_dec_ref(v___x_3005_);
v___x_3007_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(v___x_3006_, v_a_2999_);
lean_dec(v_a_2999_);
lean_dec_ref(v___x_3006_);
return v___x_3007_;
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec_ref(v_key_2989_);
v_a_3008_ = lean_ctor_get(v___x_2998_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_2998_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_2998_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0___boxed(lean_object* v_o_3016_, lean_object* v_key_3017_, lean_object* v_a_3018_){
_start:
{
lean_object* v_res_3019_; 
v_res_3019_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(v_o_3016_, v_key_3017_);
return v_res_3019_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok(lean_object* v_r_3020_){
_start:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; 
v___x_3022_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
v___x_3023_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(v_r_3020_, v___x_3022_);
return v___x_3023_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok___boxed(lean_object* v_r_3024_, lean_object* v_a_3025_){
_start:
{
lean_object* v_res_3026_; 
v_res_3026_ = l_Lasm_Web_Response_ok(v_r_3024_);
return v_res_3026_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0(uint8_t v_await_3027_, uint64_t v_extra_3028_){
_start:
{
uint64_t v___x_3029_; uint64_t v___y_3031_; 
v___x_3029_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_3027_ == 0)
{
uint64_t v___x_3034_; 
v___x_3034_ = 0ULL;
v___y_3031_ = v___x_3034_;
goto v___jp_3030_;
}
else
{
uint64_t v___x_3035_; 
v___x_3035_ = 2ULL;
v___y_3031_ = v___x_3035_;
goto v___jp_3030_;
}
v___jp_3030_:
{
uint64_t v___x_3032_; uint64_t v___x_3033_; 
v___x_3032_ = lean_uint64_lor(v___x_3029_, v___y_3031_);
v___x_3033_ = lean_uint64_lor(v___x_3032_, v_extra_3028_);
return v___x_3033_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0___boxed(lean_object* v_await_3036_, lean_object* v_extra_3037_){
_start:
{
uint8_t v_await_boxed_3038_; uint64_t v_extra_boxed_3039_; uint64_t v_res_3040_; lean_object* v_r_3041_; 
v_await_boxed_3038_ = lean_unbox(v_await_3036_);
v_extra_boxed_3039_ = lean_unbox_uint64(v_extra_3037_);
lean_dec_ref(v_extra_3037_);
v_res_3040_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0(v_await_boxed_3038_, v_extra_boxed_3039_);
v_r_3041_ = lean_box_uint64(v_res_3040_);
return v_r_3041_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2(lean_object* v_context_3043_, lean_object* v_d_3044_){
_start:
{
lean_object* v_received_3050_; 
switch(lean_obj_tag(v_d_3044_))
{
case 1:
{
goto v___jp_3046_;
}
case 0:
{
goto v___jp_3046_;
}
default: 
{
if (lean_obj_tag(v_d_3044_) == 4)
{
lean_object* v_s_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; 
v_s_3064_ = lean_ctor_get(v_d_3044_, 0);
lean_inc_ref(v_s_3064_);
lean_dec_ref_known(v_d_3044_, 1);
v___x_3065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3065_, 0, v_s_3064_);
v___x_3066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3065_);
return v___x_3066_;
}
else
{
if (lean_obj_tag(v_d_3044_) == 9)
{
lean_object* v_value_3067_; lean_object* v_description_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; 
v_value_3067_ = lean_ctor_get(v_d_3044_, 0);
v_description_3068_ = lean_ctor_get(v_d_3044_, 1);
v___x_3069_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3070_ = lean_string_dec_eq(v_description_3068_, v___x_3069_);
if (v___x_3070_ == 0)
{
goto v___jp_3062_;
}
else
{
uint32_t v___x_3071_; uint64_t v___x_3072_; lean_object* v___x_3073_; uint32_t v___x_3074_; lean_object* v___x_3075_; 
lean_inc_n(v_value_3067_, 2);
lean_dec_ref_known(v_d_3044_, 2);
v___x_3071_ = 206;
v___x_3072_ = 0ULL;
v___x_3073_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3073_, 0, v_value_3067_);
lean_ctor_set(v___x_3073_, 1, v___x_3069_);
v___x_3074_ = lasm_js_value_handle(v_value_3067_);
lean_dec(v_value_3067_);
v___x_3075_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3071_, v___x_3072_, v___x_3073_, v___x_3074_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_object* v_a_3076_; uint8_t v___x_3077_; 
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
lean_inc(v_a_3076_);
lean_dec_ref_known(v___x_3075_, 1);
v___x_3077_ = lean_string_validate_utf8(v_a_3076_);
if (v___x_3077_ == 0)
{
lean_object* v___x_3078_; lean_object* v___x_3079_; 
lean_dec(v_a_3076_);
v___x_3078_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7);
v___x_3079_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3078_);
v_received_3050_ = v___x_3079_;
goto v___jp_3049_;
}
else
{
lean_object* v___x_3080_; 
v___x_3080_ = lean_string_from_utf8_unchecked(v_a_3076_);
v_received_3050_ = v___x_3080_;
goto v___jp_3049_;
}
}
else
{
lean_object* v___x_3081_; 
lean_dec_ref_known(v___x_3075_, 1);
v___x_3081_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v_received_3050_ = v___x_3081_;
goto v___jp_3049_;
}
}
}
else
{
goto v___jp_3062_;
}
}
}
}
v___jp_3046_:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; 
v___x_3047_ = lean_box(0);
v___x_3048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
return v___x_3048_;
}
v___jp_3049_:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; 
v___x_3051_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_3052_ = lean_string_append(v___x_3051_, v_context_3043_);
v___x_3053_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_3054_ = lean_string_append(v___x_3052_, v___x_3053_);
v___x_3055_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___closed__0));
v___x_3056_ = lean_string_append(v___x_3054_, v___x_3055_);
v___x_3057_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_3058_ = lean_string_append(v___x_3056_, v___x_3057_);
v___x_3059_ = lean_string_append(v___x_3058_, v_received_3050_);
lean_dec_ref(v_received_3050_);
v___x_3060_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3060_, 0, v___x_3059_);
v___x_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3061_, 0, v___x_3060_);
return v___x_3061_;
}
v___jp_3062_:
{
lean_object* v___x_3063_; 
v___x_3063_ = l_Lasm_JS_Data_describe(v_d_3044_);
v_received_3050_ = v___x_3063_;
goto v___jp_3049_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2___boxed(lean_object* v_context_3082_, lean_object* v_d_3083_, lean_object* v_a_3084_){
_start:
{
lean_object* v_res_3085_; 
v_res_3085_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2(v_context_3082_, v_d_3083_);
lean_dec_ref(v_context_3082_);
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1(lean_object* v_context_3086_, lean_object* v_bytes_3087_){
_start:
{
lean_object* v___x_3089_; 
v___x_3089_ = l_Lasm_JS_Wire_decode(v_bytes_3087_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v_a_3090_; lean_object* v___x_3091_; 
v_a_3090_ = lean_ctor_get(v___x_3089_, 0);
lean_inc(v_a_3090_);
lean_dec_ref_known(v___x_3089_, 1);
v___x_3091_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1_spec__2(v_context_3086_, v_a_3090_);
return v___x_3091_;
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
v_a_3092_ = lean_ctor_get(v___x_3089_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3089_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3089_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3089_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1___boxed(lean_object* v_context_3100_, lean_object* v_bytes_3101_, lean_object* v_a_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1(v_context_3100_, v_bytes_3101_);
lean_dec_ref(v_bytes_3101_);
lean_dec_ref(v_context_3100_);
return v_res_3103_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0(void){
_start:
{
uint64_t v___x_3104_; uint8_t v___x_3105_; uint64_t v___x_3106_; 
v___x_3104_ = 8ULL;
v___x_3105_ = 0;
v___x_3106_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__0(v___x_3105_, v___x_3104_);
return v___x_3106_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0(lean_object* v_o_3108_, lean_object* v_name_3109_, lean_object* v_args_3110_){
_start:
{
lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; uint64_t v___x_3115_; lean_object* v___x_3116_; 
v___x_3112_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3113_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3113_, 0, v_o_3108_);
lean_ctor_set(v___x_3113_, 1, v___x_3112_);
lean_inc_ref(v_name_3109_);
v___x_3114_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3114_, 0, v_name_3109_);
v___x_3115_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__0);
v___x_3116_ = l_Lasm_JS_Value_invokeRaw(v___x_3113_, v___x_3114_, v_args_3110_, v___x_3115_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
lean_inc(v_a_3117_);
lean_dec_ref_known(v___x_3116_, 1);
v___x_3118_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___closed__1));
v___x_3119_ = lean_string_append(v___x_3118_, v_name_3109_);
lean_dec_ref(v_name_3109_);
v___x_3120_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0_spec__1(v___x_3119_, v_a_3117_);
lean_dec(v_a_3117_);
lean_dec_ref(v___x_3119_);
return v___x_3120_;
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec_ref(v_name_3109_);
v_a_3121_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3116_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3116_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0___boxed(lean_object* v_o_3129_, lean_object* v_name_3130_, lean_object* v_args_3131_, lean_object* v_a_3132_){
_start:
{
lean_object* v_res_3133_; 
v_res_3133_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0(v_o_3129_, v_name_3130_, v_args_3131_);
return v_res_3133_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header(lean_object* v_r_3135_, lean_object* v_name_3136_){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3138_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v___x_3139_ = l_Lasm_JS_Value_get___at___00Lasm_Web_background_spec__0(v_r_3135_, v___x_3138_);
if (lean_obj_tag(v___x_3139_) == 0)
{
lean_object* v_a_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v_a_3140_ = lean_ctor_get(v___x_3139_, 0);
lean_inc(v_a_3140_);
lean_dec_ref_known(v___x_3139_, 1);
v___x_3141_ = ((lean_object*)(l_Lasm_Web_Response_header___closed__0));
v___x_3142_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3142_, 0, v_name_3136_);
v___x_3143_ = lean_unsigned_to_nat(1u);
v___x_3144_ = lean_mk_empty_array_with_capacity(v___x_3143_);
v___x_3145_ = lean_array_push(v___x_3144_, v___x_3142_);
v___x_3146_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__0(v_a_3140_, v___x_3141_, v___x_3145_);
return v___x_3146_;
}
else
{
lean_object* v_a_3147_; lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3154_; 
lean_dec_ref(v_name_3136_);
v_a_3147_ = lean_ctor_get(v___x_3139_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v___x_3139_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3149_ = v___x_3139_;
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
else
{
lean_inc(v_a_3147_);
lean_dec(v___x_3139_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3154_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3153_; 
v_reuseFailAlloc_3153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3153_, 0, v_a_3147_);
v___x_3152_ = v_reuseFailAlloc_3153_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
return v___x_3152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header___boxed(lean_object* v_r_3155_, lean_object* v_name_3156_, lean_object* v_a_3157_){
_start:
{
lean_object* v_res_3158_; 
v_res_3158_ = l_Lasm_Web_Response_header(v_r_3155_, v_name_3156_);
return v_res_3158_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text(lean_object* v_r_3159_){
_start:
{
lean_object* v___x_3161_; 
v___x_3161_ = l_Lasm_Web_Raw_responseText(v_r_3159_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text___boxed(lean_object* v_r_3162_, lean_object* v_a_3163_){
_start:
{
lean_object* v_res_3164_; 
v_res_3164_ = l_Lasm_Web_Response_text(v_r_3162_);
return v_res_3164_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json(lean_object* v_r_3165_){
_start:
{
lean_object* v___x_3167_; 
v___x_3167_ = l_Lasm_Web_Raw_responseJson(v_r_3165_);
return v___x_3167_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json___boxed(lean_object* v_r_3168_, lean_object* v_a_3169_){
_start:
{
lean_object* v_res_3170_; 
v_res_3170_ = l_Lasm_Web_Response_json(v_r_3168_);
return v_res_3170_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes(lean_object* v_r_3171_){
_start:
{
lean_object* v___x_3173_; 
v___x_3173_ = l_Lasm_Web_Raw_responseBytes(v_r_3171_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes___boxed(lean_object* v_r_3174_, lean_object* v_a_3175_){
_start:
{
lean_object* v_res_3176_; 
v_res_3176_ = l_Lasm_Web_Response_bytes(v_r_3174_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0(lean_object* v_a_3177_, lean_object* v_x_3178_){
_start:
{
if (lean_obj_tag(v_x_3178_) == 0)
{
lean_object* v_a_3180_; lean_object* v___x_3182_; uint8_t v_isShared_3183_; uint8_t v_isSharedCheck_3188_; 
lean_dec(v_a_3177_);
v_a_3180_ = lean_ctor_get(v_x_3178_, 0);
v_isSharedCheck_3188_ = !lean_is_exclusive(v_x_3178_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3182_ = v_x_3178_;
v_isShared_3183_ = v_isSharedCheck_3188_;
goto v_resetjp_3181_;
}
else
{
lean_inc(v_a_3180_);
lean_dec(v_x_3178_);
v___x_3182_ = lean_box(0);
v_isShared_3183_ = v_isSharedCheck_3188_;
goto v_resetjp_3181_;
}
v_resetjp_3181_:
{
lean_object* v___x_3185_; 
if (v_isShared_3183_ == 0)
{
v___x_3185_ = v___x_3182_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3187_; 
v_reuseFailAlloc_3187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3187_, 0, v_a_3180_);
v___x_3185_ = v_reuseFailAlloc_3187_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
lean_object* v___x_3186_; 
v___x_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
return v___x_3186_;
}
}
}
else
{
lean_object* v___x_3189_; 
lean_dec_ref_known(v_x_3178_, 1);
v___x_3189_ = l_Lasm_Web_Raw_responseText(v_a_3177_);
return v___x_3189_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0___boxed(lean_object* v_a_3190_, lean_object* v_x_3191_, lean_object* v___y_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l_Lasm_Web_fetchText___lam__0(v_a_3190_, v_x_3191_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1(lean_object* v_url_3197_, lean_object* v___f_3198_, lean_object* v_a_3199_, lean_object* v_x_3200_){
_start:
{
if (lean_obj_tag(v_x_3200_) == 0)
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3210_; 
lean_dec(v_a_3199_);
lean_dec_ref(v___f_3198_);
v_a_3202_ = lean_ctor_get(v_x_3200_, 0);
v_isSharedCheck_3210_ = !lean_is_exclusive(v_x_3200_);
if (v_isSharedCheck_3210_ == 0)
{
v___x_3204_ = v_x_3200_;
v_isShared_3205_ = v_isSharedCheck_3210_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v_x_3200_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3210_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3205_ == 0)
{
v___x_3207_ = v___x_3204_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v_a_3202_);
v___x_3207_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
lean_object* v___x_3208_; 
v___x_3208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
return v___x_3208_;
}
}
}
else
{
lean_object* v_a_3211_; lean_object* v___x_3213_; uint8_t v_isShared_3214_; uint8_t v_isSharedCheck_3235_; 
v_a_3211_ = lean_ctor_get(v_x_3200_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v_x_3200_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3213_ = v_x_3200_;
v_isShared_3214_ = v_isSharedCheck_3235_;
goto v_resetjp_3212_;
}
else
{
lean_inc(v_a_3211_);
lean_dec(v_x_3200_);
v___x_3213_ = lean_box(0);
v_isShared_3214_ = v_isSharedCheck_3235_;
goto v_resetjp_3212_;
}
v_resetjp_3212_:
{
uint8_t v_ok_3215_; 
v_ok_3215_ = lean_ctor_get_uint8(v_a_3211_, sizeof(void*)*5);
if (v_ok_3215_ == 0)
{
lean_object* v_status_3216_; lean_object* v_statusText_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3230_; 
lean_dec(v_a_3199_);
v_status_3216_ = lean_ctor_get(v_a_3211_, 0);
lean_inc(v_status_3216_);
v_statusText_3217_ = lean_ctor_get(v_a_3211_, 1);
lean_inc_ref(v_statusText_3217_);
lean_dec(v_a_3211_);
v___x_3218_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3219_ = lean_string_append(v___x_3218_, v_url_3197_);
v___x_3220_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__1));
v___x_3221_ = lean_string_append(v___x_3219_, v___x_3220_);
v___x_3222_ = l_Nat_reprFast(v_status_3216_);
v___x_3223_ = lean_string_append(v___x_3221_, v___x_3222_);
lean_dec_ref(v___x_3222_);
v___x_3224_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__2));
v___x_3225_ = lean_string_append(v___x_3223_, v___x_3224_);
v___x_3226_ = lean_string_append(v___x_3225_, v_statusText_3217_);
lean_dec_ref(v_statusText_3217_);
v___x_3227_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3226_);
v___x_3228_ = lean_unsigned_to_nat(0u);
if (v_isShared_3214_ == 0)
{
lean_ctor_set_tag(v___x_3213_, 0);
lean_ctor_set(v___x_3213_, 0, v___x_3227_);
v___x_3230_ = v___x_3213_;
goto v_reusejp_3229_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3227_);
v___x_3230_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3229_;
}
v_reusejp_3229_:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; 
v___x_3231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3231_, 0, v___x_3230_);
v___x_3232_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3228_, v_ok_3215_, v___x_3231_, v___f_3198_);
return v___x_3232_;
}
}
else
{
lean_object* v___x_3234_; 
lean_del_object(v___x_3213_);
lean_dec(v_a_3211_);
lean_dec_ref(v___f_3198_);
v___x_3234_ = l_Lasm_Web_Raw_responseText(v_a_3199_);
return v___x_3234_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1___boxed(lean_object* v_url_3236_, lean_object* v___f_3237_, lean_object* v_a_3238_, lean_object* v_x_3239_, lean_object* v___y_3240_){
_start:
{
lean_object* v_res_3241_; 
v_res_3241_ = l_Lasm_Web_fetchText___lam__1(v_url_3236_, v___f_3237_, v_a_3238_, v_x_3239_);
lean_dec_ref(v_url_3236_);
return v_res_3241_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2(lean_object* v_url_3242_, lean_object* v_x_3243_){
_start:
{
if (lean_obj_tag(v_x_3243_) == 0)
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3253_; 
lean_dec_ref(v_url_3242_);
v_a_3245_ = lean_ctor_get(v_x_3243_, 0);
v_isSharedCheck_3253_ = !lean_is_exclusive(v_x_3243_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3247_ = v_x_3243_;
v_isShared_3248_ = v_isSharedCheck_3253_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v_x_3243_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3253_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
lean_object* v___x_3251_; 
v___x_3251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
return v___x_3251_;
}
}
}
else
{
lean_object* v_a_3254_; lean_object* v___x_3256_; uint8_t v_isShared_3257_; uint8_t v_isSharedCheck_3275_; 
v_a_3254_ = lean_ctor_get(v_x_3243_, 0);
v_isSharedCheck_3275_ = !lean_is_exclusive(v_x_3243_);
if (v_isSharedCheck_3275_ == 0)
{
v___x_3256_ = v_x_3243_;
v_isShared_3257_ = v_isSharedCheck_3275_;
goto v_resetjp_3255_;
}
else
{
lean_inc(v_a_3254_);
lean_dec(v_x_3243_);
v___x_3256_ = lean_box(0);
v_isShared_3257_ = v_isSharedCheck_3275_;
goto v_resetjp_3255_;
}
v_resetjp_3255_:
{
lean_object* v___f_3258_; lean_object* v___f_3259_; lean_object* v___x_3260_; uint8_t v___x_3261_; lean_object* v_val_3263_; lean_object* v___x_3266_; 
lean_inc_n(v_a_3254_, 2);
v___f_3258_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3258_, 0, v_a_3254_);
v___f_3259_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3259_, 0, v_url_3242_);
lean_closure_set(v___f_3259_, 1, v___f_3258_);
lean_closure_set(v___f_3259_, 2, v_a_3254_);
v___x_3260_ = lean_unsigned_to_nat(0u);
v___x_3261_ = 0;
v___x_3266_ = l_Lasm_Web_Raw_responseInfo(v_a_3254_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3269_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
if (v_isShared_3257_ == 0)
{
lean_ctor_set(v___x_3256_, 0, v_a_3267_);
v___x_3269_ = v___x_3256_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3267_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
v_val_3263_ = v___x_3269_;
goto v___jp_3262_;
}
}
else
{
lean_object* v_a_3271_; lean_object* v___x_3273_; 
v_a_3271_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3266_, 1);
if (v_isShared_3257_ == 0)
{
lean_ctor_set_tag(v___x_3256_, 0);
lean_ctor_set(v___x_3256_, 0, v_a_3271_);
v___x_3273_ = v___x_3256_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3274_; 
v_reuseFailAlloc_3274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3274_, 0, v_a_3271_);
v___x_3273_ = v_reuseFailAlloc_3274_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
v_val_3263_ = v___x_3273_;
goto v___jp_3262_;
}
}
v___jp_3262_:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; 
v___x_3264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3264_, 0, v_val_3263_);
v___x_3265_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3260_, v___x_3261_, v___x_3264_, v___f_3259_);
return v___x_3265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2___boxed(lean_object* v_url_3276_, lean_object* v_x_3277_, lean_object* v___y_3278_){
_start:
{
lean_object* v_res_3279_; 
v_res_3279_ = l_Lasm_Web_fetchText___lam__2(v_url_3276_, v_x_3277_);
return v_res_3279_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText(lean_object* v_url_3280_, lean_object* v_init_3281_){
_start:
{
lean_object* v___f_3283_; lean_object* v___x_3284_; uint8_t v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; 
lean_inc_ref(v_url_3280_);
v___f_3283_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3283_, 0, v_url_3280_);
v___x_3284_ = lean_unsigned_to_nat(0u);
v___x_3285_ = 0;
v___x_3286_ = l_Lasm_Web_Raw_fetch(v_url_3280_, v_init_3281_);
v___x_3287_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3284_, v___x_3285_, v___x_3286_, v___f_3283_);
return v___x_3287_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___boxed(lean_object* v_url_3288_, lean_object* v_init_3289_, lean_object* v_a_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l_Lasm_Web_fetchText(v_url_3288_, v_init_3289_);
return v_res_3291_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0(lean_object* v_url_3292_, lean_object* v_inst_3293_, lean_object* v_x_3294_){
_start:
{
lean_object* v_val_3297_; 
if (lean_obj_tag(v_x_3294_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3307_; 
lean_dec_ref(v_inst_3293_);
v_a_3299_ = lean_ctor_get(v_x_3294_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v_x_3294_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3301_ = v_x_3294_;
v_isShared_3302_ = v_isSharedCheck_3307_;
goto v_resetjp_3300_;
}
else
{
lean_inc(v_a_3299_);
lean_dec(v_x_3294_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3307_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3304_; 
if (v_isShared_3302_ == 0)
{
v___x_3304_ = v___x_3301_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3299_);
v___x_3304_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
lean_object* v___x_3305_; 
v___x_3305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3304_);
return v___x_3305_;
}
}
}
else
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3323_; 
v_a_3308_ = lean_ctor_get(v_x_3294_, 0);
v_isSharedCheck_3323_ = !lean_is_exclusive(v_x_3294_);
if (v_isSharedCheck_3323_ == 0)
{
v___x_3310_ = v_x_3294_;
v_isShared_3311_ = v_isSharedCheck_3323_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v_x_3294_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3323_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___x_3312_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3313_ = lean_string_append(v___x_3312_, v_url_3292_);
v___x_3314_ = l_Lasm_JS_decodeAs___redArg(v_inst_3293_, v___x_3313_, v_a_3308_);
lean_dec_ref(v___x_3313_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_object* v_a_3315_; lean_object* v___x_3317_; 
v_a_3315_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_a_3315_);
lean_dec_ref_known(v___x_3314_, 1);
if (v_isShared_3311_ == 0)
{
lean_ctor_set(v___x_3310_, 0, v_a_3315_);
v___x_3317_ = v___x_3310_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_a_3315_);
v___x_3317_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
v_val_3297_ = v___x_3317_;
goto v___jp_3296_;
}
}
else
{
lean_object* v_a_3319_; lean_object* v___x_3321_; 
v_a_3319_ = lean_ctor_get(v___x_3314_, 0);
lean_inc(v_a_3319_);
lean_dec_ref_known(v___x_3314_, 1);
if (v_isShared_3311_ == 0)
{
lean_ctor_set_tag(v___x_3310_, 0);
lean_ctor_set(v___x_3310_, 0, v_a_3319_);
v___x_3321_ = v___x_3310_;
goto v_reusejp_3320_;
}
else
{
lean_object* v_reuseFailAlloc_3322_; 
v_reuseFailAlloc_3322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3322_, 0, v_a_3319_);
v___x_3321_ = v_reuseFailAlloc_3322_;
goto v_reusejp_3320_;
}
v_reusejp_3320_:
{
v_val_3297_ = v___x_3321_;
goto v___jp_3296_;
}
}
}
}
v___jp_3296_:
{
lean_object* v___x_3298_; 
v___x_3298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3298_, 0, v_val_3297_);
return v___x_3298_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0___boxed(lean_object* v_url_3324_, lean_object* v_inst_3325_, lean_object* v_x_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lasm_Web_fetchJson___redArg___lam__0(v_url_3324_, v_inst_3325_, v_x_3326_);
lean_dec_ref(v_url_3324_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1(lean_object* v_a_3329_, lean_object* v___f_3330_, lean_object* v_____r_3331_){
_start:
{
lean_object* v___x_3333_; uint8_t v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3333_ = lean_unsigned_to_nat(0u);
v___x_3334_ = 0;
v___x_3335_ = l_Lasm_Web_Raw_responseJson(v_a_3329_);
v___x_3336_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3333_, v___x_3334_, v___x_3335_, v___f_3330_);
return v___x_3336_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1___boxed(lean_object* v_a_3337_, lean_object* v___f_3338_, lean_object* v_____r_3339_, lean_object* v___y_3340_){
_start:
{
lean_object* v_res_3341_; 
v_res_3341_ = l_Lasm_Web_fetchJson___redArg___lam__1(v_a_3337_, v___f_3338_, v_____r_3339_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2(lean_object* v___f_3342_, lean_object* v_x_3343_){
_start:
{
if (lean_obj_tag(v_x_3343_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3353_; 
lean_dec_ref(v___f_3342_);
v_a_3345_ = lean_ctor_get(v_x_3343_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v_x_3343_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3347_ = v_x_3343_;
v_isShared_3348_ = v_isSharedCheck_3353_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_a_3345_);
lean_dec(v_x_3343_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3353_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3348_ == 0)
{
v___x_3350_ = v___x_3347_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3345_);
v___x_3350_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3351_; 
v___x_3351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3350_);
return v___x_3351_;
}
}
}
else
{
lean_object* v_a_3354_; lean_object* v___x_3355_; 
v_a_3354_ = lean_ctor_get(v_x_3343_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v_x_3343_, 1);
v___x_3355_ = lean_apply_2(v___f_3342_, v_a_3354_, lean_box(0));
return v___x_3355_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2___boxed(lean_object* v___f_3356_, lean_object* v_x_3357_, lean_object* v___y_3358_){
_start:
{
lean_object* v_res_3359_; 
v_res_3359_ = l_Lasm_Web_fetchJson___redArg___lam__2(v___f_3356_, v_x_3357_);
return v_res_3359_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3(lean_object* v_url_3360_, lean_object* v___f_3361_, lean_object* v___f_3362_, lean_object* v_x_3363_){
_start:
{
if (lean_obj_tag(v_x_3363_) == 0)
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3373_; 
lean_dec_ref(v___f_3362_);
lean_dec_ref(v___f_3361_);
v_a_3365_ = lean_ctor_get(v_x_3363_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v_x_3363_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3367_ = v_x_3363_;
v_isShared_3368_ = v_isSharedCheck_3373_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v_x_3363_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3373_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
lean_object* v___x_3371_; 
v___x_3371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3370_);
return v___x_3371_;
}
}
}
else
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3399_; 
v_a_3374_ = lean_ctor_get(v_x_3363_, 0);
v_isSharedCheck_3399_ = !lean_is_exclusive(v_x_3363_);
if (v_isSharedCheck_3399_ == 0)
{
v___x_3376_ = v_x_3363_;
v_isShared_3377_ = v_isSharedCheck_3399_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v_x_3363_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3399_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
uint8_t v_ok_3378_; 
v_ok_3378_ = lean_ctor_get_uint8(v_a_3374_, sizeof(void*)*5);
if (v_ok_3378_ == 0)
{
lean_object* v_status_3379_; lean_object* v_statusText_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3393_; 
lean_dec_ref(v___f_3362_);
v_status_3379_ = lean_ctor_get(v_a_3374_, 0);
lean_inc(v_status_3379_);
v_statusText_3380_ = lean_ctor_get(v_a_3374_, 1);
lean_inc_ref(v_statusText_3380_);
lean_dec(v_a_3374_);
v___x_3381_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3382_ = lean_string_append(v___x_3381_, v_url_3360_);
v___x_3383_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__1));
v___x_3384_ = lean_string_append(v___x_3382_, v___x_3383_);
v___x_3385_ = l_Nat_reprFast(v_status_3379_);
v___x_3386_ = lean_string_append(v___x_3384_, v___x_3385_);
lean_dec_ref(v___x_3385_);
v___x_3387_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__2));
v___x_3388_ = lean_string_append(v___x_3386_, v___x_3387_);
v___x_3389_ = lean_string_append(v___x_3388_, v_statusText_3380_);
lean_dec_ref(v_statusText_3380_);
v___x_3390_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3389_);
v___x_3391_ = lean_unsigned_to_nat(0u);
if (v_isShared_3377_ == 0)
{
lean_ctor_set_tag(v___x_3376_, 0);
lean_ctor_set(v___x_3376_, 0, v___x_3390_);
v___x_3393_ = v___x_3376_;
goto v_reusejp_3392_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3390_);
v___x_3393_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3392_;
}
v_reusejp_3392_:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; 
v___x_3394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3393_);
v___x_3395_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3391_, v_ok_3378_, v___x_3394_, v___f_3361_);
return v___x_3395_;
}
}
else
{
lean_object* v___x_3397_; lean_object* v___x_3398_; 
lean_del_object(v___x_3376_);
lean_dec(v_a_3374_);
lean_dec_ref(v___f_3361_);
v___x_3397_ = lean_box(0);
v___x_3398_ = lean_apply_2(v___f_3362_, v___x_3397_, lean_box(0));
return v___x_3398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3___boxed(lean_object* v_url_3400_, lean_object* v___f_3401_, lean_object* v___f_3402_, lean_object* v_x_3403_, lean_object* v___y_3404_){
_start:
{
lean_object* v_res_3405_; 
v_res_3405_ = l_Lasm_Web_fetchJson___redArg___lam__3(v_url_3400_, v___f_3401_, v___f_3402_, v_x_3403_);
lean_dec_ref(v_url_3400_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4(lean_object* v___f_3406_, lean_object* v_url_3407_, lean_object* v_x_3408_){
_start:
{
if (lean_obj_tag(v_x_3408_) == 0)
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3418_; 
lean_dec_ref(v_url_3407_);
lean_dec_ref(v___f_3406_);
v_a_3410_ = lean_ctor_get(v_x_3408_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v_x_3408_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3412_ = v_x_3408_;
v_isShared_3413_ = v_isSharedCheck_3418_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v_x_3408_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3418_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
lean_object* v___x_3416_; 
v___x_3416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3416_, 0, v___x_3415_);
return v___x_3416_;
}
}
}
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3441_; 
v_a_3419_ = lean_ctor_get(v_x_3408_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v_x_3408_);
if (v_isSharedCheck_3441_ == 0)
{
v___x_3421_ = v_x_3408_;
v_isShared_3422_ = v_isSharedCheck_3441_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v_x_3408_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3441_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___f_3423_; lean_object* v___f_3424_; lean_object* v___f_3425_; lean_object* v___x_3426_; uint8_t v___x_3427_; lean_object* v_val_3429_; lean_object* v___x_3432_; 
lean_inc(v_a_3419_);
v___f_3423_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3423_, 0, v_a_3419_);
lean_closure_set(v___f_3423_, 1, v___f_3406_);
lean_inc_ref(v___f_3423_);
v___f_3424_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3424_, 0, v___f_3423_);
v___f_3425_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3425_, 0, v_url_3407_);
lean_closure_set(v___f_3425_, 1, v___f_3424_);
lean_closure_set(v___f_3425_, 2, v___f_3423_);
v___x_3426_ = lean_unsigned_to_nat(0u);
v___x_3427_ = 0;
v___x_3432_ = l_Lasm_Web_Raw_responseInfo(v_a_3419_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3433_; lean_object* v___x_3435_; 
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_a_3433_);
lean_dec_ref_known(v___x_3432_, 1);
if (v_isShared_3422_ == 0)
{
lean_ctor_set(v___x_3421_, 0, v_a_3433_);
v___x_3435_ = v___x_3421_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3436_; 
v_reuseFailAlloc_3436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3436_, 0, v_a_3433_);
v___x_3435_ = v_reuseFailAlloc_3436_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
v_val_3429_ = v___x_3435_;
goto v___jp_3428_;
}
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; 
v_a_3437_ = lean_ctor_get(v___x_3432_, 0);
lean_inc(v_a_3437_);
lean_dec_ref_known(v___x_3432_, 1);
if (v_isShared_3422_ == 0)
{
lean_ctor_set_tag(v___x_3421_, 0);
lean_ctor_set(v___x_3421_, 0, v_a_3437_);
v___x_3439_ = v___x_3421_;
goto v_reusejp_3438_;
}
else
{
lean_object* v_reuseFailAlloc_3440_; 
v_reuseFailAlloc_3440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3440_, 0, v_a_3437_);
v___x_3439_ = v_reuseFailAlloc_3440_;
goto v_reusejp_3438_;
}
v_reusejp_3438_:
{
v_val_3429_ = v___x_3439_;
goto v___jp_3428_;
}
}
v___jp_3428_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3430_, 0, v_val_3429_);
v___x_3431_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3426_, v___x_3427_, v___x_3430_, v___f_3425_);
return v___x_3431_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4___boxed(lean_object* v___f_3442_, lean_object* v_url_3443_, lean_object* v_x_3444_, lean_object* v___y_3445_){
_start:
{
lean_object* v_res_3446_; 
v_res_3446_ = l_Lasm_Web_fetchJson___redArg___lam__4(v___f_3442_, v_url_3443_, v_x_3444_);
return v_res_3446_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg(lean_object* v_url_3447_, lean_object* v_init_3448_, lean_object* v_inst_3449_){
_start:
{
lean_object* v___f_3451_; lean_object* v___f_3452_; lean_object* v___x_3453_; uint8_t v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; 
lean_inc_ref_n(v_url_3447_, 2);
v___f_3451_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3451_, 0, v_url_3447_);
lean_closure_set(v___f_3451_, 1, v_inst_3449_);
v___f_3452_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3452_, 0, v___f_3451_);
lean_closure_set(v___f_3452_, 1, v_url_3447_);
v___x_3453_ = lean_unsigned_to_nat(0u);
v___x_3454_ = 0;
v___x_3455_ = l_Lasm_Web_Raw_fetch(v_url_3447_, v_init_3448_);
v___x_3456_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3453_, v___x_3454_, v___x_3455_, v___f_3452_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___boxed(lean_object* v_url_3457_, lean_object* v_init_3458_, lean_object* v_inst_3459_, lean_object* v_a_3460_){
_start:
{
lean_object* v_res_3461_; 
v_res_3461_ = l_Lasm_Web_fetchJson___redArg(v_url_3457_, v_init_3458_, v_inst_3459_);
return v_res_3461_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson(lean_object* v_url_3462_, lean_object* v_init_3463_, lean_object* v_00_u03b1_3464_, lean_object* v_inst_3465_){
_start:
{
lean_object* v___x_3467_; 
v___x_3467_ = l_Lasm_Web_fetchJson___redArg(v_url_3462_, v_init_3463_, v_inst_3465_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___boxed(lean_object* v_url_3468_, lean_object* v_init_3469_, lean_object* v_00_u03b1_3470_, lean_object* v_inst_3471_, lean_object* v_a_3472_){
_start:
{
lean_object* v_res_3473_; 
v_res_3473_ = l_Lasm_Web_fetchJson(v_url_3468_, v_init_3469_, v_00_u03b1_3470_, v_inst_3471_);
return v_res_3473_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create(){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lasm_Web_Raw_abortController();
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create___boxed(lean_object* v_a_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l_Lasm_Web_AbortController_create();
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal(lean_object* v_c_3478_){
_start:
{
lean_object* v___x_3480_; 
v___x_3480_ = l_Lasm_Web_Raw_abortSignal(v_c_3478_);
return v___x_3480_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal___boxed(lean_object* v_c_3481_, lean_object* v_a_3482_){
_start:
{
lean_object* v_res_3483_; 
v_res_3483_ = l_Lasm_Web_AbortController_signal(v_c_3481_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort(lean_object* v_c_3484_, lean_object* v_reason_3485_){
_start:
{
lean_object* v___x_3487_; 
v___x_3487_ = l_Lasm_Web_Raw_abort(v_c_3484_, v_reason_3485_);
return v___x_3487_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort___boxed(lean_object* v_c_3488_, lean_object* v_reason_3489_, lean_object* v_a_3490_){
_start:
{
lean_object* v_res_3491_; 
v_res_3491_ = l_Lasm_Web_AbortController_abort(v_c_3488_, v_reason_3489_);
return v_res_3491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout(lean_object* v_ms_3492_){
_start:
{
double v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = lean_float_of_nat(v_ms_3492_);
v___x_3495_ = l_Lasm_Web_Raw_timeoutSignal(v___x_3494_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout___boxed(lean_object* v_ms_3496_, lean_object* v_a_3497_){
_start:
{
lean_object* v_res_3498_; 
v_res_3498_ = l_Lasm_Web_AbortSignal_timeout(v_ms_3496_);
return v_res_3498_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Lasm_JS_Core(uint8_t builtin);
lean_object* initialize_Lasm_JS_Meta(uint8_t builtin);
lean_object* initialize_Lasm_Web_Types(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lasm_Web_Fetch(uint8_t builtin) {
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
l_Lasm_Web_instInhabitedBody_default = _init_l_Lasm_Web_instInhabitedBody_default();
lean_mark_persistent(l_Lasm_Web_instInhabitedBody_default);
l_Lasm_Web_instInhabitedBody = _init_l_Lasm_Web_instInhabitedBody();
lean_mark_persistent(l_Lasm_Web_instInhabitedBody);
l_Lasm_Web_instFromJSResponseInfo = _init_l_Lasm_Web_instFromJSResponseInfo();
lean_mark_persistent(l_Lasm_Web_instFromJSResponseInfo);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
