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
uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
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
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
extern lean_object* l_Lasm_JS_instFromJSString;
lean_object* l_Lasm_JS_instFromJSProd___redArg(lean_object*, lean_object*);
lean_object* l_Lasm_JS_instFromJSArray___redArg(lean_object*);
extern lean_object* l_Lasm_JS_instFromJSBool;
extern lean_object* l_Lasm_JS_instFromJSNat;
lean_object* l_Lasm_JS_readField___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lasm_js_call(uint32_t, uint32_t, uint64_t, lean_object*, lean_object*);
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_decodeAs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Bool_repr___redArg(uint8_t);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lasm_JS_Value_invokeRaw(lean_object*, lean_object*, lean_object*, uint64_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx___boxed(lean_object*);
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
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " ()"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Init.Data.String.Basic"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "String.fromUTF8!"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8_value;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid UTF-8 string"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__9 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__9_value;
static lean_once_cell_t l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10;
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "a JavaScript value"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11_value;
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
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_Web_Raw_abort___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "abort"};
static const lean_object* l_Lasm_Web_Raw_abort___closed__0 = (const lean_object*)&l_Lasm_Web_Raw_abort___closed__0_value;
static const lean_ctor_object l_Lasm_Web_Raw_abort___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lasm_Web_Raw_abort___closed__0_value),((lean_object*)&l_Lasm_Web_Raw_fetch___closed__1_value),((lean_object*)&l_Lasm_Web_Raw_abort___closed__0_value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lasm_Web_Raw_abort___closed__1 = (const lean_object*)&l_Lasm_Web_Raw_abort___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_header_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_header_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Option (String)"};
static const lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3___closed__0 = (const lean_object*)&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__1(uint8_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__0;
static const lean_string_object l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "method "};
static const lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__1 = (const lean_object*)&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx(lean_object* v_x_1_){
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
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
default: 
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorIdx___boxed(lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lasm_Web_Body_ctorIdx(v_x_8_);
lean_dec(v_x_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim___redArg(lean_object* v_t_10_, lean_object* v_k_11_){
_start:
{
switch(lean_obj_tag(v_t_10_))
{
case 0:
{
return v_k_11_;
}
case 1:
{
lean_object* v_text_12_; lean_object* v___x_13_; 
v_text_12_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_text_12_);
lean_dec_ref_known(v_t_10_, 1);
v___x_13_ = lean_apply_1(v_k_11_, v_text_12_);
return v___x_13_;
}
case 2:
{
lean_object* v_bytes_14_; lean_object* v___x_15_; 
v_bytes_14_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_bytes_14_);
lean_dec_ref_known(v_t_10_, 1);
v___x_15_ = lean_apply_1(v_k_11_, v_bytes_14_);
return v___x_15_;
}
default: 
{
lean_object* v_value_16_; lean_object* v___x_17_; 
v_value_16_ = lean_ctor_get(v_t_10_, 0);
lean_inc(v_value_16_);
lean_dec(v_t_10_);
v___x_17_ = lean_apply_1(v_k_11_, v_value_16_);
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim(lean_object* v_motive_18_, lean_object* v_ctorIdx_19_, lean_object* v_t_20_, lean_object* v_h_21_, lean_object* v_k_22_){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_20_, v_k_22_);
return v___x_23_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_ctorElim___boxed(lean_object* v_motive_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lasm_Web_Body_ctorElim(v_motive_24_, v_ctorIdx_25_, v_t_26_, v_h_27_, v_k_28_);
lean_dec(v_ctorIdx_25_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_none_elim___redArg(lean_object* v_t_30_, lean_object* v_none_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_30_, v_none_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_none_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_none_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_34_, v_none_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_text_elim___redArg(lean_object* v_t_38_, lean_object* v_text_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_38_, v_text_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_text_elim(lean_object* v_motive_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_text_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_42_, v_text_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_bytes_elim___redArg(lean_object* v_t_46_, lean_object* v_bytes_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_46_, v_bytes_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_bytes_elim(lean_object* v_motive_49_, lean_object* v_t_50_, lean_object* v_h_51_, lean_object* v_bytes_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_50_, v_bytes_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_json_elim___redArg(lean_object* v_t_54_, lean_object* v_json_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_54_, v_json_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_json_elim(lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_json_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_58_, v_json_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_form_elim___redArg(lean_object* v_t_62_, lean_object* v_form_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_62_, v_form_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_form_elim(lean_object* v_motive_65_, lean_object* v_t_66_, lean_object* v_h_67_, lean_object* v_form_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_66_, v_form_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_params_elim___redArg(lean_object* v_t_70_, lean_object* v_params_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_70_, v_params_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Body_params_elim(lean_object* v_motive_73_, lean_object* v_t_74_, lean_object* v_h_75_, lean_object* v_params_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l_Lasm_Web_Body_ctorElim___redArg(v_t_74_, v_params_76_);
return v___x_77_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedBody_default(void){
_start:
{
lean_object* v___x_78_; 
v___x_78_ = lean_box(0);
return v___x_78_;
}
}
static lean_object* _init_l_Lasm_Web_instInhabitedBody(void){
_start:
{
lean_object* v___x_79_; 
v___x_79_ = lean_box(0);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_String_mapAux___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__0(lean_object* v_s_92_, lean_object* v_p_93_){
_start:
{
uint32_t v___y_95_; lean_object* v___x_100_; uint8_t v_decide_101_; 
v___x_100_ = lean_string_utf8_byte_size(v_s_92_);
v_decide_101_ = lean_nat_dec_eq(v_p_93_, v___x_100_);
if (v_decide_101_ == 0)
{
uint32_t v___x_102_; uint32_t v___x_103_; uint8_t v___x_104_; 
v___x_102_ = lean_string_utf8_get_fast(v_s_92_, v_p_93_);
v___x_103_ = 65;
v___x_104_ = lean_uint32_dec_le(v___x_103_, v___x_102_);
if (v___x_104_ == 0)
{
v___y_95_ = v___x_102_;
goto v___jp_94_;
}
else
{
uint32_t v___x_105_; uint8_t v___x_106_; 
v___x_105_ = 90;
v___x_106_ = lean_uint32_dec_le(v___x_102_, v___x_105_);
if (v___x_106_ == 0)
{
v___y_95_ = v___x_102_;
goto v___jp_94_;
}
else
{
uint32_t v___x_107_; uint32_t v___x_108_; 
v___x_107_ = 32;
v___x_108_ = lean_uint32_add(v___x_102_, v___x_107_);
v___y_95_ = v___x_108_;
goto v___jp_94_;
}
}
}
else
{
lean_dec(v_p_93_);
return v_s_92_;
}
v___jp_94_:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
lean_inc(v_p_93_);
v___x_96_ = lean_string_utf8_set(v_s_92_, v_p_93_, v___y_95_);
v___x_97_ = l_Char_utf8Size(v___y_95_);
v___x_98_ = lean_nat_add(v_p_93_, v___x_97_);
lean_dec(v___x_97_);
lean_dec(v_p_93_);
v_s_92_ = v___x_96_;
v_p_93_ = v___x_98_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1(lean_object* v_as_110_, size_t v_i_111_, size_t v_stop_112_){
_start:
{
uint8_t v___x_113_; 
v___x_113_ = lean_usize_dec_eq(v_i_111_, v_stop_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; lean_object* v_fst_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_114_ = lean_array_uget_borrowed(v_as_110_, v_i_111_);
v_fst_115_ = lean_ctor_get(v___x_114_, 0);
v___x_116_ = lean_unsigned_to_nat(0u);
lean_inc(v_fst_115_);
v___x_117_ = l_String_mapAux___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__0(v_fst_115_, v___x_116_);
v___x_118_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___closed__0));
v___x_119_ = lean_string_dec_eq(v___x_117_, v___x_118_);
lean_dec_ref(v___x_117_);
if (v___x_119_ == 0)
{
size_t v___x_120_; size_t v___x_121_; 
v___x_120_ = ((size_t)1ULL);
v___x_121_ = lean_usize_add(v_i_111_, v___x_120_);
v_i_111_ = v___x_121_;
goto _start;
}
else
{
return v___x_119_;
}
}
else
{
uint8_t v___x_123_; 
v___x_123_ = 0;
return v___x_123_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1___boxed(lean_object* v_as_124_, lean_object* v_i_125_, lean_object* v_stop_126_){
_start:
{
size_t v_i_boxed_127_; size_t v_stop_boxed_128_; uint8_t v_res_129_; lean_object* v_r_130_; 
v_i_boxed_127_ = lean_unbox_usize(v_i_125_);
lean_dec(v_i_125_);
v_stop_boxed_128_ = lean_unbox_usize(v_stop_126_);
lean_dec(v_stop_126_);
v_res_129_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1(v_as_124_, v_i_boxed_127_, v_stop_boxed_128_);
lean_dec_ref(v_as_124_);
v_r_130_ = lean_box(v_res_129_);
return v_r_130_;
}
}
LEAN_EXPORT uint8_t l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(lean_object* v_headers_131_){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; uint8_t v___x_134_; 
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = lean_array_get_size(v_headers_131_);
v___x_134_ = lean_nat_dec_lt(v___x_132_, v___x_133_);
if (v___x_134_ == 0)
{
return v___x_134_;
}
else
{
if (v___x_134_ == 0)
{
return v___x_134_;
}
else
{
size_t v___x_135_; size_t v___x_136_; uint8_t v___x_137_; 
v___x_135_ = ((size_t)0ULL);
v___x_136_ = lean_usize_of_nat(v___x_133_);
v___x_137_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType_spec__1(v_headers_131_, v___x_135_, v___x_136_);
return v___x_137_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType___boxed(lean_object* v_headers_138_){
_start:
{
uint8_t v_res_139_; lean_object* v_r_140_; 
v_res_139_ = l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(v_headers_138_);
lean_dec_ref(v_headers_138_);
v_r_140_ = lean_box(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__0(lean_object* v_x_141_){
_start:
{
lean_object* v_fst_142_; lean_object* v_snd_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v_fst_142_ = lean_ctor_get(v_x_141_, 0);
v_snd_143_ = lean_ctor_get(v_x_141_, 1);
lean_inc(v_fst_142_);
v___x_144_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_144_, 0, v_fst_142_);
lean_inc(v_snd_143_);
v___x_145_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_145_, 0, v_snd_143_);
v___x_146_ = lean_unsigned_to_nat(2u);
v___x_147_ = lean_mk_empty_array_with_capacity(v___x_146_);
v___x_148_ = lean_array_push(v___x_147_, v___x_144_);
v___x_149_ = lean_array_push(v___x_148_, v___x_145_);
v___x_150_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_150_, 0, v___x_149_);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__0___boxed(lean_object* v_x_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lasm_Web_instToJSRequestInit___lam__0(v_x_151_);
lean_dec_ref(v_x_151_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instToJSRequestInit___lam__1(lean_object* v___f_185_, lean_object* v_r_186_){
_start:
{
lean_object* v___y_188_; lean_object* v___y_189_; lean_object* v_method_192_; lean_object* v_headers_193_; lean_object* v_body_194_; lean_object* v_credentials_195_; lean_object* v_mode_196_; lean_object* v_cache_197_; lean_object* v_redirect_198_; lean_object* v_signal_199_; lean_object* v___y_201_; lean_object* v___y_202_; lean_object* v___y_240_; 
v_method_192_ = lean_ctor_get(v_r_186_, 0);
lean_inc_ref(v_method_192_);
v_headers_193_ = lean_ctor_get(v_r_186_, 1);
lean_inc_ref(v_headers_193_);
v_body_194_ = lean_ctor_get(v_r_186_, 2);
lean_inc(v_body_194_);
v_credentials_195_ = lean_ctor_get(v_r_186_, 3);
lean_inc_ref(v_credentials_195_);
v_mode_196_ = lean_ctor_get(v_r_186_, 4);
lean_inc_ref(v_mode_196_);
v_cache_197_ = lean_ctor_get(v_r_186_, 5);
lean_inc_ref(v_cache_197_);
v_redirect_198_ = lean_ctor_get(v_r_186_, 6);
lean_inc_ref(v_redirect_198_);
v_signal_199_ = lean_ctor_get(v_r_186_, 7);
lean_inc(v_signal_199_);
lean_dec_ref(v_r_186_);
if (lean_obj_tag(v_body_194_) == 3)
{
uint8_t v___x_278_; 
v___x_278_ = l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(v_headers_193_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_279_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__20));
v___x_280_ = lean_array_push(v_headers_193_, v___x_279_);
v___y_240_ = v___x_280_;
goto v___jp_239_;
}
else
{
v___y_240_ = v_headers_193_;
goto v___jp_239_;
}
}
else
{
v___y_240_ = v_headers_193_;
goto v___jp_239_;
}
v___jp_187_:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = l_List_appendTR___redArg(v___y_188_, v___y_189_);
v___x_191_ = l_Lasm_JS_obj(v___x_190_);
return v___x_191_;
}
v___jp_200_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; size_t v_sz_208_; size_t v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_203_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__0));
v___x_204_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_204_, 0, v_method_192_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_203_);
lean_ctor_set(v___x_205_, 1, v___x_204_);
v___x_206_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v___x_207_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__11));
v_sz_208_ = lean_array_size(v___y_201_);
v___x_209_ = ((size_t)0ULL);
v___x_210_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___redArg(v___x_207_, v___f_185_, v_sz_208_, v___x_209_, v___y_201_);
v___x_211_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_211_, 0, v___x_210_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v___x_206_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__12));
v___x_214_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_214_, 0, v_credentials_195_);
v___x_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_215_, 0, v___x_213_);
lean_ctor_set(v___x_215_, 1, v___x_214_);
v___x_216_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__13));
v___x_217_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_217_, 0, v_mode_196_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_216_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
v___x_219_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__14));
v___x_220_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_220_, 0, v_cache_197_);
v___x_221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_221_, 0, v___x_219_);
lean_ctor_set(v___x_221_, 1, v___x_220_);
v___x_222_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__15));
v___x_223_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_223_, 0, v_redirect_198_);
v___x_224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_224_, 0, v___x_222_);
lean_ctor_set(v___x_224_, 1, v___x_223_);
v___x_225_ = lean_box(0);
v___x_226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_226_, 0, v___x_224_);
lean_ctor_set(v___x_226_, 1, v___x_225_);
v___x_227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_221_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_228_, 0, v___x_218_);
lean_ctor_set(v___x_228_, 1, v___x_227_);
v___x_229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_215_);
lean_ctor_set(v___x_229_, 1, v___x_228_);
v___x_230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_230_, 0, v___x_212_);
lean_ctor_set(v___x_230_, 1, v___x_229_);
v___x_231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_231_, 0, v___x_205_);
lean_ctor_set(v___x_231_, 1, v___x_230_);
v___x_232_ = l_List_appendTR___redArg(v___x_231_, v___y_202_);
if (lean_obj_tag(v_signal_199_) == 0)
{
v___y_188_ = v___x_232_;
v___y_189_ = v___x_225_;
goto v___jp_187_;
}
else
{
lean_object* v_val_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v_val_233_ = lean_ctor_get(v_signal_199_, 0);
lean_inc(v_val_233_);
lean_dec_ref_known(v_signal_199_, 1);
v___x_234_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__16));
v___x_235_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_236_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_236_, 0, v_val_233_);
lean_ctor_set(v___x_236_, 1, v___x_235_);
v___x_237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_237_, 0, v___x_234_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v___x_225_);
v___y_188_ = v___x_232_;
v___y_189_ = v___x_238_;
goto v___jp_187_;
}
}
v___jp_239_:
{
switch(lean_obj_tag(v_body_194_))
{
case 0:
{
lean_object* v___x_241_; 
v___x_241_ = lean_box(0);
v___y_201_ = v___y_240_;
v___y_202_ = v___x_241_;
goto v___jp_200_;
}
case 1:
{
lean_object* v_text_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_253_; 
v_text_242_ = lean_ctor_get(v_body_194_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v_body_194_);
if (v_isSharedCheck_253_ == 0)
{
v___x_244_ = v_body_194_;
v_isShared_245_ = v_isSharedCheck_253_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_text_242_);
lean_dec(v_body_194_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_253_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_245_ == 0)
{
lean_ctor_set_tag(v___x_244_, 4);
v___x_248_ = v___x_244_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v_text_242_);
v___x_248_ = v_reuseFailAlloc_252_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_249_, 0, v___x_246_);
lean_ctor_set(v___x_249_, 1, v___x_248_);
v___x_250_ = lean_box(0);
v___x_251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_249_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___y_201_ = v___y_240_;
v___y_202_ = v___x_251_;
goto v___jp_200_;
}
}
}
case 2:
{
lean_object* v_bytes_254_; lean_object* v___x_256_; uint8_t v_isShared_257_; uint8_t v_isSharedCheck_265_; 
v_bytes_254_ = lean_ctor_get(v_body_194_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v_body_194_);
if (v_isSharedCheck_265_ == 0)
{
v___x_256_ = v_body_194_;
v_isShared_257_ = v_isSharedCheck_265_;
goto v_resetjp_255_;
}
else
{
lean_inc(v_bytes_254_);
lean_dec(v_body_194_);
v___x_256_ = lean_box(0);
v_isShared_257_ = v_isSharedCheck_265_;
goto v_resetjp_255_;
}
v_resetjp_255_:
{
lean_object* v___x_258_; lean_object* v___x_260_; 
v___x_258_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_257_ == 0)
{
lean_ctor_set_tag(v___x_256_, 6);
v___x_260_ = v___x_256_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_bytes_254_);
v___x_260_ = v_reuseFailAlloc_264_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_258_);
lean_ctor_set(v___x_261_, 1, v___x_260_);
v___x_262_ = lean_box(0);
v___x_263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_263_, 0, v___x_261_);
lean_ctor_set(v___x_263_, 1, v___x_262_);
v___y_201_ = v___y_240_;
v___y_202_ = v___x_263_;
goto v___jp_200_;
}
}
}
case 3:
{
lean_object* v_value_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_value_266_ = lean_ctor_get(v_body_194_, 0);
lean_inc(v_value_266_);
lean_dec_ref_known(v_body_194_, 1);
v___x_267_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__18));
v___x_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_268_, 0, v___x_267_);
lean_ctor_set(v___x_268_, 1, v_value_266_);
v___x_269_ = lean_box(0);
v___x_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_268_);
lean_ctor_set(v___x_270_, 1, v___x_269_);
v___y_201_ = v___y_240_;
v___y_202_ = v___x_270_;
goto v___jp_200_;
}
default: 
{
lean_object* v_data_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_data_271_ = lean_ctor_get(v_body_194_, 0);
lean_inc(v_data_271_);
lean_dec(v_body_194_);
v___x_272_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
v___x_273_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_274_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_274_, 0, v_data_271_);
lean_ctor_set(v___x_274_, 1, v___x_273_);
v___x_275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_275_, 0, v___x_272_);
lean_ctor_set(v___x_275_, 1, v___x_274_);
v___x_276_ = lean_box(0);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_275_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
v___y_201_ = v___y_240_;
v___y_202_ = v___x_277_;
goto v___jp_200_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0(lean_object* v___x_291_, lean_object* v___x_292_, lean_object* v___x_293_, lean_object* v___x_294_, lean_object* v_d_295_){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
v___x_297_ = l_Lasm_JS_readField___redArg(v___x_291_, v_d_295_, v___x_296_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_305_; 
lean_dec_ref(v___x_294_);
lean_dec_ref(v___x_293_);
lean_dec_ref(v___x_292_);
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_305_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_305_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
else
{
lean_object* v_a_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v_a_306_ = lean_ctor_get(v___x_297_, 0);
lean_inc(v_a_306_);
lean_dec_ref_known(v___x_297_, 1);
v___x_307_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1));
lean_inc_ref(v___x_292_);
v___x_308_ = l_Lasm_JS_readField___redArg(v___x_292_, v_d_295_, v___x_307_);
if (lean_obj_tag(v___x_308_) == 0)
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_316_; 
lean_dec(v_a_306_);
lean_dec_ref(v___x_294_);
lean_dec_ref(v___x_293_);
lean_dec_ref(v___x_292_);
v_a_309_ = lean_ctor_get(v___x_308_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_308_);
if (v_isSharedCheck_316_ == 0)
{
v___x_311_ = v___x_308_;
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v___x_308_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_316_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_315_; 
v_reuseFailAlloc_315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_315_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_315_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
return v___x_314_;
}
}
}
else
{
lean_object* v_a_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v_a_317_ = lean_ctor_get(v___x_308_, 0);
lean_inc(v_a_317_);
lean_dec_ref_known(v___x_308_, 1);
v___x_318_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
lean_inc_ref(v___x_293_);
v___x_319_ = l_Lasm_JS_readField___redArg(v___x_293_, v_d_295_, v___x_318_);
if (lean_obj_tag(v___x_319_) == 0)
{
lean_object* v_a_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_327_; 
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec_ref(v___x_294_);
lean_dec_ref(v___x_293_);
lean_dec_ref(v___x_292_);
v_a_320_ = lean_ctor_get(v___x_319_, 0);
v_isSharedCheck_327_ = !lean_is_exclusive(v___x_319_);
if (v_isSharedCheck_327_ == 0)
{
v___x_322_ = v___x_319_;
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_a_320_);
lean_dec(v___x_319_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_327_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v_a_320_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
else
{
lean_object* v_a_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v_a_328_ = lean_ctor_get(v___x_319_, 0);
lean_inc(v_a_328_);
lean_dec_ref_known(v___x_319_, 1);
v___x_329_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3));
lean_inc_ref(v___x_292_);
v___x_330_ = l_Lasm_JS_readField___redArg(v___x_292_, v_d_295_, v___x_329_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_338_; 
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec_ref(v___x_294_);
lean_dec_ref(v___x_293_);
lean_dec_ref(v___x_292_);
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_338_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_338_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_a_331_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
else
{
lean_object* v_a_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v_a_339_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_a_339_);
lean_dec_ref_known(v___x_330_, 1);
v___x_340_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4));
v___x_341_ = l_Lasm_JS_readField___redArg(v___x_293_, v_d_295_, v___x_340_);
if (lean_obj_tag(v___x_341_) == 0)
{
lean_object* v_a_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_349_; 
lean_dec(v_a_339_);
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec_ref(v___x_294_);
lean_dec_ref(v___x_292_);
v_a_342_ = lean_ctor_get(v___x_341_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_349_ == 0)
{
v___x_344_ = v___x_341_;
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_a_342_);
lean_dec(v___x_341_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_349_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___x_347_; 
if (v_isShared_345_ == 0)
{
v___x_347_ = v___x_344_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v_a_342_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
return v___x_347_;
}
}
}
else
{
lean_object* v_a_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_a_350_ = lean_ctor_get(v___x_341_, 0);
lean_inc(v_a_350_);
lean_dec_ref_known(v___x_341_, 1);
v___x_351_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5));
v___x_352_ = l_Lasm_JS_readField___redArg(v___x_292_, v_d_295_, v___x_351_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec(v_a_350_);
lean_dec(v_a_339_);
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
lean_dec_ref(v___x_294_);
v_a_353_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_352_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_352_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
else
{
lean_object* v_a_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v_a_361_ = lean_ctor_get(v___x_352_, 0);
lean_inc(v_a_361_);
lean_dec_ref_known(v___x_352_, 1);
v___x_362_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v___x_363_ = l_Lasm_JS_readField___redArg(v___x_294_, v_d_295_, v___x_362_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_a_361_);
lean_dec(v_a_350_);
lean_dec(v_a_339_);
lean_dec(v_a_328_);
lean_dec(v_a_317_);
lean_dec(v_a_306_);
v_a_364_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_363_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_363_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_382_; 
v_a_372_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_382_ == 0)
{
v___x_374_ = v___x_363_;
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_363_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_382_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; uint8_t v___x_377_; uint8_t v___x_378_; lean_object* v___x_380_; 
v___x_376_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_376_, 0, v_a_306_);
lean_ctor_set(v___x_376_, 1, v_a_317_);
lean_ctor_set(v___x_376_, 2, v_a_339_);
lean_ctor_set(v___x_376_, 3, v_a_361_);
lean_ctor_set(v___x_376_, 4, v_a_372_);
v___x_377_ = lean_unbox(v_a_328_);
lean_dec(v_a_328_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*5, v___x_377_);
v___x_378_ = lean_unbox(v_a_350_);
lean_dec(v_a_350_);
lean_ctor_set_uint8(v___x_376_, sizeof(void*)*5 + 1, v___x_378_);
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_376_);
v___x_380_ = v___x_374_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_376_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
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
LEAN_EXPORT lean_object* l_Lasm_Web_instFromJSResponseInfo___lam__0___boxed(lean_object* v___x_383_, lean_object* v___x_384_, lean_object* v___x_385_, lean_object* v___x_386_, lean_object* v_d_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lasm_Web_instFromJSResponseInfo___lam__0(v___x_383_, v___x_384_, v___x_385_, v___x_386_, v_d_387_);
lean_dec(v_d_387_);
return v_res_388_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__0(void){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_389_ = l_Lasm_JS_instFromJSString;
v___x_390_ = l_Lasm_JS_instFromJSProd___redArg(v___x_389_, v___x_389_);
return v___x_390_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__1(void){
_start:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_391_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__0, &l_Lasm_Web_instFromJSResponseInfo___closed__0_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__0);
v___x_392_ = l_Lasm_JS_instFromJSArray___redArg(v___x_391_);
return v___x_392_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__2(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___f_397_; 
v___x_393_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__1, &l_Lasm_Web_instFromJSResponseInfo___closed__1_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__1);
v___x_394_ = l_Lasm_JS_instFromJSBool;
v___x_395_ = l_Lasm_JS_instFromJSString;
v___x_396_ = l_Lasm_JS_instFromJSNat;
v___f_397_ = lean_alloc_closure((void*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___boxed), 5, 4);
lean_closure_set(v___f_397_, 0, v___x_396_);
lean_closure_set(v___f_397_, 1, v___x_395_);
lean_closure_set(v___f_397_, 2, v___x_394_);
lean_closure_set(v___f_397_, 3, v___x_393_);
return v___f_397_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo___closed__4(void){
_start:
{
uint8_t v___x_399_; lean_object* v___x_400_; lean_object* v___f_401_; lean_object* v___x_402_; 
v___x_399_ = 0;
v___x_400_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___closed__3));
v___f_401_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__2, &l_Lasm_Web_instFromJSResponseInfo___closed__2_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__2);
v___x_402_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_402_, 0, v___f_401_);
lean_ctor_set(v___x_402_, 1, v___x_400_);
lean_ctor_set_uint8(v___x_402_, sizeof(void*)*2, v___x_399_);
return v___x_402_;
}
}
static lean_object* _init_l_Lasm_Web_instFromJSResponseInfo(void){
_start:
{
lean_object* v___x_403_; 
v___x_403_ = lean_obj_once(&l_Lasm_Web_instFromJSResponseInfo___closed__4, &l_Lasm_Web_instFromJSResponseInfo___closed__4_once, _init_l_Lasm_Web_instFromJSResponseInfo___closed__4);
return v___x_403_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_421_; lean_object* v___x_422_; 
v___x_421_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__0));
v___x_422_ = lean_string_length(v___x_421_);
return v___x_422_;
}
}
static lean_object* _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5, &l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5_once, _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__5);
v___x_424_ = lean_nat_to_int(v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(lean_object* v_x_429_){
_start:
{
lean_object* v_fst_430_; lean_object* v_snd_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_455_; 
v_fst_430_ = lean_ctor_get(v_x_429_, 0);
v_snd_431_ = lean_ctor_get(v_x_429_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_429_);
if (v_isSharedCheck_455_ == 0)
{
v___x_433_ = v_x_429_;
v_isShared_434_ = v_isSharedCheck_455_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_snd_431_);
lean_inc(v_fst_430_);
lean_dec(v_x_429_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_455_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
v___x_435_ = l_String_quote(v_fst_430_);
v___x_436_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
v___x_437_ = lean_box(0);
if (v_isShared_434_ == 0)
{
lean_ctor_set_tag(v___x_433_, 1);
lean_ctor_set(v___x_433_, 1, v___x_437_);
lean_ctor_set(v___x_433_, 0, v___x_436_);
v___x_439_ = v___x_433_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v___x_437_);
v___x_439_ = v_reuseFailAlloc_454_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; uint8_t v___x_452_; lean_object* v___x_453_; 
v___x_440_ = l_String_quote(v_snd_431_);
v___x_441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
v___x_442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v___x_439_);
v___x_443_ = l_List_reverse___redArg(v___x_442_);
v___x_444_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__3));
v___x_445_ = l_Std_Format_joinSep___at___00Prod_repr___at___00List_repr___at___00Lean_Meta_instReprSimpCongrTheorems_repr_spec__1_spec__2_spec__7(v___x_443_, v___x_444_);
v___x_446_ = lean_obj_once(&l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6, &l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6_once, _init_l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__6);
v___x_447_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__7));
v___x_448_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_448_, 0, v___x_447_);
lean_ctor_set(v___x_448_, 1, v___x_445_);
v___x_449_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__8));
v___x_450_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_448_);
lean_ctor_set(v___x_450_, 1, v___x_449_);
v___x_451_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_451_, 0, v___x_446_);
lean_ctor_set(v___x_451_, 1, v___x_450_);
v___x_452_ = 0;
v___x_453_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_453_, 0, v___x_451_);
lean_ctor_set_uint8(v___x_453_, sizeof(void*)*1, v___x_452_);
return v___x_453_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2_spec__3(lean_object* v_x_456_, lean_object* v_x_457_, lean_object* v_x_458_){
_start:
{
if (lean_obj_tag(v_x_458_) == 0)
{
lean_dec(v_x_456_);
return v_x_457_;
}
else
{
lean_object* v_head_459_; lean_object* v_tail_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_470_; 
v_head_459_ = lean_ctor_get(v_x_458_, 0);
v_tail_460_ = lean_ctor_get(v_x_458_, 1);
v_isSharedCheck_470_ = !lean_is_exclusive(v_x_458_);
if (v_isSharedCheck_470_ == 0)
{
v___x_462_ = v_x_458_;
v_isShared_463_ = v_isSharedCheck_470_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_tail_460_);
lean_inc(v_head_459_);
lean_dec(v_x_458_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_470_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
lean_inc(v_x_456_);
if (v_isShared_463_ == 0)
{
lean_ctor_set_tag(v___x_462_, 5);
lean_ctor_set(v___x_462_, 1, v_x_456_);
lean_ctor_set(v___x_462_, 0, v_x_457_);
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v_x_457_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_x_456_);
v___x_465_ = v_reuseFailAlloc_469_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_459_);
v___x_467_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_465_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v_x_457_ = v___x_467_;
v_x_458_ = v_tail_460_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2(lean_object* v_x_471_, lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
if (lean_obj_tag(v_x_473_) == 0)
{
lean_dec(v_x_471_);
return v_x_472_;
}
else
{
lean_object* v_head_474_; lean_object* v_tail_475_; lean_object* v___x_477_; uint8_t v_isShared_478_; uint8_t v_isSharedCheck_485_; 
v_head_474_ = lean_ctor_get(v_x_473_, 0);
v_tail_475_ = lean_ctor_get(v_x_473_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v_x_473_);
if (v_isSharedCheck_485_ == 0)
{
v___x_477_ = v_x_473_;
v_isShared_478_ = v_isSharedCheck_485_;
goto v_resetjp_476_;
}
else
{
lean_inc(v_tail_475_);
lean_inc(v_head_474_);
lean_dec(v_x_473_);
v___x_477_ = lean_box(0);
v_isShared_478_ = v_isSharedCheck_485_;
goto v_resetjp_476_;
}
v_resetjp_476_:
{
lean_object* v___x_480_; 
lean_inc(v_x_471_);
if (v_isShared_478_ == 0)
{
lean_ctor_set_tag(v___x_477_, 5);
lean_ctor_set(v___x_477_, 1, v_x_471_);
lean_ctor_set(v___x_477_, 0, v_x_472_);
v___x_480_ = v___x_477_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_484_; 
v_reuseFailAlloc_484_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_484_, 0, v_x_472_);
lean_ctor_set(v_reuseFailAlloc_484_, 1, v_x_471_);
v___x_480_ = v_reuseFailAlloc_484_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_474_);
v___x_482_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_482_, 0, v___x_480_);
lean_ctor_set(v___x_482_, 1, v___x_481_);
v___x_483_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2_spec__3(v_x_471_, v___x_482_, v_tail_475_);
return v___x_483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1(lean_object* v_x_486_, lean_object* v_x_487_){
_start:
{
if (lean_obj_tag(v_x_486_) == 0)
{
lean_object* v___x_488_; 
lean_dec(v_x_487_);
v___x_488_ = lean_box(0);
return v___x_488_;
}
else
{
lean_object* v_tail_489_; 
v_tail_489_ = lean_ctor_get(v_x_486_, 1);
if (lean_obj_tag(v_tail_489_) == 0)
{
lean_object* v_head_490_; lean_object* v___x_491_; 
lean_dec(v_x_487_);
v_head_490_ = lean_ctor_get(v_x_486_, 0);
lean_inc(v_head_490_);
lean_dec_ref_known(v_x_486_, 2);
v___x_491_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_490_);
return v___x_491_;
}
else
{
lean_object* v_head_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
lean_inc(v_tail_489_);
v_head_492_ = lean_ctor_get(v_x_486_, 0);
lean_inc(v_head_492_);
lean_dec_ref_known(v_x_486_, 2);
v___x_493_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_head_492_);
v___x_494_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1_spec__2(v_x_487_, v___x_493_, v_tail_489_);
return v___x_494_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; 
v___x_497_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__0));
v___x_498_ = lean_string_length(v___x_497_);
return v___x_498_;
}
}
static lean_object* _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_499_ = lean_obj_once(&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2, &l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2_once, _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__2);
v___x_500_ = lean_nat_to_int(v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0(lean_object* v_xs_508_){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_509_ = lean_array_get_size(v_xs_508_);
v___x_510_ = lean_unsigned_to_nat(0u);
v___x_511_ = lean_nat_dec_eq(v___x_509_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_512_ = lean_array_to_list(v_xs_508_);
v___x_513_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__3));
v___x_514_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__1(v___x_512_, v___x_513_);
v___x_515_ = lean_obj_once(&l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3, &l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3_once, _init_l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__3);
v___x_516_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__4));
v___x_517_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___x_514_);
v___x_518_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__5));
v___x_519_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_519_, 0, v___x_517_);
lean_ctor_set(v___x_519_, 1, v___x_518_);
v___x_520_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_515_);
lean_ctor_set(v___x_520_, 1, v___x_519_);
v___x_521_ = l_Std_Format_fill(v___x_520_);
return v___x_521_;
}
else
{
lean_object* v___x_522_; 
lean_dec_ref(v_xs_508_);
v___x_522_ = ((lean_object*)(l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0___closed__7));
return v___x_522_;
}
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_unsigned_to_nat(10u);
v___x_536_ = lean_nat_to_int(v___x_535_);
return v___x_536_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = lean_unsigned_to_nat(14u);
v___x_540_ = lean_nat_to_int(v___x_539_);
return v___x_540_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_unsigned_to_nat(6u);
v___x_544_ = lean_nat_to_int(v___x_543_);
return v___x_544_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_unsigned_to_nat(7u);
v___x_548_ = lean_nat_to_int(v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_unsigned_to_nat(8u);
v___x_554_ = lean_nat_to_int(v___x_553_);
return v___x_554_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_557_ = lean_unsigned_to_nat(11u);
v___x_558_ = lean_nat_to_int(v___x_557_);
return v___x_558_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19(void){
_start:
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__0));
v___x_561_ = lean_string_length(v___x_560_);
return v___x_561_;
}
}
static lean_object* _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; 
v___x_562_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__19);
v___x_563_ = lean_nat_to_int(v___x_562_);
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr___redArg(lean_object* v_x_568_){
_start:
{
lean_object* v_status_569_; lean_object* v_statusText_570_; uint8_t v_ok_571_; lean_object* v_url_572_; uint8_t v_redirected_573_; lean_object* v_type_574_; lean_object* v_headers_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v_status_569_ = lean_ctor_get(v_x_568_, 0);
lean_inc(v_status_569_);
v_statusText_570_ = lean_ctor_get(v_x_568_, 1);
lean_inc_ref(v_statusText_570_);
v_ok_571_ = lean_ctor_get_uint8(v_x_568_, sizeof(void*)*5);
v_url_572_ = lean_ctor_get(v_x_568_, 2);
lean_inc_ref(v_url_572_);
v_redirected_573_ = lean_ctor_get_uint8(v_x_568_, sizeof(void*)*5 + 1);
v_type_574_ = lean_ctor_get(v_x_568_, 3);
lean_inc_ref(v_type_574_);
v_headers_575_ = lean_ctor_get(v_x_568_, 4);
lean_inc_ref(v_headers_575_);
lean_dec_ref(v_x_568_);
v___x_576_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__4));
v___x_577_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__5));
v___x_578_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__6);
v___x_579_ = l_Nat_reprFast(v_status_569_);
v___x_580_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
v___x_581_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_578_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = 0;
v___x_583_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_583_, 0, v___x_581_);
lean_ctor_set_uint8(v___x_583_, sizeof(void*)*1, v___x_582_);
v___x_584_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_584_, 0, v___x_577_);
lean_ctor_set(v___x_584_, 1, v___x_583_);
v___x_585_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__2));
v___x_586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_586_, 0, v___x_584_);
lean_ctor_set(v___x_586_, 1, v___x_585_);
v___x_587_ = lean_box(1);
v___x_588_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_588_, 0, v___x_586_);
lean_ctor_set(v___x_588_, 1, v___x_587_);
v___x_589_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__7));
v___x_590_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_590_, 0, v___x_588_);
lean_ctor_set(v___x_590_, 1, v___x_589_);
v___x_591_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_591_, 0, v___x_590_);
lean_ctor_set(v___x_591_, 1, v___x_576_);
v___x_592_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__8);
v___x_593_ = l_String_quote(v_statusText_570_);
v___x_594_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
v___x_595_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_595_, 0, v___x_592_);
lean_ctor_set(v___x_595_, 1, v___x_594_);
v___x_596_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set_uint8(v___x_596_, sizeof(void*)*1, v___x_582_);
v___x_597_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_591_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
lean_ctor_set(v___x_598_, 1, v___x_585_);
v___x_599_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_599_, 0, v___x_598_);
lean_ctor_set(v___x_599_, 1, v___x_587_);
v___x_600_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__9));
v___x_601_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_601_, 0, v___x_599_);
lean_ctor_set(v___x_601_, 1, v___x_600_);
v___x_602_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_602_, 0, v___x_601_);
lean_ctor_set(v___x_602_, 1, v___x_576_);
v___x_603_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__10);
v___x_604_ = l_Bool_repr___redArg(v_ok_571_);
v___x_605_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_605_, 0, v___x_603_);
lean_ctor_set(v___x_605_, 1, v___x_604_);
v___x_606_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_606_, 0, v___x_605_);
lean_ctor_set_uint8(v___x_606_, sizeof(void*)*1, v___x_582_);
v___x_607_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_607_, 0, v___x_602_);
lean_ctor_set(v___x_607_, 1, v___x_606_);
v___x_608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_608_, 0, v___x_607_);
lean_ctor_set(v___x_608_, 1, v___x_585_);
v___x_609_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_608_);
lean_ctor_set(v___x_609_, 1, v___x_587_);
v___x_610_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__11));
v___x_611_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_611_, 0, v___x_609_);
lean_ctor_set(v___x_611_, 1, v___x_610_);
v___x_612_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_612_, 0, v___x_611_);
lean_ctor_set(v___x_612_, 1, v___x_576_);
v___x_613_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__12);
v___x_614_ = l_String_quote(v_url_572_);
v___x_615_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_615_, 0, v___x_614_);
v___x_616_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_616_, 0, v___x_613_);
lean_ctor_set(v___x_616_, 1, v___x_615_);
v___x_617_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_617_, 0, v___x_616_);
lean_ctor_set_uint8(v___x_617_, sizeof(void*)*1, v___x_582_);
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_612_);
lean_ctor_set(v___x_618_, 1, v___x_617_);
v___x_619_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___x_585_);
v___x_620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_619_);
lean_ctor_set(v___x_620_, 1, v___x_587_);
v___x_621_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__13));
v___x_622_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_622_, 0, v___x_620_);
lean_ctor_set(v___x_622_, 1, v___x_621_);
v___x_623_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
lean_ctor_set(v___x_623_, 1, v___x_576_);
v___x_624_ = l_Bool_repr___redArg(v_redirected_573_);
v___x_625_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_625_, 0, v___x_592_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v___x_626_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_626_, 0, v___x_625_);
lean_ctor_set_uint8(v___x_626_, sizeof(void*)*1, v___x_582_);
v___x_627_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_627_, 0, v___x_623_);
lean_ctor_set(v___x_627_, 1, v___x_626_);
v___x_628_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_628_, 0, v___x_627_);
lean_ctor_set(v___x_628_, 1, v___x_585_);
v___x_629_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_629_, 0, v___x_628_);
lean_ctor_set(v___x_629_, 1, v___x_587_);
v___x_630_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__14));
v___x_631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_632_, 0, v___x_631_);
lean_ctor_set(v___x_632_, 1, v___x_576_);
v___x_633_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__15);
v___x_634_ = l_String_quote(v_type_574_);
v___x_635_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_635_, 0, v___x_634_);
v___x_636_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_633_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_637_, 0, v___x_636_);
lean_ctor_set_uint8(v___x_637_, sizeof(void*)*1, v___x_582_);
v___x_638_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_638_, 0, v___x_632_);
lean_ctor_set(v___x_638_, 1, v___x_637_);
v___x_639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
lean_ctor_set(v___x_639_, 1, v___x_585_);
v___x_640_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___x_587_);
v___x_641_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__16));
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_640_);
lean_ctor_set(v___x_642_, 1, v___x_641_);
v___x_643_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_642_);
lean_ctor_set(v___x_643_, 1, v___x_576_);
v___x_644_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__17);
v___x_645_ = l_Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0(v_headers_575_);
v___x_646_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_646_, 0, v___x_644_);
lean_ctor_set(v___x_646_, 1, v___x_645_);
v___x_647_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set_uint8(v___x_647_, sizeof(void*)*1, v___x_582_);
v___x_648_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_643_);
lean_ctor_set(v___x_648_, 1, v___x_647_);
v___x_649_ = lean_obj_once(&l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20, &l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20_once, _init_l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__20);
v___x_650_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__21));
v___x_651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v___x_648_);
v___x_652_ = ((lean_object*)(l_Lasm_Web_instReprResponseInfo_repr___redArg___closed__22));
v___x_653_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
v___x_654_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_654_, 0, v___x_649_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set_uint8(v___x_655_, sizeof(void*)*1, v___x_582_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr(lean_object* v_x_656_, lean_object* v_prec_657_){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = l_Lasm_Web_instReprResponseInfo_repr___redArg(v_x_656_);
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_instReprResponseInfo_repr___boxed(lean_object* v_x_659_, lean_object* v_prec_660_){
_start:
{
lean_object* v_res_661_; 
v_res_661_ = l_Lasm_Web_instReprResponseInfo_repr(v_x_659_, v_prec_660_);
lean_dec(v_prec_660_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0(lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg(v_x_662_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___boxed(lean_object* v_x_665_, lean_object* v_x_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0(v_x_665_, v_x_666_);
lean_dec(v_x_666_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(lean_object* v_a_670_, lean_object* v_x_671_){
_start:
{
if (lean_obj_tag(v_x_671_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_681_; 
v_a_673_ = lean_ctor_get(v_x_671_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v_x_671_);
if (v_isSharedCheck_681_ == 0)
{
v___x_675_ = v_x_671_;
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_a_673_);
lean_dec(v_x_671_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_681_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v___x_678_; 
if (v_isShared_676_ == 0)
{
v___x_678_ = v___x_675_;
goto v_reusejp_677_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_673_);
v___x_678_ = v_reuseFailAlloc_680_;
goto v_reusejp_677_;
}
v_reusejp_677_:
{
lean_object* v___x_679_; 
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
}
else
{
lean_object* v___x_682_; 
lean_dec_ref_known(v_x_671_, 1);
v___x_682_ = l___private_Lasm_JS_Core_0__Lasm_JS_awaitBytes(v_a_670_);
return v___x_682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed(lean_object* v_a_683_, lean_object* v_x_684_, lean_object* v___y_685_){
_start:
{
lean_object* v_res_686_; 
v_res_686_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5(v_a_683_, v_x_684_);
lean_dec(v_a_683_);
return v_res_686_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(lean_object* v_payload_687_, lean_object* v_failurePrefix_688_, lean_object* v___f_689_, lean_object* v___f_690_, uint32_t v_op_691_, uint64_t v_flags_692_, lean_object* v___f_693_, lean_object* v_x_694_){
_start:
{
if (lean_obj_tag(v_x_694_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_704_; 
lean_dec_ref(v___f_693_);
lean_dec_ref(v___f_690_);
lean_dec_ref(v___f_689_);
v_a_696_ = lean_ctor_get(v_x_694_, 0);
v_isSharedCheck_704_ = !lean_is_exclusive(v_x_694_);
if (v_isSharedCheck_704_ == 0)
{
v___x_698_ = v_x_694_;
v_isShared_699_ = v_isSharedCheck_704_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v_x_694_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_704_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_703_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_702_, 0, v___x_701_);
return v___x_702_;
}
}
}
else
{
lean_object* v_a_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_746_; 
v_a_705_ = lean_ctor_get(v_x_694_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v_x_694_);
if (v_isSharedCheck_746_ == 0)
{
v___x_707_ = v_x_694_;
v_isShared_708_ = v_isSharedCheck_746_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_a_705_);
lean_dec(v_x_694_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_746_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
uint32_t v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_709_ = 0;
v___x_710_ = l_Lasm_JS_Wire_encode(v_payload_687_);
v___x_711_ = lean_string_utf8_byte_size(v_failurePrefix_688_);
v___x_712_ = lean_unsigned_to_nat(0u);
v___x_713_ = lean_nat_dec_eq(v___x_711_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___f_714_; lean_object* v_val_716_; lean_object* v___x_721_; 
lean_dec_ref(v___f_693_);
lean_inc(v_a_705_);
v___f_714_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_714_, 0, v_a_705_);
v___x_721_ = lasm_js_call_into(v_a_705_, v_op_691_, v___x_709_, v_flags_692_, v___x_710_, v_payload_687_);
lean_dec_ref(v___x_710_);
lean_dec(v_a_705_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; lean_object* v___x_724_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_721_, 1);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v_a_722_);
v___x_724_ = v___x_707_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_722_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
v_val_716_ = v___x_724_;
goto v___jp_715_;
}
}
else
{
lean_object* v_a_726_; lean_object* v___x_728_; 
v_a_726_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_726_);
lean_dec_ref_known(v___x_721_, 1);
if (v_isShared_708_ == 0)
{
lean_ctor_set_tag(v___x_707_, 0);
lean_ctor_set(v___x_707_, 0, v_a_726_);
v___x_728_ = v___x_707_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_726_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
v_val_716_ = v___x_728_;
goto v___jp_715_;
}
}
v___jp_715_:
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v_val_716_);
v___x_718_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_712_, v___x_713_, v___x_717_, v___f_714_);
v___x_719_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_712_, v___x_713_, v___x_718_, v___f_689_);
v___x_720_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_712_, v___x_713_, v___x_719_, v___f_690_);
return v___x_720_;
}
}
else
{
lean_object* v___f_730_; uint8_t v___x_731_; lean_object* v_val_733_; lean_object* v___x_737_; 
lean_dec_ref(v___f_690_);
lean_dec_ref(v___f_689_);
lean_inc(v_a_705_);
v___f_730_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_730_, 0, v_a_705_);
v___x_731_ = 0;
v___x_737_ = lasm_js_call_into(v_a_705_, v_op_691_, v___x_709_, v_flags_692_, v___x_710_, v_payload_687_);
lean_dec_ref(v___x_710_);
lean_dec(v_a_705_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; lean_object* v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 0, v_a_738_);
v___x_740_ = v___x_707_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_738_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
v_val_733_ = v___x_740_;
goto v___jp_732_;
}
}
else
{
lean_object* v_a_742_; lean_object* v___x_744_; 
v_a_742_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_742_);
lean_dec_ref_known(v___x_737_, 1);
if (v_isShared_708_ == 0)
{
lean_ctor_set_tag(v___x_707_, 0);
lean_ctor_set(v___x_707_, 0, v_a_742_);
v___x_744_ = v___x_707_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
v_val_733_ = v___x_744_;
goto v___jp_732_;
}
}
v___jp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v_val_733_);
v___x_735_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_712_, v___x_731_, v___x_734_, v___f_730_);
v___x_736_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_712_, v___x_731_, v___x_735_, v___f_693_);
return v___x_736_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed(lean_object* v_payload_747_, lean_object* v_failurePrefix_748_, lean_object* v___f_749_, lean_object* v___f_750_, lean_object* v_op_751_, lean_object* v_flags_752_, lean_object* v___f_753_, lean_object* v_x_754_, lean_object* v___y_755_){
_start:
{
uint32_t v_op_boxed_756_; uint64_t v_flags_boxed_757_; lean_object* v_res_758_; 
v_op_boxed_756_ = lean_unbox_uint32(v_op_751_);
lean_dec(v_op_751_);
v_flags_boxed_757_ = lean_unbox_uint64(v_flags_752_);
lean_dec_ref(v_flags_752_);
v_res_758_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6(v_payload_747_, v_failurePrefix_748_, v___f_749_, v___f_750_, v_op_boxed_756_, v_flags_boxed_757_, v___f_753_, v_x_754_);
lean_dec_ref(v_failurePrefix_748_);
lean_dec(v_payload_747_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(lean_object* v___f_759_, lean_object* v_bytes_760_){
_start:
{
lean_object* v___x_762_; uint8_t v___x_763_; lean_object* v_val_765_; lean_object* v___x_768_; 
v___x_762_ = lean_unsigned_to_nat(0u);
v___x_763_ = 0;
v___x_768_ = l_Lasm_JS_Wire_decode(v_bytes_760_);
if (lean_obj_tag(v___x_768_) == 0)
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
v_a_769_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_768_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
lean_ctor_set_tag(v___x_771_, 1);
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
v_val_765_ = v___x_774_;
goto v___jp_764_;
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
v_a_777_ = lean_ctor_get(v___x_768_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_768_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_768_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_768_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
lean_ctor_set_tag(v___x_779_, 0);
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
v_val_765_ = v___x_782_;
goto v___jp_764_;
}
}
}
v___jp_764_:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v_val_765_);
v___x_767_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_762_, v___x_763_, v___x_766_, v___f_759_);
return v___x_767_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed(lean_object* v___f_785_, lean_object* v_bytes_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2(v___f_785_, v_bytes_786_);
lean_dec_ref(v_bytes_786_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(lean_object* v_failurePrefix_789_, lean_object* v_x_790_){
_start:
{
if (lean_obj_tag(v_x_790_) == 0)
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_803_; 
v_a_792_ = lean_ctor_get(v_x_790_, 0);
v_isSharedCheck_803_ = !lean_is_exclusive(v_x_790_);
if (v_isSharedCheck_803_ == 0)
{
v___x_794_ = v_x_790_;
v_isShared_795_ = v_isSharedCheck_803_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v_x_790_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_803_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_796_ = lean_io_error_to_string(v_a_792_);
v___x_797_ = lean_string_append(v_failurePrefix_789_, v___x_796_);
lean_dec_ref(v___x_796_);
v___x_798_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_798_, 0, v___x_797_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_798_);
v___x_800_ = v___x_794_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_798_);
v___x_800_ = v_reuseFailAlloc_802_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
lean_object* v___x_801_; 
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
return v___x_801_;
}
}
}
else
{
lean_object* v___x_804_; 
lean_dec_ref(v_failurePrefix_789_);
v___x_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_804_, 0, v_x_790_);
return v___x_804_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed(lean_object* v_failurePrefix_805_, lean_object* v_x_806_, lean_object* v___y_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0(v_failurePrefix_805_, v_x_806_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(lean_object* v___f_809_, lean_object* v_x_810_){
_start:
{
if (lean_obj_tag(v_x_810_) == 0)
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_820_; 
lean_dec_ref(v___f_809_);
v_a_812_ = lean_ctor_get(v_x_810_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v_x_810_);
if (v_isSharedCheck_820_ == 0)
{
v___x_814_ = v_x_810_;
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v_x_810_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_819_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
lean_object* v___x_818_; 
v___x_818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
return v___x_818_;
}
}
}
else
{
lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_832_; 
v_isSharedCheck_832_ = !lean_is_exclusive(v_x_810_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; 
v_unused_833_ = lean_ctor_get(v_x_810_, 0);
lean_dec(v_unused_833_);
v___x_822_ = v_x_810_;
v_isShared_823_ = v_isSharedCheck_832_;
goto v_resetjp_821_;
}
else
{
lean_dec(v_x_810_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_832_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; uint8_t v___x_825_; lean_object* v___x_826_; lean_object* v___x_828_; 
v___x_824_ = lean_unsigned_to_nat(0u);
v___x_825_ = 0;
v___x_826_ = lean_io_promise_new();
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_826_);
v___x_828_ = v___x_822_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v___x_826_);
v___x_828_ = v_reuseFailAlloc_831_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
v___x_830_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_824_, v___x_825_, v___x_829_, v___f_809_);
return v___x_830_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed(lean_object* v___f_834_, lean_object* v_x_835_, lean_object* v___y_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4(v___f_834_, v_x_835_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(lean_object* v___f_838_, lean_object* v_x_839_){
_start:
{
if (lean_obj_tag(v_x_839_) == 0)
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_849_; 
lean_dec_ref(v___f_838_);
v_a_841_ = lean_ctor_get(v_x_839_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v_x_839_);
if (v_isSharedCheck_849_ == 0)
{
v___x_843_ = v_x_839_;
v_isShared_844_ = v_isSharedCheck_849_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v_x_839_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_849_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_848_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
lean_object* v___x_847_; 
v___x_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
return v___x_847_;
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_851_; 
v_a_850_ = lean_ctor_get(v_x_839_, 0);
lean_inc(v_a_850_);
lean_dec_ref_known(v_x_839_, 1);
v___x_851_ = lean_apply_2(v___f_838_, v_a_850_, lean_box(0));
return v___x_851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed(lean_object* v___f_852_, lean_object* v_x_853_, lean_object* v___y_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3(v___f_852_, v_x_853_);
return v_res_855_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4(void){
_start:
{
lean_object* v___x_860_; lean_object* v___x_861_; 
v___x_860_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_861_ = lean_string_utf8_byte_size(v___x_860_);
return v___x_861_;
}
}
static uint8_t _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v___x_862_ = lean_unsigned_to_nat(0u);
v___x_863_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__4);
v___x_864_ = lean_nat_dec_eq(v___x_863_, v___x_862_);
return v___x_864_;
}
}
static lean_object* _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
v___x_869_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__9));
v___x_870_ = lean_unsigned_to_nat(46u);
v___x_871_ = lean_unsigned_to_nat(193u);
v___x_872_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__8));
v___x_873_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__7));
v___x_874_ = l_mkPanicMessageWithDecl(v___x_873_, v___x_872_, v___x_871_, v___x_870_, v___x_869_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(lean_object* v_context_876_, lean_object* v_d_877_){
_start:
{
lean_object* v___y_880_; lean_object* v___y_881_; 
if (lean_obj_tag(v_d_877_) == 9)
{
lean_object* v_value_885_; lean_object* v___x_886_; 
v_value_885_ = lean_ctor_get(v_d_877_, 0);
lean_inc(v_value_885_);
lean_dec_ref_known(v_d_877_, 2);
v___x_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_886_, 0, v_value_885_);
return v___x_886_;
}
else
{
lean_object* v___x_887_; lean_object* v_received_889_; 
v___x_887_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_877_) == 9)
{
lean_object* v_value_903_; lean_object* v_description_904_; uint8_t v___x_905_; 
v_value_903_ = lean_ctor_get(v_d_877_, 0);
v_description_904_ = lean_ctor_get(v_d_877_, 1);
v___x_905_ = lean_string_dec_eq(v_description_904_, v___x_887_);
if (v___x_905_ == 0)
{
goto v___jp_901_;
}
else
{
uint32_t v___x_906_; uint64_t v___x_907_; lean_object* v___x_908_; uint32_t v___x_909_; lean_object* v___x_910_; 
lean_inc_n(v_value_903_, 2);
lean_dec_ref_known(v_d_877_, 2);
v___x_906_ = 206;
v___x_907_ = 0ULL;
v___x_908_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_908_, 0, v_value_903_);
lean_ctor_set(v___x_908_, 1, v___x_887_);
v___x_909_ = lasm_js_value_handle(v_value_903_);
lean_dec(v_value_903_);
v___x_910_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_906_, v___x_907_, v___x_908_, v___x_909_);
lean_dec_ref_known(v___x_908_, 2);
if (lean_obj_tag(v___x_910_) == 0)
{
lean_object* v_a_911_; uint8_t v___x_912_; 
v_a_911_ = lean_ctor_get(v___x_910_, 0);
lean_inc(v_a_911_);
lean_dec_ref_known(v___x_910_, 1);
v___x_912_ = lean_string_validate_utf8(v_a_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; lean_object* v___x_914_; 
lean_dec(v_a_911_);
v___x_913_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_914_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_913_);
v_received_889_ = v___x_914_;
goto v___jp_888_;
}
else
{
lean_object* v___x_915_; 
v___x_915_ = lean_string_from_utf8_unchecked(v_a_911_);
v_received_889_ = v___x_915_;
goto v___jp_888_;
}
}
else
{
lean_object* v___x_916_; 
lean_dec_ref_known(v___x_910_, 1);
v___x_916_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_889_ = v___x_916_;
goto v___jp_888_;
}
}
}
else
{
goto v___jp_901_;
}
v___jp_888_:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_890_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_891_ = lean_string_append(v___x_890_, v_context_876_);
v___x_892_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_893_ = lean_string_append(v___x_891_, v___x_892_);
v___x_894_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__2));
v___x_895_ = lean_string_append(v___x_893_, v___x_894_);
v___x_896_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_897_ = lean_string_append(v___x_895_, v___x_896_);
v___x_898_ = lean_string_append(v___x_897_, v_received_889_);
lean_dec_ref(v_received_889_);
v___x_899_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; 
v___x_900_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_880_ = v___x_898_;
v___y_881_ = v___x_900_;
goto v___jp_879_;
}
else
{
v___y_880_ = v___x_898_;
v___y_881_ = v___x_887_;
goto v___jp_879_;
}
}
v___jp_901_:
{
lean_object* v___x_902_; 
v___x_902_ = l_Lasm_JS_Data_describe(v_d_877_);
v_received_889_ = v___x_902_;
goto v___jp_888_;
}
}
v___jp_879_:
{
lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_882_ = lean_string_append(v___y_880_, v___y_881_);
v___x_883_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_883_, 0, v___x_882_);
v___x_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
return v___x_884_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___boxed(lean_object* v_context_917_, lean_object* v_d_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(v_context_917_, v_d_918_);
lean_dec_ref(v_context_917_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1(lean_object* v_context_921_, lean_object* v_x_922_){
_start:
{
lean_object* v_val_925_; 
if (lean_obj_tag(v_x_922_) == 0)
{
lean_object* v_a_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_935_; 
v_a_927_ = lean_ctor_get(v_x_922_, 0);
v_isSharedCheck_935_ = !lean_is_exclusive(v_x_922_);
if (v_isSharedCheck_935_ == 0)
{
v___x_929_ = v_x_922_;
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_a_927_);
lean_dec(v_x_922_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_935_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v___x_932_; 
if (v_isShared_930_ == 0)
{
v___x_932_ = v___x_929_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_927_);
v___x_932_ = v_reuseFailAlloc_934_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
lean_object* v___x_933_; 
v___x_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_933_, 0, v___x_932_);
return v___x_933_;
}
}
}
else
{
lean_object* v_a_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_949_; 
v_a_936_ = lean_ctor_get(v_x_922_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v_x_922_);
if (v_isSharedCheck_949_ == 0)
{
v___x_938_ = v_x_922_;
v_isShared_939_ = v_isSharedCheck_949_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_a_936_);
lean_dec(v_x_922_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_949_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v___x_940_; 
v___x_940_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2(v_context_921_, v_a_936_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; lean_object* v___x_943_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
if (v_isShared_939_ == 0)
{
lean_ctor_set(v___x_938_, 0, v_a_941_);
v___x_943_ = v___x_938_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
v_val_925_ = v___x_943_;
goto v___jp_924_;
}
}
else
{
lean_object* v_a_945_; lean_object* v___x_947_; 
v_a_945_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_940_, 1);
if (v_isShared_939_ == 0)
{
lean_ctor_set_tag(v___x_938_, 0);
lean_ctor_set(v___x_938_, 0, v_a_945_);
v___x_947_ = v___x_938_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
v_val_925_ = v___x_947_;
goto v___jp_924_;
}
}
}
}
v___jp_924_:
{
lean_object* v___x_926_; 
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v_val_925_);
return v___x_926_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1___boxed(lean_object* v_context_950_, lean_object* v_x_951_, lean_object* v___y_952_){
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1(v_context_950_, v_x_951_);
lean_dec_ref(v_context_950_);
return v_res_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(lean_object* v_context_954_, uint32_t v_op_955_, uint64_t v_flags_956_, lean_object* v_payload_957_, lean_object* v_failurePrefix_958_){
_start:
{
lean_object* v___f_960_; lean_object* v___f_961_; lean_object* v___f_962_; lean_object* v___f_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___f_966_; lean_object* v___f_967_; lean_object* v___x_968_; uint8_t v___x_969_; lean_object* v_val_971_; lean_object* v___x_974_; 
lean_inc_ref(v_failurePrefix_958_);
v___f_960_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_960_, 0, v_failurePrefix_958_);
v___f_961_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__1___boxed), 3, 1);
lean_closure_set(v___f_961_, 0, v_context_954_);
v___f_962_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__2___boxed), 3, 1);
lean_closure_set(v___f_962_, 0, v___f_961_);
v___f_963_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__3___boxed), 3, 1);
lean_closure_set(v___f_963_, 0, v___f_962_);
v___x_964_ = lean_box_uint32(v_op_955_);
v___x_965_ = lean_box_uint64(v_flags_956_);
lean_inc_ref(v___f_963_);
v___f_966_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__6___boxed), 9, 7);
lean_closure_set(v___f_966_, 0, v_payload_957_);
lean_closure_set(v___f_966_, 1, v_failurePrefix_958_);
lean_closure_set(v___f_966_, 2, v___f_960_);
lean_closure_set(v___f_966_, 3, v___f_963_);
lean_closure_set(v___f_966_, 4, v___x_964_);
lean_closure_set(v___f_966_, 5, v___x_965_);
lean_closure_set(v___f_966_, 6, v___f_963_);
v___f_967_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__4___boxed), 3, 1);
lean_closure_set(v___f_967_, 0, v___f_966_);
v___x_968_ = lean_unsigned_to_nat(0u);
v___x_969_ = 0;
v___x_974_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_974_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_974_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
lean_ctor_set_tag(v___x_977_, 1);
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
v_val_971_ = v___x_980_;
goto v___jp_970_;
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
v_a_983_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_974_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_974_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
lean_ctor_set_tag(v___x_985_, 0);
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
v_val_971_ = v___x_988_;
goto v___jp_970_;
}
}
}
v___jp_970_:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_972_, 0, v_val_971_);
v___x_973_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_968_, v___x_969_, v___x_972_, v___f_967_);
return v___x_973_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___boxed(lean_object* v_context_991_, lean_object* v_op_992_, lean_object* v_flags_993_, lean_object* v_payload_994_, lean_object* v_failurePrefix_995_, lean_object* v_a_996_){
_start:
{
uint32_t v_op_boxed_997_; uint64_t v_flags_boxed_998_; lean_object* v_res_999_; 
v_op_boxed_997_ = lean_unbox_uint32(v_op_992_);
lean_dec(v_op_992_);
v_flags_boxed_998_ = lean_unbox_uint64(v_flags_993_);
lean_dec_ref(v_flags_993_);
v_res_999_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(v_context_991_, v_op_boxed_997_, v_flags_boxed_998_, v_payload_994_, v_failurePrefix_995_);
return v_res_999_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0(void){
_start:
{
uint8_t v___x_1000_; uint64_t v___x_1001_; 
v___x_1000_ = 1;
v___x_1001_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1000_);
return v___x_1001_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(lean_object* v_b_1003_, lean_object* v_args_1004_){
_start:
{
uint8_t v_construct_1006_; lean_object* v___x_1007_; uint32_t v___x_1008_; uint64_t v___x_1009_; uint64_t v___y_1011_; 
v_construct_1006_ = lean_ctor_get_uint8(v_b_1003_, sizeof(void*)*4);
v___x_1007_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1003_);
v___x_1008_ = 214;
v___x_1009_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_construct_1006_ == 0)
{
uint64_t v___x_1019_; 
v___x_1019_ = 0ULL;
v___y_1011_ = v___x_1019_;
goto v___jp_1010_;
}
else
{
uint64_t v___x_1020_; 
v___x_1020_ = 4ULL;
v___y_1011_ = v___x_1020_;
goto v___jp_1010_;
}
v___jp_1010_:
{
uint64_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v___x_1012_ = lean_uint64_lor(v___x_1009_, v___y_1011_);
v___x_1013_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1003_, v_args_1004_);
v___x_1014_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1015_ = lean_string_append(v___x_1014_, v___x_1007_);
v___x_1016_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1017_ = lean_string_append(v___x_1015_, v___x_1016_);
v___x_1018_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1(v___x_1007_, v___x_1008_, v___x_1012_, v___x_1013_, v___x_1017_);
return v___x_1018_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___boxed(lean_object* v_b_1021_, lean_object* v_args_1022_, lean_object* v_a_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(v_b_1021_, v_args_1022_);
lean_dec_ref(v_b_1021_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(size_t v_sz_1025_, size_t v_i_1026_, lean_object* v_bs_1027_){
_start:
{
uint8_t v___x_1028_; 
v___x_1028_ = lean_usize_dec_lt(v_i_1026_, v_sz_1025_);
if (v___x_1028_ == 0)
{
return v_bs_1027_;
}
else
{
lean_object* v_v_1029_; lean_object* v_fst_1030_; lean_object* v_snd_1031_; lean_object* v___x_1032_; lean_object* v_bs_x27_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; size_t v___x_1041_; size_t v___x_1042_; lean_object* v___x_1043_; 
v_v_1029_ = lean_array_uget_borrowed(v_bs_1027_, v_i_1026_);
v_fst_1030_ = lean_ctor_get(v_v_1029_, 0);
lean_inc(v_fst_1030_);
v_snd_1031_ = lean_ctor_get(v_v_1029_, 1);
lean_inc(v_snd_1031_);
v___x_1032_ = lean_unsigned_to_nat(0u);
v_bs_x27_1033_ = lean_array_uset(v_bs_1027_, v_i_1026_, v___x_1032_);
v___x_1034_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1034_, 0, v_fst_1030_);
v___x_1035_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1035_, 0, v_snd_1031_);
v___x_1036_ = lean_unsigned_to_nat(2u);
v___x_1037_ = lean_mk_empty_array_with_capacity(v___x_1036_);
v___x_1038_ = lean_array_push(v___x_1037_, v___x_1034_);
v___x_1039_ = lean_array_push(v___x_1038_, v___x_1035_);
v___x_1040_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1040_, 0, v___x_1039_);
v___x_1041_ = ((size_t)1ULL);
v___x_1042_ = lean_usize_add(v_i_1026_, v___x_1041_);
v___x_1043_ = lean_array_uset(v_bs_x27_1033_, v_i_1026_, v___x_1040_);
v_i_1026_ = v___x_1042_;
v_bs_1027_ = v___x_1043_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0___boxed(lean_object* v_sz_1045_, lean_object* v_i_1046_, lean_object* v_bs_1047_){
_start:
{
size_t v_sz_boxed_1048_; size_t v_i_boxed_1049_; lean_object* v_res_1050_; 
v_sz_boxed_1048_ = lean_unbox_usize(v_sz_1045_);
lean_dec(v_sz_1045_);
v_i_boxed_1049_ = lean_unbox_usize(v_i_1046_);
lean_dec(v_i_1046_);
v_res_1050_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(v_sz_boxed_1048_, v_i_boxed_1049_, v_bs_1047_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch(lean_object* v_a_1060_, lean_object* v_a_1061_){
_start:
{
lean_object* v___x_1063_; lean_object* v_method_1064_; lean_object* v_headers_1065_; lean_object* v_body_1066_; lean_object* v_credentials_1067_; lean_object* v_mode_1068_; lean_object* v_cache_1069_; lean_object* v_redirect_1070_; lean_object* v_signal_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___y_1076_; lean_object* v___y_1077_; lean_object* v___y_1083_; lean_object* v___y_1084_; lean_object* v___y_1121_; 
v___x_1063_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__2));
v_method_1064_ = lean_ctor_get(v_a_1061_, 0);
lean_inc_ref(v_method_1064_);
v_headers_1065_ = lean_ctor_get(v_a_1061_, 1);
lean_inc_ref(v_headers_1065_);
v_body_1066_ = lean_ctor_get(v_a_1061_, 2);
lean_inc(v_body_1066_);
v_credentials_1067_ = lean_ctor_get(v_a_1061_, 3);
lean_inc_ref(v_credentials_1067_);
v_mode_1068_ = lean_ctor_get(v_a_1061_, 4);
lean_inc_ref(v_mode_1068_);
v_cache_1069_ = lean_ctor_get(v_a_1061_, 5);
lean_inc_ref(v_cache_1069_);
v_redirect_1070_ = lean_ctor_get(v_a_1061_, 6);
lean_inc_ref(v_redirect_1070_);
v_signal_1071_ = lean_ctor_get(v_a_1061_, 7);
lean_inc(v_signal_1071_);
lean_dec_ref(v_a_1061_);
v___x_1072_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1073_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1073_, 0, v_a_1060_);
v___x_1074_ = lean_array_push(v___x_1072_, v___x_1073_);
if (lean_obj_tag(v_body_1066_) == 3)
{
uint8_t v___x_1159_; 
v___x_1159_ = l___private_Lasm_Web_Fetch_0__Lasm_Web_hasContentType(v_headers_1065_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; lean_object* v___x_1161_; 
v___x_1160_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__20));
v___x_1161_ = lean_array_push(v_headers_1065_, v___x_1160_);
v___y_1121_ = v___x_1161_;
goto v___jp_1120_;
}
else
{
v___y_1121_ = v_headers_1065_;
goto v___jp_1120_;
}
}
else
{
v___y_1121_ = v_headers_1065_;
goto v___jp_1120_;
}
v___jp_1075_:
{
lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1078_ = l_List_appendTR___redArg(v___y_1076_, v___y_1077_);
v___x_1079_ = l_Lasm_JS_obj(v___x_1078_);
v___x_1080_ = lean_array_push(v___x_1074_, v___x_1079_);
v___x_1081_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1(v___x_1063_, v___x_1080_);
return v___x_1081_;
}
v___jp_1082_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; size_t v_sz_1089_; size_t v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1085_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__0));
v___x_1086_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_method_1064_);
v___x_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1087_, 0, v___x_1085_);
lean_ctor_set(v___x_1087_, 1, v___x_1086_);
v___x_1088_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v_sz_1089_ = lean_array_size(v___y_1083_);
v___x_1090_ = ((size_t)0ULL);
v___x_1091_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_Web_Raw_fetch_spec__0(v_sz_1089_, v___x_1090_, v___y_1083_);
v___x_1092_ = lean_alloc_ctor(7, 1, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1088_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
v___x_1094_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__12));
v___x_1095_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1095_, 0, v_credentials_1067_);
v___x_1096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1094_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__13));
v___x_1098_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1098_, 0, v_mode_1068_);
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v___x_1098_);
v___x_1100_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__14));
v___x_1101_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_cache_1069_);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1100_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__15));
v___x_1104_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1104_, 0, v_redirect_1070_);
v___x_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1105_, 0, v___x_1103_);
lean_ctor_set(v___x_1105_, 1, v___x_1104_);
v___x_1106_ = lean_box(0);
v___x_1107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v___x_1106_);
v___x_1108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1102_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1099_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
v___x_1110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1096_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1093_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1087_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
v___x_1113_ = l_List_appendTR___redArg(v___x_1112_, v___y_1084_);
if (lean_obj_tag(v_signal_1071_) == 0)
{
v___y_1076_ = v___x_1113_;
v___y_1077_ = v___x_1106_;
goto v___jp_1075_;
}
else
{
lean_object* v_val_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
v_val_1114_ = lean_ctor_get(v_signal_1071_, 0);
lean_inc(v_val_1114_);
lean_dec_ref_known(v_signal_1071_, 1);
v___x_1115_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__16));
v___x_1116_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1117_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1117_, 0, v_val_1114_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
v___x_1118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1118_, 0, v___x_1115_);
lean_ctor_set(v___x_1118_, 1, v___x_1117_);
v___x_1119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1119_, 0, v___x_1118_);
lean_ctor_set(v___x_1119_, 1, v___x_1106_);
v___y_1076_ = v___x_1113_;
v___y_1077_ = v___x_1119_;
goto v___jp_1075_;
}
}
v___jp_1120_:
{
switch(lean_obj_tag(v_body_1066_))
{
case 0:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_box(0);
v___y_1083_ = v___y_1121_;
v___y_1084_ = v___x_1122_;
goto v___jp_1082_;
}
case 1:
{
lean_object* v_text_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1134_; 
v_text_1123_ = lean_ctor_get(v_body_1066_, 0);
v_isSharedCheck_1134_ = !lean_is_exclusive(v_body_1066_);
if (v_isSharedCheck_1134_ == 0)
{
v___x_1125_ = v_body_1066_;
v_isShared_1126_ = v_isSharedCheck_1134_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_text_1123_);
lean_dec(v_body_1066_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1134_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1127_; lean_object* v___x_1129_; 
v___x_1127_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_1126_ == 0)
{
lean_ctor_set_tag(v___x_1125_, 4);
v___x_1129_ = v___x_1125_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v_text_1123_);
v___x_1129_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1127_);
lean_ctor_set(v___x_1130_, 1, v___x_1129_);
v___x_1131_ = lean_box(0);
v___x_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1130_);
lean_ctor_set(v___x_1132_, 1, v___x_1131_);
v___y_1083_ = v___y_1121_;
v___y_1084_ = v___x_1132_;
goto v___jp_1082_;
}
}
}
case 2:
{
lean_object* v_bytes_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1146_; 
v_bytes_1135_ = lean_ctor_get(v_body_1066_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_body_1066_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1137_ = v_body_1066_;
v_isShared_1138_ = v_isSharedCheck_1146_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_bytes_1135_);
lean_dec(v_body_1066_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1146_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1139_; lean_object* v___x_1141_; 
v___x_1139_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
if (v_isShared_1138_ == 0)
{
lean_ctor_set_tag(v___x_1137_, 6);
v___x_1141_ = v___x_1137_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_bytes_1135_);
v___x_1141_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1142_, 0, v___x_1139_);
lean_ctor_set(v___x_1142_, 1, v___x_1141_);
v___x_1143_ = lean_box(0);
v___x_1144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1142_);
lean_ctor_set(v___x_1144_, 1, v___x_1143_);
v___y_1083_ = v___y_1121_;
v___y_1084_ = v___x_1144_;
goto v___jp_1082_;
}
}
}
case 3:
{
lean_object* v_value_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v_value_1147_ = lean_ctor_get(v_body_1066_, 0);
lean_inc(v_value_1147_);
lean_dec_ref_known(v_body_1066_, 1);
v___x_1148_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__18));
v___x_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v_value_1147_);
v___x_1150_ = lean_box(0);
v___x_1151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1151_, 0, v___x_1149_);
lean_ctor_set(v___x_1151_, 1, v___x_1150_);
v___y_1083_ = v___y_1121_;
v___y_1084_ = v___x_1151_;
goto v___jp_1082_;
}
default: 
{
lean_object* v_data_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v_data_1152_ = lean_ctor_get(v_body_1066_, 0);
lean_inc(v_data_1152_);
lean_dec(v_body_1066_);
v___x_1153_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__17));
v___x_1154_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1155_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1155_, 0, v_data_1152_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1153_);
lean_ctor_set(v___x_1156_, 1, v___x_1155_);
v___x_1157_ = lean_box(0);
v___x_1158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1158_, 0, v___x_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___y_1083_ = v___y_1121_;
v___y_1084_ = v___x_1158_;
goto v___jp_1082_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_fetch___boxed(lean_object* v_a_1162_, lean_object* v_a_1163_, lean_object* v_a_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l_Lasm_Web_Raw_fetch(v_a_1162_, v_a_1163_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(lean_object* v_d_1173_, lean_object* v_key_1174_){
_start:
{
if (lean_obj_tag(v_d_1173_) == 8)
{
lean_object* v___x_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1203_; 
v___x_1175_ = l_Lasm_JS_Data_field(v_d_1173_, v_key_1174_);
v_isSharedCheck_1203_ = !lean_is_exclusive(v_d_1173_);
if (v_isSharedCheck_1203_ == 0)
{
lean_object* v_unused_1204_; 
v_unused_1204_ = lean_ctor_get(v_d_1173_, 0);
lean_dec(v_unused_1204_);
v___x_1177_ = v_d_1173_;
v_isShared_1178_ = v_isSharedCheck_1203_;
goto v_resetjp_1176_;
}
else
{
lean_dec(v_d_1173_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1203_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
if (lean_obj_tag(v___x_1175_) == 2)
{
uint8_t v_b_1179_; lean_object* v___x_1180_; lean_object* v___x_1182_; 
v_b_1179_ = lean_ctor_get_uint8(v___x_1175_, 0);
lean_dec_ref_known(v___x_1175_, 0);
v___x_1180_ = lean_box(v_b_1179_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set_tag(v___x_1177_, 1);
lean_ctor_set(v___x_1177_, 0, v___x_1180_);
v___x_1182_ = v___x_1177_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1180_);
v___x_1182_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
return v___x_1182_;
}
}
else
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; uint8_t v___x_1194_; 
v___x_1184_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1185_ = lean_string_append(v___x_1184_, v_key_1174_);
v___x_1186_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1187_ = lean_string_append(v___x_1185_, v___x_1186_);
v___x_1188_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2));
v___x_1189_ = lean_string_append(v___x_1187_, v___x_1188_);
v___x_1190_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1191_ = lean_string_append(v___x_1189_, v___x_1190_);
v___x_1192_ = l_Lasm_JS_Data_describe(v___x_1175_);
v___x_1193_ = lean_string_append(v___x_1191_, v___x_1192_);
lean_dec_ref(v___x_1192_);
v___x_1194_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1195_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___x_1196_ = lean_string_append(v___x_1193_, v___x_1195_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set_tag(v___x_1177_, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1196_);
v___x_1198_ = v___x_1177_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
else
{
lean_object* v___x_1201_; 
if (v_isShared_1178_ == 0)
{
lean_ctor_set_tag(v___x_1177_, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1193_);
v___x_1201_ = v___x_1177_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v___x_1193_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
}
else
{
lean_object* v___x_1205_; 
lean_dec(v_d_1173_);
v___x_1205_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__5));
return v___x_1205_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___boxed(lean_object* v_d_1206_, lean_object* v_key_1207_){
_start:
{
lean_object* v_res_1208_; 
v_res_1208_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1206_, v_key_1207_);
lean_dec_ref(v_key_1207_);
return v_res_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(size_t v_sz_1214_, size_t v_i_1215_, lean_object* v_bs_1216_){
_start:
{
uint8_t v___x_1219_; 
v___x_1219_ = lean_usize_dec_lt(v_i_1215_, v_sz_1214_);
if (v___x_1219_ == 0)
{
lean_object* v___x_1220_; 
v___x_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1220_, 0, v_bs_1216_);
return v___x_1220_;
}
else
{
lean_object* v_v_1221_; 
v_v_1221_ = lean_array_uget_borrowed(v_bs_1216_, v_i_1215_);
if (lean_obj_tag(v_v_1221_) == 7)
{
lean_object* v_items_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; uint8_t v___x_1225_; 
v_items_1222_ = lean_ctor_get(v_v_1221_, 0);
v___x_1223_ = lean_array_get_size(v_items_1222_);
v___x_1224_ = lean_unsigned_to_nat(2u);
v___x_1225_ = lean_nat_dec_eq(v___x_1223_, v___x_1224_);
if (v___x_1225_ == 0)
{
lean_dec_ref(v_bs_1216_);
goto v___jp_1217_;
}
else
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = lean_array_fget_borrowed(v_items_1222_, v___x_1226_);
if (lean_obj_tag(v___x_1227_) == 4)
{
lean_object* v_s_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; 
v_s_1228_ = lean_ctor_get(v___x_1227_, 0);
lean_inc_ref(v_s_1228_);
v___x_1229_ = lean_unsigned_to_nat(1u);
v___x_1230_ = lean_array_fget_borrowed(v_items_1222_, v___x_1229_);
if (lean_obj_tag(v___x_1230_) == 4)
{
lean_object* v_s_1231_; lean_object* v_bs_x27_1232_; lean_object* v___x_1233_; size_t v___x_1234_; size_t v___x_1235_; lean_object* v___x_1236_; 
v_s_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc_ref(v_s_1231_);
v_bs_x27_1232_ = lean_array_uset(v_bs_1216_, v_i_1215_, v___x_1226_);
v___x_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1233_, 0, v_s_1228_);
lean_ctor_set(v___x_1233_, 1, v_s_1231_);
v___x_1234_ = ((size_t)1ULL);
v___x_1235_ = lean_usize_add(v_i_1215_, v___x_1234_);
v___x_1236_ = lean_array_uset(v_bs_x27_1232_, v_i_1215_, v___x_1233_);
v_i_1215_ = v___x_1235_;
v_bs_1216_ = v___x_1236_;
goto _start;
}
else
{
lean_object* v___x_1238_; 
lean_dec_ref(v_s_1228_);
lean_dec_ref(v_bs_1216_);
v___x_1238_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2));
return v___x_1238_;
}
}
else
{
lean_object* v___x_1239_; 
lean_dec_ref(v_bs_1216_);
v___x_1239_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__2));
return v___x_1239_;
}
}
}
else
{
lean_dec_ref(v_bs_1216_);
goto v___jp_1217_;
}
}
v___jp_1217_:
{
lean_object* v___x_1218_; 
v___x_1218_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___closed__1));
return v___x_1218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_sz_1240_, lean_object* v_i_1241_, lean_object* v_bs_1242_){
_start:
{
size_t v_sz_boxed_1243_; size_t v_i_boxed_1244_; lean_object* v_res_1245_; 
v_sz_boxed_1243_ = lean_unbox_usize(v_sz_1240_);
lean_dec(v_sz_1240_);
v_i_boxed_1244_ = lean_unbox_usize(v_i_1241_);
lean_dec(v_i_1241_);
v_res_1245_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(v_sz_boxed_1243_, v_i_boxed_1244_, v_bs_1242_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(lean_object* v_d_1251_, lean_object* v_key_1252_){
_start:
{
if (lean_obj_tag(v_d_1251_) == 8)
{
lean_object* v___x_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1297_; 
v___x_1253_ = l_Lasm_JS_Data_field(v_d_1251_, v_key_1252_);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_d_1251_);
if (v_isSharedCheck_1297_ == 0)
{
lean_object* v_unused_1298_; 
v_unused_1298_ = lean_ctor_get(v_d_1251_, 0);
lean_dec(v_unused_1298_);
v___x_1255_ = v_d_1251_;
v_isShared_1256_ = v_isSharedCheck_1297_;
goto v_resetjp_1254_;
}
else
{
lean_dec(v_d_1251_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1297_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v_a_1258_; 
if (lean_obj_tag(v___x_1253_) == 7)
{
lean_object* v_items_1283_; size_t v_sz_1284_; size_t v___x_1285_; lean_object* v___x_1286_; 
v_items_1283_ = lean_ctor_get(v___x_1253_, 0);
lean_inc_ref(v_items_1283_);
v_sz_1284_ = lean_array_size(v_items_1283_);
v___x_1285_ = ((size_t)0ULL);
v___x_1286_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4_spec__5(v_sz_1284_, v___x_1285_, v_items_1283_);
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; uint8_t v___x_1291_; 
v_a_1287_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1287_);
lean_dec_ref_known(v___x_1286_, 1);
v___x_1288_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__2));
v___x_1289_ = lean_string_utf8_byte_size(v_a_1287_);
v___x_1290_ = lean_unsigned_to_nat(0u);
v___x_1291_ = lean_nat_dec_eq(v___x_1289_, v___x_1290_);
if (v___x_1291_ == 0)
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1292_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1293_ = lean_string_append(v___x_1292_, v_a_1287_);
lean_dec(v_a_1287_);
v___x_1294_ = lean_string_append(v___x_1288_, v___x_1293_);
lean_dec_ref(v___x_1293_);
v_a_1258_ = v___x_1294_;
goto v___jp_1257_;
}
else
{
lean_dec(v_a_1287_);
v_a_1258_ = v___x_1288_;
goto v___jp_1257_;
}
}
else
{
if (lean_obj_tag(v___x_1286_) == 0)
{
lean_object* v_a_1295_; 
v_a_1295_ = lean_ctor_get(v___x_1286_, 0);
lean_inc(v_a_1295_);
lean_dec_ref_known(v___x_1286_, 1);
v_a_1258_ = v_a_1295_;
goto v___jp_1257_;
}
else
{
lean_dec_ref_known(v___x_1253_, 1);
lean_del_object(v___x_1255_);
return v___x_1286_;
}
}
}
else
{
lean_object* v___x_1296_; 
v___x_1296_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_1258_ = v___x_1296_;
goto v___jp_1257_;
}
v___jp_1257_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1259_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1260_ = lean_string_append(v___x_1259_, v_key_1252_);
v___x_1261_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1262_ = lean_string_append(v___x_1260_, v___x_1261_);
v___x_1263_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__0));
v___x_1264_ = lean_string_append(v___x_1262_, v___x_1263_);
v___x_1265_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1266_ = lean_string_append(v___x_1264_, v___x_1265_);
v___x_1267_ = l_Lasm_JS_Data_describe(v___x_1253_);
v___x_1268_ = lean_string_append(v___x_1266_, v___x_1267_);
lean_dec_ref(v___x_1267_);
v___x_1269_ = lean_string_utf8_byte_size(v_a_1258_);
v___x_1270_ = lean_unsigned_to_nat(0u);
v___x_1271_ = lean_nat_dec_eq(v___x_1269_, v___x_1270_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v___x_1272_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1273_ = lean_string_append(v___x_1272_, v_a_1258_);
lean_dec_ref(v_a_1258_);
v___x_1274_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1275_ = lean_string_append(v___x_1273_, v___x_1274_);
v___x_1276_ = lean_string_append(v___x_1268_, v___x_1275_);
lean_dec_ref(v___x_1275_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set_tag(v___x_1255_, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1276_);
v___x_1278_ = v___x_1255_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
else
{
lean_object* v___x_1281_; 
lean_dec_ref(v_a_1258_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set_tag(v___x_1255_, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1268_);
v___x_1281_ = v___x_1255_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v___x_1268_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
else
{
lean_object* v___x_1299_; 
lean_dec(v_d_1251_);
v___x_1299_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__3));
return v___x_1299_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___boxed(lean_object* v_d_1300_, lean_object* v_key_1301_){
_start:
{
lean_object* v_res_1302_; 
v_res_1302_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(v_d_1300_, v_key_1301_);
lean_dec_ref(v_key_1301_);
return v_res_1302_;
}
}
static lean_object* _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = lean_unsigned_to_nat(0u);
v___x_1305_ = lean_nat_to_int(v___x_1304_);
return v___x_1305_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(lean_object* v_d_1310_, lean_object* v_key_1311_){
_start:
{
if (lean_obj_tag(v_d_1310_) == 8)
{
lean_object* v___x_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1355_; 
v___x_1312_ = l_Lasm_JS_Data_field(v_d_1310_, v_key_1311_);
v_isSharedCheck_1355_ = !lean_is_exclusive(v_d_1310_);
if (v_isSharedCheck_1355_ == 0)
{
lean_object* v_unused_1356_; 
v_unused_1356_ = lean_ctor_get(v_d_1310_, 0);
lean_dec(v_unused_1356_);
v___x_1314_ = v_d_1310_;
v_isShared_1315_ = v_isSharedCheck_1355_;
goto v_resetjp_1313_;
}
else
{
lean_dec(v_d_1310_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1355_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v_a_1317_; lean_object* v_a_1343_; 
switch(lean_obj_tag(v___x_1312_))
{
case 3:
{
double v_n_1349_; lean_object* v___x_1350_; 
v_n_1349_ = lean_ctor_get_float(v___x_1312_, 0);
v___x_1350_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_1349_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v___x_1351_; 
v___x_1351_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3));
v_a_1317_ = v___x_1351_;
goto v___jp_1316_;
}
else
{
lean_object* v_val_1352_; 
v_val_1352_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_val_1352_);
lean_dec_ref_known(v___x_1350_, 1);
v_a_1343_ = v_val_1352_;
goto v___jp_1342_;
}
}
case 5:
{
lean_object* v_i_1353_; 
v_i_1353_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_i_1353_);
v_a_1343_ = v_i_1353_;
goto v___jp_1342_;
}
default: 
{
lean_object* v___x_1354_; 
v___x_1354_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_1317_ = v___x_1354_;
goto v___jp_1316_;
}
}
v___jp_1316_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; uint8_t v___x_1330_; 
v___x_1318_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1319_ = lean_string_append(v___x_1318_, v_key_1311_);
v___x_1320_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1321_ = lean_string_append(v___x_1319_, v___x_1320_);
v___x_1322_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0));
v___x_1323_ = lean_string_append(v___x_1321_, v___x_1322_);
v___x_1324_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1325_ = lean_string_append(v___x_1323_, v___x_1324_);
v___x_1326_ = l_Lasm_JS_Data_describe(v___x_1312_);
v___x_1327_ = lean_string_append(v___x_1325_, v___x_1326_);
lean_dec_ref(v___x_1326_);
v___x_1328_ = lean_string_utf8_byte_size(v_a_1317_);
v___x_1329_ = lean_unsigned_to_nat(0u);
v___x_1330_ = lean_nat_dec_eq(v___x_1328_, v___x_1329_);
if (v___x_1330_ == 0)
{
lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
v___x_1331_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1332_ = lean_string_append(v___x_1331_, v_a_1317_);
v___x_1333_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1334_ = lean_string_append(v___x_1332_, v___x_1333_);
v___x_1335_ = lean_string_append(v___x_1327_, v___x_1334_);
lean_dec_ref(v___x_1334_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1335_);
v___x_1337_ = v___x_1314_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1335_);
v___x_1337_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
return v___x_1337_;
}
}
else
{
lean_object* v___x_1340_; 
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1327_);
v___x_1340_ = v___x_1314_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1327_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
v___jp_1342_:
{
lean_object* v___x_1344_; uint8_t v___x_1345_; 
v___x_1344_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1);
v___x_1345_ = lean_int_dec_le(v___x_1344_, v_a_1343_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; 
lean_dec(v_a_1343_);
v___x_1346_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2));
v_a_1317_ = v___x_1346_;
goto v___jp_1316_;
}
else
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
lean_del_object(v___x_1314_);
lean_dec(v___x_1312_);
v___x_1347_ = l_Int_toNat(v_a_1343_);
lean_dec(v_a_1343_);
v___x_1348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
return v___x_1348_;
}
}
}
}
else
{
lean_object* v___x_1357_; 
lean_dec(v_d_1310_);
v___x_1357_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__4));
return v___x_1357_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_d_1358_, lean_object* v_key_1359_){
_start:
{
lean_object* v_res_1360_; 
v_res_1360_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(v_d_1358_, v_key_1359_);
lean_dec_ref(v_key_1359_);
return v_res_1360_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(lean_object* v_d_1364_, lean_object* v_key_1365_){
_start:
{
if (lean_obj_tag(v_d_1364_) == 8)
{
lean_object* v___x_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1397_; 
v___x_1366_ = l_Lasm_JS_Data_field(v_d_1364_, v_key_1365_);
v_isSharedCheck_1397_ = !lean_is_exclusive(v_d_1364_);
if (v_isSharedCheck_1397_ == 0)
{
lean_object* v_unused_1398_; 
v_unused_1398_ = lean_ctor_get(v_d_1364_, 0);
lean_dec(v_unused_1398_);
v___x_1368_ = v_d_1364_;
v_isShared_1369_ = v_isSharedCheck_1397_;
goto v_resetjp_1367_;
}
else
{
lean_dec(v_d_1364_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1397_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
if (lean_obj_tag(v___x_1366_) == 4)
{
lean_object* v_s_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1377_; 
lean_del_object(v___x_1368_);
v_s_1370_ = lean_ctor_get(v___x_1366_, 0);
v_isSharedCheck_1377_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1377_ == 0)
{
v___x_1372_ = v___x_1366_;
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_s_1370_);
lean_dec(v___x_1366_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1377_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set_tag(v___x_1372_, 1);
v___x_1375_ = v___x_1372_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1376_; 
v_reuseFailAlloc_1376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1376_, 0, v_s_1370_);
v___x_1375_ = v_reuseFailAlloc_1376_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
return v___x_1375_;
}
}
}
else
{
lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; uint8_t v___x_1388_; 
v___x_1378_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__0));
v___x_1379_ = lean_string_append(v___x_1378_, v_key_1365_);
v___x_1380_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__1));
v___x_1381_ = lean_string_append(v___x_1379_, v___x_1380_);
v___x_1382_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0));
v___x_1383_ = lean_string_append(v___x_1381_, v___x_1382_);
v___x_1384_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__3));
v___x_1385_ = lean_string_append(v___x_1383_, v___x_1384_);
v___x_1386_ = l_Lasm_JS_Data_describe(v___x_1366_);
v___x_1387_ = lean_string_append(v___x_1385_, v___x_1386_);
lean_dec_ref(v___x_1386_);
v___x_1388_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1392_; 
v___x_1389_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___x_1390_ = lean_string_append(v___x_1387_, v___x_1389_);
if (v_isShared_1369_ == 0)
{
lean_ctor_set_tag(v___x_1368_, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1390_);
v___x_1392_ = v___x_1368_;
goto v_reusejp_1391_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v___x_1390_);
v___x_1392_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1391_;
}
v_reusejp_1391_:
{
return v___x_1392_;
}
}
else
{
lean_object* v___x_1395_; 
if (v_isShared_1369_ == 0)
{
lean_ctor_set_tag(v___x_1368_, 0);
lean_ctor_set(v___x_1368_, 0, v___x_1387_);
v___x_1395_ = v___x_1368_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v___x_1387_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
}
else
{
lean_object* v___x_1399_; 
lean_dec(v_d_1364_);
v___x_1399_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__1));
return v___x_1399_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___boxed(lean_object* v_d_1400_, lean_object* v_key_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1400_, v_key_1401_);
lean_dec_ref(v_key_1401_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(lean_object* v_context_1403_, lean_object* v_d_1404_){
_start:
{
lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1413_; lean_object* v_received_1414_; lean_object* v___y_1433_; lean_object* v_a_1436_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
lean_inc(v_d_1404_);
v___x_1461_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1(v_d_1404_, v___x_1460_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1462_);
lean_dec_ref_known(v___x_1461_, 1);
v_a_1436_ = v_a_1462_;
goto v___jp_1435_;
}
else
{
lean_object* v_a_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; 
v_a_1463_ = lean_ctor_get(v___x_1461_, 0);
lean_inc(v_a_1463_);
lean_dec_ref_known(v___x_1461_, 1);
v___x_1464_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__1));
lean_inc(v_d_1404_);
v___x_1465_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1404_, v___x_1464_);
if (lean_obj_tag(v___x_1465_) == 0)
{
lean_object* v_a_1466_; 
lean_dec(v_a_1463_);
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1466_);
lean_dec_ref_known(v___x_1465_, 1);
v_a_1436_ = v_a_1466_;
goto v___jp_1435_;
}
else
{
lean_object* v_a_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; 
v_a_1467_ = lean_ctor_get(v___x_1465_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1465_, 1);
v___x_1468_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
lean_inc(v_d_1404_);
v___x_1469_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1404_, v___x_1468_);
if (lean_obj_tag(v___x_1469_) == 0)
{
lean_object* v_a_1470_; 
lean_dec(v_a_1467_);
lean_dec(v_a_1463_);
v_a_1470_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1470_);
lean_dec_ref_known(v___x_1469_, 1);
v_a_1436_ = v_a_1470_;
goto v___jp_1435_;
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v_a_1471_ = lean_ctor_get(v___x_1469_, 0);
lean_inc(v_a_1471_);
lean_dec_ref_known(v___x_1469_, 1);
v___x_1472_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__3));
lean_inc(v_d_1404_);
v___x_1473_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1404_, v___x_1472_);
if (lean_obj_tag(v___x_1473_) == 0)
{
lean_object* v_a_1474_; 
lean_dec(v_a_1471_);
lean_dec(v_a_1467_);
lean_dec(v_a_1463_);
v_a_1474_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1474_);
lean_dec_ref_known(v___x_1473_, 1);
v_a_1436_ = v_a_1474_;
goto v___jp_1435_;
}
else
{
lean_object* v_a_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_a_1475_ = lean_ctor_get(v___x_1473_, 0);
lean_inc(v_a_1475_);
lean_dec_ref_known(v___x_1473_, 1);
v___x_1476_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__4));
lean_inc(v_d_1404_);
v___x_1477_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3(v_d_1404_, v___x_1476_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_a_1478_; 
lean_dec(v_a_1475_);
lean_dec(v_a_1471_);
lean_dec(v_a_1467_);
lean_dec(v_a_1463_);
v_a_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1478_);
lean_dec_ref_known(v___x_1477_, 1);
v_a_1436_ = v_a_1478_;
goto v___jp_1435_;
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v_a_1479_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_a_1479_);
lean_dec_ref_known(v___x_1477_, 1);
v___x_1480_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__5));
lean_inc(v_d_1404_);
v___x_1481_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2(v_d_1404_, v___x_1480_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; 
lean_dec(v_a_1479_);
lean_dec(v_a_1475_);
lean_dec(v_a_1471_);
lean_dec(v_a_1467_);
lean_dec(v_a_1463_);
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref_known(v___x_1481_, 1);
v_a_1436_ = v_a_1482_;
goto v___jp_1435_;
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; 
v_a_1483_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1483_);
lean_dec_ref_known(v___x_1481_, 1);
v___x_1484_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
lean_inc(v_d_1404_);
v___x_1485_ = l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4(v_d_1404_, v___x_1484_);
if (lean_obj_tag(v___x_1485_) == 0)
{
lean_object* v_a_1486_; 
lean_dec(v_a_1483_);
lean_dec(v_a_1479_);
lean_dec(v_a_1475_);
lean_dec(v_a_1471_);
lean_dec(v_a_1467_);
lean_dec(v_a_1463_);
v_a_1486_ = lean_ctor_get(v___x_1485_, 0);
lean_inc(v_a_1486_);
lean_dec_ref_known(v___x_1485_, 1);
v_a_1436_ = v_a_1486_;
goto v___jp_1435_;
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1497_; 
lean_dec(v_d_1404_);
v_a_1487_ = lean_ctor_get(v___x_1485_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1489_ = v___x_1485_;
v_isShared_1490_ = v_isSharedCheck_1497_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1485_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1497_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; uint8_t v___x_1492_; uint8_t v___x_1493_; lean_object* v___x_1495_; 
v___x_1491_ = lean_alloc_ctor(0, 5, 2);
lean_ctor_set(v___x_1491_, 0, v_a_1463_);
lean_ctor_set(v___x_1491_, 1, v_a_1467_);
lean_ctor_set(v___x_1491_, 2, v_a_1475_);
lean_ctor_set(v___x_1491_, 3, v_a_1483_);
lean_ctor_set(v___x_1491_, 4, v_a_1487_);
v___x_1492_ = lean_unbox(v_a_1471_);
lean_dec(v_a_1471_);
lean_ctor_set_uint8(v___x_1491_, sizeof(void*)*5, v___x_1492_);
v___x_1493_ = lean_unbox(v_a_1479_);
lean_dec(v_a_1479_);
lean_ctor_set_uint8(v___x_1491_, sizeof(void*)*5 + 1, v___x_1493_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set_tag(v___x_1489_, 0);
lean_ctor_set(v___x_1489_, 0, v___x_1491_);
v___x_1495_ = v___x_1489_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1491_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
}
}
}
}
v___jp_1406_:
{
lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1409_ = lean_string_append(v___y_1407_, v___y_1408_);
lean_dec_ref(v___y_1408_);
v___x_1410_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1410_, 0, v___x_1409_);
v___x_1411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1411_, 0, v___x_1410_);
return v___x_1411_;
}
v___jp_1412_:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1415_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1416_ = lean_string_append(v___x_1415_, v_context_1403_);
v___x_1417_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_1418_ = lean_string_append(v___x_1416_, v___x_1417_);
v___x_1419_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___closed__3));
v___x_1420_ = lean_string_append(v___x_1418_, v___x_1419_);
v___x_1421_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_1422_ = lean_string_append(v___x_1420_, v___x_1421_);
v___x_1423_ = lean_string_append(v___x_1422_, v_received_1414_);
lean_dec_ref(v_received_1414_);
v___x_1424_ = lean_string_utf8_byte_size(v___y_1413_);
v___x_1425_ = lean_unsigned_to_nat(0u);
v___x_1426_ = lean_nat_dec_eq(v___x_1424_, v___x_1425_);
if (v___x_1426_ == 0)
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1427_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_1428_ = lean_string_append(v___x_1427_, v___y_1413_);
lean_dec_ref(v___y_1413_);
v___x_1429_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_1430_ = lean_string_append(v___x_1428_, v___x_1429_);
v___y_1407_ = v___x_1423_;
v___y_1408_ = v___x_1430_;
goto v___jp_1406_;
}
else
{
lean_object* v___x_1431_; 
lean_dec_ref(v___y_1413_);
v___x_1431_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___y_1407_ = v___x_1423_;
v___y_1408_ = v___x_1431_;
goto v___jp_1406_;
}
}
v___jp_1432_:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lasm_JS_Data_describe(v_d_1404_);
v___y_1413_ = v___y_1433_;
v_received_1414_ = v___x_1434_;
goto v___jp_1412_;
}
v___jp_1435_:
{
if (lean_obj_tag(v_d_1404_) == 9)
{
lean_object* v_value_1437_; lean_object* v_description_1438_; lean_object* v___x_1439_; uint8_t v___x_1440_; 
v_value_1437_ = lean_ctor_get(v_d_1404_, 0);
v_description_1438_ = lean_ctor_get(v_d_1404_, 1);
v___x_1439_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1440_ = lean_string_dec_eq(v_description_1438_, v___x_1439_);
if (v___x_1440_ == 0)
{
v___y_1433_ = v_a_1436_;
goto v___jp_1432_;
}
else
{
lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1457_; 
lean_inc(v_value_1437_);
v_isSharedCheck_1457_ = !lean_is_exclusive(v_d_1404_);
if (v_isSharedCheck_1457_ == 0)
{
lean_object* v_unused_1458_; lean_object* v_unused_1459_; 
v_unused_1458_ = lean_ctor_get(v_d_1404_, 1);
lean_dec(v_unused_1458_);
v_unused_1459_ = lean_ctor_get(v_d_1404_, 0);
lean_dec(v_unused_1459_);
v___x_1442_ = v_d_1404_;
v_isShared_1443_ = v_isSharedCheck_1457_;
goto v_resetjp_1441_;
}
else
{
lean_dec(v_d_1404_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1457_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
uint32_t v___x_1444_; uint64_t v___x_1445_; lean_object* v___x_1447_; 
v___x_1444_ = 206;
v___x_1445_ = 0ULL;
lean_inc(v_value_1437_);
if (v_isShared_1443_ == 0)
{
lean_ctor_set(v___x_1442_, 1, v___x_1439_);
v___x_1447_ = v___x_1442_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_value_1437_);
lean_ctor_set(v_reuseFailAlloc_1456_, 1, v___x_1439_);
v___x_1447_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
uint32_t v___x_1448_; lean_object* v___x_1449_; 
v___x_1448_ = lasm_js_value_handle(v_value_1437_);
lean_dec(v_value_1437_);
v___x_1449_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1444_, v___x_1445_, v___x_1447_, v___x_1448_);
lean_dec_ref(v___x_1447_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; uint8_t v___x_1451_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref_known(v___x_1449_, 1);
v___x_1451_ = lean_string_validate_utf8(v_a_1450_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1453_; 
lean_dec(v_a_1450_);
v___x_1452_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_1453_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1452_);
v___y_1413_ = v_a_1436_;
v_received_1414_ = v___x_1453_;
goto v___jp_1412_;
}
else
{
lean_object* v___x_1454_; 
v___x_1454_ = lean_string_from_utf8_unchecked(v_a_1450_);
v___y_1413_ = v_a_1436_;
v_received_1414_ = v___x_1454_;
goto v___jp_1412_;
}
}
else
{
lean_object* v___x_1455_; 
lean_dec_ref_known(v___x_1449_, 1);
v___x_1455_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v___y_1413_ = v_a_1436_;
v_received_1414_ = v___x_1455_;
goto v___jp_1412_;
}
}
}
}
}
else
{
v___y_1433_ = v_a_1436_;
goto v___jp_1432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0___boxed(lean_object* v_context_1498_, lean_object* v_d_1499_, lean_object* v_a_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(v_context_1498_, v_d_1499_);
lean_dec_ref(v_context_1498_);
return v_res_1501_;
}
}
static uint64_t _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0(void){
_start:
{
uint8_t v___x_1502_; uint64_t v___x_1503_; 
v___x_1502_ = 0;
v___x_1503_ = l___private_Lasm_JS_Core_0__Lasm_JS_modeArg(v___x_1502_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(lean_object* v_b_1504_, lean_object* v_args_1505_, uint8_t v_await_1506_){
_start:
{
uint64_t v___y_1509_; uint64_t v___y_1510_; uint64_t v___x_1553_; uint64_t v___y_1555_; 
v___x_1553_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_1506_ == 0)
{
uint64_t v___x_1560_; 
v___x_1560_ = 0ULL;
v___y_1555_ = v___x_1560_;
goto v___jp_1554_;
}
else
{
uint64_t v___x_1561_; 
v___x_1561_ = 2ULL;
v___y_1555_ = v___x_1561_;
goto v___jp_1554_;
}
v___jp_1508_:
{
uint64_t v_flags_1511_; uint32_t v___x_1512_; lean_object* v___x_1513_; uint32_t v___x_1514_; lean_object* v___x_1515_; 
v_flags_1511_ = lean_uint64_lor(v___y_1509_, v___y_1510_);
v___x_1512_ = 214;
v___x_1513_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1504_, v_args_1505_);
v___x_1514_ = 0;
v___x_1515_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1512_, v_flags_1511_, v___x_1513_, v___x_1514_);
lean_dec(v___x_1513_);
if (lean_obj_tag(v___x_1515_) == 0)
{
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1517_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_a_1516_);
lean_dec_ref_known(v___x_1515_, 1);
v___x_1517_ = l_Lasm_JS_Wire_decode(v_a_1516_);
lean_dec(v_a_1516_);
if (lean_obj_tag(v___x_1517_) == 0)
{
lean_object* v_a_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v_a_1518_ = lean_ctor_get(v___x_1517_, 0);
lean_inc(v_a_1518_);
lean_dec_ref_known(v___x_1517_, 1);
v___x_1519_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1504_);
v___x_1520_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0(v___x_1519_, v_a_1518_);
lean_dec_ref(v___x_1519_);
return v___x_1520_;
}
else
{
lean_object* v_a_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1528_; 
v_a_1521_ = lean_ctor_get(v___x_1517_, 0);
v_isSharedCheck_1528_ = !lean_is_exclusive(v___x_1517_);
if (v_isSharedCheck_1528_ == 0)
{
v___x_1523_ = v___x_1517_;
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_a_1521_);
lean_dec(v___x_1517_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1528_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1526_; 
if (v_isShared_1524_ == 0)
{
v___x_1526_ = v___x_1523_;
goto v_reusejp_1525_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v_a_1521_);
v___x_1526_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1525_;
}
v_reusejp_1525_:
{
return v___x_1526_;
}
}
}
}
else
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1536_; 
v_a_1529_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1536_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1536_ == 0)
{
v___x_1531_ = v___x_1515_;
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1515_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1536_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1534_; 
if (v_isShared_1532_ == 0)
{
lean_ctor_set_tag(v___x_1531_, 1);
v___x_1534_ = v___x_1531_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_a_1529_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
return v___x_1534_;
}
}
}
}
else
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1552_; 
v_a_1537_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1539_ = v___x_1515_;
v_isShared_1540_ = v_isSharedCheck_1552_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1515_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1552_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1550_; 
v___x_1541_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1542_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1504_);
v___x_1543_ = lean_string_append(v___x_1541_, v___x_1542_);
lean_dec_ref(v___x_1542_);
v___x_1544_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1545_ = lean_string_append(v___x_1543_, v___x_1544_);
v___x_1546_ = lean_io_error_to_string(v_a_1537_);
v___x_1547_ = lean_string_append(v___x_1545_, v___x_1546_);
lean_dec_ref(v___x_1546_);
v___x_1548_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1548_, 0, v___x_1547_);
if (v_isShared_1540_ == 0)
{
lean_ctor_set(v___x_1539_, 0, v___x_1548_);
v___x_1550_ = v___x_1539_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v___x_1548_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
v___jp_1554_:
{
uint8_t v_construct_1556_; uint64_t v___x_1557_; 
v_construct_1556_ = lean_ctor_get_uint8(v_b_1504_, sizeof(void*)*4);
v___x_1557_ = lean_uint64_lor(v___x_1553_, v___y_1555_);
if (v_construct_1556_ == 0)
{
uint64_t v___x_1558_; 
v___x_1558_ = 0ULL;
v___y_1509_ = v___x_1557_;
v___y_1510_ = v___x_1558_;
goto v___jp_1508_;
}
else
{
uint64_t v___x_1559_; 
v___x_1559_ = 4ULL;
v___y_1509_ = v___x_1557_;
v___y_1510_ = v___x_1559_;
goto v___jp_1508_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___boxed(lean_object* v_b_1562_, lean_object* v_args_1563_, lean_object* v_await_1564_, lean_object* v_a_1565_){
_start:
{
uint8_t v_await_boxed_1566_; lean_object* v_res_1567_; 
v_await_boxed_1566_ = lean_unbox(v_await_1564_);
v_res_1567_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(v_b_1562_, v_args_1563_, v_await_boxed_1566_);
lean_dec_ref(v_b_1562_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo(lean_object* v_a_1574_){
_start:
{
lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; uint8_t v___x_1581_; lean_object* v___x_1582_; 
v___x_1576_ = ((lean_object*)(l_Lasm_Web_Raw_responseInfo___closed__1));
v___x_1577_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1578_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1579_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1579_, 0, v_a_1574_);
lean_ctor_set(v___x_1579_, 1, v___x_1578_);
v___x_1580_ = lean_array_push(v___x_1577_, v___x_1579_);
v___x_1581_ = 1;
v___x_1582_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0(v___x_1576_, v___x_1580_, v___x_1581_);
return v___x_1582_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseInfo___boxed(lean_object* v_a_1583_, lean_object* v_a_1584_){
_start:
{
lean_object* v_res_1585_; 
v_res_1585_ = l_Lasm_Web_Raw_responseInfo(v_a_1583_);
return v_res_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2(lean_object* v___f_1586_, lean_object* v_x_1587_){
_start:
{
if (lean_obj_tag(v_x_1587_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1597_; 
lean_dec_ref(v___f_1586_);
v_a_1589_ = lean_ctor_get(v_x_1587_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v_x_1587_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1591_ = v_x_1587_;
v_isShared_1592_ = v_isSharedCheck_1597_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v_x_1587_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1597_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
lean_object* v___x_1595_; 
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
return v___x_1595_;
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1599_; 
v_a_1598_ = lean_ctor_get(v_x_1587_, 0);
lean_inc(v_a_1598_);
lean_dec_ref_known(v_x_1587_, 1);
v___x_1599_ = lean_apply_2(v___f_1586_, v_a_1598_, lean_box(0));
return v___x_1599_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2___boxed(lean_object* v___f_1600_, lean_object* v_x_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v_res_1603_; 
v_res_1603_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2(v___f_1600_, v_x_1601_);
return v_res_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6(lean_object* v_payload_1604_, lean_object* v_failurePrefix_1605_, lean_object* v___f_1606_, lean_object* v___f_1607_, uint32_t v_op_1608_, uint64_t v_flags_1609_, lean_object* v___f_1610_, lean_object* v_x_1611_){
_start:
{
if (lean_obj_tag(v_x_1611_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1621_; 
lean_dec_ref(v___f_1610_);
lean_dec_ref(v___f_1607_);
lean_dec_ref(v___f_1606_);
v_a_1613_ = lean_ctor_get(v_x_1611_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v_x_1611_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1615_ = v_x_1611_;
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_a_1613_);
lean_dec(v_x_1611_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1621_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1618_; 
if (v_isShared_1616_ == 0)
{
v___x_1618_ = v___x_1615_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1613_);
v___x_1618_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1619_, 0, v___x_1618_);
return v___x_1619_;
}
}
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1663_; 
v_a_1622_ = lean_ctor_get(v_x_1611_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_x_1611_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1624_ = v_x_1611_;
v_isShared_1625_ = v_isSharedCheck_1663_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v_x_1611_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1663_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
uint32_t v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; uint8_t v___x_1630_; 
v___x_1626_ = 0;
v___x_1627_ = l_Lasm_JS_Wire_encode(v_payload_1604_);
v___x_1628_ = lean_string_utf8_byte_size(v_failurePrefix_1605_);
v___x_1629_ = lean_unsigned_to_nat(0u);
v___x_1630_ = lean_nat_dec_eq(v___x_1628_, v___x_1629_);
if (v___x_1630_ == 0)
{
lean_object* v___f_1631_; lean_object* v_val_1633_; lean_object* v___x_1638_; 
lean_dec_ref(v___f_1610_);
lean_inc(v_a_1622_);
v___f_1631_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1631_, 0, v_a_1622_);
v___x_1638_ = lasm_js_call_into(v_a_1622_, v_op_1608_, v___x_1626_, v_flags_1609_, v___x_1627_, v_payload_1604_);
lean_dec_ref(v___x_1627_);
lean_dec(v_a_1622_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1641_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
lean_dec_ref_known(v___x_1638_, 1);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 0, v_a_1639_);
v___x_1641_ = v___x_1624_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1639_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
v_val_1633_ = v___x_1641_;
goto v___jp_1632_;
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; 
v_a_1643_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1643_);
lean_dec_ref_known(v___x_1638_, 1);
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 0);
lean_ctor_set(v___x_1624_, 0, v_a_1643_);
v___x_1645_ = v___x_1624_;
goto v_reusejp_1644_;
}
else
{
lean_object* v_reuseFailAlloc_1646_; 
v_reuseFailAlloc_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1646_, 0, v_a_1643_);
v___x_1645_ = v_reuseFailAlloc_1646_;
goto v_reusejp_1644_;
}
v_reusejp_1644_:
{
v_val_1633_ = v___x_1645_;
goto v___jp_1632_;
}
}
v___jp_1632_:
{
lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; 
v___x_1634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1634_, 0, v_val_1633_);
v___x_1635_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1629_, v___x_1630_, v___x_1634_, v___f_1631_);
v___x_1636_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1629_, v___x_1630_, v___x_1635_, v___f_1606_);
v___x_1637_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1629_, v___x_1630_, v___x_1636_, v___f_1607_);
return v___x_1637_;
}
}
else
{
lean_object* v___f_1647_; uint8_t v___x_1648_; lean_object* v_val_1650_; lean_object* v___x_1654_; 
lean_dec_ref(v___f_1607_);
lean_dec_ref(v___f_1606_);
lean_inc(v_a_1622_);
v___f_1647_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1647_, 0, v_a_1622_);
v___x_1648_ = 0;
v___x_1654_ = lasm_js_call_into(v_a_1622_, v_op_1608_, v___x_1626_, v_flags_1609_, v___x_1627_, v_payload_1604_);
lean_dec_ref(v___x_1627_);
lean_dec(v_a_1622_);
if (lean_obj_tag(v___x_1654_) == 0)
{
lean_object* v_a_1655_; lean_object* v___x_1657_; 
v_a_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1655_);
lean_dec_ref_known(v___x_1654_, 1);
if (v_isShared_1625_ == 0)
{
lean_ctor_set(v___x_1624_, 0, v_a_1655_);
v___x_1657_ = v___x_1624_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1655_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
v_val_1650_ = v___x_1657_;
goto v___jp_1649_;
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1661_; 
v_a_1659_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_a_1659_);
lean_dec_ref_known(v___x_1654_, 1);
if (v_isShared_1625_ == 0)
{
lean_ctor_set_tag(v___x_1624_, 0);
lean_ctor_set(v___x_1624_, 0, v_a_1659_);
v___x_1661_ = v___x_1624_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1659_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
v_val_1650_ = v___x_1661_;
goto v___jp_1649_;
}
}
v___jp_1649_:
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1651_, 0, v_val_1650_);
v___x_1652_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1629_, v___x_1648_, v___x_1651_, v___f_1647_);
v___x_1653_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1629_, v___x_1648_, v___x_1652_, v___f_1610_);
return v___x_1653_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_1664_, lean_object* v_failurePrefix_1665_, lean_object* v___f_1666_, lean_object* v___f_1667_, lean_object* v_op_1668_, lean_object* v_flags_1669_, lean_object* v___f_1670_, lean_object* v_x_1671_, lean_object* v___y_1672_){
_start:
{
uint32_t v_op_boxed_1673_; uint64_t v_flags_boxed_1674_; lean_object* v_res_1675_; 
v_op_boxed_1673_ = lean_unbox_uint32(v_op_1668_);
lean_dec(v_op_1668_);
v_flags_boxed_1674_ = lean_unbox_uint64(v_flags_1669_);
lean_dec_ref(v_flags_1669_);
v_res_1675_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6(v_payload_1664_, v_failurePrefix_1665_, v___f_1666_, v___f_1667_, v_op_boxed_1673_, v_flags_boxed_1674_, v___f_1670_, v_x_1671_);
lean_dec_ref(v_failurePrefix_1665_);
lean_dec(v_payload_1664_);
return v_res_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(lean_object* v___f_1676_, lean_object* v_bytes_1677_){
_start:
{
lean_object* v___x_1679_; uint8_t v___x_1680_; lean_object* v_val_1682_; lean_object* v___x_1685_; 
v___x_1679_ = lean_unsigned_to_nat(0u);
v___x_1680_ = 0;
v___x_1685_ = l_Lasm_JS_Wire_decode(v_bytes_1677_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1693_; 
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1693_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1693_ == 0)
{
v___x_1688_ = v___x_1685_;
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1693_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1691_; 
if (v_isShared_1689_ == 0)
{
lean_ctor_set_tag(v___x_1688_, 1);
v___x_1691_ = v___x_1688_;
goto v_reusejp_1690_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v_a_1686_);
v___x_1691_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1690_;
}
v_reusejp_1690_:
{
v_val_1682_ = v___x_1691_;
goto v___jp_1681_;
}
}
}
else
{
lean_object* v_a_1694_; lean_object* v___x_1696_; uint8_t v_isShared_1697_; uint8_t v_isSharedCheck_1701_; 
v_a_1694_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1701_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1701_ == 0)
{
v___x_1696_ = v___x_1685_;
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
else
{
lean_inc(v_a_1694_);
lean_dec(v___x_1685_);
v___x_1696_ = lean_box(0);
v_isShared_1697_ = v_isSharedCheck_1701_;
goto v_resetjp_1695_;
}
v_resetjp_1695_:
{
lean_object* v___x_1699_; 
if (v_isShared_1697_ == 0)
{
lean_ctor_set_tag(v___x_1696_, 0);
v___x_1699_ = v___x_1696_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_a_1694_);
v___x_1699_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
v_val_1682_ = v___x_1699_;
goto v___jp_1681_;
}
}
}
v___jp_1681_:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v_val_1682_);
v___x_1684_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1679_, v___x_1680_, v___x_1683_, v___f_1676_);
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed(lean_object* v___f_1702_, lean_object* v_bytes_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0(v___f_1702_, v_bytes_1703_);
lean_dec_ref(v_bytes_1703_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(lean_object* v_context_1706_, lean_object* v_d_1707_){
_start:
{
lean_object* v___y_1710_; lean_object* v___y_1711_; 
if (lean_obj_tag(v_d_1707_) == 4)
{
lean_object* v_s_1715_; lean_object* v___x_1717_; uint8_t v_isShared_1718_; uint8_t v_isSharedCheck_1722_; 
v_s_1715_ = lean_ctor_get(v_d_1707_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v_d_1707_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1717_ = v_d_1707_;
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
else
{
lean_inc(v_s_1715_);
lean_dec(v_d_1707_);
v___x_1717_ = lean_box(0);
v_isShared_1718_ = v_isSharedCheck_1722_;
goto v_resetjp_1716_;
}
v_resetjp_1716_:
{
lean_object* v___x_1720_; 
if (v_isShared_1718_ == 0)
{
lean_ctor_set_tag(v___x_1717_, 0);
v___x_1720_ = v___x_1717_;
goto v_reusejp_1719_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v_s_1715_);
v___x_1720_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1719_;
}
v_reusejp_1719_:
{
return v___x_1720_;
}
}
}
else
{
lean_object* v___x_1723_; lean_object* v_received_1725_; 
v___x_1723_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_1707_) == 9)
{
lean_object* v_value_1739_; lean_object* v_description_1740_; uint8_t v___x_1741_; 
v_value_1739_ = lean_ctor_get(v_d_1707_, 0);
v_description_1740_ = lean_ctor_get(v_d_1707_, 1);
v___x_1741_ = lean_string_dec_eq(v_description_1740_, v___x_1723_);
if (v___x_1741_ == 0)
{
goto v___jp_1737_;
}
else
{
uint32_t v___x_1742_; uint64_t v___x_1743_; lean_object* v___x_1744_; uint32_t v___x_1745_; lean_object* v___x_1746_; 
lean_inc_n(v_value_1739_, 2);
lean_dec_ref_known(v_d_1707_, 2);
v___x_1742_ = 206;
v___x_1743_ = 0ULL;
v___x_1744_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1744_, 0, v_value_1739_);
lean_ctor_set(v___x_1744_, 1, v___x_1723_);
v___x_1745_ = lasm_js_value_handle(v_value_1739_);
lean_dec(v_value_1739_);
v___x_1746_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_1742_, v___x_1743_, v___x_1744_, v___x_1745_);
lean_dec_ref_known(v___x_1744_, 2);
if (lean_obj_tag(v___x_1746_) == 0)
{
lean_object* v_a_1747_; uint8_t v___x_1748_; 
v_a_1747_ = lean_ctor_get(v___x_1746_, 0);
lean_inc(v_a_1747_);
lean_dec_ref_known(v___x_1746_, 1);
v___x_1748_ = lean_string_validate_utf8(v_a_1747_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; lean_object* v___x_1750_; 
lean_dec(v_a_1747_);
v___x_1749_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_1750_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_1749_);
v_received_1725_ = v___x_1750_;
goto v___jp_1724_;
}
else
{
lean_object* v___x_1751_; 
v___x_1751_ = lean_string_from_utf8_unchecked(v_a_1747_);
v_received_1725_ = v___x_1751_;
goto v___jp_1724_;
}
}
else
{
lean_object* v___x_1752_; 
lean_dec_ref_known(v___x_1746_, 1);
v___x_1752_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_1725_ = v___x_1752_;
goto v___jp_1724_;
}
}
}
else
{
goto v___jp_1737_;
}
v___jp_1724_:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; 
v___x_1726_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1727_ = lean_string_append(v___x_1726_, v_context_1706_);
v___x_1728_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_1729_ = lean_string_append(v___x_1727_, v___x_1728_);
v___x_1730_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__2___closed__0));
v___x_1731_ = lean_string_append(v___x_1729_, v___x_1730_);
v___x_1732_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_1733_ = lean_string_append(v___x_1731_, v___x_1732_);
v___x_1734_ = lean_string_append(v___x_1733_, v_received_1725_);
lean_dec_ref(v_received_1725_);
v___x_1735_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_1735_ == 0)
{
lean_object* v___x_1736_; 
v___x_1736_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_1710_ = v___x_1734_;
v___y_1711_ = v___x_1736_;
goto v___jp_1709_;
}
else
{
v___y_1710_ = v___x_1734_;
v___y_1711_ = v___x_1723_;
goto v___jp_1709_;
}
}
v___jp_1737_:
{
lean_object* v___x_1738_; 
v___x_1738_ = l_Lasm_JS_Data_describe(v_d_1707_);
v_received_1725_ = v___x_1738_;
goto v___jp_1724_;
}
}
v___jp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v___x_1712_ = lean_string_append(v___y_1710_, v___y_1711_);
v___x_1713_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
v___x_1714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
return v___x_1714_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1___boxed(lean_object* v_context_1753_, lean_object* v_d_1754_, lean_object* v_a_1755_){
_start:
{
lean_object* v_res_1756_; 
v_res_1756_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(v_context_1753_, v_d_1754_);
lean_dec_ref(v_context_1753_);
return v_res_1756_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(lean_object* v_context_1757_, lean_object* v_x_1758_){
_start:
{
lean_object* v_val_1761_; 
if (lean_obj_tag(v_x_1758_) == 0)
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1771_; 
v_a_1763_ = lean_ctor_get(v_x_1758_, 0);
v_isSharedCheck_1771_ = !lean_is_exclusive(v_x_1758_);
if (v_isSharedCheck_1771_ == 0)
{
v___x_1765_ = v_x_1758_;
v_isShared_1766_ = v_isSharedCheck_1771_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v_x_1758_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1771_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1768_; 
if (v_isShared_1766_ == 0)
{
v___x_1768_ = v___x_1765_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v_a_1763_);
v___x_1768_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1769_; 
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
return v___x_1769_;
}
}
}
else
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1785_; 
v_a_1772_ = lean_ctor_get(v_x_1758_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_x_1758_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1774_ = v_x_1758_;
v_isShared_1775_ = v_isSharedCheck_1785_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v_x_1758_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1785_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0_spec__1(v_context_1757_, v_a_1772_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v_a_1777_; lean_object* v___x_1779_; 
v_a_1777_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1777_);
lean_dec_ref_known(v___x_1776_, 1);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v_a_1777_);
v___x_1779_ = v___x_1774_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1777_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
v_val_1761_ = v___x_1779_;
goto v___jp_1760_;
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; 
v_a_1781_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_a_1781_);
lean_dec_ref_known(v___x_1776_, 1);
if (v_isShared_1775_ == 0)
{
lean_ctor_set_tag(v___x_1774_, 0);
lean_ctor_set(v___x_1774_, 0, v_a_1781_);
v___x_1783_ = v___x_1774_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1781_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
v_val_1761_ = v___x_1783_;
goto v___jp_1760_;
}
}
}
}
v___jp_1760_:
{
lean_object* v___x_1762_; 
v___x_1762_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1762_, 0, v_val_1761_);
return v___x_1762_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed(lean_object* v_context_1786_, lean_object* v_x_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1(v_context_1786_, v_x_1787_);
lean_dec_ref(v_context_1786_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3(lean_object* v___f_1790_, lean_object* v_x_1791_){
_start:
{
if (lean_obj_tag(v_x_1791_) == 0)
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1801_; 
lean_dec_ref(v___f_1790_);
v_a_1793_ = lean_ctor_get(v_x_1791_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v_x_1791_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1795_ = v_x_1791_;
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v_x_1791_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1801_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
lean_object* v___x_1799_; 
v___x_1799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1799_, 0, v___x_1798_);
return v___x_1799_;
}
}
}
else
{
lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1813_; 
v_isSharedCheck_1813_ = !lean_is_exclusive(v_x_1791_);
if (v_isSharedCheck_1813_ == 0)
{
lean_object* v_unused_1814_; 
v_unused_1814_ = lean_ctor_get(v_x_1791_, 0);
lean_dec(v_unused_1814_);
v___x_1803_ = v_x_1791_;
v_isShared_1804_ = v_isSharedCheck_1813_;
goto v_resetjp_1802_;
}
else
{
lean_dec(v_x_1791_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1813_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1805_; uint8_t v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1805_ = lean_unsigned_to_nat(0u);
v___x_1806_ = 0;
v___x_1807_ = lean_io_promise_new();
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v___x_1807_);
v___x_1809_ = v___x_1803_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
v___x_1811_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1805_, v___x_1806_, v___x_1810_, v___f_1790_);
return v___x_1811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3___boxed(lean_object* v___f_1815_, lean_object* v_x_1816_, lean_object* v___y_1817_){
_start:
{
lean_object* v_res_1818_; 
v_res_1818_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3(v___f_1815_, v_x_1816_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(lean_object* v_context_1819_, uint32_t v_op_1820_, uint64_t v_flags_1821_, lean_object* v_payload_1822_, lean_object* v_failurePrefix_1823_){
_start:
{
lean_object* v___f_1825_; lean_object* v___f_1826_; lean_object* v___f_1827_; lean_object* v___f_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___f_1831_; lean_object* v___f_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; lean_object* v_val_1836_; lean_object* v___x_1839_; 
lean_inc_ref(v_failurePrefix_1823_);
v___f_1825_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1825_, 0, v_failurePrefix_1823_);
v___f_1826_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_1826_, 0, v_context_1819_);
v___f_1827_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1827_, 0, v___f_1826_);
v___f_1828_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_1828_, 0, v___f_1827_);
v___x_1829_ = lean_box_uint32(v_op_1820_);
v___x_1830_ = lean_box_uint64(v_flags_1821_);
lean_inc_ref(v___f_1828_);
v___f_1831_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_1831_, 0, v_payload_1822_);
lean_closure_set(v___f_1831_, 1, v_failurePrefix_1823_);
lean_closure_set(v___f_1831_, 2, v___f_1825_);
lean_closure_set(v___f_1831_, 3, v___f_1828_);
lean_closure_set(v___f_1831_, 4, v___x_1829_);
lean_closure_set(v___f_1831_, 5, v___x_1830_);
lean_closure_set(v___f_1831_, 6, v___f_1828_);
v___f_1832_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_1832_, 0, v___f_1831_);
v___x_1833_ = lean_unsigned_to_nat(0u);
v___x_1834_ = 0;
v___x_1839_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1847_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1847_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1842_ = v___x_1839_;
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_a_1840_);
lean_dec(v___x_1839_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1847_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v___x_1845_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set_tag(v___x_1842_, 1);
v___x_1845_ = v___x_1842_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_a_1840_);
v___x_1845_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
v_val_1836_ = v___x_1845_;
goto v___jp_1835_;
}
}
}
else
{
lean_object* v_a_1848_; lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
v_a_1848_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1855_ == 0)
{
v___x_1850_ = v___x_1839_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_inc(v_a_1848_);
lean_dec(v___x_1839_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
lean_ctor_set_tag(v___x_1850_, 0);
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1848_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
v_val_1836_ = v___x_1853_;
goto v___jp_1835_;
}
}
}
v___jp_1835_:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1837_, 0, v_val_1836_);
v___x_1838_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1833_, v___x_1834_, v___x_1837_, v___f_1832_);
return v___x_1838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0___boxed(lean_object* v_context_1856_, lean_object* v_op_1857_, lean_object* v_flags_1858_, lean_object* v_payload_1859_, lean_object* v_failurePrefix_1860_, lean_object* v_a_1861_){
_start:
{
uint32_t v_op_boxed_1862_; uint64_t v_flags_boxed_1863_; lean_object* v_res_1864_; 
v_op_boxed_1862_ = lean_unbox_uint32(v_op_1857_);
lean_dec(v_op_1857_);
v_flags_boxed_1863_ = lean_unbox_uint64(v_flags_1858_);
lean_dec_ref(v_flags_1858_);
v_res_1864_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(v_context_1856_, v_op_boxed_1862_, v_flags_boxed_1863_, v_payload_1859_, v_failurePrefix_1860_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(lean_object* v_b_1865_, lean_object* v_args_1866_){
_start:
{
uint8_t v_construct_1868_; lean_object* v___x_1869_; uint32_t v___x_1870_; uint64_t v___x_1871_; uint64_t v___y_1873_; 
v_construct_1868_ = lean_ctor_get_uint8(v_b_1865_, sizeof(void*)*4);
v___x_1869_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_1865_);
v___x_1870_ = 214;
v___x_1871_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_1868_ == 0)
{
uint64_t v___x_1881_; 
v___x_1881_ = 0ULL;
v___y_1873_ = v___x_1881_;
goto v___jp_1872_;
}
else
{
uint64_t v___x_1882_; 
v___x_1882_ = 4ULL;
v___y_1873_ = v___x_1882_;
goto v___jp_1872_;
}
v___jp_1872_:
{
uint64_t v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1874_ = lean_uint64_lor(v___x_1871_, v___y_1873_);
v___x_1875_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_1865_, v_args_1866_);
v___x_1876_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_1877_ = lean_string_append(v___x_1876_, v___x_1869_);
v___x_1878_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_1879_ = lean_string_append(v___x_1877_, v___x_1878_);
v___x_1880_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0_spec__0(v___x_1869_, v___x_1870_, v___x_1874_, v___x_1875_, v___x_1879_);
return v___x_1880_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0___boxed(lean_object* v_b_1883_, lean_object* v_args_1884_, lean_object* v_a_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(v_b_1883_, v_args_1884_);
lean_dec_ref(v_b_1883_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText(lean_object* v_a_1893_){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1895_ = ((lean_object*)(l_Lasm_Web_Raw_responseText___closed__1));
v___x_1896_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_1897_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_1898_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_1898_, 0, v_a_1893_);
lean_ctor_set(v___x_1898_, 1, v___x_1897_);
v___x_1899_ = lean_array_push(v___x_1896_, v___x_1898_);
v___x_1900_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseText_spec__0(v___x_1895_, v___x_1899_);
return v___x_1900_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseText___boxed(lean_object* v_a_1901_, lean_object* v_a_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l_Lasm_Web_Raw_responseText(v_a_1901_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(lean_object* v___f_1904_, lean_object* v_bytes_1905_){
_start:
{
lean_object* v___x_1907_; uint8_t v___x_1908_; lean_object* v_val_1910_; lean_object* v___x_1913_; 
v___x_1907_ = lean_unsigned_to_nat(0u);
v___x_1908_ = 0;
v___x_1913_ = l_Lasm_JS_Wire_decode(v_bytes_1905_);
if (lean_obj_tag(v___x_1913_) == 0)
{
lean_object* v_a_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1921_; 
v_a_1914_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1916_ = v___x_1913_;
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_a_1914_);
lean_dec(v___x_1913_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1921_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v___x_1919_; 
if (v_isShared_1917_ == 0)
{
lean_ctor_set_tag(v___x_1916_, 1);
v___x_1919_ = v___x_1916_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1920_; 
v_reuseFailAlloc_1920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1920_, 0, v_a_1914_);
v___x_1919_ = v_reuseFailAlloc_1920_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
v_val_1910_ = v___x_1919_;
goto v___jp_1909_;
}
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
v_a_1922_ = lean_ctor_get(v___x_1913_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1913_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1913_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1913_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
lean_ctor_set_tag(v___x_1924_, 0);
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
v_val_1910_ = v___x_1927_;
goto v___jp_1909_;
}
}
}
v___jp_1909_:
{
lean_object* v___x_1911_; lean_object* v___x_1912_; 
v___x_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1911_, 0, v_val_1910_);
v___x_1912_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1907_, v___x_1908_, v___x_1911_, v___f_1904_);
return v___x_1912_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v___f_1930_, lean_object* v_bytes_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__0(v___f_1930_, v_bytes_1931_);
lean_dec_ref(v_bytes_1931_);
return v_res_1933_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6(lean_object* v_payload_1934_, lean_object* v_failurePrefix_1935_, lean_object* v___f_1936_, lean_object* v___f_1937_, uint32_t v_op_1938_, uint64_t v_flags_1939_, lean_object* v___f_1940_, lean_object* v_x_1941_){
_start:
{
if (lean_obj_tag(v_x_1941_) == 0)
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref(v___f_1940_);
lean_dec_ref(v___f_1937_);
lean_dec_ref(v___f_1936_);
v_a_1943_ = lean_ctor_get(v_x_1941_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v_x_1941_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1945_ = v_x_1941_;
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v_x_1941_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1951_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
lean_object* v___x_1949_; 
v___x_1949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1949_, 0, v___x_1948_);
return v___x_1949_;
}
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1993_; 
v_a_1952_ = lean_ctor_get(v_x_1941_, 0);
v_isSharedCheck_1993_ = !lean_is_exclusive(v_x_1941_);
if (v_isSharedCheck_1993_ == 0)
{
v___x_1954_ = v_x_1941_;
v_isShared_1955_ = v_isSharedCheck_1993_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v_x_1941_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1993_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
uint32_t v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; uint8_t v___x_1960_; 
v___x_1956_ = 0;
v___x_1957_ = l_Lasm_JS_Wire_encode(v_payload_1934_);
v___x_1958_ = lean_string_utf8_byte_size(v_failurePrefix_1935_);
v___x_1959_ = lean_unsigned_to_nat(0u);
v___x_1960_ = lean_nat_dec_eq(v___x_1958_, v___x_1959_);
if (v___x_1960_ == 0)
{
lean_object* v___f_1961_; lean_object* v_val_1963_; lean_object* v___x_1968_; 
lean_dec_ref(v___f_1940_);
lean_inc(v_a_1952_);
v___f_1961_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1961_, 0, v_a_1952_);
v___x_1968_ = lasm_js_call_into(v_a_1952_, v_op_1938_, v___x_1956_, v_flags_1939_, v___x_1957_, v_payload_1934_);
lean_dec_ref(v___x_1957_);
lean_dec(v_a_1952_);
if (lean_obj_tag(v___x_1968_) == 0)
{
lean_object* v_a_1969_; lean_object* v___x_1971_; 
v_a_1969_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1969_);
lean_dec_ref_known(v___x_1968_, 1);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v_a_1969_);
v___x_1971_ = v___x_1954_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
v_val_1963_ = v___x_1971_;
goto v___jp_1962_;
}
}
else
{
lean_object* v_a_1973_; lean_object* v___x_1975_; 
v_a_1973_ = lean_ctor_get(v___x_1968_, 0);
lean_inc(v_a_1973_);
lean_dec_ref_known(v___x_1968_, 1);
if (v_isShared_1955_ == 0)
{
lean_ctor_set_tag(v___x_1954_, 0);
lean_ctor_set(v___x_1954_, 0, v_a_1973_);
v___x_1975_ = v___x_1954_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_a_1973_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
v_val_1963_ = v___x_1975_;
goto v___jp_1962_;
}
}
v___jp_1962_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1964_, 0, v_val_1963_);
v___x_1965_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1959_, v___x_1960_, v___x_1964_, v___f_1961_);
v___x_1966_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1959_, v___x_1960_, v___x_1965_, v___f_1936_);
v___x_1967_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1959_, v___x_1960_, v___x_1966_, v___f_1937_);
return v___x_1967_;
}
}
else
{
lean_object* v___f_1977_; uint8_t v___x_1978_; lean_object* v_val_1980_; lean_object* v___x_1984_; 
lean_dec_ref(v___f_1937_);
lean_dec_ref(v___f_1936_);
lean_inc(v_a_1952_);
v___f_1977_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_1977_, 0, v_a_1952_);
v___x_1978_ = 0;
v___x_1984_ = lasm_js_call_into(v_a_1952_, v_op_1938_, v___x_1956_, v_flags_1939_, v___x_1957_, v_payload_1934_);
lean_dec_ref(v___x_1957_);
lean_dec(v_a_1952_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; lean_object* v___x_1987_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
lean_inc(v_a_1985_);
lean_dec_ref_known(v___x_1984_, 1);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 0, v_a_1985_);
v___x_1987_ = v___x_1954_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1985_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
v_val_1980_ = v___x_1987_;
goto v___jp_1979_;
}
}
else
{
lean_object* v_a_1989_; lean_object* v___x_1991_; 
v_a_1989_ = lean_ctor_get(v___x_1984_, 0);
lean_inc(v_a_1989_);
lean_dec_ref_known(v___x_1984_, 1);
if (v_isShared_1955_ == 0)
{
lean_ctor_set_tag(v___x_1954_, 0);
lean_ctor_set(v___x_1954_, 0, v_a_1989_);
v___x_1991_ = v___x_1954_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v_a_1989_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
v_val_1980_ = v___x_1991_;
goto v___jp_1979_;
}
}
v___jp_1979_:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1981_, 0, v_val_1980_);
v___x_1982_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1959_, v___x_1978_, v___x_1981_, v___f_1977_);
v___x_1983_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_1959_, v___x_1978_, v___x_1982_, v___f_1940_);
return v___x_1983_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6___boxed(lean_object* v_payload_1994_, lean_object* v_failurePrefix_1995_, lean_object* v___f_1996_, lean_object* v___f_1997_, lean_object* v_op_1998_, lean_object* v_flags_1999_, lean_object* v___f_2000_, lean_object* v_x_2001_, lean_object* v___y_2002_){
_start:
{
uint32_t v_op_boxed_2003_; uint64_t v_flags_boxed_2004_; lean_object* v_res_2005_; 
v_op_boxed_2003_ = lean_unbox_uint32(v_op_1998_);
lean_dec(v_op_1998_);
v_flags_boxed_2004_ = lean_unbox_uint64(v_flags_1999_);
lean_dec_ref(v_flags_1999_);
v_res_2005_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6(v_payload_1994_, v_failurePrefix_1995_, v___f_1996_, v___f_1997_, v_op_boxed_2003_, v_flags_boxed_2004_, v___f_2000_, v_x_2001_);
lean_dec_ref(v_failurePrefix_1995_);
lean_dec(v_payload_1994_);
return v_res_2005_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(lean_object* v___f_2006_, lean_object* v_x_2007_){
_start:
{
if (lean_obj_tag(v_x_2007_) == 0)
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2017_; 
lean_dec_ref(v___f_2006_);
v_a_2009_ = lean_ctor_get(v_x_2007_, 0);
v_isSharedCheck_2017_ = !lean_is_exclusive(v_x_2007_);
if (v_isSharedCheck_2017_ == 0)
{
v___x_2011_ = v_x_2007_;
v_isShared_2012_ = v_isSharedCheck_2017_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v_x_2007_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2017_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___x_2014_; 
if (v_isShared_2012_ == 0)
{
v___x_2014_ = v___x_2011_;
goto v_reusejp_2013_;
}
else
{
lean_object* v_reuseFailAlloc_2016_; 
v_reuseFailAlloc_2016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2016_, 0, v_a_2009_);
v___x_2014_ = v_reuseFailAlloc_2016_;
goto v_reusejp_2013_;
}
v_reusejp_2013_:
{
lean_object* v___x_2015_; 
v___x_2015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2015_, 0, v___x_2014_);
return v___x_2015_;
}
}
}
else
{
lean_object* v_a_2018_; lean_object* v___x_2019_; 
v_a_2018_ = lean_ctor_get(v_x_2007_, 0);
lean_inc(v_a_2018_);
lean_dec_ref_known(v_x_2007_, 1);
v___x_2019_ = lean_apply_2(v___f_2006_, v_a_2018_, lean_box(0));
return v___x_2019_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2___boxed(lean_object* v___f_2020_, lean_object* v_x_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__2(v___f_2020_, v_x_2021_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(lean_object* v_x_2024_){
_start:
{
if (lean_obj_tag(v_x_2024_) == 0)
{
lean_object* v___x_2026_; 
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v_x_2024_);
return v___x_2026_;
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2035_; 
v_a_2027_ = lean_ctor_get(v_x_2024_, 0);
v_isSharedCheck_2035_ = !lean_is_exclusive(v_x_2024_);
if (v_isSharedCheck_2035_ == 0)
{
v___x_2029_ = v_x_2024_;
v_isShared_2030_ = v_isSharedCheck_2035_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v_x_2024_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2035_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_a_2027_);
v___x_2032_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2033_; 
v___x_2033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2032_);
return v___x_2033_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1___boxed(lean_object* v_x_2036_, lean_object* v___y_2037_){
_start:
{
lean_object* v_res_2038_; 
v_res_2038_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__1(v_x_2036_);
return v_res_2038_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(lean_object* v___f_2039_, lean_object* v_x_2040_){
_start:
{
if (lean_obj_tag(v_x_2040_) == 0)
{
lean_object* v_a_2042_; lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2050_; 
lean_dec_ref(v___f_2039_);
v_a_2042_ = lean_ctor_get(v_x_2040_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_x_2040_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2044_ = v_x_2040_;
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
else
{
lean_inc(v_a_2042_);
lean_dec(v_x_2040_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2050_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2042_);
v___x_2047_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2048_; 
v___x_2048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2048_, 0, v___x_2047_);
return v___x_2048_;
}
}
}
else
{
lean_object* v___x_2052_; uint8_t v_isShared_2053_; uint8_t v_isSharedCheck_2062_; 
v_isSharedCheck_2062_ = !lean_is_exclusive(v_x_2040_);
if (v_isSharedCheck_2062_ == 0)
{
lean_object* v_unused_2063_; 
v_unused_2063_ = lean_ctor_get(v_x_2040_, 0);
lean_dec(v_unused_2063_);
v___x_2052_ = v_x_2040_;
v_isShared_2053_ = v_isSharedCheck_2062_;
goto v_resetjp_2051_;
}
else
{
lean_dec(v_x_2040_);
v___x_2052_ = lean_box(0);
v_isShared_2053_ = v_isSharedCheck_2062_;
goto v_resetjp_2051_;
}
v_resetjp_2051_:
{
lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2058_; 
v___x_2054_ = lean_unsigned_to_nat(0u);
v___x_2055_ = 0;
v___x_2056_ = lean_io_promise_new();
if (v_isShared_2053_ == 0)
{
lean_ctor_set(v___x_2052_, 0, v___x_2056_);
v___x_2058_ = v___x_2052_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v___x_2056_);
v___x_2058_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2059_, 0, v___x_2058_);
v___x_2060_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2054_, v___x_2055_, v___x_2059_, v___f_2039_);
return v___x_2060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed(lean_object* v___f_2064_, lean_object* v_x_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3(v___f_2064_, v_x_2065_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(uint32_t v_op_2073_, uint64_t v_flags_2074_, lean_object* v_payload_2075_, lean_object* v_failurePrefix_2076_){
_start:
{
lean_object* v___f_2078_; lean_object* v___f_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___f_2082_; lean_object* v___f_2083_; lean_object* v___x_2084_; uint8_t v___x_2085_; lean_object* v_val_2087_; lean_object* v___x_2090_; 
lean_inc_ref(v_failurePrefix_2076_);
v___f_2078_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2078_, 0, v_failurePrefix_2076_);
v___f_2079_ = ((lean_object*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___closed__2));
v___x_2080_ = lean_box_uint32(v_op_2073_);
v___x_2081_ = lean_box_uint64(v_flags_2074_);
v___f_2082_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2082_, 0, v_payload_2075_);
lean_closure_set(v___f_2082_, 1, v_failurePrefix_2076_);
lean_closure_set(v___f_2082_, 2, v___f_2078_);
lean_closure_set(v___f_2082_, 3, v___f_2079_);
lean_closure_set(v___f_2082_, 4, v___x_2080_);
lean_closure_set(v___f_2082_, 5, v___x_2081_);
lean_closure_set(v___f_2082_, 6, v___f_2079_);
v___f_2083_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2083_, 0, v___f_2082_);
v___x_2084_ = lean_unsigned_to_nat(0u);
v___x_2085_ = 0;
v___x_2090_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2098_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2098_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2098_ == 0)
{
v___x_2093_ = v___x_2090_;
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_a_2091_);
lean_dec(v___x_2090_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2098_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2096_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 1);
v___x_2096_ = v___x_2093_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2097_; 
v_reuseFailAlloc_2097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2097_, 0, v_a_2091_);
v___x_2096_ = v_reuseFailAlloc_2097_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
v_val_2087_ = v___x_2096_;
goto v___jp_2086_;
}
}
}
else
{
lean_object* v_a_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2106_; 
v_a_2099_ = lean_ctor_get(v___x_2090_, 0);
v_isSharedCheck_2106_ = !lean_is_exclusive(v___x_2090_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2101_ = v___x_2090_;
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_a_2099_);
lean_dec(v___x_2090_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2106_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2104_; 
if (v_isShared_2102_ == 0)
{
lean_ctor_set_tag(v___x_2101_, 0);
v___x_2104_ = v___x_2101_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_a_2099_);
v___x_2104_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
v_val_2087_ = v___x_2104_;
goto v___jp_2086_;
}
}
}
v___jp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2088_, 0, v_val_2087_);
v___x_2089_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2084_, v___x_2085_, v___x_2088_, v___f_2083_);
return v___x_2089_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg___boxed(lean_object* v_op_2107_, lean_object* v_flags_2108_, lean_object* v_payload_2109_, lean_object* v_failurePrefix_2110_, lean_object* v_a_2111_){
_start:
{
uint32_t v_op_boxed_2112_; uint64_t v_flags_boxed_2113_; lean_object* v_res_2114_; 
v_op_boxed_2112_ = lean_unbox_uint32(v_op_2107_);
lean_dec(v_op_2107_);
v_flags_boxed_2113_ = lean_unbox_uint64(v_flags_2108_);
lean_dec_ref(v_flags_2108_);
v_res_2114_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v_op_boxed_2112_, v_flags_boxed_2113_, v_payload_2109_, v_failurePrefix_2110_);
return v_res_2114_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(lean_object* v_b_2115_, lean_object* v_args_2116_){
_start:
{
uint8_t v_construct_2118_; lean_object* v___x_2119_; uint32_t v___x_2120_; uint64_t v___x_2121_; uint64_t v___y_2123_; 
v_construct_2118_ = lean_ctor_get_uint8(v_b_2115_, sizeof(void*)*4);
v___x_2119_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2115_);
v___x_2120_ = 214;
v___x_2121_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_2118_ == 0)
{
uint64_t v___x_2131_; 
v___x_2131_ = 0ULL;
v___y_2123_ = v___x_2131_;
goto v___jp_2122_;
}
else
{
uint64_t v___x_2132_; 
v___x_2132_ = 4ULL;
v___y_2123_ = v___x_2132_;
goto v___jp_2122_;
}
v___jp_2122_:
{
uint64_t v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2124_ = lean_uint64_lor(v___x_2121_, v___y_2123_);
v___x_2125_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2115_, v_args_2116_);
v___x_2126_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2127_ = lean_string_append(v___x_2126_, v___x_2119_);
lean_dec_ref(v___x_2119_);
v___x_2128_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2129_ = lean_string_append(v___x_2127_, v___x_2128_);
v___x_2130_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v___x_2120_, v___x_2124_, v___x_2125_, v___x_2129_);
return v___x_2130_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0___boxed(lean_object* v_b_2133_, lean_object* v_args_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v_res_2136_; 
v_res_2136_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(v_b_2133_, v_args_2134_);
lean_dec_ref(v_b_2133_);
return v_res_2136_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson(lean_object* v_a_2143_){
_start:
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2145_ = ((lean_object*)(l_Lasm_Web_Raw_responseJson___closed__1));
v___x_2146_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2147_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2148_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2148_, 0, v_a_2143_);
lean_ctor_set(v___x_2148_, 1, v___x_2147_);
v___x_2149_ = lean_array_push(v___x_2146_, v___x_2148_);
v___x_2150_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0(v___x_2145_, v___x_2149_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseJson___boxed(lean_object* v_a_2151_, lean_object* v_a_2152_){
_start:
{
lean_object* v_res_2153_; 
v_res_2153_ = l_Lasm_Web_Raw_responseJson(v_a_2151_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg(lean_object* v_d_2154_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2156_, 0, v_d_2154_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_d_2157_, lean_object* v_a_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___redArg(v_d_2157_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1(lean_object* v_context_2160_, lean_object* v_d_2161_){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2163_, 0, v_d_2161_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2164_, lean_object* v_d_2165_, lean_object* v_a_2166_){
_start:
{
lean_object* v_res_2167_; 
v_res_2167_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0_spec__1(v_context_2164_, v_d_2165_);
lean_dec_ref(v_context_2164_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0(lean_object* v_context_2168_, uint32_t v_op_2169_, uint64_t v_flags_2170_, lean_object* v_payload_2171_, lean_object* v_failurePrefix_2172_){
_start:
{
lean_object* v___x_2174_; 
v___x_2174_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___redArg(v_op_2169_, v_flags_2170_, v_payload_2171_, v_failurePrefix_2172_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0___boxed(lean_object* v_context_2175_, lean_object* v_op_2176_, lean_object* v_flags_2177_, lean_object* v_payload_2178_, lean_object* v_failurePrefix_2179_, lean_object* v_a_2180_){
_start:
{
uint32_t v_op_boxed_2181_; uint64_t v_flags_boxed_2182_; lean_object* v_res_2183_; 
v_op_boxed_2181_ = lean_unbox_uint32(v_op_2176_);
lean_dec(v_op_2176_);
v_flags_boxed_2182_ = lean_unbox_uint64(v_flags_2177_);
lean_dec_ref(v_flags_2177_);
v_res_2183_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseJson_spec__0_spec__0(v_context_2175_, v_op_boxed_2181_, v_flags_boxed_2182_, v_payload_2178_, v_failurePrefix_2179_);
lean_dec_ref(v_context_2175_);
return v_res_2183_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(lean_object* v___f_2184_, lean_object* v_bytes_2185_){
_start:
{
lean_object* v___x_2187_; uint8_t v___x_2188_; lean_object* v_val_2190_; lean_object* v___x_2193_; 
v___x_2187_ = lean_unsigned_to_nat(0u);
v___x_2188_ = 0;
v___x_2193_ = l_Lasm_JS_Wire_decode(v_bytes_2185_);
if (lean_obj_tag(v___x_2193_) == 0)
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
v_a_2194_ = lean_ctor_get(v___x_2193_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2193_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2193_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
lean_ctor_set_tag(v___x_2196_, 1);
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
v_val_2190_ = v___x_2199_;
goto v___jp_2189_;
}
}
}
else
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2209_; 
v_a_2202_ = lean_ctor_get(v___x_2193_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2204_ = v___x_2193_;
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2193_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2209_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v___x_2207_; 
if (v_isShared_2205_ == 0)
{
lean_ctor_set_tag(v___x_2204_, 0);
v___x_2207_ = v___x_2204_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_a_2202_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
v_val_2190_ = v___x_2207_;
goto v___jp_2189_;
}
}
}
v___jp_2189_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2191_, 0, v_val_2190_);
v___x_2192_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2187_, v___x_2188_, v___x_2191_, v___f_2184_);
return v___x_2192_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed(lean_object* v___f_2210_, lean_object* v_bytes_2211_, lean_object* v___y_2212_){
_start:
{
lean_object* v_res_2213_; 
v_res_2213_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0(v___f_2210_, v_bytes_2211_);
lean_dec_ref(v_bytes_2211_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(lean_object* v_context_2215_, lean_object* v_d_2216_){
_start:
{
lean_object* v___y_2219_; lean_object* v___y_2220_; 
if (lean_obj_tag(v_d_2216_) == 6)
{
lean_object* v_b_2224_; lean_object* v___x_2226_; uint8_t v_isShared_2227_; uint8_t v_isSharedCheck_2231_; 
v_b_2224_ = lean_ctor_get(v_d_2216_, 0);
v_isSharedCheck_2231_ = !lean_is_exclusive(v_d_2216_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2226_ = v_d_2216_;
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
else
{
lean_inc(v_b_2224_);
lean_dec(v_d_2216_);
v___x_2226_ = lean_box(0);
v_isShared_2227_ = v_isSharedCheck_2231_;
goto v_resetjp_2225_;
}
v_resetjp_2225_:
{
lean_object* v___x_2229_; 
if (v_isShared_2227_ == 0)
{
lean_ctor_set_tag(v___x_2226_, 0);
v___x_2229_ = v___x_2226_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_b_2224_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
else
{
lean_object* v___x_2232_; lean_object* v_received_2234_; 
v___x_2232_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_2216_) == 9)
{
lean_object* v_value_2248_; lean_object* v_description_2249_; uint8_t v___x_2250_; 
v_value_2248_ = lean_ctor_get(v_d_2216_, 0);
v_description_2249_ = lean_ctor_get(v_d_2216_, 1);
v___x_2250_ = lean_string_dec_eq(v_description_2249_, v___x_2232_);
if (v___x_2250_ == 0)
{
goto v___jp_2246_;
}
else
{
uint32_t v___x_2251_; uint64_t v___x_2252_; lean_object* v___x_2253_; uint32_t v___x_2254_; lean_object* v___x_2255_; 
lean_inc_n(v_value_2248_, 2);
lean_dec_ref_known(v_d_2216_, 2);
v___x_2251_ = 206;
v___x_2252_ = 0ULL;
v___x_2253_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2253_, 0, v_value_2248_);
lean_ctor_set(v___x_2253_, 1, v___x_2232_);
v___x_2254_ = lasm_js_value_handle(v_value_2248_);
lean_dec(v_value_2248_);
v___x_2255_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2251_, v___x_2252_, v___x_2253_, v___x_2254_);
lean_dec_ref_known(v___x_2253_, 2);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v_a_2256_; uint8_t v___x_2257_; 
v_a_2256_ = lean_ctor_get(v___x_2255_, 0);
lean_inc(v_a_2256_);
lean_dec_ref_known(v___x_2255_, 1);
v___x_2257_ = lean_string_validate_utf8(v_a_2256_);
if (v___x_2257_ == 0)
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
lean_dec(v_a_2256_);
v___x_2258_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_2259_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2258_);
v_received_2234_ = v___x_2259_;
goto v___jp_2233_;
}
else
{
lean_object* v___x_2260_; 
v___x_2260_ = lean_string_from_utf8_unchecked(v_a_2256_);
v_received_2234_ = v___x_2260_;
goto v___jp_2233_;
}
}
else
{
lean_object* v___x_2261_; 
lean_dec_ref_known(v___x_2255_, 1);
v___x_2261_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_2234_ = v___x_2261_;
goto v___jp_2233_;
}
}
}
else
{
goto v___jp_2246_;
}
v___jp_2233_:
{
lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; uint8_t v___x_2244_; 
v___x_2235_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2236_ = lean_string_append(v___x_2235_, v_context_2215_);
v___x_2237_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2238_ = lean_string_append(v___x_2236_, v___x_2237_);
v___x_2239_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___closed__0));
v___x_2240_ = lean_string_append(v___x_2238_, v___x_2239_);
v___x_2241_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2242_ = lean_string_append(v___x_2240_, v___x_2241_);
v___x_2243_ = lean_string_append(v___x_2242_, v_received_2234_);
lean_dec_ref(v_received_2234_);
v___x_2244_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_2244_ == 0)
{
lean_object* v___x_2245_; 
v___x_2245_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_2219_ = v___x_2243_;
v___y_2220_ = v___x_2245_;
goto v___jp_2218_;
}
else
{
v___y_2219_ = v___x_2243_;
v___y_2220_ = v___x_2232_;
goto v___jp_2218_;
}
}
v___jp_2246_:
{
lean_object* v___x_2247_; 
v___x_2247_ = l_Lasm_JS_Data_describe(v_d_2216_);
v_received_2234_ = v___x_2247_;
goto v___jp_2233_;
}
}
v___jp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2221_ = lean_string_append(v___y_2219_, v___y_2220_);
v___x_2222_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2222_, 0, v___x_2221_);
v___x_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2223_, 0, v___x_2222_);
return v___x_2223_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2262_, lean_object* v_d_2263_, lean_object* v_a_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(v_context_2262_, v_d_2263_);
lean_dec_ref(v_context_2262_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(lean_object* v_context_2266_, lean_object* v_x_2267_){
_start:
{
lean_object* v_val_2270_; 
if (lean_obj_tag(v_x_2267_) == 0)
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2280_; 
v_a_2272_ = lean_ctor_get(v_x_2267_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v_x_2267_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2274_ = v_x_2267_;
v_isShared_2275_ = v_isSharedCheck_2280_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v_x_2267_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2280_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
lean_object* v___x_2278_; 
v___x_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
return v___x_2278_;
}
}
}
else
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2294_; 
v_a_2281_ = lean_ctor_get(v_x_2267_, 0);
v_isSharedCheck_2294_ = !lean_is_exclusive(v_x_2267_);
if (v_isSharedCheck_2294_ == 0)
{
v___x_2283_ = v_x_2267_;
v_isShared_2284_ = v_isSharedCheck_2294_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v_x_2267_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2294_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2285_; 
v___x_2285_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0_spec__1(v_context_2266_, v_a_2281_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; lean_object* v___x_2288_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v_a_2286_);
v___x_2288_ = v___x_2283_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_a_2286_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
v_val_2270_ = v___x_2288_;
goto v___jp_2269_;
}
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2292_; 
v_a_2290_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2290_);
lean_dec_ref_known(v___x_2285_, 1);
if (v_isShared_2284_ == 0)
{
lean_ctor_set_tag(v___x_2283_, 0);
lean_ctor_set(v___x_2283_, 0, v_a_2290_);
v___x_2292_ = v___x_2283_;
goto v_reusejp_2291_;
}
else
{
lean_object* v_reuseFailAlloc_2293_; 
v_reuseFailAlloc_2293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2293_, 0, v_a_2290_);
v___x_2292_ = v_reuseFailAlloc_2293_;
goto v_reusejp_2291_;
}
v_reusejp_2291_:
{
v_val_2270_ = v___x_2292_;
goto v___jp_2269_;
}
}
}
}
v___jp_2269_:
{
lean_object* v___x_2271_; 
v___x_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2271_, 0, v_val_2270_);
return v___x_2271_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed(lean_object* v_context_2295_, lean_object* v_x_2296_, lean_object* v___y_2297_){
_start:
{
lean_object* v_res_2298_; 
v_res_2298_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1(v_context_2295_, v_x_2296_);
lean_dec_ref(v_context_2295_);
return v_res_2298_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(lean_object* v___f_2299_, lean_object* v_x_2300_){
_start:
{
if (lean_obj_tag(v_x_2300_) == 0)
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2310_; 
lean_dec_ref(v___f_2299_);
v_a_2302_ = lean_ctor_get(v_x_2300_, 0);
v_isSharedCheck_2310_ = !lean_is_exclusive(v_x_2300_);
if (v_isSharedCheck_2310_ == 0)
{
v___x_2304_ = v_x_2300_;
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v_x_2300_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2310_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2309_; 
v_reuseFailAlloc_2309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2309_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2309_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
lean_object* v___x_2308_; 
v___x_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2308_, 0, v___x_2307_);
return v___x_2308_;
}
}
}
else
{
lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2322_; 
v_isSharedCheck_2322_ = !lean_is_exclusive(v_x_2300_);
if (v_isSharedCheck_2322_ == 0)
{
lean_object* v_unused_2323_; 
v_unused_2323_ = lean_ctor_get(v_x_2300_, 0);
lean_dec(v_unused_2323_);
v___x_2312_ = v_x_2300_;
v_isShared_2313_ = v_isSharedCheck_2322_;
goto v_resetjp_2311_;
}
else
{
lean_dec(v_x_2300_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2322_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2314_; uint8_t v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2318_; 
v___x_2314_ = lean_unsigned_to_nat(0u);
v___x_2315_ = 0;
v___x_2316_ = lean_io_promise_new();
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2316_);
v___x_2318_ = v___x_2312_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
v___x_2320_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2314_, v___x_2315_, v___x_2319_, v___f_2299_);
return v___x_2320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed(lean_object* v___f_2324_, lean_object* v_x_2325_, lean_object* v___y_2326_){
_start:
{
lean_object* v_res_2327_; 
v_res_2327_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3(v___f_2324_, v_x_2325_);
return v_res_2327_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(lean_object* v___f_2328_, lean_object* v_x_2329_){
_start:
{
if (lean_obj_tag(v_x_2329_) == 0)
{
lean_object* v___x_2331_; 
lean_dec_ref(v___f_2328_);
v___x_2331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2331_, 0, v_x_2329_);
return v___x_2331_;
}
else
{
lean_object* v_a_2332_; lean_object* v___x_2333_; 
v_a_2332_ = lean_ctor_get(v_x_2329_, 0);
lean_inc(v_a_2332_);
lean_dec_ref_known(v_x_2329_, 1);
v___x_2333_ = lean_apply_2(v___f_2328_, v_a_2332_, lean_box(0));
return v___x_2333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed(lean_object* v___f_2334_, lean_object* v_x_2335_, lean_object* v___y_2336_){
_start:
{
lean_object* v_res_2337_; 
v_res_2337_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2(v___f_2334_, v_x_2335_);
return v_res_2337_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6(lean_object* v_payload_2338_, lean_object* v_failurePrefix_2339_, lean_object* v___f_2340_, lean_object* v___f_2341_, uint32_t v_op_2342_, uint64_t v_flags_2343_, lean_object* v___f_2344_, lean_object* v_x_2345_){
_start:
{
if (lean_obj_tag(v_x_2345_) == 0)
{
lean_object* v_a_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2355_; 
lean_dec_ref(v___f_2344_);
lean_dec_ref(v___f_2341_);
lean_dec_ref(v___f_2340_);
v_a_2347_ = lean_ctor_get(v_x_2345_, 0);
v_isSharedCheck_2355_ = !lean_is_exclusive(v_x_2345_);
if (v_isSharedCheck_2355_ == 0)
{
v___x_2349_ = v_x_2345_;
v_isShared_2350_ = v_isSharedCheck_2355_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_a_2347_);
lean_dec(v_x_2345_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2355_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2352_; 
if (v_isShared_2350_ == 0)
{
v___x_2352_ = v___x_2349_;
goto v_reusejp_2351_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_a_2347_);
v___x_2352_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2351_;
}
v_reusejp_2351_:
{
lean_object* v___x_2353_; 
v___x_2353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2352_);
return v___x_2353_;
}
}
}
else
{
lean_object* v_a_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2397_; 
v_a_2356_ = lean_ctor_get(v_x_2345_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v_x_2345_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2358_ = v_x_2345_;
v_isShared_2359_ = v_isSharedCheck_2397_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_a_2356_);
lean_dec(v_x_2345_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2397_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
uint32_t v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; uint8_t v___x_2364_; 
v___x_2360_ = 0;
v___x_2361_ = l_Lasm_JS_Wire_encode(v_payload_2338_);
v___x_2362_ = lean_string_utf8_byte_size(v_failurePrefix_2339_);
v___x_2363_ = lean_unsigned_to_nat(0u);
v___x_2364_ = lean_nat_dec_eq(v___x_2362_, v___x_2363_);
if (v___x_2364_ == 0)
{
lean_object* v___f_2365_; lean_object* v_val_2367_; lean_object* v___x_2372_; 
lean_dec_ref(v___f_2344_);
lean_inc(v_a_2356_);
v___f_2365_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2365_, 0, v_a_2356_);
v___x_2372_ = lasm_js_call_into(v_a_2356_, v_op_2342_, v___x_2360_, v_flags_2343_, v___x_2361_, v_payload_2338_);
lean_dec_ref(v___x_2361_);
lean_dec(v_a_2356_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2375_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2372_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v_a_2373_);
v___x_2375_ = v___x_2358_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_a_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
v_val_2367_ = v___x_2375_;
goto v___jp_2366_;
}
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; 
v_a_2377_ = lean_ctor_get(v___x_2372_, 0);
lean_inc(v_a_2377_);
lean_dec_ref_known(v___x_2372_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
lean_ctor_set(v___x_2358_, 0, v_a_2377_);
v___x_2379_ = v___x_2358_;
goto v_reusejp_2378_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v_a_2377_);
v___x_2379_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2378_;
}
v_reusejp_2378_:
{
v_val_2367_ = v___x_2379_;
goto v___jp_2366_;
}
}
v___jp_2366_:
{
lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; 
v___x_2368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2368_, 0, v_val_2367_);
v___x_2369_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2363_, v___x_2364_, v___x_2368_, v___f_2365_);
v___x_2370_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2363_, v___x_2364_, v___x_2369_, v___f_2340_);
v___x_2371_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2363_, v___x_2364_, v___x_2370_, v___f_2341_);
return v___x_2371_;
}
}
else
{
lean_object* v___f_2381_; uint8_t v___x_2382_; lean_object* v_val_2384_; lean_object* v___x_2388_; 
lean_dec_ref(v___f_2341_);
lean_dec_ref(v___f_2340_);
lean_inc(v_a_2356_);
v___f_2381_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__5___boxed), 3, 1);
lean_closure_set(v___f_2381_, 0, v_a_2356_);
v___x_2382_ = 0;
v___x_2388_ = lasm_js_call_into(v_a_2356_, v_op_2342_, v___x_2360_, v_flags_2343_, v___x_2361_, v_payload_2338_);
lean_dec_ref(v___x_2361_);
lean_dec(v_a_2356_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v_a_2389_; lean_object* v___x_2391_; 
v_a_2389_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2389_);
lean_dec_ref_known(v___x_2388_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v_a_2389_);
v___x_2391_ = v___x_2358_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2389_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
v_val_2384_ = v___x_2391_;
goto v___jp_2383_;
}
}
else
{
lean_object* v_a_2393_; lean_object* v___x_2395_; 
v_a_2393_ = lean_ctor_get(v___x_2388_, 0);
lean_inc(v_a_2393_);
lean_dec_ref_known(v___x_2388_, 1);
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 0);
lean_ctor_set(v___x_2358_, 0, v_a_2393_);
v___x_2395_ = v___x_2358_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2393_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
v_val_2384_ = v___x_2395_;
goto v___jp_2383_;
}
}
v___jp_2383_:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; 
v___x_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2385_, 0, v_val_2384_);
v___x_2386_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2363_, v___x_2382_, v___x_2385_, v___f_2381_);
v___x_2387_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2363_, v___x_2382_, v___x_2386_, v___f_2344_);
return v___x_2387_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6___boxed(lean_object* v_payload_2398_, lean_object* v_failurePrefix_2399_, lean_object* v___f_2400_, lean_object* v___f_2401_, lean_object* v_op_2402_, lean_object* v_flags_2403_, lean_object* v___f_2404_, lean_object* v_x_2405_, lean_object* v___y_2406_){
_start:
{
uint32_t v_op_boxed_2407_; uint64_t v_flags_boxed_2408_; lean_object* v_res_2409_; 
v_op_boxed_2407_ = lean_unbox_uint32(v_op_2402_);
lean_dec(v_op_2402_);
v_flags_boxed_2408_ = lean_unbox_uint64(v_flags_2403_);
lean_dec_ref(v_flags_2403_);
v_res_2409_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6(v_payload_2398_, v_failurePrefix_2399_, v___f_2400_, v___f_2401_, v_op_boxed_2407_, v_flags_boxed_2408_, v___f_2404_, v_x_2405_);
lean_dec_ref(v_failurePrefix_2399_);
lean_dec(v_payload_2398_);
return v_res_2409_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(lean_object* v_context_2410_, uint32_t v_op_2411_, uint64_t v_flags_2412_, lean_object* v_payload_2413_, lean_object* v_failurePrefix_2414_){
_start:
{
lean_object* v___f_2416_; lean_object* v___f_2417_; lean_object* v___f_2418_; lean_object* v___f_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___f_2422_; lean_object* v___f_2423_; lean_object* v___x_2424_; uint8_t v___x_2425_; lean_object* v_val_2427_; lean_object* v___x_2430_; 
lean_inc_ref(v_failurePrefix_2414_);
v___f_2416_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2416_, 0, v_failurePrefix_2414_);
v___f_2417_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__1___boxed), 3, 1);
lean_closure_set(v___f_2417_, 0, v_context_2410_);
v___f_2418_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__0___boxed), 3, 1);
lean_closure_set(v___f_2418_, 0, v___f_2417_);
v___f_2419_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__2___boxed), 3, 1);
lean_closure_set(v___f_2419_, 0, v___f_2418_);
v___x_2420_ = lean_box_uint32(v_op_2411_);
v___x_2421_ = lean_box_uint64(v_flags_2412_);
lean_inc_ref(v___f_2419_);
v___f_2422_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__6___boxed), 9, 7);
lean_closure_set(v___f_2422_, 0, v_payload_2413_);
lean_closure_set(v___f_2422_, 1, v_failurePrefix_2414_);
lean_closure_set(v___f_2422_, 2, v___f_2416_);
lean_closure_set(v___f_2422_, 3, v___f_2419_);
lean_closure_set(v___f_2422_, 4, v___x_2420_);
lean_closure_set(v___f_2422_, 5, v___x_2421_);
lean_closure_set(v___f_2422_, 6, v___f_2419_);
v___f_2423_ = lean_alloc_closure((void*)(l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___lam__3___boxed), 3, 1);
lean_closure_set(v___f_2423_, 0, v___f_2422_);
v___x_2424_ = lean_unsigned_to_nat(0u);
v___x_2425_ = 0;
v___x_2430_ = l___private_Lasm_JS_Core_0__Lasm_JS_ensureStarted();
if (lean_obj_tag(v___x_2430_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2433_; uint8_t v_isShared_2434_; uint8_t v_isSharedCheck_2438_; 
v_a_2431_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2438_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2438_ == 0)
{
v___x_2433_ = v___x_2430_;
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
else
{
lean_inc(v_a_2431_);
lean_dec(v___x_2430_);
v___x_2433_ = lean_box(0);
v_isShared_2434_ = v_isSharedCheck_2438_;
goto v_resetjp_2432_;
}
v_resetjp_2432_:
{
lean_object* v___x_2436_; 
if (v_isShared_2434_ == 0)
{
lean_ctor_set_tag(v___x_2433_, 1);
v___x_2436_ = v___x_2433_;
goto v_reusejp_2435_;
}
else
{
lean_object* v_reuseFailAlloc_2437_; 
v_reuseFailAlloc_2437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2437_, 0, v_a_2431_);
v___x_2436_ = v_reuseFailAlloc_2437_;
goto v_reusejp_2435_;
}
v_reusejp_2435_:
{
v_val_2427_ = v___x_2436_;
goto v___jp_2426_;
}
}
}
else
{
lean_object* v_a_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2446_; 
v_a_2439_ = lean_ctor_get(v___x_2430_, 0);
v_isSharedCheck_2446_ = !lean_is_exclusive(v___x_2430_);
if (v_isSharedCheck_2446_ == 0)
{
v___x_2441_ = v___x_2430_;
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_a_2439_);
lean_dec(v___x_2430_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2446_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v___x_2444_; 
if (v_isShared_2442_ == 0)
{
lean_ctor_set_tag(v___x_2441_, 0);
v___x_2444_ = v___x_2441_;
goto v_reusejp_2443_;
}
else
{
lean_object* v_reuseFailAlloc_2445_; 
v_reuseFailAlloc_2445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2445_, 0, v_a_2439_);
v___x_2444_ = v_reuseFailAlloc_2445_;
goto v_reusejp_2443_;
}
v_reusejp_2443_:
{
v_val_2427_ = v___x_2444_;
goto v___jp_2426_;
}
}
}
v___jp_2426_:
{
lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2428_, 0, v_val_2427_);
v___x_2429_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_2424_, v___x_2425_, v___x_2428_, v___f_2423_);
return v___x_2429_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0___boxed(lean_object* v_context_2447_, lean_object* v_op_2448_, lean_object* v_flags_2449_, lean_object* v_payload_2450_, lean_object* v_failurePrefix_2451_, lean_object* v_a_2452_){
_start:
{
uint32_t v_op_boxed_2453_; uint64_t v_flags_boxed_2454_; lean_object* v_res_2455_; 
v_op_boxed_2453_ = lean_unbox_uint32(v_op_2448_);
lean_dec(v_op_2448_);
v_flags_boxed_2454_ = lean_unbox_uint64(v_flags_2449_);
lean_dec_ref(v_flags_2449_);
v_res_2455_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(v_context_2447_, v_op_boxed_2453_, v_flags_boxed_2454_, v_payload_2450_, v_failurePrefix_2451_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(lean_object* v_b_2456_, lean_object* v_args_2457_){
_start:
{
uint8_t v_construct_2459_; lean_object* v___x_2460_; uint32_t v___x_2461_; uint64_t v___x_2462_; uint64_t v___y_2464_; 
v_construct_2459_ = lean_ctor_get_uint8(v_b_2456_, sizeof(void*)*4);
v___x_2460_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2456_);
v___x_2461_ = 214;
v___x_2462_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_construct_2459_ == 0)
{
uint64_t v___x_2472_; 
v___x_2472_ = 0ULL;
v___y_2464_ = v___x_2472_;
goto v___jp_2463_;
}
else
{
uint64_t v___x_2473_; 
v___x_2473_ = 4ULL;
v___y_2464_ = v___x_2473_;
goto v___jp_2463_;
}
v___jp_2463_:
{
uint64_t v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; 
v___x_2465_ = lean_uint64_lor(v___x_2462_, v___y_2464_);
v___x_2466_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2456_, v_args_2457_);
v___x_2467_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2468_ = lean_string_append(v___x_2467_, v___x_2460_);
v___x_2469_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2470_ = lean_string_append(v___x_2468_, v___x_2469_);
v___x_2471_ = l___private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0_spec__0(v___x_2460_, v___x_2461_, v___x_2465_, v___x_2466_, v___x_2470_);
return v___x_2471_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0___boxed(lean_object* v_b_2474_, lean_object* v_args_2475_, lean_object* v_a_2476_){
_start:
{
lean_object* v_res_2477_; 
v_res_2477_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(v_b_2474_, v_args_2475_);
lean_dec_ref(v_b_2474_);
return v_res_2477_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes(lean_object* v_a_2484_){
_start:
{
lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v___x_2486_ = ((lean_object*)(l_Lasm_Web_Raw_responseBytes___closed__1));
v___x_2487_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2488_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2489_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2489_, 0, v_a_2484_);
lean_ctor_set(v___x_2489_, 1, v___x_2488_);
v___x_2490_ = lean_array_push(v___x_2487_, v___x_2489_);
v___x_2491_ = l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_responseBytes_spec__0(v___x_2486_, v___x_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_responseBytes___boxed(lean_object* v_a_2492_, lean_object* v_a_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l_Lasm_Web_Raw_responseBytes(v_a_2492_);
return v_res_2494_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(lean_object* v_context_2496_, lean_object* v_d_2497_){
_start:
{
lean_object* v___y_2500_; lean_object* v___y_2501_; 
if (lean_obj_tag(v_d_2497_) == 9)
{
lean_object* v_value_2505_; lean_object* v___x_2506_; 
v_value_2505_ = lean_ctor_get(v_d_2497_, 0);
lean_inc(v_value_2505_);
lean_dec_ref_known(v_d_2497_, 2);
v___x_2506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2506_, 0, v_value_2505_);
return v___x_2506_;
}
else
{
lean_object* v___x_2507_; lean_object* v_received_2509_; 
v___x_2507_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_2497_) == 9)
{
lean_object* v_value_2523_; lean_object* v_description_2524_; uint8_t v___x_2525_; 
v_value_2523_ = lean_ctor_get(v_d_2497_, 0);
v_description_2524_ = lean_ctor_get(v_d_2497_, 1);
v___x_2525_ = lean_string_dec_eq(v_description_2524_, v___x_2507_);
if (v___x_2525_ == 0)
{
goto v___jp_2521_;
}
else
{
uint32_t v___x_2526_; uint64_t v___x_2527_; lean_object* v___x_2528_; uint32_t v___x_2529_; lean_object* v___x_2530_; 
lean_inc_n(v_value_2523_, 2);
lean_dec_ref_known(v_d_2497_, 2);
v___x_2526_ = 206;
v___x_2527_ = 0ULL;
v___x_2528_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2528_, 0, v_value_2523_);
lean_ctor_set(v___x_2528_, 1, v___x_2507_);
v___x_2529_ = lasm_js_value_handle(v_value_2523_);
lean_dec(v_value_2523_);
v___x_2530_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2526_, v___x_2527_, v___x_2528_, v___x_2529_);
lean_dec_ref_known(v___x_2528_, 2);
if (lean_obj_tag(v___x_2530_) == 0)
{
lean_object* v_a_2531_; uint8_t v___x_2532_; 
v_a_2531_ = lean_ctor_get(v___x_2530_, 0);
lean_inc(v_a_2531_);
lean_dec_ref_known(v___x_2530_, 1);
v___x_2532_ = lean_string_validate_utf8(v_a_2531_);
if (v___x_2532_ == 0)
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
lean_dec(v_a_2531_);
v___x_2533_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_2534_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2533_);
v_received_2509_ = v___x_2534_;
goto v___jp_2508_;
}
else
{
lean_object* v___x_2535_; 
v___x_2535_ = lean_string_from_utf8_unchecked(v_a_2531_);
v_received_2509_ = v___x_2535_;
goto v___jp_2508_;
}
}
else
{
lean_object* v___x_2536_; 
lean_dec_ref_known(v___x_2530_, 1);
v___x_2536_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_2509_ = v___x_2536_;
goto v___jp_2508_;
}
}
}
else
{
goto v___jp_2521_;
}
v___jp_2508_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; uint8_t v___x_2519_; 
v___x_2510_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2511_ = lean_string_append(v___x_2510_, v_context_2496_);
v___x_2512_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2513_ = lean_string_append(v___x_2511_, v___x_2512_);
v___x_2514_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___closed__0));
v___x_2515_ = lean_string_append(v___x_2513_, v___x_2514_);
v___x_2516_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2517_ = lean_string_append(v___x_2515_, v___x_2516_);
v___x_2518_ = lean_string_append(v___x_2517_, v_received_2509_);
lean_dec_ref(v_received_2509_);
v___x_2519_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_2519_ == 0)
{
lean_object* v___x_2520_; 
v___x_2520_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_2500_ = v___x_2518_;
v___y_2501_ = v___x_2520_;
goto v___jp_2499_;
}
else
{
v___y_2500_ = v___x_2518_;
v___y_2501_ = v___x_2507_;
goto v___jp_2499_;
}
}
v___jp_2521_:
{
lean_object* v___x_2522_; 
v___x_2522_ = l_Lasm_JS_Data_describe(v_d_2497_);
v_received_2509_ = v___x_2522_;
goto v___jp_2508_;
}
}
v___jp_2499_:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; 
v___x_2502_ = lean_string_append(v___y_2500_, v___y_2501_);
v___x_2503_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
v___x_2504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
return v___x_2504_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0___boxed(lean_object* v_context_2537_, lean_object* v_d_2538_, lean_object* v_a_2539_){
_start:
{
lean_object* v_res_2540_; 
v_res_2540_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(v_context_2537_, v_d_2538_);
lean_dec_ref(v_context_2537_);
return v_res_2540_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(lean_object* v_b_2541_, lean_object* v_args_2542_, uint8_t v_await_2543_){
_start:
{
uint64_t v___y_2546_; uint64_t v___y_2547_; uint64_t v___x_2590_; uint64_t v___y_2592_; 
v___x_2590_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_await_2543_ == 0)
{
uint64_t v___x_2597_; 
v___x_2597_ = 0ULL;
v___y_2592_ = v___x_2597_;
goto v___jp_2591_;
}
else
{
uint64_t v___x_2598_; 
v___x_2598_ = 2ULL;
v___y_2592_ = v___x_2598_;
goto v___jp_2591_;
}
v___jp_2545_:
{
uint64_t v_flags_2548_; uint32_t v___x_2549_; lean_object* v___x_2550_; uint32_t v___x_2551_; lean_object* v___x_2552_; 
v_flags_2548_ = lean_uint64_lor(v___y_2546_, v___y_2547_);
v___x_2549_ = 214;
v___x_2550_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2541_, v_args_2542_);
v___x_2551_ = 0;
v___x_2552_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2549_, v_flags_2548_, v___x_2550_, v___x_2551_);
lean_dec(v___x_2550_);
if (lean_obj_tag(v___x_2552_) == 0)
{
if (lean_obj_tag(v___x_2552_) == 0)
{
lean_object* v_a_2553_; lean_object* v___x_2554_; 
v_a_2553_ = lean_ctor_get(v___x_2552_, 0);
lean_inc(v_a_2553_);
lean_dec_ref_known(v___x_2552_, 1);
v___x_2554_ = l_Lasm_JS_Wire_decode(v_a_2553_);
lean_dec(v_a_2553_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v_a_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
lean_inc(v_a_2555_);
lean_dec_ref_known(v___x_2554_, 1);
v___x_2556_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2541_);
v___x_2557_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0_spec__0(v___x_2556_, v_a_2555_);
lean_dec_ref(v___x_2556_);
return v___x_2557_;
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
v_a_2558_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2554_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2554_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
v_a_2566_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2552_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2552_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
lean_ctor_set_tag(v___x_2568_, 1);
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2589_; 
v_a_2574_ = lean_ctor_get(v___x_2552_, 0);
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2552_);
if (v_isSharedCheck_2589_ == 0)
{
v___x_2576_ = v___x_2552_;
v_isShared_2577_ = v_isSharedCheck_2589_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2552_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2589_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2587_; 
v___x_2578_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2579_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2541_);
v___x_2580_ = lean_string_append(v___x_2578_, v___x_2579_);
lean_dec_ref(v___x_2579_);
v___x_2581_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2582_ = lean_string_append(v___x_2580_, v___x_2581_);
v___x_2583_ = lean_io_error_to_string(v_a_2574_);
v___x_2584_ = lean_string_append(v___x_2582_, v___x_2583_);
lean_dec_ref(v___x_2583_);
v___x_2585_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2585_, 0, v___x_2584_);
if (v_isShared_2577_ == 0)
{
lean_ctor_set(v___x_2576_, 0, v___x_2585_);
v___x_2587_ = v___x_2576_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2585_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
}
v___jp_2591_:
{
uint8_t v_construct_2593_; uint64_t v___x_2594_; 
v_construct_2593_ = lean_ctor_get_uint8(v_b_2541_, sizeof(void*)*4);
v___x_2594_ = lean_uint64_lor(v___x_2590_, v___y_2592_);
if (v_construct_2593_ == 0)
{
uint64_t v___x_2595_; 
v___x_2595_ = 0ULL;
v___y_2546_ = v___x_2594_;
v___y_2547_ = v___x_2595_;
goto v___jp_2545_;
}
else
{
uint64_t v___x_2596_; 
v___x_2596_ = 4ULL;
v___y_2546_ = v___x_2594_;
v___y_2547_ = v___x_2596_;
goto v___jp_2545_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0___boxed(lean_object* v_b_2599_, lean_object* v_args_2600_, lean_object* v_await_2601_, lean_object* v_a_2602_){
_start:
{
uint8_t v_await_boxed_2603_; lean_object* v_res_2604_; 
v_await_boxed_2603_ = lean_unbox(v_await_2601_);
v_res_2604_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(v_b_2599_, v_args_2600_, v_await_boxed_2603_);
lean_dec_ref(v_b_2599_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController(){
_start:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; uint8_t v___x_2614_; lean_object* v___x_2615_; 
v___x_2612_ = ((lean_object*)(l_Lasm_Web_Raw_abortController___closed__1));
v___x_2613_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2614_ = 1;
v___x_2615_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortController_spec__0(v___x_2612_, v___x_2613_, v___x_2614_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortController___boxed(lean_object* v_a_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lasm_Web_Raw_abortController();
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(lean_object* v_context_2619_, lean_object* v_d_2620_){
_start:
{
lean_object* v___y_2623_; lean_object* v___y_2624_; 
if (lean_obj_tag(v_d_2620_) == 9)
{
lean_object* v_value_2628_; lean_object* v___x_2629_; 
v_value_2628_ = lean_ctor_get(v_d_2620_, 0);
lean_inc(v_value_2628_);
lean_dec_ref_known(v_d_2620_, 2);
v___x_2629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2629_, 0, v_value_2628_);
return v___x_2629_;
}
else
{
lean_object* v___x_2630_; lean_object* v_received_2632_; 
v___x_2630_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_2620_) == 9)
{
lean_object* v_value_2646_; lean_object* v_description_2647_; uint8_t v___x_2648_; 
v_value_2646_ = lean_ctor_get(v_d_2620_, 0);
v_description_2647_ = lean_ctor_get(v_d_2620_, 1);
v___x_2648_ = lean_string_dec_eq(v_description_2647_, v___x_2630_);
if (v___x_2648_ == 0)
{
goto v___jp_2644_;
}
else
{
uint32_t v___x_2649_; uint64_t v___x_2650_; lean_object* v___x_2651_; uint32_t v___x_2652_; lean_object* v___x_2653_; 
lean_inc_n(v_value_2646_, 2);
lean_dec_ref_known(v_d_2620_, 2);
v___x_2649_ = 206;
v___x_2650_ = 0ULL;
v___x_2651_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2651_, 0, v_value_2646_);
lean_ctor_set(v___x_2651_, 1, v___x_2630_);
v___x_2652_ = lasm_js_value_handle(v_value_2646_);
lean_dec(v_value_2646_);
v___x_2653_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2649_, v___x_2650_, v___x_2651_, v___x_2652_);
lean_dec_ref_known(v___x_2651_, 2);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v_a_2654_; uint8_t v___x_2655_; 
v_a_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_a_2654_);
lean_dec_ref_known(v___x_2653_, 1);
v___x_2655_ = lean_string_validate_utf8(v_a_2654_);
if (v___x_2655_ == 0)
{
lean_object* v___x_2656_; lean_object* v___x_2657_; 
lean_dec(v_a_2654_);
v___x_2656_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_2657_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2656_);
v_received_2632_ = v___x_2657_;
goto v___jp_2631_;
}
else
{
lean_object* v___x_2658_; 
v___x_2658_ = lean_string_from_utf8_unchecked(v_a_2654_);
v_received_2632_ = v___x_2658_;
goto v___jp_2631_;
}
}
else
{
lean_object* v___x_2659_; 
lean_dec_ref_known(v___x_2653_, 1);
v___x_2659_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_2632_ = v___x_2659_;
goto v___jp_2631_;
}
}
}
else
{
goto v___jp_2644_;
}
v___jp_2631_:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2633_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2634_ = lean_string_append(v___x_2633_, v_context_2619_);
v___x_2635_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2636_ = lean_string_append(v___x_2634_, v___x_2635_);
v___x_2637_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___closed__0));
v___x_2638_ = lean_string_append(v___x_2636_, v___x_2637_);
v___x_2639_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2640_ = lean_string_append(v___x_2638_, v___x_2639_);
v___x_2641_ = lean_string_append(v___x_2640_, v_received_2632_);
lean_dec_ref(v_received_2632_);
v___x_2642_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_2642_ == 0)
{
lean_object* v___x_2643_; 
v___x_2643_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_2623_ = v___x_2641_;
v___y_2624_ = v___x_2643_;
goto v___jp_2622_;
}
else
{
v___y_2623_ = v___x_2641_;
v___y_2624_ = v___x_2630_;
goto v___jp_2622_;
}
}
v___jp_2644_:
{
lean_object* v___x_2645_; 
v___x_2645_ = l_Lasm_JS_Data_describe(v_d_2620_);
v_received_2632_ = v___x_2645_;
goto v___jp_2631_;
}
}
v___jp_2622_:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2625_ = lean_string_append(v___y_2623_, v___y_2624_);
v___x_2626_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2625_);
v___x_2627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2626_);
return v___x_2627_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0___boxed(lean_object* v_context_2660_, lean_object* v_d_2661_, lean_object* v_a_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(v_context_2660_, v_d_2661_);
lean_dec_ref(v_context_2660_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(lean_object* v_b_2664_, lean_object* v_args_2665_, uint8_t v_await_2666_){
_start:
{
uint64_t v___y_2669_; uint64_t v___y_2670_; uint64_t v___x_2713_; uint64_t v___y_2715_; 
v___x_2713_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
if (v_await_2666_ == 0)
{
uint64_t v___x_2720_; 
v___x_2720_ = 0ULL;
v___y_2715_ = v___x_2720_;
goto v___jp_2714_;
}
else
{
uint64_t v___x_2721_; 
v___x_2721_ = 2ULL;
v___y_2715_ = v___x_2721_;
goto v___jp_2714_;
}
v___jp_2668_:
{
uint64_t v_flags_2671_; uint32_t v___x_2672_; lean_object* v___x_2673_; uint32_t v___x_2674_; lean_object* v___x_2675_; 
v_flags_2671_ = lean_uint64_lor(v___y_2669_, v___y_2670_);
v___x_2672_ = 214;
v___x_2673_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2664_, v_args_2665_);
v___x_2674_ = 0;
v___x_2675_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2672_, v_flags_2671_, v___x_2673_, v___x_2674_);
lean_dec(v___x_2673_);
if (lean_obj_tag(v___x_2675_) == 0)
{
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v_a_2676_; lean_object* v___x_2677_; 
v_a_2676_ = lean_ctor_get(v___x_2675_, 0);
lean_inc(v_a_2676_);
lean_dec_ref_known(v___x_2675_, 1);
v___x_2677_ = l_Lasm_JS_Wire_decode(v_a_2676_);
lean_dec(v_a_2676_);
if (lean_obj_tag(v___x_2677_) == 0)
{
lean_object* v_a_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; 
v_a_2678_ = lean_ctor_get(v___x_2677_, 0);
lean_inc(v_a_2678_);
lean_dec_ref_known(v___x_2677_, 1);
v___x_2679_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2664_);
v___x_2680_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0_spec__0(v___x_2679_, v_a_2678_);
lean_dec_ref(v___x_2679_);
return v___x_2680_;
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
v_a_2681_ = lean_ctor_get(v___x_2677_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2677_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2677_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2677_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
else
{
lean_object* v_a_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2696_; 
v_a_2689_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2696_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2691_ = v___x_2675_;
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_a_2689_);
lean_dec(v___x_2675_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2696_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2694_; 
if (v_isShared_2692_ == 0)
{
lean_ctor_set_tag(v___x_2691_, 1);
v___x_2694_ = v___x_2691_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2695_; 
v_reuseFailAlloc_2695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2695_, 0, v_a_2689_);
v___x_2694_ = v_reuseFailAlloc_2695_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
return v___x_2694_;
}
}
}
}
else
{
lean_object* v_a_2697_; lean_object* v___x_2699_; uint8_t v_isShared_2700_; uint8_t v_isSharedCheck_2712_; 
v_a_2697_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2712_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2712_ == 0)
{
v___x_2699_ = v___x_2675_;
v_isShared_2700_ = v_isSharedCheck_2712_;
goto v_resetjp_2698_;
}
else
{
lean_inc(v_a_2697_);
lean_dec(v___x_2675_);
v___x_2699_ = lean_box(0);
v_isShared_2700_ = v_isSharedCheck_2712_;
goto v_resetjp_2698_;
}
v_resetjp_2698_:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2710_; 
v___x_2701_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2702_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2664_);
v___x_2703_ = lean_string_append(v___x_2701_, v___x_2702_);
lean_dec_ref(v___x_2702_);
v___x_2704_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2705_ = lean_string_append(v___x_2703_, v___x_2704_);
v___x_2706_ = lean_io_error_to_string(v_a_2697_);
v___x_2707_ = lean_string_append(v___x_2705_, v___x_2706_);
lean_dec_ref(v___x_2706_);
v___x_2708_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2707_);
if (v_isShared_2700_ == 0)
{
lean_ctor_set(v___x_2699_, 0, v___x_2708_);
v___x_2710_ = v___x_2699_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2711_; 
v_reuseFailAlloc_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2711_, 0, v___x_2708_);
v___x_2710_ = v_reuseFailAlloc_2711_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
return v___x_2710_;
}
}
}
}
v___jp_2714_:
{
uint8_t v_construct_2716_; uint64_t v___x_2717_; 
v_construct_2716_ = lean_ctor_get_uint8(v_b_2664_, sizeof(void*)*4);
v___x_2717_ = lean_uint64_lor(v___x_2713_, v___y_2715_);
if (v_construct_2716_ == 0)
{
uint64_t v___x_2718_; 
v___x_2718_ = 0ULL;
v___y_2669_ = v___x_2717_;
v___y_2670_ = v___x_2718_;
goto v___jp_2668_;
}
else
{
uint64_t v___x_2719_; 
v___x_2719_ = 4ULL;
v___y_2669_ = v___x_2717_;
v___y_2670_ = v___x_2719_;
goto v___jp_2668_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0___boxed(lean_object* v_b_2722_, lean_object* v_args_2723_, lean_object* v_await_2724_, lean_object* v_a_2725_){
_start:
{
uint8_t v_await_boxed_2726_; lean_object* v_res_2727_; 
v_await_boxed_2726_ = lean_unbox(v_await_2724_);
v_res_2727_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v_b_2722_, v_args_2723_, v_await_boxed_2726_);
lean_dec_ref(v_b_2722_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal(lean_object* v_a_2734_){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; uint8_t v___x_2741_; lean_object* v___x_2742_; 
v___x_2736_ = ((lean_object*)(l_Lasm_Web_Raw_abortSignal___closed__1));
v___x_2737_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2738_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2739_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2739_, 0, v_a_2734_);
lean_ctor_set(v___x_2739_, 1, v___x_2738_);
v___x_2740_ = lean_array_push(v___x_2737_, v___x_2739_);
v___x_2741_ = 1;
v___x_2742_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v___x_2736_, v___x_2740_, v___x_2741_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abortSignal___boxed(lean_object* v_a_2743_, lean_object* v_a_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l_Lasm_Web_Raw_abortSignal(v_a_2743_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___redArg(){
_start:
{
lean_object* v___x_2747_; lean_object* v___x_2748_; 
v___x_2747_ = lean_box(0);
v___x_2748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2748_, 0, v___x_2747_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___redArg___boxed(lean_object* v_a_2749_){
_start:
{
lean_object* v_res_2750_; 
v_res_2750_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___redArg();
return v_res_2750_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(lean_object* v_b_2751_, lean_object* v_args_2752_, uint8_t v_await_2753_){
_start:
{
uint64_t v___y_2756_; uint64_t v___y_2757_; uint64_t v___x_2798_; uint64_t v___y_2800_; 
v___x_2798_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_2753_ == 0)
{
uint64_t v___x_2805_; 
v___x_2805_ = 0ULL;
v___y_2800_ = v___x_2805_;
goto v___jp_2799_;
}
else
{
uint64_t v___x_2806_; 
v___x_2806_ = 2ULL;
v___y_2800_ = v___x_2806_;
goto v___jp_2799_;
}
v___jp_2755_:
{
uint64_t v_flags_2758_; uint32_t v___x_2759_; lean_object* v___x_2760_; uint32_t v___x_2761_; lean_object* v___x_2762_; 
v_flags_2758_ = lean_uint64_lor(v___y_2756_, v___y_2757_);
v___x_2759_ = 214;
v___x_2760_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_payload(v_b_2751_, v_args_2752_);
v___x_2761_ = 0;
v___x_2762_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2759_, v_flags_2758_, v___x_2760_, v___x_2761_);
lean_dec(v___x_2760_);
if (lean_obj_tag(v___x_2762_) == 0)
{
if (lean_obj_tag(v___x_2762_) == 0)
{
lean_object* v_a_2763_; lean_object* v___x_2764_; 
v_a_2763_ = lean_ctor_get(v___x_2762_, 0);
lean_inc(v_a_2763_);
lean_dec_ref_known(v___x_2762_, 1);
v___x_2764_ = l_Lasm_JS_Wire_decode(v_a_2763_);
lean_dec(v_a_2763_);
if (lean_obj_tag(v___x_2764_) == 0)
{
lean_object* v___x_2765_; 
lean_dec_ref_known(v___x_2764_, 1);
v___x_2765_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___redArg();
return v___x_2765_;
}
else
{
lean_object* v_a_2766_; lean_object* v___x_2768_; uint8_t v_isShared_2769_; uint8_t v_isSharedCheck_2773_; 
v_a_2766_ = lean_ctor_get(v___x_2764_, 0);
v_isSharedCheck_2773_ = !lean_is_exclusive(v___x_2764_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2768_ = v___x_2764_;
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
else
{
lean_inc(v_a_2766_);
lean_dec(v___x_2764_);
v___x_2768_ = lean_box(0);
v_isShared_2769_ = v_isSharedCheck_2773_;
goto v_resetjp_2767_;
}
v_resetjp_2767_:
{
lean_object* v___x_2771_; 
if (v_isShared_2769_ == 0)
{
v___x_2771_ = v___x_2768_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_a_2766_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
else
{
lean_object* v_a_2774_; lean_object* v___x_2776_; uint8_t v_isShared_2777_; uint8_t v_isSharedCheck_2781_; 
v_a_2774_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2781_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2776_ = v___x_2762_;
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
else
{
lean_inc(v_a_2774_);
lean_dec(v___x_2762_);
v___x_2776_ = lean_box(0);
v_isShared_2777_ = v_isSharedCheck_2781_;
goto v_resetjp_2775_;
}
v_resetjp_2775_:
{
lean_object* v___x_2779_; 
if (v_isShared_2777_ == 0)
{
lean_ctor_set_tag(v___x_2776_, 1);
v___x_2779_ = v___x_2776_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v_a_2774_);
v___x_2779_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
return v___x_2779_;
}
}
}
}
else
{
lean_object* v_a_2782_; lean_object* v___x_2784_; uint8_t v_isShared_2785_; uint8_t v_isSharedCheck_2797_; 
v_a_2782_ = lean_ctor_get(v___x_2762_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2784_ = v___x_2762_;
v_isShared_2785_ = v_isSharedCheck_2797_;
goto v_resetjp_2783_;
}
else
{
lean_inc(v_a_2782_);
lean_dec(v___x_2762_);
v___x_2784_ = lean_box(0);
v_isShared_2785_ = v_isSharedCheck_2797_;
goto v_resetjp_2783_;
}
v_resetjp_2783_:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2795_; 
v___x_2786_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2787_ = l___private_Lasm_JS_Core_0__Lasm_JS_Binding_context(v_b_2751_);
v___x_2788_ = lean_string_append(v___x_2786_, v___x_2787_);
lean_dec_ref(v___x_2787_);
v___x_2789_ = ((lean_object*)(l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__1));
v___x_2790_ = lean_string_append(v___x_2788_, v___x_2789_);
v___x_2791_ = lean_io_error_to_string(v_a_2782_);
v___x_2792_ = lean_string_append(v___x_2790_, v___x_2791_);
lean_dec_ref(v___x_2791_);
v___x_2793_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2792_);
if (v_isShared_2785_ == 0)
{
lean_ctor_set(v___x_2784_, 0, v___x_2793_);
v___x_2795_ = v___x_2784_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v___x_2793_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
}
v___jp_2799_:
{
uint8_t v_construct_2801_; uint64_t v___x_2802_; 
v_construct_2801_ = lean_ctor_get_uint8(v_b_2751_, sizeof(void*)*4);
v___x_2802_ = lean_uint64_lor(v___x_2798_, v___y_2800_);
if (v_construct_2801_ == 0)
{
uint64_t v___x_2803_; 
v___x_2803_ = 0ULL;
v___y_2756_ = v___x_2802_;
v___y_2757_ = v___x_2803_;
goto v___jp_2755_;
}
else
{
uint64_t v___x_2804_; 
v___x_2804_ = 4ULL;
v___y_2756_ = v___x_2802_;
v___y_2757_ = v___x_2804_;
goto v___jp_2755_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0___boxed(lean_object* v_b_2807_, lean_object* v_args_2808_, lean_object* v_await_2809_, lean_object* v_a_2810_){
_start:
{
uint8_t v_await_boxed_2811_; lean_object* v_res_2812_; 
v_await_boxed_2811_ = lean_unbox(v_await_2809_);
v_res_2812_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(v_b_2807_, v_args_2808_, v_await_boxed_2811_);
lean_dec_ref(v_b_2807_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort(lean_object* v_a_2819_, lean_object* v_a_2820_){
_start:
{
lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___y_2828_; 
v___x_2822_ = ((lean_object*)(l_Lasm_Web_Raw_abort___closed__1));
v___x_2823_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2824_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2825_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2825_, 0, v_a_2819_);
lean_ctor_set(v___x_2825_, 1, v___x_2824_);
v___x_2826_ = lean_array_push(v___x_2823_, v___x_2825_);
if (lean_obj_tag(v_a_2820_) == 0)
{
lean_object* v___x_2832_; 
v___x_2832_ = lean_box(1);
v___y_2828_ = v___x_2832_;
goto v___jp_2827_;
}
else
{
lean_object* v_val_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2840_; 
v_val_2833_ = lean_ctor_get(v_a_2820_, 0);
v_isSharedCheck_2840_ = !lean_is_exclusive(v_a_2820_);
if (v_isSharedCheck_2840_ == 0)
{
v___x_2835_ = v_a_2820_;
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_val_2833_);
lean_dec(v_a_2820_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2840_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
lean_object* v___x_2838_; 
if (v_isShared_2836_ == 0)
{
lean_ctor_set_tag(v___x_2835_, 4);
v___x_2838_ = v___x_2835_;
goto v_reusejp_2837_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v_val_2833_);
v___x_2838_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2837_;
}
v_reusejp_2837_:
{
v___y_2828_ = v___x_2838_;
goto v___jp_2827_;
}
}
}
v___jp_2827_:
{
lean_object* v___x_2829_; uint8_t v___x_2830_; lean_object* v___x_2831_; 
v___x_2829_ = lean_array_push(v___x_2826_, v___y_2828_);
v___x_2830_ = 1;
v___x_2831_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0(v___x_2822_, v___x_2829_, v___x_2830_);
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_abort___boxed(lean_object* v_a_2841_, lean_object* v_a_2842_, lean_object* v_a_2843_){
_start:
{
lean_object* v_res_2844_; 
v_res_2844_ = l_Lasm_Web_Raw_abort(v_a_2841_, v_a_2842_);
return v_res_2844_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0(lean_object* v_context_2845_, lean_object* v_d_2846_){
_start:
{
lean_object* v___x_2848_; 
v___x_2848_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___redArg();
return v___x_2848_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0___boxed(lean_object* v_context_2849_, lean_object* v_d_2850_, lean_object* v_a_2851_){
_start:
{
lean_object* v_res_2852_; 
v_res_2852_ = l_Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abort_spec__0_spec__0(v_context_2849_, v_d_2850_);
lean_dec(v_d_2850_);
lean_dec_ref(v_context_2849_);
return v_res_2852_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal(double v_a_2859_){
_start:
{
lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; uint8_t v___x_2865_; lean_object* v___x_2866_; 
v___x_2861_ = ((lean_object*)(l_Lasm_Web_Raw_timeoutSignal___closed__1));
v___x_2862_ = ((lean_object*)(l_Lasm_Web_Raw_fetch___closed__3));
v___x_2863_ = lean_alloc_ctor(3, 0, 8);
lean_ctor_set_float(v___x_2863_, 0, v_a_2859_);
v___x_2864_ = lean_array_push(v___x_2862_, v___x_2863_);
v___x_2865_ = 1;
v___x_2866_ = l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_abortSignal_spec__0(v___x_2861_, v___x_2864_, v___x_2865_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Raw_timeoutSignal___boxed(lean_object* v_a_2867_, lean_object* v_a_2868_){
_start:
{
double v_a_84__boxed_2869_; lean_object* v_res_2870_; 
v_a_84__boxed_2869_ = lean_unbox_float(v_a_2867_);
lean_dec_ref(v_a_2867_);
v_res_2870_ = l_Lasm_Web_Raw_timeoutSignal(v_a_84__boxed_2869_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetch(lean_object* v_url_2871_, lean_object* v_init_2872_){
_start:
{
lean_object* v___x_2874_; 
v___x_2874_ = l_Lasm_Web_Raw_fetch(v_url_2871_, v_init_2872_);
return v___x_2874_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetch___boxed(lean_object* v_url_2875_, lean_object* v_init_2876_, lean_object* v_a_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lasm_Web_fetch(v_url_2875_, v_init_2876_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info(lean_object* v_r_2879_){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Lasm_Web_Raw_responseInfo(v_r_2879_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_info___boxed(lean_object* v_r_2882_, lean_object* v_a_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l_Lasm_Web_Response_info(v_r_2882_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(lean_object* v_context_2885_, lean_object* v_d_2886_){
_start:
{
lean_object* v___y_2889_; lean_object* v___y_2890_; lean_object* v___y_2895_; lean_object* v_received_2896_; lean_object* v___y_2915_; lean_object* v_a_2918_; lean_object* v_a_2943_; 
switch(lean_obj_tag(v_d_2886_))
{
case 3:
{
double v_n_2949_; lean_object* v___x_2950_; 
v_n_2949_ = lean_ctor_get_float(v_d_2886_, 0);
v___x_2950_ = l___private_Lasm_JS_Core_0__Lasm_JS_floatToInt_x3f(v_n_2949_);
if (lean_obj_tag(v___x_2950_) == 0)
{
lean_object* v___x_2951_; 
v___x_2951_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__3));
v_a_2918_ = v___x_2951_;
goto v___jp_2917_;
}
else
{
lean_object* v_val_2952_; 
v_val_2952_ = lean_ctor_get(v___x_2950_, 0);
lean_inc(v_val_2952_);
lean_dec_ref_known(v___x_2950_, 1);
v_a_2943_ = v_val_2952_;
goto v___jp_2942_;
}
}
case 5:
{
lean_object* v_i_2953_; 
v_i_2953_ = lean_ctor_get(v_d_2886_, 0);
lean_inc(v_i_2953_);
v_a_2943_ = v_i_2953_;
goto v___jp_2942_;
}
default: 
{
lean_object* v___x_2954_; 
v___x_2954_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v_a_2918_ = v___x_2954_;
goto v___jp_2917_;
}
}
v___jp_2888_:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; 
v___x_2891_ = lean_string_append(v___y_2889_, v___y_2890_);
lean_dec_ref(v___y_2890_);
v___x_2892_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_2892_, 0, v___x_2891_);
v___x_2893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2893_, 0, v___x_2892_);
return v___x_2893_;
}
v___jp_2894_:
{
lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; uint8_t v___x_2908_; 
v___x_2897_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_2898_ = lean_string_append(v___x_2897_, v_context_2885_);
v___x_2899_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_2900_ = lean_string_append(v___x_2898_, v___x_2899_);
v___x_2901_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__0));
v___x_2902_ = lean_string_append(v___x_2900_, v___x_2901_);
v___x_2903_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_2904_ = lean_string_append(v___x_2902_, v___x_2903_);
v___x_2905_ = lean_string_append(v___x_2904_, v_received_2896_);
lean_dec_ref(v_received_2896_);
v___x_2906_ = lean_string_utf8_byte_size(v___y_2895_);
v___x_2907_ = lean_unsigned_to_nat(0u);
v___x_2908_ = lean_nat_dec_eq(v___x_2906_, v___x_2907_);
if (v___x_2908_ == 0)
{
lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2909_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__4___closed__1));
v___x_2910_ = lean_string_append(v___x_2909_, v___y_2895_);
v___x_2911_ = ((lean_object*)(l_Prod_repr___at___00Array_repr___at___00Lasm_Web_instReprResponseInfo_repr_spec__0_spec__0___redArg___closed__4));
v___x_2912_ = lean_string_append(v___x_2910_, v___x_2911_);
v___y_2889_ = v___x_2905_;
v___y_2890_ = v___x_2912_;
goto v___jp_2888_;
}
else
{
lean_object* v___x_2913_; 
v___x_2913_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___y_2889_ = v___x_2905_;
v___y_2890_ = v___x_2913_;
goto v___jp_2888_;
}
}
v___jp_2914_:
{
lean_object* v___x_2916_; 
v___x_2916_ = l_Lasm_JS_Data_describe(v_d_2886_);
v___y_2895_ = v___y_2915_;
v_received_2896_ = v___x_2916_;
goto v___jp_2894_;
}
v___jp_2917_:
{
if (lean_obj_tag(v_d_2886_) == 9)
{
lean_object* v_value_2919_; lean_object* v_description_2920_; lean_object* v___x_2921_; uint8_t v___x_2922_; 
v_value_2919_ = lean_ctor_get(v_d_2886_, 0);
v_description_2920_ = lean_ctor_get(v_d_2886_, 1);
v___x_2921_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2922_ = lean_string_dec_eq(v_description_2920_, v___x_2921_);
if (v___x_2922_ == 0)
{
v___y_2915_ = v_a_2918_;
goto v___jp_2914_;
}
else
{
lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2939_; 
lean_inc(v_value_2919_);
v_isSharedCheck_2939_ = !lean_is_exclusive(v_d_2886_);
if (v_isSharedCheck_2939_ == 0)
{
lean_object* v_unused_2940_; lean_object* v_unused_2941_; 
v_unused_2940_ = lean_ctor_get(v_d_2886_, 1);
lean_dec(v_unused_2940_);
v_unused_2941_ = lean_ctor_get(v_d_2886_, 0);
lean_dec(v_unused_2941_);
v___x_2924_ = v_d_2886_;
v_isShared_2925_ = v_isSharedCheck_2939_;
goto v_resetjp_2923_;
}
else
{
lean_dec(v_d_2886_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2939_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
uint32_t v___x_2926_; uint64_t v___x_2927_; lean_object* v___x_2929_; 
v___x_2926_ = 206;
v___x_2927_ = 0ULL;
lean_inc(v_value_2919_);
if (v_isShared_2925_ == 0)
{
lean_ctor_set(v___x_2924_, 1, v___x_2921_);
v___x_2929_ = v___x_2924_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_value_2919_);
lean_ctor_set(v_reuseFailAlloc_2938_, 1, v___x_2921_);
v___x_2929_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
uint32_t v___x_2930_; lean_object* v___x_2931_; 
v___x_2930_ = lasm_js_value_handle(v_value_2919_);
lean_dec(v_value_2919_);
v___x_2931_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_2926_, v___x_2927_, v___x_2929_, v___x_2930_);
lean_dec_ref(v___x_2929_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; uint8_t v___x_2933_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v___x_2931_, 1);
v___x_2933_ = lean_string_validate_utf8(v_a_2932_);
if (v___x_2933_ == 0)
{
lean_object* v___x_2934_; lean_object* v___x_2935_; 
lean_dec(v_a_2932_);
v___x_2934_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_2935_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_2934_);
v___y_2895_ = v_a_2918_;
v_received_2896_ = v___x_2935_;
goto v___jp_2894_;
}
else
{
lean_object* v___x_2936_; 
v___x_2936_ = lean_string_from_utf8_unchecked(v_a_2932_);
v___y_2895_ = v_a_2918_;
v_received_2896_ = v___x_2936_;
goto v___jp_2894_;
}
}
else
{
lean_object* v___x_2937_; 
lean_dec_ref_known(v___x_2931_, 1);
v___x_2937_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v___y_2895_ = v_a_2918_;
v_received_2896_ = v___x_2937_;
goto v___jp_2894_;
}
}
}
}
}
else
{
v___y_2915_ = v_a_2918_;
goto v___jp_2914_;
}
}
v___jp_2942_:
{
lean_object* v___x_2944_; uint8_t v___x_2945_; 
v___x_2944_ = lean_obj_once(&l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1, &l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1_once, _init_l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__1);
v___x_2945_ = lean_int_dec_le(v___x_2944_, v_a_2943_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; 
lean_dec(v_a_2943_);
v___x_2946_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__1___closed__2));
v_a_2918_ = v___x_2946_;
goto v___jp_2917_;
}
else
{
lean_object* v___x_2947_; lean_object* v___x_2948_; 
lean_dec(v_d_2886_);
v___x_2947_ = l_Int_toNat(v_a_2943_);
lean_dec(v_a_2943_);
v___x_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2948_, 0, v___x_2947_);
return v___x_2948_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1___boxed(lean_object* v_context_2955_, lean_object* v_d_2956_, lean_object* v_a_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(v_context_2955_, v_d_2956_);
lean_dec_ref(v_context_2955_);
return v_res_2958_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(lean_object* v_context_2959_, lean_object* v_bytes_2960_){
_start:
{
lean_object* v___x_2962_; 
v___x_2962_ = l_Lasm_JS_Wire_decode(v_bytes_2960_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2964_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2964_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0_spec__1(v_context_2959_, v_a_2963_);
return v___x_2964_;
}
else
{
lean_object* v_a_2965_; lean_object* v___x_2967_; uint8_t v_isShared_2968_; uint8_t v_isSharedCheck_2972_; 
v_a_2965_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_2972_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_2972_ == 0)
{
v___x_2967_ = v___x_2962_;
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
else
{
lean_inc(v_a_2965_);
lean_dec(v___x_2962_);
v___x_2967_ = lean_box(0);
v_isShared_2968_ = v_isSharedCheck_2972_;
goto v_resetjp_2966_;
}
v_resetjp_2966_:
{
lean_object* v___x_2970_; 
if (v_isShared_2968_ == 0)
{
v___x_2970_ = v___x_2967_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2971_; 
v_reuseFailAlloc_2971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2971_, 0, v_a_2965_);
v___x_2970_ = v_reuseFailAlloc_2971_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
return v___x_2970_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0___boxed(lean_object* v_context_2973_, lean_object* v_bytes_2974_, lean_object* v_a_2975_){
_start:
{
lean_object* v_res_2976_; 
v_res_2976_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(v_context_2973_, v_bytes_2974_);
lean_dec_ref(v_bytes_2974_);
lean_dec_ref(v_context_2973_);
return v_res_2976_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(lean_object* v_o_2978_, lean_object* v_key_2979_){
_start:
{
uint32_t v___x_2981_; uint32_t v___x_2982_; uint64_t v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v___x_2981_ = 203;
v___x_2982_ = lasm_js_value_handle(v_o_2978_);
v___x_2983_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
lean_inc_ref(v_key_2979_);
v___x_2984_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2984_, 0, v_key_2979_);
v___x_2985_ = l_Lasm_JS_Wire_encode(v___x_2984_);
lean_dec_ref_known(v___x_2984_, 1);
v___x_2986_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_2987_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_2987_, 0, v_o_2978_);
lean_ctor_set(v___x_2987_, 1, v___x_2986_);
v___x_2988_ = lasm_js_call(v___x_2981_, v___x_2982_, v___x_2983_, v___x_2985_, v___x_2987_);
lean_dec_ref_known(v___x_2987_, 2);
lean_dec_ref(v___x_2985_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
lean_inc(v_a_2989_);
lean_dec_ref_known(v___x_2988_, 1);
v___x_2990_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0));
v___x_2991_ = l_String_quote(v_key_2979_);
v___x_2992_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2991_);
v___x_2993_ = lean_unsigned_to_nat(120u);
v___x_2994_ = lean_unsigned_to_nat(0u);
v___x_2995_ = l_Std_Format_pretty(v___x_2992_, v___x_2993_, v___x_2994_, v___x_2994_);
v___x_2996_ = lean_string_append(v___x_2990_, v___x_2995_);
lean_dec_ref(v___x_2995_);
v___x_2997_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0_spec__0(v___x_2996_, v_a_2989_);
lean_dec(v_a_2989_);
lean_dec_ref(v___x_2996_);
return v___x_2997_;
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec_ref(v_key_2979_);
v_a_2998_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2988_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2988_);
v___x_3000_ = lean_box(0);
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
v_resetjp_2999_:
{
lean_object* v___x_3003_; 
if (v_isShared_3001_ == 0)
{
v___x_3003_ = v___x_3000_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v_a_2998_);
v___x_3003_ = v_reuseFailAlloc_3004_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
return v___x_3003_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___boxed(lean_object* v_o_3006_, lean_object* v_key_3007_, lean_object* v_a_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(v_o_3006_, v_key_3007_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status(lean_object* v_r_3010_){
_start:
{
lean_object* v___x_3012_; lean_object* v___x_3013_; 
v___x_3012_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__0));
v___x_3013_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0(v_r_3010_, v___x_3012_);
return v___x_3013_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_status___boxed(lean_object* v_r_3014_, lean_object* v_a_3015_){
_start:
{
lean_object* v_res_3016_; 
v_res_3016_ = l_Lasm_Web_Response_status(v_r_3014_);
return v_res_3016_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(lean_object* v_context_3017_, lean_object* v_d_3018_){
_start:
{
lean_object* v___y_3021_; lean_object* v___y_3022_; 
if (lean_obj_tag(v_d_3018_) == 2)
{
uint8_t v_b_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v_b_3026_ = lean_ctor_get_uint8(v_d_3018_, 0);
lean_dec_ref_known(v_d_3018_, 0);
v___x_3027_ = lean_box(v_b_3026_);
v___x_3028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3027_);
return v___x_3028_;
}
else
{
lean_object* v___x_3029_; lean_object* v_received_3031_; 
v___x_3029_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_3018_) == 9)
{
lean_object* v_value_3045_; lean_object* v_description_3046_; uint8_t v___x_3047_; 
v_value_3045_ = lean_ctor_get(v_d_3018_, 0);
v_description_3046_ = lean_ctor_get(v_d_3018_, 1);
v___x_3047_ = lean_string_dec_eq(v_description_3046_, v___x_3029_);
if (v___x_3047_ == 0)
{
goto v___jp_3043_;
}
else
{
uint32_t v___x_3048_; uint64_t v___x_3049_; lean_object* v___x_3050_; uint32_t v___x_3051_; lean_object* v___x_3052_; 
lean_inc_n(v_value_3045_, 2);
lean_dec_ref_known(v_d_3018_, 2);
v___x_3048_ = 206;
v___x_3049_ = 0ULL;
v___x_3050_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3050_, 0, v_value_3045_);
lean_ctor_set(v___x_3050_, 1, v___x_3029_);
v___x_3051_ = lasm_js_value_handle(v_value_3045_);
lean_dec(v_value_3045_);
v___x_3052_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3048_, v___x_3049_, v___x_3050_, v___x_3051_);
lean_dec_ref_known(v___x_3050_, 2);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; uint8_t v___x_3054_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref_known(v___x_3052_, 1);
v___x_3054_ = lean_string_validate_utf8(v_a_3053_);
if (v___x_3054_ == 0)
{
lean_object* v___x_3055_; lean_object* v___x_3056_; 
lean_dec(v_a_3053_);
v___x_3055_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_3056_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3055_);
v_received_3031_ = v___x_3056_;
goto v___jp_3030_;
}
else
{
lean_object* v___x_3057_; 
v___x_3057_ = lean_string_from_utf8_unchecked(v_a_3053_);
v_received_3031_ = v___x_3057_;
goto v___jp_3030_;
}
}
else
{
lean_object* v___x_3058_; 
lean_dec_ref_known(v___x_3052_, 1);
v___x_3058_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_3031_ = v___x_3058_;
goto v___jp_3030_;
}
}
}
else
{
goto v___jp_3043_;
}
v___jp_3030_:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; uint8_t v___x_3041_; 
v___x_3032_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_3033_ = lean_string_append(v___x_3032_, v_context_3017_);
v___x_3034_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_3035_ = lean_string_append(v___x_3033_, v___x_3034_);
v___x_3036_ = ((lean_object*)(l_Lasm_JS_readField___at___00Lasm_JS_decodeAs___at___00Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0_spec__0_spec__3___closed__2));
v___x_3037_ = lean_string_append(v___x_3035_, v___x_3036_);
v___x_3038_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_3039_ = lean_string_append(v___x_3037_, v___x_3038_);
v___x_3040_ = lean_string_append(v___x_3039_, v_received_3031_);
lean_dec_ref(v_received_3031_);
v___x_3041_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; 
v___x_3042_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_3021_ = v___x_3040_;
v___y_3022_ = v___x_3042_;
goto v___jp_3020_;
}
else
{
v___y_3021_ = v___x_3040_;
v___y_3022_ = v___x_3029_;
goto v___jp_3020_;
}
}
v___jp_3043_:
{
lean_object* v___x_3044_; 
v___x_3044_ = l_Lasm_JS_Data_describe(v_d_3018_);
v_received_3031_ = v___x_3044_;
goto v___jp_3030_;
}
}
v___jp_3020_:
{
lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; 
v___x_3023_ = lean_string_append(v___y_3021_, v___y_3022_);
v___x_3024_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3023_);
v___x_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3025_, 0, v___x_3024_);
return v___x_3025_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1___boxed(lean_object* v_context_3059_, lean_object* v_d_3060_, lean_object* v_a_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(v_context_3059_, v_d_3060_);
lean_dec_ref(v_context_3059_);
return v_res_3062_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(lean_object* v_context_3063_, lean_object* v_bytes_3064_){
_start:
{
lean_object* v___x_3066_; 
v___x_3066_ = l_Lasm_JS_Wire_decode(v_bytes_3064_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3068_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref_known(v___x_3066_, 1);
v___x_3068_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0_spec__1(v_context_3063_, v_a_3067_);
return v___x_3068_;
}
else
{
lean_object* v_a_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3076_; 
v_a_3069_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3076_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3071_ = v___x_3066_;
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_a_3069_);
lean_dec(v___x_3066_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3076_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_a_3069_);
v___x_3074_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
return v___x_3074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0___boxed(lean_object* v_context_3077_, lean_object* v_bytes_3078_, lean_object* v_a_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(v_context_3077_, v_bytes_3078_);
lean_dec_ref(v_bytes_3078_);
lean_dec_ref(v_context_3077_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(lean_object* v_o_3081_, lean_object* v_key_3082_){
_start:
{
uint32_t v___x_3084_; uint32_t v___x_3085_; uint64_t v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3084_ = 203;
v___x_3085_ = lasm_js_value_handle(v_o_3081_);
v___x_3086_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
lean_inc_ref(v_key_3082_);
v___x_3087_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3087_, 0, v_key_3082_);
v___x_3088_ = l_Lasm_JS_Wire_encode(v___x_3087_);
lean_dec_ref_known(v___x_3087_, 1);
v___x_3089_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3090_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3090_, 0, v_o_3081_);
lean_ctor_set(v___x_3090_, 1, v___x_3089_);
v___x_3091_ = lasm_js_call(v___x_3084_, v___x_3085_, v___x_3086_, v___x_3088_, v___x_3090_);
lean_dec_ref_known(v___x_3090_, 2);
lean_dec_ref(v___x_3088_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v_a_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; 
v_a_3092_ = lean_ctor_get(v___x_3091_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___x_3091_, 1);
v___x_3093_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0));
v___x_3094_ = l_String_quote(v_key_3082_);
v___x_3095_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
v___x_3096_ = lean_unsigned_to_nat(120u);
v___x_3097_ = lean_unsigned_to_nat(0u);
v___x_3098_ = l_Std_Format_pretty(v___x_3095_, v___x_3096_, v___x_3097_, v___x_3097_);
v___x_3099_ = lean_string_append(v___x_3093_, v___x_3098_);
lean_dec_ref(v___x_3098_);
v___x_3100_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0_spec__0(v___x_3099_, v_a_3092_);
lean_dec(v_a_3092_);
lean_dec_ref(v___x_3099_);
return v___x_3100_;
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
lean_dec_ref(v_key_3082_);
v_a_3101_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3091_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3091_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0___boxed(lean_object* v_o_3109_, lean_object* v_key_3110_, lean_object* v_a_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(v_o_3109_, v_key_3110_);
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok(lean_object* v_r_3113_){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = ((lean_object*)(l_Lasm_Web_instFromJSResponseInfo___lam__0___closed__2));
v___x_3116_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_ok_spec__0(v_r_3113_, v___x_3115_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_ok___boxed(lean_object* v_r_3117_, lean_object* v_a_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_Lasm_Web_Response_ok(v_r_3117_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_header_spec__0(lean_object* v_o_3120_, lean_object* v_key_3121_){
_start:
{
uint32_t v___x_3123_; uint32_t v___x_3124_; uint64_t v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3123_ = 203;
v___x_3124_ = lasm_js_value_handle(v_o_3120_);
v___x_3125_ = lean_uint64_once(&l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0, &l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0_once, _init_l_Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1___closed__0);
lean_inc_ref(v_key_3121_);
v___x_3126_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3126_, 0, v_key_3121_);
v___x_3127_ = l_Lasm_JS_Wire_encode(v___x_3126_);
lean_dec_ref_known(v___x_3126_, 1);
v___x_3128_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3129_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3129_, 0, v_o_3120_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = lasm_js_call(v___x_3123_, v___x_3124_, v___x_3125_, v___x_3127_, v___x_3129_);
lean_dec_ref_known(v___x_3129_, 2);
lean_dec_ref(v___x_3127_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v_a_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v_a_3131_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_a_3131_);
lean_dec_ref_known(v___x_3130_, 1);
v___x_3132_ = ((lean_object*)(l_Lasm_JS_Value_get___at___00Lasm_Web_Response_status_spec__0___closed__0));
v___x_3133_ = l_String_quote(v_key_3121_);
v___x_3134_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3133_);
v___x_3135_ = lean_unsigned_to_nat(120u);
v___x_3136_ = lean_unsigned_to_nat(0u);
v___x_3137_ = l_Std_Format_pretty(v___x_3134_, v___x_3135_, v___x_3136_, v___x_3136_);
v___x_3138_ = lean_string_append(v___x_3132_, v___x_3137_);
lean_dec_ref(v___x_3137_);
v___x_3139_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_global_spec__0(v___x_3138_, v_a_3131_);
lean_dec(v_a_3131_);
lean_dec_ref(v___x_3138_);
return v___x_3139_;
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec_ref(v_key_3121_);
v_a_3140_ = lean_ctor_get(v___x_3130_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3130_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3130_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3130_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_get___at___00Lasm_Web_Response_header_spec__0___boxed(lean_object* v_o_3148_, lean_object* v_key_3149_, lean_object* v_a_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_header_spec__0(v_o_3148_, v_key_3149_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3(lean_object* v_context_3153_, lean_object* v_d_3154_){
_start:
{
lean_object* v___y_3160_; lean_object* v___y_3161_; 
switch(lean_obj_tag(v_d_3154_))
{
case 1:
{
goto v___jp_3156_;
}
case 0:
{
goto v___jp_3156_;
}
default: 
{
if (lean_obj_tag(v_d_3154_) == 4)
{
lean_object* v_s_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; 
v_s_3165_ = lean_ctor_get(v_d_3154_, 0);
lean_inc_ref(v_s_3165_);
lean_dec_ref_known(v_d_3154_, 1);
v___x_3166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3166_, 0, v_s_3165_);
v___x_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
return v___x_3167_;
}
else
{
lean_object* v___x_3168_; lean_object* v_received_3170_; 
v___x_3168_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
if (lean_obj_tag(v_d_3154_) == 9)
{
lean_object* v_value_3184_; lean_object* v_description_3185_; uint8_t v___x_3186_; 
v_value_3184_ = lean_ctor_get(v_d_3154_, 0);
v_description_3185_ = lean_ctor_get(v_d_3154_, 1);
v___x_3186_ = lean_string_dec_eq(v_description_3185_, v___x_3168_);
if (v___x_3186_ == 0)
{
goto v___jp_3182_;
}
else
{
uint32_t v___x_3187_; uint64_t v___x_3188_; lean_object* v___x_3189_; uint32_t v___x_3190_; lean_object* v___x_3191_; 
lean_inc_n(v_value_3184_, 2);
lean_dec_ref_known(v_d_3154_, 2);
v___x_3187_ = 206;
v___x_3188_ = 0ULL;
v___x_3189_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3189_, 0, v_value_3184_);
lean_ctor_set(v___x_3189_, 1, v___x_3168_);
v___x_3190_ = lasm_js_value_handle(v_value_3184_);
lean_dec(v_value_3184_);
v___x_3191_ = l___private_Lasm_JS_Core_0__Lasm_JS_hostCallWith(v___x_3187_, v___x_3188_, v___x_3189_, v___x_3190_);
lean_dec_ref_known(v___x_3189_, 2);
if (lean_obj_tag(v___x_3191_) == 0)
{
lean_object* v_a_3192_; uint8_t v___x_3193_; 
v_a_3192_ = lean_ctor_get(v___x_3191_, 0);
lean_inc(v_a_3192_);
lean_dec_ref_known(v___x_3191_, 1);
v___x_3193_ = lean_string_validate_utf8(v_a_3192_);
if (v___x_3193_ == 0)
{
lean_object* v___x_3194_; lean_object* v___x_3195_; 
lean_dec(v_a_3192_);
v___x_3194_ = lean_obj_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__10);
v___x_3195_ = l_panic___at___00IO_FS_withIsolatedStreams___at___00Lean_Elab_Command_wrapAsyncAsSnapshot_spec__1_spec__11(v___x_3194_);
v_received_3170_ = v___x_3195_;
goto v___jp_3169_;
}
else
{
lean_object* v___x_3196_; 
v___x_3196_ = lean_string_from_utf8_unchecked(v_a_3192_);
v_received_3170_ = v___x_3196_;
goto v___jp_3169_;
}
}
else
{
lean_object* v___x_3197_; 
lean_dec_ref_known(v___x_3191_, 1);
v___x_3197_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__11));
v_received_3170_ = v___x_3197_;
goto v___jp_3169_;
}
}
}
else
{
goto v___jp_3182_;
}
v___jp_3169_:
{
lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; uint8_t v___x_3180_; 
v___x_3171_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__0));
v___x_3172_ = lean_string_append(v___x_3171_, v_context_3153_);
v___x_3173_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__1));
v___x_3174_ = lean_string_append(v___x_3172_, v___x_3173_);
v___x_3175_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3___closed__0));
v___x_3176_ = lean_string_append(v___x_3174_, v___x_3175_);
v___x_3177_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__3));
v___x_3178_ = lean_string_append(v___x_3176_, v___x_3177_);
v___x_3179_ = lean_string_append(v___x_3178_, v_received_3170_);
lean_dec_ref(v_received_3170_);
v___x_3180_ = lean_uint8_once(&l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5, &l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5_once, _init_l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__5);
if (v___x_3180_ == 0)
{
lean_object* v___x_3181_; 
v___x_3181_ = ((lean_object*)(l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_callAsync___at___00Lasm_JS_Binding_invokeAsync___at___00Lasm_Web_Raw_fetch_spec__1_spec__1_spec__2___closed__6));
v___y_3160_ = v___x_3179_;
v___y_3161_ = v___x_3181_;
goto v___jp_3159_;
}
else
{
v___y_3160_ = v___x_3179_;
v___y_3161_ = v___x_3168_;
goto v___jp_3159_;
}
}
v___jp_3182_:
{
lean_object* v___x_3183_; 
v___x_3183_ = l_Lasm_JS_Data_describe(v_d_3154_);
v_received_3170_ = v___x_3183_;
goto v___jp_3169_;
}
}
}
}
v___jp_3156_:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3157_ = lean_box(0);
v___x_3158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3157_);
return v___x_3158_;
}
v___jp_3159_:
{
lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; 
v___x_3162_ = lean_string_append(v___y_3160_, v___y_3161_);
v___x_3163_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
v___x_3164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
return v___x_3164_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3___boxed(lean_object* v_context_3198_, lean_object* v_d_3199_, lean_object* v_a_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3(v_context_3198_, v_d_3199_);
lean_dec_ref(v_context_3198_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2(lean_object* v_context_3202_, lean_object* v_bytes_3203_){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = l_Lasm_JS_Wire_decode(v_bytes_3203_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; lean_object* v___x_3207_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3205_, 1);
v___x_3207_ = l_Lasm_JS_decodeAs___at___00__private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2_spec__3(v_context_3202_, v_a_3206_);
return v___x_3207_;
}
else
{
lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
v_a_3208_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3205_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_dec(v___x_3205_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2___boxed(lean_object* v_context_3216_, lean_object* v_bytes_3217_, lean_object* v_a_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2(v_context_3216_, v_bytes_3217_);
lean_dec_ref(v_bytes_3217_);
lean_dec_ref(v_context_3216_);
return v_res_3219_;
}
}
LEAN_EXPORT uint64_t l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__1(uint8_t v_await_3220_, uint64_t v_extra_3221_){
_start:
{
uint64_t v___x_3222_; uint64_t v___y_3224_; 
v___x_3222_ = lean_uint64_once(&l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0, &l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0_once, _init_l_Lasm_JS_Binding_invoke___at___00Lasm_Web_Raw_responseInfo_spec__0___closed__0);
if (v_await_3220_ == 0)
{
uint64_t v___x_3227_; 
v___x_3227_ = 0ULL;
v___y_3224_ = v___x_3227_;
goto v___jp_3223_;
}
else
{
uint64_t v___x_3228_; 
v___x_3228_ = 2ULL;
v___y_3224_ = v___x_3228_;
goto v___jp_3223_;
}
v___jp_3223_:
{
uint64_t v___x_3225_; uint64_t v___x_3226_; 
v___x_3225_ = lean_uint64_lor(v___x_3222_, v___y_3224_);
v___x_3226_ = lean_uint64_lor(v___x_3225_, v_extra_3221_);
return v___x_3226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__1___boxed(lean_object* v_await_3229_, lean_object* v_extra_3230_){
_start:
{
uint8_t v_await_boxed_3231_; uint64_t v_extra_boxed_3232_; uint64_t v_res_3233_; lean_object* v_r_3234_; 
v_await_boxed_3231_ = lean_unbox(v_await_3229_);
v_extra_boxed_3232_ = lean_unbox_uint64(v_extra_3230_);
lean_dec_ref(v_extra_3230_);
v_res_3233_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__1(v_await_boxed_3231_, v_extra_boxed_3232_);
v_r_3234_ = lean_box_uint64(v_res_3233_);
return v_r_3234_;
}
}
static uint64_t _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__0(void){
_start:
{
uint64_t v___x_3235_; uint8_t v___x_3236_; uint64_t v___x_3237_; 
v___x_3235_ = 8ULL;
v___x_3236_ = 0;
v___x_3237_ = l___private_Lasm_JS_Core_0__Lasm_JS_Value_flags___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__1(v___x_3236_, v___x_3235_);
return v___x_3237_;
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1(lean_object* v_o_3239_, lean_object* v_name_3240_, lean_object* v_args_3241_){
_start:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; uint64_t v___x_3246_; lean_object* v___x_3247_; 
v___x_3243_ = ((lean_object*)(l_Lasm_Web_instInhabitedRequestInit_default___closed__2));
v___x_3244_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_3244_, 0, v_o_3239_);
lean_ctor_set(v___x_3244_, 1, v___x_3243_);
lean_inc_ref(v_name_3240_);
v___x_3245_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3245_, 0, v_name_3240_);
v___x_3246_ = lean_uint64_once(&l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__0, &l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__0_once, _init_l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__0);
v___x_3247_ = l_Lasm_JS_Value_invokeRaw(v___x_3244_, v___x_3245_, v_args_3241_, v___x_3246_);
if (lean_obj_tag(v___x_3247_) == 0)
{
lean_object* v_a_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v_a_3248_ = lean_ctor_get(v___x_3247_, 0);
lean_inc(v_a_3248_);
lean_dec_ref_known(v___x_3247_, 1);
v___x_3249_ = ((lean_object*)(l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___closed__1));
v___x_3250_ = lean_string_append(v___x_3249_, v_name_3240_);
lean_dec_ref(v_name_3240_);
v___x_3251_ = l___private_Lasm_JS_Core_0__Lasm_JS_receive___at___00Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1_spec__2(v___x_3250_, v_a_3248_);
lean_dec(v_a_3248_);
lean_dec_ref(v___x_3250_);
return v___x_3251_;
}
else
{
lean_object* v_a_3252_; lean_object* v___x_3254_; uint8_t v_isShared_3255_; uint8_t v_isSharedCheck_3259_; 
lean_dec_ref(v_name_3240_);
v_a_3252_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3259_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3259_ == 0)
{
v___x_3254_ = v___x_3247_;
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
else
{
lean_inc(v_a_3252_);
lean_dec(v___x_3247_);
v___x_3254_ = lean_box(0);
v_isShared_3255_ = v_isSharedCheck_3259_;
goto v_resetjp_3253_;
}
v_resetjp_3253_:
{
lean_object* v___x_3257_; 
if (v_isShared_3255_ == 0)
{
v___x_3257_ = v___x_3254_;
goto v_reusejp_3256_;
}
else
{
lean_object* v_reuseFailAlloc_3258_; 
v_reuseFailAlloc_3258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3258_, 0, v_a_3252_);
v___x_3257_ = v_reuseFailAlloc_3258_;
goto v_reusejp_3256_;
}
v_reusejp_3256_:
{
return v___x_3257_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1___boxed(lean_object* v_o_3260_, lean_object* v_name_3261_, lean_object* v_args_3262_, lean_object* v_a_3263_){
_start:
{
lean_object* v_res_3264_; 
v_res_3264_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1(v_o_3260_, v_name_3261_, v_args_3262_);
return v_res_3264_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header(lean_object* v_r_3266_, lean_object* v_name_3267_){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; 
v___x_3269_ = ((lean_object*)(l_Lasm_Web_instToJSRequestInit___lam__1___closed__1));
v___x_3270_ = l_Lasm_JS_Value_get___at___00Lasm_Web_Response_header_spec__0(v_r_3266_, v___x_3269_);
if (lean_obj_tag(v___x_3270_) == 0)
{
lean_object* v_a_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; 
v_a_3271_ = lean_ctor_get(v___x_3270_, 0);
lean_inc(v_a_3271_);
lean_dec_ref_known(v___x_3270_, 1);
v___x_3272_ = ((lean_object*)(l_Lasm_Web_Response_header___closed__0));
v___x_3273_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3273_, 0, v_name_3267_);
v___x_3274_ = lean_unsigned_to_nat(1u);
v___x_3275_ = lean_mk_empty_array_with_capacity(v___x_3274_);
v___x_3276_ = lean_array_push(v___x_3275_, v___x_3273_);
v___x_3277_ = l_Lasm_JS_Value_callMethod___at___00Lasm_Web_Response_header_spec__1(v_a_3271_, v___x_3272_, v___x_3276_);
return v___x_3277_;
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
lean_dec_ref(v_name_3267_);
v_a_3278_ = lean_ctor_get(v___x_3270_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3270_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3270_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3270_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_header___boxed(lean_object* v_r_3286_, lean_object* v_name_3287_, lean_object* v_a_3288_){
_start:
{
lean_object* v_res_3289_; 
v_res_3289_ = l_Lasm_Web_Response_header(v_r_3286_, v_name_3287_);
return v_res_3289_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text(lean_object* v_r_3290_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = l_Lasm_Web_Raw_responseText(v_r_3290_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_text___boxed(lean_object* v_r_3293_, lean_object* v_a_3294_){
_start:
{
lean_object* v_res_3295_; 
v_res_3295_ = l_Lasm_Web_Response_text(v_r_3293_);
return v_res_3295_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json(lean_object* v_r_3296_){
_start:
{
lean_object* v___x_3298_; 
v___x_3298_ = l_Lasm_Web_Raw_responseJson(v_r_3296_);
return v___x_3298_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_json___boxed(lean_object* v_r_3299_, lean_object* v_a_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Lasm_Web_Response_json(v_r_3299_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes(lean_object* v_r_3302_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l_Lasm_Web_Raw_responseBytes(v_r_3302_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_Response_bytes___boxed(lean_object* v_r_3305_, lean_object* v_a_3306_){
_start:
{
lean_object* v_res_3307_; 
v_res_3307_ = l_Lasm_Web_Response_bytes(v_r_3305_);
return v_res_3307_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0(lean_object* v_a_3308_, lean_object* v_x_3309_){
_start:
{
if (lean_obj_tag(v_x_3309_) == 0)
{
lean_object* v_a_3311_; lean_object* v___x_3313_; uint8_t v_isShared_3314_; uint8_t v_isSharedCheck_3319_; 
lean_dec(v_a_3308_);
v_a_3311_ = lean_ctor_get(v_x_3309_, 0);
v_isSharedCheck_3319_ = !lean_is_exclusive(v_x_3309_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3313_ = v_x_3309_;
v_isShared_3314_ = v_isSharedCheck_3319_;
goto v_resetjp_3312_;
}
else
{
lean_inc(v_a_3311_);
lean_dec(v_x_3309_);
v___x_3313_ = lean_box(0);
v_isShared_3314_ = v_isSharedCheck_3319_;
goto v_resetjp_3312_;
}
v_resetjp_3312_:
{
lean_object* v___x_3316_; 
if (v_isShared_3314_ == 0)
{
v___x_3316_ = v___x_3313_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v_a_3311_);
v___x_3316_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
lean_object* v___x_3317_; 
v___x_3317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3317_, 0, v___x_3316_);
return v___x_3317_;
}
}
}
else
{
lean_object* v___x_3320_; 
lean_dec_ref_known(v_x_3309_, 1);
v___x_3320_ = l_Lasm_Web_Raw_responseText(v_a_3308_);
return v___x_3320_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__0___boxed(lean_object* v_a_3321_, lean_object* v_x_3322_, lean_object* v___y_3323_){
_start:
{
lean_object* v_res_3324_; 
v_res_3324_ = l_Lasm_Web_fetchText___lam__0(v_a_3321_, v_x_3322_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1(lean_object* v_url_3328_, lean_object* v___f_3329_, lean_object* v_a_3330_, lean_object* v_x_3331_){
_start:
{
if (lean_obj_tag(v_x_3331_) == 0)
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3341_; 
lean_dec(v_a_3330_);
lean_dec_ref(v___f_3329_);
v_a_3333_ = lean_ctor_get(v_x_3331_, 0);
v_isSharedCheck_3341_ = !lean_is_exclusive(v_x_3331_);
if (v_isSharedCheck_3341_ == 0)
{
v___x_3335_ = v_x_3331_;
v_isShared_3336_ = v_isSharedCheck_3341_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v_x_3331_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3341_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v___x_3338_; 
if (v_isShared_3336_ == 0)
{
v___x_3338_ = v___x_3335_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3333_);
v___x_3338_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3339_, 0, v___x_3338_);
return v___x_3339_;
}
}
}
else
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3366_; 
v_a_3342_ = lean_ctor_get(v_x_3331_, 0);
v_isSharedCheck_3366_ = !lean_is_exclusive(v_x_3331_);
if (v_isSharedCheck_3366_ == 0)
{
v___x_3344_ = v_x_3331_;
v_isShared_3345_ = v_isSharedCheck_3366_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v_x_3331_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3366_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
uint8_t v_ok_3346_; 
v_ok_3346_ = lean_ctor_get_uint8(v_a_3342_, sizeof(void*)*5);
if (v_ok_3346_ == 0)
{
lean_object* v_status_3347_; lean_object* v_statusText_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3361_; 
lean_dec(v_a_3330_);
v_status_3347_ = lean_ctor_get(v_a_3342_, 0);
lean_inc(v_status_3347_);
v_statusText_3348_ = lean_ctor_get(v_a_3342_, 1);
lean_inc_ref(v_statusText_3348_);
lean_dec(v_a_3342_);
v___x_3349_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3350_ = lean_string_append(v___x_3349_, v_url_3328_);
v___x_3351_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__1));
v___x_3352_ = lean_string_append(v___x_3350_, v___x_3351_);
v___x_3353_ = l_Nat_reprFast(v_status_3347_);
v___x_3354_ = lean_string_append(v___x_3352_, v___x_3353_);
lean_dec_ref(v___x_3353_);
v___x_3355_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__2));
v___x_3356_ = lean_string_append(v___x_3354_, v___x_3355_);
v___x_3357_ = lean_string_append(v___x_3356_, v_statusText_3348_);
lean_dec_ref(v_statusText_3348_);
v___x_3358_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3358_, 0, v___x_3357_);
v___x_3359_ = lean_unsigned_to_nat(0u);
if (v_isShared_3345_ == 0)
{
lean_ctor_set_tag(v___x_3344_, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3358_);
v___x_3361_ = v___x_3344_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v___x_3358_);
v___x_3361_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; 
v___x_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3362_, 0, v___x_3361_);
v___x_3363_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3359_, v_ok_3346_, v___x_3362_, v___f_3329_);
return v___x_3363_;
}
}
else
{
lean_object* v___x_3365_; 
lean_del_object(v___x_3344_);
lean_dec(v_a_3342_);
lean_dec_ref(v___f_3329_);
v___x_3365_ = l_Lasm_Web_Raw_responseText(v_a_3330_);
return v___x_3365_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__1___boxed(lean_object* v_url_3367_, lean_object* v___f_3368_, lean_object* v_a_3369_, lean_object* v_x_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l_Lasm_Web_fetchText___lam__1(v_url_3367_, v___f_3368_, v_a_3369_, v_x_3370_);
lean_dec_ref(v_url_3367_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2(lean_object* v_url_3373_, lean_object* v_x_3374_){
_start:
{
if (lean_obj_tag(v_x_3374_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3378_; uint8_t v_isShared_3379_; uint8_t v_isSharedCheck_3384_; 
lean_dec_ref(v_url_3373_);
v_a_3376_ = lean_ctor_get(v_x_3374_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v_x_3374_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3378_ = v_x_3374_;
v_isShared_3379_ = v_isSharedCheck_3384_;
goto v_resetjp_3377_;
}
else
{
lean_inc(v_a_3376_);
lean_dec(v_x_3374_);
v___x_3378_ = lean_box(0);
v_isShared_3379_ = v_isSharedCheck_3384_;
goto v_resetjp_3377_;
}
v_resetjp_3377_:
{
lean_object* v___x_3381_; 
if (v_isShared_3379_ == 0)
{
v___x_3381_ = v___x_3378_;
goto v_reusejp_3380_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v_a_3376_);
v___x_3381_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3380_;
}
v_reusejp_3380_:
{
lean_object* v___x_3382_; 
v___x_3382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3382_, 0, v___x_3381_);
return v___x_3382_;
}
}
}
else
{
lean_object* v_a_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3406_; 
v_a_3385_ = lean_ctor_get(v_x_3374_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v_x_3374_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3387_ = v_x_3374_;
v_isShared_3388_ = v_isSharedCheck_3406_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_a_3385_);
lean_dec(v_x_3374_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3406_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
lean_object* v___f_3389_; lean_object* v___f_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; lean_object* v_val_3394_; lean_object* v___x_3397_; 
lean_inc_n(v_a_3385_, 2);
v___f_3389_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__0___boxed), 3, 1);
lean_closure_set(v___f_3389_, 0, v_a_3385_);
v___f_3390_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__1___boxed), 5, 3);
lean_closure_set(v___f_3390_, 0, v_url_3373_);
lean_closure_set(v___f_3390_, 1, v___f_3389_);
lean_closure_set(v___f_3390_, 2, v_a_3385_);
v___x_3391_ = lean_unsigned_to_nat(0u);
v___x_3392_ = 0;
v___x_3397_ = l_Lasm_Web_Raw_responseInfo(v_a_3385_);
if (lean_obj_tag(v___x_3397_) == 0)
{
lean_object* v_a_3398_; lean_object* v___x_3400_; 
v_a_3398_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3398_);
lean_dec_ref_known(v___x_3397_, 1);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v_a_3398_);
v___x_3400_ = v___x_3387_;
goto v_reusejp_3399_;
}
else
{
lean_object* v_reuseFailAlloc_3401_; 
v_reuseFailAlloc_3401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3401_, 0, v_a_3398_);
v___x_3400_ = v_reuseFailAlloc_3401_;
goto v_reusejp_3399_;
}
v_reusejp_3399_:
{
v_val_3394_ = v___x_3400_;
goto v___jp_3393_;
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; 
v_a_3402_ = lean_ctor_get(v___x_3397_, 0);
lean_inc(v_a_3402_);
lean_dec_ref_known(v___x_3397_, 1);
if (v_isShared_3388_ == 0)
{
lean_ctor_set_tag(v___x_3387_, 0);
lean_ctor_set(v___x_3387_, 0, v_a_3402_);
v___x_3404_ = v___x_3387_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3402_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
v_val_3394_ = v___x_3404_;
goto v___jp_3393_;
}
}
v___jp_3393_:
{
lean_object* v___x_3395_; lean_object* v___x_3396_; 
v___x_3395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3395_, 0, v_val_3394_);
v___x_3396_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3391_, v___x_3392_, v___x_3395_, v___f_3390_);
return v___x_3396_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___lam__2___boxed(lean_object* v_url_3407_, lean_object* v_x_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lasm_Web_fetchText___lam__2(v_url_3407_, v_x_3408_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText(lean_object* v_url_3411_, lean_object* v_init_3412_){
_start:
{
lean_object* v___f_3414_; lean_object* v___x_3415_; uint8_t v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; 
lean_inc_ref(v_url_3411_);
v___f_3414_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchText___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3414_, 0, v_url_3411_);
v___x_3415_ = lean_unsigned_to_nat(0u);
v___x_3416_ = 0;
v___x_3417_ = l_Lasm_Web_Raw_fetch(v_url_3411_, v_init_3412_);
v___x_3418_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3415_, v___x_3416_, v___x_3417_, v___f_3414_);
return v___x_3418_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchText___boxed(lean_object* v_url_3419_, lean_object* v_init_3420_, lean_object* v_a_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = l_Lasm_Web_fetchText(v_url_3419_, v_init_3420_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0(lean_object* v_url_3423_, lean_object* v_inst_3424_, lean_object* v_x_3425_){
_start:
{
lean_object* v_val_3428_; 
if (lean_obj_tag(v_x_3425_) == 0)
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3438_; 
lean_dec_ref(v_inst_3424_);
v_a_3430_ = lean_ctor_get(v_x_3425_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v_x_3425_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3432_ = v_x_3425_;
v_isShared_3433_ = v_isSharedCheck_3438_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v_x_3425_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3438_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v___x_3435_; 
if (v_isShared_3433_ == 0)
{
v___x_3435_ = v___x_3432_;
goto v_reusejp_3434_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3430_);
v___x_3435_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3434_;
}
v_reusejp_3434_:
{
lean_object* v___x_3436_; 
v___x_3436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3436_, 0, v___x_3435_);
return v___x_3436_;
}
}
}
else
{
lean_object* v_a_3439_; lean_object* v___x_3441_; uint8_t v_isShared_3442_; uint8_t v_isSharedCheck_3454_; 
v_a_3439_ = lean_ctor_get(v_x_3425_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v_x_3425_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3441_ = v_x_3425_;
v_isShared_3442_ = v_isSharedCheck_3454_;
goto v_resetjp_3440_;
}
else
{
lean_inc(v_a_3439_);
lean_dec(v_x_3425_);
v___x_3441_ = lean_box(0);
v_isShared_3442_ = v_isSharedCheck_3454_;
goto v_resetjp_3440_;
}
v_resetjp_3440_:
{
lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3443_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3444_ = lean_string_append(v___x_3443_, v_url_3423_);
v___x_3445_ = l_Lasm_JS_decodeAs___redArg(v_inst_3424_, v___x_3444_, v_a_3439_);
lean_dec_ref(v___x_3444_);
if (lean_obj_tag(v___x_3445_) == 0)
{
lean_object* v_a_3446_; lean_object* v___x_3448_; 
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3445_, 1);
if (v_isShared_3442_ == 0)
{
lean_ctor_set(v___x_3441_, 0, v_a_3446_);
v___x_3448_ = v___x_3441_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_a_3446_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
v_val_3428_ = v___x_3448_;
goto v___jp_3427_;
}
}
else
{
lean_object* v_a_3450_; lean_object* v___x_3452_; 
v_a_3450_ = lean_ctor_get(v___x_3445_, 0);
lean_inc(v_a_3450_);
lean_dec_ref_known(v___x_3445_, 1);
if (v_isShared_3442_ == 0)
{
lean_ctor_set_tag(v___x_3441_, 0);
lean_ctor_set(v___x_3441_, 0, v_a_3450_);
v___x_3452_ = v___x_3441_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_a_3450_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
v_val_3428_ = v___x_3452_;
goto v___jp_3427_;
}
}
}
}
v___jp_3427_:
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3429_, 0, v_val_3428_);
return v___x_3429_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__0___boxed(lean_object* v_url_3455_, lean_object* v_inst_3456_, lean_object* v_x_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v_res_3459_; 
v_res_3459_ = l_Lasm_Web_fetchJson___redArg___lam__0(v_url_3455_, v_inst_3456_, v_x_3457_);
lean_dec_ref(v_url_3455_);
return v_res_3459_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1(lean_object* v_a_3460_, lean_object* v___f_3461_, lean_object* v_____r_3462_){
_start:
{
lean_object* v___x_3464_; uint8_t v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
v___x_3464_ = lean_unsigned_to_nat(0u);
v___x_3465_ = 0;
v___x_3466_ = l_Lasm_Web_Raw_responseJson(v_a_3460_);
v___x_3467_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3464_, v___x_3465_, v___x_3466_, v___f_3461_);
return v___x_3467_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__1___boxed(lean_object* v_a_3468_, lean_object* v___f_3469_, lean_object* v_____r_3470_, lean_object* v___y_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = l_Lasm_Web_fetchJson___redArg___lam__1(v_a_3468_, v___f_3469_, v_____r_3470_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2(lean_object* v___f_3473_, lean_object* v_x_3474_){
_start:
{
if (lean_obj_tag(v_x_3474_) == 0)
{
lean_object* v_a_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3484_; 
lean_dec_ref(v___f_3473_);
v_a_3476_ = lean_ctor_get(v_x_3474_, 0);
v_isSharedCheck_3484_ = !lean_is_exclusive(v_x_3474_);
if (v_isSharedCheck_3484_ == 0)
{
v___x_3478_ = v_x_3474_;
v_isShared_3479_ = v_isSharedCheck_3484_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_a_3476_);
lean_dec(v_x_3474_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3484_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3481_; 
if (v_isShared_3479_ == 0)
{
v___x_3481_ = v___x_3478_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3483_; 
v_reuseFailAlloc_3483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3483_, 0, v_a_3476_);
v___x_3481_ = v_reuseFailAlloc_3483_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
lean_object* v___x_3482_; 
v___x_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3481_);
return v___x_3482_;
}
}
}
else
{
lean_object* v_a_3485_; lean_object* v___x_3486_; 
v_a_3485_ = lean_ctor_get(v_x_3474_, 0);
lean_inc(v_a_3485_);
lean_dec_ref_known(v_x_3474_, 1);
v___x_3486_ = lean_apply_2(v___f_3473_, v_a_3485_, lean_box(0));
return v___x_3486_;
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__2___boxed(lean_object* v___f_3487_, lean_object* v_x_3488_, lean_object* v___y_3489_){
_start:
{
lean_object* v_res_3490_; 
v_res_3490_ = l_Lasm_Web_fetchJson___redArg___lam__2(v___f_3487_, v_x_3488_);
return v_res_3490_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3(lean_object* v_url_3491_, lean_object* v___f_3492_, lean_object* v___f_3493_, lean_object* v_x_3494_){
_start:
{
if (lean_obj_tag(v_x_3494_) == 0)
{
lean_object* v_a_3496_; lean_object* v___x_3498_; uint8_t v_isShared_3499_; uint8_t v_isSharedCheck_3504_; 
lean_dec_ref(v___f_3493_);
lean_dec_ref(v___f_3492_);
v_a_3496_ = lean_ctor_get(v_x_3494_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v_x_3494_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3498_ = v_x_3494_;
v_isShared_3499_ = v_isSharedCheck_3504_;
goto v_resetjp_3497_;
}
else
{
lean_inc(v_a_3496_);
lean_dec(v_x_3494_);
v___x_3498_ = lean_box(0);
v_isShared_3499_ = v_isSharedCheck_3504_;
goto v_resetjp_3497_;
}
v_resetjp_3497_:
{
lean_object* v___x_3501_; 
if (v_isShared_3499_ == 0)
{
v___x_3501_ = v___x_3498_;
goto v_reusejp_3500_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v_a_3496_);
v___x_3501_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3500_;
}
v_reusejp_3500_:
{
lean_object* v___x_3502_; 
v___x_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
return v___x_3502_;
}
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3530_; 
v_a_3505_ = lean_ctor_get(v_x_3494_, 0);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_x_3494_);
if (v_isSharedCheck_3530_ == 0)
{
v___x_3507_ = v_x_3494_;
v_isShared_3508_ = v_isSharedCheck_3530_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v_x_3494_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3530_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
uint8_t v_ok_3509_; 
v_ok_3509_ = lean_ctor_get_uint8(v_a_3505_, sizeof(void*)*5);
if (v_ok_3509_ == 0)
{
lean_object* v_status_3510_; lean_object* v_statusText_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3524_; 
lean_dec_ref(v___f_3493_);
v_status_3510_ = lean_ctor_get(v_a_3505_, 0);
lean_inc(v_status_3510_);
v_statusText_3511_ = lean_ctor_get(v_a_3505_, 1);
lean_inc_ref(v_statusText_3511_);
lean_dec(v_a_3505_);
v___x_3512_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__0));
v___x_3513_ = lean_string_append(v___x_3512_, v_url_3491_);
v___x_3514_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__1));
v___x_3515_ = lean_string_append(v___x_3513_, v___x_3514_);
v___x_3516_ = l_Nat_reprFast(v_status_3510_);
v___x_3517_ = lean_string_append(v___x_3515_, v___x_3516_);
lean_dec_ref(v___x_3516_);
v___x_3518_ = ((lean_object*)(l_Lasm_Web_fetchText___lam__1___closed__2));
v___x_3519_ = lean_string_append(v___x_3517_, v___x_3518_);
v___x_3520_ = lean_string_append(v___x_3519_, v_statusText_3511_);
lean_dec_ref(v_statusText_3511_);
v___x_3521_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3520_);
v___x_3522_ = lean_unsigned_to_nat(0u);
if (v_isShared_3508_ == 0)
{
lean_ctor_set_tag(v___x_3507_, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3521_);
v___x_3524_ = v___x_3507_;
goto v_reusejp_3523_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v___x_3521_);
v___x_3524_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3523_;
}
v_reusejp_3523_:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3524_);
v___x_3526_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3522_, v_ok_3509_, v___x_3525_, v___f_3492_);
return v___x_3526_;
}
}
else
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
lean_del_object(v___x_3507_);
lean_dec(v_a_3505_);
lean_dec_ref(v___f_3492_);
v___x_3528_ = lean_box(0);
v___x_3529_ = lean_apply_2(v___f_3493_, v___x_3528_, lean_box(0));
return v___x_3529_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__3___boxed(lean_object* v_url_3531_, lean_object* v___f_3532_, lean_object* v___f_3533_, lean_object* v_x_3534_, lean_object* v___y_3535_){
_start:
{
lean_object* v_res_3536_; 
v_res_3536_ = l_Lasm_Web_fetchJson___redArg___lam__3(v_url_3531_, v___f_3532_, v___f_3533_, v_x_3534_);
lean_dec_ref(v_url_3531_);
return v_res_3536_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4(lean_object* v___f_3537_, lean_object* v_url_3538_, lean_object* v_x_3539_){
_start:
{
if (lean_obj_tag(v_x_3539_) == 0)
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3549_; 
lean_dec_ref(v_url_3538_);
lean_dec_ref(v___f_3537_);
v_a_3541_ = lean_ctor_get(v_x_3539_, 0);
v_isSharedCheck_3549_ = !lean_is_exclusive(v_x_3539_);
if (v_isSharedCheck_3549_ == 0)
{
v___x_3543_ = v_x_3539_;
v_isShared_3544_ = v_isSharedCheck_3549_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v_x_3539_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3549_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3548_; 
v_reuseFailAlloc_3548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3548_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3548_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
lean_object* v___x_3547_; 
v___x_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3546_);
return v___x_3547_;
}
}
}
else
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3572_; 
v_a_3550_ = lean_ctor_get(v_x_3539_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v_x_3539_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3552_ = v_x_3539_;
v_isShared_3553_ = v_isSharedCheck_3572_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v_x_3539_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3572_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
lean_object* v___f_3554_; lean_object* v___f_3555_; lean_object* v___f_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; lean_object* v_val_3560_; lean_object* v___x_3563_; 
lean_inc(v_a_3550_);
v___f_3554_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_3554_, 0, v_a_3550_);
lean_closure_set(v___f_3554_, 1, v___f_3537_);
lean_inc_ref(v___f_3554_);
v___f_3555_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__2___boxed), 3, 1);
lean_closure_set(v___f_3555_, 0, v___f_3554_);
v___f_3556_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__3___boxed), 5, 3);
lean_closure_set(v___f_3556_, 0, v_url_3538_);
lean_closure_set(v___f_3556_, 1, v___f_3555_);
lean_closure_set(v___f_3556_, 2, v___f_3554_);
v___x_3557_ = lean_unsigned_to_nat(0u);
v___x_3558_ = 0;
v___x_3563_ = l_Lasm_Web_Raw_responseInfo(v_a_3550_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v___x_3566_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref_known(v___x_3563_, 1);
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v_a_3564_);
v___x_3566_ = v___x_3552_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3564_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
v_val_3560_ = v___x_3566_;
goto v___jp_3559_;
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; 
v_a_3568_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3568_);
lean_dec_ref_known(v___x_3563_, 1);
if (v_isShared_3553_ == 0)
{
lean_ctor_set_tag(v___x_3552_, 0);
lean_ctor_set(v___x_3552_, 0, v_a_3568_);
v___x_3570_ = v___x_3552_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3568_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
v_val_3560_ = v___x_3570_;
goto v___jp_3559_;
}
}
v___jp_3559_:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; 
v___x_3561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3561_, 0, v_val_3560_);
v___x_3562_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3557_, v___x_3558_, v___x_3561_, v___f_3556_);
return v___x_3562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___lam__4___boxed(lean_object* v___f_3573_, lean_object* v_url_3574_, lean_object* v_x_3575_, lean_object* v___y_3576_){
_start:
{
lean_object* v_res_3577_; 
v_res_3577_ = l_Lasm_Web_fetchJson___redArg___lam__4(v___f_3573_, v_url_3574_, v_x_3575_);
return v_res_3577_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg(lean_object* v_url_3578_, lean_object* v_init_3579_, lean_object* v_inst_3580_){
_start:
{
lean_object* v___f_3582_; lean_object* v___f_3583_; lean_object* v___x_3584_; uint8_t v___x_3585_; lean_object* v___x_3586_; lean_object* v___x_3587_; 
lean_inc_ref_n(v_url_3578_, 2);
v___f_3582_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_3582_, 0, v_url_3578_);
lean_closure_set(v___f_3582_, 1, v_inst_3580_);
v___f_3583_ = lean_alloc_closure((void*)(l_Lasm_Web_fetchJson___redArg___lam__4___boxed), 4, 2);
lean_closure_set(v___f_3583_, 0, v___f_3582_);
lean_closure_set(v___f_3583_, 1, v_url_3578_);
v___x_3584_ = lean_unsigned_to_nat(0u);
v___x_3585_ = 0;
v___x_3586_ = l_Lasm_Web_Raw_fetch(v_url_3578_, v_init_3579_);
v___x_3587_ = l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg(v___x_3584_, v___x_3585_, v___x_3586_, v___f_3583_);
return v___x_3587_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___redArg___boxed(lean_object* v_url_3588_, lean_object* v_init_3589_, lean_object* v_inst_3590_, lean_object* v_a_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = l_Lasm_Web_fetchJson___redArg(v_url_3588_, v_init_3589_, v_inst_3590_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson(lean_object* v_url_3593_, lean_object* v_init_3594_, lean_object* v_00_u03b1_3595_, lean_object* v_inst_3596_){
_start:
{
lean_object* v___x_3598_; 
v___x_3598_ = l_Lasm_Web_fetchJson___redArg(v_url_3593_, v_init_3594_, v_inst_3596_);
return v___x_3598_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_fetchJson___boxed(lean_object* v_url_3599_, lean_object* v_init_3600_, lean_object* v_00_u03b1_3601_, lean_object* v_inst_3602_, lean_object* v_a_3603_){
_start:
{
lean_object* v_res_3604_; 
v_res_3604_ = l_Lasm_Web_fetchJson(v_url_3599_, v_init_3600_, v_00_u03b1_3601_, v_inst_3602_);
return v_res_3604_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create(){
_start:
{
lean_object* v___x_3606_; 
v___x_3606_ = l_Lasm_Web_Raw_abortController();
return v___x_3606_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_create___boxed(lean_object* v_a_3607_){
_start:
{
lean_object* v_res_3608_; 
v_res_3608_ = l_Lasm_Web_AbortController_create();
return v_res_3608_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal(lean_object* v_c_3609_){
_start:
{
lean_object* v___x_3611_; 
v___x_3611_ = l_Lasm_Web_Raw_abortSignal(v_c_3609_);
return v___x_3611_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_signal___boxed(lean_object* v_c_3612_, lean_object* v_a_3613_){
_start:
{
lean_object* v_res_3614_; 
v_res_3614_ = l_Lasm_Web_AbortController_signal(v_c_3612_);
return v_res_3614_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort(lean_object* v_c_3615_, lean_object* v_reason_3616_){
_start:
{
lean_object* v___x_3618_; 
v___x_3618_ = l_Lasm_Web_Raw_abort(v_c_3615_, v_reason_3616_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortController_abort___boxed(lean_object* v_c_3619_, lean_object* v_reason_3620_, lean_object* v_a_3621_){
_start:
{
lean_object* v_res_3622_; 
v_res_3622_ = l_Lasm_Web_AbortController_abort(v_c_3619_, v_reason_3620_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout(lean_object* v_ms_3623_){
_start:
{
double v___x_3625_; lean_object* v___x_3626_; 
v___x_3625_ = lean_float_of_nat(v_ms_3623_);
v___x_3626_ = l_Lasm_Web_Raw_timeoutSignal(v___x_3625_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l_Lasm_Web_AbortSignal_timeout___boxed(lean_object* v_ms_3627_, lean_object* v_a_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lasm_Web_AbortSignal_timeout(v_ms_3627_);
return v_res_3629_;
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
